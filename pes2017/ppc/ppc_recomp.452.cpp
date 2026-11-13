#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8382CB00"))) PPC_WEAK_FUNC(sub_8382CB00);
PPC_FUNC_IMPL(__imp__sub_8382CB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382CB08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_8382CB28:
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_8382CB2C:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x8382cc00
	if (!cr6.gt) goto loc_8382CC00;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8382cbc8
	if (!cr6.gt) goto loc_8382CBC8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382be40
	ctx.lr = 0x8382CB58;
	sub_8382BE40(ctx, base);
	// srawi r11,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x8382cbac
	if (!cr6.lt) goto loc_8382CBAC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8382cb00
	ctx.lr = 0x8382CBA0;
	sub_8382CB00(ctx, base);
	// ld r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r26,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r26.u64);
	// b 0x8382cb28
	goto loc_8382CB28;
loc_8382CBAC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8382cb00
	ctx.lr = 0x8382CBB8;
	sub_8382CB00(ctx, base);
	// ld r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r27,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r27.u64);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// b 0x8382cb2c
	goto loc_8382CB2C;
loc_8382CBC8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8382cbe8
	if (!cr6.gt) goto loc_8382CBE8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382b510
	ctx.lr = 0x8382CBE8;
	sub_8382B510(ctx, base);
loc_8382CBE8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382caa0
	ctx.lr = 0x8382CBF8;
	sub_8382CAA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382CC00:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x8382cc1c
	if (!cr6.gt) goto loc_8382CC1C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382b638
	ctx.lr = 0x8382CC1C;
	sub_8382B638(ctx, base);
loc_8382CC1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382CC24"))) PPC_WEAK_FUNC(sub_8382CC24);
PPC_FUNC_IMPL(__imp__sub_8382CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382CC28"))) PPC_WEAK_FUNC(sub_8382CC28);
PPC_FUNC_IMPL(__imp__sub_8382CC28) {
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
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cc68
	if (cr6.eq) goto loc_8382CC68;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cc68
	if (cr6.eq) goto loc_8382CC68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382CC68:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382cc74
	if (cr6.eq) goto loc_8382CC74;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8382CC74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cc9c
	if (cr6.eq) goto loc_8382CC9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cc9c
	if (cr6.eq) goto loc_8382CC9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382CC9C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8382ccac
	if (cr6.eq) goto loc_8382CCAC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8382CCAC:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8382cb00
	ctx.lr = 0x8382CCC0;
	sub_8382CB00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382CCD0"))) PPC_WEAK_FUNC(sub_8382CCD0);
PPC_FUNC_IMPL(__imp__sub_8382CCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382CCD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-25304
	ctx.r31.s64 = ctx.r11.s64 + -25304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,553
	ctx.r4.s64 = 553;
	// addi r8,r31,-240
	ctx.r8.s64 = ctx.r31.s64 + -240;
	// addi r6,r31,-356
	ctx.r6.s64 = ctx.r31.s64 + -356;
	// addi r5,r31,-232
	ctx.r5.s64 = ctx.r31.s64 + -232;
	// addi r3,r31,-144
	ctx.r3.s64 = ctx.r31.s64 + -144;
	// bl 0x83102db0
	ctx.lr = 0x8382CD04;
	sub_83102DB0(ctx, base);
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cd44
	if (cr6.eq) goto loc_8382CD44;
	// addi r8,r31,-72
	ctx.r8.s64 = ctx.r31.s64 + -72;
	// addi r6,r31,-64
	ctx.r6.s64 = ctx.r31.s64 + -64;
	// addi r5,r31,-188
	ctx.r5.s64 = ctx.r31.s64 + -188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,556
	ctx.r4.s64 = 556;
	// bl 0x83102db0
	ctx.lr = 0x8382CD2C;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8382bc40
	ctx.lr = 0x8382CD34;
	sub_8382BC40(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x839e63e0
	ctx.lr = 0x8382CD3C;
	sub_839E63E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382CD44:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stb r28,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r28.u8);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8382cc28
	ctx.lr = 0x8382CD88;
	sub_8382CC28(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// beq cr6,0x8382cda0
	if (cr6.eq) goto loc_8382CDA0;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8382CDA0:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8382cdb4
	if (cr6.gt) goto loc_8382CDB4;
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_8382CDB4:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,52(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// beq cr6,0x8382cf2c
	if (cr6.eq) goto loc_8382CF2C;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cde8
	if (cr6.eq) goto loc_8382CDE8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382CDE8:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8382ce00
	if (cr6.gt) goto loc_8382CE00;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8382CE00:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// blt cr6,0x8382cf2c
	if (cr6.lt) goto loc_8382CF2C;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,15
	ctx.r27.s64 = 15;
loc_8382CE28:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382d090
	if (cr6.eq) goto loc_8382D090;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// beq cr6,0x8382ce4c
	if (cr6.eq) goto loc_8382CE4C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8382CE4C:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8382ce60
	if (cr6.gt) goto loc_8382CE60;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8382CE60:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83829908
	ctx.lr = 0x8382CE74;
	sub_83829908(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cefc
	if (cr6.eq) goto loc_8382CEFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8382CE88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8382cefc
	if (!cr6.eq) goto loc_8382CEFC;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8382ceb8
	if (cr6.eq) goto loc_8382CEB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382ceb8
	if (cr6.eq) goto loc_8382CEB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8382CEB8:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8382c9b8
	ctx.lr = 0x8382CECC;
	sub_8382C9B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382ceec
	if (cr6.eq) goto loc_8382CEEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382ceec
	if (cr6.eq) goto loc_8382CEEC;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382CEEC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x83876458
	ctx.lr = 0x8382CEF8;
	sub_83876458(ctx, base);
	// b 0x8382ce28
	goto loc_8382CE28;
loc_8382CEFC:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382cf1c
	if (cr6.lt) goto loc_8382CF1C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x825952b8
	ctx.lr = 0x8382CF1C;
	sub_825952B8(ctx, base);
loc_8382CF1C:
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r28.u8);
	// b 0x8382ce28
	goto loc_8382CE28;
loc_8382CF2C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// beq cr6,0x8382cf3c
	if (cr6.eq) goto loc_8382CF3C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8382CF3C:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8382cf50
	if (cr6.gt) goto loc_8382CF50;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
loc_8382CF50:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83829af0
	ctx.lr = 0x8382CF6C;
	sub_83829AF0(ctx, base);
	// lwz r8,52(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// stw r8,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r8.u32);
	// lwz r7,56(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r7,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r7.u32);
	// bl 0x8344cfa0
	ctx.lr = 0x8382CF84;
	sub_8344CFA0(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8382cfcc
	if (!cr6.gt) goto loc_8382CFCC;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382cfa8
	if (cr6.eq) goto loc_8382CFA8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8382CFA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8382CFA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d747b0
	ctx.lr = 0x8382CFB0;
	sub_82D747B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83829b70
	ctx.lr = 0x8382CFB8;
	sub_83829B70(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// addi r10,r11,-32448
	ctx.r10.s64 = ctx.r11.s64 + -32448;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382CFCC:
	// bge cr6,0x8382cfd8
	if (!cr6.lt) goto loc_8382CFD8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_8382CFD8:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382d030
	if (cr6.eq) goto loc_8382D030;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8382CFEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8382d030
	if (!cr6.eq) goto loc_8382D030;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382d00c
	if (cr6.eq) goto loc_8382D00C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8382D00C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8382D00C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d747b0
	ctx.lr = 0x8382D014;
	sub_82D747B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83829b70
	ctx.lr = 0x8382D01C;
	sub_83829B70(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// addi r10,r11,-32448
	ctx.r10.s64 = ctx.r11.s64 + -32448;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382D030:
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382d058
	if (cr6.eq) goto loc_8382D058;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,129(r30)
	PPC_STORE_U8(ctx.r30.u32 + 129, ctx.r11.u8);
	// bl 0x831021a0
	ctx.lr = 0x8382D048;
	sub_831021A0(ctx, base);
	// lis r4,261
	ctx.r4.s64 = 17104896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x83102a08
	ctx.lr = 0x8382D058;
	sub_83102A08(ctx, base);
loc_8382D058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83829b70
	ctx.lr = 0x8382D060;
	sub_83829B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8382bc40
	ctx.lr = 0x8382D068;
	sub_8382BC40(ctx, base);
	// bl 0x831021a0
	ctx.lr = 0x8382D06C;
	sub_831021A0(ctx, base);
	// lis r4,259
	ctx.r4.s64 = 16973824;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// bl 0x83102a08
	ctx.lr = 0x8382D07C;
	sub_83102A08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83828330
	ctx.lr = 0x8382D084;
	sub_83828330(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// addi r10,r11,-32448
	ctx.r10.s64 = ctx.r11.s64 + -32448;
	// stw r10,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r10.u32);
loc_8382D090:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D098"))) PPC_WEAK_FUNC(sub_8382D098);
PPC_FUNC_IMPL(__imp__sub_8382D098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8382D0A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8382d100
	if (cr6.eq) goto loc_8382D100;
loc_8382D0BC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d0d4
	if (cr6.lt) goto loc_8382D0D4;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8382d0d8
	goto loc_8382D0D8;
loc_8382D0D4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8382D0D8:
	// addi r31,r30,-40
	ctx.r31.s64 = ctx.r30.s64 + -40;
	// lwz r5,-24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x8382D0EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8382d100
	if (cr6.eq) goto loc_8382D100;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x8382d0bc
	if (!cr6.eq) goto loc_8382D0BC;
loc_8382D100:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D110"))) PPC_WEAK_FUNC(sub_8382D110);
PPC_FUNC_IMPL(__imp__sub_8382D110) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382d134
	if (cr6.eq) goto loc_8382D134;
	// bl 0x8259b510
	ctx.lr = 0x8382D134;
	sub_8259B510(ctx, base);
loc_8382D134:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d154
	if (cr6.lt) goto loc_8382D154;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382D154;
	sub_825952B8(ctx, base);
loc_8382D154:
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

__attribute__((alias("__imp__sub_8382D17C"))) PPC_WEAK_FUNC(sub_8382D17C);
PPC_FUNC_IMPL(__imp__sub_8382D17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382D180"))) PPC_WEAK_FUNC(sub_8382D180);
PPC_FUNC_IMPL(__imp__sub_8382D180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8382D188;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382d098
	ctx.lr = 0x8382D1A8;
	sub_8382D098(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8382d1c0
	if (cr6.eq) goto loc_8382D1C0;
	// stb r29,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r29.u8);
loc_8382D1C0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8382d098
	ctx.lr = 0x8382D1D4;
	sub_8382D098(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8382d1e8
	if (cr6.eq) goto loc_8382D1E8;
	// stb r29,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r29.u8);
loc_8382D1E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D1F0"))) PPC_WEAK_FUNC(sub_8382D1F0);
PPC_FUNC_IMPL(__imp__sub_8382D1F0) {
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
	// lis r11,259
	ctx.r11.s64 = 16973824;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,17
	ctx.r9.u64 = ctx.r11.u64 | 17;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8382d224
	if (cr6.eq) goto loc_8382D224;
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
loc_8382D224:
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8382d180
	ctx.lr = 0x8382D22C;
	sub_8382D180(ctx, base);
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

__attribute__((alias("__imp__sub_8382D240"))) PPC_WEAK_FUNC(sub_8382D240);
PPC_FUNC_IMPL(__imp__sub_8382D240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,2796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2796);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8382d180
	sub_8382D180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D25C"))) PPC_WEAK_FUNC(sub_8382D25C);
PPC_FUNC_IMPL(__imp__sub_8382D25C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382D260"))) PPC_WEAK_FUNC(sub_8382D260);
PPC_FUNC_IMPL(__imp__sub_8382D260) {
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
	// bl 0x8259cb28
	ctx.lr = 0x8382D29C;
	sub_8259CB28(ctx, base);
	// lbz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8382D2C0;
	sub_82B64B88(ctx, base);
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

__attribute__((alias("__imp__sub_8382D2DC"))) PPC_WEAK_FUNC(sub_8382D2DC);
PPC_FUNC_IMPL(__imp__sub_8382D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382D2E0"))) PPC_WEAK_FUNC(sub_8382D2E0);
PPC_FUNC_IMPL(__imp__sub_8382D2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8382D2E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8382d260
	ctx.lr = 0x8382D300;
	sub_8382D260(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382D318;
	sub_8259CB28(ctx, base);
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// bl 0x83884cc0
	ctx.lr = 0x8382D330;
	sub_83884CC0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382D344;
	sub_8259CB28(ctx, base);
	// lbz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// bl 0x83884cc0
	ctx.lr = 0x8382D358;
	sub_83884CC0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382d368
	if (cr6.eq) goto loc_8382D368;
	// bl 0x8259b510
	ctx.lr = 0x8382D368;
	sub_8259B510(ctx, base);
loc_8382D368:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d388
	if (cr6.lt) goto loc_8382D388;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382D388;
	sub_825952B8(ctx, base);
loc_8382D388:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D390"))) PPC_WEAK_FUNC(sub_8382D390);
PPC_FUNC_IMPL(__imp__sub_8382D390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8382D398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382D3C4;
	sub_8259CB28(ctx, base);
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82b64b88
	ctx.lr = 0x8382D3E0;
	sub_82B64B88(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382d3f0
	if (cr6.eq) goto loc_8382D3F0;
	// bl 0x8259b510
	ctx.lr = 0x8382D3F0;
	sub_8259B510(ctx, base);
loc_8382D3F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D3FC"))) PPC_WEAK_FUNC(sub_8382D3FC);
PPC_FUNC_IMPL(__imp__sub_8382D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382D400"))) PPC_WEAK_FUNC(sub_8382D400);
PPC_FUNC_IMPL(__imp__sub_8382D400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8382D408;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8382d4d0
	if (cr6.eq) goto loc_8382D4D0;
	// addi r30,r5,36
	ctx.r30.s64 = ctx.r5.s64 + 36;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8382D42C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382D440;
	sub_8259CB28(ctx, base);
	// lbz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// stb r11,-8(r30)
	PPC_STORE_U8(ctx.r30.u32 + -8, ctx.r11.u8);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r10,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r10.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x8382d4b8
	if (cr6.eq) goto loc_8382D4B8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8382d4a0
	if (cr6.eq) goto loc_8382D4A0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8382D478;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8382d4a0
	if (cr6.lt) goto loc_8382D4A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8382D49C;
	sub_8257FB60(ctx, base);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
loc_8382D4A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382d4b0
	if (cr6.eq) goto loc_8382D4B0;
	// bl 0x8259b510
	ctx.lr = 0x8382D4B0;
	sub_8259B510(ctx, base);
loc_8382D4B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8382D4B8:
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x8382d42c
	if (!cr6.eq) goto loc_8382D42C;
loc_8382D4D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D4DC"))) PPC_WEAK_FUNC(sub_8382D4DC);
PPC_FUNC_IMPL(__imp__sub_8382D4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382D4E0"))) PPC_WEAK_FUNC(sub_8382D4E0);
PPC_FUNC_IMPL(__imp__sub_8382D4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8382D4E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8382d550
	if (cr6.eq) goto loc_8382D550;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8382D508:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382d518
	if (cr6.eq) goto loc_8382D518;
	// bl 0x8259b510
	ctx.lr = 0x8382D518;
	sub_8259B510(ctx, base);
loc_8382D518:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d534
	if (cr6.lt) goto loc_8382D534;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// bl 0x825952b8
	ctx.lr = 0x8382D534;
	sub_825952B8(ctx, base);
loc_8382D534:
	// stw r29,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// stw r30,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r30.u32);
	// stb r30,-36(r31)
	PPC_STORE_U8(ctx.r31.u32 + -36, ctx.r30.u8);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x8382d508
	if (!cr6.eq) goto loc_8382D508;
loc_8382D550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D558"))) PPC_WEAK_FUNC(sub_8382D558);
PPC_FUNC_IMPL(__imp__sub_8382D558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8382D560;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8382d658
	if (cr6.eq) goto loc_8382D658;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8382D584:
	// addic. r11,r31,-16
	xer.ca = ctx.r31.u32 > 15;
	ctx.r11.s64 = ctx.r31.s64 + -16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r30,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r30.u8);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// beq 0x8382d640
	if (cr0.eq) goto loc_8382D640;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r30,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8382D5C4;
	sub_8259CB28(ctx, base);
	// lbz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// beq cr6,0x8382d624
	if (cr6.eq) goto loc_8382D624;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8382D5F4;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8382d61c
	if (cr6.lt) goto loc_8382D61C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8382D618;
	sub_8257FB60(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_8382D61C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b510
	ctx.lr = 0x8382D624;
	sub_8259B510(ctx, base);
loc_8382D624:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d640
	if (cr6.lt) goto loc_8382D640;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8382D640;
	sub_825952B8(ctx, base);
loc_8382D640:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bne 0x8382d584
	if (!cr0.eq) goto loc_8382D584;
loc_8382D658:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D660"))) PPC_WEAK_FUNC(sub_8382D660);
PPC_FUNC_IMPL(__imp__sub_8382D660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8382D668;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8382d720
	if (cr6.eq) goto loc_8382D720;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8382D68C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8382d70c
	if (cr6.eq) goto loc_8382D70C;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382D6B4;
	sub_8259CB28(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// beq cr6,0x8382d70c
	if (cr6.eq) goto loc_8382D70C;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8382D6E4;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8382d70c
	if (cr6.lt) goto loc_8382D70C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8382D708;
	sub_8257FB60(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
loc_8382D70C:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r11,r30,-28
	ctx.r11.s64 = ctx.r30.s64 + -28;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x8382d68c
	if (!cr6.eq) goto loc_8382D68C;
loc_8382D720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D72C"))) PPC_WEAK_FUNC(sub_8382D72C);
PPC_FUNC_IMPL(__imp__sub_8382D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382D730"))) PPC_WEAK_FUNC(sub_8382D730);
PPC_FUNC_IMPL(__imp__sub_8382D730) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8382d75c
	if (!cr6.eq) goto loc_8382D75C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8382d878
	goto loc_8382D878;
loc_8382D75C:
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382d824
	if (cr6.eq) goto loc_8382D824;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8382D778;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-24216
	ctx.r31.s64 = ctx.r11.s64 + -24216;
	// bne cr6,0x8382d7dc
	if (!cr6.eq) goto loc_8382D7DC;
	// addi r5,r31,-392
	ctx.r5.s64 = ctx.r31.s64 + -392;
	// bl 0x82ab6970
	ctx.lr = 0x8382D7A0;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d7c4
	if (cr6.lt) goto loc_8382D7C4;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r31,-400
	ctx.r8.s64 = ctx.r31.s64 + -400;
	// addi r5,r31,-372
	ctx.r5.s64 = ctx.r31.s64 + -372;
	// addi r3,r31,-296
	ctx.r3.s64 = ctx.r31.s64 + -296;
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x8382d80c
	goto loc_8382D80C;
loc_8382D7C4:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r31,-400
	ctx.r8.s64 = ctx.r31.s64 + -400;
	// addi r5,r31,-372
	ctx.r5.s64 = ctx.r31.s64 + -372;
	// addi r3,r31,-296
	ctx.r3.s64 = ctx.r31.s64 + -296;
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x8382d80c
	goto loc_8382D80C;
loc_8382D7DC:
	// addi r5,r31,-324
	ctx.r5.s64 = ctx.r31.s64 + -324;
	// bl 0x82ab6970
	ctx.lr = 0x8382D7E4;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d7f8
	if (cr6.lt) goto loc_8382D7F8;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8382d7fc
	goto loc_8382D7FC;
loc_8382D7F8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8382D7FC:
	// addi r8,r31,-216
	ctx.r8.s64 = ctx.r31.s64 + -216;
	// addi r5,r31,-208
	ctx.r5.s64 = ctx.r31.s64 + -208;
	// addi r3,r31,-160
	ctx.r3.s64 = ctx.r31.s64 + -160;
	// li r4,87
	ctx.r4.s64 = 87;
loc_8382D80C:
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x8382D814;
	sub_83102DB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8382D81C;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8382d878
	goto loc_8382D878;
loc_8382D824:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,-24216
	ctx.r31.s64 = ctx.r11.s64 + -24216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,-72
	ctx.r5.s64 = ctx.r31.s64 + -72;
	// bl 0x82ab6970
	ctx.lr = 0x8382D83C;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d850
	if (cr6.lt) goto loc_8382D850;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8382d854
	goto loc_8382D854;
loc_8382D850:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8382D854:
	// addi r8,r31,-80
	ctx.r8.s64 = ctx.r31.s64 + -80;
	// addi r5,r31,-48
	ctx.r5.s64 = ctx.r31.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x83102db0
	ctx.lr = 0x8382D86C;
	sub_83102DB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x8382D874;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8382D878:
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

__attribute__((alias("__imp__sub_8382D890"))) PPC_WEAK_FUNC(sub_8382D890);
PPC_FUNC_IMPL(__imp__sub_8382D890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8382D898;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8382d980
	if (cr6.eq) goto loc_8382D980;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,259
	ctx.r10.s64 = 16973824;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r10,19
	ctx.r26.u64 = ctx.r10.u64 | 19;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
loc_8382D8D0:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// bl 0x8382d730
	ctx.lr = 0x8382D8DC;
	sub_8382D730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382d98c
	if (cr6.eq) goto loc_8382D98C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382d940
	if (cr6.eq) goto loc_8382D940;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382d90c
	if (cr6.eq) goto loc_8382D90C;
	// bl 0x8259b510
	ctx.lr = 0x8382D90C;
	sub_8259B510(ctx, base);
loc_8382D90C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382d928
	if (cr6.lt) goto loc_8382D928;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382D928;
	sub_825952B8(ctx, base);
loc_8382D928:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8382D940:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382d970
	if (!cr6.eq) goto loc_8382D970;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r29,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r29.u8);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x831036c0
	ctx.lr = 0x8382D96C;
	sub_831036C0(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_8382D970:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382d8d0
	if (!cr6.eq) goto loc_8382D8D0;
loc_8382D980:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8382D98C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D998"))) PPC_WEAK_FUNC(sub_8382D998);
PPC_FUNC_IMPL(__imp__sub_8382D998) {
	PPC_FUNC_PROLOGUE();
	// b 0x8382d890
	sub_8382D890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382D99C"))) PPC_WEAK_FUNC(sub_8382D99C);
PPC_FUNC_IMPL(__imp__sub_8382D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382D9A0"))) PPC_WEAK_FUNC(sub_8382D9A0);
PPC_FUNC_IMPL(__imp__sub_8382D9A0) {
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
	// bl 0x8382d890
	ctx.lr = 0x8382D9B0;
	sub_8382D890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382d9c8
	if (cr6.eq) goto loc_8382D9C8;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2796, ctx.r11.u32);
loc_8382D9C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382D9D8"))) PPC_WEAK_FUNC(sub_8382D9D8);
PPC_FUNC_IMPL(__imp__sub_8382D9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8382D9E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8382da20
	if (cr6.eq) goto loc_8382DA20;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8382d400
	ctx.lr = 0x8382DA08;
	sub_8382D400(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8382d4e0
	ctx.lr = 0x8382DA1C;
	sub_8382D4E0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8382DA20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382DA2C"))) PPC_WEAK_FUNC(sub_8382DA2C);
PPC_FUNC_IMPL(__imp__sub_8382DA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382DA30"))) PPC_WEAK_FUNC(sub_8382DA30);
PPC_FUNC_IMPL(__imp__sub_8382DA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8382DA38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r9,r11,-23540
	ctx.r9.s64 = ctx.r11.s64 + -23540;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// stw r28,2796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2796, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382da90
	if (cr6.eq) goto loc_8382DA90;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8382d4e0
	ctx.lr = 0x8382DA80;
	sub_8382D4E0(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382DA90;
	sub_825952B8(ctx, base);
loc_8382DA90:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r30,r29,72
	ctx.r30.s64 = ctx.r29.s64 + 72;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382dacc
	if (cr6.eq) goto loc_8382DACC;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8382d4e0
	ctx.lr = 0x8382DABC;
	sub_8382D4E0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382DACC;
	sub_825952B8(ctx, base);
loc_8382DACC:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// bl 0x831032a0
	ctx.lr = 0x8382DAE0;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382DAE8"))) PPC_WEAK_FUNC(sub_8382DAE8);
PPC_FUNC_IMPL(__imp__sub_8382DAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382DAF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8382db14
	if (!cr6.gt) goto loc_8382DB14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8382DB14;
	sub_831CC150(ctx, base);
loc_8382DB14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,40
	ctx.r27.s64 = 40;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8382dbcc
	if (!cr6.lt) goto loc_8382DBCC;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x8382DB54;
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
	// bl 0x8382d660
	ctx.lr = 0x8382DB78;
	sub_8382D660(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x8382dbac
	if (cr6.eq) goto loc_8382DBAC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8382d4e0
	ctx.lr = 0x8382DB9C;
	sub_8382D4E0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382DBAC;
	sub_825952B8(ctx, base);
loc_8382DBAC:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8382DBCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382DBD4"))) PPC_WEAK_FUNC(sub_8382DBD4);
PPC_FUNC_IMPL(__imp__sub_8382DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382DBD8"))) PPC_WEAK_FUNC(sub_8382DBD8);
PPC_FUNC_IMPL(__imp__sub_8382DBD8) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-24136
	ctx.r4.s64 = ctx.r11.s64 + -24136;
	// bl 0x83103328
	ctx.lr = 0x8382DBF8;
	sub_83103328(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// addi r8,r10,-23540
	ctx.r8.s64 = ctx.r10.s64 + -23540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r31,2796(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2796, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8382DC40"))) PPC_WEAK_FUNC(sub_8382DC40);
PPC_FUNC_IMPL(__imp__sub_8382DC40) {
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
	// bl 0x8382da30
	ctx.lr = 0x8382DC60;
	sub_8382DA30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382dc78
	if (cr6.eq) goto loc_8382DC78;
	// bl 0x82416268
	ctx.lr = 0x8382DC74;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8382DC78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382DC90"))) PPC_WEAK_FUNC(sub_8382DC90);
PPC_FUNC_IMPL(__imp__sub_8382DC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1638
	ctx.r10.s64 = 107347968;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,40
	ctx.r9.s64 = 40;
	// ori r8,r10,26214
	ctx.r8.u64 = ctx.r10.u64 | 26214;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8382dcc4
	if (!cr6.lt) goto loc_8382DCC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8382DCC4:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x8382dcf4
	if (cr6.lt) goto loc_8382DCF4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8382DCF4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8382dd00
	if (!cr6.lt) goto loc_8382DD00;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8382DD00:
	// b 0x8382dae8
	sub_8382DAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382DD04"))) PPC_WEAK_FUNC(sub_8382DD04);
PPC_FUNC_IMPL(__imp__sub_8382DD04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382DD08"))) PPC_WEAK_FUNC(sub_8382DD08);
PPC_FUNC_IMPL(__imp__sub_8382DD08) {
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
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8382dd40
	if (!cr6.lt) goto loc_8382DD40;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8382dd44
	if (!cr6.gt) goto loc_8382DD44;
loc_8382DD40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8382DD44:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382dd9c
	if (cr6.eq) goto loc_8382DD9C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x8382dd78
	if (!cr6.eq) goto loc_8382DD78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8382dc90
	ctx.lr = 0x8382DD78;
	sub_8382DC90(ctx, base);
loc_8382DD78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382ddc8
	if (cr6.eq) goto loc_8382DDC8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8382ddc4
	goto loc_8382DDC4;
loc_8382DD9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382ddb4
	if (!cr6.eq) goto loc_8382DDB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8382dc90
	ctx.lr = 0x8382DDB4;
	sub_8382DC90(ctx, base);
loc_8382DDB4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382ddc8
	if (cr6.eq) goto loc_8382DDC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8382DDC4:
	// bl 0x8382d260
	ctx.lr = 0x8382DDC8;
	sub_8382D260(ctx, base);
loc_8382DDC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382DDEC"))) PPC_WEAK_FUNC(sub_8382DDEC);
PPC_FUNC_IMPL(__imp__sub_8382DDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382DDF0"))) PPC_WEAK_FUNC(sub_8382DDF0);
PPC_FUNC_IMPL(__imp__sub_8382DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8382DDF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,40
	ctx.r29.s64 = 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r11,r11,r29
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x8382de64
	if (!cr6.gt) goto loc_8382DE64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8382dec4
	if (cr6.eq) goto loc_8382DEC4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8382d400
	ctx.lr = 0x8382DE44;
	sub_8382D400(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8382d4e0
	ctx.lr = 0x8382DE58;
	sub_8382D4E0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8382DE64:
	// bge cr6,0x8382dec4
	if (!cr6.lt) goto loc_8382DEC4;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8382dc90
	ctx.lr = 0x8382DE74;
	sub_8382DC90(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// divw r9,r10,r29
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	// subf r4,r9,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r9.s64;
	// bl 0x8382d558
	ctx.lr = 0x8382DE9C;
	sub_8382D558(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// subf r10,r6,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r6.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_8382DEC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382DECC"))) PPC_WEAK_FUNC(sub_8382DECC);
PPC_FUNC_IMPL(__imp__sub_8382DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382DED0"))) PPC_WEAK_FUNC(sub_8382DED0);
PPC_FUNC_IMPL(__imp__sub_8382DED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8382DED8;
	__savegprlr_23(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r25,r3,72
	ctx.r25.s64 = ctx.r3.s64 + 72;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382e1d4
	if (cr6.eq) goto loc_8382E1D4;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382e1d4
	if (cr6.eq) goto loc_8382E1D4;
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382d098
	ctx.lr = 0x8382DF18;
	sub_8382D098(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8382dfb8
	if (!cr6.eq) goto loc_8382DFB8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r31,r11,-23704
	ctx.r31.s64 = ctx.r11.s64 + -23704;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82a6b900
	ctx.lr = 0x8382DF40;
	sub_82A6B900(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382df54
	if (cr6.lt) goto loc_8382DF54;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8382df58
	goto loc_8382DF58;
loc_8382DF54:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8382DF58:
	// addi r8,r31,-224
	ctx.r8.s64 = ctx.r31.s64 + -224;
	// addi r5,r31,-348
	ctx.r5.s64 = ctx.r31.s64 + -348;
	// addi r3,r31,-200
	ctx.r3.s64 = ctx.r31.s64 + -200;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,156
	ctx.r4.s64 = 156;
	// bl 0x83102db0
	ctx.lr = 0x8382DF70;
	sub_83102DB0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x8382DF78;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8382DF8C;
	sub_82B64B88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8382d390
	ctx.lr = 0x8382DF9C;
	sub_8382D390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8382dd08
	ctx.lr = 0x8382DFA8;
	sub_8382DD08(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8382d110
	ctx.lr = 0x8382DFB0;
	sub_8382D110(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// b 0x8382e2c8
	goto loc_8382E2C8;
loc_8382DFB8:
	// lwz r28,76(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bne cr6,0x8382dfcc
	if (!cr6.eq) goto loc_8382DFCC;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// b 0x8382e2c8
	goto loc_8382E2C8;
loc_8382DFCC:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r24,r30,88
	ctx.r24.s64 = ctx.r30.s64 + 88;
	// divw r4,r11,r10
	ctx.r4.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8382ddf0
	ctx.lr = 0x8382DFE4;
	sub_8382DDF0(ctx, base);
	// lwz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r26,r29,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r29.s64;
loc_8382DFF0:
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8382d2e0
	ctx.lr = 0x8382DFFC;
	sub_8382D2E0(ctx, base);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x8382dff0
	if (!cr6.eq) goto loc_8382DFF0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382d9d8
	ctx.lr = 0x8382E01C;
	sub_8382D9D8(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// bl 0x82b517d8
	ctx.lr = 0x8382E02C;
	sub_82B517D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382e070
	if (cr6.eq) goto loc_8382E070;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8382E04C;
	sub_82B64B88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8382d390
	ctx.lr = 0x8382E05C;
	sub_8382D390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8382dd08
	ctx.lr = 0x8382E068;
	sub_8382DD08(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8382d110
	ctx.lr = 0x8382E070;
	sub_8382D110(ctx, base);
loc_8382E070:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a8c428
	ctx.lr = 0x8382E080;
	sub_82A8C428(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r31,r11,-23704
	ctx.r31.s64 = ctx.r11.s64 + -23704;
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// bl 0x82473550
	ctx.lr = 0x8382E094;
	sub_82473550(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82473550
	ctx.lr = 0x8382E09C;
	sub_82473550(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382e0d8
	if (cr6.eq) goto loc_8382E0D8;
loc_8382E0AC:
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x8382E0B8;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d74280
	ctx.lr = 0x8382E0C0;
	sub_82D74280(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// bl 0x82473550
	ctx.lr = 0x8382E0C8;
	sub_82473550(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8382e0ac
	if (!cr6.eq) goto loc_8382E0AC;
loc_8382E0D8:
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x8382E0E4;
	sub_82473550(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382e120
	if (cr6.eq) goto loc_8382E120;
loc_8382E0F4:
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x8382E100;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d74280
	ctx.lr = 0x8382E108;
	sub_82D74280(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x8382E110;
	sub_82473550(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8382e0f4
	if (!cr6.eq) goto loc_8382E0F4;
loc_8382E120:
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a79bf8
	ctx.lr = 0x8382E12C;
	sub_82A79BF8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8382e140
	if (!cr6.lt) goto loc_8382E140;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_8382E140:
	// addi r8,r31,-52
	ctx.r8.s64 = ctx.r31.s64 + -52;
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,205
	ctx.r4.s64 = 205;
	// bl 0x83102db0
	ctx.lr = 0x8382E158;
	sub_83102DB0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e16c
	if (cr6.lt) goto loc_8382E16C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8382E16C;
	sub_82416268(ctx, base);
loc_8382E16C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x8382E188;
	sub_82A79160(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r9,r10,15320
	ctx.r9.s64 = ctx.r10.s64 + 15320;
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// bl 0x831ccf00
	ctx.lr = 0x8382E19C;
	sub_831CCF00(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,259
	ctx.r7.s64 = 16973824;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r29,r8,21716
	ctx.r29.s64 = ctx.r8.s64 + 21716;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// ori r6,r7,18
	ctx.r6.u64 = ctx.r7.u64 | 18;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831036c0
	ctx.lr = 0x8382E1C8;
	sub_831036C0(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// b 0x8382e2c8
	goto loc_8382E2C8;
loc_8382E1D4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r31,r11,-23704
	ctx.r31.s64 = ctx.r11.s64 + -23704;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r31,-408
	ctx.r4.s64 = ctx.r31.s64 + -408;
	// bl 0x82a6b900
	ctx.lr = 0x8382E1EC;
	sub_82A6B900(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e200
	if (cr6.lt) goto loc_8382E200;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8382e204
	goto loc_8382E204;
loc_8382E200:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8382E204:
	// addi r8,r31,-416
	ctx.r8.s64 = ctx.r31.s64 + -416;
	// addi r5,r31,-392
	ctx.r5.s64 = ctx.r31.s64 + -392;
	// addi r3,r31,-304
	ctx.r3.s64 = ctx.r31.s64 + -304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,135
	ctx.r4.s64 = 135;
	// bl 0x83102db0
	ctx.lr = 0x8382E21C;
	sub_83102DB0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e23c
	if (cr6.lt) goto loc_8382E23C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382E23C;
	sub_825952B8(ctx, base);
loc_8382E23C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r30,r23,4
	ctx.r30.s64 = ctx.r23.s64 + 4;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8382E268;
	sub_82B64B88(ctx, base);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x8382E288;
	sub_8259CB28(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x8382E2A0;
	sub_82B64B88(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382e2b0
	if (cr6.eq) goto loc_8382E2B0;
	// bl 0x8259b510
	ctx.lr = 0x8382E2B0;
	sub_8259B510(ctx, base);
loc_8382E2B0:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8382dd08
	ctx.lr = 0x8382E2BC;
	sub_8382DD08(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8382d110
	ctx.lr = 0x8382E2C4;
	sub_8382D110(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8382E2C8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382e2d4
	if (cr6.eq) goto loc_8382E2D4;
	// bl 0x8259b510
	ctx.lr = 0x8382E2D4;
	sub_8259B510(ctx, base);
loc_8382E2D4:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382E2DC"))) PPC_WEAK_FUNC(sub_8382E2DC);
PPC_FUNC_IMPL(__imp__sub_8382E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382E2E0"))) PPC_WEAK_FUNC(sub_8382E2E0);
PPC_FUNC_IMPL(__imp__sub_8382E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382E324"))) PPC_WEAK_FUNC(sub_8382E324);
PPC_FUNC_IMPL(__imp__sub_8382E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382E328"))) PPC_WEAK_FUNC(sub_8382E328);
PPC_FUNC_IMPL(__imp__sub_8382E328) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382E330"))) PPC_WEAK_FUNC(sub_8382E330);
PPC_FUNC_IMPL(__imp__sub_8382E330) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382E338"))) PPC_WEAK_FUNC(sub_8382E338);
PPC_FUNC_IMPL(__imp__sub_8382E338) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382E340"))) PPC_WEAK_FUNC(sub_8382E340);
PPC_FUNC_IMPL(__imp__sub_8382E340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382E348;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,120
	ctx.r29.s64 = ctx.r3.s64 + 120;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e374
	if (cr6.lt) goto loc_8382E374;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382E374;
	sub_825952B8(ctx, base);
loc_8382E374:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r28,92
	ctx.r30.s64 = ctx.r28.s64 + 92;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e3a8
	if (cr6.lt) goto loc_8382E3A8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382E3A8;
	sub_825952B8(ctx, base);
loc_8382E3A8:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e3d4
	if (cr6.lt) goto loc_8382E3D4;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382E3D4;
	sub_825952B8(ctx, base);
loc_8382E3D4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e400
	if (cr6.lt) goto loc_8382E400;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382E400;
	sub_825952B8(ctx, base);
loc_8382E400:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e42c
	if (cr6.lt) goto loc_8382E42C;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382E42C;
	sub_825952B8(ctx, base);
loc_8382E42C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382E440"))) PPC_WEAK_FUNC(sub_8382E440);
PPC_FUNC_IMPL(__imp__sub_8382E440) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_8382E474:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382e474
	if (!cr6.eq) goto loc_8382E474;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382E498;
	sub_8259CC28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382E4BC"))) PPC_WEAK_FUNC(sub_8382E4BC);
PPC_FUNC_IMPL(__imp__sub_8382E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382E4C0"))) PPC_WEAK_FUNC(sub_8382E4C0);
PPC_FUNC_IMPL(__imp__sub_8382E4C0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r10,-23441
	ctx.r30.s64 = ctx.r10.s64 + -23441;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bl 0x8259cc28
	ctx.lr = 0x8382E4F8;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-9
	ctx.r4.s64 = ctx.r30.s64 + -9;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8259cc28
	ctx.lr = 0x8382E508;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8259cc28
	ctx.lr = 0x8382E518;
	sub_8259CC28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x8259cc28
	ctx.lr = 0x8382E530;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8259cc28
	ctx.lr = 0x8382E540;
	sub_8259CC28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382E558"))) PPC_WEAK_FUNC(sub_8382E558);
PPC_FUNC_IMPL(__imp__sub_8382E558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8382E560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r29,r11,-23425
	ctx.r29.s64 = ctx.r11.s64 + -23425;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,-10
	ctx.r4.s64 = ctx.r29.s64 + -10;
	// bl 0x8259cc28
	ctx.lr = 0x8382E598;
	sub_8259CC28(ctx, base);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// addi r4,r29,-9
	ctx.r4.s64 = ctx.r29.s64 + -9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x8382E5B4;
	sub_8259CC28(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x8382E5D0;
	sub_8259CC28(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x8382E5F0;
	sub_8259CC28(ctx, base);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x8382E60C;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382E618"))) PPC_WEAK_FUNC(sub_8382E618);
PPC_FUNC_IMPL(__imp__sub_8382E618) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stb r11,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r11.u8);
	// bl 0x8382e4c0
	ctx.lr = 0x8382E674;
	sub_8382E4C0(ctx, base);
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

__attribute__((alias("__imp__sub_8382E68C"))) PPC_WEAK_FUNC(sub_8382E68C);
PPC_FUNC_IMPL(__imp__sub_8382E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382E690"))) PPC_WEAK_FUNC(sub_8382E690);
PPC_FUNC_IMPL(__imp__sub_8382E690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8382E698;
	__savegprlr_20(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// addi r28,r11,-23401
	ctx.r28.s64 = ctx.r11.s64 + -23401;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r28,-18
	ctx.r4.s64 = ctx.r28.s64 + -18;
	// bl 0x8259cc28
	ctx.lr = 0x8382E6D8;
	sub_8259CC28(ctx, base);
	// stw r29,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r29.u32);
	// stw r31,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r31.u32);
	// addi r25,r27,32
	ctx.r25.s64 = ctx.r27.s64 + 32;
	// stb r31,32(r27)
	PPC_STORE_U8(ctx.r27.u32 + 32, ctx.r31.u8);
	// addi r4,r28,-17
	ctx.r4.s64 = ctx.r28.s64 + -17;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382E6F8;
	sub_8259CC28(ctx, base);
	// stw r29,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r29.u32);
	// stw r31,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r31.u32);
	// addi r24,r27,60
	ctx.r24.s64 = ctx.r27.s64 + 60;
	// stb r31,60(r27)
	PPC_STORE_U8(ctx.r27.u32 + 60, ctx.r31.u8);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382E718;
	sub_8259CC28(ctx, base);
	// stw r31,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r31.u32);
	// stw r29,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r29.u32);
	// addi r23,r27,92
	ctx.r23.s64 = ctx.r27.s64 + 92;
	// stw r31,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r31.u32);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// stb r31,92(r27)
	PPC_STORE_U8(ctx.r27.u32 + 92, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382E73C;
	sub_8259CC28(ctx, base);
	// stw r29,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r29.u32);
	// stw r31,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r31.u32);
	// addi r22,r27,120
	ctx.r22.s64 = ctx.r27.s64 + 120;
	// stb r31,120(r27)
	PPC_STORE_U8(ctx.r27.u32 + 120, ctx.r31.u8);
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382E75C;
	sub_8259CC28(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8382E76C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382e76c
	if (!cr6.eq) goto loc_8382E76C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382E794;
	sub_8259CC28(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bge cr6,0x8382e7ac
	if (!cr6.lt) goto loc_8382E7AC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
loc_8382E7AC:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8382e7c0
	if (!cr6.lt) goto loc_8382E7C0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_8382E7C0:
	// li r20,2
	ctx.r20.s64 = 2;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8382eaac
	if (cr6.eq) goto loc_8382EAAC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8382E7D8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,64
	cr6.compare<uint32_t>(ctx.r8.u32, 64, xer);
	// bne cr6,0x8382e7e8
	if (!cr6.eq) goto loc_8382E7E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8382E7E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8382e7d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8382E7D8;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8382eaac
	if (!cr6.eq) goto loc_8382EAAC;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_8382E7FC:
	// addi r4,r28,61
	ctx.r4.s64 = ctx.r28.s64 + 61;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574d38
	ctx.lr = 0x8382E810;
	sub_82574D38(ctx, base);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cb28
	ctx.lr = 0x8382E830;
	sub_8259CB28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8382E850;
	sub_8259CB28(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e86c
	if (cr6.lt) goto loc_8382E86C;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x8382E86C;
	sub_825952B8(ctx, base);
loc_8382E86C:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r4,r28,65
	ctx.r4.s64 = ctx.r28.s64 + 65;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574d38
	ctx.lr = 0x8382E88C;
	sub_82574D38(ctx, base);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x8382E8AC;
	sub_8259CB28(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8382E8C0;
	sub_8259CB28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382e8dc
	if (cr6.lt) goto loc_8382E8DC;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8382E8DC;
	sub_825952B8(ctx, base);
loc_8382E8DC:
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bge cr6,0x8382e900
	if (!cr6.lt) goto loc_8382E900;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_8382E900:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bge cr6,0x8382e918
	if (!cr6.lt) goto loc_8382E918;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_8382E918:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8382e94c
	if (cr6.eq) goto loc_8382E94C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8382E92C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,64
	cr6.compare<uint32_t>(ctx.r8.u32, 64, xer);
	// bne cr6,0x8382e93c
	if (!cr6.eq) goto loc_8382E93C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8382E93C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8382e92c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8382E92C;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bgt cr6,0x8382ea3c
	if (cr6.gt) goto loc_8382EA3C;
loc_8382E94C:
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8382ea14
	if (cr6.eq) goto loc_8382EA14;
	// bdz 0x8382e9e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8382E9E4;
	// bdz 0x8382e9c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8382E9C4;
	// bdz 0x8382e994
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8382E994;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8382e978
	if (!cr6.lt) goto loc_8382E978;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8382E978:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8382E97C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382e97c
	if (!cr6.eq) goto loc_8382E97C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8382ea68
	goto loc_8382EA68;
loc_8382E994:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8382e9a8
	if (!cr6.lt) goto loc_8382E9A8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8382E9A8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8382E9AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382e9ac
	if (!cr6.eq) goto loc_8382E9AC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x8382ea68
	goto loc_8382EA68;
loc_8382E9C4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8382e9d8
	if (!cr6.lt) goto loc_8382E9D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8382E9D8:
	// bl 0x831d88a0
	ctx.lr = 0x8382E9DC;
	sub_831D88A0(ctx, base);
	// stw r3,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r3.u32);
	// b 0x8382ea78
	goto loc_8382EA78;
loc_8382E9E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8382e9f8
	if (!cr6.lt) goto loc_8382E9F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8382E9F8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8382E9FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382e9fc
	if (!cr6.eq) goto loc_8382E9FC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8382ea68
	goto loc_8382EA68;
loc_8382EA14:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8382ea20
	if (!cr6.lt) goto loc_8382EA20;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8382EA20:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8382EA24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382ea24
	if (!cr6.eq) goto loc_8382EA24;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x8382ea68
	goto loc_8382EA68;
loc_8382EA3C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8382ea50
	if (!cr6.lt) goto loc_8382EA50;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_8382EA50:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8382EA54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382ea54
	if (!cr6.eq) goto loc_8382EA54;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8382EA68:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382EA78;
	sub_8259CC28(ctx, base);
loc_8382EA78:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382ea94
	if (cr6.lt) goto loc_8382EA94;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8382EA94;
	sub_825952B8(ctx, base);
loc_8382EA94:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bne cr6,0x8382e7fc
	if (!cr6.eq) goto loc_8382E7FC;
	// b 0x8382eb24
	goto loc_8382EB24;
loc_8382EAAC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8382EAB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382eab0
	if (!cr6.eq) goto loc_8382EAB0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382EAD8;
	sub_8259CC28(ctx, base);
	// addi r4,r28,69
	ctx.r4.s64 = ctx.r28.s64 + 69;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382EAE8;
	sub_8259CC28(ctx, base);
	// addi r4,r28,77
	ctx.r4.s64 = ctx.r28.s64 + 77;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382EAF8;
	sub_8259CC28(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382EB10;
	sub_8259CC28(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382EB24;
	sub_8259CB28(ctx, base);
loc_8382EB24:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382eb40
	if (cr6.lt) goto loc_8382EB40;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x8382EB40;
	sub_825952B8(ctx, base);
loc_8382EB40:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382EB4C"))) PPC_WEAK_FUNC(sub_8382EB4C);
PPC_FUNC_IMPL(__imp__sub_8382EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382EB50"))) PPC_WEAK_FUNC(sub_8382EB50);
PPC_FUNC_IMPL(__imp__sub_8382EB50) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382EB60"))) PPC_WEAK_FUNC(sub_8382EB60);
PPC_FUNC_IMPL(__imp__sub_8382EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382EB68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
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
	// blt cr6,0x8382ebe0
	if (cr6.lt) goto loc_8382EBE0;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// addi r31,r7,12
	ctx.r31.s64 = ctx.r7.s64 + 12;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382ebb0
	if (cr6.lt) goto loc_8382EBB0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8382EBB0;
	sub_825952B8(ctx, base);
loc_8382EBB0:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382EBD4;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x8382EBE0;
	sub_831CC150(ctx, base);
loc_8382EBE0:
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
	// bne cr6,0x8382ec10
	if (!cr6.eq) goto loc_8382EC10;
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
	// b 0x8382ec50
	goto loc_8382EC50;
loc_8382EC10:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382ec38
	if (cr6.eq) goto loc_8382EC38;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382ec50
	if (!cr6.eq) goto loc_8382EC50;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8382ec50
	goto loc_8382EC50;
loc_8382EC38:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382ec50
	if (!cr6.eq) goto loc_8382EC50;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_8382EC50:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382ed74
	if (!cr6.eq) goto loc_8382ED74;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8382EC6C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382ecf4
	if (!cr6.eq) goto loc_8382ECF4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382ecb4
	if (!cr6.eq) goto loc_8382ECB4;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8382ed64
	goto loc_8382ED64;
loc_8382ECB4:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8382eccc
	if (!cr6.eq) goto loc_8382ECCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x835840a0
	ctx.lr = 0x8382ECCC;
	sub_835840A0(ctx, base);
loc_8382ECCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83b63848
	ctx.lr = 0x8382ECF0;
	sub_83B63848(ctx, base);
	// b 0x8382ed64
	goto loc_8382ED64;
loc_8382ECF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382ed28
	if (!cr6.eq) goto loc_8382ED28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8382ed64
	goto loc_8382ED64;
loc_8382ED28:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8382ed40
	if (!cr6.eq) goto loc_8382ED40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83b63848
	ctx.lr = 0x8382ED40;
	sub_83B63848(ctx, base);
loc_8382ED40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x835840a0
	ctx.lr = 0x8382ED64;
	sub_835840A0(ctx, base);
loc_8382ED64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382ec6c
	if (cr6.eq) goto loc_8382EC6C;
loc_8382ED74:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382ED90"))) PPC_WEAK_FUNC(sub_8382ED90);
PPC_FUNC_IMPL(__imp__sub_8382ED90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8382ED98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r11,45(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8382ee60
	if (!cr6.eq) goto loc_8382EE60;
	// clrlwi r25,r6,24
	ctx.r25.u64 = ctx.r6.u32 & 0xFF;
loc_8382EDC8:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8382ee0c
	if (cr6.eq) goto loc_8382EE0C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382edf0
	if (cr6.lt) goto loc_8382EDF0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8382edf4
	goto loc_8382EDF4;
loc_8382EDF0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8382EDF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8382EE00;
	sub_827A8810(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// b 0x8382ee3c
	goto loc_8382EE3C;
loc_8382EE0C:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382ee24
	if (cr6.lt) goto loc_8382EE24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382EE24:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x8382EE38;
	sub_827A8810(ctx, base);
	// rlwinm r30,r3,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
loc_8382EE3C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382ee50
	if (cr6.eq) goto loc_8382EE50;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8382ee54
	goto loc_8382EE54;
loc_8382EE50:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_8382EE54:
	// lbz r11,45(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382edc8
	if (cr6.eq) goto loc_8382EDC8;
loc_8382EE60:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382eecc
	if (cr6.eq) goto loc_8382EECC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382eec0
	if (!cr6.eq) goto loc_8382EEC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837c06f8
	ctx.lr = 0x8382EE90;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382eb60
	ctx.lr = 0x8382EEA8;
	sub_8382EB60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r24,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r24.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8382EEC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82921010
	ctx.lr = 0x8382EEC8;
	sub_82921010(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8382EECC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382eee8
	if (cr6.lt) goto loc_8382EEE8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8382eeec
	goto loc_8382EEEC;
loc_8382EEE8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8382EEEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8382EEF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382ef3c
	if (!cr6.lt) goto loc_8382EF3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837c06f8
	ctx.lr = 0x8382EF0C;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382eb60
	ctx.lr = 0x8382EF24;
	sub_8382EB60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r24,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r24.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8382EF3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382EF54"))) PPC_WEAK_FUNC(sub_8382EF54);
PPC_FUNC_IMPL(__imp__sub_8382EF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382EF58"))) PPC_WEAK_FUNC(sub_8382EF58);
PPC_FUNC_IMPL(__imp__sub_8382EF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382EF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8382efb4
	if (!cr6.eq) goto loc_8382EFB4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837c06f8
	ctx.lr = 0x8382EF90;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382eb60
	ctx.lr = 0x8382EFA8;
	sub_8382EB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382EFB4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x8382f028
	if (!cr6.eq) goto loc_8382F028;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 + 12;
	// lwz r7,28(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382efdc
	if (cr6.lt) goto loc_8382EFDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382EFDC:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x8382EFF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382f248
	if (!cr6.lt) goto loc_8382F248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8382F000:
	// bl 0x837c06f8
	ctx.lr = 0x8382F004;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382eb60
	ctx.lr = 0x8382F01C;
	sub_8382EB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382F028:
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x8382f0a0
	if (!cr6.eq) goto loc_8382F0A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382f050
	if (cr6.lt) goto loc_8382F050;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8382f054
	goto loc_8382F054;
loc_8382F050:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8382F054:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8382F060;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382f248
	if (!cr6.lt) goto loc_8382F248;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x837c06f8
	ctx.lr = 0x8382F07C;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382eb60
	ctx.lr = 0x8382F094;
	sub_8382EB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382F0A0:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// lwz r7,28(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f0bc
	if (cr6.lt) goto loc_8382F0BC;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8382f0c0
	goto loc_8382F0C0;
loc_8382F0BC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_8382F0C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x8382F0D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382f15c
	if (!cr6.lt) goto loc_8382F15C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82921010
	ctx.lr = 0x8382F0E4;
	sub_82921010(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// blt cr6,0x8382f104
	if (cr6.lt) goto loc_8382F104;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8382f108
	goto loc_8382F108;
loc_8382F104:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8382F108:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x8382F114;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382f15c
	if (!cr6.lt) goto loc_8382F15C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382f000
	if (cr6.eq) goto loc_8382F000;
	// bl 0x837c06f8
	ctx.lr = 0x8382F138;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382eb60
	ctx.lr = 0x8382F150;
	sub_8382EB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382F15C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f174
	if (cr6.lt) goto loc_8382F174;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8382f178
	goto loc_8382F178;
loc_8382F174:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8382F178:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827a8810
	ctx.lr = 0x8382F188;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382f248
	if (!cr6.lt) goto loc_8382F248;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x8382F19C;
	sub_837C05A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x8382f1e0
	if (cr6.eq) goto loc_8382F1E0;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382f1c4
	if (cr6.lt) goto loc_8382F1C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8382F1C4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x8382F1D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8382f248
	if (!cr6.lt) goto loc_8382F248;
loc_8382F1E0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382f220
	if (cr6.eq) goto loc_8382F220;
	// bl 0x837c06f8
	ctx.lr = 0x8382F1FC;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382eb60
	ctx.lr = 0x8382F214;
	sub_8382EB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382F220:
	// bl 0x837c06f8
	ctx.lr = 0x8382F224;
	sub_837C06F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8382eb60
	ctx.lr = 0x8382F23C;
	sub_8382EB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382F248:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8382ed90
	ctx.lr = 0x8382F25C;
	sub_8382ED90(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382F274"))) PPC_WEAK_FUNC(sub_8382F274);
PPC_FUNC_IMPL(__imp__sub_8382F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382F278"))) PPC_WEAK_FUNC(sub_8382F278);
PPC_FUNC_IMPL(__imp__sub_8382F278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8382F280;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8382f318
	if (cr6.eq) goto loc_8382F318;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8382F2A8:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8382F2C8;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8382ef58
	ctx.lr = 0x8382F2E4;
	sub_8382EF58(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382f300
	if (cr6.lt) goto loc_8382F300;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8382F300;
	sub_825952B8(ctx, base);
loc_8382F300:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bne cr6,0x8382f2a8
	if (!cr6.eq) goto loc_8382F2A8;
loc_8382F318:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382F320"))) PPC_WEAK_FUNC(sub_8382F320);
PPC_FUNC_IMPL(__imp__sub_8382F320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382F328;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-23432
	ctx.r31.s64 = ctx.r11.s64 + -23432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,-34
	ctx.r4.s64 = ctx.r31.s64 + -34;
	// bl 0x8382e440
	ctx.lr = 0x8382F350;
	sub_8382E440(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8382e440
	ctx.lr = 0x8382F368;
	sub_8382E440(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8382e440
	ctx.lr = 0x8382F380;
	sub_8382E440(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8382e440
	ctx.lr = 0x8382F398;
	sub_8382E440(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8382e440
	ctx.lr = 0x8382F3B0;
	sub_8382E440(ctx, base);
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8382e440
	ctx.lr = 0x8382F3C8;
	sub_8382E440(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837dfc58
	ctx.lr = 0x8382F3D8;
	sub_837DFC58(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8382f278
	ctx.lr = 0x8382F3E8;
	sub_8382F278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837e78b8
	ctx.lr = 0x8382F3F8;
	sub_837E78B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bne cr6,0x8382f470
	if (!cr6.eq) goto loc_8382F470;
	// bl 0x838164b8
	ctx.lr = 0x8382F418;
	sub_838164B8(ctx, base);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8382F428;
	sub_825952B8(ctx, base);
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// li r28,15
	ctx.r28.s64 = 15;
loc_8382F430:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f450
	if (cr6.lt) goto loc_8382F450;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382F450;
	sub_825952B8(ctx, base);
loc_8382F450:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x8382f430
	if (!cr0.lt) goto loc_8382F430;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8382F470:
	// lwz r26,40(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x838164b8
	ctx.lr = 0x8382F478;
	sub_838164B8(ctx, base);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8382F488;
	sub_825952B8(ctx, base);
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// li r28,15
	ctx.r28.s64 = 15;
loc_8382F490:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f4b0
	if (cr6.lt) goto loc_8382F4B0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x8382F4B0;
	sub_825952B8(ctx, base);
loc_8382F4B0:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x8382f490
	if (!cr0.lt) goto loc_8382F490;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382F4D0"))) PPC_WEAK_FUNC(sub_8382F4D0);
PPC_FUNC_IMPL(__imp__sub_8382F4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8382F4D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// addi r30,r11,-23348
	ctx.r30.s64 = ctx.r11.s64 + -23348;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382F51C;
	sub_8259CC28(ctx, base);
	// stw r29,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r29.u32);
	// stw r31,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r31.u32);
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
	// stb r31,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r31.u8);
	// addi r4,r30,-75
	ctx.r4.s64 = ctx.r30.s64 + -75;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382F53C;
	sub_8259CC28(ctx, base);
	// stw r29,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r29.u32);
	// stw r31,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r31.u32);
	// addi r26,r28,60
	ctx.r26.s64 = ctx.r28.s64 + 60;
	// stb r31,60(r28)
	PPC_STORE_U8(ctx.r28.u32 + 60, ctx.r31.u8);
	// addi r4,r30,-74
	ctx.r4.s64 = ctx.r30.s64 + -74;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382F55C;
	sub_8259CC28(ctx, base);
	// stw r31,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r31.u32);
	// stw r29,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r29.u32);
	// addi r22,r28,92
	ctx.r22.s64 = ctx.r28.s64 + 92;
	// stw r31,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r31.u32);
	// addi r4,r30,-73
	ctx.r4.s64 = ctx.r30.s64 + -73;
	// stb r31,92(r28)
	PPC_STORE_U8(ctx.r28.u32 + 92, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382F580;
	sub_8259CC28(ctx, base);
	// stw r29,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r29.u32);
	// stw r31,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r31.u32);
	// addi r21,r28,120
	ctx.r21.s64 = ctx.r28.s64 + 120;
	// stb r31,120(r28)
	PPC_STORE_U8(ctx.r28.u32 + 120, ctx.r31.u8);
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8259cc28
	ctx.lr = 0x8382F5A0;
	sub_8259CC28(ctx, base);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8382f770
	if (cr6.eq) goto loc_8382F770;
	// addi r7,r30,-68
	ctx.r7.s64 = ctx.r30.s64 + -68;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8382f868
	ctx.lr = 0x8382F5C4;
	sub_8382F868(ctx, base);
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382F5DC;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r19,2
	ctx.r19.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f5fc
	if (cr6.lt) goto loc_8382F5FC;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8382F5FC;
	sub_825952B8(ctx, base);
loc_8382F5FC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r7,r30,-56
	ctx.r7.s64 = ctx.r30.s64 + -56;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8382f868
	ctx.lr = 0x8382F624;
	sub_8382F868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382F638;
	sub_8259CB28(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f654
	if (cr6.lt) goto loc_8382F654;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8382F654;
	sub_825952B8(ctx, base);
loc_8382F654:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r7,r30,-44
	ctx.r7.s64 = ctx.r30.s64 + -44;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8382f868
	ctx.lr = 0x8382F67C;
	sub_8382F868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382F690;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f6ac
	if (cr6.lt) goto loc_8382F6AC;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x8382F6AC;
	sub_825952B8(ctx, base);
loc_8382F6AC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r7,r30,-28
	ctx.r7.s64 = ctx.r30.s64 + -28;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8382f868
	ctx.lr = 0x8382F6D4;
	sub_8382F868(ctx, base);
	// bl 0x8382f320
	ctx.lr = 0x8382F6D8;
	sub_8382F320(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r3,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f6f8
	if (cr6.lt) goto loc_8382F6F8;
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x8382F6F8;
	sub_825952B8(ctx, base);
loc_8382F6F8:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r7,r30,-8
	ctx.r7.s64 = ctx.r30.s64 + -8;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8382f868
	ctx.lr = 0x8382F720;
	sub_8382F868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382F734;
	sub_8259CB28(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f750
	if (cr6.lt) goto loc_8382F750;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x8382F750;
	sub_825952B8(ctx, base);
loc_8382F750:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8382F770;
	sub_8259CB28(ctx, base);
loc_8382F770:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382F77C"))) PPC_WEAK_FUNC(sub_8382F77C);
PPC_FUNC_IMPL(__imp__sub_8382F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382F780"))) PPC_WEAK_FUNC(sub_8382F780);
PPC_FUNC_IMPL(__imp__sub_8382F780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8382F788;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82536d88
	ctx.lr = 0x8382F7A8;
	sub_82536D88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x8382F7B0;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536838
	ctx.lr = 0x8382F7BC;
	sub_82536838(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534998
	ctx.lr = 0x8382F7C4;
	sub_82534998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x82534bd8
	ctx.lr = 0x8382F7E4;
	sub_82534BD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ctx.r30.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382f810
	if (cr6.eq) goto loc_8382F810;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x8382F808;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8382f818
	goto loc_8382F818;
loc_8382F810:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r4,r11,-23186
	ctx.r4.s64 = ctx.r11.s64 + -23186;
loc_8382F818:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_8382F830:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382f830
	if (!cr6.eq) goto loc_8382F830;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382F854;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x8382F85C;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382F868"))) PPC_WEAK_FUNC(sub_8382F868);
PPC_FUNC_IMPL(__imp__sub_8382F868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8382F870;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82536d88
	ctx.lr = 0x8382F894;
	sub_82536D88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x8382F89C;
	sub_82536D88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x8382F8A4;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536838
	ctx.lr = 0x8382F8B0;
	sub_82536838(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534998
	ctx.lr = 0x8382F8B8;
	sub_82534998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x82534bd8
	ctx.lr = 0x8382F8D8;
	sub_82534BD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ctx.r30.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382f904
	if (cr6.eq) goto loc_8382F904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x8382F8FC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8382f90c
	goto loc_8382F90C;
loc_8382F904:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r4,r11,-23185
	ctx.r4.s64 = ctx.r11.s64 + -23185;
loc_8382F90C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_8382F924:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382f924
	if (!cr6.eq) goto loc_8382F924;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382F948;
	sub_8259CC28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x8382F950;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382F95C"))) PPC_WEAK_FUNC(sub_8382F95C);
PPC_FUNC_IMPL(__imp__sub_8382F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382F960"))) PPC_WEAK_FUNC(sub_8382F960);
PPC_FUNC_IMPL(__imp__sub_8382F960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8382F968;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8382F998;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// bl 0x82536d88
	ctx.lr = 0x8382F9B8;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535f60
	ctx.lr = 0x8382F9C4;
	sub_82535F60(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// beq cr6,0x8382fa78
	if (cr6.eq) goto loc_8382FA78;
	// li r28,15
	ctx.r28.s64 = 15;
loc_8382F9E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8382f9f4
	if (cr6.lt) goto loc_8382F9F4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8382f9f8
	goto loc_8382F9F8;
loc_8382F9F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8382F9F8:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
loc_8382FA08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382fa08
	if (!cr6.eq) goto loc_8382FA08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382FA2C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee0780
	ctx.lr = 0x8382FA3C;
	sub_82EE0780(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382fa58
	if (cr6.lt) goto loc_8382FA58;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8382FA58;
	sub_825952B8(ctx, base);
loc_8382FA58:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bne cr6,0x8382f9e0
	if (!cr6.eq) goto loc_8382F9E0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8382FA78:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382fa94
	if (cr6.eq) goto loc_8382FA94;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82450aa8
	ctx.lr = 0x8382FA8C;
	sub_82450AA8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x8382FA94;
	sub_8386D088(ctx, base);
loc_8382FA94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382FAA0"))) PPC_WEAK_FUNC(sub_8382FAA0);
PPC_FUNC_IMPL(__imp__sub_8382FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8382FAA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82536d88
	ctx.lr = 0x8382FAC8;
	sub_82536D88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x8382FAD0;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x8382FADC;
	sub_82536838(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534998
	ctx.lr = 0x8382FAE4;
	sub_82534998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r9,r31
	ctx.r29.u64 = ctx.r9.u64 & ctx.r31.u64;
	// bl 0x82534a38
	ctx.lr = 0x8382FB00;
	sub_82534A38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// li r4,36
	ctx.r4.s64 = 36;
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x82595718
	ctx.lr = 0x8382FB30;
	sub_82595718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// bne cr6,0x8382fbf8
	if (!cr6.eq) goto loc_8382FBF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x825355c0
	ctx.lr = 0x8382FB58;
	sub_825355C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8382fbf8
	if (cr6.eq) goto loc_8382FBF8;
	// li r28,15
	ctx.r28.s64 = 15;
loc_8382FB64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536a70
	ctx.lr = 0x8382FB70;
	sub_82536A70(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8382FB74;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_8382FB88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8382fb88
	if (!cr6.eq) goto loc_8382FB88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8382FBAC;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ee0780
	ctx.lr = 0x8382FBBC;
	sub_82EE0780(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8382fbd8
	if (cr6.lt) goto loc_8382FBD8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x8382FBD8;
	sub_825952B8(ctx, base);
loc_8382FBD8:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x825355c0
	ctx.lr = 0x8382FBF0;
	sub_825355C0(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x8382fb64
	if (cr6.lt) goto loc_8382FB64;
loc_8382FBF8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x8382FC00;
	sub_82535AA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382FC0C"))) PPC_WEAK_FUNC(sub_8382FC0C);
PPC_FUNC_IMPL(__imp__sub_8382FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382FC10"))) PPC_WEAK_FUNC(sub_8382FC10);
PPC_FUNC_IMPL(__imp__sub_8382FC10) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-22852
	ctx.r31.s64 = ctx.r11.s64 + -22852;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82588a88
	ctx.lr = 0x8382FC38;
	sub_82588A88(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// addi r9,r10,-22844
	ctx.r9.s64 = ctx.r10.s64 + -22844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x82588b60
	ctx.lr = 0x8382FC50;
	sub_82588B60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82588b60
	ctx.lr = 0x8382FC5C;
	sub_82588B60(ctx, base);
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

__attribute__((alias("__imp__sub_8382FC78"))) PPC_WEAK_FUNC(sub_8382FC78);
PPC_FUNC_IMPL(__imp__sub_8382FC78) {
	PPC_FUNC_PROLOGUE();
	// b 0x83832a50
	sub_83832A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382FC7C"))) PPC_WEAK_FUNC(sub_8382FC7C);
PPC_FUNC_IMPL(__imp__sub_8382FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382FC80"))) PPC_WEAK_FUNC(sub_8382FC80);
PPC_FUNC_IMPL(__imp__sub_8382FC80) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,2920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2920);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8382fce0
	if (!cr6.eq) goto loc_8382FCE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,2920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2920, ctx.r11.u32);
	// addi r31,r9,2816
	ctx.r31.s64 = ctx.r9.s64 + 2816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8382fc10
	ctx.lr = 0x8382FCBC;
	sub_8382FC10(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-14096
	ctx.r3.s64 = ctx.r8.s64 + -14096;
	// bl 0x831cdcc8
	ctx.lr = 0x8382FCC8;
	sub_831CDCC8(ctx, base);
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
loc_8382FCE0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
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

__attribute__((alias("__imp__sub_8382FCFC"))) PPC_WEAK_FUNC(sub_8382FCFC);
PPC_FUNC_IMPL(__imp__sub_8382FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382FD00"))) PPC_WEAK_FUNC(sub_8382FD00);
PPC_FUNC_IMPL(__imp__sub_8382FD00) {
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
	// bl 0x8382fc80
	ctx.lr = 0x8382FD10;
	sub_8382FC80(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8382FD14;
	sub_83102DB0(ctx, base);
	// bl 0x8382fc80
	ctx.lr = 0x8382FD18;
	sub_8382FC80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382FD28"))) PPC_WEAK_FUNC(sub_8382FD28);
PPC_FUNC_IMPL(__imp__sub_8382FD28) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824a8560
	ctx.lr = 0x8382FD44;
	sub_824A8560(ctx, base);
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

__attribute__((alias("__imp__sub_8382FD58"))) PPC_WEAK_FUNC(sub_8382FD58);
PPC_FUNC_IMPL(__imp__sub_8382FD58) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// bl 0x82573280
	ctx.lr = 0x8382FD84;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382fd98
	if (cr6.eq) goto loc_8382FD98;
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// b 0x8382fdc0
	goto loc_8382FDC0;
loc_8382FD98:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3896
	ctx.r4.s64 = ctx.r11.s64 + 3896;
	// bl 0x82573280
	ctx.lr = 0x8382FDA8;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8382fdbc
	if (cr6.eq) goto loc_8382FDBC;
	// lwz r3,304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// b 0x8382fdc0
	goto loc_8382FDC0;
loc_8382FDBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8382FDC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382FDD8"))) PPC_WEAK_FUNC(sub_8382FDD8);
PPC_FUNC_IMPL(__imp__sub_8382FDD8) {
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
	// bl 0x824fcca8
	ctx.lr = 0x8382FDF0;
	sub_824FCCA8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-22368
	ctx.r10.s64 = ctx.r11.s64 + -22368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8382FE14"))) PPC_WEAK_FUNC(sub_8382FE14);
PPC_FUNC_IMPL(__imp__sub_8382FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382FE18"))) PPC_WEAK_FUNC(sub_8382FE18);
PPC_FUNC_IMPL(__imp__sub_8382FE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-22368
	ctx.r10.s64 = ctx.r11.s64 + -22368;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x824fcd10
	sub_824FCD10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8382FE28"))) PPC_WEAK_FUNC(sub_8382FE28);
PPC_FUNC_IMPL(__imp__sub_8382FE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382fe3c
	if (cr6.eq) goto loc_8382FE3C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8382fe40
	goto loc_8382FE40;
loc_8382FE3C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8382FE40:
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8382fe54
	if (cr6.eq) goto loc_8382FE54;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8382fe58
	goto loc_8382FE58;
loc_8382FE54:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8382FE58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r10,r11,9008
	ctx.r10.s64 = ctx.r11.s64 + 9008;
	// beq cr6,0x8382fe70
	if (cr6.eq) goto loc_8382FE70;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// b 0x8382fe84
	goto loc_8382FE84;
loc_8382FE70:
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8382FE84:
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8382fe98
	if (cr6.eq) goto loc_8382FE98;
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
	// b 0x8382feac
	goto loc_8382FEAC;
loc_8382FE98:
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8382FEAC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v63,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r10,-24912
	ctx.r9.s64 = ctx.r10.s64 + -24912;
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v0,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8382FED4"))) PPC_WEAK_FUNC(sub_8382FED4);
PPC_FUNC_IMPL(__imp__sub_8382FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8382FED8"))) PPC_WEAK_FUNC(sub_8382FED8);
PPC_FUNC_IMPL(__imp__sub_8382FED8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,3160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3160);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8382ff4c
	if (!cr6.eq) goto loc_8382FF4C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,3160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3160, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,2928
	ctx.r31.s64 = ctx.r9.s64 + 2928;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-22748
	ctx.r5.s64 = ctx.r8.s64 + -22748;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x82477fc8
	ctx.lr = 0x8382FF28;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-14000
	ctx.r3.s64 = ctx.r7.s64 + -14000;
	// bl 0x831cdcc8
	ctx.lr = 0x8382FF34;
	sub_831CDCC8(ctx, base);
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
loc_8382FF4C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,2928
	ctx.r3.s64 = ctx.r11.s64 + 2928;
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

__attribute__((alias("__imp__sub_8382FF68"))) PPC_WEAK_FUNC(sub_8382FF68);
PPC_FUNC_IMPL(__imp__sub_8382FF68) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,3400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3400);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8382ffdc
	if (!cr6.eq) goto loc_8382FFDC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,3400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3400, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,3168
	ctx.r31.s64 = ctx.r9.s64 + 3168;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-22684
	ctx.r5.s64 = ctx.r8.s64 + -22684;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82477fc8
	ctx.lr = 0x8382FFB8;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-13984
	ctx.r3.s64 = ctx.r7.s64 + -13984;
	// bl 0x831cdcc8
	ctx.lr = 0x8382FFC4;
	sub_831CDCC8(ctx, base);
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
loc_8382FFDC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,3168
	ctx.r3.s64 = ctx.r11.s64 + 3168;
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

__attribute__((alias("__imp__sub_8382FFF8"))) PPC_WEAK_FUNC(sub_8382FFF8);
PPC_FUNC_IMPL(__imp__sub_8382FFF8) {
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
	// bl 0x824b51f8
	ctx.lr = 0x83830010;
	sub_824B51F8(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22252
	ctx.r9.s64 = ctx.r10.s64 + -22252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83830040"))) PPC_WEAK_FUNC(sub_83830040);
PPC_FUNC_IMPL(__imp__sub_83830040) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83830068;
	sub_82572FA0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83830074;
	sub_82572FA0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83830080;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x83830088;
	sub_82467108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838300a0
	if (cr6.eq) goto loc_838300A0;
	// bl 0x8248b818
	ctx.lr = 0x8383009C;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838300A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838300B8"))) PPC_WEAK_FUNC(sub_838300B8);
PPC_FUNC_IMPL(__imp__sub_838300B8) {
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
	// bl 0x824b5248
	ctx.lr = 0x838300D0;
	sub_824B5248(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22252
	ctx.r9.s64 = ctx.r10.s64 + -22252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83830100"))) PPC_WEAK_FUNC(sub_83830100);
PPC_FUNC_IMPL(__imp__sub_83830100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83830108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x824b5298
	ctx.lr = 0x83830118;
	sub_824B5298(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,-22252
	ctx.r10.s64 = ctx.r11.s64 + -22252;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8247c740
	ctx.lr = 0x83830138;
	sub_8247C740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83830144;
	sub_82572FA0(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x8247c740
	ctx.lr = 0x83830158;
	sub_8247C740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83830164;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83830170"))) PPC_WEAK_FUNC(sub_83830170);
PPC_FUNC_IMPL(__imp__sub_83830170) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,3640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838301e4
	if (!cr6.eq) goto loc_838301E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,3640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3640, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,3408
	ctx.r31.s64 = ctx.r9.s64 + 3408;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-22632
	ctx.r5.s64 = ctx.r8.s64 + -22632;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,320
	ctx.r4.s64 = 320;
	// bl 0x82477fc8
	ctx.lr = 0x838301C0;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-13968
	ctx.r3.s64 = ctx.r7.s64 + -13968;
	// bl 0x831cdcc8
	ctx.lr = 0x838301CC;
	sub_831CDCC8(ctx, base);
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
loc_838301E4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,3408
	ctx.r3.s64 = ctx.r11.s64 + 3408;
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

__attribute__((alias("__imp__sub_83830200"))) PPC_WEAK_FUNC(sub_83830200);
PPC_FUNC_IMPL(__imp__sub_83830200) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83830234
	if (cr6.lt) goto loc_83830234;
	// bne cr6,0x83830250
	if (!cr6.eq) goto loc_83830250;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x83830240
	goto loc_83830240;
loc_83830234:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_83830240:
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383024C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83830250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83830260"))) PPC_WEAK_FUNC(sub_83830260);
PPC_FUNC_IMPL(__imp__sub_83830260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83830268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8383028C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838302b4
	if (cr6.eq) goto loc_838302B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824fcca8
	ctx.lr = 0x838302A0;
	sub_824FCCA8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-22368
	ctx.r10.s64 = ctx.r11.s64 + -22368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x838302b8
	goto loc_838302B8;
loc_838302B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_838302B8:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x838302C4;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838302D0"))) PPC_WEAK_FUNC(sub_838302D0);
PPC_FUNC_IMPL(__imp__sub_838302D0) {
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
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d458
	ctx.lr = 0x838302F8;
	sub_8253D458(ctx, base);
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x83830330
	if (!cr6.lt) goto loc_83830330;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d458
	ctx.lr = 0x83830310;
	sub_8253D458(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8248b9b8
	ctx.lr = 0x83830328;
	sub_8248B9B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83830334
	goto loc_83830334;
loc_83830330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83830334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8383034C"))) PPC_WEAK_FUNC(sub_8383034C);
PPC_FUNC_IMPL(__imp__sub_8383034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830350"))) PPC_WEAK_FUNC(sub_83830350);
PPC_FUNC_IMPL(__imp__sub_83830350) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,3880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3880);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838303c4
	if (!cr6.eq) goto loc_838303C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,3880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3880, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,3648
	ctx.r31.s64 = ctx.r9.s64 + 3648;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-22552
	ctx.r5.s64 = ctx.r8.s64 + -22552;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82477fc8
	ctx.lr = 0x838303A0;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-13952
	ctx.r3.s64 = ctx.r7.s64 + -13952;
	// bl 0x831cdcc8
	ctx.lr = 0x838303AC;
	sub_831CDCC8(ctx, base);
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
loc_838303C4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
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

__attribute__((alias("__imp__sub_838303E0"))) PPC_WEAK_FUNC(sub_838303E0);
PPC_FUNC_IMPL(__imp__sub_838303E0) {
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
	// bl 0x83830350
	ctx.lr = 0x838303F8;
	sub_83830350(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-22516
	ctx.r31.s64 = ctx.r11.s64 + -22516;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83830414;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83830420;
	sub_8246BE10(ctx, base);
	// bl 0x824fd170
	ctx.lr = 0x83830424;
	sub_824FD170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x83830430;
	sub_8246BE18(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x8383043C;
	sub_8246C3A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x8383044C;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83830454;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8383046c
	if (cr6.eq) goto loc_8383046C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8383046C;
	sub_82573040(ctx, base);
loc_8383046C:
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

__attribute__((alias("__imp__sub_83830484"))) PPC_WEAK_FUNC(sub_83830484);
PPC_FUNC_IMPL(__imp__sub_83830484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830488"))) PPC_WEAK_FUNC(sub_83830488);
PPC_FUNC_IMPL(__imp__sub_83830488) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-22368
	ctx.r10.s64 = ctx.r11.s64 + -22368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824fcd10
	ctx.lr = 0x838304B4;
	sub_824FCD10(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838304d4
	if (cr6.eq) goto loc_838304D4;
	// bl 0x82595188
	ctx.lr = 0x838304C4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x838304D4;
	sub_825952B8(ctx, base);
loc_838304D4:
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

__attribute__((alias("__imp__sub_838304F0"))) PPC_WEAK_FUNC(sub_838304F0);
PPC_FUNC_IMPL(__imp__sub_838304F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83830504
	if (cr6.eq) goto loc_83830504;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83830100
	sub_83830100(ctx, base);
	return;
loc_83830504:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8383050C"))) PPC_WEAK_FUNC(sub_8383050C);
PPC_FUNC_IMPL(__imp__sub_8383050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830510"))) PPC_WEAK_FUNC(sub_83830510);
PPC_FUNC_IMPL(__imp__sub_83830510) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83830564
	if (cr6.eq) goto loc_83830564;
	// bl 0x8382ff68
	ctx.lr = 0x83830534;
	sub_8382FF68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383054C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x83830554;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83830568
	if (!cr6.eq) goto loc_83830568;
loc_83830564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83830568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83830580"))) PPC_WEAK_FUNC(sub_83830580);
PPC_FUNC_IMPL(__imp__sub_83830580) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838305d4
	if (cr6.eq) goto loc_838305D4;
	// bl 0x82526740
	ctx.lr = 0x838305A4;
	sub_82526740(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838305BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x838305C4;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838305d8
	if (!cr6.eq) goto loc_838305D8;
loc_838305D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838305D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838305F0"))) PPC_WEAK_FUNC(sub_838305F0);
PPC_FUNC_IMPL(__imp__sub_838305F0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83830644
	if (cr6.eq) goto loc_83830644;
	// bl 0x8382fed8
	ctx.lr = 0x83830614;
	sub_8382FED8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383062C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x83830634;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83830648
	if (!cr6.eq) goto loc_83830648;
loc_83830644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83830648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83830660"))) PPC_WEAK_FUNC(sub_83830660);
PPC_FUNC_IMPL(__imp__sub_83830660) {
	PPC_FUNC_PROLOGUE();
	// b 0x8382ff68
	sub_8382FF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83830664"))) PPC_WEAK_FUNC(sub_83830664);
PPC_FUNC_IMPL(__imp__sub_83830664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830668"))) PPC_WEAK_FUNC(sub_83830668);
PPC_FUNC_IMPL(__imp__sub_83830668) {
	PPC_FUNC_PROLOGUE();
	// b 0x83830350
	sub_83830350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8383066C"))) PPC_WEAK_FUNC(sub_8383066C);
PPC_FUNC_IMPL(__imp__sub_8383066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830670"))) PPC_WEAK_FUNC(sub_83830670);
PPC_FUNC_IMPL(__imp__sub_83830670) {
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
	// bl 0x8382ff68
	ctx.lr = 0x8383068C;
	sub_8382FF68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x838306A0;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838306d4
	if (cr6.eq) goto loc_838306D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824b5248
	ctx.lr = 0x838306B4;
	sub_824B5248(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22252
	ctx.r9.s64 = ctx.r10.s64 + -22252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x838306d8
	goto loc_838306D8;
loc_838306D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838306D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838306F0"))) PPC_WEAK_FUNC(sub_838306F0);
PPC_FUNC_IMPL(__imp__sub_838306F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838306F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x83830718;
	sub_8241F040(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8382fed8
	ctx.lr = 0x83830720;
	sub_8382FED8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83830738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8246be58
	ctx.lr = 0x83830740;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r11,-22576
	ctx.r30.s64 = ctx.r11.s64 + -22576;
	// beq cr6,0x8383080c
	if (cr6.eq) goto loc_8383080C;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f0a0
	ctx.lr = 0x83830760;
	sub_8241F0A0(ctx, base);
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83830770;
	sub_8241F040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bl 0x8241e628
	ctx.lr = 0x83830784;
	sub_8241E628(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8241e628
	ctx.lr = 0x83830794;
	sub_8241E628(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x8248b880
	ctx.lr = 0x838307B0;
	sub_8248B880(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8241d6c0
	ctx.lr = 0x838307B8;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241d6c0
	ctx.lr = 0x838307C0;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x838307CC;
	sub_8241F040(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82573c50
	ctx.lr = 0x838307D4;
	sub_82573C50(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824514a0
	ctx.lr = 0x838307E0;
	sub_824514A0(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241d6c0
	ctx.lr = 0x838307E8;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8241d6c0
	ctx.lr = 0x838307F0;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8241d6c0
	ctx.lr = 0x838307F8;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82573c50
	ctx.lr = 0x83830800;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8241f040
	ctx.lr = 0x8383080C;
	sub_8241F040(ctx, base);
loc_8383080C:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8382ff68
	ctx.lr = 0x83830814;
	sub_8382FF68(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383082C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8246be58
	ctx.lr = 0x83830834;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838308f8
	if (cr6.eq) goto loc_838308F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241f0a0
	ctx.lr = 0x8383084C;
	sub_8241F0A0(ctx, base);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x8383085C;
	sub_8241F040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8241e628
	ctx.lr = 0x83830870;
	sub_8241E628(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241e628
	ctx.lr = 0x83830880;
	sub_8241E628(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x8248b880
	ctx.lr = 0x8383089C;
	sub_8248B880(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241d6c0
	ctx.lr = 0x838308A4;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8241d6c0
	ctx.lr = 0x838308AC;
	sub_8241D6C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x838308B8;
	sub_8241F040(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82573c50
	ctx.lr = 0x838308C0;
	sub_82573C50(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824514a0
	ctx.lr = 0x838308CC;
	sub_824514A0(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8241d6c0
	ctx.lr = 0x838308D4;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8241d6c0
	ctx.lr = 0x838308DC;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8241d6c0
	ctx.lr = 0x838308E4;
	sub_8241D6C0(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82573c50
	ctx.lr = 0x838308EC;
	sub_82573C50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8241f040
	ctx.lr = 0x838308F8;
	sub_8241F040(ctx, base);
loc_838308F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824feb18
	ctx.lr = 0x83830904;
	sub_824FEB18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83830910;
	sub_8241F040(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83830918"))) PPC_WEAK_FUNC(sub_83830918);
PPC_FUNC_IMPL(__imp__sub_83830918) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b9b0
	ctx.lr = 0x83830934;
	sub_8241B9B0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83830510
	ctx.lr = 0x8383093C;
	sub_83830510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83830950;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x83830960;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8383096C;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83830984"))) PPC_WEAK_FUNC(sub_83830984);
PPC_FUNC_IMPL(__imp__sub_83830984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830988"))) PPC_WEAK_FUNC(sub_83830988);
PPC_FUNC_IMPL(__imp__sub_83830988) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838309dc
	if (cr6.eq) goto loc_838309DC;
	// bl 0x83830170
	ctx.lr = 0x838309AC;
	sub_83830170(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838309C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8246be58
	ctx.lr = 0x838309CC;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838309e0
	if (!cr6.eq) goto loc_838309E0;
loc_838309DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838309E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838309F8"))) PPC_WEAK_FUNC(sub_838309F8);
PPC_FUNC_IMPL(__imp__sub_838309F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8382fed8
	sub_8382FED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838309FC"))) PPC_WEAK_FUNC(sub_838309FC);
PPC_FUNC_IMPL(__imp__sub_838309FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830A00"))) PPC_WEAK_FUNC(sub_83830A00);
PPC_FUNC_IMPL(__imp__sub_83830A00) {
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
	// bl 0x824b5248
	ctx.lr = 0x83830A1C;
	sub_824B5248(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-22220
	ctx.r10.s64 = ctx.r11.s64 + -22220;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// bl 0x824a6418
	ctx.lr = 0x83830A44;
	sub_824A6418(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824a6418
	ctx.lr = 0x83830A5C;
	sub_824A6418(ctx, base);
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

__attribute__((alias("__imp__sub_83830A78"))) PPC_WEAK_FUNC(sub_83830A78);
PPC_FUNC_IMPL(__imp__sub_83830A78) {
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
	// bl 0x824b5298
	ctx.lr = 0x83830A98;
	sub_824B5298(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-22220
	ctx.r10.s64 = ctx.r11.s64 + -22220;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824bb250
	ctx.lr = 0x83830AB0;
	sub_824BB250(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824bb250
	ctx.lr = 0x83830ABC;
	sub_824BB250(ctx, base);
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

__attribute__((alias("__imp__sub_83830AD8"))) PPC_WEAK_FUNC(sub_83830AD8);
PPC_FUNC_IMPL(__imp__sub_83830AD8) {
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
	// bl 0x8382fed8
	ctx.lr = 0x83830AF0;
	sub_8382FED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83830B04;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83830b28
	if (cr6.eq) goto loc_83830B28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83830a00
	ctx.lr = 0x83830B14;
	sub_83830A00(ctx, base);
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
loc_83830B28:
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

__attribute__((alias("__imp__sub_83830B40"))) PPC_WEAK_FUNC(sub_83830B40);
PPC_FUNC_IMPL(__imp__sub_83830B40) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x83830b90
	if (cr6.lt) goto loc_83830B90;
	// bne cr6,0x83830bb8
	if (!cr6.eq) goto loc_83830BB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241bce8
	ctx.lr = 0x83830B7C;
	sub_8241BCE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c83b8
	ctx.lr = 0x83830B88;
	sub_825C83B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x83830bac
	goto loc_83830BAC;
loc_83830B90:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241bce8
	ctx.lr = 0x83830B9C;
	sub_8241BCE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c81f0
	ctx.lr = 0x83830BA8;
	sub_825C81F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_83830BAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83830BB4;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83830BB8:
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

__attribute__((alias("__imp__sub_83830BCC"))) PPC_WEAK_FUNC(sub_83830BCC);
PPC_FUNC_IMPL(__imp__sub_83830BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830BD0"))) PPC_WEAK_FUNC(sub_83830BD0);
PPC_FUNC_IMPL(__imp__sub_83830BD0) {
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
	// bl 0x8382ff68
	ctx.lr = 0x83830BE8;
	sub_8382FF68(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-22640
	ctx.r30.s64 = ctx.r11.s64 + -22640;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83830C04;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83830C10;
	sub_8246BE10(ctx, base);
	// bl 0x824b53b0
	ctx.lr = 0x83830C14;
	sub_824B53B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83830C20;
	sub_8246BE18(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83830C2C;
	sub_8246C3A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83830C3C;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83830C44;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83830c64
	if (cr6.eq) goto loc_83830C64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83830C5C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83830C64:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83830C78;
	sub_825730A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83830c94
	if (cr6.eq) goto loc_83830C94;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r10,-22260
	ctx.r9.s64 = ctx.r10.s64 + -22260;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83830c98
	goto loc_83830C98;
loc_83830C94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83830C98:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// bl 0x8246be80
	ctx.lr = 0x83830CAC;
	sub_8246BE80(ctx, base);
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

__attribute__((alias("__imp__sub_83830CC4"))) PPC_WEAK_FUNC(sub_83830CC4);
PPC_FUNC_IMPL(__imp__sub_83830CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830CC8"))) PPC_WEAK_FUNC(sub_83830CC8);
PPC_FUNC_IMPL(__imp__sub_83830CC8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241f7e0
	ctx.lr = 0x83830CE4;
	sub_8241F7E0(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// bl 0x8241f758
	ctx.lr = 0x83830CF4;
	sub_8241F758(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,3896
	ctx.r4.s64 = ctx.r10.s64 + 3896;
	// bl 0x8241f758
	ctx.lr = 0x83830D04;
	sub_8241F758(ctx, base);
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

__attribute__((alias("__imp__sub_83830D1C"))) PPC_WEAK_FUNC(sub_83830D1C);
PPC_FUNC_IMPL(__imp__sub_83830D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830D20"))) PPC_WEAK_FUNC(sub_83830D20);
PPC_FUNC_IMPL(__imp__sub_83830D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83830D28;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82429c28
	ctx.lr = 0x83830D40;
	sub_82429C28(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// bl 0x82573280
	ctx.lr = 0x83830D50;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83830de0
	if (cr6.eq) goto loc_83830DE0;
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83830e34
	if (cr6.eq) goto loc_83830E34;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r26,48
	ctx.r26.s64 = 48;
loc_83830D74:
	// lwz r10,296(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwzx r30,r10,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// blt cr6,0x83830da4
	if (cr6.lt) goto loc_83830DA4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429ca0
	ctx.lr = 0x83830D98;
	sub_82429CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83830dcc
	if (cr6.eq) goto loc_83830DCC;
loc_83830DA4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83830dc0
	if (cr0.eq) goto loc_83830DC0;
	// lvx128 v63,r30,r26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83830DC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83830DCC:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83830d74
	if (!cr0.eq) goto loc_83830D74;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83830DE0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3896
	ctx.r4.s64 = ctx.r11.s64 + 3896;
	// bl 0x82573280
	ctx.lr = 0x83830DF0;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83830e34
	if (cr6.eq) goto loc_83830E34;
	// lwz r30,304(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83830e34
	if (cr6.eq) goto loc_83830E34;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83830E0C:
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8382fe28
	ctx.lr = 0x83830E1C;
	sub_8382FE28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438000
	ctx.lr = 0x83830E28;
	sub_82438000(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83830e0c
	if (!cr0.eq) goto loc_83830E0C;
loc_83830E34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83830E3C"))) PPC_WEAK_FUNC(sub_83830E3C);
PPC_FUNC_IMPL(__imp__sub_83830E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830E40"))) PPC_WEAK_FUNC(sub_83830E40);
PPC_FUNC_IMPL(__imp__sub_83830E40) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83830e9c
	if (cr6.eq) goto loc_83830E9C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b5298
	ctx.lr = 0x83830E70;
	sub_824B5298(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-22220
	ctx.r10.s64 = ctx.r11.s64 + -22220;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824bb250
	ctx.lr = 0x83830E88;
	sub_824BB250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x824bb250
	ctx.lr = 0x83830E94;
	sub_824BB250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83830ea0
	goto loc_83830EA0;
loc_83830E9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83830EA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83830EB8"))) PPC_WEAK_FUNC(sub_83830EB8);
PPC_FUNC_IMPL(__imp__sub_83830EB8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241b9b0
	ctx.lr = 0x83830ED4;
	sub_8241B9B0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x838305f0
	ctx.lr = 0x83830EDC;
	sub_838305F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83830EF0;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241f040
	ctx.lr = 0x83830F00;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83830F0C;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83830F24"))) PPC_WEAK_FUNC(sub_83830F24);
PPC_FUNC_IMPL(__imp__sub_83830F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83830F28"))) PPC_WEAK_FUNC(sub_83830F28);
PPC_FUNC_IMPL(__imp__sub_83830F28) {
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8330ce78
	ctx.lr = 0x83830F4C;
	sub_8330CE78(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8330ce78
	ctx.lr = 0x83830F54;
	sub_8330CE78(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83830F60;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82467108
	ctx.lr = 0x83830F68;
	sub_82467108(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83830f80
	if (cr6.eq) goto loc_83830F80;
	// bl 0x8248b818
	ctx.lr = 0x83830F7C;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83830F80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83830F98"))) PPC_WEAK_FUNC(sub_83830F98);
PPC_FUNC_IMPL(__imp__sub_83830F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83830FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83831014
	if (cr6.lt) goto loc_83831014;
	// bne cr6,0x8383105c
	if (!cr6.eq) goto loc_8383105C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x83830918
	ctx.lr = 0x83830FD0;
	sub_83830918(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83830FE0;
	sub_8241F040(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83830FFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83831008;
	sub_8241F040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83831014:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83830eb8
	ctx.lr = 0x83831020;
	sub_83830EB8(ctx, base);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83831030;
	sub_8241F040(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383104C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83831058;
	sub_8241F040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8383105C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83831064"))) PPC_WEAK_FUNC(sub_83831064);
PPC_FUNC_IMPL(__imp__sub_83831064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83831068"))) PPC_WEAK_FUNC(sub_83831068);
PPC_FUNC_IMPL(__imp__sub_83831068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83831070;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x838310e4
	if (cr6.lt) goto loc_838310E4;
	// bne cr6,0x8383112c
	if (!cr6.eq) goto loc_8383112C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x83830918
	ctx.lr = 0x838310A0;
	sub_83830918(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x838310B0;
	sub_8241F040(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838310CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x838310D8;
	sub_8241F040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838310E4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83830eb8
	ctx.lr = 0x838310F0;
	sub_83830EB8(ctx, base);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83831100;
	sub_8241F040(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383111C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241f040
	ctx.lr = 0x83831128;
	sub_8241F040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8383112C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83831134"))) PPC_WEAK_FUNC(sub_83831134);
PPC_FUNC_IMPL(__imp__sub_83831134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83831138"))) PPC_WEAK_FUNC(sub_83831138);
PPC_FUNC_IMPL(__imp__sub_83831138) {
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
	// bl 0x824fe5f8
	ctx.lr = 0x83831154;
	sub_824FE5F8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-22192
	ctx.r10.s64 = ctx.r11.s64 + -22192;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// std r30,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r30.u64);
	// bl 0x83308fb8
	ctx.lr = 0x8383117C;
	sub_83308FB8(ctx, base);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83308fb8
	ctx.lr = 0x83831194;
	sub_83308FB8(ctx, base);
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

__attribute__((alias("__imp__sub_838311B0"))) PPC_WEAK_FUNC(sub_838311B0);
PPC_FUNC_IMPL(__imp__sub_838311B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83830170
	sub_83830170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838311B4"))) PPC_WEAK_FUNC(sub_838311B4);
PPC_FUNC_IMPL(__imp__sub_838311B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838311B8"))) PPC_WEAK_FUNC(sub_838311B8);
PPC_FUNC_IMPL(__imp__sub_838311B8) {
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
	// bl 0x824fe060
	ctx.lr = 0x838311D8;
	sub_824FE060(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-22192
	ctx.r10.s64 = ctx.r11.s64 + -22192;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x833290c8
	ctx.lr = 0x838311F0;
	sub_833290C8(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833290c8
	ctx.lr = 0x838311FC;
	sub_833290C8(ctx, base);
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

__attribute__((alias("__imp__sub_83831218"))) PPC_WEAK_FUNC(sub_83831218);
PPC_FUNC_IMPL(__imp__sub_83831218) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// addi r10,r11,-22192
	ctx.r10.s64 = ctx.r11.s64 + -22192;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83309358
	ctx.lr = 0x83831240;
	sub_83309358(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x83309358
	ctx.lr = 0x83831248;
	sub_83309358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe228
	ctx.lr = 0x83831250;
	sub_824FE228(ctx, base);
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

__attribute__((alias("__imp__sub_83831264"))) PPC_WEAK_FUNC(sub_83831264);
PPC_FUNC_IMPL(__imp__sub_83831264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83831268"))) PPC_WEAK_FUNC(sub_83831268);
PPC_FUNC_IMPL(__imp__sub_83831268) {
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
	// bl 0x83830170
	ctx.lr = 0x83831280;
	sub_83830170(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,320
	ctx.r3.s64 = 320;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83831294;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838312b8
	if (cr6.eq) goto loc_838312B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83831138
	ctx.lr = 0x838312A4;
	sub_83831138(ctx, base);
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
loc_838312B8:
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

__attribute__((alias("__imp__sub_838312D0"))) PPC_WEAK_FUNC(sub_838312D0);
PPC_FUNC_IMPL(__imp__sub_838312D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838312D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8241f040
	ctx.lr = 0x838312F8;
	sub_8241F040(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r28,r11,3912
	ctx.r28.s64 = ctx.r11.s64 + 3912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82573280
	ctx.lr = 0x8383130C;
	sub_82573280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831468
	if (cr6.eq) goto loc_83831468;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// std r26,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r26.u64);
	// bl 0x82429ca0
	ctx.lr = 0x83831334;
	sub_82429CA0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x838313d0
	if (cr6.eq) goto loc_838313D0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r27,48
	ctx.r27.s64 = 48;
loc_83831358:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,296(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 296);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blt cr6,0x83831390
	if (cr6.lt) goto loc_83831390;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82429ca0
	ctx.lr = 0x83831380;
	sub_82429CA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838313b4
	if (cr6.eq) goto loc_838313B4;
loc_83831390:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x838313ac
	if (cr0.eq) goto loc_838313AC;
	// lvx128 v63,r31,r27
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_838313AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_838313B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x83831358
	if (!cr6.eq) goto loc_83831358;
loc_838313D0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82526c40
	ctx.lr = 0x838313EC;
	sub_82526C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x838313FC;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83831408;
	sub_8241F040(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r10,10764
	ctx.r8.s64 = ctx.r10.s64 + 10764;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83831444;
	sub_8247B7D8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8383159c
	if (cr6.eq) goto loc_8383159C;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83831460;
	sub_8247B268(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83831468:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r30,r11,3896
	ctx.r30.s64 = ctx.r11.s64 + 3896;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573280
	ctx.lr = 0x8383147C;
	sub_82573280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8383159c
	if (cr6.eq) goto loc_8383159C;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// std r26,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r26.u64);
	// bl 0x83331c98
	ctx.lr = 0x838314A4;
	sub_83331C98(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8383155c
	if (cr6.eq) goto loc_8383155C;
	// li r27,48
	ctx.r27.s64 = 48;
loc_838314C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 312);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83831540
	if (cr6.eq) goto loc_83831540;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838314f0
	if (cr6.eq) goto loc_838314F0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x838314f4
	goto loc_838314F4;
loc_838314F0:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_838314F4:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831508
	if (cr6.eq) goto loc_83831508;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8383150c
	goto loc_8383150C;
loc_83831508:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8383150C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83831540
	if (cr6.eq) goto loc_83831540;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831540
	if (cr6.eq) goto loc_83831540;
	// lvx128 v62,r9,r27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v61,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x833325d8
	ctx.lr = 0x83831540;
	sub_833325D8(ctx, base);
loc_83831540:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x838314c4
	if (!cr6.eq) goto loc_838314C4;
loc_8383155C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82526ed8
	ctx.lr = 0x83831578;
	sub_82526ED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8241f040
	ctx.lr = 0x83831588;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f040
	ctx.lr = 0x83831594;
	sub_8241F040(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82518d78
	ctx.lr = 0x8383159C;
	sub_82518D78(ctx, base);
loc_8383159C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838315A4"))) PPC_WEAK_FUNC(sub_838315A4);
PPC_FUNC_IMPL(__imp__sub_838315A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838315A8"))) PPC_WEAK_FUNC(sub_838315A8);
PPC_FUNC_IMPL(__imp__sub_838315A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x838315B0;
	__savegprlr_17(ctx, base);
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v125,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83830580
	ctx.lr = 0x838315E0;
	sub_83830580(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r23,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r23.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x838315F4;
	sub_8241F040(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r19,16
	ctx.r19.s64 = 16;
	// addi r21,r11,3944
	ctx.r21.s64 = ctx.r11.s64 + 3944;
	// li r18,32
	ctx.r18.s64 = 32;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831794
	if (cr6.eq) goto loc_83831794;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r30,r10,3912
	ctx.r30.s64 = ctx.r10.s64 + 3912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82573280
	ctx.lr = 0x83831624;
	sub_82573280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831794
	if (cr6.eq) goto loc_83831794;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82573280
	ctx.lr = 0x83831640;
	sub_82573280(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83831794
	if (cr6.eq) goto loc_83831794;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r23,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r23.u64);
	// bl 0x82423930
	ctx.lr = 0x83831664;
	sub_82423930(ctx, base);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r23,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r23.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82429ca0
	ctx.lr = 0x8383167C;
	sub_82429CA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x824baf50
	ctx.lr = 0x8383168C;
	sub_824BAF50(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,96
	ctx.r4.s64 = ctx.r10.s64 + 96;
	// bl 0x824bafe0
	ctx.lr = 0x8383169C;
	sub_824BAFE0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831784
	if (cr6.eq) goto loc_83831784;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r28,48
	ctx.r28.s64 = 48;
loc_838316B8:
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lwz r10,288(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 288);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// beq cr6,0x83831774
	if (cr6.eq) goto loc_83831774;
loc_838316D0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x838316e8
	if (cr6.eq) goto loc_838316E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x838316d0
	if (cr6.lt) goto loc_838316D0;
	// b 0x83831774
	goto loc_83831774;
loc_838316E8:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lvx128 v9,r31,r28
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,296(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 296);
	// lvx128 v10,r31,r19
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v7,r31,r18
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lvx128 v63,r10,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v11,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v13,v13,v11,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v8,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v7,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v62,v0,v12
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r25,r8,r7
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x83102db0
	ctx.lr = 0x8383173C;
	sub_83102DB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8382fed8
	ctx.lr = 0x83831744;
	sub_8382FED8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82473bc8
	ctx.lr = 0x8383174C;
	sub_82473BC8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e698
	ctx.lr = 0x8383175C;
	sub_8241E698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8245f5a0
	ctx.lr = 0x8383176C;
	sub_8245F5A0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241d6c0
	ctx.lr = 0x83831774;
	sub_8241D6C0(ctx, base);
loc_83831774:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x838316b8
	if (!cr0.eq) goto loc_838316B8;
loc_83831784:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82429c28
	ctx.lr = 0x8383178C;
	sub_82429C28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824238b8
	ctx.lr = 0x83831794;
	sub_824238B8(ctx, base);
loc_83831794:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838317d4
	if (cr6.eq) goto loc_838317D4;
	// bl 0x82526830
	ctx.lr = 0x838317A4;
	sub_82526830(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838317BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8246be58
	ctx.lr = 0x838317C4;
	sub_8246BE58(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838317d8
	if (!cr6.eq) goto loc_838317D8;
loc_838317D4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_838317D8:
	// std r23,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r23.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x838317E4;
	sub_8241F040(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831ae8
	if (cr6.eq) goto loc_83831AE8;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r4,r10,3896
	ctx.r4.s64 = ctx.r10.s64 + 3896;
	// bl 0x82573280
	ctx.lr = 0x83831800;
	sub_82573280(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83831ae8
	if (cr6.eq) goto loc_83831AE8;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r23,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r23.u64);
	// bl 0x82423930
	ctx.lr = 0x83831824;
	sub_82423930(ctx, base);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r23,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r23.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83331c98
	ctx.lr = 0x8383183C;
	sub_83331C98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x824baf50
	ctx.lr = 0x8383184C;
	sub_824BAF50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82526a28
	ctx.lr = 0x83831858;
	sub_82526A28(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83831a18
	if (cr6.eq) goto loc_83831A18;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_83831870:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,304(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 304);
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83831a08
	if (!cr6.lt) goto loc_83831A08;
	// lwz r10,312(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 312);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838318a4
	if (cr6.eq) goto loc_838318A4;
	// lwz r25,16(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x838318a8
	goto loc_838318A8;
loc_838318A4:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_838318A8:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838318bc
	if (cr6.eq) goto loc_838318BC;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x838318c0
	goto loc_838318C0;
loc_838318BC:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_838318C0:
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// vspltisw128 v61,-1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lvx128 v9,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// vupkd3d128 v125,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v125 = vTemp;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vsldoi128 v126,v127,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// lvx128 v13,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lvx128 v11,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v0,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v10,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// vsel128 v10,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v60,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vspltw128 v8,v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vspltw128 v10,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vspltw128 v13,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// vspltw128 v0,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vmaddcfp128 v8,v7,v8,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v10,v9,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v13,v11,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp128 v59,v0,v13
	simde_mm_store_ps(ctx.v59.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83831938;
	sub_83102DB0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x8382fed8
	ctx.lr = 0x83831940;
	sub_8382FED8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82473bc8
	ctx.lr = 0x83831948;
	sub_82473BC8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e698
	ctx.lr = 0x83831958;
	sub_8241E698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8245f5a0
	ctx.lr = 0x83831968;
	sub_8245F5A0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241d6c0
	ctx.lr = 0x83831970;
	sub_8241D6C0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// vor128 v0,v125,v125
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v125.u8));
	// lvx128 v7,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vor128 v10,v126,v126
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v126.u8));
	// lvx128 v9,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v11,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lvx128 v12,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r19
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsel128 v10,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v58,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vspltw128 v8,v58,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xAA));
	// vspltw128 v10,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vspltw128 v13,v58,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x0));
	// vspltw128 v0,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0x55));
	// vmaddcfp128 v8,v7,v8,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddcfp128 v10,v9,v10,v127
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v127.f32)));
	// vmaddfp v13,v11,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp128 v57,v0,v13
	simde_mm_store_ps(ctx.v57.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v57,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838319D0;
	sub_83102DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8382fed8
	ctx.lr = 0x838319D8;
	sub_8382FED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473bc8
	ctx.lr = 0x838319E0;
	sub_82473BC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e698
	ctx.lr = 0x838319F0;
	sub_8241E698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8245f5a0
	ctx.lr = 0x83831A00;
	sub_8245F5A0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241d6c0
	ctx.lr = 0x83831A08;
	sub_8241D6C0(ctx, base);
loc_83831A08:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// bne 0x83831870
	if (!cr0.eq) goto loc_83831870;
loc_83831A18:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r18,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r18.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r11,3456
	ctx.r9.s64 = ctx.r11.s64 + 3456;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8247b7d8
	ctx.lr = 0x83831A54;
	sub_8247B7D8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831a78
	if (cr6.eq) goto loc_83831A78;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83831A70;
	sub_8247B268(ctx, base);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
loc_83831A78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r31,r11,8980
	ctx.r31.s64 = ctx.r11.s64 + 8980;
	// addi r8,r9,26164
	ctx.r8.s64 = ctx.r9.s64 + 26164;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83831AC0;
	sub_8247B7D8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831ae4
	if (cr6.eq) goto loc_83831AE4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83831ADC;
	sub_8247B268(ctx, base);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
loc_83831AE4:
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
loc_83831AE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241f040
	ctx.lr = 0x83831AF4;
	sub_8241F040(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83831B00;
	sub_8241F040(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v125,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83831B20"))) PPC_WEAK_FUNC(sub_83831B20);
PPC_FUNC_IMPL(__imp__sub_83831B20) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83831b7c
	if (cr6.eq) goto loc_83831B7C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe060
	ctx.lr = 0x83831B50;
	sub_824FE060(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-22192
	ctx.r10.s64 = ctx.r11.s64 + -22192;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x833290c8
	ctx.lr = 0x83831B68;
	sub_833290C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x833290c8
	ctx.lr = 0x83831B74;
	sub_833290C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83831b80
	goto loc_83831B80;
loc_83831B7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83831B80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83831B98"))) PPC_WEAK_FUNC(sub_83831B98);
PPC_FUNC_IMPL(__imp__sub_83831B98) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// addi r10,r11,-22192
	ctx.r10.s64 = ctx.r11.s64 + -22192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83309358
	ctx.lr = 0x83831BC8;
	sub_83309358(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x83309358
	ctx.lr = 0x83831BD0;
	sub_83309358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe228
	ctx.lr = 0x83831BD8;
	sub_824FE228(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83831bf0
	if (cr6.eq) goto loc_83831BF0;
	// bl 0x8248b818
	ctx.lr = 0x83831BEC;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83831BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83831C08"))) PPC_WEAK_FUNC(sub_83831C08);
PPC_FUNC_IMPL(__imp__sub_83831C08) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489b30
	ctx.lr = 0x83831C2C;
	sub_82489B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253b268
	ctx.lr = 0x83831C38;
	sub_8253B268(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8248bbf8
	ctx.lr = 0x83831C50;
	sub_8248BBF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x838305f0
	ctx.lr = 0x83831C58;
	sub_838305F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831ca4
	if (cr6.eq) goto loc_83831CA4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83831C78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,12828
	ctx.r8.s64 = ctx.r9.s64 + 12828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83831C90;
	sub_82465EE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8257f3f0
	ctx.lr = 0x83831C98;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489378
	ctx.lr = 0x83831CA0;
	sub_82489378(ctx, base);
	// b 0x83831cfc
	goto loc_83831CFC;
loc_83831CA4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83831ce0
	if (cr6.eq) goto loc_83831CE0;
	// bl 0x8382fed8
	ctx.lr = 0x83831CB0;
	sub_8382FED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421418
	ctx.lr = 0x83831CBC;
	sub_82421418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x83831CC0;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d060
	ctx.lr = 0x83831CD0;
	sub_8253D060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83831CDC;
	sub_82573C50(ctx, base);
	// b 0x83831cf4
	goto loc_83831CF4;
loc_83831CE0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22508
	ctx.r4.s64 = ctx.r11.s64 + -22508;
	// bl 0x8253c558
	ctx.lr = 0x83831CF0;
	sub_8253C558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83831CF4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824670b0
	ctx.lr = 0x83831CFC;
	sub_824670B0(ctx, base);
loc_83831CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83831D18"))) PPC_WEAK_FUNC(sub_83831D18);
PPC_FUNC_IMPL(__imp__sub_83831D18) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489b30
	ctx.lr = 0x83831D3C;
	sub_82489B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253b268
	ctx.lr = 0x83831D48;
	sub_8253B268(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8248bbf8
	ctx.lr = 0x83831D60;
	sub_8248BBF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83830988
	ctx.lr = 0x83831D68;
	sub_83830988(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831db4
	if (cr6.eq) goto loc_83831DB4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83831D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,12828
	ctx.r8.s64 = ctx.r9.s64 + 12828;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83831DA0;
	sub_82465EE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8257f3f0
	ctx.lr = 0x83831DA8;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82489378
	ctx.lr = 0x83831DB0;
	sub_82489378(ctx, base);
	// b 0x83831e0c
	goto loc_83831E0C;
loc_83831DB4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83831df0
	if (cr6.eq) goto loc_83831DF0;
	// bl 0x83830170
	ctx.lr = 0x83831DC0;
	sub_83830170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421418
	ctx.lr = 0x83831DCC;
	sub_82421418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x83831DD0;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d060
	ctx.lr = 0x83831DE0;
	sub_8253D060(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573c50
	ctx.lr = 0x83831DEC;
	sub_82573C50(ctx, base);
	// b 0x83831e04
	goto loc_83831E04;
loc_83831DF0:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22492
	ctx.r4.s64 = ctx.r11.s64 + -22492;
	// bl 0x8253c558
	ctx.lr = 0x83831E00;
	sub_8253C558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83831E04:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824670b0
	ctx.lr = 0x83831E0C;
	sub_824670B0(ctx, base);
loc_83831E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83831E28"))) PPC_WEAK_FUNC(sub_83831E28);
PPC_FUNC_IMPL(__imp__sub_83831E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83831E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c280
	ctx.lr = 0x83831E54;
	sub_8253C280(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831e60
	if (cr6.eq) goto loc_83831E60;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
loc_83831E60:
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7176
	ctx.r4.s64 = ctx.r11.s64 + 7176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x83831E74;
	sub_8253B5E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x83831E84;
	sub_8253BA90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f280
	ctx.lr = 0x83831E94;
	sub_8241F280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421388
	ctx.lr = 0x83831EA0;
	sub_82421388(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x824674c0
	ctx.lr = 0x83831EBC;
	sub_824674C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831ed4
	if (cr6.eq) goto loc_83831ED4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83831ED4;
	sub_82573040(ctx, base);
loc_83831ED4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831eec
	if (cr6.eq) goto loc_83831EEC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83831EEC;
	sub_82573040(ctx, base);
loc_83831EEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83831EF8"))) PPC_WEAK_FUNC(sub_83831EF8);
PPC_FUNC_IMPL(__imp__sub_83831EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83831F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c280
	ctx.lr = 0x83831F24;
	sub_8253C280(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831f30
	if (cr6.eq) goto loc_83831F30;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
loc_83831F30:
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7448
	ctx.r4.s64 = ctx.r11.s64 + 7448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x83831F44;
	sub_8253B5E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x83831F54;
	sub_8253BA90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f280
	ctx.lr = 0x83831F64;
	sub_8241F280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82421388
	ctx.lr = 0x83831F70;
	sub_82421388(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,172
	ctx.r3.s64 = ctx.r11.s64 + 172;
	// bl 0x824674c0
	ctx.lr = 0x83831F8C;
	sub_824674C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831fa4
	if (cr6.eq) goto loc_83831FA4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83831FA4;
	sub_82573040(ctx, base);
loc_83831FA4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83831fbc
	if (cr6.eq) goto loc_83831FBC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83831FBC;
	sub_82573040(ctx, base);
loc_83831FBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83831FC8"))) PPC_WEAK_FUNC(sub_83831FC8);
PPC_FUNC_IMPL(__imp__sub_83831FC8) {
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
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-728
	ctx.r9.s64 = ctx.r11.s64 + -728;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8382fed8
	ctx.lr = 0x83831FF4;
	sub_8382FED8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824890e0
	ctx.lr = 0x83832004;
	sub_824890E0(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r8,-22696
	ctx.r4.s64 = ctx.r8.s64 + -22696;
	// bl 0x83831e28
	ctx.lr = 0x83832018;
	sub_83831E28(ctx, base);
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

__attribute__((alias("__imp__sub_8383202C"))) PPC_WEAK_FUNC(sub_8383202C);
PPC_FUNC_IMPL(__imp__sub_8383202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832030"))) PPC_WEAK_FUNC(sub_83832030);
PPC_FUNC_IMPL(__imp__sub_83832030) {
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
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,720
	ctx.r9.s64 = ctx.r11.s64 + 720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x83830170
	ctx.lr = 0x8383205C;
	sub_83830170(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824890e0
	ctx.lr = 0x8383206C;
	sub_824890E0(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r8,-22568
	ctx.r4.s64 = ctx.r8.s64 + -22568;
	// bl 0x83831ef8
	ctx.lr = 0x83832080;
	sub_83831EF8(ctx, base);
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

__attribute__((alias("__imp__sub_83832094"))) PPC_WEAK_FUNC(sub_83832094);
PPC_FUNC_IMPL(__imp__sub_83832094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832098"))) PPC_WEAK_FUNC(sub_83832098);
PPC_FUNC_IMPL(__imp__sub_83832098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489b30
	ctx.lr = 0x838320B0;
	sub_82489B30(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-728
	ctx.r9.s64 = ctx.r11.s64 + -728;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8382fed8
	ctx.lr = 0x838320C8;
	sub_8382FED8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824890e0
	ctx.lr = 0x838320D8;
	sub_824890E0(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r8,-22696
	ctx.r4.s64 = ctx.r8.s64 + -22696;
	// bl 0x83831e28
	ctx.lr = 0x838320EC;
	sub_83831E28(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r6,r7,12828
	ctx.r6.s64 = ctx.r7.s64 + 12828;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83832100;
	sub_82465EE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257f3f0
	ctx.lr = 0x83832108;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489378
	ctx.lr = 0x83832110;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83832124"))) PPC_WEAK_FUNC(sub_83832124);
PPC_FUNC_IMPL(__imp__sub_83832124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832128"))) PPC_WEAK_FUNC(sub_83832128);
PPC_FUNC_IMPL(__imp__sub_83832128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489b30
	ctx.lr = 0x83832140;
	sub_82489B30(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,720
	ctx.r9.s64 = ctx.r11.s64 + 720;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x83830170
	ctx.lr = 0x83832158;
	sub_83830170(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824890e0
	ctx.lr = 0x83832168;
	sub_824890E0(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r8,-22568
	ctx.r4.s64 = ctx.r8.s64 + -22568;
	// bl 0x83831ef8
	ctx.lr = 0x8383217C;
	sub_83831EF8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r6,r7,12828
	ctx.r6.s64 = ctx.r7.s64 + 12828;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// bl 0x82465ee8
	ctx.lr = 0x83832190;
	sub_82465EE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8257f3f0
	ctx.lr = 0x83832198;
	sub_8257F3F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82489378
	ctx.lr = 0x838321A0;
	sub_82489378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838321B4"))) PPC_WEAK_FUNC(sub_838321B4);
PPC_FUNC_IMPL(__imp__sub_838321B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838321B8"))) PPC_WEAK_FUNC(sub_838321B8);
PPC_FUNC_IMPL(__imp__sub_838321B8) {
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
	// bl 0x8382fed8
	ctx.lr = 0x838321D0;
	sub_8382FED8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-22704
	ctx.r30.s64 = ctx.r11.s64 + -22704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x838321EC;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x838321F8;
	sub_8246BE10(ctx, base);
	// bl 0x824b53b0
	ctx.lr = 0x838321FC;
	sub_824B53B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83832208;
	sub_8246BE18(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83832214;
	sub_8246C3A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83832224;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8383222C;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8383224c
	if (cr6.eq) goto loc_8383224C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83832244;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8383224C:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83832260;
	sub_825730A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8383227c
	if (cr6.eq) goto loc_8383227C;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r10,-22268
	ctx.r9.s64 = ctx.r10.s64 + -22268;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83832280
	goto loc_83832280;
loc_8383227C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83832280:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2776
	ctx.r4.s64 = ctx.r11.s64 + 2776;
	// bl 0x8246be80
	ctx.lr = 0x83832294;
	sub_8246BE80(ctx, base);
	// lis r10,-31869
	ctx.r10.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8136
	ctx.r4.s64 = ctx.r10.s64 + 8136;
	// bl 0x8246be38
	ctx.lr = 0x838322A4;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x838322AC;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31869
	ctx.r9.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,8344
	ctx.r4.s64 = ctx.r9.s64 + 8344;
	// bl 0x8253b5e8
	ctx.lr = 0x838322C4;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x838322D8;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_838322F0"))) PPC_WEAK_FUNC(sub_838322F0);
PPC_FUNC_IMPL(__imp__sub_838322F0) {
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
	// bl 0x83830170
	ctx.lr = 0x83832308;
	sub_83830170(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-22592
	ctx.r30.s64 = ctx.r11.s64 + -22592;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83832324;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83832330;
	sub_8246BE10(ctx, base);
	// bl 0x824ffb68
	ctx.lr = 0x83832334;
	sub_824FFB68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83832340;
	sub_8246BE18(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x8383234C;
	sub_8246C3A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x8383235C;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83832364;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83832384
	if (cr6.eq) goto loc_83832384;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8383237C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83832384:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83832398;
	sub_825730A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838323b4
	if (cr6.eq) goto loc_838323B4;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r10,-22228
	ctx.r9.s64 = ctx.r10.s64 + -22228;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x838323b8
	goto loc_838323B8;
loc_838323B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_838323B8:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x838323C8;
	sub_8246BE48(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4712
	ctx.r4.s64 = ctx.r11.s64 + 4712;
	// bl 0x8246be80
	ctx.lr = 0x838323D8;
	sub_8246BE80(ctx, base);
	// lis r10,-31869
	ctx.r10.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,8240
	ctx.r4.s64 = ctx.r10.s64 + 8240;
	// bl 0x8246be38
	ctx.lr = 0x838323E8;
	sub_8246BE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824894a0
	ctx.lr = 0x838323F0;
	sub_824894A0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31869
	ctx.r9.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,8488
	ctx.r4.s64 = ctx.r9.s64 + 8488;
	// bl 0x8253b5e8
	ctx.lr = 0x83832408;
	sub_8253B5E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be88
	ctx.lr = 0x8383241C;
	sub_8253BE88(ctx, base);
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

__attribute__((alias("__imp__sub_83832434"))) PPC_WEAK_FUNC(sub_83832434);
PPC_FUNC_IMPL(__imp__sub_83832434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832438"))) PPC_WEAK_FUNC(sub_83832438);
PPC_FUNC_IMPL(__imp__sub_83832438) {
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
	// bl 0x83831138
	ctx.lr = 0x83832450;
	sub_83831138(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21992
	ctx.r10.s64 = ctx.r11.s64 + -21992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83832474"))) PPC_WEAK_FUNC(sub_83832474);
PPC_FUNC_IMPL(__imp__sub_83832474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832478"))) PPC_WEAK_FUNC(sub_83832478);
PPC_FUNC_IMPL(__imp__sub_83832478) {
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
	// bl 0x838311b8
	ctx.lr = 0x83832490;
	sub_838311B8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21992
	ctx.r10.s64 = ctx.r11.s64 + -21992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_838324B4"))) PPC_WEAK_FUNC(sub_838324B4);
PPC_FUNC_IMPL(__imp__sub_838324B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838324B8"))) PPC_WEAK_FUNC(sub_838324B8);
PPC_FUNC_IMPL(__imp__sub_838324B8) {
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
	// bl 0x83830170
	ctx.lr = 0x838324D4;
	sub_83830170(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,320
	ctx.r3.s64 = 320;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x838324E8;
	sub_8248B768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83832510
	if (cr6.eq) goto loc_83832510;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83831138
	ctx.lr = 0x838324FC;
	sub_83831138(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21992
	ctx.r10.s64 = ctx.r11.s64 + -21992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83832514
	goto loc_83832514;
loc_83832510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83832514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8383252C"))) PPC_WEAK_FUNC(sub_8383252C);
PPC_FUNC_IMPL(__imp__sub_8383252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832530"))) PPC_WEAK_FUNC(sub_83832530);
PPC_FUNC_IMPL(__imp__sub_83832530) {
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
	// bl 0x8382fdd8
	ctx.lr = 0x83832548;
	sub_8382FDD8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21888
	ctx.r10.s64 = ctx.r11.s64 + -21888;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8383256C"))) PPC_WEAK_FUNC(sub_8383256C);
PPC_FUNC_IMPL(__imp__sub_8383256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832570"))) PPC_WEAK_FUNC(sub_83832570);
PPC_FUNC_IMPL(__imp__sub_83832570) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838325bc
	if (cr6.eq) goto loc_838325BC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838311b8
	ctx.lr = 0x83832598;
	sub_838311B8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21992
	ctx.r10.s64 = ctx.r11.s64 + -21992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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
loc_838325BC:
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

__attribute__((alias("__imp__sub_838325D4"))) PPC_WEAK_FUNC(sub_838325D4);
PPC_FUNC_IMPL(__imp__sub_838325D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838325D8"))) PPC_WEAK_FUNC(sub_838325D8);
PPC_FUNC_IMPL(__imp__sub_838325D8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,4216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4216);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8383264c
	if (!cr6.eq) goto loc_8383264C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,4216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4216, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,3984
	ctx.r31.s64 = ctx.r9.s64 + 3984;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-22052
	ctx.r5.s64 = ctx.r8.s64 + -22052;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,320
	ctx.r4.s64 = 320;
	// bl 0x82477fc8
	ctx.lr = 0x83832628;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-13856
	ctx.r3.s64 = ctx.r7.s64 + -13856;
	// bl 0x831cdcc8
	ctx.lr = 0x83832634;
	sub_831CDCC8(ctx, base);
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
loc_8383264C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,3984
	ctx.r3.s64 = ctx.r11.s64 + 3984;
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

__attribute__((alias("__imp__sub_83832668"))) PPC_WEAK_FUNC(sub_83832668);
PPC_FUNC_IMPL(__imp__sub_83832668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83832670;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83832694;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838326bc
	if (cr6.eq) goto loc_838326BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8382fdd8
	ctx.lr = 0x838326A8;
	sub_8382FDD8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-21888
	ctx.r10.s64 = ctx.r11.s64 + -21888;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x838326c0
	goto loc_838326C0;
loc_838326BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_838326C0:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x838326CC;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838326D8"))) PPC_WEAK_FUNC(sub_838326D8);
PPC_FUNC_IMPL(__imp__sub_838326D8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,4456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8383274c
	if (!cr6.eq) goto loc_8383274C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,4456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4456, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,4224
	ctx.r31.s64 = ctx.r9.s64 + 4224;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-22012
	ctx.r5.s64 = ctx.r8.s64 + -22012;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x82477fc8
	ctx.lr = 0x83832728;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-13840
	ctx.r3.s64 = ctx.r7.s64 + -13840;
	// bl 0x831cdcc8
	ctx.lr = 0x83832734;
	sub_831CDCC8(ctx, base);
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
loc_8383274C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
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

__attribute__((alias("__imp__sub_83832768"))) PPC_WEAK_FUNC(sub_83832768);
PPC_FUNC_IMPL(__imp__sub_83832768) {
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
	// bl 0x838326d8
	ctx.lr = 0x8383277C;
	sub_838326D8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-22004
	ctx.r4.s64 = ctx.r11.s64 + -22004;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83832794;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x838327A0;
	sub_8246BE10(ctx, base);
	// bl 0x83830350
	ctx.lr = 0x838327A4;
	sub_83830350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x838327B0;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_838327C4"))) PPC_WEAK_FUNC(sub_838327C4);
PPC_FUNC_IMPL(__imp__sub_838327C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838327C8"))) PPC_WEAK_FUNC(sub_838327C8);
PPC_FUNC_IMPL(__imp__sub_838327C8) {
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
	// bl 0x8382fe18
	ctx.lr = 0x838327E8;
	sub_8382FE18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83832808
	if (cr6.eq) goto loc_83832808;
	// bl 0x82595188
	ctx.lr = 0x838327F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83832808;
	sub_825952B8(ctx, base);
loc_83832808:
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

__attribute__((alias("__imp__sub_83832824"))) PPC_WEAK_FUNC(sub_83832824);
PPC_FUNC_IMPL(__imp__sub_83832824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832828"))) PPC_WEAK_FUNC(sub_83832828);
PPC_FUNC_IMPL(__imp__sub_83832828) {
	PPC_FUNC_PROLOGUE();
	// b 0x838325d8
	sub_838325D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8383282C"))) PPC_WEAK_FUNC(sub_8383282C);
PPC_FUNC_IMPL(__imp__sub_8383282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832830"))) PPC_WEAK_FUNC(sub_83832830);
PPC_FUNC_IMPL(__imp__sub_83832830) {
	PPC_FUNC_PROLOGUE();
	// b 0x838326d8
	sub_838326D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83832834"))) PPC_WEAK_FUNC(sub_83832834);
PPC_FUNC_IMPL(__imp__sub_83832834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832838"))) PPC_WEAK_FUNC(sub_83832838);
PPC_FUNC_IMPL(__imp__sub_83832838) {
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
	// bl 0x838325d8
	ctx.lr = 0x83832850;
	sub_838325D8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-22020
	ctx.r30.s64 = ctx.r11.s64 + -22020;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8383286C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83832878;
	sub_8246BE10(ctx, base);
	// bl 0x83830170
	ctx.lr = 0x8383287C;
	sub_83830170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83832888;
	sub_8246BE18(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83832894;
	sub_8246C3A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x838328A4;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x838328AC;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838328cc
	if (cr6.eq) goto loc_838328CC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x838328C4;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_838328CC:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x838328E0;
	sub_825730A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838328fc
	if (cr6.eq) goto loc_838328FC;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r10,-21788
	ctx.r9.s64 = ctx.r10.s64 + -21788;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83832900
	goto loc_83832900;
loc_838328FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83832900:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be48
	ctx.lr = 0x83832910;
	sub_8246BE48(ctx, base);
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9400
	ctx.r4.s64 = ctx.r11.s64 + 9400;
	// bl 0x8246be80
	ctx.lr = 0x83832920;
	sub_8246BE80(ctx, base);
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

__attribute__((alias("__imp__sub_83832938"))) PPC_WEAK_FUNC(sub_83832938);
PPC_FUNC_IMPL(__imp__sub_83832938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83832940;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83832a0c
	if (cr6.eq) goto loc_83832A0C;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r25,304(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x83832a0c
	if (cr6.eq) goto loc_83832A0C;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83832978:
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x83832994
	if (!cr6.lt) goto loc_83832994;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83832998
	goto loc_83832998;
loc_83832994:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83832998:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838329fc
	if (cr6.eq) goto loc_838329FC;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x838329B4;
	sub_8241F040(ctx, base);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x825c8330
	ctx.lr = 0x838329C4;
	sub_825C8330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x838329D0;
	sub_8241F040(ctx, base);
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x838329E0;
	sub_8241F040(ctx, base);
	// lwz r10,312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x825c84f8
	ctx.lr = 0x838329F0;
	sub_825C84F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x838329FC;
	sub_8241F040(ctx, base);
loc_838329FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// blt cr6,0x83832978
	if (cr6.lt) goto loc_83832978;
loc_83832A0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83832A14"))) PPC_WEAK_FUNC(sub_83832A14);
PPC_FUNC_IMPL(__imp__sub_83832A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832A18"))) PPC_WEAK_FUNC(sub_83832A18);
PPC_FUNC_IMPL(__imp__sub_83832A18) {
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
	// bl 0x8251b068
	ctx.lr = 0x83832A30;
	sub_8251B068(ctx, base);
	// bl 0x83832938
	ctx.lr = 0x83832A34;
	sub_83832938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83307688
	ctx.lr = 0x83832A3C;
	sub_83307688(ctx, base);
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

__attribute__((alias("__imp__sub_83832A50"))) PPC_WEAK_FUNC(sub_83832A50);
PPC_FUNC_IMPL(__imp__sub_83832A50) {
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
	// bl 0x838303e0
	ctx.lr = 0x83832A60;
	sub_838303E0(ctx, base);
	// bl 0x838322f0
	ctx.lr = 0x83832A64;
	sub_838322F0(ctx, base);
	// bl 0x838321b8
	ctx.lr = 0x83832A68;
	sub_838321B8(ctx, base);
	// bl 0x83830bd0
	ctx.lr = 0x83832A6C;
	sub_83830BD0(ctx, base);
	// bl 0x83832768
	ctx.lr = 0x83832A70;
	sub_83832768(ctx, base);
	// bl 0x83832838
	ctx.lr = 0x83832A74;
	sub_83832838(ctx, base);
	// bl 0x83832b18
	ctx.lr = 0x83832A78;
	sub_83832B18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83832A88"))) PPC_WEAK_FUNC(sub_83832A88);
PPC_FUNC_IMPL(__imp__sub_83832A88) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,4696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4696);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83832afc
	if (!cr6.eq) goto loc_83832AFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,4696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4696, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// addi r31,r9,4464
	ctx.r31.s64 = ctx.r9.s64 + 4464;
	// lis r6,14
	ctx.r6.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-21728
	ctx.r5.s64 = ctx.r8.s64 + -21728;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82477fc8
	ctx.lr = 0x83832AD8;
	sub_82477FC8(ctx, base);
	// lis r7,-31785
	ctx.r7.s64 = -2083061760;
	// addi r3,r7,-13792
	ctx.r3.s64 = ctx.r7.s64 + -13792;
	// bl 0x831cdcc8
	ctx.lr = 0x83832AE4;
	sub_831CDCC8(ctx, base);
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
loc_83832AFC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
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

__attribute__((alias("__imp__sub_83832B18"))) PPC_WEAK_FUNC(sub_83832B18);
PPC_FUNC_IMPL(__imp__sub_83832B18) {
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
	// bl 0x83832a88
	ctx.lr = 0x83832B2C;
	sub_83832A88(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-21720
	ctx.r4.s64 = ctx.r11.s64 + -21720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83832B44;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83832B50;
	sub_8246BE10(ctx, base);
	// bl 0x82526560
	ctx.lr = 0x83832B54;
	sub_82526560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83832B60;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_83832B74"))) PPC_WEAK_FUNC(sub_83832B74);
PPC_FUNC_IMPL(__imp__sub_83832B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832B78"))) PPC_WEAK_FUNC(sub_83832B78);
PPC_FUNC_IMPL(__imp__sub_83832B78) {
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
	// bl 0x8399eee8
	ctx.lr = 0x83832B90;
	sub_8399EEE8(ctx, base);
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

__attribute__((alias("__imp__sub_83832BA8"))) PPC_WEAK_FUNC(sub_83832BA8);
PPC_FUNC_IMPL(__imp__sub_83832BA8) {
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
	// bl 0x8399f4f8
	ctx.lr = 0x83832BC0;
	sub_8399F4F8(ctx, base);
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

__attribute__((alias("__imp__sub_83832BD8"))) PPC_WEAK_FUNC(sub_83832BD8);
PPC_FUNC_IMPL(__imp__sub_83832BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83832BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,5
	ctx.r31.s64 = 5;
loc_83832BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399eee8
	ctx.lr = 0x83832BF8;
	sub_8399EEE8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bge 0x83832bf0
	if (!cr0.lt) goto loc_83832BF0;
	// addi r30,r29,136
	ctx.r30.s64 = ctx.r29.s64 + 136;
	// li r31,31
	ctx.r31.s64 = 31;
loc_83832C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8399f4f8
	ctx.lr = 0x83832C14;
	sub_8399F4F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bge 0x83832c0c
	if (!cr0.lt) goto loc_83832C0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8399f5e8
	ctx.lr = 0x83832C28;
	sub_8399F5E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83832C34"))) PPC_WEAK_FUNC(sub_83832C34);
PPC_FUNC_IMPL(__imp__sub_83832C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832C38"))) PPC_WEAK_FUNC(sub_83832C38);
PPC_FUNC_IMPL(__imp__sub_83832C38) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,121(r3)
	PPC_STORE_U8(ctx.r3.u32 + 121, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83832c74
	if (cr6.eq) goto loc_83832C74;
	// bl 0x82d25ad0
	ctx.lr = 0x83832C60;
	sub_82D25AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83832c74
	if (cr6.eq) goto loc_83832C74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25ab8
	ctx.lr = 0x83832C74;
	sub_82D25AB8(ctx, base);
loc_83832C74:
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

__attribute__((alias("__imp__sub_83832C88"))) PPC_WEAK_FUNC(sub_83832C88);
PPC_FUNC_IMPL(__imp__sub_83832C88) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,22064
	ctx.r3.s64 = ctx.r3.s64 + 22064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83832C94"))) PPC_WEAK_FUNC(sub_83832C94);
PPC_FUNC_IMPL(__imp__sub_83832C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832C98"))) PPC_WEAK_FUNC(sub_83832C98);
PPC_FUNC_IMPL(__imp__sub_83832C98) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,22064
	ctx.r3.s64 = ctx.r3.s64 + 22064;
	// b 0x82a12748
	sub_82A12748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83832CA4"))) PPC_WEAK_FUNC(sub_83832CA4);
PPC_FUNC_IMPL(__imp__sub_83832CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832CA8"))) PPC_WEAK_FUNC(sub_83832CA8);
PPC_FUNC_IMPL(__imp__sub_83832CA8) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,22064
	ctx.r3.s64 = ctx.r3.s64 + 22064;
	// b 0x82a0cc80
	sub_82A0CC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83832CB4"))) PPC_WEAK_FUNC(sub_83832CB4);
PPC_FUNC_IMPL(__imp__sub_83832CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832CB8"))) PPC_WEAK_FUNC(sub_83832CB8);
PPC_FUNC_IMPL(__imp__sub_83832CB8) {
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
	// bl 0x825d8390
	ctx.lr = 0x83832CC8;
	sub_825D8390(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83832CE8"))) PPC_WEAK_FUNC(sub_83832CE8);
PPC_FUNC_IMPL(__imp__sub_83832CE8) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83832CF4"))) PPC_WEAK_FUNC(sub_83832CF4);
PPC_FUNC_IMPL(__imp__sub_83832CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832CF8"))) PPC_WEAK_FUNC(sub_83832CF8);
PPC_FUNC_IMPL(__imp__sub_83832CF8) {
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
	// bl 0x830ff290
	ctx.lr = 0x83832D08;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83832D0C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x83832fd0
	if (cr6.gt) goto loc_83832FD0;
	// lis r12,-31869
	ctx.r12.s64 = -2088566784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11568
	ctx.r12.s64 = ctx.r12.s64 + 11568;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83832D84;
	case 1:
		goto loc_83832D84;
	case 2:
		goto loc_83832D9C;
	case 3:
		goto loc_83832FD0;
	case 4:
		goto loc_83832FD0;
	case 5:
		goto loc_83832EB0;
	case 6:
		goto loc_83832EC8;
	case 7:
		goto loc_83832EE0;
	case 8:
		goto loc_83832EF8;
	case 9:
		goto loc_83832F10;
	case 10:
		goto loc_83832F28;
	case 11:
		goto loc_83832F40;
	case 12:
		goto loc_83832F58;
	case 13:
		goto loc_83832F70;
	case 14:
		goto loc_83832F88;
	case 15:
		goto loc_83832FA0;
	case 16:
		goto loc_83832FD0;
	case 17:
		goto loc_83832FD0;
	case 18:
		goto loc_83832FD0;
	case 19:
		goto loc_83832FD0;
	case 20:
		goto loc_83832FB8;
	default:
		return;
	}
	// lwz r28,11652(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11652);
	// lwz r28,11652(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11652);
	// lwz r28,11676(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11676);
	// lwz r28,12240(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12240);
	// lwz r28,12240(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12240);
	// lwz r28,11952(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// lwz r28,11976(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11976);
	// lwz r28,12000(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12000);
	// lwz r28,12024(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12024);
	// lwz r28,12048(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12048);
	// lwz r28,12072(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12072);
	// lwz r28,12096(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12096);
	// lwz r28,12120(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12120);
	// lwz r28,12144(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12144);
	// lwz r28,12168(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	// lwz r28,12192(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12192);
	// lwz r28,12240(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12240);
	// lwz r28,12240(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12240);
	// lwz r28,12240(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12240);
	// lwz r28,12240(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12240);
	// lwz r28,12216(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12216);
loc_83832D84:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,82
	ctx.r3.u64 = ctx.r3.u64 | 82;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832D9C:
	// bl 0x830ff290
	ctx.lr = 0x83832DA0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// bgt cr6,0x83832e98
	if (cr6.gt) goto loc_83832E98;
	// lis r12,-31869
	ctx.r12.s64 = -2088566784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11720
	ctx.r12.s64 = ctx.r12.s64 + 11720;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83832E20;
	case 1:
		goto loc_83832E38;
	case 2:
		goto loc_83832E98;
	case 3:
		goto loc_83832E98;
	case 4:
		goto loc_83832E98;
	case 5:
		goto loc_83832E98;
	case 6:
		goto loc_83832E98;
	case 7:
		goto loc_83832E98;
	case 8:
		goto loc_83832E98;
	case 9:
		goto loc_83832E98;
	case 10:
		goto loc_83832E98;
	case 11:
		goto loc_83832E98;
	case 12:
		goto loc_83832E50;
	case 13:
		goto loc_83832E50;
	case 14:
		goto loc_83832E68;
	case 15:
		goto loc_83832E68;
	case 16:
		goto loc_83832E98;
	case 17:
		goto loc_83832E98;
	case 18:
		goto loc_83832E98;
	case 19:
		goto loc_83832E98;
	case 20:
		goto loc_83832E98;
	case 21:
		goto loc_83832E80;
	default:
		return;
	}
	// lwz r28,11808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11808);
	// lwz r28,11832(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11832);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11856(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// lwz r28,11856(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// lwz r28,11880(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11880);
	// lwz r28,11880(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11880);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11928(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11928);
	// lwz r28,11904(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11904);
loc_83832E20:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,85
	ctx.r3.u64 = ctx.r3.u64 | 85;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832E38:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,106
	ctx.r3.u64 = ctx.r3.u64 | 106;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832E50:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,107
	ctx.r3.u64 = ctx.r3.u64 | 107;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832E68:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832E80:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,118
	ctx.r3.u64 = ctx.r3.u64 | 118;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832E98:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,80
	ctx.r3.u64 = ctx.r3.u64 | 80;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832EB0:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,78
	ctx.r3.u64 = ctx.r3.u64 | 78;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832EC8:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,79
	ctx.r3.u64 = ctx.r3.u64 | 79;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832EE0:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,83
	ctx.r3.u64 = ctx.r3.u64 | 83;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832EF8:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,432
	ctx.r3.u64 = ctx.r3.u64 | 432;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832F10:
	// lis r3,81
	ctx.r3.s64 = 5308416;
	// ori r3,r3,431
	ctx.r3.u64 = ctx.r3.u64 | 431;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832F28:
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,130
	ctx.r3.u64 = ctx.r3.u64 | 130;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832F40:
	// lis r3,300
	ctx.r3.s64 = 19660800;
	// ori r3,r3,529
	ctx.r3.u64 = ctx.r3.u64 | 529;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832F58:
	// lis r3,300
	ctx.r3.s64 = 19660800;
	// ori r3,r3,561
	ctx.r3.u64 = ctx.r3.u64 | 561;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832F70:
	// lis r3,300
	ctx.r3.s64 = 19660800;
	// ori r3,r3,582
	ctx.r3.u64 = ctx.r3.u64 | 582;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832F88:
	// lis r3,300
	ctx.r3.s64 = 19660800;
	// ori r3,r3,552
	ctx.r3.u64 = ctx.r3.u64 | 552;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832FA0:
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,115
	ctx.r3.u64 = ctx.r3.u64 | 115;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832FB8:
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,192
	ctx.r3.u64 = ctx.r3.u64 | 192;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83832FD0:
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

__attribute__((alias("__imp__sub_83832FE4"))) PPC_WEAK_FUNC(sub_83832FE4);
PPC_FUNC_IMPL(__imp__sub_83832FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83832FE8"))) PPC_WEAK_FUNC(sub_83832FE8);
PPC_FUNC_IMPL(__imp__sub_83832FE8) {
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r4,262
	ctx.r4.s64 = 17170432;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x83535150
	ctx.lr = 0x83833018;
	sub_83535150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833028"))) PPC_WEAK_FUNC(sub_83833028);
PPC_FUNC_IMPL(__imp__sub_83833028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x83833040
	if (!cr6.eq) goto loc_83833040;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83833040:
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8383305c
	if (cr6.eq) goto loc_8383305C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,23284
	ctx.r9.u64 = ctx.r11.u64 | 23284;
	// stwx r10,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8383305C:
	// stb r4,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r4.u8);
	// stb r10,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833068"))) PPC_WEAK_FUNC(sub_83833068);
PPC_FUNC_IMPL(__imp__sub_83833068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bne cr6,0x8383307c
	if (!cr6.eq) goto loc_8383307C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8383307C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,22044
	ctx.r9.u64 = ctx.r11.u64 | 22044;
	// ori r8,r10,23284
	ctx.r8.u64 = ctx.r10.u64 | 23284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838330A0"))) PPC_WEAK_FUNC(sub_838330A0);
PPC_FUNC_IMPL(__imp__sub_838330A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,22036
	ctx.r9.u64 = ctx.r11.u64 | 22036;
	// ori r8,r10,23284
	ctx.r8.u64 = ctx.r10.u64 | 23284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838330D0"))) PPC_WEAK_FUNC(sub_838330D0);
PPC_FUNC_IMPL(__imp__sub_838330D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,22056
	ctx.r9.u64 = ctx.r11.u64 | 22056;
	// ori r8,r10,23284
	ctx.r8.u64 = ctx.r10.u64 | 23284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stwx r4,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833100"))) PPC_WEAK_FUNC(sub_83833100);
PPC_FUNC_IMPL(__imp__sub_83833100) {
	PPC_FUNC_PROLOGUE();
	// stb r4,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833108"))) PPC_WEAK_FUNC(sub_83833108);
PPC_FUNC_IMPL(__imp__sub_83833108) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,105(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833110"))) PPC_WEAK_FUNC(sub_83833110);
PPC_FUNC_IMPL(__imp__sub_83833110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,23253
	ctx.r11.u64 = ctx.r11.u64 | 23253;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833120"))) PPC_WEAK_FUNC(sub_83833120);
PPC_FUNC_IMPL(__imp__sub_83833120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,23252
	ctx.r11.u64 = ctx.r11.u64 | 23252;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833130"))) PPC_WEAK_FUNC(sub_83833130);
PPC_FUNC_IMPL(__imp__sub_83833130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,23254
	ctx.r11.u64 = ctx.r11.u64 | 23254;
	// stbx r4,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833140"))) PPC_WEAK_FUNC(sub_83833140);
PPC_FUNC_IMPL(__imp__sub_83833140) {
	PPC_FUNC_PROLOGUE();
	// stb r4,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833148"))) PPC_WEAK_FUNC(sub_83833148);
PPC_FUNC_IMPL(__imp__sub_83833148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8383319c
	if (cr6.gt) goto loc_8383319C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8383317c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8383317C;
	// bdzf 4*cr6+eq,0x83833184
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83833184;
	// bdzf 4*cr6+eq,0x83833194
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83833194;
	// bdzf 4*cr6+eq,0x8383319c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8383319C;
	// bdzf 4*cr6+eq,0x8383319c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8383319C;
	// bne cr6,0x8383318c
	if (!cr6.eq) goto loc_8383318C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8383317C:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83833184:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8383318C:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_83833194:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8383319C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838331A4"))) PPC_WEAK_FUNC(sub_838331A4);
PPC_FUNC_IMPL(__imp__sub_838331A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838331A8"))) PPC_WEAK_FUNC(sub_838331A8);
PPC_FUNC_IMPL(__imp__sub_838331A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r7,2
	ctx.r7.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r8,23296
	ctx.r8.s64 = ctx.r8.s64 + 23296;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// addi r10,r10,23284
	ctx.r10.s64 = ctx.r10.s64 + 23284;
loc_838331C8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838331c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838331C8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23300
	ctx.r10.u64 = ctx.r11.u64 | 23300;
	// stwx r7,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838331E8"))) PPC_WEAK_FUNC(sub_838331E8);
PPC_FUNC_IMPL(__imp__sub_838331E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838331F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83833344
	if (!cr6.gt) goto loc_83833344;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_83833214:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83833330
	if (cr6.eq) goto loc_83833330;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x825952b8
	ctx.lr = 0x83833238;
	sub_825952B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838332ec
	if (cr6.eq) goto loc_838332EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383325C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838332a0
	if (cr6.eq) goto loc_838332A0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83833284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x838332A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838332A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwsync 
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_838332B4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r27,r10
	ctx.r8.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x838332b4
	if (!cr0.eq) goto loc_838332B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838332ec
	if (!cr6.eq) goto loc_838332EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838332EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838332EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83833324
	if (cr6.eq) goto loc_83833324;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x825952b8
	ctx.lr = 0x83833324;
	sub_825952B8(ctx, base);
loc_83833324:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
loc_83833330:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83833214
	if (cr6.lt) goto loc_83833214;
loc_83833344:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83833370
	if (cr6.eq) goto loc_83833370;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x83833360;
	sub_82595150(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82416268
	ctx.lr = 0x83833368;
	sub_82416268(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x83833370;
	sub_82595170(ctx, base);
loc_83833370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83833378"))) PPC_WEAK_FUNC(sub_83833378);
PPC_FUNC_IMPL(__imp__sub_83833378) {
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
	// lbz r11,105(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8383345c
	if (cr6.lt) goto loc_8383345C;
	// beq cr6,0x83833424
	if (cr6.eq) goto loc_83833424;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x838333b4
	if (cr6.lt) goto loc_838333B4;
	// stb r30,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r30.u8);
	// b 0x83833408
	goto loc_83833408;
loc_838333B4:
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x838333CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83833408
	if (cr6.eq) goto loc_83833408;
loc_838333D8:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beq cr6,0x83833404
	if (cr6.eq) goto loc_83833404;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x838333f8
	if (cr6.eq) goto loc_838333F8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_838333F8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_83833404:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83833408:
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
loc_83833424:
	// bl 0x831156e8
	ctx.lr = 0x83833428;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83833408
	if (cr6.eq) goto loc_83833408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83987bf8
	ctx.lr = 0x83833438;
	sub_83987BF8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83833450;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r8,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r8.u8);
	// b 0x83833408
	goto loc_83833408;
loc_8383345C:
	// bl 0x830ff290
	ctx.lr = 0x83833460;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83833408
	if (cr6.eq) goto loc_83833408;
	// bl 0x830ff988
	ctx.lr = 0x8383346C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838333d8
	if (cr6.eq) goto loc_838333D8;
	// bl 0x82dd3a30
	ctx.lr = 0x8383347C;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83833408
	if (cr6.eq) goto loc_83833408;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// b 0x83833408
	goto loc_83833408;
}

__attribute__((alias("__imp__sub_83833494"))) PPC_WEAK_FUNC(sub_83833494);
PPC_FUNC_IMPL(__imp__sub_83833494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83833498"))) PPC_WEAK_FUNC(sub_83833498);
PPC_FUNC_IMPL(__imp__sub_83833498) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838334c0
	if (cr6.eq) goto loc_838334C0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x838334d8
	if (!cr6.eq) goto loc_838334D8;
loc_838334C0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// bl 0x83102db0
	ctx.lr = 0x838334D0;
	sub_83102DB0(ctx, base);
	// bl 0x82a530d0
	ctx.lr = 0x838334D4;
	sub_82A530D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_838334D8:
	// bl 0x830ff290
	ctx.lr = 0x838334DC;
	sub_830FF290(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ff798
	ctx.lr = 0x838334E4;
	sub_830FF798(ctx, base);
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

__attribute__((alias("__imp__sub_838334F8"))) PPC_WEAK_FUNC(sub_838334F8);
PPC_FUNC_IMPL(__imp__sub_838334F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83833500;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x831156e8
	ctx.lr = 0x8383351C;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r21,r11,26340
	ctx.r21.u64 = ctx.r11.u64 | 26340;
	// beq cr6,0x83833668
	if (cr6.eq) goto loc_83833668;
	// lwzx r11,r26,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// add r20,r26,r21
	ctx.r20.u64 = ctx.r26.u64 + ctx.r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83833668
	if (!cr6.eq) goto loc_83833668;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23265
	ctx.r10.u64 = ctx.r11.u64 | 23265;
	// lbzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83833668
	if (!cr6.eq) goto loc_83833668;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37454
	ctx.r9.u64 = ctx.r11.u64 | 37454;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83833668
	if (!cr6.eq) goto loc_83833668;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,25448
	ctx.r9.u64 = ctx.r11.u64 | 25448;
	// ori r8,r10,25752
	ctx.r8.u64 = ctx.r10.u64 | 25752;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwzx r27,r26,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// lwzx r29,r26,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// bl 0x830ff290
	ctx.lr = 0x83833590;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83833594;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x838335b8
	if (cr6.eq) goto loc_838335B8;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// beq cr6,0x83833648
	if (cr6.eq) goto loc_83833648;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x838335cc
	if (cr6.lt) goto loc_838335CC;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bgt cr6,0x838335cc
	if (cr6.gt) goto loc_838335CC;
loc_838335B8:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x838335C8;
	sub_83123778(ctx, base);
loc_838335C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_838335CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837cb4c8
	ctx.lr = 0x838335D4;
	sub_837CB4C8(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r10,r30,-15
	ctx.r10.s64 = ctx.r30.s64 + -15;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r6,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r6.u8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r29,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// rlwimi r11,r29,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82595718
	ctx.lr = 0x83833634;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83833660
	if (cr6.eq) goto loc_83833660;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837cea90
	ctx.lr = 0x83833644;
	sub_837CEA90(ctx, base);
	// b 0x83833664
	goto loc_83833664;
loc_83833648:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r10,r11,20660
	ctx.r10.u64 = ctx.r11.u64 | 20660;
	// lwzx r4,r26,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// bl 0x83833148
	ctx.lr = 0x8383365C;
	sub_83833148(ctx, base);
	// b 0x838335c8
	goto loc_838335C8;
loc_83833660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83833664:
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
loc_83833668:
	// lwzx r3,r26,r21
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// add r31,r26,r21
	ctx.r31.u64 = ctx.r26.u64 + ctx.r21.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83833690
	if (cr6.eq) goto loc_83833690;
	// bl 0x837cdf90
	ctx.lr = 0x8383367C;
	sub_837CDF90(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x837cdfa8
	ctx.lr = 0x83833684;
	sub_837CDFA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838336a0
	if (cr6.eq) goto loc_838336A0;
loc_83833690:
	// bl 0x82d4bb00
	ctx.lr = 0x83833694;
	sub_82D4BB00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838336ac
	if (!cr6.eq) goto loc_838336AC;
	// bl 0x82d4cac0
	ctx.lr = 0x838336A0;
	sub_82D4CAC0(ctx, base);
loc_838336A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_838336AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838336B8"))) PPC_WEAK_FUNC(sub_838336B8);
PPC_FUNC_IMPL(__imp__sub_838336B8) {
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
	// beq cr6,0x83833700
	if (cr6.eq) goto loc_83833700;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x838336E8;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838331e8
	ctx.lr = 0x838336F0;
	sub_838331E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x838336F8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83833700;
	sub_82595170(ctx, base);
loc_83833700:
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

__attribute__((alias("__imp__sub_83833714"))) PPC_WEAK_FUNC(sub_83833714);
PPC_FUNC_IMPL(__imp__sub_83833714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83833718"))) PPC_WEAK_FUNC(sub_83833718);
PPC_FUNC_IMPL(__imp__sub_83833718) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// li r5,1920
	ctx.r5.s64 = 1920;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// lbz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// lbz r6,5(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// stb r6,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x83833780;
	sub_831CE980(ctx, base);
	// lbz r10,1928(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1928);
	// addi r11,r31,1929
	ctx.r11.s64 = ctx.r31.s64 + 1929;
	// addi r3,r31,1952
	ctx.r3.s64 = ctx.r31.s64 + 1952;
	// addi r4,r30,1952
	ctx.r4.s64 = ctx.r30.s64 + 1952;
	// stb r10,1928(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1928, ctx.r10.u8);
	// lbz r9,1929(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1929);
	// stb r9,1929(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1929, ctx.r9.u8);
	// lbz r8,1930(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1930);
	// stb r8,1930(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1930, ctx.r8.u8);
	// lwz r7,1932(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// stw r7,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r7.u32);
	// lwz r6,1936(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stw r6,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r6.u32);
	// lwz r5,1940(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r5,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r5.u32);
	// lwz r11,1944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// lbz r10,1948(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1948);
	// stb r10,1948(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1948, ctx.r10.u8);
	// bl 0x82b818d0
	ctx.lr = 0x838337D0;
	sub_82B818D0(ctx, base);
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

__attribute__((alias("__imp__sub_838337EC"))) PPC_WEAK_FUNC(sub_838337EC);
PPC_FUNC_IMPL(__imp__sub_838337EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838337F0"))) PPC_WEAK_FUNC(sub_838337F0);
PPC_FUNC_IMPL(__imp__sub_838337F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r8,-31769
	ctx.r8.s64 = -2082013184;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lwz r9,6288(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6288);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r9,6288(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6288);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blt cr6,0x83833844
	if (cr6.lt) goto loc_83833844;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83833844:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83833860"))) PPC_WEAK_FUNC(sub_83833860);
PPC_FUNC_IMPL(__imp__sub_83833860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83833868;
	__savegprlr_22(ctx, base);
	// stwu r1,-4000(r1)
	ea = -4000 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x83833874;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83833878;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r4,r10,222
	ctx.r4.s64 = ctx.r10.s64 + 14548992;
	// addi r4,r4,-12208
	ctx.r4.s64 = ctx.r4.s64 + -12208;
	// bl 0x83833718
	ctx.lr = 0x83833890;
	sub_83833718(ctx, base);
	// lbz r11,163(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 163);
	// lbz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x838338ac
	if (cr6.lt) goto loc_838338AC;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_838338AC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x838338bc
	if (cr6.lt) goto loc_838338BC;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_838338BC:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_838338D4:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831cdcf0
	ctx.lr = 0x838338E4;
	sub_831CDCF0(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r11,r30,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// stb r27,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r27.u8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r25,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r25.u8);
	// stb r28,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r28.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x8383392C;
	sub_831CE7D8(ctx, base);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lbz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// lbz r6,77(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// lbz r5,78(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 78);
	// lwz r3,2056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2056);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stb r7,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// stb r6,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r6.u8);
	// stb r5,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r5.u8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x83833964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x83833988
	if (!cr6.eq) goto loc_83833988;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// beq cr6,0x83833980
	if (cr6.eq) goto loc_83833980;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
loc_83833980:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x838339a0
	if (cr6.eq) goto loc_838339A0;
loc_83833988:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x838338d4
	if (cr6.lt) goto loc_838338D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4000
	ctx.r1.s64 = ctx.r1.s64 + 4000;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838339A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4000
	ctx.r1.s64 = ctx.r1.s64 + 4000;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838339AC"))) PPC_WEAK_FUNC(sub_838339AC);
PPC_FUNC_IMPL(__imp__sub_838339AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838339B0"))) PPC_WEAK_FUNC(sub_838339B0);
PPC_FUNC_IMPL(__imp__sub_838339B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x838339B8;
	__savegprlr_17(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82efef08
	ctx.lr = 0x838339CC;
	sub_82EFEF08(ctx, base);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// bl 0x82efef08
	ctx.lr = 0x838339D4;
	sub_82EFEF08(ctx, base);
	// li r17,2
	ctx.r17.s64 = 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838339fc
	if (cr6.eq) goto loc_838339FC;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18);
	// lbz r9,26(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// stw r9,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r9.u32);
	// b 0x83833a0c
	goto loc_83833A0C;
loc_838339FC:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r17,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r17.u32);
	// stw r17,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r17.u32);
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
loc_83833A0C:
	// bl 0x82d4bb00
	ctx.lr = 0x83833A10;
	sub_82D4BB00(ctx, base);
	// addi r9,r1,332
	ctx.r9.s64 = ctx.r1.s64 + 332;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r20,r11,25448
	ctx.r20.u64 = ctx.r11.u64 | 25448;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,5
	ctx.r8.s64 = 327680;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// ori r23,r8,14904
	ctx.r23.u64 = ctx.r8.u64 | 14904;
	// ori r28,r7,26240
	ctx.r28.u64 = ctx.r7.u64 | 26240;
	// ori r25,r6,26244
	ctx.r25.u64 = ctx.r6.u64 | 26244;
	// ori r26,r5,26252
	ctx.r26.u64 = ctx.r5.u64 | 26252;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r21,15
	ctx.r21.s64 = 15;
	// addi r22,r9,-20384
	ctx.r22.s64 = ctx.r9.s64 + -20384;
loc_83833A6C:
	// mulli r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 * 304;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r3,r29,14
	ctx.r3.u64 = ctx.r29.u32 & 0x3FFFF;
	// bl 0x8311c6c0
	ctx.lr = 0x83833A80;
	sub_8311C6C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83833A88;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bl 0x83123a08
	ctx.lr = 0x83833A98;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,1209
	ctx.r4.s64 = ctx.r11.s64 + 1209;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x83833AAC;
	sub_831CE980(ctx, base);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
loc_83833AB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83833ae0
	if (!cr6.eq) goto loc_83833AE0;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83833ae0
	if (!cr6.eq) goto loc_83833AE0;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83833af4
	if (cr6.eq) goto loc_83833AF4;
loc_83833AE0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x83833ab4
	if (cr6.lt) goto loc_83833AB4;
	// li r10,10
	ctx.r10.s64 = 10;
loc_83833AF4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x83833b08
	if (cr6.lt) goto loc_83833B08;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// b 0x83833b18
	goto loc_83833B18;
loc_83833B08:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,513
	ctx.r10.s64 = ctx.r1.s64 + 513;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_83833B18:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837bb4d0
	ctx.lr = 0x83833B34;
	sub_837BB4D0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83833b48
	if (!cr6.lt) goto loc_83833B48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_83833B48:
	// bl 0x83104018
	ctx.lr = 0x83833B4C;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83833bb4
	if (cr6.eq) goto loc_83833BB4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83833bb4
	if (cr6.eq) goto loc_83833BB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x833cc998
	ctx.lr = 0x83833B80;
	sub_833CC998(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x83833B94;
	sub_831D0B08(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x833d1340
	ctx.lr = 0x83833BB0;
	sub_833D1340(ctx, base);
	// b 0x83833c2c
	goto loc_83833C2C;
loc_83833BB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x833cc998
	ctx.lr = 0x83833BD0;
	sub_833CC998(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833ce3f8
	ctx.lr = 0x83833BE4;
	sub_833CE3F8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mulli r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 * 56;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r4,r7,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// rlwinm r6,r4,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r4,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r4,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// bl 0x833cc5b8
	ctx.lr = 0x83833C08;
	sub_833CC5B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x833cd3b8
	ctx.lr = 0x83833C24;
	sub_833CD3B8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833cd2b8
	ctx.lr = 0x83833C2C;
	sub_833CD2B8(ctx, base);
loc_83833C2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r7,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r3,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r3,r3,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r10,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r10.u8);
	// addi r29,r1,104
	ctx.r29.s64 = ctx.r1.s64 + 104;
	// stb r3,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r3.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r11.u8);
	// stb r10,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r10.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,1639
	ctx.r6.s64 = ctx.r11.s64 + 1639;
	// mulli r10,r6,56
	ctx.r10.s64 = ctx.r6.s64 * 56;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r9,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// rlwinm r9,r9,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r9,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r9,2(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lwzx r11,r6,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r6,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// rlwinm r4,r6,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r10,r6,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// stb r4,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r4.u8);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r10,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// rlwinm r7,r10,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stb r8,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// addi r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 9;
	// stb r7,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r7.u8);
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r4,1(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r5,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r5.u8);
	// lbz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r4,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r4.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d4bb78
	ctx.lr = 0x83833D84;
	sub_82D4BB78(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d4bc28
	ctx.lr = 0x83833DA4;
	sub_82D4BC28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x83833dc8
	if (cr6.eq) goto loc_83833DC8;
	// stb r18,15(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15, ctx.r18.u8);
	// b 0x83833dcc
	goto loc_83833DCC;
loc_83833DC8:
	// stb r19,15(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15, ctx.r19.u8);
loc_83833DCC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83833de8
	if (cr6.lt) goto loc_83833DE8;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83833DE8;
	sub_825952B8(ctx, base);
loc_83833DE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// stb r19,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r19.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83833a6c
	if (cr6.lt) goto loc_83833A6C;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lbz r9,191(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 191);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r5,347(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 347);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r8,26206
	ctx.r11.u64 = ctx.r8.u64 | 26206;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// ori r10,r10,26262
	ctx.r10.u64 = ctx.r10.u64 | 26262;
	// ori r7,r7,26204
	ctx.r7.u64 = ctx.r7.u64 | 26204;
	// ori r8,r4,26260
	ctx.r8.u64 = ctx.r4.u64 | 26260;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83833eb0
	if (!cr6.eq) goto loc_83833EB0;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83833e80
	if (!cr6.eq) goto loc_83833E80;
	// lhzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x83833e80
	if (!cr6.eq) goto loc_83833E80;
	// lbzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83833e80
	if (cr6.eq) goto loc_83833E80;
	// lbzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 & ctx.r6.u64;
loc_83833E80:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83833eb0
	if (!cr6.eq) goto loc_83833EB0;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83833eb0
	if (!cr6.eq) goto loc_83833EB0;
	// lbzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83833eac
	if (cr6.eq) goto loc_83833EAC;
	// lbzx r8,r31,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83833eb0
	if (!cr6.eq) goto loc_83833EB0;
loc_83833EAC:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_83833EB0:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83833edc
	if (!cr6.eq) goto loc_83833EDC;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83833edc
	if (!cr6.eq) goto loc_83833EDC;
	// lhzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// subf r4,r7,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfic r3,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 & ctx.r27.u64;
loc_83833EDC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83833f08
	if (!cr6.eq) goto loc_83833F08;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x83833f08
	if (!cr6.eq) goto loc_83833F08;
	// lhzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lhzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 & ctx.r28.u64;
loc_83833F08:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83833fc0
	if (!cr6.eq) goto loc_83833FC0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// ori r29,r11,26200
	ctx.r29.u64 = ctx.r11.u64 | 26200;
loc_83833F20:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83833fb4
	if (cr6.eq) goto loc_83833FB4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83833fb4
	if (cr6.eq) goto loc_83833FB4;
	// cmplwi cr6,r6,128
	cr6.compare<uint32_t>(ctx.r6.u32, 128, xer);
	// bge cr6,0x83833fb4
	if (!cr6.lt) goto loc_83833FB4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83833f7c
	if (!cr6.eq) goto loc_83833F7C;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83833fb4
	if (cr6.eq) goto loc_83833FB4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83833f74
	if (cr6.lt) goto loc_83833F74;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83833F74:
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// b 0x83833fa8
	goto loc_83833FA8;
loc_83833F7C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83833fb4
	if (!cr6.eq) goto loc_83833FB4;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83833fb4
	if (cr6.eq) goto loc_83833FB4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83833fa4
	if (cr6.lt) goto loc_83833FA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83833FA4:
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
loc_83833FA8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x831d0b58
	ctx.lr = 0x83833FB4;
	sub_831D0B58(ctx, base);
loc_83833FB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83833f20
	if (cr6.lt) goto loc_83833F20;
loc_83833FC0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x833c8e10
	ctx.lr = 0x83833FC8;
	sub_833C8E10(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x833cd338
	ctx.lr = 0x83833FD0;
	sub_833CD338(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x833cd338
	ctx.lr = 0x83833FD8;
	sub_833CD338(ctx, base);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83833FE0"))) PPC_WEAK_FUNC(sub_83833FE0);
PPC_FUNC_IMPL(__imp__sub_83833FE0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83834028
	if (cr6.eq) goto loc_83834028;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,55324
	ctx.r5.u64 = ctx.r5.u64 | 55324;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r4,-10208
	ctx.r4.s64 = ctx.r4.s64 + -10208;
	// bl 0x832d24b8
	ctx.lr = 0x83834020;
	sub_832D24B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83834028:
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

__attribute__((alias("__imp__sub_8383403C"))) PPC_WEAK_FUNC(sub_8383403C);
PPC_FUNC_IMPL(__imp__sub_8383403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83834040"))) PPC_WEAK_FUNC(sub_83834040);
PPC_FUNC_IMPL(__imp__sub_83834040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83834048;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// bl 0x82d04220
	ctx.lr = 0x83834078;
	sub_82D04220(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x8383408c
	if (!cr6.lt) goto loc_8383408C;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_8383408C:
	// bl 0x82d14ce8
	ctx.lr = 0x83834090;
	sub_82D14CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d14de8
	ctx.lr = 0x8383409C;
	sub_82D14DE8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23254
	ctx.r10.u64 = ctx.r11.u64 | 23254;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x838340e4
	if (cr6.eq) goto loc_838340E4;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x82d04220
	ctx.lr = 0x838340C0;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x838340d4
	if (!cr6.lt) goto loc_838340D4;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_838340D4:
	// bl 0x82d14ce8
	ctx.lr = 0x838340D8;
	sub_82D14CE8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d14de8
	ctx.lr = 0x838340E4;
	sub_82D14DE8(ctx, base);
loc_838340E4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8383413c
	if (cr6.eq) goto loc_8383413C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bne cr6,0x8383413c
	if (!cr6.eq) goto loc_8383413C;
	// lis r4,109
	ctx.r4.s64 = 7143424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82d04220
	ctx.lr = 0x83834118;
	sub_82D04220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x8383412c
	if (!cr6.lt) goto loc_8383412C;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_8383412C:
	// bl 0x82d14ce8
	ctx.lr = 0x83834130;
	sub_82D14CE8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d14de8
	ctx.lr = 0x8383413C;
	sub_82D14DE8(ctx, base);
loc_8383413C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8383415c
	if (cr6.lt) goto loc_8383415C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8383415C;
	sub_825952B8(ctx, base);
loc_8383415C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83834164"))) PPC_WEAK_FUNC(sub_83834164);
PPC_FUNC_IMPL(__imp__sub_83834164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83834168"))) PPC_WEAK_FUNC(sub_83834168);
PPC_FUNC_IMPL(__imp__sub_83834168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83834170;
	__savegprlr_21(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// blt cr6,0x83834194
	if (cr6.lt) goto loc_83834194;
	// cmpwi cr6,r7,11
	cr6.compare<int32_t>(ctx.r7.s32, 11, xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// blt cr6,0x83834198
	if (cr6.lt) goto loc_83834198;
loc_83834194:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_83834198:
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r31,472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x831cdcf0
	ctx.lr = 0x838341B4;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r23,128
	ctx.r3.s64 = ctx.r23.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x838341C4;
	sub_831CDCF0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82a8c428
	ctx.lr = 0x838341D4;
	sub_82A8C428(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x838341D8;
	sub_831156E8(ctx, base);
	// lwz r30,56(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x831156e8
	ctx.lr = 0x838341E0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8312d5b0
	ctx.lr = 0x838341F8;
	sub_8312D5B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8312d5b0
	ctx.lr = 0x8383420C;
	sub_8312D5B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d74280
	ctx.lr = 0x83834218;
	sub_82D74280(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r22,r11,-20748
	ctx.r22.s64 = ctx.r11.s64 + -20748;
	// addi r4,r22,-8
	ctx.r4.s64 = ctx.r22.s64 + -8;
	// bl 0x82473550
	ctx.lr = 0x83834228;
	sub_82473550(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d74280
	ctx.lr = 0x83834230;
	sub_82D74280(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r21,2
	ctx.r21.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83834250
	if (cr6.lt) goto loc_83834250;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x83834250;
	sub_825952B8(ctx, base);
loc_83834250:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// blt cr6,0x8383427c
	if (cr6.lt) goto loc_8383427C;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x8383427C;
	sub_825952B8(ctx, base);
loc_8383427C:
	// stw r25,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r25.u32);
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r27,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r27.u8);
	// bl 0x82a79bf8
	ctx.lr = 0x83834294;
	sub_82A79BF8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x838342a8
	if (!cr6.lt) goto loc_838342A8;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
loc_838342A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8308ec70
	ctx.lr = 0x838342B4;
	sub_8308EC70(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x838342c8
	if (cr6.lt) goto loc_838342C8;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x838342C8;
	sub_82416268(ctx, base);
loc_838342C8:
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// bl 0x82a79160
	ctx.lr = 0x838342DC;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x838342F0;
	sub_831CCF00(ctx, base);
	// bl 0x83832cf8
	ctx.lr = 0x838342F4;
	sub_83832CF8(ctx, base);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d04220
	ctx.lr = 0x8383430C;
	sub_82D04220(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x83834320
	if (!cr6.lt) goto loc_83834320;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_83834320:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8308ec70
	ctx.lr = 0x8383432C;
	sub_8308EC70(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83834348
	if (cr6.lt) goto loc_83834348;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83834348;
	sub_825952B8(ctx, base);
loc_83834348:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// beq cr6,0x83834374
	if (cr6.eq) goto loc_83834374;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47d40
	ctx.lr = 0x83834368;
	sub_82A47D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8383442c
	if (!cr6.eq) goto loc_8383442C;
loc_83834374:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83834398
	if (!cr6.eq) goto loc_83834398;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a1a5a8
	ctx.lr = 0x83834390;
	sub_82A1A5A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x838343c4
	goto loc_838343C4;
loc_83834398:
	// lwz r31,728(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 728);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838343c4
	if (cr6.eq) goto loc_838343C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a56518
	ctx.lr = 0x838343AC;
	sub_82A56518(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a56460
	ctx.lr = 0x838343B8;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838343c4
	if (cr6.eq) goto loc_838343C4;
	// lbz r30,1(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
loc_838343C4:
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// ori r4,r4,148
	ctx.r4.u64 = ctx.r4.u64 | 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x838343E4;
	sub_82D042A8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x838343f8
	if (!cr6.lt) goto loc_838343F8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_838343F8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8308ec70
	ctx.lr = 0x83834404;
	sub_8308EC70(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83834420
	if (cr6.lt) goto loc_83834420;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x83834420;
	sub_825952B8(ctx, base);
loc_83834420:
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_8383442C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// li r29,255
	ctx.r29.s64 = 255;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8383449c
	if (cr6.eq) goto loc_8383449C;
	// lwz r31,728(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 728);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838344d8
	if (cr6.eq) goto loc_838344D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a56518
	ctx.lr = 0x83834454;
	sub_82A56518(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a56460
	ctx.lr = 0x83834460;
	sub_82A56460(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838344d8
	if (cr6.eq) goto loc_838344D8;
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83834494
	if (cr6.eq) goto loc_83834494;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83834494
	if (cr6.eq) goto loc_83834494;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x83834494
	if (cr6.eq) goto loc_83834494;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x83834494
	if (cr6.eq) goto loc_83834494;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x838344d8
	if (!cr6.eq) goto loc_838344D8;
loc_83834494:
	// ld r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// b 0x838344cc
	goto loc_838344CC;
loc_8383449C:
	// lbz r11,92(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 92);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838344c8
	if (cr6.eq) goto loc_838344C8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x838344c8
	if (cr6.eq) goto loc_838344C8;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beq cr6,0x838344c8
	if (cr6.eq) goto loc_838344C8;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x838344c8
	if (cr6.eq) goto loc_838344C8;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bne cr6,0x838344d8
	if (!cr6.eq) goto loc_838344D8;
loc_838344C8:
	// ld r11,4316(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 4316);
loc_838344CC:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_838344D8:
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// blt cr6,0x83834508
	if (cr6.lt) goto loc_83834508;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x83834508
	if (!cr6.lt) goto loc_83834508;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x83834508
	if (cr6.lt) goto loc_83834508;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8383450c
	if (cr6.lt) goto loc_8383450C;
loc_83834508:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8383450C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83834588
	if (cr6.eq) goto loc_83834588;
	// bl 0x831156e8
	ctx.lr = 0x8383451C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8312d620
	ctx.lr = 0x83834534;
	sub_8312D620(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83834548
	if (cr6.lt) goto loc_83834548;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8383454c
	goto loc_8383454C;
loc_83834548:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8383454C:
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ori r4,r4,149
	ctx.r4.u64 = ctx.r4.u64 | 149;
	// bl 0x82d042a8
	ctx.lr = 0x8383455C;
	sub_82D042A8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83834578
	if (cr6.lt) goto loc_83834578;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x83834578;
	sub_825952B8(ctx, base);
loc_83834578:
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// b 0x83834598
	goto loc_83834598;
loc_83834588:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x83834598;
	sub_8259CC28(ctx, base);
loc_83834598:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x838345ac
	if (!cr6.lt) goto loc_838345AC;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_838345AC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8308ec70
	ctx.lr = 0x838345B8;
	sub_8308EC70(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x838345d4
	if (cr6.lt) goto loc_838345D4;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x838345D4;
	sub_825952B8(ctx, base);
loc_838345D4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838345E0"))) PPC_WEAK_FUNC(sub_838345E0);
PPC_FUNC_IMPL(__imp__sub_838345E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838345E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r4,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r4.u32);
	// mulli r11,r4,304
	ctx.r11.s64 = ctx.r4.s64 * 304;
	// ori r9,r10,25448
	ctx.r9.u64 = ctx.r10.u64 | 25448;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stwx r5,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83834624
	if (cr6.eq) goto loc_83834624;
	// li r29,1
	ctx.r29.s64 = 1;
loc_83834624:
	// bl 0x831156e8
	ctx.lr = 0x83834628;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x83834630;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addis r23,r11,5
	ctx.r23.s64 = ctx.r11.s64 + 327680;
	// addi r23,r23,14904
	ctx.r23.s64 = ctx.r23.s64 + 14904;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83123a08
	ctx.lr = 0x83834648;
	sub_83123A08(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311c148
	ctx.lr = 0x83834658;
	sub_8311C148(ctx, base);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mulli r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 * 56;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r30,r9,26200
	ctx.r30.u64 = ctx.r9.u64 | 26200;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// bl 0x838337f0
	ctx.lr = 0x83834678;
	sub_838337F0(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// clrlwi r21,r29,24
	ctx.r21.u64 = ctx.r29.u32 & 0xFF;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x838347bc
	if (cr6.eq) goto loc_838347BC;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// rlwinm r8,r11,0,16,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r8,8192
	cr6.compare<uint32_t>(ctx.r8.u32, 8192, xer);
	// bne cr6,0x838346b0
	if (!cr6.eq) goto loc_838346B0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x838346b8
	goto loc_838346B8;
loc_838346B0:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
loc_838346B8:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mulli r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 * 56;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r6,r8,26204
	ctx.r6.u64 = ctx.r8.u64 | 26204;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r26,r4,26206
	ctx.r26.u64 = ctx.r4.u64 | 26206;
	// stbx r3,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r3.u8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r9,784(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 784);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mulli r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 * 56;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r6,r10,26208
	ctx.r6.u64 = ctx.r10.u64 | 26208;
	// sthx r9,r7,r26
	PPC_STORE_U16(ctx.r7.u32 + ctx.r26.u32, ctx.r9.u16);
	// lwz r5,796(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r5,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x7;
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// beq cr6,0x838348c4
	if (cr6.eq) goto loc_838348C4;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r29,r28,4296
	ctx.r29.s64 = ctx.r28.s64 + 4296;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r28,r28,4216
	ctx.r28.s64 = ctx.r28.s64 + 4216;
	// addi r27,r27,26064
	ctx.r27.s64 = ctx.r27.s64 + 26064;
loc_83834734:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83834770
	if (!cr6.eq) goto loc_83834770;
	// addi r5,r28,-64
	ctx.r5.s64 = ctx.r28.s64 + -64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x83834750;
	sub_831CE7D8(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,-16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// addi r9,r11,1348
	ctx.r9.s64 = ctx.r11.s64 + 1348;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r8,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u8);
	// b 0x838347a0
	goto loc_838347A0;
loc_83834770:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x838347a0
	if (!cr6.eq) goto loc_838347A0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r27,68
	ctx.r3.s64 = ctx.r27.s64 + 68;
	// bl 0x831ce7d8
	ctx.lr = 0x83834788;
	sub_831CE7D8(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1348
	ctx.r9.s64 = ctx.r11.s64 + 1348;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r10,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u8);
loc_838347A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x83834734
	if (cr6.lt) goto loc_83834734;
	// b 0x838348c4
	goto loc_838348C4;
loc_838347BC:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,796(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 796);
	// rlwinm r8,r11,0,16,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r8,8192
	cr6.compare<uint32_t>(ctx.r8.u32, 8192, xer);
	// bne cr6,0x838347dc
	if (!cr6.eq) goto loc_838347DC;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x838347e4
	goto loc_838347E4;
loc_838347DC:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
loc_838347E4:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mulli r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 * 56;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r6,r8,26204
	ctx.r6.u64 = ctx.r8.u64 | 26204;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ori r9,r11,26208
	ctx.r9.u64 = ctx.r11.u64 | 26208;
	// stbx r3,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r3.u8);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lhz r10,784(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 784);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mulli r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 * 56;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r26,r4,26206
	ctx.r26.u64 = ctx.r4.u64 | 26206;
	// addis r27,r24,-1
	ctx.r27.s64 = ctx.r24.s64 + -65536;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// ori r29,r29,26064
	ctx.r29.u64 = ctx.r29.u64 | 26064;
	// addi r27,r27,-25887
	ctx.r27.s64 = ctx.r27.s64 + -25887;
	// sthx r10,r7,r26
	PPC_STORE_U16(ctx.r7.u32 + ctx.r26.u32, ctx.r10.u16);
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mulli r11,r5,56
	ctx.r11.s64 = ctx.r5.s64 * 56;
	// lwz r6,796(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 796);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// rlwinm r3,r6,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x7;
	// ori r28,r11,26128
	ctx.r28.u64 = ctx.r11.u64 | 26128;
	// stwx r3,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r3.u32);
loc_83834860:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bge cr6,0x83834870
	if (!cr6.lt) goto loc_83834870;
	// add r5,r27,r29
	ctx.r5.u64 = ctx.r27.u64 + ctx.r29.u64;
loc_83834870:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x83834888;
	sub_831CE7D8(ctx, base);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x83834898
	if (cr6.lt) goto loc_83834898;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x838348a0
	goto loc_838348A0;
loc_83834898:
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r10,241(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 241);
loc_838348A0:
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r9,r11,1348
	ctx.r9.s64 = ctx.r11.s64 + 1348;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r10,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u8);
	// blt cr6,0x83834860
	if (cr6.lt) goto loc_83834860;
loc_838348C4:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_838348C8:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x838348e4
	if (!cr6.eq) goto loc_838348E4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_838348E4:
	// bl 0x82f22f68
	ctx.lr = 0x838348E8;
	sub_82F22F68(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,22944
	ctx.r9.s64 = ctx.r11.s64 + 22944;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// blt cr6,0x838348c8
	if (cr6.lt) goto loc_838348C8;
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82d40958
	ctx.lr = 0x8383493C;
	sub_82D40958(ctx, base);
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 * 56;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,26212
	ctx.r3.s64 = ctx.r3.s64 + 26212;
	// bl 0x8259cb28
	ctx.lr = 0x83834960;
	sub_8259CB28(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x83834980
	if (cr6.lt) goto loc_83834980;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83834980;
	sub_825952B8(ctx, base);
loc_83834980:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stb r22,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r22.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// lis r28,-31769
	ctx.r28.s64 = -2082013184;
	// ori r30,r10,26344
	ctx.r30.u64 = ctx.r10.u64 | 26344;
	// ori r29,r9,25452
	ctx.r29.u64 = ctx.r9.u64 | 25452;
loc_838349AC:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83834a1c
	if (cr6.eq) goto loc_83834A1C;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhz r8,808(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 808);
	// ld r10,6240(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 6240);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// add r9,r6,r30
	ctx.r9.u64 = ctx.r6.u64 + ctx.r30.u64;
	// bge cr6,0x83834a00
	if (!cr6.lt) goto loc_83834A00;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r8,r25
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r25.u32);
	// beq cr6,0x83834a00
	if (cr6.eq) goto loc_83834A00;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r8,512(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83834A00:
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mulli r9,r9,38
	ctx.r9.s64 = ctx.r9.s64 * 38;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stdx r10,r7,r29
	PPC_STORE_U64(ctx.r7.u32 + ctx.r29.u32, ctx.r10.u64);
	// b 0x83834a8c
	goto loc_83834A8C;
loc_83834A1C:
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhz r9,808(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 808);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// add r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bge cr6,0x83834a50
	if (!cr6.lt) goto loc_83834A50;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83834a50
	if (cr6.eq) goto loc_83834A50;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r9,512(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_83834A50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83123ba8
	ctx.lr = 0x83834A60;
	sub_83123BA8(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 * 38;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
loc_83834A8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x838349ac
	if (cr6.lt) goto loc_838349AC;
	// bl 0x83a7d958
	ctx.lr = 0x83834AA4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x83834AA8;
	sub_83524138(ctx, base);
	// lis r11,14470
	ctx.r11.s64 = 948305920;
	// lis r10,13421
	ctx.r10.s64 = 879558656;
	// ori r9,r11,22859
	ctx.r9.u64 = ctx.r11.u64 | 22859;
	// ori r8,r10,50646
	ctx.r8.u64 = ctx.r10.u64 | 50646;
	// li r11,11
	ctx.r11.s64 = 11;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// mulhdu r7,r3,r9
	ctx.r7.u64 = ((unsigned __int128)ctx.r3.u64 * (unsigned __int128)ctx.r9.u64) >> 64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rldicl r6,r7,53,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 53) & 0x1FFFFFFFFFFFFF;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mulli r5,r6,10000
	ctx.r5.s64 = ctx.r6.s64 * 10000;
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_83834ADC:
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 * 76;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,22811
	ctx.r7.s64 = ctx.r10.s64 + 22811;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// bdnz 0x83834adc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83834ADC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83834B08"))) PPC_WEAK_FUNC(sub_83834B08);
PPC_FUNC_IMPL(__imp__sub_83834B08) {
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
	ctx.lr = 0x83834B10;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-18160
	ctx.r10.s64 = ctx.r11.s64 + -18160;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x839866b0
	ctx.lr = 0x83834B28;
	sub_839866B0(ctx, base);
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83834b70
	if (cr6.eq) goto loc_83834B70;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83834B48;
	sub_82595150(ctx, base);
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83834b68
	if (cr6.eq) goto loc_83834B68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83834B68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83834B68:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83834B70;
	sub_82595170(ctx, base);
loc_83834B70:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83834bb8
	if (cr6.eq) goto loc_83834BB8;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83834B8C;
	sub_82595150(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83834bac
	if (cr6.eq) goto loc_83834BAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83834BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83834BAC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83834BB4;
	sub_82595170(ctx, base);
	// stw r27,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r27.u32);
loc_83834BB8:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83834c00
	if (cr6.eq) goto loc_83834C00;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83834BD4;
	sub_82595150(ctx, base);
	// lwz r3,56(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83834bf4
	if (cr6.eq) goto loc_83834BF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83834BF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83834BF4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83834BFC;
	sub_82595170(ctx, base);
	// stw r27,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r27.u32);
loc_83834C00:
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// addi r30,r30,22052
	ctx.r30.s64 = ctx.r30.s64 + 22052;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83834c4c
	if (cr6.eq) goto loc_83834C4C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83834C24;
	sub_82595150(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83834c40
	if (cr6.eq) goto loc_83834C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83838c08
	ctx.lr = 0x83834C38;
	sub_83838C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83834C40;
	sub_82416268(ctx, base);
loc_83834C40:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83834C48;
	sub_82595170(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_83834C4C:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// addi r31,r31,26340
	ctx.r31.s64 = ctx.r31.s64 + 26340;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83834c9c
	if (cr6.eq) goto loc_83834C9C;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83834C70;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83834c90
	if (cr6.eq) goto loc_83834C90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83834C90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83834C90:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83834C98;
	sub_82595170(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834C9C:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// addi r31,r31,23256
	ctx.r31.s64 = ctx.r31.s64 + 23256;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83834cb8
	if (cr6.eq) goto loc_83834CB8;
	// bl 0x83103e98
	ctx.lr = 0x83834CB4;
	sub_83103E98(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834CB8:
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// addis r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 65536;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,26312
	ctx.r10.s64 = ctx.r10.s64 + 26312;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
	// stw r27,4704(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4704, ctx.r27.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
loc_83834CDC:
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83834cfc
	if (cr6.lt) goto loc_83834CFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83834CFC;
	sub_825952B8(ctx, base);
loc_83834CFC:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// bge 0x83834cdc
	if (!cr0.lt) goto loc_83834CDC;
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23224
	ctx.r31.s64 = ctx.r31.s64 + 23224;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834D2C;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834d54
	if (cr6.eq) goto loc_83834D54;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834D50;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834D54:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23204
	ctx.r31.s64 = ctx.r31.s64 + 23204;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834D70;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834d98
	if (cr6.eq) goto loc_83834D98;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834D94;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834D98:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23184
	ctx.r31.s64 = ctx.r31.s64 + 23184;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834DB4;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834ddc
	if (cr6.eq) goto loc_83834DDC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834DD8;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834DDC:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23164
	ctx.r31.s64 = ctx.r31.s64 + 23164;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834DF8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834e20
	if (cr6.eq) goto loc_83834E20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834E1C;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834E20:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23144
	ctx.r31.s64 = ctx.r31.s64 + 23144;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834E3C;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834e64
	if (cr6.eq) goto loc_83834E64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834E60;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834E64:
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,23124
	ctx.r3.s64 = ctx.r3.s64 + 23124;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x83834E7C;
	sub_825C3358(ctx, base);
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r31,r31,23104
	ctx.r31.s64 = ctx.r31.s64 + 23104;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834E98;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834ec0
	if (cr6.eq) goto loc_83834EC0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834EBC;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834EC0:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23084
	ctx.r31.s64 = ctx.r31.s64 + 23084;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834EDC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834f04
	if (cr6.eq) goto loc_83834F04;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834F00;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834F04:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23064
	ctx.r31.s64 = ctx.r31.s64 + 23064;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834F20;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834f48
	if (cr6.eq) goto loc_83834F48;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834F44;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834F48:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23044
	ctx.r31.s64 = ctx.r31.s64 + 23044;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834F64;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834f8c
	if (cr6.eq) goto loc_83834F8C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834F88;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834F8C:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23024
	ctx.r31.s64 = ctx.r31.s64 + 23024;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834FA8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83834fd0
	if (cr6.eq) goto loc_83834FD0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83834FCC;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83834FD0:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,23004
	ctx.r31.s64 = ctx.r31.s64 + 23004;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83834FEC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83835014
	if (cr6.eq) goto loc_83835014;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83835010;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83835014:
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,22984
	ctx.r3.s64 = ctx.r3.s64 + 22984;
	// addi r10,r11,-22948
	ctx.r10.s64 = ctx.r11.s64 + -22948;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x8383502C;
	sub_825C3358(ctx, base);
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r31,r31,22964
	ctx.r31.s64 = ctx.r31.s64 + 22964;
	// addi r8,r9,-24712
	ctx.r8.s64 = ctx.r9.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83835048;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83835070
	if (cr6.eq) goto loc_83835070;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8383506C;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83835070:
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,22944
	ctx.r3.s64 = ctx.r3.s64 + 22944;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x83835088;
	sub_825C3358(ctx, base);
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// addi r8,r9,-22948
	ctx.r8.s64 = ctx.r9.s64 + -22948;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// bl 0x825c3358
	ctx.lr = 0x838350A0;
	sub_825C3358(ctx, base);
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r31,r31,22904
	ctx.r31.s64 = ctx.r31.s64 + 22904;
	// addi r6,r7,-24712
	ctx.r6.s64 = ctx.r7.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x838350BC;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838350e4
	if (cr6.eq) goto loc_838350E4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x838350E0;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_838350E4:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,22884
	ctx.r31.s64 = ctx.r31.s64 + 22884;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83835100;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83835128
	if (cr6.eq) goto loc_83835128;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83835124;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83835128:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,22864
	ctx.r31.s64 = ctx.r31.s64 + 22864;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83835144;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8383516c
	if (cr6.eq) goto loc_8383516C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83835168;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8383516C:
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r30,22844
	ctx.r30.s64 = ctx.r30.s64 + 22844;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x83835188;
	sub_825C3358(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,-24712
	ctx.r29.s64 = ctx.r11.s64 + -24712;
loc_83835198:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r29,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838351d0
	if (cr6.eq) goto loc_838351D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838351d0
	if (cr6.eq) goto loc_838351D0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x838351CC;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_838351D0:
	// stb r27,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r27.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838351f8
	if (cr6.eq) goto loc_838351F8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x838351F4;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_838351F8:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x83835198
	if (!cr0.lt) goto loc_83835198;
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r30,22804
	ctx.r30.s64 = ctx.r30.s64 + 22804;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r29,r11,-24712
	ctx.r29.s64 = ctx.r11.s64 + -24712;
loc_83835218:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r29,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83835250
	if (cr6.eq) goto loc_83835250;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83835250
	if (cr6.eq) goto loc_83835250;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8383524C;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83835250:
	// stb r27,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r27.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83835278
	if (cr6.eq) goto loc_83835278;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83835274;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83835278:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x83835218
	if (!cr0.lt) goto loc_83835218;
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,22744
	ctx.r31.s64 = ctx.r31.s64 + 22744;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8383529C;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838352c4
	if (cr6.eq) goto loc_838352C4;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x838352C0;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_838352C4:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,22724
	ctx.r31.s64 = ctx.r31.s64 + 22724;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x838352E0;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83835308
	if (cr6.eq) goto loc_83835308;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83835304;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_83835308:
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,22704
	ctx.r31.s64 = ctx.r31.s64 + 22704;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83835324;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8383534c
	if (cr6.eq) goto loc_8383534C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x83835348;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8383534C:
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,22064
	ctx.r3.s64 = ctx.r3.s64 + 22064;
	// bl 0x82a0dc70
	ctx.lr = 0x83835358;
	sub_82A0DC70(ctx, base);
	// addi r3,r28,19732
	ctx.r3.s64 = ctx.r28.s64 + 19732;
	// bl 0x82a0da80
	ctx.lr = 0x83835360;
	sub_82A0DA80(ctx, base);
	// addi r3,r28,72
	ctx.r3.s64 = ctx.r28.s64 + 72;
	// bl 0x83839318
	ctx.lr = 0x83835368;
	sub_83839318(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x83835380;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838353a8
	if (cr6.eq) goto loc_838353A8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x838353A4;
	sub_8353F3B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_838353A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83535be8
	ctx.lr = 0x838353B0;
	sub_83535BE8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838353B8"))) PPC_WEAK_FUNC(sub_838353B8);
PPC_FUNC_IMPL(__imp__sub_838353B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x838353C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x835360c0
	ctx.lr = 0x838353CC;
	sub_835360C0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-18160
	ctx.r10.s64 = ctx.r11.s64 + -18160;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// addi r8,r9,-24656
	ctx.r8.s64 = ctx.r9.s64 + -24656;
	// stb r31,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r31.u8);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stb r31,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r31.u8);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// bl 0x83838da0
	ctx.lr = 0x83835414;
	sub_83838DA0(ctx, base);
	// li r18,2
	ctx.r18.s64 = 2;
	// stb r31,104(r30)
	PPC_STORE_U8(ctx.r30.u32 + 104, ctx.r31.u8);
	// addi r16,r30,132
	ctx.r16.s64 = ctx.r30.s64 + 132;
	// stb r31,105(r30)
	PPC_STORE_U8(ctx.r30.u32 + 105, ctx.r31.u8);
	// stb r31,106(r30)
	PPC_STORE_U8(ctx.r30.u32 + 106, ctx.r31.u8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stb r31,107(r30)
	PPC_STORE_U8(ctx.r30.u32 + 107, ctx.r31.u8);
	// stb r31,108(r30)
	PPC_STORE_U8(ctx.r30.u32 + 108, ctx.r31.u8);
	// stb r31,109(r30)
	PPC_STORE_U8(ctx.r30.u32 + 109, ctx.r31.u8);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stb r31,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r31.u8);
	// stw r18,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r18.u32);
	// bl 0x829174f0
	ctx.lr = 0x83835450;
	sub_829174F0(ctx, base);
	// addi r15,r30,19732
	ctx.r15.s64 = ctx.r30.s64 + 19732;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a28da0
	ctx.lr = 0x8383545C;
	sub_82A28DA0(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r7,r7,20632
	ctx.r7.u64 = ctx.r7.u64 | 20632;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// lis r26,0
	ctx.r26.s64 = 0;
	// ori r6,r6,20636
	ctx.r6.u64 = ctx.r6.u64 | 20636;
	// ori r5,r5,20656
	ctx.r5.u64 = ctx.r5.u64 | 20656;
	// ori r25,r3,22040
	ctx.r25.u64 = ctx.r3.u64 | 22040;
	// ori r7,r29,22056
	ctx.r7.u64 = ctx.r29.u64 | 22056;
	// ori r4,r4,22036
	ctx.r4.u64 = ctx.r4.u64 | 22036;
	// ori r11,r11,22041
	ctx.r11.u64 = ctx.r11.u64 | 22041;
	// ori r10,r10,22044
	ctx.r10.u64 = ctx.r10.u64 | 22044;
	// ori r9,r9,22048
	ctx.r9.u64 = ctx.r9.u64 | 22048;
	// ori r8,r8,22052
	ctx.r8.u64 = ctx.r8.u64 | 22052;
	// ori r28,r28,22060
	ctx.r28.u64 = ctx.r28.u64 | 22060;
	// ori r27,r27,22061
	ctx.r27.u64 = ctx.r27.u64 | 22061;
	// ori r22,r26,65535
	ctx.r22.u64 = ctx.r26.u64 | 65535;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r26,9
	ctx.r26.s64 = 9;
	// sthx r22,r30,r6
	PPC_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r22.u16);
	// stwx r29,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r29.u32);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stwx r31,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u32);
	// stbx r31,r30,r25
	PPC_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r31.u8);
	// addi r3,r3,22064
	ctx.r3.s64 = ctx.r3.s64 + 22064;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// stwx r31,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r26,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r26.u32);
	// stwx r31,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u32);
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// stbx r31,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r31.u8);
	// stbx r31,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r31.u8);
	// bl 0x82a0db20
	ctx.lr = 0x83835508;
	sub_82A0DB20(ctx, base);
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// addi r6,r6,22704
	ctx.r6.s64 = ctx.r6.s64 + 22704;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r4,22724
	ctx.r4.s64 = ctx.r4.s64 + 22724;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r3,r5,-22844
	ctx.r3.s64 = ctx.r5.s64 + -22844;
	// stb r31,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r31.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// addi r10,r10,22744
	ctx.r10.s64 = ctx.r10.s64 + 22744;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// addi r9,r11,-24692
	ctx.r9.s64 = ctx.r11.s64 + -24692;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// addi r7,r7,22764
	ctx.r7.s64 = ctx.r7.s64 + 22764;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// addi r6,r8,-24672
	ctx.r6.s64 = ctx.r8.s64 + -24672;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// addi r3,r5,-22152
	ctx.r3.s64 = ctx.r5.s64 + -22152;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// addi r4,r4,22804
	ctx.r4.s64 = ctx.r4.s64 + 22804;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// addi r8,r11,-22152
	ctx.r8.s64 = ctx.r11.s64 + -22152;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// addi r9,r9,22844
	ctx.r9.s64 = ctx.r9.s64 + 22844;
	// stb r31,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r31.u8);
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r5,r5,22864
	ctx.r5.s64 = ctx.r5.s64 + 22864;
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// addi r11,r6,7068
	ctx.r11.s64 = ctx.r6.s64 + 7068;
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,24(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24, ctx.r31.u8);
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// stw r31,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r31.u32);
	// addi r10,r10,-22216
	ctx.r10.s64 = ctx.r10.s64 + -22216;
	// stw r3,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r3.u32);
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// stw r31,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r31.u32);
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// stw r31,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r31.u32);
	// lis r26,-32254
	ctx.r26.s64 = -2113798144;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// addi r6,r6,22884
	ctx.r6.s64 = ctx.r6.s64 + 22884;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// addi r27,r27,22904
	ctx.r27.s64 = ctx.r27.s64 + 22904;
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// addi r28,r28,-9636
	ctx.r28.s64 = ctx.r28.s64 + -9636;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// addi r7,r7,22924
	ctx.r7.s64 = ctx.r7.s64 + 22924;
	// stb r31,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, ctx.r31.u8);
	// addi r3,r26,-24636
	ctx.r3.s64 = ctx.r26.s64 + -24636;
	// stw r31,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r31.u32);
	// stw r31,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r31.u32);
	// stw r31,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r31.u32);
	// stw r8,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r8.u32);
	// stb r31,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r31.u8);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// stb r31,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r31.u8);
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r31,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r31,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r31.u8);
	// addi r10,r10,22944
	ctx.r10.s64 = ctx.r10.s64 + 22944;
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// addi r9,r11,-22892
	ctx.r9.s64 = ctx.r11.s64 + -22892;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// stb r31,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r31.u8);
	// addi r5,r8,-22916
	ctx.r5.s64 = ctx.r8.s64 + -22916;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r6,r6,22964
	ctx.r6.s64 = ctx.r6.s64 + 22964;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r3,r3,22984
	ctx.r3.s64 = ctx.r3.s64 + 22984;
	// stb r31,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r31.u8);
	// addi r11,r4,-19064
	ctx.r11.s64 = ctx.r4.s64 + -19064;
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// addi r8,r8,23004
	ctx.r8.s64 = ctx.r8.s64 + 23004;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r31.u32);
	// addi r7,r9,11960
	ctx.r7.s64 = ctx.r9.s64 + 11960;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// addi r4,r4,23024
	ctx.r4.s64 = ctx.r4.s64 + 23024;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r31.u8);
	// addi r9,r9,23044
	ctx.r9.s64 = ctx.r9.s64 + 23044;
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// addi r28,r28,7068
	ctx.r28.s64 = ctx.r28.s64 + 7068;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r11,r5,12000
	ctx.r11.s64 = ctx.r5.s64 + 12000;
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// addi r6,r10,-9616
	ctx.r6.s64 = ctx.r10.s64 + -9616;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r7,r5,-9588
	ctx.r7.s64 = ctx.r5.s64 + -9588;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stb r31,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r31.u8);
	// addi r10,r10,23064
	ctx.r10.s64 = ctx.r10.s64 + 23064;
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// addi r3,r3,23084
	ctx.r3.s64 = ctx.r3.s64 + 23084;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r11,r5,-22824
	ctx.r11.s64 = ctx.r5.s64 + -22824;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r31.u32);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// addi r5,r5,11980
	ctx.r5.s64 = ctx.r5.s64 + 11980;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// addi r8,r8,23104
	ctx.r8.s64 = ctx.r8.s64 + 23104;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// addi r6,r6,23124
	ctx.r6.s64 = ctx.r6.s64 + 23124;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// stb r31,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r31.u8);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// addi r27,r27,23144
	ctx.r27.s64 = ctx.r27.s64 + 23144;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// addi r7,r7,23184
	ctx.r7.s64 = ctx.r7.s64 + 23184;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// addi r9,r11,-19040
	ctx.r9.s64 = ctx.r11.s64 + -19040;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r10,r10,23164
	ctx.r10.s64 = ctx.r10.s64 + 23164;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// addi r3,r4,-22864
	ctx.r3.s64 = ctx.r4.s64 + -22864;
	// stb r31,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r31.u8);
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// addi r4,r4,23204
	ctx.r4.s64 = ctx.r4.s64 + 23204;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// lis r28,1
	ctx.r28.s64 = 65536;
	// stw r31,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r31.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r31,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r31.u8);
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// addi r3,r5,-19152
	ctx.r3.s64 = ctx.r5.s64 + -19152;
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r31.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// addi r6,r8,4520
	ctx.r6.s64 = ctx.r8.s64 + 4520;
	// stb r31,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r31.u8);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// ori r8,r8,23244
	ctx.r8.u64 = ctx.r8.u64 | 23244;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r9,r9,23224
	ctx.r9.s64 = ctx.r9.s64 + 23224;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// lis r27,1
	ctx.r27.s64 = 65536;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stb r31,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r31.u8);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r3,r11,-8120
	ctx.r3.s64 = ctx.r11.s64 + -8120;
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r31.u32);
	// ori r7,r6,23248
	ctx.r7.u64 = ctx.r6.u64 | 23248;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r31.u8);
	// ori r6,r5,23252
	ctx.r6.u64 = ctx.r5.u64 | 23252;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// ori r5,r10,23253
	ctx.r5.u64 = ctx.r10.u64 | 23253;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// ori r3,r28,23254
	ctx.r3.u64 = ctx.r28.u64 | 23254;
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// ori r10,r27,23255
	ctx.r10.u64 = ctx.r27.u64 | 23255;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// addi r4,r11,-19116
	ctx.r4.s64 = ctx.r11.s64 + -19116;
	// stb r31,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r31.u8);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// lis r28,1
	ctx.r28.s64 = 65536;
	// stbx r31,r30,r3
	PPC_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u8);
	// ori r3,r11,23256
	ctx.r3.u64 = ctx.r11.u64 | 23256;
	// stwx r23,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r23.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r11,r4,23260
	ctx.r11.u64 = ctx.r4.u64 | 23260;
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// stbx r31,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u8);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r10,r28,23264
	ctx.r10.u64 = ctx.r28.u64 | 23264;
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stbx r31,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u8);
	// ori r9,r9,23265
	ctx.r9.u64 = ctx.r9.u64 | 23265;
	// stwx r31,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
	// ori r8,r8,23266
	ctx.r8.u64 = ctx.r8.u64 | 23266;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stbx r31,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u8);
	// ori r7,r7,23267
	ctx.r7.u64 = ctx.r7.u64 | 23267;
	// ori r6,r6,23268
	ctx.r6.u64 = ctx.r6.u64 | 23268;
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// ori r5,r5,23272
	ctx.r5.u64 = ctx.r5.u64 | 23272;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stbx r31,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwx r31,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u32);
	// ori r17,r3,23284
	ctx.r17.u64 = ctx.r3.u64 | 23284;
	// stwx r31,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r3,r11,23277
	ctx.r3.u64 = ctx.r11.u64 | 23277;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r4,r4,23276
	ctx.r4.u64 = ctx.r4.u64 | 23276;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stwx r31,r30,r17
	PPC_STORE_U32(ctx.r30.u32 + ctx.r17.u32, ctx.r31.u32);
	// ori r11,r10,23278
	ctx.r11.u64 = ctx.r10.u64 | 23278;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stbx r31,r30,r3
	PPC_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u8);
	// ori r10,r9,23279
	ctx.r10.u64 = ctx.r9.u64 | 23279;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stbx r31,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u8);
	// ori r9,r8,23280
	ctx.r9.u64 = ctx.r8.u64 | 23280;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// lis r27,1
	ctx.r27.s64 = 65536;
	// ori r8,r7,23304
	ctx.r8.u64 = ctx.r7.u64 | 23304;
	// stbx r31,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r31.u8);
	// lis r26,1
	ctx.r26.s64 = 65536;
	// ori r7,r6,23308
	ctx.r7.u64 = ctx.r6.u64 | 23308;
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// ori r6,r5,23312
	ctx.r6.u64 = ctx.r5.u64 | 23312;
	// ori r5,r28,23316
	ctx.r5.u64 = ctx.r28.u64 | 23316;
	// ori r4,r27,23320
	ctx.r4.u64 = ctx.r27.u64 | 23320;
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// ori r3,r26,23324
	ctx.r3.u64 = ctx.r26.u64 | 23324;
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stwx r31,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u32);
	// addi r28,r28,23328
	ctx.r28.s64 = ctx.r28.s64 + 23328;
	// stwx r31,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// stwx r31,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u32);
	// stwx r31,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u32);
loc_838359FC:
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x83835A14;
	sub_823FCA98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x839a0ad8
	ctx.lr = 0x83835A1C;
	sub_839A0AD8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,532
	ctx.r28.s64 = ctx.r28.s64 + 532;
	// bge 0x838359fc
	if (!cr0.lt) goto loc_838359FC;
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r28,r28,24392
	ctx.r28.s64 = ctx.r28.s64 + 24392;
loc_83835A34:
	// lis r11,-31869
	ctx.r11.s64 = -2088566784;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r6,r11,11128
	ctx.r6.s64 = ctx.r11.s64 + 11128;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x83835A4C;
	sub_823FCA98(ctx, base);
	// lis r10,-31869
	ctx.r10.s64 = -2088566784;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r10,11176
	ctx.r6.s64 = ctx.r10.s64 + 11176;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// bl 0x823fca98
	ctx.lr = 0x83835A64;
	sub_823FCA98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399f5e8
	ctx.lr = 0x83835A6C;
	sub_8399F5E8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,528
	ctx.r28.s64 = ctx.r28.s64 + 528;
	// bge 0x83835a34
	if (!cr0.lt) goto loc_83835A34;
	// addis r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 65536;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r26,r26,25448
	ctx.r26.s64 = ctx.r26.s64 + 25448;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83835A88:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,25144
	ctx.r6.s64 = ctx.r11.s64 + 25144;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x83835AA4;
	sub_823FCA98(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,304
	ctx.r28.s64 = ctx.r28.s64 + 304;
	// bge 0x83835a88
	if (!cr0.lt) goto loc_83835A88;
	// addis r19,r30,1
	ctx.r19.s64 = ctx.r30.s64 + 65536;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r19,r19,26056
	ctx.r19.s64 = ctx.r19.s64 + 26056;
	// addi r11,r11,26200
	ctx.r11.s64 = ctx.r11.s64 + 26200;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// sth r22,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r22.u16);
	// stw r31,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r31.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// stw r31,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r31.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83835afc
	if (cr6.lt) goto loc_83835AFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83835AFC:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,26336
	ctx.r8.u64 = ctx.r11.u64 | 26336;
	// ori r7,r10,26340
	ctx.r7.u64 = ctx.r10.u64 | 26340;
	// ori r6,r9,26408
	ctx.r6.u64 = ctx.r9.u64 | 26408;
	// lis r5,-31743
	ctx.r5.s64 = -2080309248;
	// addis r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 65536;
	// addis r21,r30,1
	ctx.r21.s64 = ctx.r30.s64 + 65536;
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// stwx r31,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u32);
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r24,22811
	ctx.r24.s64 = 22811;
	// stw r30,4704(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4704, ctx.r30.u32);
	// addi r25,r25,26064
	ctx.r25.s64 = ctx.r25.s64 + 26064;
	// addi r21,r21,26344
	ctx.r21.s64 = ctx.r21.s64 + 26344;
	// addi r29,r29,26232
	ctx.r29.s64 = ctx.r29.s64 + 26232;
	// lis r20,-31769
	ctx.r20.s64 = -2082013184;
	// li r14,3
	ctx.r14.s64 = 3;
	// lis r28,-31769
	ctx.r28.s64 = -2082013184;
loc_83835B58:
	// lwz r9,6288(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6288);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// ori r8,r8,25452
	ctx.r8.u64 = ctx.r8.u64 | 25452;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,6288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6288);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
loc_83835B8C:
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ld r10,6240(r20)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r20.u32 + 6240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stdx r10,r7,r8
	PPC_STORE_U64(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u64);
	// bdnz 0x83835b8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83835B8C;
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83835BB4:
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r31.u32);
	// bdnz 0x83835bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83835BB4;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83835BD4:
	// stbx r31,r21,r11
	PPC_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83835bd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83835BD4;
	// lwz r11,6288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6288);
	// lwz r10,-32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,-32(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32, ctx.r10.u32);
	// lwz r11,6288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6288);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stb r31,-28(r29)
	PPC_STORE_U8(ctx.r29.u32 + -28, ctx.r31.u8);
	// sth r22,-26(r29)
	PPC_STORE_U16(ctx.r29.u32 + -26, ctx.r22.u16);
	// stw r14,-24(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24, ctx.r14.u32);
	// stw r9,-32(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r31,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r31.u32);
	// blt cr6,0x83835c24
	if (cr6.lt) goto loc_83835C24;
	// lwz r11,-20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// b 0x83835c28
	goto loc_83835C28;
loc_83835C24:
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
loc_83835C28:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83835C4C;
	sub_831CDCF0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r25,64
	ctx.r9.s64 = ctx.r25.s64 + 64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83835C5C:
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83835c5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83835C5C;
	// addi r24,r24,76
	ctx.r24.s64 = ctx.r24.s64 + 76;
	// addi r26,r26,304
	ctx.r26.s64 = ctx.r26.s64 + 304;
	// addi r27,r27,38
	ctx.r27.s64 = ctx.r27.s64 + 38;
	// addi r21,r21,32
	ctx.r21.s64 = ctx.r21.s64 + 32;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r25,r25,68
	ctx.r25.s64 = ctx.r25.s64 + 68;
	// cmplwi cr6,r24,22963
	cr6.compare<uint32_t>(ctx.r24.u32, 22963, xer);
	// blt cr6,0x83835b58
	if (cr6.lt) goto loc_83835B58;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r11,r11,26312
	ctx.r11.s64 = ctx.r11.s64 + 26312;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// bl 0x829173a8
	ctx.lr = 0x83835CBC;
	sub_829173A8(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a28ba8
	ctx.lr = 0x83835CC4;
	sub_82A28BA8(ctx, base);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mtctr r18
	ctr.u64 = ctx.r18.u64;
	// addi r8,r8,20640
	ctx.r8.s64 = ctx.r8.s64 + 20640;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,29
	ctx.r5.s64 = 29;
	// li r9,101
	ctx.r9.s64 = 101;
	// ori r4,r7,20772
	ctx.r4.u64 = ctx.r7.u64 | 20772;
	// ori r3,r6,26060
	ctx.r3.u64 = ctx.r6.u64 | 26060;
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// add r10,r30,r17
	ctx.r10.u64 = ctx.r30.u64 + ctx.r17.u64;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r11,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// addi r9,r9,23296
	ctx.r9.s64 = ctx.r9.s64 + 23296;
	// stw r31,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r14,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r14.u32);
	// stw r18,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r18.u32);
	// stw r23,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r23.u32);
	// stw r31,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r31.u32);
	// stw r31,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r31.u32);
	// stw r31,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r31.u32);
	// stw r31,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r31.u32);
	// stw r31,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r31.u32);
	// stw r31,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r31.u32);
	// stw r31,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r31.u32);
	// stw r18,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r18.u32);
	// stw r31,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r31.u32);
	// stw r31,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r31.u32);
	// stw r31,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r31.u32);
	// stw r31,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r31.u32);
	// stw r31,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r31.u32);
	// stw r31,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r31.u32);
	// stw r23,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r23.u32);
	// stw r23,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r23.u32);
	// stw r31,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r31.u32);
	// stw r31,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r31.u32);
	// stw r31,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r31.u32);
	// stw r31,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r31.u32);
	// stw r31,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r31.u32);
	// stb r31,128(r8)
	PPC_STORE_U8(ctx.r8.u32 + 128, ctx.r31.u8);
	// stb r23,129(r8)
	PPC_STORE_U8(ctx.r8.u32 + 129, ctx.r23.u8);
	// stb r23,130(r8)
	PPC_STORE_U8(ctx.r8.u32 + 130, ctx.r23.u8);
	// stb r31,131(r8)
	PPC_STORE_U8(ctx.r8.u32 + 131, ctx.r31.u8);
	// stwx r18,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r18.u32);
	// stwx r31,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u32);
	// sth r22,0(r19)
	PPC_STORE_U16(ctx.r19.u32 + 0, ctx.r22.u16);
loc_83835D9C:
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// stbx r31,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83835d9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83835D9C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// ori r9,r11,23300
	ctx.r9.u64 = ctx.r11.u64 | 23300;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addis r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 65536;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r5,22024
	ctx.r5.s64 = ctx.r5.s64 + 22024;
	// addi r10,r10,20780
	ctx.r10.s64 = ctx.r10.s64 + 20780;
	// stwx r18,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r18.u32);
	// addi r4,r4,20776
	ctx.r4.s64 = ctx.r4.s64 + 20776;
	// li r6,255
	ctx.r6.s64 = 255;
loc_83835DD8:
	// stbx r31,r4,r7
	PPC_STORE_U8(ctx.r4.u32 + ctx.r7.u32, ctx.r31.u8);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_83835DE0:
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83835DE8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_83835DF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r31,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r31.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x83835df4
	if (cr6.lt) goto loc_83835DF4;
	// stw r6,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// stb r31,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r31.u8);
	// stw r31,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r31.u32);
	// stw r6,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// bdnz 0x83835de8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83835DE8;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83835de0
	if (!cr0.eq) goto loc_83835DE0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r14,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r14.u32);
	ctx.r5.u32 = ea;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// blt cr6,0x83835dd8
	if (cr6.lt) goto loc_83835DD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83835E48"))) PPC_WEAK_FUNC(sub_83835E48);
PPC_FUNC_IMPL(__imp__sub_83835E48) {
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
	// bl 0x83834b08
	ctx.lr = 0x83835E68;
	sub_83834B08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83835e88
	if (cr6.eq) goto loc_83835E88;
	// bl 0x82595188
	ctx.lr = 0x83835E78;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83835E88;
	sub_825952B8(ctx, base);
loc_83835E88:
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

__attribute__((alias("__imp__sub_83835EA4"))) PPC_WEAK_FUNC(sub_83835EA4);
PPC_FUNC_IMPL(__imp__sub_83835EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83835EA8"))) PPC_WEAK_FUNC(sub_83835EA8);
PPC_FUNC_IMPL(__imp__sub_83835EA8) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26412
	ctx.r4.u64 = ctx.r4.u64 | 26412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83835ED0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83835eec
	if (cr6.eq) goto loc_83835EEC;
	// bl 0x838353b8
	ctx.lr = 0x83835EDC;
	sub_838353B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83835EEC:
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

__attribute__((alias("__imp__sub_83835F00"))) PPC_WEAK_FUNC(sub_83835F00);
PPC_FUNC_IMPL(__imp__sub_83835F00) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22061
	ctx.r10.u64 = ctx.r11.u64 | 22061;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83835fa8
	if (cr6.eq) goto loc_83835FA8;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,22704
	ctx.r31.s64 = ctx.r31.s64 + 22704;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83835f40
	if (!cr6.eq) goto loc_83835F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4878
	ctx.lr = 0x83835F40;
	sub_825B4878(ctx, base);
loc_83835F40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83835f5c
	if (!cr6.eq) goto loc_83835F5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83835F5C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83835f8c
	if (cr6.eq) goto loc_83835F8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a32eb8
	ctx.lr = 0x83835F70;
	sub_82A32EB8(ctx, base);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,404(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83835F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83835F8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83835fa8
	if (cr6.eq) goto loc_83835FA8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x83835FA0;
	sub_825B3120(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83835FA8:
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

__attribute__((alias("__imp__sub_83835FC0"))) PPC_WEAK_FUNC(sub_83835FC0);
PPC_FUNC_IMPL(__imp__sub_83835FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83835FC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r30,22744
	ctx.r30.s64 = ctx.r30.s64 + 22744;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83835fec
	if (!cr6.eq) goto loc_83835FEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a9e30
	ctx.lr = 0x83835FEC;
	sub_825A9E30(ctx, base);
loc_83835FEC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83836008
	if (!cr6.eq) goto loc_83836008;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,140
	ctx.r10.s64 = ctx.r11.s64 + 140;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_83836008:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x830ff290
	ctx.lr = 0x83836010;
	sub_830FF290(ctx, base);
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8383603c
	if (!cr6.eq) goto loc_8383603C;
	// bl 0x830ff290
	ctx.lr = 0x83836028;
	sub_830FF290(ctx, base);
	// lbz r11,63(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 63);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838360e8
	if (!cr6.eq) goto loc_838360E8;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// b 0x838360ec
	goto loc_838360EC;
loc_8383603C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23265
	ctx.r10.u64 = ctx.r11.u64 | 23265;
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838360ec
	if (!cr6.eq) goto loc_838360EC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838360ec
	if (cr6.eq) goto loc_838360EC;
	// bl 0x830ff290
	ctx.lr = 0x83836064;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83836068;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x838360e8
	if (cr6.gt) goto loc_838360E8;
	// lis r12,-31869
	ctx.r12.s64 = -2088566784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24716
	ctx.r12.s64 = ctx.r12.s64 + 24716;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_838360E0;
	case 1:
		goto loc_838360E0;
	case 2:
		goto loc_838360E0;
	case 3:
		goto loc_838360E0;
	case 4:
		goto loc_838360E0;
	case 5:
		goto loc_838360E0;
	case 6:
		goto loc_838360E0;
	case 7:
		goto loc_838360E0;
	case 8:
		goto loc_838360E8;
	case 9:
		goto loc_838360E8;
	case 10:
		goto loc_838360E0;
	case 11:
		goto loc_838360E0;
	case 12:
		goto loc_838360E0;
	case 13:
		goto loc_838360E0;
	case 14:
		goto loc_838360E0;
	case 15:
		goto loc_838360E0;
	case 16:
		goto loc_838360E8;
	case 17:
		goto loc_838360E8;
	case 18:
		goto loc_838360E8;
	case 19:
		goto loc_838360E8;
	case 20:
		goto loc_838360E0;
	default:
		return;
	}
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24808);
	// lwz r28,24808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24808);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
	// lwz r28,24808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24808);
	// lwz r28,24808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24808);
	// lwz r28,24808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24808);
	// lwz r28,24808(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24808);
	// lwz r28,24800(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24800);
loc_838360E0:
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// b 0x838360ec
	goto loc_838360EC;
loc_838360E8:
	// stb r28,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r28.u8);
loc_838360EC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83836104
	if (cr6.eq) goto loc_83836104;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825a5c98
	ctx.lr = 0x83836100;
	sub_825A5C98(ctx, base);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_83836104:
	// addis r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 65536;
	// addi r31,r31,22704
	ctx.r31.s64 = ctx.r31.s64 + 22704;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83836120
	if (!cr6.eq) goto loc_83836120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4878
	ctx.lr = 0x83836120;
	sub_825B4878(ctx, base);
loc_83836120:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8383613c
	if (!cr6.eq) goto loc_8383613C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8383613C:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83836178
	if (cr6.eq) goto loc_83836178;
	// bl 0x830ff290
	ctx.lr = 0x8383614C;
	sub_830FF290(ctx, base);
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83836174
	if (cr6.eq) goto loc_83836174;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a504f0
	ctx.lr = 0x83836164;
	sub_82A504F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82583300
	ctx.lr = 0x83836170;
	sub_82583300(ctx, base);
	// b 0x83836178
	goto loc_83836178;
loc_83836174:
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
loc_83836178:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83836190
	if (cr6.eq) goto loc_83836190;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x8383618C;
	sub_825B3120(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_83836190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8383619C"))) PPC_WEAK_FUNC(sub_8383619C);
PPC_FUNC_IMPL(__imp__sub_8383619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838361A0"))) PPC_WEAK_FUNC(sub_838361A0);
PPC_FUNC_IMPL(__imp__sub_838361A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838361A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r21,r3,1
	ctx.r21.s64 = ctx.r3.s64 + 65536;
	// addi r21,r21,22704
	ctx.r21.s64 = ctx.r21.s64 + 22704;
	// lbz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838361c8
	if (!cr6.eq) goto loc_838361C8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825b4878
	ctx.lr = 0x838361C8;
	sub_825B4878(ctx, base);
loc_838361C8:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838361e4
	if (!cr6.eq) goto loc_838361E4;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r10.u32);
loc_838361E4:
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r25,16(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2688
	ctx.r4.s64 = 2688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// bl 0x82595718
	ctx.lr = 0x83836210;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8383623c
	if (cr6.eq) goto loc_8383623C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,23
	ctx.r31.s64 = 23;
loc_83836224:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a333f8
	ctx.lr = 0x8383622C;
	sub_82A333F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bge 0x83836224
	if (!cr0.lt) goto loc_83836224;
	// b 0x83836240
	goto loc_83836240;
loc_8383623C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_83836240:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r24,r11,-20784
	ctx.r24.s64 = ctx.r11.s64 + -20784;
	// addi r3,r24,-24
	ctx.r3.s64 = ctx.r24.s64 + -24;
	// bl 0x83523fd8
	ctx.lr = 0x83836254;
	sub_83523FD8(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83836380
	if (cr6.eq) goto loc_83836380;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_83836268:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83836278
	if (cr6.lt) goto loc_83836278;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83836278:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bge cr6,0x83836290
	if (!cr6.lt) goto loc_83836290;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_83836290:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x838362a0
	if (cr6.lt) goto loc_838362A0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_838362A0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bge cr6,0x838362b8
	if (!cr6.lt) goto loc_838362B8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_838362B8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x838362c8
	if (cr6.lt) goto loc_838362C8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_838362C8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bge cr6,0x838362e0
	if (!cr6.lt) goto loc_838362E0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_838362E0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x838362f0
	if (cr6.lt) goto loc_838362F0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_838362F0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bge cr6,0x83836308
	if (!cr6.lt) goto loc_83836308;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_83836308:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83836318
	if (cr6.lt) goto loc_83836318;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83836318:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bge cr6,0x83836330
	if (!cr6.lt) goto loc_83836330;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_83836330:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83836340
	if (cr6.lt) goto loc_83836340;
	// li r11,23
	ctx.r11.s64 = 23;
loc_83836340:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// bge cr6,0x83836358
	if (!cr6.lt) goto loc_83836358;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_83836358:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x83836268
	if (cr6.lt) goto loc_83836268;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83836380
	if (!cr6.eq) goto loc_83836380;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82583300
	ctx.lr = 0x83836380;
	sub_82583300(ctx, base);
loc_83836380:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lis r26,-31778
	ctx.r26.s64 = -2082603008;
loc_8383638C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a13ba8
	ctx.lr = 0x83836394;
	sub_82A13BA8(ctx, base);
	// lwz r11,2056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2056);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x838363B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x83836494
	if (!cr6.eq) goto loc_83836494;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_838363C4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x838363d4
	if (cr6.lt) goto loc_838363D4;
	// li r11,23
	ctx.r11.s64 = 23;
loc_838363D4:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83836488
	if (!cr6.eq) goto loc_83836488;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x838363F8;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82927028
	ctx.lr = 0x83836404;
	sub_82927028(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a32218
	ctx.lr = 0x83836410;
	sub_82A32218(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83836420
	if (cr6.eq) goto loc_83836420;
	// stb r23,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
loc_83836420:
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83836430
	if (cr6.eq) goto loc_83836430;
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
loc_83836430:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r8.u8);
	// bl 0x83523fd8
	ctx.lr = 0x83836450;
	sub_83523FD8(ctx, base);
	// addic r7,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r11,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r11.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83836480
	if (cr6.eq) goto loc_83836480;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a504f0
	ctx.lr = 0x83836474;
	sub_82A504F0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a321c8
	ctx.lr = 0x83836480;
	sub_82A321C8(ctx, base);
loc_83836480:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r23,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r23.u8);
loc_83836488:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,24
	cr6.compare<uint32_t>(ctx.r27.u32, 24, xer);
	// blt cr6,0x838363c4
	if (cr6.lt) goto loc_838363C4;
loc_83836494:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(ctx.r28.u32, 24, xer);
	// blt cr6,0x8383638c
	if (cr6.lt) goto loc_8383638C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_838364B0:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x838364e4
	if (cr6.eq) goto loc_838364E4;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x838364cc
	if (cr6.lt) goto loc_838364CC;
	// li r11,23
	ctx.r11.s64 = 23;
loc_838364CC:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838364E0;
	sub_831CE980(ctx, base);
	// b 0x838364fc
	goto loc_838364FC;
loc_838364E4:
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x838364f0
	if (cr6.lt) goto loc_838364F0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_838364F0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82a32270
	ctx.lr = 0x838364FC;
	sub_82A32270(ctx, base);
loc_838364FC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x838364b0
	if (cr6.lt) goto loc_838364B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83836538
	if (cr6.eq) goto loc_83836538;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83836528;
	sub_82595150(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x83836530;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83836538;
	sub_82595170(ctx, base);
loc_83836538:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8383659c
	if (cr6.eq) goto loc_8383659C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8383654C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r23,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r23.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8383654c
	if (!cr0.eq) goto loc_8383654C;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83836598
	if (!cr6.eq) goto loc_83836598;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x83836578;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12320
	ctx.r5.s64 = ctx.r11.s64 + 12320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83836598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83836598:
	// stw r22,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r22.u32);
loc_8383659C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838365A4"))) PPC_WEAK_FUNC(sub_838365A4);
PPC_FUNC_IMPL(__imp__sub_838365A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838365A8"))) PPC_WEAK_FUNC(sub_838365A8);
PPC_FUNC_IMPL(__imp__sub_838365A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838365B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83987ca0
	ctx.lr = 0x838365C0;
	sub_83987CA0(ctx, base);
	// bl 0x839891c0
	ctx.lr = 0x838365C4;
	sub_839891C0(ctx, base);
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838365DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x8398a7d8
	ctx.lr = 0x838365EC;
	sub_8398A7D8(ctx, base);
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83836608
	if (!cr6.eq) goto loc_83836608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4748
	ctx.lr = 0x83836608;
	sub_825B4748(ctx, base);
loc_83836608:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83836624
	if (!cr6.eq) goto loc_83836624;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_83836624:
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825b2660
	ctx.lr = 0x83836634;
	sub_825B2660(ctx, base);
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8383664C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83836660
	if (cr6.eq) goto loc_83836660;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_83836660:
	// lwz r3,2056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83836678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83836684"))) PPC_WEAK_FUNC(sub_83836684);
PPC_FUNC_IMPL(__imp__sub_83836684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83836688"))) PPC_WEAK_FUNC(sub_83836688);
PPC_FUNC_IMPL(__imp__sub_83836688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83836690;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r11,-20416
	ctx.r28.s64 = ctx.r11.s64 + -20416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r28,-328
	ctx.r6.s64 = ctx.r28.s64 + -328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x838366BC;
	sub_827A8810(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838366d4
	if (!cr6.eq) goto loc_838366D4;
	// stb r26,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r26.u8);
	// b 0x838366f8
	goto loc_838366F8;
loc_838366D4:
	// addi r6,r28,-312
	ctx.r6.s64 = ctx.r28.s64 + -312;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x838366EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838366f8
	if (!cr6.eq) goto loc_838366F8;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
loc_838366F8:
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// addi r6,r28,-296
	ctx.r6.s64 = ctx.r28.s64 + -296;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x8383671C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836798
	if (!cr6.eq) goto loc_83836798;
	// bl 0x830ff290
	ctx.lr = 0x83836728;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83836730;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83836734;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 393216;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r8,-30316
	ctx.r8.s64 = ctx.r8.s64 + -30316;
	// ori r7,r10,23265
	ctx.r7.u64 = ctx.r10.u64 | 23265;
	// ori r6,r9,23244
	ctx.r6.u64 = ctx.r9.u64 | 23244;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stb r26,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83836784
	if (cr6.eq) goto loc_83836784;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_83836784:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836798:
	// addi r6,r28,-284
	ctx.r6.s64 = ctx.r28.s64 + -284;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x838367B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838367e4
	if (!cr6.eq) goto loc_838367E4;
	// bl 0x831156e8
	ctx.lr = 0x838367BC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 393216;
	// ori r8,r10,23265
	ctx.r8.u64 = ctx.r10.u64 | 23265;
	// addi r9,r9,-30316
	ctx.r9.s64 = ctx.r9.s64 + -30316;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// stbx r26,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838367E4:
	// addi r6,r28,-276
	ctx.r6.s64 = ctx.r28.s64 + -276;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,23
	ctx.r7.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x838367FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836908
	if (!cr6.eq) goto loc_83836908;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,22036
	ctx.r28.s64 = ctx.r28.s64 + 22036;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838371ac
	if (!cr6.eq) goto loc_838371AC;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838371ac
	if (!cr6.eq) goto loc_838371AC;
	// bl 0x830ff290
	ctx.lr = 0x83836828;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83836830;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83836834;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r29,r11,6
	ctx.r29.s64 = ctx.r11.s64 + 393216;
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x83836854
	if (!cr6.eq) goto loc_83836854;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_83836854:
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83836860:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r30,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, ctx.r30.u8);
	// bdnz 0x83836860
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83836860;
	// bl 0x825d8390
	ctx.lr = 0x83836878;
	sub_825D8390(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r9,r3
	ctx.r27.u64 = ctx.r9.u64 & ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8383688C;
	sub_831156E8(ctx, base);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r9,r7,22040
	ctx.r9.u64 = ctx.r7.u64 | 22040;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r7,r6,22041
	ctx.r7.u64 = ctx.r6.u64 | 22041;
	// stb r26,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r26.u8);
	// ori r6,r5,23265
	ctx.r6.u64 = ctx.r5.u64 | 23265;
	// ori r5,r3,23244
	ctx.r5.u64 = ctx.r3.u64 | 23244;
	// stb r4,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r4.u8);
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// stb r26,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r26.u8);
	// lbz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// stbx r30,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u8);
	// stwx r30,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r30.u32);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836908:
	// addi r6,r28,-252
	ctx.r6.s64 = ctx.r28.s64 + -252;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836920;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836948
	if (!cr6.eq) goto loc_83836948;
	// bl 0x830ff290
	ctx.lr = 0x8383692C;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83836934;
	sub_830FF9C8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22040
	ctx.r10.u64 = ctx.r11.u64 | 22040;
	// stbx r26,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836948:
	// addi r6,r28,-232
	ctx.r6.s64 = ctx.r28.s64 + -232;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836960;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8383698c
	if (!cr6.eq) goto loc_8383698C;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838371ac
	if (!cr6.eq) goto loc_838371AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stb r26,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
	// ori r10,r11,22041
	ctx.r10.u64 = ctx.r11.u64 | 22041;
	// stbx r26,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8383698C:
	// addi r6,r28,-216
	ctx.r6.s64 = ctx.r28.s64 + -216;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x838369A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836ba8
	if (!cr6.eq) goto loc_83836BA8;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r27,r27,22044
	ctx.r27.s64 = ctx.r27.s64 + 22044;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83836b90
	if (!cr6.eq) goto loc_83836B90;
	// bl 0x830ff290
	ctx.lr = 0x838369C4;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x838369CC;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x838369D0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838369f0
	if (cr6.eq) goto loc_838369F0;
	// bl 0x83115808
	ctx.lr = 0x838369E0;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x838369f4
	if (!cr6.eq) goto loc_838369F4;
loc_838369F0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838369F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83836b34
	if (cr6.eq) goto loc_83836B34;
	// bl 0x831156e8
	ctx.lr = 0x83836A08;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,29
	ctx.r4.s64 = 29;
	// addis r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123890
	ctx.lr = 0x83836A20;
	sub_83123890(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,950
	ctx.r4.s64 = 950;
	// bl 0x83123898
	ctx.lr = 0x83836A2C;
	sub_83123898(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83836A30;
	sub_831156E8(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r25,52(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x83123a08
	ctx.lr = 0x83836A48;
	sub_83123A08(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// bl 0x83123a08
	ctx.lr = 0x83836A64;
	sub_83123A08(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,29
	ctx.r5.s64 = 29;
	// ori r4,r6,65535
	ctx.r4.u64 = ctx.r6.u64 | 65535;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x83154470
	ctx.lr = 0x83836AD4;
	sub_83154470(ctx, base);
	// addis r29,r25,6
	ctx.r29.s64 = ctx.r25.s64 + 393216;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_83836AEC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r30,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, ctx.r30.u8);
	// bdnz 0x83836aec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83836AEC;
	// bl 0x825d8390
	ctx.lr = 0x83836B04;
	sub_825D8390(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r9,r3
	ctx.r25.u64 = ctx.r9.u64 & ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x83836B18;
	sub_831156E8(ctx, base);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stb r26,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r26.u8);
	// stb r7,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r7.u8);
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
loc_83836B34:
	// bl 0x839a1610
	ctx.lr = 0x83836B38;
	sub_839A1610(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83836b54
	if (cr6.eq) goto loc_83836B54;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// bl 0x839a1ec8
	ctx.lr = 0x83836B4C;
	sub_839A1EC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a0648
	ctx.lr = 0x83836B54;
	sub_839A0648(ctx, base);
loc_83836B54:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lbz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// ori r8,r11,23265
	ctx.r8.u64 = ctx.r11.u64 | 23265;
	// ori r7,r9,23244
	ctx.r7.u64 = ctx.r9.u64 | 23244;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// beq cr6,0x83836b90
	if (cr6.eq) goto loc_83836B90;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_83836B90:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r9,r11,22048
	ctx.r9.u64 = ctx.r11.u64 | 22048;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836BA8:
	// addi r6,r28,-196
	ctx.r6.s64 = ctx.r28.s64 + -196;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836BC0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836cf4
	if (!cr6.eq) goto loc_83836CF4;
	// bl 0x830ff290
	ctx.lr = 0x83836BCC;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83836BD4;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83836BD8;
	sub_831156E8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r29,r29,22904
	ctx.r29.s64 = ctx.r29.s64 + 22904;
	// addis r28,r11,6
	ctx.r28.s64 = ctx.r11.s64 + 393216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r28,-30316
	ctx.r28.s64 = ctx.r28.s64 + -30316;
	// bl 0x825bb510
	ctx.lr = 0x83836BF4;
	sub_825BB510(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8383d6b8
	ctx.lr = 0x83836C04;
	sub_8383D6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181c0
	ctx.lr = 0x83836C10;
	sub_82A181C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a182d0
	ctx.lr = 0x83836C1C;
	sub_82A182D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a182c0
	ctx.lr = 0x83836C28;
	sub_82A182C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83833fe0
	ctx.lr = 0x83836C30;
	sub_83833FE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83844f60
	ctx.lr = 0x83836C3C;
	sub_83844F60(ctx, base);
	// lbz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r28,r9,23284
	ctx.r28.u64 = ctx.r9.u64 | 23284;
	// ori r11,r8,22044
	ctx.r11.u64 = ctx.r8.u64 | 22044;
	// li r25,10
	ctx.r25.s64 = 10;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83836c78
	if (cr6.eq) goto loc_83836C78;
	// lbz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// beq cr6,0x83836c78
	if (cr6.eq) goto loc_83836C78;
	// stwx r25,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// stwx r30,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u32);
loc_83836C78:
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r27,r31,r11
	ctx.r27.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83836cbc
	if (cr6.eq) goto loc_83836CBC;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,23064
	ctx.r29.s64 = ctx.r29.s64 + 23064;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b46f0
	ctx.lr = 0x83836C98;
	sub_825B46F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83836ca4
	if (cr6.eq) goto loc_83836CA4;
	// stb r26,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r26.u8);
loc_83836CA4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83836cbc
	if (cr6.eq) goto loc_83836CBC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x83836CB8;
	sub_825B33F0(ctx, base);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
loc_83836CBC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83836ce0
	if (!cr6.eq) goto loc_83836CE0;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beq cr6,0x83836ce0
	if (cr6.eq) goto loc_83836CE0;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// stwx r30,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u32);
loc_83836CE0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22048
	ctx.r10.u64 = ctx.r11.u64 | 22048;
	// stwx r25,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r25.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836CF4:
	// addi r6,r28,-172
	ctx.r6.s64 = ctx.r28.s64 + -172;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,23
	ctx.r7.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836D0C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836d98
	if (!cr6.eq) goto loc_83836D98;
	// bl 0x82d16ed0
	ctx.lr = 0x83836D18;
	sub_82D16ED0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83836d4c
	if (cr6.eq) goto loc_83836D4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82d17018
	ctx.lr = 0x83836D38;
	sub_82D17018(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d16d90
	ctx.lr = 0x83836D4C;
	sub_82D16D90(ctx, base);
loc_83836D4C:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r11,22044
	ctx.r11.s64 = ctx.r11.s64 + 22044;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x83836d84
	if (!cr6.eq) goto loc_83836D84;
	// lbz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r9,20
	cr6.compare<uint32_t>(ctx.r9.u32, 20, xer);
	// beq cr6,0x83836d84
	if (cr6.eq) goto loc_83836D84;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r8,r9,23284
	ctx.r8.u64 = ctx.r9.u64 | 23284;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
loc_83836D84:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,22048
	ctx.r9.u64 = ctx.r11.u64 | 22048;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836D98:
	// addi r6,r28,-148
	ctx.r6.s64 = ctx.r28.s64 + -148;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836DB0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836e54
	if (!cr6.eq) goto loc_83836E54;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r11,r11,22044
	ctx.r11.s64 = ctx.r11.s64 + 22044;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x83836df4
	if (!cr6.eq) goto loc_83836DF4;
	// lbz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// beq cr6,0x83836e24
	if (cr6.eq) goto loc_83836E24;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r9,r10,23284
	ctx.r9.u64 = ctx.r10.u64 | 23284;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// b 0x83836e24
	goto loc_83836E24;
loc_83836DF4:
	// bl 0x82d16ed0
	ctx.lr = 0x83836DF8;
	sub_82D16ED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83836e24
	if (cr6.eq) goto loc_83836E24;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d17018
	ctx.lr = 0x83836E18;
	sub_82D17018(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d15488
	ctx.lr = 0x83836E24;
	sub_82D15488(ctx, base);
loc_83836E24:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,23316
	ctx.r9.u64 = ctx.r11.u64 | 23316;
	// ori r8,r10,22048
	ctx.r8.u64 = ctx.r10.u64 | 22048;
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837a0a90
	ctx.lr = 0x83836E4C;
	sub_837A0A90(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836E54:
	// addi r6,r28,-120
	ctx.r6.s64 = ctx.r28.s64 + -120;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836E6C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836e98
	if (!cr6.eq) goto loc_83836E98;
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// stb r26,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r7,11
	ctx.r7.s64 = 11;
	// ori r9,r11,22044
	ctx.r9.u64 = ctx.r11.u64 | 22044;
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x8383719c
	goto loc_8383719C;
loc_83836E98:
	// addi r6,r28,-104
	ctx.r6.s64 = ctx.r28.s64 + -104;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836EB0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836efc
	if (!cr6.eq) goto loc_83836EFC;
	// bl 0x831156e8
	ctx.lr = 0x83836EBC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r8,r11,35220
	ctx.r8.u64 = ctx.r11.u64 | 35220;
	// ori r7,r10,23265
	ctx.r7.u64 = ctx.r10.u64 | 23265;
	// li r6,2
	ctx.r6.s64 = 2;
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lbz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// stbx r26,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r26.u8);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r7,12
	ctx.r7.s64 = 12;
	// ori r9,r11,22044
	ctx.r9.u64 = ctx.r11.u64 | 22044;
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x8383719c
	goto loc_8383719C;
loc_83836EFC:
	// addi r6,r28,-80
	ctx.r6.s64 = ctx.r28.s64 + -80;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836F14;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83836f90
	if (!cr6.eq) goto loc_83836F90;
	// bl 0x830ff290
	ctx.lr = 0x83836F20;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83836F28;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83836F2C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 393216;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r9,r9,-30316
	ctx.r9.s64 = ctx.r9.s64 + -30316;
	// ori r7,r10,23265
	ctx.r7.u64 = ctx.r10.u64 | 23265;
	// ori r6,r8,23244
	ctx.r6.u64 = ctx.r8.u64 | 23244;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stb r26,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
	// stwx r26,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r26.u32);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83836784
	if (cr6.eq) goto loc_83836784;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83836F90:
	// addi r6,r28,-64
	ctx.r6.s64 = ctx.r28.s64 + -64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83836FA8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83837024
	if (!cr6.eq) goto loc_83837024;
	// bl 0x830ff290
	ctx.lr = 0x83836FB4;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83836FBC;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83836FC0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 393216;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r8,-30316
	ctx.r8.s64 = ctx.r8.s64 + -30316;
	// ori r7,r10,23265
	ctx.r7.u64 = ctx.r10.u64 | 23265;
	// ori r6,r9,23244
	ctx.r6.u64 = ctx.r9.u64 | 23244;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stb r26,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
	// stwx r28,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83837014
	if (cr6.eq) goto loc_83837014;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_83837014:
	// stb r28,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r28.u8);
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83837024:
	// addi r6,r28,-52
	ctx.r6.s64 = ctx.r28.s64 + -52;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x8383703C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838370d0
	if (!cr6.eq) goto loc_838370D0;
	// bl 0x830ff290
	ctx.lr = 0x83837048;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x83837050;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83837054;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 393216;
	// ori r8,r10,23265
	ctx.r8.u64 = ctx.r10.u64 | 23265;
	// addi r9,r9,-30316
	ctx.r9.s64 = ctx.r9.s64 + -30316;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// stbx r30,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u8);
	// stb r26,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r26.u8);
	// bl 0x830ff290
	ctx.lr = 0x8383707C;
	sub_830FF290(ctx, base);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// ori r10,r11,23244
	ctx.r10.u64 = ctx.r11.u64 | 23244;
	// bne cr6,0x83837098
	if (!cr6.eq) goto loc_83837098;
	// stwx r26,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// b 0x8383709c
	goto loc_8383709C;
loc_83837098:
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
loc_8383709C:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83836784
	if (cr6.eq) goto loc_83836784;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r10,r11,23284
	ctx.r10.u64 = ctx.r11.u64 | 23284;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838370D0:
	// addi r6,r28,-36
	ctx.r6.s64 = ctx.r28.s64 + -36;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x838370E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// addi r6,r28,-20
	ctx.r6.s64 = ctx.r28.s64 + -20;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83837108;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83837130
	if (!cr6.eq) goto loc_83837130;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,23254
	ctx.r9.u64 = ctx.r11.u64 | 23254;
	// ori r8,r10,23252
	ctx.r8.u64 = ctx.r10.u64 | 23252;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// stbx r26,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83837130:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x83837148;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838371ac
	if (!cr6.eq) goto loc_838371AC;
	// bl 0x830ff290
	ctx.lr = 0x83837154;
	sub_830FF290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830ff9c8
	ctx.lr = 0x8383715C;
	sub_830FF9C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83837160;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r8,r11,35220
	ctx.r8.u64 = ctx.r11.u64 | 35220;
	// ori r7,r10,23265
	ctx.r7.u64 = ctx.r10.u64 | 23265;
	// li r6,3
	ctx.r6.s64 = 3;
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lbz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// stbx r30,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u8);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// beq cr6,0x838371ac
	if (cr6.eq) goto loc_838371AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,22056
	ctx.r9.u64 = ctx.r11.u64 | 22056;
	// stwx r26,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
loc_8383719C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stb r30,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r30.u8);
	// ori r8,r10,23284
	ctx.r8.u64 = ctx.r10.u64 | 23284;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
loc_838371AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838371B4"))) PPC_WEAK_FUNC(sub_838371B4);
PPC_FUNC_IMPL(__imp__sub_838371B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838371B8"))) PPC_WEAK_FUNC(sub_838371B8);
PPC_FUNC_IMPL(__imp__sub_838371B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x838371C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,105(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x838372e0
	if (cr6.gt) goto loc_838372E0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838372d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838372D0;
	// bdzf 4*cr6+eq,0x838372d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838372D0;
	// bdzf 4*cr6+eq,0x838372ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838372EC;
	// bdzf 4*cr6+eq,0x83837338
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83837338;
	// bdzf 4*cr6+eq,0x838374cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838374CC;
	// bdzf 4*cr6+eq,0x83837554
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83837554;
	// bdzf 4*cr6+eq,0x83837710
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83837710;
	// bne cr6,0x83837798
	if (!cr6.eq) goto loc_83837798;
	// bl 0x831156e8
	ctx.lr = 0x83837200;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,23265
	ctx.r9.u64 = ctx.r11.u64 | 23265;
	// addis r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83837270
	if (!cr6.eq) goto loc_83837270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83840840
	ctx.lr = 0x83837228;
	sub_83840840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83837230;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83837238:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123a08
	ctx.lr = 0x83837244;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838345e0
	ctx.lr = 0x8383725C;
	sub_838345E0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83837238
	if (cr6.lt) goto loc_83837238;
loc_83837270:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83123918
	ctx.lr = 0x8383727C;
	sub_83123918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,20640
	ctx.r3.s64 = ctx.r3.s64 + 20640;
	// bl 0x82f09ce8
	ctx.lr = 0x8383728C;
	sub_82F09CE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x83837294;
	sub_8395B0F8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// ori r9,r11,20772
	ctx.r9.u64 = ctx.r11.u64 | 20772;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r3,2056(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2056);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x838372B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x838372d4
	if (!cr6.eq) goto loc_838372D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838372D0:
	// bl 0x831156e8
	ctx.lr = 0x838372D4;
	sub_831156E8(ctx, base);
loc_838372D4:
	// lbz r11,105(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
loc_838372E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838372EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83833860
	ctx.lr = 0x838372F8;
	sub_83833860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83837320
	if (cr6.eq) goto loc_83837320;
	// bl 0x83987ca0
	ctx.lr = 0x83837308;
	sub_83987CA0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r6,132
	ctx.r6.s64 = 132;
	// addi r5,r5,20640
	ctx.r5.s64 = ctx.r5.s64 + 20640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83988948
	ctx.lr = 0x8383731C;
	sub_83988948(ctx, base);
	// b 0x838372d4
	goto loc_838372D4;
loc_83837320:
	// bl 0x83987ca0
	ctx.lr = 0x83837324;
	sub_83987CA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83988948
	ctx.lr = 0x83837334;
	sub_83988948(ctx, base);
	// b 0x838372d4
	goto loc_838372D4;
loc_83837338:
	// bl 0x83987ca0
	ctx.lr = 0x8383733C;
	sub_83987CA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839889c0
	ctx.lr = 0x83837344;
	sub_839889C0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838372e0
	if (cr6.eq) goto loc_838372E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x838374c4
	if (!cr6.gt) goto loc_838374C4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r27,1
	ctx.r27.s64 = 65536;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// lis r24,1
	ctx.r24.s64 = 65536;
	// lis r23,1
	ctx.r23.s64 = 65536;
	// lis r22,1
	ctx.r22.s64 = 65536;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// ori r28,r11,20660
	ctx.r28.u64 = ctx.r11.u64 | 20660;
	// ori r29,r10,20664
	ctx.r29.u64 = ctx.r10.u64 | 20664;
	// ori r30,r9,20668
	ctx.r30.u64 = ctx.r9.u64 | 20668;
	// ori r4,r8,20672
	ctx.r4.u64 = ctx.r8.u64 | 20672;
	// ori r5,r7,20688
	ctx.r5.u64 = ctx.r7.u64 | 20688;
	// ori r6,r6,20692
	ctx.r6.u64 = ctx.r6.u64 | 20692;
	// ori r7,r27,20696
	ctx.r7.u64 = ctx.r27.u64 | 20696;
	// ori r8,r24,20700
	ctx.r8.u64 = ctx.r24.u64 | 20700;
	// ori r9,r23,20704
	ctx.r9.u64 = ctx.r23.u64 | 20704;
	// ori r10,r22,20708
	ctx.r10.u64 = ctx.r22.u64 | 20708;
	// ori r11,r21,20712
	ctx.r11.u64 = ctx.r21.u64 | 20712;
loc_838373C4:
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r24,132
	cr6.compare<uint32_t>(ctx.r24.u32, 132, xer);
	// bne cr6,0x838374a8
	if (!cr6.eq) goto loc_838374A8;
	// lwz r27,16(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r24,1
	ctx.r24.s64 = 65536;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r23,r3,20640
	ctx.r23.u64 = ctx.r3.u64 | 20640;
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r22,1
	ctx.r22.s64 = 65536;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r24,r24,20644
	ctx.r24.u64 = ctx.r24.u64 | 20644;
	// lwz r21,0(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r20,1
	ctx.r20.s64 = 65536;
	// ori r22,r22,20648
	ctx.r22.u64 = ctx.r22.u64 | 20648;
	// addis r19,r31,1
	ctx.r19.s64 = ctx.r31.s64 + 65536;
	// ori r20,r20,20652
	ctx.r20.u64 = ctx.r20.u64 | 20652;
	// addi r19,r19,20656
	ctx.r19.s64 = ctx.r19.s64 + 20656;
	// stwx r21,r31,r23
	PPC_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r21.u32);
	// lwz r23,4(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stwx r23,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r23.u32);
	// lwz r24,8(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stwx r24,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r24.u32);
	// lwz r24,12(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stwx r24,r31,r20
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r24.u32);
	// lwz r24,16(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r23,0(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwimi r24,r23,0,14,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0x3FFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFC0000);
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// lwz r24,16(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r23,0(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// rlwimi r24,r23,0,0,13
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFC0000) | (ctx.r24.u64 & 0xFFFFFFFF0003FFFF);
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// lwz r24,20(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stwx r24,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r24.u32);
	// lwz r24,24(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stwx r24,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r24.u32);
	// lwz r24,28(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stwx r24,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r24.u32);
	// lwz r24,32(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stwx r24,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r24.u32);
	// lwz r24,48(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// stwx r24,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r24.u32);
	// lwz r24,52(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// stwx r24,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r24.u32);
	// lwz r24,56(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// stwx r24,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r24.u32);
	// lwz r24,60(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// stwx r24,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r24.u32);
	// lwz r24,64(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// stwx r24,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r24.u32);
	// lwz r24,68(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// stwx r24,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r24.u32);
	// lwz r27,72(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
loc_838374A8:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// blt cr6,0x838373c4
	if (cr6.lt) goto loc_838373C4;
loc_838374C4:
	// bl 0x838336b8
	ctx.lr = 0x838374C8;
	sub_838336B8(ctx, base);
	// b 0x838372d4
	goto loc_838372D4;
loc_838374CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83833860
	ctx.lr = 0x838374D8;
	sub_83833860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83837320
	if (cr6.eq) goto loc_83837320;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,25704
	ctx.r28.s64 = ctx.r28.s64 + 25704;
	// li r30,11
	ctx.r30.s64 = 11;
loc_838374F4:
	// bl 0x83a7d958
	ctx.lr = 0x838374F8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x838374FC;
	sub_83524138(ctx, base);
	// lis r11,14470
	ctx.r11.s64 = 948305920;
	// lis r10,13421
	ctx.r10.s64 = 879558656;
	// ori r9,r11,22859
	ctx.r9.u64 = ctx.r11.u64 | 22859;
	// ori r8,r10,50646
	ctx.r8.u64 = ctx.r10.u64 | 50646;
	// add r7,r3,r29
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mulhdu r6,r7,r9
	ctx.r6.u64 = ((unsigned __int128)ctx.r7.u64 * (unsigned __int128)ctx.r9.u64) >> 64;
	// rldicl r5,r6,53,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 53) & 0x1FFFFFFFFFFFFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mulli r4,r5,10000
	ctx.r4.s64 = ctx.r5.s64 * 10000;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bne 0x838374f4
	if (!cr0.eq) goto loc_838374F4;
	// bl 0x83987ca0
	ctx.lr = 0x8383753C;
	sub_83987CA0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r6,304
	ctx.r6.s64 = 304;
	// addi r5,r5,25448
	ctx.r5.s64 = ctx.r5.s64 + 25448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83988948
	ctx.lr = 0x83837550;
	sub_83988948(ctx, base);
	// b 0x838372d4
	goto loc_838372D4;
loc_83837554:
	// bl 0x83987ca0
	ctx.lr = 0x83837558;
	sub_83987CA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839889c0
	ctx.lr = 0x83837560;
	sub_839889C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838372e0
	if (cr6.eq) goto loc_838372E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x838375c0
	if (!cr6.gt) goto loc_838375C0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r27,r11,25448
	ctx.r27.u64 = ctx.r11.u64 | 25448;
loc_83837588:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,304
	cr6.compare<uint32_t>(ctx.r10.u32, 304, xer);
	// bne cr6,0x838375ac
	if (!cr6.eq) goto loc_838375AC;
	// li r5,304
	ctx.r5.s64 = 304;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x838375AC;
	sub_831CE980(ctx, base);
loc_838375AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83837588
	if (cr6.lt) goto loc_83837588;
loc_838375C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838336b8
	ctx.lr = 0x838375C8;
	sub_838336B8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r29,25704
	ctx.r29.s64 = ctx.r29.s64 + 25704;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
loc_838375D8:
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838375F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x838375d8
	if (cr6.lt) goto loc_838375D8;
	// bl 0x831156e8
	ctx.lr = 0x83837604;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x83837620;
	sub_83123A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838372d4
	if (cr6.eq) goto loc_838372D4;
	// li r11,8
	ctx.r11.s64 = 8;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r29,r29,26344
	ctx.r29.s64 = ctx.r29.s64 + 26344;
	// addi r5,r5,26345
	ctx.r5.s64 = ctx.r5.s64 + 26345;
	// addi r4,r4,26346
	ctx.r4.s64 = ctx.r4.s64 + 26346;
	// addi r30,r30,26347
	ctx.r30.s64 = ctx.r30.s64 + 26347;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r3,256
	ctx.r6.s64 = ctx.r3.s64 + 256;
	// addi r10,r10,25460
	ctx.r10.s64 = ctx.r10.s64 + 25460;
loc_83837660:
	// lhz r8,808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// ld r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// lbzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83837684
	if (!cr6.lt) goto loc_83837684;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r9,-8(r6)
	PPC_STORE_U64(ctx.r6.u32 + -8, ctx.r9.u64);
	// stb r8,512(r7)
	PPC_STORE_U8(ctx.r7.u32 + 512, ctx.r8.u8);
loc_83837684:
	// lhz r7,808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// clrlwi r28,r7,25
	ctx.r28.u64 = ctx.r7.u32 & 0x7F;
	// lbzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// bge cr6,0x838376b0
	if (!cr6.lt) goto loc_838376B0;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// stb r7,513(r28)
	PPC_STORE_U8(ctx.r28.u32 + 513, ctx.r7.u8);
loc_838376B0:
	// lhz r7,808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// clrlwi r28,r7,25
	ctx.r28.u64 = ctx.r7.u32 & 0x7F;
	// lbzx r7,r4,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bge cr6,0x838376d4
	if (!cr6.lt) goto loc_838376D4;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// stb r7,514(r28)
	PPC_STORE_U8(ctx.r28.u32 + 514, ctx.r7.u8);
loc_838376D4:
	// lhz r8,808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// clrlwi r28,r8,25
	ctx.r28.u64 = ctx.r8.u32 & 0x7F;
	// lbzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bge cr6,0x838376fc
	if (!cr6.lt) goto loc_838376FC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r9,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r9.u64);
	// stb r8,515(r7)
	PPC_STORE_U8(ctx.r7.u32 + 515, ctx.r8.u8);
loc_838376FC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x83837660
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83837660;
	// b 0x838372d4
	goto loc_838372D4;
loc_83837710:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83833860
	ctx.lr = 0x8383771C;
	sub_83833860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83837320
	if (cr6.eq) goto loc_83837320;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,26008
	ctx.r28.s64 = ctx.r28.s64 + 26008;
	// li r30,11
	ctx.r30.s64 = 11;
loc_83837738:
	// bl 0x83a7d958
	ctx.lr = 0x8383773C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x83837740;
	sub_83524138(ctx, base);
	// lis r11,14470
	ctx.r11.s64 = 948305920;
	// lis r10,13421
	ctx.r10.s64 = 879558656;
	// ori r9,r11,22859
	ctx.r9.u64 = ctx.r11.u64 | 22859;
	// ori r8,r10,50646
	ctx.r8.u64 = ctx.r10.u64 | 50646;
	// add r7,r3,r29
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mulhdu r6,r7,r9
	ctx.r6.u64 = ((unsigned __int128)ctx.r7.u64 * (unsigned __int128)ctx.r9.u64) >> 64;
	// rldicl r5,r6,53,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 53) & 0x1FFFFFFFFFFFFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mulli r4,r5,10000
	ctx.r4.s64 = ctx.r5.s64 * 10000;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bne 0x83837738
	if (!cr0.eq) goto loc_83837738;
	// bl 0x83987ca0
	ctx.lr = 0x83837780;
	sub_83987CA0(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// li r6,304
	ctx.r6.s64 = 304;
	// addi r5,r5,25752
	ctx.r5.s64 = ctx.r5.s64 + 25752;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83988948
	ctx.lr = 0x83837794;
	sub_83988948(ctx, base);
	// b 0x838372d4
	goto loc_838372D4;
loc_83837798:
	// bl 0x83987ca0
	ctx.lr = 0x8383779C;
	sub_83987CA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x839889c0
	ctx.lr = 0x838377A4;
	sub_839889C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838372e0
	if (cr6.eq) goto loc_838372E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83837804
	if (!cr6.gt) goto loc_83837804;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r27,r11,25752
	ctx.r27.u64 = ctx.r11.u64 | 25752;
loc_838377CC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,304
	cr6.compare<uint32_t>(ctx.r10.u32, 304, xer);
	// bne cr6,0x838377f0
	if (!cr6.eq) goto loc_838377F0;
	// li r5,304
	ctx.r5.s64 = 304;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x838377F0;
	sub_831CE980(ctx, base);
loc_838377F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x838377cc
	if (cr6.lt) goto loc_838377CC;
loc_83837804:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838336b8
	ctx.lr = 0x8383780C;
	sub_838336B8(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r29,26008
	ctx.r29.s64 = ctx.r29.s64 + 26008;
	// lis r28,-31778
	ctx.r28.s64 = -2082603008;
loc_8383781C:
	// lwz r3,2056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2056);
	// addi r4,r30,11
	ctx.r4.s64 = ctx.r30.s64 + 11;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83837838;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x8383781c
	if (cr6.lt) goto loc_8383781C;
	// bl 0x831156e8
	ctx.lr = 0x83837848;
	sub_831156E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x83837864;
	sub_83123A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83837950
	if (cr6.eq) goto loc_83837950;
	// li r11,8
	ctx.r11.s64 = 8;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r29,r29,26376
	ctx.r29.s64 = ctx.r29.s64 + 26376;
	// addi r5,r5,26377
	ctx.r5.s64 = ctx.r5.s64 + 26377;
	// addi r4,r4,26378
	ctx.r4.s64 = ctx.r4.s64 + 26378;
	// addi r30,r30,26379
	ctx.r30.s64 = ctx.r30.s64 + 26379;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r3,256
	ctx.r6.s64 = ctx.r3.s64 + 256;
	// addi r10,r10,25764
	ctx.r10.s64 = ctx.r10.s64 + 25764;
loc_838378A4:
	// lhz r8,808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// ld r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// lbzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x838378c8
	if (!cr6.lt) goto loc_838378C8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r9,-8(r6)
	PPC_STORE_U64(ctx.r6.u32 + -8, ctx.r9.u64);
	// stb r8,512(r7)
	PPC_STORE_U8(ctx.r7.u32 + 512, ctx.r8.u8);
loc_838378C8:
	// lhz r7,808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// clrlwi r31,r7,25
	ctx.r31.u64 = ctx.r7.u32 & 0x7F;
	// lbzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r28,r9,-1
	ctx.r28.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, xer);
	// bge cr6,0x838378f4
	if (!cr6.lt) goto loc_838378F4;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// stb r7,513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 513, ctx.r7.u8);
loc_838378F4:
	// lhz r7,808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// clrlwi r31,r7,25
	ctx.r31.u64 = ctx.r7.u32 & 0x7F;
	// lbzx r7,r4,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bge cr6,0x83837918
	if (!cr6.lt) goto loc_83837918;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// stb r7,514(r31)
	PPC_STORE_U8(ctx.r31.u32 + 514, ctx.r7.u8);
loc_83837918:
	// lhz r8,808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// clrlwi r31,r8,25
	ctx.r31.u64 = ctx.r8.u32 & 0x7F;
	// lbzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// bge cr6,0x83837940
	if (!cr6.lt) goto loc_83837940;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r9,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r9.u64);
	// stb r8,515(r7)
	PPC_STORE_U8(ctx.r7.u32 + 515, ctx.r8.u8);
loc_83837940:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x838378a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838378A4;
loc_83837950:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8383795C"))) PPC_WEAK_FUNC(sub_8383795C);
PPC_FUNC_IMPL(__imp__sub_8383795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

