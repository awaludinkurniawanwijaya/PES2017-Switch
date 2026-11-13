#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83772D2C"))) PPC_WEAK_FUNC(sub_83772D2C);
PPC_FUNC_IMPL(__imp__sub_83772D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772D30"))) PPC_WEAK_FUNC(sub_83772D30);
PPC_FUNC_IMPL(__imp__sub_83772D30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83772D5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83772d84
	if (cr6.eq) goto loc_83772D84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83772D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8306cc28
	ctx.lr = 0x83772D84;
	sub_8306CC28(ctx, base);
loc_83772D84:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_83772D9C"))) PPC_WEAK_FUNC(sub_83772D9C);
PPC_FUNC_IMPL(__imp__sub_83772D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772DA0"))) PPC_WEAK_FUNC(sub_83772DA0);
PPC_FUNC_IMPL(__imp__sub_83772DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83772DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8306e740
	ctx.lr = 0x83772DC0;
	sub_8306E740(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83772df0
	if (!cr6.eq) goto loc_83772DF0;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,31176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31176);
	// rlwinm r4,r11,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x8306e740
	ctx.lr = 0x83772DDC;
	sub_8306E740(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83772df0
	if (!cr6.eq) goto loc_83772DF0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83772DF0:
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83772DFC;
	sub_831CE980(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83772e28
	if (cr6.eq) goto loc_83772E28;
	// bl 0x8306e8d8
	ctx.lr = 0x83772E1C;
	sub_8306E8D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83772E28:
	// bl 0x8306df38
	ctx.lr = 0x83772E2C;
	sub_8306DF38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83772E38"))) PPC_WEAK_FUNC(sub_83772E38);
PPC_FUNC_IMPL(__imp__sub_83772E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83772E40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31128
	ctx.r11.s64 = ctx.r11.s64 + 31128;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83772e74
	if (!cr6.eq) goto loc_83772E74;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83772e9c
	goto loc_83772E9C;
loc_83772E74:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83772e94
	if (!cr6.eq) goto loc_83772E94;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83772e98
	if (cr6.eq) goto loc_83772E98;
loc_83772E94:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83772E98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83772E9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83772eb4
	if (cr6.eq) goto loc_83772EB4;
loc_83772EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83772EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e498
	ctx.lr = 0x83772EBC;
	sub_8306E498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83772ea8
	if (cr6.eq) goto loc_83772EA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bda5a0
	ctx.lr = 0x83772ED0;
	sub_82BDA5A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83772EE4;
	sub_831CDCF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a78580
	ctx.lr = 0x83772EF4;
	sub_82A78580(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83772F04;
	sub_8306E2A0(ctx, base);
	// addic. r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83772ff4
	if (cr0.eq) goto loc_83772FF4;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_83772F10:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mulli r11,r26,188
	ctx.r11.s64 = ctx.r26.s64 * 188;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r25,r11,124
	ctx.r25.s64 = ctx.r11.s64 + 124;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a72110
	ctx.lr = 0x83772F34;
	sub_82A72110(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83772fcc
	if (!cr6.eq) goto loc_83772FCC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8306e2a0
	ctx.lr = 0x83772F58;
	sub_8306E2A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bge cr6,0x83772fcc
	if (!cr6.lt) goto loc_83772FCC;
loc_83772F60:
	// mulli r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 * 188;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,124
	ctx.r29.s64 = ctx.r11.s64 + 124;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x83772F7C;
	sub_82A72110(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83772fac
	if (!cr6.eq) goto loc_83772FAC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8306e2a0
	ctx.lr = 0x83772FA0;
	sub_8306E2A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83772f60
	if (cr6.lt) goto loc_83772F60;
	// b 0x83772fcc
	goto loc_83772FCC;
loc_83772FAC:
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x83772FBC;
	sub_831CE980(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83772FCC;
	sub_831CDCF0(ctx, base);
loc_83772FCC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83772FE8;
	sub_8306E2A0(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x83772f10
	if (cr6.lt) goto loc_83772F10;
loc_83772FF4:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306df38
	ctx.lr = 0x83773004;
	sub_8306DF38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773010"))) PPC_WEAK_FUNC(sub_83773010);
PPC_FUNC_IMPL(__imp__sub_83773010) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-10736
	ctx.r9.s64 = ctx.r11.s64 + -10736;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83773080
	if (cr6.eq) goto loc_83773080;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83773050;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773070
	if (cr6.eq) goto loc_83773070;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83773070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83773070:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83773078;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_83773080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x83773088;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_8377309C"))) PPC_WEAK_FUNC(sub_8377309C);
PPC_FUNC_IMPL(__imp__sub_8377309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837730A0"))) PPC_WEAK_FUNC(sub_837730A0);
PPC_FUNC_IMPL(__imp__sub_837730A0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773104
	if (cr6.eq) goto loc_83773104;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837730D4;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837730f4
	if (cr6.eq) goto loc_837730F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837730F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837730F4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837730FC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_83773104:
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

__attribute__((alias("__imp__sub_8377311C"))) PPC_WEAK_FUNC(sub_8377311C);
PPC_FUNC_IMPL(__imp__sub_8377311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83773120"))) PPC_WEAK_FUNC(sub_83773120);
PPC_FUNC_IMPL(__imp__sub_83773120) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83773148
	if (!cr6.eq) goto loc_83773148;
loc_83773140:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83773180
	goto loc_83773180;
loc_83773148:
	// bl 0x83108968
	ctx.lr = 0x8377314C;
	sub_83108968(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773140
	if (cr6.eq) goto loc_83773140;
	// bl 0x82aa87f0
	ctx.lr = 0x8377315C;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83108978
	ctx.lr = 0x83773168;
	sub_83108978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83772d30
	ctx.lr = 0x83773174;
	sub_83772D30(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_83773180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83773198"))) PPC_WEAK_FUNC(sub_83773198);
PPC_FUNC_IMPL(__imp__sub_83773198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837731A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82a78580
	ctx.lr = 0x837731D8;
	sub_82A78580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x837731E8;
	sub_82A72110(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8377323c
	if (cr6.eq) goto loc_8377323C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377323c
	if (!cr6.eq) goto loc_8377323C;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8392b4a0
	ctx.lr = 0x83773208;
	sub_8392B4A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377323c
	if (cr6.eq) goto loc_8377323C;
loc_83773210:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377aa90
	ctx.lr = 0x83773218;
	sub_8377AA90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x8377322C;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8392b4a0
	ctx.lr = 0x83773234;
	sub_8392B4A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773210
	if (cr6.lt) goto loc_83773210;
loc_8377323C:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377324C;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837732a0
	if (cr6.eq) goto loc_837732A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837732a0
	if (!cr6.eq) goto loc_837732A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8392b4a0
	ctx.lr = 0x8377326C;
	sub_8392B4A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837732a0
	if (cr6.eq) goto loc_837732A0;
loc_83773274:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377aaa8
	ctx.lr = 0x8377327C;
	sub_8377AAA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773290;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8392b4a0
	ctx.lr = 0x83773298;
	sub_8392B4A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773274
	if (cr6.lt) goto loc_83773274;
loc_837732A0:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83070638
	ctx.lr = 0x837732B0;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773304
	if (cr6.eq) goto loc_83773304;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773304
	if (cr6.eq) goto loc_83773304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x837732D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773304
	if (cr6.eq) goto loc_83773304;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83773304
	if (cr6.lt) goto loc_83773304;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83773308
	if (!cr6.gt) goto loc_83773308;
loc_83773304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83773308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837733c0
	if (cr6.eq) goto loc_837733C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837733c0
	if (!cr6.eq) goto loc_837733C0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x83773330;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837733c0
	if (cr6.eq) goto loc_837733C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837733c0
	if (!cr6.eq) goto loc_837733C0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82dd3a30
	ctx.lr = 0x83773350;
	sub_82DD3A30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773384
	if (cr6.eq) goto loc_83773384;
loc_83773358:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377aac0
	ctx.lr = 0x83773360;
	sub_8377AAC0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773374;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82dd3a30
	ctx.lr = 0x8377337C;
	sub_82DD3A30(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773358
	if (cr6.lt) goto loc_83773358;
loc_83773384:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82aac480
	ctx.lr = 0x8377338C;
	sub_82AAC480(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837733c0
	if (cr6.eq) goto loc_837733C0;
loc_83773394:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377aad8
	ctx.lr = 0x8377339C;
	sub_8377AAD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x837733B0;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82aac480
	ctx.lr = 0x837733B8;
	sub_82AAC480(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773394
	if (cr6.lt) goto loc_83773394;
loc_837733C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b1e8
	ctx.lr = 0x837733C8;
	sub_8377B1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83773500
	if (!cr6.eq) goto loc_83773500;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8377ab08
	ctx.lr = 0x837733DC;
	sub_8377AB08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773410
	if (cr6.eq) goto loc_83773410;
loc_837733E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377ab10
	ctx.lr = 0x837733EC;
	sub_8377AB10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773400;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8377ab08
	ctx.lr = 0x83773408;
	sub_8377AB08(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x837733e4
	if (cr6.lt) goto loc_837733E4;
loc_83773410:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x828e2690
	ctx.lr = 0x83773418;
	sub_828E2690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377344c
	if (cr6.eq) goto loc_8377344C;
loc_83773420:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377ab28
	ctx.lr = 0x83773428;
	sub_8377AB28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x8377343C;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x828e2690
	ctx.lr = 0x83773444;
	sub_828E2690(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773420
	if (cr6.lt) goto loc_83773420;
loc_8377344C:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82b5ac78
	ctx.lr = 0x83773454;
	sub_82B5AC78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773488
	if (cr6.eq) goto loc_83773488;
loc_8377345C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377ab40
	ctx.lr = 0x83773464;
	sub_8377AB40(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773478;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82b5ac78
	ctx.lr = 0x83773480;
	sub_82B5AC78(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8377345c
	if (cr6.lt) goto loc_8377345C;
loc_83773488:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82dd3a30
	ctx.lr = 0x83773490;
	sub_82DD3A30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837734c4
	if (cr6.eq) goto loc_837734C4;
loc_83773498:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377ab58
	ctx.lr = 0x837734A0;
	sub_8377AB58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x837734B4;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82dd3a30
	ctx.lr = 0x837734BC;
	sub_82DD3A30(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773498
	if (cr6.lt) goto loc_83773498;
loc_837734C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82aab690
	ctx.lr = 0x837734CC;
	sub_82AAB690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773500
	if (cr6.eq) goto loc_83773500;
loc_837734D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377ab70
	ctx.lr = 0x837734DC;
	sub_8377AB70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x837734F0;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82aab690
	ctx.lr = 0x837734F8;
	sub_82AAB690(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x837734d4
	if (cr6.lt) goto loc_837734D4;
loc_83773500:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83070638
	ctx.lr = 0x83773510;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773564
	if (cr6.eq) goto loc_83773564;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773564
	if (cr6.eq) goto loc_83773564;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83773538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773564
	if (cr6.eq) goto loc_83773564;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83773564
	if (cr6.lt) goto loc_83773564;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83773568
	if (!cr6.gt) goto loc_83773568;
loc_83773564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83773568:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837735bc
	if (cr6.eq) goto loc_837735BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837735bc
	if (!cr6.eq) goto loc_837735BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8357f310
	ctx.lr = 0x83773588;
	sub_8357F310(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837735bc
	if (cr6.eq) goto loc_837735BC;
loc_83773590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377ab88
	ctx.lr = 0x83773598;
	sub_8377AB88(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x837735AC;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8357f310
	ctx.lr = 0x837735B4;
	sub_8357F310(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773590
	if (cr6.lt) goto loc_83773590;
loc_837735BC:
	// addi r28,r31,116
	ctx.r28.s64 = ctx.r31.s64 + 116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8377c918
	ctx.lr = 0x837735C8;
	sub_8377C918(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377385c
	if (!cr6.eq) goto loc_8377385C;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82aa87f0
	ctx.lr = 0x837735DC;
	sub_82AA87F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773610
	if (cr6.eq) goto loc_83773610;
loc_837735E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377aaf0
	ctx.lr = 0x837735EC;
	sub_8377AAF0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773600;
	sub_8377BA08(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82aa87f0
	ctx.lr = 0x83773608;
	sub_82AA87F0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x837735e4
	if (cr6.lt) goto loc_837735E4;
loc_83773610:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8377c758
	ctx.lr = 0x83773618;
	sub_8377C758(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837736d4
	if (cr6.eq) goto loc_837736D4;
loc_83773620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c760
	ctx.lr = 0x83773628;
	sub_8377C760(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x83773638;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773660
	if (cr6.eq) goto loc_83773660;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773660
	if (cr6.eq) goto loc_83773660;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x83773660;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83773660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c760
	ctx.lr = 0x83773668;
	sub_8377C760(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x83773680;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837736c4
	if (cr6.eq) goto loc_837736C4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837736c4
	if (cr6.eq) goto loc_837736C4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837736c4
	if (cr6.lt) goto loc_837736C4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837736c4
	if (cr6.gt) goto loc_837736C4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x837736C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837736C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8377c758
	ctx.lr = 0x837736CC;
	sub_8377C758(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773620
	if (cr6.lt) goto loc_83773620;
loc_837736D4:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82429688
	ctx.lr = 0x837736DC;
	sub_82429688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773798
	if (cr6.eq) goto loc_83773798;
loc_837736E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c778
	ctx.lr = 0x837736EC;
	sub_8377C778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x837736FC;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773724
	if (cr6.eq) goto loc_83773724;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773724
	if (cr6.eq) goto loc_83773724;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x83773724;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83773724:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c778
	ctx.lr = 0x8377372C;
	sub_8377C778(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x83773744;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773788
	if (cr6.eq) goto loc_83773788;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773788
	if (cr6.eq) goto loc_83773788;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83773788
	if (cr6.lt) goto loc_83773788;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83773788
	if (cr6.gt) goto loc_83773788;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83773788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83773788:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82429688
	ctx.lr = 0x83773790;
	sub_82429688(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x837736e4
	if (cr6.lt) goto loc_837736E4;
loc_83773798:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x839db810
	ctx.lr = 0x837737A0;
	sub_839DB810(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377385c
	if (cr6.eq) goto loc_8377385C;
loc_837737A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c740
	ctx.lr = 0x837737B0;
	sub_8377C740(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x837737C0;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837737e8
	if (cr6.eq) goto loc_837737E8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837737e8
	if (cr6.eq) goto loc_837737E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x837737E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837737E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c740
	ctx.lr = 0x837737F0;
	sub_8377C740(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x83773808;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377384c
	if (cr6.eq) goto loc_8377384C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377384c
	if (cr6.eq) goto loc_8377384C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377384c
	if (cr6.lt) goto loc_8377384C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377384c
	if (cr6.gt) goto loc_8377384C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377384C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377384C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x839db810
	ctx.lr = 0x83773854;
	sub_839DB810(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x837737a8
	if (cr6.lt) goto loc_837737A8;
loc_8377385C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82dd3a30
	ctx.lr = 0x83773868;
	sub_82DD3A30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773910
	if (cr6.eq) goto loc_83773910;
loc_83773870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c710
	ctx.lr = 0x83773878;
	sub_8377C710(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x83773888;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837738dc
	if (cr6.eq) goto loc_837738DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837738dc
	if (cr6.eq) goto loc_837738DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x837738B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837738dc
	if (cr6.eq) goto loc_837738DC;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837738dc
	if (cr6.lt) goto loc_837738DC;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837738e0
	if (!cr6.gt) goto loc_837738E0;
loc_837738DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837738E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837738f8
	if (cr6.eq) goto loc_837738F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377390c
	if (!cr6.eq) goto loc_8377390C;
loc_837738F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82dd3a30
	ctx.lr = 0x83773900;
	sub_82DD3A30(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83773870
	if (cr6.lt) goto loc_83773870;
	// b 0x83773910
	goto loc_83773910;
loc_8377390C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83773910:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837739e0
	if (!cr6.eq) goto loc_837739E0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82429688
	ctx.lr = 0x83773924;
	sub_82429688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837739e0
	if (cr6.eq) goto loc_837739E0;
loc_8377392C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c728
	ctx.lr = 0x83773934;
	sub_8377C728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x83773944;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377396c
	if (cr6.eq) goto loc_8377396C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377396c
	if (cr6.eq) goto loc_8377396C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377396C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377396C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c728
	ctx.lr = 0x83773974;
	sub_8377C728(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x8377398C;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837739d0
	if (cr6.eq) goto loc_837739D0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837739d0
	if (cr6.eq) goto loc_837739D0;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837739d0
	if (cr6.lt) goto loc_837739D0;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837739d0
	if (cr6.gt) goto loc_837739D0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x837739D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837739D0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82429688
	ctx.lr = 0x837739D8;
	sub_82429688(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8377392c
	if (cr6.lt) goto loc_8377392C;
loc_837739E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837739EC"))) PPC_WEAK_FUNC(sub_837739EC);
PPC_FUNC_IMPL(__imp__sub_837739EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837739F0"))) PPC_WEAK_FUNC(sub_837739F0);
PPC_FUNC_IMPL(__imp__sub_837739F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837739F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x83773a70
	if (cr6.eq) goto loc_83773A70;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a72110
	ctx.lr = 0x83773A38;
	sub_82A72110(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773aa0
	if (cr6.eq) goto loc_83773AA0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83773aa0
	if (!cr6.eq) goto loc_83773AA0;
	// li r6,106
	ctx.r6.s64 = 106;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773A64;
	sub_8377BA08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83773A70:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82a78580
	ctx.lr = 0x83773A7C;
	sub_82A78580(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83773A80:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8377ba08
	ctx.lr = 0x83773A94;
	sub_8377BA08(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,108
	cr6.compare<uint32_t>(ctx.r31.u32, 108, xer);
	// blt cr6,0x83773a80
	if (cr6.lt) goto loc_83773A80;
loc_83773AA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773AAC"))) PPC_WEAK_FUNC(sub_83773AAC);
PPC_FUNC_IMPL(__imp__sub_83773AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83773AB0"))) PPC_WEAK_FUNC(sub_83773AB0);
PPC_FUNC_IMPL(__imp__sub_83773AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83773AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x83773b2c
	if (cr6.eq) goto loc_83773B2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a70db0
	ctx.lr = 0x83773AF4;
	sub_82A70DB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773b5c
	if (cr6.eq) goto loc_83773B5C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83773b5c
	if (!cr6.eq) goto loc_83773B5C;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83785148
	ctx.lr = 0x83773B20;
	sub_83785148(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83773B2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r6,14
	ctx.r4.u64 = ctx.r6.u32 & 0x3FFFF;
	// bl 0x82a9bc48
	ctx.lr = 0x83773B38;
	sub_82A9BC48(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83773B3C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83785148
	ctx.lr = 0x83773B50;
	sub_83785148(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,45
	cr6.compare<uint32_t>(ctx.r31.u32, 45, xer);
	// blt cr6,0x83773b3c
	if (cr6.lt) goto loc_83773B3C;
loc_83773B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773B68"))) PPC_WEAK_FUNC(sub_83773B68);
PPC_FUNC_IMPL(__imp__sub_83773B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83773B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x83773be8
	if (cr6.eq) goto loc_83773BE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82aa8dc8
	ctx.lr = 0x83773BB0;
	sub_82AA8DC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773c18
	if (cr6.eq) goto loc_83773C18;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83773c18
	if (!cr6.eq) goto loc_83773C18;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x83773BDC;
	sub_837860C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83773BE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82aa8e60
	ctx.lr = 0x83773BF4;
	sub_82AA8E60(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83773BF8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x83773C0C;
	sub_837860C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x83773bf8
	if (cr6.lt) goto loc_83773BF8;
loc_83773C18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773C24"))) PPC_WEAK_FUNC(sub_83773C24);
PPC_FUNC_IMPL(__imp__sub_83773C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83773C28"))) PPC_WEAK_FUNC(sub_83773C28);
PPC_FUNC_IMPL(__imp__sub_83773C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83773C30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x83773C48;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773cf8
	if (cr6.eq) goto loc_83773CF8;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r30,r31,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lwz r11,31176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31176);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83773c7c
	if (!cr6.eq) goto loc_83773C7C;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773c80
	if (cr6.eq) goto loc_83773C80;
loc_83773C7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83773C80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773c98
	if (cr6.eq) goto loc_83773C98;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83773C98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x83773CA4;
	sub_8311C148(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83773ccc
	if (!cr6.eq) goto loc_83773CCC;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83773cd0
	if (cr6.eq) goto loc_83773CD0;
loc_83773CCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83773CD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773cf8
	if (cr6.eq) goto loc_83773CF8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83773ab0
	ctx.lr = 0x83773CF0;
	sub_83773AB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83773CF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773D04"))) PPC_WEAK_FUNC(sub_83773D04);
PPC_FUNC_IMPL(__imp__sub_83773D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83773D08"))) PPC_WEAK_FUNC(sub_83773D08);
PPC_FUNC_IMPL(__imp__sub_83773D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83773D10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x83773D2C;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83773ddc
	if (cr6.eq) goto loc_83773DDC;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lhz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// lwz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,31192
	ctx.r11.s64 = ctx.r11.s64 + 31192;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x83773d60
	if (!cr6.eq) goto loc_83773D60;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83773d64
	if (cr6.eq) goto loc_83773D64;
loc_83773D60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83773D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773d7c
	if (cr6.eq) goto loc_83773D7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83773D7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x83773D88;
	sub_8311C260(ctx, base);
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83773db0
	if (!cr6.eq) goto loc_83773DB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83773db4
	if (cr6.eq) goto loc_83773DB4;
loc_83773DB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83773DB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773ddc
	if (cr6.eq) goto loc_83773DDC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83773b68
	ctx.lr = 0x83773DD4;
	sub_83773B68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83773DDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773DE8"))) PPC_WEAK_FUNC(sub_83773DE8);
PPC_FUNC_IMPL(__imp__sub_83773DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83773DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x83773e64
	if (cr6.eq) goto loc_83773E64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a9eab0
	ctx.lr = 0x83773E2C;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773e90
	if (cr6.eq) goto loc_83773E90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83773e90
	if (!cr6.eq) goto loc_83773E90;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837867a0
	ctx.lr = 0x83773E58;
	sub_837867A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83773E64:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82a9f728
	ctx.lr = 0x83773E70;
	sub_82A9F728(ctx, base);
loc_83773E70:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837867a0
	ctx.lr = 0x83773E84;
	sub_837867A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(ctx.r31.u32, 17, xer);
	// blt cr6,0x83773e70
	if (cr6.lt) goto loc_83773E70;
loc_83773E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773E9C"))) PPC_WEAK_FUNC(sub_83773E9C);
PPC_FUNC_IMPL(__imp__sub_83773E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83773EA0"))) PPC_WEAK_FUNC(sub_83773EA0);
PPC_FUNC_IMPL(__imp__sub_83773EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83773EA8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x83773EC0;
	sub_83763B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83773ed4
	if (!cr6.eq) goto loc_83773ED4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83773ED4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8376b8b8
	ctx.lr = 0x83773EDC;
	sub_8376B8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773f60
	if (cr6.eq) goto loc_83773F60;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r27,48(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,60648
	ctx.r10.u64 = ctx.r11.u64 | 60648;
	// lwzx r24,r27,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83773f60
	if (cr6.eq) goto loc_83773F60;
	// addis r28,r27,85
	ctx.r28.s64 = ctx.r27.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r28,r28,11904
	ctx.r28.s64 = ctx.r28.s64 + 11904;
	// ori r23,r11,59456
	ctx.r23.u64 = ctx.r11.u64 | 59456;
loc_83773F18:
	// cmplwi cr6,r31,300
	cr6.compare<uint32_t>(ctx.r31.u32, 300, xer);
	// add r5,r27,r23
	ctx.r5.u64 = ctx.r27.u64 + ctx.r23.u64;
	// bge cr6,0x83773f28
	if (!cr6.lt) goto loc_83773F28;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_83773F28:
	// lwz r11,88(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83773f50
	if (!cr6.eq) goto loc_83773F50;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83773de8
	ctx.lr = 0x83773F4C;
	sub_83773DE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83773F50:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,548
	ctx.r28.s64 = ctx.r28.s64 + 548;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// blt cr6,0x83773f18
	if (cr6.lt) goto loc_83773F18;
loc_83773F60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83773F68"))) PPC_WEAK_FUNC(sub_83773F68);
PPC_FUNC_IMPL(__imp__sub_83773F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83773F70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83124aa8
	ctx.lr = 0x83773F98;
	sub_83124AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773fb4
	if (cr6.eq) goto loc_83773FB4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83773fb8
	if (cr6.eq) goto loc_83773FB8;
loc_83773FB4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83773FB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74b38
	ctx.lr = 0x83773FD4;
	sub_82A74B38(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8377400c
	if (!cr6.eq) goto loc_8377400C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306cd38
	ctx.lr = 0x83773FF4;
	sub_8306CD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774030
	if (cr6.eq) goto loc_83774030;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83774030
	if (!cr6.eq) goto loc_83774030;
loc_8377400C:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83786968
	ctx.lr = 0x83774020;
	sub_83786968(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a74b38
	ctx.lr = 0x83774030;
	sub_82A74B38(ctx, base);
loc_83774030:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377403C"))) PPC_WEAK_FUNC(sub_8377403C);
PPC_FUNC_IMPL(__imp__sub_8377403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83774040"))) PPC_WEAK_FUNC(sub_83774040);
PPC_FUNC_IMPL(__imp__sub_83774040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83774048;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x837740bc
	if (cr6.eq) goto loc_837740BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8306cd38
	ctx.lr = 0x83774084;
	sub_8306CD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837740e8
	if (cr6.eq) goto loc_837740E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837740e8
	if (!cr6.eq) goto loc_837740E8;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83786968
	ctx.lr = 0x837740B0;
	sub_83786968(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837740BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x82a74b38
	ctx.lr = 0x837740C8;
	sub_82A74B38(ctx, base);
loc_837740C8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83786968
	ctx.lr = 0x837740DC;
	sub_83786968(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x837740c8
	if (cr6.lt) goto loc_837740C8;
loc_837740E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837740F4"))) PPC_WEAK_FUNC(sub_837740F4);
PPC_FUNC_IMPL(__imp__sub_837740F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837740F8"))) PPC_WEAK_FUNC(sub_837740F8);
PPC_FUNC_IMPL(__imp__sub_837740F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83774100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x83774118;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774188
	if (cr6.eq) goto loc_83774188;
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r28,255
	cr6.compare<uint32_t>(ctx.r28.u32, 255, xer);
	// bne cr6,0x83774138
	if (!cr6.eq) goto loc_83774138;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83774138:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c448
	ctx.lr = 0x83774144;
	sub_8311C448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774188
	if (cr6.eq) goto loc_83774188;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83124aa8
	ctx.lr = 0x8377415C;
	sub_83124AA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x83774188
	if (!cr6.eq) goto loc_83774188;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774040
	ctx.lr = 0x83774180;
	sub_83774040(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83774188:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774194"))) PPC_WEAK_FUNC(sub_83774194);
PPC_FUNC_IMPL(__imp__sub_83774194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83774198"))) PPC_WEAK_FUNC(sub_83774198);
PPC_FUNC_IMPL(__imp__sub_83774198) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837741ec
	if (!cr6.eq) goto loc_837741EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r6,14
	ctx.r4.u64 = ctx.r6.u32 & 0x3FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306ca70
	ctx.lr = 0x837741DC;
	sub_8306CA70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83786b10
	ctx.lr = 0x837741EC;
	sub_83786B10(ctx, base);
loc_837741EC:
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

__attribute__((alias("__imp__sub_83774208"))) PPC_WEAK_FUNC(sub_83774208);
PPC_FUNC_IMPL(__imp__sub_83774208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83774210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x83774228;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837742d8
	if (cr6.eq) goto loc_837742D8;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r30,r31,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lwz r11,31176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31176);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377425c
	if (!cr6.eq) goto loc_8377425C;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83774260
	if (cr6.eq) goto loc_83774260;
loc_8377425C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83774260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774278
	if (cr6.eq) goto loc_83774278;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83774278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x83774284;
	sub_8311C148(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x837742ac
	if (!cr6.eq) goto loc_837742AC;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837742b0
	if (cr6.eq) goto loc_837742B0;
loc_837742AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837742B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837742d8
	if (cr6.eq) goto loc_837742D8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774198
	ctx.lr = 0x837742D0;
	sub_83774198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837742D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837742E4"))) PPC_WEAK_FUNC(sub_837742E4);
PPC_FUNC_IMPL(__imp__sub_837742E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837742E8"))) PPC_WEAK_FUNC(sub_837742E8);
PPC_FUNC_IMPL(__imp__sub_837742E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837742F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377433c
	if (!cr6.eq) goto loc_8377433C;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r7,14
	ctx.r4.u64 = ctx.r7.u32 & 0x3FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306cb98
	ctx.lr = 0x83774328;
	sub_8306CB98(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83786e18
	ctx.lr = 0x8377433C;
	sub_83786E18(ctx, base);
loc_8377433C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774348"))) PPC_WEAK_FUNC(sub_83774348);
PPC_FUNC_IMPL(__imp__sub_83774348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83774350;
	__savegprlr_26(ctx, base);
	// stwu r1,-2096(r1)
	ea = -2096 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x83774368;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377444c
	if (cr6.eq) goto loc_8377444C;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r30,r31,14,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lwz r11,31176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31176);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377439c
	if (!cr6.eq) goto loc_8377439C;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837743a0
	if (cr6.eq) goto loc_837743A0;
loc_8377439C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837743A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837743b8
	if (cr6.eq) goto loc_837743B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837743B8:
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c148
	ctx.lr = 0x837743C8;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x837743D8;
	sub_831CE980(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,1224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// bl 0x8311c260
	ctx.lr = 0x837743E4;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x837743F4;
	sub_831CE980(ctx, base);
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x83774418
	if (!cr6.eq) goto loc_83774418;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377441c
	if (cr6.eq) goto loc_8377441C;
loc_83774418:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377441C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377444c
	if (cr6.eq) goto loc_8377444C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837742e8
	ctx.lr = 0x83774444;
	sub_837742E8(ctx, base);
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8377444C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774458"))) PPC_WEAK_FUNC(sub_83774458);
PPC_FUNC_IMPL(__imp__sub_83774458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83774460;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377446C;
	sub_83763B90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83774484
	if (!cr6.eq) goto loc_83774484;
loc_83774478:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83774484:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x837744A0;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774544
	if (cr6.eq) goto loc_83774544;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r11,r11,31128
	ctx.r11.s64 = ctx.r11.s64 + 31128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837744d0
	if (!cr6.eq) goto loc_837744D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x837744f8
	goto loc_837744F8;
loc_837744D0:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x837744f0
	if (!cr6.eq) goto loc_837744F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837744f4
	if (cr6.eq) goto loc_837744F4;
loc_837744F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837744F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_837744F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83774478
	if (!cr6.eq) goto loc_83774478;
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311d290
	ctx.lr = 0x83774514;
	sub_8311D290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x83774534
	if (cr6.eq) goto loc_83774534;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x83774528;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83774534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311d330
	ctx.lr = 0x8377453C;
	sub_8311D330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311ca18
	ctx.lr = 0x83774544;
	sub_8311CA18(ctx, base);
loc_83774544:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774550"))) PPC_WEAK_FUNC(sub_83774550);
PPC_FUNC_IMPL(__imp__sub_83774550) {
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
	ctx.lr = 0x83774558;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377456C;
	sub_83763B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83774584
	if (!cr6.eq) goto loc_83774584;
loc_83774578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83774584:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a70db0
	ctx.lr = 0x8377459C;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774578
	if (cr6.eq) goto loc_83774578;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// lwz r25,60(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ble cr6,0x837745d8
	if (!cr6.gt) goto loc_837745D8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_837745D8:
	// bl 0x8311bdf0
	ctx.lr = 0x837745DC;
	sub_8311BDF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r30,137
	ctx.r30.s64 = 137;
loc_837745F8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83774610
	if (cr6.eq) goto loc_83774610;
	// cmplwi cr6,r29,14
	cr6.compare<uint32_t>(ctx.r29.u32, 14, xer);
	// beq cr6,0x837746e4
	if (cr6.eq) goto loc_837746E4;
	// cmplwi cr6,r29,30
	cr6.compare<uint32_t>(ctx.r29.u32, 30, xer);
	// beq cr6,0x837746e4
	if (cr6.eq) goto loc_837746E4;
loc_83774610:
	// cmplwi cr6,r29,33
	cr6.compare<uint32_t>(ctx.r29.u32, 33, xer);
	// bne cr6,0x837746cc
	if (!cr6.eq) goto loc_837746CC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bne cr6,0x837746cc
	if (!cr6.eq) goto loc_837746CC;
	// addi r31,r28,1209
	ctx.r31.s64 = ctx.r28.s64 + 1209;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83147678
	ctx.lr = 0x83774638;
	sub_83147678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774678
	if (cr6.eq) goto loc_83774678;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b690
	ctx.lr = 0x83774654;
	sub_8312B690(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x83774678
	if (!cr6.lt) goto loc_83774678;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_83774678:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83147678
	ctx.lr = 0x8377468C;
	sub_83147678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837746cc
	if (cr6.eq) goto loc_837746CC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b690
	ctx.lr = 0x837746A8;
	sub_8312B690(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x837746cc
	if (!cr6.lt) goto loc_837746CC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_837746CC:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x837857b0
	ctx.lr = 0x837746E4;
	sub_837857B0(ctx, base);
loc_837746E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,45
	cr6.compare<uint32_t>(ctx.r29.u32, 45, xer);
	// blt cr6,0x837745f8
	if (cr6.lt) goto loc_837745F8;
	// addis r28,r25,28
	ctx.r28.s64 = ctx.r25.s64 + 1835008;
	// addic. r28,r28,8720
	xer.ca = ctx.r28.u32 > 4294958575;
	ctx.r28.s64 = ctx.r28.s64 + 8720;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8377488c
	if (cr0.eq) goto loc_8377488C;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x8377470C;
	sub_82AA9D18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377477c
	if (cr6.eq) goto loc_8377477C;
	// lis r30,-31770
	ctx.r30.s64 = -2082078720;
loc_83774720:
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x83774734;
	sub_82AA9C78(ctx, base);
	// lwz r11,31176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31176);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83774770
	if (cr6.eq) goto loc_83774770;
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ble cr6,0x8377475c
	if (!cr6.gt) goto loc_8377475C;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
loc_8377475C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83146868
	ctx.lr = 0x83774770;
	sub_83146868(ctx, base);
loc_83774770:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83774720
	if (cr6.lt) goto loc_83774720;
loc_8377477C:
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8306c810
	ctx.lr = 0x8377478C;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837747a0
	if (cr6.eq) goto loc_837747A0;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// b 0x837747c4
	goto loc_837747C4;
loc_837747A0:
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8306c890
	ctx.lr = 0x837747B0;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_837747C4:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377488c
	if (cr6.eq) goto loc_8377488C;
loc_837747D0:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8306c810
	ctx.lr = 0x837747E4;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377483c
	if (cr6.eq) goto loc_8377483C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377483c
	if (cr6.eq) goto loc_8377483C;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x83774810;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377483c
	if (cr6.eq) goto loc_8377483C;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377483c
	if (cr6.lt) goto loc_8377483C;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83774840
	if (!cr6.gt) goto loc_83774840;
loc_8377483C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_83774840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774880
	if (cr6.eq) goto loc_83774880;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83774874
	if (cr6.eq) goto loc_83774874;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83146bd0
	ctx.lr = 0x83774870;
	sub_83146BD0(ctx, base);
	// b 0x83774880
	goto loc_83774880;
loc_83774874:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83147448
	ctx.lr = 0x83774880;
	sub_83147448(ctx, base);
loc_83774880:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x837747d0
	if (cr6.lt) goto loc_837747D0;
loc_8377488C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774898"))) PPC_WEAK_FUNC(sub_83774898);
PPC_FUNC_IMPL(__imp__sub_83774898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x837748A0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x83763b90
	ctx.lr = 0x837748B4;
	sub_83763B90(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837748cc
	if (!cr6.eq) goto loc_837748CC;
loc_837748C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_837748CC:
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r23,48(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x837748E8;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837748c0
	if (cr6.eq) goto loc_837748C0;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// ori r10,r11,60648
	ctx.r10.u64 = ctx.r11.u64 | 60648;
	// lwzx r21,r23,r10
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x837749b8
	if (cr6.eq) goto loc_837749B8;
	// addis r25,r23,85
	ctx.r25.s64 = ctx.r23.s64 + 5570560;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r25,11904
	ctx.r25.s64 = ctx.r25.s64 + 11904;
	// ori r22,r10,59456
	ctx.r22.u64 = ctx.r10.u64 | 59456;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
loc_83774924:
	// cmplwi cr6,r26,300
	cr6.compare<uint32_t>(ctx.r26.u32, 300, xer);
	// add r30,r23,r22
	ctx.r30.u64 = ctx.r23.u64 + ctx.r22.u64;
	// bge cr6,0x83774934
	if (!cr6.lt) goto loc_83774934;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_83774934:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x837749a8
	if (!cr6.eq) goto loc_837749A8;
	// bl 0x8376b8b8
	ctx.lr = 0x83774948;
	sub_8376B8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837749a8
	if (cr6.eq) goto loc_837749A8;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// clrlwi r29,r20,24
	ctx.r29.u64 = ctx.r20.u32 & 0xFF;
loc_83774960:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83774980
	if (cr6.eq) goto loc_83774980;
	// cmplwi cr6,r31,15
	cr6.compare<uint32_t>(ctx.r31.u32, 15, xer);
	// beq cr6,0x83774980
	if (cr6.eq) goto loc_83774980;
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// beq cr6,0x83774980
	if (cr6.eq) goto loc_83774980;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// bne cr6,0x83774998
	if (!cr6.eq) goto loc_83774998;
loc_83774980:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x83786380
	ctx.lr = 0x83774998;
	sub_83786380(ctx, base);
loc_83774998:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(ctx.r31.u32, 17, xer);
	// blt cr6,0x83774960
	if (cr6.lt) goto loc_83774960;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
loc_837749A8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,548
	ctx.r25.s64 = ctx.r25.s64 + 548;
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, xer);
	// blt cr6,0x83774924
	if (cr6.lt) goto loc_83774924;
loc_837749B8:
	// lwz r11,60(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 60);
	// addis r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 1835008;
	// addic. r31,r31,8720
	xer.ca = ctx.r31.u32 > 4294958575;
	ctx.r31.s64 = ctx.r31.s64 + 8720;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83774a98
	if (cr0.eq) goto loc_83774A98;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x837749DC;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774a2c
	if (cr6.eq) goto loc_83774A2C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83774a18
	if (cr6.eq) goto loc_83774A18;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x83146d40
	ctx.lr = 0x83774A14;
	sub_83146D40(ctx, base);
	// b 0x83774a2c
	goto loc_83774A2C;
loc_83774A18:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// bl 0x831474f0
	ctx.lr = 0x83774A2C;
	sub_831474F0(ctx, base);
loc_83774A2C:
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a9eab0
	ctx.lr = 0x83774A40;
	sub_82A9EAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774a98
	if (cr6.eq) goto loc_83774A98;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83774a84
	if (cr6.eq) goto loc_83774A84;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r5,r1,86
	ctx.r5.s64 = ctx.r1.s64 + 86;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// bl 0x83146d40
	ctx.lr = 0x83774A78;
	sub_83146D40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_83774A84:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// bl 0x831474f0
	ctx.lr = 0x83774A98;
	sub_831474F0(ctx, base);
loc_83774A98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774AA4"))) PPC_WEAK_FUNC(sub_83774AA4);
PPC_FUNC_IMPL(__imp__sub_83774AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83774AA8"))) PPC_WEAK_FUNC(sub_83774AA8);
PPC_FUNC_IMPL(__imp__sub_83774AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83774AB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83763b90
	ctx.lr = 0x83774AC0;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83774ad4
	if (!cr6.eq) goto loc_83774AD4;
loc_83774AC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83774AD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306cd38
	ctx.lr = 0x83774AF0;
	sub_8306CD38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83774ac8
	if (cr6.eq) goto loc_83774AC8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c448
	ctx.lr = 0x83774B0C;
	sub_8311C448(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_83774B20:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83786a40
	ctx.lr = 0x83774B38;
	sub_83786A40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83774b20
	if (cr6.lt) goto loc_83774B20;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774B50"))) PPC_WEAK_FUNC(sub_83774B50);
PPC_FUNC_IMPL(__imp__sub_83774B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83774B58;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83774B64;
	sub_83763B90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83774b78
	if (!cr6.eq) goto loc_83774B78;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83774B78:
	// lis r29,-31770
	ctx.r29.s64 = -2082078720;
	// lwz r30,60(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,31176(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31176);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774BA0;
	sub_82A713F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83774c08
	if (cr6.eq) goto loc_83774C08;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r4,18,14,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r26,r4,25,25,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 25) & 0x7F;
	// clrlwi r25,r4,25
	ctx.r25.u64 = ctx.r4.u32 & 0x7F;
	// bl 0x8311cb30
	ctx.lr = 0x83774BC4;
	sub_8311CB30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774bdc
	if (cr6.eq) goto loc_83774BDC;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83774BD8;
	sub_831CE980(ctx, base);
	// b 0x83774c08
	goto loc_83774C08;
loc_83774BDC:
	// lwz r11,31176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x8311cb30
	ctx.lr = 0x83774BEC;
	sub_8311CB30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774c00
	if (cr6.eq) goto loc_83774C00;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83774C00;
	sub_831CE980(ctx, base);
loc_83774C00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311cc30
	ctx.lr = 0x83774C08;
	sub_8311CC30(ctx, base);
loc_83774C08:
	// lwz r11,31176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31176);
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// xor r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83774c34
	if (!cr6.eq) goto loc_83774C34;
	// xor r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83774c38
	if (cr6.eq) goto loc_83774C38;
loc_83774C34:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83774C38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83774e88
	if (!cr6.eq) goto loc_83774E88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x83774C4C;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774e88
	if (cr6.eq) goto loc_83774E88;
	// addi r29,r3,1209
	ctx.r29.s64 = ctx.r3.s64 + 1209;
	// clrlwi r5,r25,24
	ctx.r5.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312b690
	ctx.lr = 0x83774C68;
	sub_8312B690(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bge cr6,0x83774e88
	if (!cr6.lt) goto loc_83774E88;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774C88;
	sub_82A713F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83774d9c
	if (!cr6.eq) goto loc_83774D9C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83774d9c
	if (!cr6.eq) goto loc_83774D9C;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83774d9c
	if (!cr6.eq) goto loc_83774D9C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bge cr6,0x83774d9c
	if (!cr6.lt) goto loc_83774D9C;
	// li r5,121
	ctx.r5.s64 = 121;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774CD0;
	sub_82A713F0(ctx, base);
	// li r5,122
	ctx.r5.s64 = 122;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774CE0;
	sub_82A713F0(ctx, base);
	// li r5,123
	ctx.r5.s64 = 123;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774CF0;
	sub_82A713F0(ctx, base);
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774D00;
	sub_82A713F0(ctx, base);
	// li r5,125
	ctx.r5.s64 = 125;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774D10;
	sub_82A713F0(ctx, base);
	// li r5,126
	ctx.r5.s64 = 126;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774D20;
	sub_82A713F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bge cr6,0x83774d54
	if (!cr6.lt) goto loc_83774D54;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// bge cr6,0x83774d54
	if (!cr6.lt) goto loc_83774D54;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
loc_83774D54:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x83774e88
	if (!cr6.lt) goto loc_83774E88;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r7,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83774D9C:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x83774dbc
	if (!cr6.lt) goto loc_83774DBC;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_83774DBC:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774DD0;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r11,2,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// bl 0x82a713f0
	ctx.lr = 0x83774DE8;
	sub_82A713F0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r27,r10,2,24,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// bl 0x82a713f0
	ctx.lr = 0x83774E00;
	sub_82A713F0(ctx, base);
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x83774e24
	if (!cr6.lt) goto loc_83774E24;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r9,r10,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// stb r28,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// stb r27,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r27.u8);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_83774E24:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x83774E34;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r11,2,24,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// bl 0x82a713f0
	ctx.lr = 0x83774E4C;
	sub_82A713F0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r10,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// bl 0x82a713f0
	ctx.lr = 0x83774E64;
	sub_82A713F0(ctx, base);
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x83774e88
	if (!cr6.lt) goto loc_83774E88;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r9,r10,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// stb r28,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r28.u8);
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
loc_83774E88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83774E94"))) PPC_WEAK_FUNC(sub_83774E94);
PPC_FUNC_IMPL(__imp__sub_83774E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83774E98"))) PPC_WEAK_FUNC(sub_83774E98);
PPC_FUNC_IMPL(__imp__sub_83774E98) {
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
	// bl 0x83763b90
	ctx.lr = 0x83774EB4;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83774ec4
	if (!cr6.eq) goto loc_83774EC4;
loc_83774EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83774f30
	goto loc_83774F30;
loc_83774EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306c9d8
	ctx.lr = 0x83774EE0;
	sub_8306C9D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83774ebc
	if (cr6.eq) goto loc_83774EBC;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x83774f08
	if (!cr6.gt) goto loc_83774F08;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_83774F08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x83774F10;
	sub_8311BDF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83786c00
	ctx.lr = 0x83774F2C;
	sub_83786C00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83774F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83774F48"))) PPC_WEAK_FUNC(sub_83774F48);
PPC_FUNC_IMPL(__imp__sub_83774F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83774F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83774F5C;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83774f70
	if (!cr6.eq) goto loc_83774F70;
loc_83774F64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83774F70:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306cb00
	ctx.lr = 0x83774F8C;
	sub_8306CB00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83774f64
	if (cr6.eq) goto loc_83774F64;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x83774fb4
	if (!cr6.gt) goto loc_83774FB4;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_83774FB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x83774FBC;
	sub_8311BDF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774f64
	if (cr6.eq) goto loc_83774F64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x83774FD4;
	sub_8311BE78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83774f64
	if (cr6.eq) goto loc_83774F64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83786f30
	ctx.lr = 0x83774FFC;
	sub_83786F30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775008"))) PPC_WEAK_FUNC(sub_83775008);
PPC_FUNC_IMPL(__imp__sub_83775008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83775010;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775020;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83775034
	if (!cr6.eq) goto loc_83775034;
loc_83775028:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83775034:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83775028
	if (cr6.eq) goto loc_83775028;
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83775080
	if (cr6.eq) goto loc_83775080;
	// li r30,2500
	ctx.r30.s64 = 2500;
	// lis r29,-31770
	ctx.r29.s64 = -2082078720;
loc_83775050:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83775060;
	sub_831CDCF0(ctx, base);
	// lwz r11,31176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31176);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x82aaf090
	ctx.lr = 0x83775074;
	sub_82AAF090(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// bne 0x83775050
	if (!cr0.eq) goto loc_83775050;
loc_83775080:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83775094;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837750dc
	if (cr6.eq) goto loc_837750DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x837750B4;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837750dc
	if (cr6.eq) goto loc_837750DC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_837750C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83774b50
	ctx.lr = 0x837750D0;
	sub_83774B50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// bne 0x837750c0
	if (!cr0.eq) goto loc_837750C0;
loc_837750DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837750E8"))) PPC_WEAK_FUNC(sub_837750E8);
PPC_FUNC_IMPL(__imp__sub_837750E8) {
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
	// bl 0x83773010
	ctx.lr = 0x83775108;
	sub_83773010(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775120
	if (cr6.eq) goto loc_83775120;
	// bl 0x82416268
	ctx.lr = 0x8377511C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83775120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83775138"))) PPC_WEAK_FUNC(sub_83775138);
PPC_FUNC_IMPL(__imp__sub_83775138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83775140;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83775168
	if (!cr6.eq) goto loc_83775168;
loc_8377515C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83775168:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775170;
	sub_83763B90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377515c
	if (cr6.eq) goto loc_8377515C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bd68
	ctx.lr = 0x83775188;
	sub_8311BD68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x8306eeb0
	ctx.lr = 0x8377519C;
	sub_8306EEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837751d0
	if (cr6.eq) goto loc_837751D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377523c
	if (cr6.eq) goto loc_8377523C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837739f0
	ctx.lr = 0x837751C8;
	sub_837739F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837751D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83775248
	if (cr6.eq) goto loc_83775248;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837739f0
	ctx.lr = 0x837751EC;
	sub_837739F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775248
	if (cr6.eq) goto loc_83775248;
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r3,60(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8377520C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8377520c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8377520C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d1d0
	ctx.lr = 0x83775220;
	sub_8311D1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775248
	if (cr6.eq) goto loc_83775248;
	// addi r3,r27,116
	ctx.r3.s64 = ctx.r27.s64 + 116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x8377523C;
	sub_831CE980(ctx, base);
loc_8377523C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83775248:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83775264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377526C"))) PPC_WEAK_FUNC(sub_8377526C);
PPC_FUNC_IMPL(__imp__sub_8377526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83775270"))) PPC_WEAK_FUNC(sub_83775270);
PPC_FUNC_IMPL(__imp__sub_83775270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83775278;
	__savegprlr_28(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837752a4
	if (!cr6.eq) goto loc_837752A4;
loc_83775298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837752A4:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x837752B4;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837752D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377549c
	if (cr6.eq) goto loc_8377549C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d140
	ctx.lr = 0x837752E8;
	sub_8377D140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775304
	if (cr6.eq) goto loc_83775304;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83775304;
	sub_82A9BC48(ctx, base);
loc_83775304:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d238
	ctx.lr = 0x83775310;
	sub_8377D238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377532c
	if (cr6.eq) goto loc_8377532C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x8377532C;
	sub_82A9BC48(ctx, base);
loc_8377532C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d248
	ctx.lr = 0x83775338;
	sub_8377D248(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775354
	if (cr6.eq) goto loc_83775354;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83775354;
	sub_82A9BC48(ctx, base);
loc_83775354:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d258
	ctx.lr = 0x83775360;
	sub_8377D258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377537c
	if (cr6.eq) goto loc_8377537C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x8377537C;
	sub_82A9BC48(ctx, base);
loc_8377537C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377ce90
	ctx.lr = 0x83775388;
	sub_8377CE90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837753a4
	if (cr6.eq) goto loc_837753A4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837753A4;
	sub_82A9BC48(ctx, base);
loc_837753A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d268
	ctx.lr = 0x837753B0;
	sub_8377D268(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837753cc
	if (cr6.eq) goto loc_837753CC;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837753CC;
	sub_82A9BC48(ctx, base);
loc_837753CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d278
	ctx.lr = 0x837753D8;
	sub_8377D278(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837753f4
	if (cr6.eq) goto loc_837753F4;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837753F4;
	sub_82A9BC48(ctx, base);
loc_837753F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377cec8
	ctx.lr = 0x83775400;
	sub_8377CEC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377541c
	if (cr6.eq) goto loc_8377541C;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x8377541C;
	sub_82A9BC48(ctx, base);
loc_8377541C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377cf08
	ctx.lr = 0x83775428;
	sub_8377CF08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775444
	if (cr6.eq) goto loc_83775444;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83775444;
	sub_82A9BC48(ctx, base);
loc_83775444:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d288
	ctx.lr = 0x83775450;
	sub_8377D288(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377546c
	if (cr6.eq) goto loc_8377546C;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x8377546C;
	sub_82A9BC48(ctx, base);
loc_8377546C:
	// bl 0x831156e8
	ctx.lr = 0x83775470;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377549c
	if (cr6.eq) goto loc_8377549C;
	// bl 0x831156e8
	ctx.lr = 0x8377547C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,-21364
	ctx.r10.s64 = ctx.r10.s64 + -21364;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bge cr6,0x8377549c
	if (!cr6.lt) goto loc_8377549C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
loc_8377549C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837638a8
	ctx.lr = 0x837754AC;
	sub_837638A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775298
	if (cr6.eq) goto loc_83775298;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r11,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83774550
	ctx.lr = 0x837754D4;
	sub_83774550(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837754DC"))) PPC_WEAK_FUNC(sub_837754DC);
PPC_FUNC_IMPL(__imp__sub_837754DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837754E0"))) PPC_WEAK_FUNC(sub_837754E0);
PPC_FUNC_IMPL(__imp__sub_837754E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837754E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,796(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 796);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837755b8
	if (cr6.eq) goto loc_837755B8;
	// li r24,1
	ctx.r24.s64 = 1;
loc_83775518:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// clrlwi r4,r27,14
	ctx.r4.u64 = ctx.r27.u32 & 0x3FFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83775538;
	sub_82A9BC48(ctx, base);
	// addi r28,r23,1209
	ctx.r28.s64 = ctx.r23.s64 + 1209;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r26,10
	ctx.r26.s64 = 10;
loc_83775544:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// subfc r10,r26,r11
	xer.ca = ctx.r11.u32 >= ctx.r26.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r11,r6,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r5,r11,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bge cr6,0x83775670
	if (!cr6.lt) goto loc_83775670;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r8,9
	cr6.compare<uint32_t>(ctx.r8.u32, 9, xer);
	// bge cr6,0x83775670
	if (!cr6.lt) goto loc_83775670;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r7,r11,29,3,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFE;
	// rlwinm r11,r27,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r10,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// clrlwi r10,r5,25
	ctx.r10.u64 = ctx.r5.u32 & 0x7F;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// blt cr6,0x837755d4
	if (cr6.lt) goto loc_837755D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x837755e4
	goto loc_837755E4;
loc_837755B8:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83775518
	if (cr6.eq) goto loc_83775518;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837755D4:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_837755E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83775640
	if (!cr6.eq) goto loc_83775640;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83775600:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775600
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775600;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r3,72(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// bl 0x8306e740
	ctx.lr = 0x83775614;
	sub_8306E740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377562c
	if (cr6.eq) goto loc_8377562C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x831ce980
	ctx.lr = 0x8377562C;
	sub_831CE980(ctx, base);
loc_8377562C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8377d648
	ctx.lr = 0x83775634;
	sub_8377D648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83775644
	if (!cr6.eq) goto loc_83775644;
loc_83775640:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83775644:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775670
	if (cr6.eq) goto loc_83775670;
	// li r6,33
	ctx.r6.s64 = 33;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83775664;
	sub_82AAA108(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,72(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// bl 0x8306e390
	ctx.lr = 0x83775670;
	sub_8306E390(ctx, base);
loc_83775670:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// blt cr6,0x83775544
	if (cr6.lt) goto loc_83775544;
	// clrlwi r29,r24,24
	ctx.r29.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x837756b0
	if (!cr6.eq) goto loc_837756B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83775698;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775748
	if (cr6.eq) goto loc_83775748;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83775748
	if (!cr6.eq) goto loc_83775748;
loc_837756B0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8392b4a0
	ctx.lr = 0x837756B8;
	sub_8392B4A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837756ec
	if (cr6.eq) goto loc_837756EC;
loc_837756C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cf48
	ctx.lr = 0x837756C8;
	sub_8377CF48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83785148
	ctx.lr = 0x837756DC;
	sub_83785148(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8392b4a0
	ctx.lr = 0x837756E4;
	sub_8392B4A0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x837756c0
	if (cr6.lt) goto loc_837756C0;
loc_837756EC:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83775704;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775748
	if (cr6.eq) goto loc_83775748;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83775748
	if (cr6.eq) goto loc_83775748;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83775748
	if (cr6.lt) goto loc_83775748;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83775748
	if (cr6.gt) goto loc_83775748;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83775748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83775748:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x837757d0
	if (!cr6.eq) goto loc_837757D0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83775760;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837757b4
	if (cr6.eq) goto loc_837757B4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837757b4
	if (cr6.eq) goto loc_837757B4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83775788;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837757b4
	if (cr6.eq) goto loc_837757B4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837757b4
	if (cr6.lt) goto loc_837757B4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837757b8
	if (!cr6.gt) goto loc_837757B8;
loc_837757B4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837757B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775868
	if (cr6.eq) goto loc_83775868;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83775868
	if (!cr6.eq) goto loc_83775868;
loc_837757D0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x837757D8;
	sub_82DD3A30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377580c
	if (cr6.eq) goto loc_8377580C;
loc_837757E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cf60
	ctx.lr = 0x837757E8;
	sub_8377CF60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83785148
	ctx.lr = 0x837757FC;
	sub_83785148(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82dd3a30
	ctx.lr = 0x83775804;
	sub_82DD3A30(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x837757e0
	if (cr6.lt) goto loc_837757E0;
loc_8377580C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83775824;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775868
	if (cr6.eq) goto loc_83775868;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83775868
	if (cr6.eq) goto loc_83775868;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83775868
	if (cr6.lt) goto loc_83775868;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83775868
	if (cr6.gt) goto loc_83775868;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x83775868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83775868:
	// lwz r11,796(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 796);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x837758d4
	if (cr6.eq) goto loc_837758D4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775884;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837758d4
	if (cr6.eq) goto loc_837758D4;
	// lbz r4,790(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 790);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c448
	ctx.lr = 0x83775898;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837758d4
	if (cr6.eq) goto loc_837758D4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83124aa8
	ctx.lr = 0x837758B0;
	sub_83124AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837758cc
	if (cr6.eq) goto loc_837758CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x837758d0
	if (cr6.eq) goto loc_837758D0;
loc_837758CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_837758D0:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_837758D4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837758f4
	if (!cr6.eq) goto loc_837758F4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8377d298
	ctx.lr = 0x837758E8;
	sub_8377D298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377593c
	if (!cr6.eq) goto loc_8377593C;
loc_837758F4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x837758FC;
	sub_82DD3A30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83775930
	if (cr6.eq) goto loc_83775930;
loc_83775904:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cf78
	ctx.lr = 0x8377590C;
	sub_8377CF78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83785148
	ctx.lr = 0x83775920;
	sub_83785148(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82dd3a30
	ctx.lr = 0x83775928;
	sub_82DD3A30(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x83775904
	if (cr6.lt) goto loc_83775904;
loc_83775930:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8377d328
	ctx.lr = 0x8377593C;
	sub_8377D328(ctx, base);
loc_8377593C:
	// bl 0x82aa87f0
	ctx.lr = 0x83775940;
	sub_82AA87F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83775974
	if (cr6.eq) goto loc_83775974;
loc_83775948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377cfa8
	ctx.lr = 0x83775950;
	sub_8377CFA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83785148
	ctx.lr = 0x83775964;
	sub_83785148(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82aa87f0
	ctx.lr = 0x8377596C;
	sub_82AA87F0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83775948
	if (cr6.lt) goto loc_83775948;
loc_83775974:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775980"))) PPC_WEAK_FUNC(sub_83775980);
PPC_FUNC_IMPL(__imp__sub_83775980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83775988;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837759b4
	if (!cr6.eq) goto loc_837759B4;
loc_837759A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837759B4:
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837759C4:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837759c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837759C4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837759EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83775a98
	if (cr6.eq) goto loc_83775A98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cc90
	ctx.lr = 0x83775A04;
	sub_8377CC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775a20
	if (cr6.eq) goto loc_83775A20;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83775A20;
	sub_82A9F728(ctx, base);
loc_83775A20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cd38
	ctx.lr = 0x83775A2C;
	sub_8377CD38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775a48
	if (cr6.eq) goto loc_83775A48;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83775A48;
	sub_82A9F728(ctx, base);
loc_83775A48:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cd48
	ctx.lr = 0x83775A54;
	sub_8377CD48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775a70
	if (cr6.eq) goto loc_83775A70;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83775A70;
	sub_82A9F728(ctx, base);
loc_83775A70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cd58
	ctx.lr = 0x83775A7C;
	sub_8377CD58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775a98
	if (cr6.eq) goto loc_83775A98;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83775A98;
	sub_82A9F728(ctx, base);
loc_83775A98:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8306ec68
	ctx.lr = 0x83775AA8;
	sub_8306EC68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837759a8
	if (cr6.eq) goto loc_837759A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83774898
	ctx.lr = 0x83775AD0;
	sub_83774898(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775AD8"))) PPC_WEAK_FUNC(sub_83775AD8);
PPC_FUNC_IMPL(__imp__sub_83775AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83775AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83775B04;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83775b18
	if (!cr6.eq) goto loc_83775B18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83775B18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8306ec08
	ctx.lr = 0x83775B24;
	sub_8306EC08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773ea0
	ctx.lr = 0x83775B38;
	sub_83773EA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775B40"))) PPC_WEAK_FUNC(sub_83775B40);
PPC_FUNC_IMPL(__imp__sub_83775B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83775B48;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83775b74
	if (!cr6.eq) goto loc_83775B74;
loc_83775B68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83775B74:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83775B84:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775b84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775B84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83775BA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83775bdc
	if (cr6.eq) goto loc_83775BDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837870d8
	ctx.lr = 0x83775BC0;
	sub_837870D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775bdc
	if (cr6.eq) goto loc_83775BDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a74b38
	ctx.lr = 0x83775BDC;
	sub_82A74B38(ctx, base);
loc_83775BDC:
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837661d8
	ctx.lr = 0x83775BEC;
	sub_837661D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775b68
	if (cr6.eq) goto loc_83775B68;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83774aa8
	ctx.lr = 0x83775C10;
	sub_83774AA8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775C18"))) PPC_WEAK_FUNC(sub_83775C18);
PPC_FUNC_IMPL(__imp__sub_83775C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83775C20;
	__savegprlr_24(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775C30;
	sub_83763B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83775c48
	if (!cr6.eq) goto loc_83775C48;
loc_83775C3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83775C48:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83775c3c
	if (cr6.eq) goto loc_83775C3C;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x83775C60;
	sub_831CDCF0(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// lwz r27,48(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwzx r29,r27,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83775ce4
	if (cr6.eq) goto loc_83775CE4;
	// addis r30,r27,72
	ctx.r30.s64 = ctx.r27.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r30,r30,7136
	ctx.r30.s64 = ctx.r30.s64 + 7136;
	// ori r25,r11,58144
	ctx.r25.u64 = ctx.r11.u64 | 58144;
loc_83775C8C:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x83775C9C;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,653
	cr6.compare<uint32_t>(ctx.r31.u32, 653, xer);
	// add r5,r27,r25
	ctx.r5.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x83775cac
	if (!cr6.lt) goto loc_83775CAC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_83775CAC:
	// lwz r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83773ab0
	ctx.lr = 0x83775CC4;
	sub_83773AB0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837638a8
	ctx.lr = 0x83775CD4;
	sub_837638A8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83775c8c
	if (cr6.lt) goto loc_83775C8C;
loc_83775CE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775CF0"))) PPC_WEAK_FUNC(sub_83775CF0);
PPC_FUNC_IMPL(__imp__sub_83775CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83775CF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775D08;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83775d1c
	if (!cr6.eq) goto loc_83775D1C;
loc_83775D10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83775D1C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83775d10
	if (cr6.eq) goto loc_83775D10;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83775D34:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775d34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775D34;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,60644
	ctx.r10.u64 = ctx.r11.u64 | 60644;
	// lwzx r28,r27,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83775dc8
	if (cr6.eq) goto loc_83775DC8;
	// addis r29,r27,88
	ctx.r29.s64 = ctx.r27.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r29,r29,-20304
	ctx.r29.s64 = ctx.r29.s64 + -20304;
	// ori r26,r11,60004
	ctx.r26.u64 = ctx.r11.u64 | 60004;
loc_83775D68:
	// cmplwi cr6,r30,850
	cr6.compare<uint32_t>(ctx.r30.u32, 850, xer);
	// add r31,r27,r26
	ctx.r31.u64 = ctx.r27.u64 + ctx.r26.u64;
	// bge cr6,0x83775d78
	if (!cr6.lt) goto loc_83775D78;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83775D78:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83775D88:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775d88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775D88;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83773b68
	ctx.lr = 0x83775DA8;
	sub_83773B68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// bl 0x83763940
	ctx.lr = 0x83775DB8;
	sub_83763940(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x83775d68
	if (cr6.lt) goto loc_83775D68;
loc_83775DC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775DD4"))) PPC_WEAK_FUNC(sub_83775DD4);
PPC_FUNC_IMPL(__imp__sub_83775DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83775DD8"))) PPC_WEAK_FUNC(sub_83775DD8);
PPC_FUNC_IMPL(__imp__sub_83775DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83775DE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775DF0;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83775e04
	if (!cr6.eq) goto loc_83775E04;
loc_83775DF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83775E04:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83775df8
	if (cr6.eq) goto loc_83775DF8;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83775E1C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775e1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775E1C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,60648
	ctx.r10.u64 = ctx.r11.u64 | 60648;
	// lwzx r27,r28,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83775efc
	if (cr6.eq) goto loc_83775EFC;
	// addis r29,r28,85
	ctx.r29.s64 = ctx.r28.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r29,r29,11904
	ctx.r29.s64 = ctx.r29.s64 + 11904;
	// ori r26,r11,59456
	ctx.r26.u64 = ctx.r11.u64 | 59456;
loc_83775E54:
	// cmplwi cr6,r30,300
	cr6.compare<uint32_t>(ctx.r30.u32, 300, xer);
	// add r31,r28,r26
	ctx.r31.u64 = ctx.r28.u64 + ctx.r26.u64;
	// bge cr6,0x83775e64
	if (!cr6.lt) goto loc_83775E64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83775E64:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x8376b8b8
	ctx.lr = 0x83775E70;
	sub_8376B8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775eec
	if (cr6.eq) goto loc_83775EEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306ebd8
	ctx.lr = 0x83775E88;
	sub_8306EBD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83775ea8
	if (cr6.eq) goto loc_83775EA8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8306ec08
	ctx.lr = 0x83775EA4;
	sub_8306EC08(ctx, base);
	// b 0x83775ec4
	goto loc_83775EC4;
loc_83775EA8:
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83775EB8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775eb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775EB8;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_83775EC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83773de8
	ctx.lr = 0x83775EDC;
	sub_83773DE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8306ec68
	ctx.lr = 0x83775EEC;
	sub_8306EC68(ctx, base);
loc_83775EEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x83775e54
	if (cr6.lt) goto loc_83775E54;
loc_83775EFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775F08"))) PPC_WEAK_FUNC(sub_83775F08);
PPC_FUNC_IMPL(__imp__sub_83775F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83775F10;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83775F20;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83775f34
	if (!cr6.eq) goto loc_83775F34;
loc_83775F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83775F34:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83775f28
	if (cr6.eq) goto loc_83775F28;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83775F4C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775f4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775F4C;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,10656
	ctx.r10.u64 = ctx.r11.u64 | 10656;
	// lwzx r28,r29,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83775fe0
	if (cr6.eq) goto loc_83775FE0;
loc_83775F70:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83775F80:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83775f80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83775F80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83117e18
	ctx.lr = 0x83775F94;
	sub_83117E18(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c448
	ctx.lr = 0x83775FA4;
	sub_8311C448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83775fd4
	if (cr6.eq) goto loc_83775FD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83774040
	ctx.lr = 0x83775FC4;
	sub_83774040(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837661d8
	ctx.lr = 0x83775FD4;
	sub_837661D8(ctx, base);
loc_83775FD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x83775f70
	if (cr6.lt) goto loc_83775F70;
loc_83775FE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83775FEC"))) PPC_WEAK_FUNC(sub_83775FEC);
PPC_FUNC_IMPL(__imp__sub_83775FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83775FF0"))) PPC_WEAK_FUNC(sub_83775FF0);
PPC_FUNC_IMPL(__imp__sub_83775FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83775FF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x83776004;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83776018
	if (!cr6.eq) goto loc_83776018;
loc_8377600C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83776018:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8377600c
	if (cr6.eq) goto loc_8377600C;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83776030:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83776030
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83776030;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// lwzx r27,r26,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837760e8
	if (cr6.eq) goto loc_837760E8;
	// addis r29,r26,72
	ctx.r29.s64 = ctx.r26.s64 + 4718592;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
	// ori r25,r10,58144
	ctx.r25.u64 = ctx.r10.u64 | 58144;
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
loc_83776070:
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83776080:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83776080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83776080;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r30,653
	cr6.compare<uint32_t>(ctx.r30.u32, 653, xer);
	// add r31,r26,r25
	ctx.r31.u64 = ctx.r26.u64 + ctx.r25.u64;
	// bge cr6,0x8377609c
	if (!cr6.lt) goto loc_8377609C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8377609C:
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r23,14
	ctx.r4.u64 = ctx.r23.u32 & 0x3FFFF;
	// bl 0x8306ca70
	ctx.lr = 0x837760B4;
	sub_8306CA70(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83786b10
	ctx.lr = 0x837760C4;
	sub_83786B10(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a7dbf8
	ctx.lr = 0x837760D8;
	sub_82A7DBF8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x83776070
	if (cr6.lt) goto loc_83776070;
loc_837760E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837760F4"))) PPC_WEAK_FUNC(sub_837760F4);
PPC_FUNC_IMPL(__imp__sub_837760F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837760F8"))) PPC_WEAK_FUNC(sub_837760F8);
PPC_FUNC_IMPL(__imp__sub_837760F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83776100;
	__savegprlr_29(ctx, base);
	// stwu r1,-3024(r1)
	ea = -3024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377610C;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83776120
	if (!cr6.eq) goto loc_83776120;
loc_83776114:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3024
	ctx.r1.s64 = ctx.r1.s64 + 3024;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83776120:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83776114
	if (cr6.eq) goto loc_83776114;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,2888
	ctx.r5.s64 = 2888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r30,r11,96
	ctx.r30.s64 = ctx.r11.s64 + 6291456;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,-4872
	ctx.r30.s64 = ctx.r30.s64 + -4872;
	// bl 0x831cdcf0
	ctx.lr = 0x83776144;
	sub_831CDCF0(ctx, base);
	// li r5,2888
	ctx.r5.s64 = 2888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83776154;
	sub_831CDCF0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r29,r10,21716
	ctx.r29.s64 = ctx.r10.s64 + 21716;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83784c00
	ctx.lr = 0x83776170;
	sub_83784C00(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306c970
	ctx.lr = 0x83776180;
	sub_8306C970(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3024
	ctx.r1.s64 = ctx.r1.s64 + 3024;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377618C"))) PPC_WEAK_FUNC(sub_8377618C);
PPC_FUNC_IMPL(__imp__sub_8377618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83776190"))) PPC_WEAK_FUNC(sub_83776190);
PPC_FUNC_IMPL(__imp__sub_83776190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83776198;
	__savegprlr_22(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x837761A4;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837761b8
	if (!cr6.eq) goto loc_837761B8;
loc_837761AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_837761B8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x837761ac
	if (cr6.eq) goto loc_837761AC;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,628
	ctx.r5.s64 = 628;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r24,r29,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x837761E0;
	sub_831CDCF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8377628c
	if (cr6.eq) goto loc_8377628C;
	// addis r26,r29,72
	ctx.r26.s64 = ctx.r29.s64 + 4718592;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r26,7136
	ctx.r26.s64 = ctx.r26.s64 + 7136;
	// ori r25,r10,58144
	ctx.r25.u64 = ctx.r10.u64 | 58144;
	// addi r27,r11,21716
	ctx.r27.s64 = ctx.r11.s64 + 21716;
loc_83776204:
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83776214;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r28,653
	cr6.compare<uint32_t>(ctx.r28.u32, 653, xer);
	// add r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bge cr6,0x83776224
	if (!cr6.lt) goto loc_83776224;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_83776224:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x83776230;
	sub_8311BE78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377627c
	if (cr6.eq) goto loc_8377627C;
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r22,14
	ctx.r4.u64 = ctx.r22.u32 & 0x3FFFF;
	// bl 0x8306cb98
	ctx.lr = 0x83776254;
	sub_8306CB98(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83786e18
	ctx.lr = 0x83776268;
	sub_83786E18(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x837639d8
	ctx.lr = 0x8377627C;
	sub_837639D8(ctx, base);
loc_8377627C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,1312
	ctx.r26.s64 = ctx.r26.s64 + 1312;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// blt cr6,0x83776204
	if (cr6.lt) goto loc_83776204;
loc_8377628C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83776298"))) PPC_WEAK_FUNC(sub_83776298);
PPC_FUNC_IMPL(__imp__sub_83776298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837762A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82a72110
	ctx.lr = 0x837762D0;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837762e8
	if (!cr6.eq) goto loc_837762E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837762E8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8377633c
	if (cr6.eq) goto loc_8377633C;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// std r10,44(r29)
	PPC_STORE_U64(ctx.r29.u32 + 44, ctx.r10.u64);
	// blt cr6,0x8377631c
	if (cr6.lt) goto loc_8377631C;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r9,r10,159
	ctx.r9.u64 = ctx.r10.u64 | 159;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83776320
	if (!cr6.gt) goto loc_83776320;
loc_8377631C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83776320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377633c
	if (cr6.eq) goto loc_8377633C;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,29,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r11.u32);
loc_8377633C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_83776348:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8377bf18
	ctx.lr = 0x83776360;
	sub_8377BF18(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,108
	cr6.compare<uint32_t>(ctx.r31.u32, 108, xer);
	// blt cr6,0x83776348
	if (cr6.lt) goto loc_83776348;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8377638c
	if (!cr6.eq) goto loc_8377638C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83774458
	ctx.lr = 0x8377638C;
	sub_83774458(ctx, base);
loc_8377638C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83776398"))) PPC_WEAK_FUNC(sub_83776398);
PPC_FUNC_IMPL(__imp__sub_83776398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837763A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83763b90
	ctx.lr = 0x837763B0;
	sub_83763B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837763c8
	if (!cr6.eq) goto loc_837763C8;
loc_837763BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837763C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x837763E0;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837763bc
	if (cr6.eq) goto loc_837763BC;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,48(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311be78
	ctx.lr = 0x83776408;
	sub_8311BE78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776450
	if (cr6.eq) goto loc_83776450;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_83776420:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837861e0
	ctx.lr = 0x83776438;
	sub_837861E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x83776420
	if (cr6.lt) goto loc_83776420;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83776450:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x83776464;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837764d0
	if (cr6.eq) goto loc_837764D0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837764d0
	if (cr6.eq) goto loc_837764D0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d8ce60
	ctx.lr = 0x83776484;
	sub_82D8CE60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d8cb50
	ctx.lr = 0x8377648C;
	sub_82D8CB50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// sth r31,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r31.u16);
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_837764A0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x837861e0
	ctx.lr = 0x837764B8;
	sub_837861E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x837764a0
	if (cr6.lt) goto loc_837764A0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311b658
	ctx.lr = 0x837764D0;
	sub_8311B658(ctx, base);
loc_837764D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837764DC"))) PPC_WEAK_FUNC(sub_837764DC);
PPC_FUNC_IMPL(__imp__sub_837764DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837764E0"))) PPC_WEAK_FUNC(sub_837764E0);
PPC_FUNC_IMPL(__imp__sub_837764E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837764E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776900
	if (cr6.eq) goto loc_83776900;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// bl 0x8306e390
	ctx.lr = 0x83776508;
	sub_8306E390(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83776900
	if (cr6.eq) goto loc_83776900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377651C;
	sub_83763B90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837768f4
	if (cr6.eq) goto loc_837768F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stb r11,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r11.u8);
	// rlwinm r31,r10,18,14,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x83776544;
	sub_8311BDF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837768e8
	if (cr6.eq) goto loc_837768E8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r11,1209
	ctx.r27.s64 = ctx.r11.s64 + 1209;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83776570;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c738
	ctx.lr = 0x83776578;
	sub_8311C738(ctx, base);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r4,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 25) & 0x7F;
	// li r7,10
	ctx.r7.s64 = 10;
loc_83776588:
	// addi r11,r10,254
	ctx.r11.s64 = ctx.r10.s64 + 254;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// subfc r5,r7,r6
	xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// rlwinm r6,r11,3,21,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// ldx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x837765e4
	if (!cr6.eq) goto loc_837765E4;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r6,r4,25
	ctx.r6.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bne cr6,0x837765e4
	if (!cr6.eq) goto loc_837765E4;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x83776760
	if (cr6.eq) goto loc_83776760;
loc_837765E4:
	// addi r11,r10,255
	ctx.r11.s64 = ctx.r10.s64 + 255;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// subfc r5,r7,r6
	xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// rlwinm r6,r11,3,21,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// ldx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83776640
	if (!cr6.eq) goto loc_83776640;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r6,r4,25
	ctx.r6.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bne cr6,0x83776640
	if (!cr6.eq) goto loc_83776640;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x83776760
	if (cr6.eq) goto loc_83776760;
loc_83776640:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r6,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r11,r5,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// ldx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r6,r11,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x83776698
	if (!cr6.eq) goto loc_83776698;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r6,r4,25
	ctx.r6.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bne cr6,0x83776698
	if (!cr6.eq) goto loc_83776698;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x83776760
	if (cr6.eq) goto loc_83776760;
loc_83776698:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// subfc r5,r7,r6
	xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// rlwinm r6,r11,3,21,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// ldx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x837766f4
	if (!cr6.eq) goto loc_837766F4;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r6,r4,25
	ctx.r6.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// bne cr6,0x837766f4
	if (!cr6.eq) goto loc_837766F4;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x83776760
	if (cr6.eq) goto loc_83776760;
loc_837766F4:
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// subfc r5,r7,r6
	xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// rlwinm r6,r11,3,21,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// ldx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r6,r11,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x83776750
	if (!cr6.eq) goto loc_83776750;
	// clrlwi r6,r9,28
	ctx.r6.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r5,r4,25
	ctx.r5.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bne cr6,0x83776750
	if (!cr6.eq) goto loc_83776750;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x83776760
	if (cr6.eq) goto loc_83776760;
loc_83776750:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x83776588
	if (cr6.lt) goto loc_83776588;
loc_83776760:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83776764:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r3,r5,25,7,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bne cr6,0x837767a4
	if (!cr6.eq) goto loc_837767A4;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r5,r4,25
	ctx.r5.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x837767c4
	if (cr6.eq) goto loc_837767C4;
loc_837767A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x83776764
	if (cr6.lt) goto loc_83776764;
	// lwz r3,60(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// bl 0x8311ce60
	ctx.lr = 0x837767B8;
	sub_8311CE60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_837767C4:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x837767ec
	if (!cr6.lt) goto loc_837767EC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// rlwimi r9,r28,0,24,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_837767EC:
	// clrlwi r11,r28,27
	ctx.r11.u64 = ctx.r28.u32 & 0x1F;
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x83776818
	if (!cr6.lt) goto loc_83776818;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// bge cr6,0x83776818
	if (!cr6.lt) goto loc_83776818;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r9,r10,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_83776818:
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r31,83(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r30,82(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
loc_83776834:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83776850
	if (!cr6.eq) goto loc_83776850;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x83776860
	goto loc_83776860;
loc_83776850:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83776860:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377688c
	if (cr6.eq) goto loc_8377688C;
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x837768a8
	if (!cr6.lt) goto loc_837768A8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// b 0x837768a8
	goto loc_837768A8;
loc_8377688C:
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x837768a8
	if (!cr6.lt) goto loc_837768A8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
loc_837768A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x83776834
	if (cr6.lt) goto loc_83776834;
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x837768e8
	if (!cr6.lt) goto loc_837768E8;
	// rlwinm r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837768d0
	if (cr6.eq) goto loc_837768D0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_837768D0:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwimi r9,r10,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_837768E8:
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,60(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// bl 0x8311ce60
	ctx.lr = 0x837768F4;
	sub_8311CE60(ctx, base);
loc_837768F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83776900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377690C"))) PPC_WEAK_FUNC(sub_8377690C);
PPC_FUNC_IMPL(__imp__sub_8377690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83776910"))) PPC_WEAK_FUNC(sub_83776910);
PPC_FUNC_IMPL(__imp__sub_83776910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83776918;
	__savegprlr_27(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83776944
	if (!cr6.eq) goto loc_83776944;
loc_83776938:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83776944:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83776958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776938
	if (cr6.eq) goto loc_83776938;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83776974;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x83776998
	if (!cr6.eq) goto loc_83776998;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837769b8
	goto loc_837769B8;
loc_83776998:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8306e988
	ctx.lr = 0x837769A4;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773c28
	ctx.lr = 0x837769B8;
	sub_83773C28(ctx, base);
loc_837769B8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837769ec
	if (cr6.eq) goto loc_837769EC;
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa9d18
	ctx.lr = 0x837769D0;
	sub_82AA9D18(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x837769ec
	if (!cr6.lt) goto loc_837769EC;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa9c78
	ctx.lr = 0x837769EC;
	sub_82AA9C78(ctx, base);
loc_837769EC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83776938
	if (cr6.eq) goto loc_83776938;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83772ba0
	ctx.lr = 0x83776A0C;
	sub_83772BA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83776A18"))) PPC_WEAK_FUNC(sub_83776A18);
PPC_FUNC_IMPL(__imp__sub_83776A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83776A20;
	__savegprlr_25(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83776a4c
	if (!cr6.eq) goto loc_83776A4C;
loc_83776A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83776A4C:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83776A60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776a40
	if (cr6.eq) goto loc_83776A40;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83776A7C;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x83776aa0
	if (!cr6.eq) goto loc_83776AA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83776ac0
	goto loc_83776AC0;
loc_83776AA0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8306e988
	ctx.lr = 0x83776AAC;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83773c28
	ctx.lr = 0x83776AC0;
	sub_83773C28(ctx, base);
loc_83776AC0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83776af4
	if (cr6.eq) goto loc_83776AF4;
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa9d18
	ctx.lr = 0x83776AD8;
	sub_82AA9D18(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// bge cr6,0x83776af4
	if (!cr6.lt) goto loc_83776AF4;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa9c78
	ctx.lr = 0x83776AF4;
	sub_82AA9C78(ctx, base);
loc_83776AF4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83776b18
	if (cr6.eq) goto loc_83776B18;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83772c28
	ctx.lr = 0x83776B14;
	sub_83772C28(ctx, base);
	// b 0x83776c30
	goto loc_83776C30;
loc_83776B18:
	// li r10,300
	ctx.r10.s64 = 300;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r11,6464
	ctx.r9.u64 = ctx.r11.u64 | 6464;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83776b5c
	if (!cr6.lt) goto loc_83776B5C;
loc_83776B30:
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,250
	cr6.compare<uint32_t>(ctx.r11.u32, 250, xer);
	// bge cr6,0x83776b5c
	if (!cr6.lt) goto loc_83776B5C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83776b60
	goto loc_83776B60;
loc_83776B5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83776B60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83776b7c
	if (cr6.eq) goto loc_83776B7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// blt cr6,0x83776b30
	if (cr6.lt) goto loc_83776B30;
	// b 0x83776b88
	goto loc_83776B88;
loc_83776B7C:
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x83776b8c
	if (!cr6.eq) goto loc_83776B8C;
loc_83776B88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83776B8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83776c30
	if (cr6.eq) goto loc_83776C30;
	// li r11,300
	ctx.r11.s64 = 300;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83776bd0
	if (!cr6.lt) goto loc_83776BD0;
loc_83776BA4:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83776bd0
	if (!cr6.lt) goto loc_83776BD0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r10,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83776bd4
	goto loc_83776BD4;
loc_83776BD0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83776BD4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83776c50
	if (cr6.eq) goto loc_83776C50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// blt cr6,0x83776ba4
	if (cr6.lt) goto loc_83776BA4;
	// li r30,2000
	ctx.r30.s64 = 2000;
loc_83776BF0:
	// clrlwi r31,r30,17
	ctx.r31.u64 = ctx.r30.u32 & 0x7FFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83772c28
	ctx.lr = 0x83776C08;
	sub_83772C28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837723b8
	ctx.lr = 0x83776C18;
	sub_837723B8(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aaa108
	ctx.lr = 0x83776C30;
	sub_82AAA108(ctx, base);
loc_83776C30:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83775270
	ctx.lr = 0x83776C44;
	sub_83775270(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83776C50:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x83776bf0
	goto loc_83776BF0;
}

__attribute__((alias("__imp__sub_83776C58"))) PPC_WEAK_FUNC(sub_83776C58);
PPC_FUNC_IMPL(__imp__sub_83776C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83776C60;
	__savegprlr_26(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83776c88
	if (!cr6.eq) goto loc_83776C88;
loc_83776C7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83776C88:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83776C9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776c7c
	if (cr6.eq) goto loc_83776C7C;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83776CB8;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bne cr6,0x83776cdc
	if (!cr6.eq) goto loc_83776CDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83776cfc
	goto loc_83776CFC;
loc_83776CDC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8306e988
	ctx.lr = 0x83776CE8;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773c28
	ctx.lr = 0x83776CFC;
	sub_83773C28(ctx, base);
loc_83776CFC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83776d30
	if (cr6.eq) goto loc_83776D30;
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa9d18
	ctx.lr = 0x83776D14;
	sub_82AA9D18(ctx, base);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// bge cr6,0x83776d30
	if (!cr6.lt) goto loc_83776D30;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa9c78
	ctx.lr = 0x83776D30;
	sub_82AA9C78(ctx, base);
loc_83776D30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83776c7c
	if (cr6.eq) goto loc_83776C7C;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83772ca8
	ctx.lr = 0x83776D50;
	sub_83772CA8(ctx, base);
	// clrlwi r5,r30,17
	ctx.r5.u64 = ctx.r30.u32 & 0x7FFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837723b8
	ctx.lr = 0x83776D60;
	sub_837723B8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aaa108
	ctx.lr = 0x83776D78;
	sub_82AAA108(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775270
	ctx.lr = 0x83776D8C;
	sub_83775270(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83776D98"))) PPC_WEAK_FUNC(sub_83776D98);
PPC_FUNC_IMPL(__imp__sub_83776D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83776DA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83776dcc
	if (!cr6.eq) goto loc_83776DCC;
loc_83776DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83776DCC:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83776DE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776dc0
	if (cr6.eq) goto loc_83776DC0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83776DFC:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83776dfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83776DFC;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83763b90
	ctx.lr = 0x83776E10;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776dc0
	if (cr6.eq) goto loc_83776DC0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8311c338
	ctx.lr = 0x83776E30;
	sub_8311C338(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// bl 0x83775ad8
	ctx.lr = 0x83776E44;
	sub_83775AD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83776e78
	if (cr6.eq) goto loc_83776E78;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83776e60
	if (!cr6.eq) goto loc_83776E60;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x83776e6c
	goto loc_83776E6C;
loc_83776E60:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// bne cr6,0x83776e78
	if (!cr6.eq) goto loc_83776E78;
	// li r5,14
	ctx.r5.s64 = 14;
loc_83776E6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9eab0
	ctx.lr = 0x83776E78;
	sub_82A9EAB0(ctx, base);
loc_83776E78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83776dc0
	if (cr6.eq) goto loc_83776DC0;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83772ba0
	ctx.lr = 0x83776E98;
	sub_83772BA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83776EA4"))) PPC_WEAK_FUNC(sub_83776EA4);
PPC_FUNC_IMPL(__imp__sub_83776EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83776EA8"))) PPC_WEAK_FUNC(sub_83776EA8);
PPC_FUNC_IMPL(__imp__sub_83776EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83776EB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83776edc
	if (!cr6.eq) goto loc_83776EDC;
loc_83776ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83776EDC:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83776EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776ed0
	if (cr6.eq) goto loc_83776ED0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83776F0C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83776f0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83776F0C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83763b90
	ctx.lr = 0x83776F20;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83776ed0
	if (cr6.eq) goto loc_83776ED0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8311c338
	ctx.lr = 0x83776F40;
	sub_8311C338(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,88(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83775ad8
	ctx.lr = 0x83776F58;
	sub_83775AD8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83776f8c
	if (cr6.eq) goto loc_83776F8C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83776f74
	if (!cr6.eq) goto loc_83776F74;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x83776f80
	goto loc_83776F80;
loc_83776F74:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x83776f8c
	if (!cr6.eq) goto loc_83776F8C;
	// li r5,14
	ctx.r5.s64 = 14;
loc_83776F80:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9eab0
	ctx.lr = 0x83776F8C;
	sub_82A9EAB0(ctx, base);
loc_83776F8C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83776fb0
	if (cr6.eq) goto loc_83776FB0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83772c28
	ctx.lr = 0x83776FAC;
	sub_83772C28(ctx, base);
	// b 0x837770e4
	goto loc_837770E4;
loc_83776FB0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,250
	ctx.r10.s64 = 250;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r11,6464
	ctx.r9.u64 = ctx.r11.u64 | 6464;
loc_83776FC0:
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83776ff4
	if (!cr6.lt) goto loc_83776FF4;
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,250
	cr6.compare<uint32_t>(ctx.r11.u32, 250, xer);
	// bge cr6,0x83776ff4
	if (!cr6.lt) goto loc_83776FF4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83776ff8
	goto loc_83776FF8;
loc_83776FF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83776FF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777014
	if (cr6.eq) goto loc_83777014;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,300
	cr6.compare<uint32_t>(ctx.r10.u32, 300, xer);
	// blt cr6,0x83776fc0
	if (cr6.lt) goto loc_83776FC0;
	// b 0x83777020
	goto loc_83777020;
loc_83777014:
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x83777024
	if (!cr6.eq) goto loc_83777024;
loc_83777020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83777024:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837770e4
	if (cr6.eq) goto loc_837770E4;
	// li r11,250
	ctx.r11.s64 = 250;
loc_83777034:
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83777068
	if (!cr6.lt) goto loc_83777068;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83777068
	if (!cr6.lt) goto loc_83777068;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r10,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8377706c
	goto loc_8377706C;
loc_83777068:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8377706C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837770c8
	if (cr6.eq) goto loc_837770C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,300
	cr6.compare<uint32_t>(ctx.r11.u32, 300, xer);
	// blt cr6,0x83777034
	if (cr6.lt) goto loc_83777034;
	// li r31,2000
	ctx.r31.s64 = 2000;
loc_83777088:
	// clrlwi r30,r31,17
	ctx.r30.u64 = ctx.r31.u32 & 0x7FFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83772c28
	ctx.lr = 0x837770A0;
	sub_83772C28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837723b8
	ctx.lr = 0x837770B0;
	sub_837723B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bne cr6,0x837770d0
	if (!cr6.eq) goto loc_837770D0;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x837770dc
	goto loc_837770DC;
loc_837770C8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83777088
	goto loc_83777088;
loc_837770D0:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x837770e4
	if (!cr6.eq) goto loc_837770E4;
	// li r5,14
	ctx.r5.s64 = 14;
loc_837770DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9f728
	ctx.lr = 0x837770E4;
	sub_82A9F728(ctx, base);
loc_837770E4:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83775980
	ctx.lr = 0x837770F8;
	sub_83775980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777104"))) PPC_WEAK_FUNC(sub_83777104);
PPC_FUNC_IMPL(__imp__sub_83777104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777108"))) PPC_WEAK_FUNC(sub_83777108);
PPC_FUNC_IMPL(__imp__sub_83777108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83777110;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83777138
	if (!cr6.eq) goto loc_83777138;
loc_8377712C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83777138:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377714C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377712c
	if (cr6.eq) goto loc_8377712C;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83777168:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83777168
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83777168;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377717C;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377712c
	if (cr6.eq) goto loc_8377712C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8311c338
	ctx.lr = 0x8377719C;
	sub_8311C338(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,88(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83775ad8
	ctx.lr = 0x837771B4;
	sub_83775AD8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837771e8
	if (cr6.eq) goto loc_837771E8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x837771d0
	if (!cr6.eq) goto loc_837771D0;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x837771dc
	goto loc_837771DC;
loc_837771D0:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x837771e8
	if (!cr6.eq) goto loc_837771E8;
	// li r5,14
	ctx.r5.s64 = 14;
loc_837771DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9eab0
	ctx.lr = 0x837771E8;
	sub_82A9EAB0(ctx, base);
loc_837771E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8377712c
	if (cr6.eq) goto loc_8377712C;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83772ca8
	ctx.lr = 0x83777208;
	sub_83772CA8(ctx, base);
	// clrlwi r5,r30,17
	ctx.r5.u64 = ctx.r30.u32 & 0x7FFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837723b8
	ctx.lr = 0x83777218;
	sub_837723B8(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x8377722c
	if (!cr6.eq) goto loc_8377722C;
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x83777238
	goto loc_83777238;
loc_8377722C:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x83777244
	if (!cr6.eq) goto loc_83777244;
	// li r5,14
	ctx.r5.s64 = 14;
loc_83777238:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9f728
	ctx.lr = 0x83777244;
	sub_82A9F728(ctx, base);
loc_83777244:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83775980
	ctx.lr = 0x83777258;
	sub_83775980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777264"))) PPC_WEAK_FUNC(sub_83777264);
PPC_FUNC_IMPL(__imp__sub_83777264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777268"))) PPC_WEAK_FUNC(sub_83777268);
PPC_FUNC_IMPL(__imp__sub_83777268) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83776910
	ctx.lr = 0x8377728C;
	sub_83776910(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837772b0
	if (cr6.eq) goto loc_837772B0;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_837772B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83772720
	ctx.lr = 0x837772B8;
	sub_83772720(ctx, base);
	// subfic r11,r3,1700
	xer.ca = ctx.r3.u32 <= 1700;
	ctx.r11.s64 = 1700 - ctx.r3.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_837772D8"))) PPC_WEAK_FUNC(sub_837772D8);
PPC_FUNC_IMPL(__imp__sub_837772D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837772E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377730c
	if (!cr6.eq) goto loc_8377730C;
loc_83777300:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377730C:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8377731C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8377731c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8377731C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83777440
	if (cr6.eq) goto loc_83777440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d768
	ctx.lr = 0x8377735C;
	sub_8377D768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777378
	if (cr6.eq) goto loc_83777378;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83777378;
	sub_82AAF090(ctx, base);
loc_83777378:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d840
	ctx.lr = 0x83777384;
	sub_8377D840(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837773a0
	if (cr6.eq) goto loc_837773A0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x837773A0;
	sub_82AAF090(ctx, base);
loc_837773A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d918
	ctx.lr = 0x837773AC;
	sub_8377D918(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837773c8
	if (cr6.eq) goto loc_837773C8;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x837773C8;
	sub_82AAF090(ctx, base);
loc_837773C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d9f0
	ctx.lr = 0x837773D4;
	sub_8377D9F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837773f0
	if (cr6.eq) goto loc_837773F0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x837773F0;
	sub_82AAF090(ctx, base);
loc_837773F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377dac8
	ctx.lr = 0x837773FC;
	sub_8377DAC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777418
	if (cr6.eq) goto loc_83777418;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83777418;
	sub_82AAF090(ctx, base);
loc_83777418:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377dcc8
	ctx.lr = 0x83777424;
	sub_8377DCC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777440
	if (cr6.eq) goto loc_83777440;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83777440;
	sub_82AAF090(ctx, base);
loc_83777440:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83772da0
	ctx.lr = 0x83777450;
	sub_83772DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777300
	if (cr6.eq) goto loc_83777300;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r11,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83774b50
	ctx.lr = 0x83777474;
	sub_83774B50(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377747C"))) PPC_WEAK_FUNC(sub_8377747C);
PPC_FUNC_IMPL(__imp__sub_8377747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777480"))) PPC_WEAK_FUNC(sub_83777480);
PPC_FUNC_IMPL(__imp__sub_83777480) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r11,r6,25
	ctx.r11.u64 = ctx.r6.u32 & 0x7F;
	// clrlwi r9,r7,25
	ctx.r9.u64 = ctx.r7.u32 & 0x7F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x837772d8
	sub_837772D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837774A0"))) PPC_WEAK_FUNC(sub_837774A0);
PPC_FUNC_IMPL(__imp__sub_837774A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837774A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837774c8
	if (!cr6.eq) goto loc_837774C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837774C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837774DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777528
	if (cr6.eq) goto loc_83777528;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x837774FC;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777528
	if (cr6.eq) goto loc_83777528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83777508:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774550
	ctx.lr = 0x8377751C;
	sub_83774550(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,480
	ctx.r30.s64 = ctx.r30.s64 + 480;
	// bne 0x83777508
	if (!cr0.eq) goto loc_83777508;
loc_83777528:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377753C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777584
	if (cr6.eq) goto loc_83777584;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8377755C;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777584
	if (cr6.eq) goto loc_83777584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83777568:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83776398
	ctx.lr = 0x83777578;
	sub_83776398(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bne 0x83777568
	if (!cr0.eq) goto loc_83777568;
loc_83777584:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777598;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837775e4
	if (cr6.eq) goto loc_837775E4;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x837775B8;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837775e4
	if (cr6.eq) goto loc_837775E4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_837775C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774898
	ctx.lr = 0x837775D8;
	sub_83774898(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// bne 0x837775c4
	if (!cr0.eq) goto loc_837775C4;
loc_837775E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837775F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777640
	if (cr6.eq) goto loc_83777640;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83777618;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777640
	if (cr6.eq) goto loc_83777640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83777624:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774aa8
	ctx.lr = 0x83777634;
	sub_83774AA8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bne 0x83777624
	if (!cr0.eq) goto loc_83777624;
loc_83777640:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83775008
	ctx.lr = 0x8377764C;
	sub_83775008(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83763b90
	ctx.lr = 0x83777654;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377769c
	if (cr6.eq) goto loc_8377769C;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addis r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 1835008;
	// addic. r31,r31,8720
	xer.ca = ctx.r31.u32 > 4294958575;
	ctx.r31.s64 = ctx.r31.s64 + 8720;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8377769c
	if (cr0.eq) goto loc_8377769C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377769c
	if (cr6.eq) goto loc_8377769C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,6714
	ctx.r5.u64 = ctx.r5.u64 | 6714;
	// bl 0x831ce980
	ctx.lr = 0x8377769C;
	sub_831CE980(ctx, base);
loc_8377769C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837776A8"))) PPC_WEAK_FUNC(sub_837776A8);
PPC_FUNC_IMPL(__imp__sub_837776A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837776B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837776dc
	if (!cr6.eq) goto loc_837776DC;
loc_837776D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837776DC:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837776EC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837776ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837776EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777710;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377cfc0
	ctx.lr = 0x8377771C;
	sub_8377CFC0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83777738
	if (cr6.eq) goto loc_83777738;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x83777738;
	sub_82AA8E60(ctx, base);
loc_83777738:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377d590
	ctx.lr = 0x83777744;
	sub_8377D590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777760
	if (cr6.eq) goto loc_83777760;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x83777760;
	sub_82AA8E60(ctx, base);
loc_83777760:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377d5a0
	ctx.lr = 0x8377776C;
	sub_8377D5A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777788
	if (cr6.eq) goto loc_83777788;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x83777788;
	sub_82AA8E60(ctx, base);
loc_83777788:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83763940
	ctx.lr = 0x83777798;
	sub_83763940(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837776d0
	if (cr6.eq) goto loc_837776D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83776398
	ctx.lr = 0x837777BC;
	sub_83776398(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837777C4"))) PPC_WEAK_FUNC(sub_837777C4);
PPC_FUNC_IMPL(__imp__sub_837777C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837777C8"))) PPC_WEAK_FUNC(sub_837777C8);
PPC_FUNC_IMPL(__imp__sub_837777C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837777D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83763b90
	ctx.lr = 0x837777E4;
	sub_83763B90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837777fc
	if (!cr6.eq) goto loc_837777FC;
loc_837777F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837777FC:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r25,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r25.u16);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a72110
	ctx.lr = 0x83777818;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837777f0
	if (cr6.eq) goto loc_837777F0;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r9,r10,185
	ctx.r9.u64 = ctx.r10.u64 | 185;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83777998
	if (cr6.eq) goto loc_83777998;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r9,r10,187
	ctx.r9.u64 = ctx.r10.u64 | 187;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83777998
	if (cr6.eq) goto loc_83777998;
	// lwz r31,48(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bd68
	ctx.lr = 0x83777858;
	sub_8311BD68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777880
	if (cr6.eq) goto loc_83777880;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83776298
	ctx.lr = 0x83777878;
	sub_83776298(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x83777928
	goto loc_83777928;
loc_83777880:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x837778a4
	if (cr6.lt) goto loc_837778A4;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r9,r11,159
	ctx.r9.u64 = ctx.r11.u64 | 159;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x837778a8
	if (!cr6.gt) goto loc_837778A8;
loc_837778A4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_837778A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837778f0
	if (!cr6.eq) goto loc_837778F0;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r9,r11,186
	ctx.r9.u64 = ctx.r11.u64 | 186;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x837778f0
	if (cr6.eq) goto loc_837778F0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a72110
	ctx.lr = 0x837778D8;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837777f0
	if (cr6.eq) goto loc_837777F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837778f4
	if (cr6.eq) goto loc_837778F4;
loc_837778F0:
	// li r28,1
	ctx.r28.s64 = 1;
loc_837778F4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777928
	if (cr6.eq) goto loc_83777928;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b00d00
	ctx.lr = 0x83777908;
	sub_82B00D00(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83776298
	ctx.lr = 0x8377791C;
	sub_83776298(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311b528
	ctx.lr = 0x83777928;
	sub_8311B528(ctx, base);
loc_83777928:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// addis r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 1835008;
	// addic. r31,r31,8720
	xer.ca = ctx.r31.u32 > 4294958575;
	ctx.r31.s64 = ctx.r31.s64 + 8720;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8377798c
	if (cr0.eq) goto loc_8377798C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377794C;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377798c
	if (cr6.eq) goto loc_8377798C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83777984
	if (cr6.eq) goto loc_83777984;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83146a88
	ctx.lr = 0x83777978;
	sub_83146A88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83777984:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x831473b8
	ctx.lr = 0x8377798C;
	sub_831473B8(ctx, base);
loc_8377798C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83777998:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774458
	ctx.lr = 0x837779A8;
	sub_83774458(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837779B0"))) PPC_WEAK_FUNC(sub_837779B0);
PPC_FUNC_IMPL(__imp__sub_837779B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837779B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-10832
	ctx.r4.s64 = ctx.r11.s64 + -10832;
	// bl 0x83103328
	ctx.lr = 0x837779CC;
	sub_83103328(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r10,-10736
	ctx.r9.s64 = ctx.r10.s64 + -10736;
	// li r8,43
	ctx.r8.s64 = 43;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ori r4,r4,23304
	ctx.r4.u64 = ctx.r4.u64 | 23304;
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83777A04;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83777a38
	if (cr6.eq) goto loc_83777A38;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-13096
	ctx.r10.s64 = ctx.r11.s64 + -13096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x83767b20
	ctx.lr = 0x83777A28;
	sub_83767B20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837659c8
	ctx.lr = 0x83777A30;
	sub_837659C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83777a3c
	goto loc_83777A3C;
loc_83777A38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83777A3C:
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777A50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777A5C"))) PPC_WEAK_FUNC(sub_83777A5C);
PPC_FUNC_IMPL(__imp__sub_83777A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777A60"))) PPC_WEAK_FUNC(sub_83777A60);
PPC_FUNC_IMPL(__imp__sub_83777A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83777A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83777a90
	if (!cr6.eq) goto loc_83777A90;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83777A90:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x831cdcf0
	ctx.lr = 0x83777AA0;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x83777AB0;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777ACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377afe0
	ctx.lr = 0x83777AD8;
	sub_8377AFE0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83777af4
	if (cr6.eq) goto loc_83777AF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777AF4;
	sub_82A78580(ctx, base);
loc_83777AF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b158
	ctx.lr = 0x83777B00;
	sub_8377B158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777b1c
	if (cr6.eq) goto loc_83777B1C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777B1C;
	sub_82A78580(ctx, base);
loc_83777B1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b168
	ctx.lr = 0x83777B28;
	sub_8377B168(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777b44
	if (cr6.eq) goto loc_83777B44;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777B44;
	sub_82A78580(ctx, base);
loc_83777B44:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b178
	ctx.lr = 0x83777B50;
	sub_8377B178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777b6c
	if (cr6.eq) goto loc_83777B6C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777B6C;
	sub_82A78580(ctx, base);
loc_83777B6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b188
	ctx.lr = 0x83777B78;
	sub_8377B188(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777b94
	if (cr6.eq) goto loc_83777B94;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777B94;
	sub_82A78580(ctx, base);
loc_83777B94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b198
	ctx.lr = 0x83777BA0;
	sub_8377B198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777bbc
	if (cr6.eq) goto loc_83777BBC;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777BBC;
	sub_82A78580(ctx, base);
loc_83777BBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b1a8
	ctx.lr = 0x83777BC8;
	sub_8377B1A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777be4
	if (cr6.eq) goto loc_83777BE4;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777BE4;
	sub_82A78580(ctx, base);
loc_83777BE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b1b8
	ctx.lr = 0x83777BF0;
	sub_8377B1B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777c0c
	if (cr6.eq) goto loc_83777C0C;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777C0C;
	sub_82A78580(ctx, base);
loc_83777C0C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b1c8
	ctx.lr = 0x83777C18;
	sub_8377B1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777c34
	if (cr6.eq) goto loc_83777C34;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x83777C34;
	sub_82A78580(ctx, base);
loc_83777C34:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83777c5c
	if (cr6.eq) goto loc_83777C5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a10c0
	ctx.lr = 0x83777C54;
	sub_825A10C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83777c9c
	goto loc_83777C9C;
loc_83777C5C:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x8377c8d8
	ctx.lr = 0x83777C64;
	sub_8377C8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777c80
	if (cr6.eq) goto loc_83777C80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83777C80;
	sub_825A10C0(ctx, base);
loc_83777C80:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377c8e8
	ctx.lr = 0x83777C8C;
	sub_8377C8E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777ca8
	if (cr6.eq) goto loc_83777CA8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83777C9C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83777CA8;
	sub_825A10C0(ctx, base);
loc_83777CA8:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377c8f8
	ctx.lr = 0x83777CB4;
	sub_8377C8F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83777cd8
	if (!cr6.eq) goto loc_83777CD8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b1d8
	ctx.lr = 0x83777CCC;
	sub_8377B1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777ce8
	if (cr6.eq) goto loc_83777CE8;
loc_83777CD8:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83777CE8;
	sub_825A10C0(ctx, base);
loc_83777CE8:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377c908
	ctx.lr = 0x83777CF4;
	sub_8377C908(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777d10
	if (cr6.eq) goto loc_83777D10;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83777D10;
	sub_825A10C0(ctx, base);
loc_83777D10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x8306ed00
	ctx.lr = 0x83777D28;
	sub_8306ED00(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777D30"))) PPC_WEAK_FUNC(sub_83777D30);
PPC_FUNC_IMPL(__imp__sub_83777D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83777D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x83777a60
	ctx.lr = 0x83777D4C;
	sub_83777A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83777d64
	if (!cr6.eq) goto loc_83777D64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83777D64:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837777c8
	ctx.lr = 0x83777D7C;
	sub_837777C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777D84"))) PPC_WEAK_FUNC(sub_83777D84);
PPC_FUNC_IMPL(__imp__sub_83777D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777D88"))) PPC_WEAK_FUNC(sub_83777D88);
PPC_FUNC_IMPL(__imp__sub_83777D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83777D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x831cdcf0
	ctx.lr = 0x83777DB0;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x83777DC0;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775138
	ctx.lr = 0x83777DD0;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83777de8
	if (!cr6.eq) goto loc_83777DE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83777DE8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83777DF8;
	sub_831CE980(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83777a60
	ctx.lr = 0x83777E08;
	sub_83777A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83777e1c
	if (!cr6.eq) goto loc_83777E1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83777e34
	goto loc_83777E34;
loc_83777E1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837777c8
	ctx.lr = 0x83777E34;
	sub_837777C8(ctx, base);
loc_83777E34:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rlwimi r10,r11,0,4,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF0000000);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777E4C"))) PPC_WEAK_FUNC(sub_83777E4C);
PPC_FUNC_IMPL(__imp__sub_83777E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777E50"))) PPC_WEAK_FUNC(sub_83777E50);
PPC_FUNC_IMPL(__imp__sub_83777E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83777E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x831cdcf0
	ctx.lr = 0x83777E78;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x83777E88;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775138
	ctx.lr = 0x83777E98;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83777ed0
	if (cr6.eq) goto loc_83777ED0;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83777ed0
	if (!cr6.eq) goto loc_83777ED0;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83777EC4;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83777ED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83777EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83777EF4"))) PPC_WEAK_FUNC(sub_83777EF4);
PPC_FUNC_IMPL(__imp__sub_83777EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83777EF8"))) PPC_WEAK_FUNC(sub_83777EF8);
PPC_FUNC_IMPL(__imp__sub_83777EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83777F00;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x8378cba8
	ctx.lr = 0x83777F10;
	sub_8378CBA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83763b90
	ctx.lr = 0x83777F1C;
	sub_83763B90(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83778064
	if (cr6.eq) goto loc_83778064;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778064
	if (cr6.eq) goto loc_83778064;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83778064
	if (cr6.eq) goto loc_83778064;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x83777F4C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83777F5C;
	sub_831CDCF0(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwzx r28,r27,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83777fe0
	if (cr6.eq) goto loc_83777FE0;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// ori r25,r11,13856
	ctx.r25.u64 = ctx.r11.u64 | 13856;
loc_83777F84:
	// cmplwi cr6,r30,21097
	cr6.compare<uint32_t>(ctx.r30.u32, 21097, xer);
	// add r31,r27,r25
	ctx.r31.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x83777f94
	if (!cr6.lt) goto loc_83777F94;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83777F94:
	// li r5,188
	ctx.r5.s64 = 188;
	// ld r21,44(r31)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x83777FA8;
	sub_831CDCF0(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x837739f0
	ctx.lr = 0x83777FC0;
	sub_837739F0(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306ed00
	ctx.lr = 0x83777FD0;
	sub_8306ED00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x83777f84
	if (cr6.lt) goto loc_83777F84;
loc_83777FE0:
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// lwz r10,60(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// ori r9,r11,3142
	ctx.r9.u64 = ctx.r11.u64 | 3142;
	// addis r31,r10,5
	ctx.r31.s64 = ctx.r10.s64 + 327680;
	// addi r31,r31,2320
	ctx.r31.s64 = ctx.r31.s64 + 2320;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778058
	if (cr6.eq) goto loc_83778058;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83778004:
	// sth r22,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r22.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8377801C;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377804c
	if (cr6.eq) goto loc_8377804C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8306ef60
	ctx.lr = 0x83778034;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377804c
	if (cr6.eq) goto loc_8377804C;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8377804C;
	sub_831CE980(ctx, base);
loc_8377804C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x83778004
	if (!cr0.eq) goto loc_83778004;
loc_83778058:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83778064:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83778070"))) PPC_WEAK_FUNC(sub_83778070);
PPC_FUNC_IMPL(__imp__sub_83778070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83778078;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837780a0
	if (!cr6.eq) goto loc_837780A0;
loc_83778094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837780A0:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837780B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778094
	if (cr6.eq) goto loc_83778094;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x837780D0;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x837780E0;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83775138
	ctx.lr = 0x837780FC;
	sub_83775138(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83778118
	if (cr6.eq) goto loc_83778118;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x83778118;
	sub_82A72110(ctx, base);
loc_83778118:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83778094
	if (cr6.eq) goto loc_83778094;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83772ba0
	ctx.lr = 0x83778138;
	sub_83772BA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83778144"))) PPC_WEAK_FUNC(sub_83778144);
PPC_FUNC_IMPL(__imp__sub_83778144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83778148"))) PPC_WEAK_FUNC(sub_83778148);
PPC_FUNC_IMPL(__imp__sub_83778148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83778150;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83778178
	if (!cr6.eq) goto loc_83778178;
loc_8377816C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83778178:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83778188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377816c
	if (cr6.eq) goto loc_8377816C;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x837781A4;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x837781B4;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83775138
	ctx.lr = 0x837781D0;
	sub_83775138(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837781ec
	if (cr6.eq) goto loc_837781EC;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x837781EC;
	sub_82A72110(ctx, base);
loc_837781EC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83778210
	if (cr6.eq) goto loc_83778210;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83772c28
	ctx.lr = 0x8377820C;
	sub_83772C28(ctx, base);
	// b 0x8377827c
	goto loc_8377827C;
loc_83778210:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83772410
	ctx.lr = 0x83778218;
	sub_83772410(ctx, base);
	// addi r11,r3,-2000
	ctx.r11.s64 = ctx.r3.s64 + -2000;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377827c
	if (cr6.eq) goto loc_8377827C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83772410
	ctx.lr = 0x8377823C;
	sub_83772410(ctx, base);
	// clrlwi r30,r3,17
	ctx.r30.u64 = ctx.r3.u32 & 0x7FFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83772c28
	ctx.lr = 0x83778258;
	sub_83772C28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837723b8
	ctx.lr = 0x83778268;
	sub_837723B8(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a78580
	ctx.lr = 0x8377827C;
	sub_82A78580(ctx, base);
loc_8377827C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777a60
	ctx.lr = 0x8377828C;
	sub_83777A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837782b0
	if (cr6.eq) goto loc_837782B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r29)
	PPC_STORE_U8(ctx.r29.u32 + 80, ctx.r11.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837777c8
	ctx.lr = 0x837782B0;
	sub_837777C8(ctx, base);
loc_837782B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837782BC"))) PPC_WEAK_FUNC(sub_837782BC);
PPC_FUNC_IMPL(__imp__sub_837782BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837782C0"))) PPC_WEAK_FUNC(sub_837782C0);
PPC_FUNC_IMPL(__imp__sub_837782C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837782C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837782ec
	if (!cr6.eq) goto loc_837782EC;
loc_837782E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837782EC:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83778300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837782e0
	if (cr6.eq) goto loc_837782E0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x8377831C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8377832C;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x83775138
	ctx.lr = 0x83778348;
	sub_83775138(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83778364
	if (cr6.eq) goto loc_83778364;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x83778364;
	sub_82A72110(ctx, base);
loc_83778364:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x837782e0
	if (cr6.eq) goto loc_837782E0;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83772ca8
	ctx.lr = 0x83778384;
	sub_83772CA8(ctx, base);
	// clrlwi r5,r29,17
	ctx.r5.u64 = ctx.r29.u32 & 0x7FFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837723b8
	ctx.lr = 0x83778394;
	sub_837723B8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a78580
	ctx.lr = 0x837783A8;
	sub_82A78580(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777d30
	ctx.lr = 0x837783BC;
	sub_83777D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837783C8"))) PPC_WEAK_FUNC(sub_837783C8);
PPC_FUNC_IMPL(__imp__sub_837783C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83778070
	ctx.lr = 0x837783E8;
	sub_83778070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377840c
	if (cr6.eq) goto loc_8377840C;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8377840C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83772688
	ctx.lr = 0x83778414;
	sub_83772688(ctx, base);
	// subfic r11,r3,250
	xer.ca = ctx.r3.u32 <= 250;
	ctx.r11.s64 = 250 - ctx.r3.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_83778434"))) PPC_WEAK_FUNC(sub_83778434);
PPC_FUNC_IMPL(__imp__sub_83778434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83778438"))) PPC_WEAK_FUNC(sub_83778438);
PPC_FUNC_IMPL(__imp__sub_83778438) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83778464
	if (!cr6.eq) goto loc_83778464;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837784c8
	goto loc_837784C8;
loc_83778464:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777ef8
	ctx.lr = 0x83778470;
	sub_83777EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775c18
	ctx.lr = 0x8377847C;
	sub_83775C18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775cf0
	ctx.lr = 0x83778488;
	sub_83775CF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775dd8
	ctx.lr = 0x83778494;
	sub_83775DD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775f08
	ctx.lr = 0x837784A0;
	sub_83775F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775ff0
	ctx.lr = 0x837784AC;
	sub_83775FF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837760f8
	ctx.lr = 0x837784B8;
	sub_837760F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83776190
	ctx.lr = 0x837784C4;
	sub_83776190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837784C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837784E0"))) PPC_WEAK_FUNC(sub_837784E0);
PPC_FUNC_IMPL(__imp__sub_837784E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837784E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837785a0
	if (cr6.eq) goto loc_837785A0;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83778528
	if (cr6.lt) goto loc_83778528;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r9,r10,159
	ctx.r9.u64 = ctx.r10.u64 | 159;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377852c
	if (!cr6.gt) goto loc_8377852C;
loc_83778528:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377852C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837785a0
	if (cr6.eq) goto loc_837785A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8306ef60
	ctx.lr = 0x83778540;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837785a0
	if (cr6.eq) goto loc_837785A0;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837782c0
	ctx.lr = 0x83778554;
	sub_837782C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x83772e38
	ctx.lr = 0x83778560;
	sub_83772E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83763b90
	ctx.lr = 0x83778568;
	sub_83763B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778594
	if (cr6.eq) goto loc_83778594;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,80(r30)
	PPC_STORE_U8(ctx.r30.u32 + 80, ctx.r11.u8);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c0a8
	ctx.lr = 0x83778588;
	sub_8311C0A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8311cd08
	ctx.lr = 0x83778594;
	sub_8311CD08(ctx, base);
loc_83778594:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837785A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837785AC"))) PPC_WEAK_FUNC(sub_837785AC);
PPC_FUNC_IMPL(__imp__sub_837785AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837785B0"))) PPC_WEAK_FUNC(sub_837785B0);
PPC_FUNC_IMPL(__imp__sub_837785B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837785B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837785f4
	if (cr6.eq) goto loc_837785F4;
	// lwz r9,100(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// rlwinm r8,r9,15,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83778604
	if (cr6.eq) goto loc_83778604;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83778608
	if (!cr6.eq) goto loc_83778608;
loc_837785F4:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r9,r11,15,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83778608
	if (cr6.eq) goto loc_83778608;
loc_83778604:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83778608:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne cr6,0x8377874c
	if (!cr6.eq) goto loc_8377874C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x83778638;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778678
	if (cr6.eq) goto loc_83778678;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83778678
	if (!cr6.eq) goto loc_83778678;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x83778660;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778678
	if (cr6.eq) goto loc_83778678;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377874c
	if (cr6.eq) goto loc_8377874C;
loc_83778678:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa6718
	ctx.lr = 0x83778698;
	sub_82AA6718(ctx, base);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_837786A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837786a0
	if (!cr6.eq) goto loc_837786A0;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x837786CC;
	sub_827A8810(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82aa8e60
	ctx.lr = 0x837786E8;
	sub_82AA8E60(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x837786F8;
	sub_82AA8DC8(ctx, base);
	// lhz r8,98(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 98);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addic r4,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r4,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x82aa8e60
	ctx.lr = 0x8377871C;
	sub_82AA8E60(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8377873c
	if (cr6.lt) goto loc_8377873C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377873C;
	sub_825952B8(ctx, base);
loc_8377873C:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// b 0x8377879c
	goto loc_8377879C;
loc_8377874C:
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x83778760;
	sub_837860C8(ctx, base);
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x83778774;
	sub_837860C8(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x83778788;
	sub_82AA8E60(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x8377879C;
	sub_82AA8E60(ctx, base);
loc_8377879C:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8dc8
	ctx.lr = 0x837787B0;
	sub_82AA8DC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837787c8
	if (cr6.eq) goto loc_837787C8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778800
	if (cr6.eq) goto loc_83778800;
loc_837787C8:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83778808
	if (cr6.eq) goto loc_83778808;
	// rlwinm r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778808
	if (cr6.eq) goto loc_83778808;
	// ld r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82d427a8
	ctx.lr = 0x837787F4;
	sub_82D427A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83778808
	if (cr6.eq) goto loc_83778808;
loc_83778800:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8377880c
	goto loc_8377880C;
loc_83778808:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8377880C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778840
	if (cr6.eq) goto loc_83778840;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x8377882C;
	sub_837860C8(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x83778840;
	sub_82AA8E60(ctx, base);
loc_83778840:
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x83778854;
	sub_837860C8(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837860c8
	ctx.lr = 0x83778868;
	sub_837860C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83778874"))) PPC_WEAK_FUNC(sub_83778874);
PPC_FUNC_IMPL(__imp__sub_83778874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83778878"))) PPC_WEAK_FUNC(sub_83778878);
PPC_FUNC_IMPL(__imp__sub_83778878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83778880;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377888C;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377889c
	if (!cr6.eq) goto loc_8377889C;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8377889C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r14,0
	ctx.r14.s64 = 0;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// addis r21,r28,96
	ctx.r21.s64 = ctx.r28.s64 + 6291456;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r14,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// addi r21,r21,-4872
	ctx.r21.s64 = ctx.r21.s64 + -4872;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83784f38
	ctx.lr = 0x837788E0;
	sub_83784F38(ctx, base);
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r15,-31770
	ctx.r15.s64 = -2082078720;
	// ori r10,r11,19680
	ctx.r10.u64 = ctx.r11.u64 | 19680;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r3,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837789c4
	if (cr6.eq) goto loc_837789C4;
	// addis r30,r28,237
	ctx.r30.s64 = ctx.r28.s64 + 15532032;
	// addi r30,r30,14080
	ctx.r30.s64 = ctx.r30.s64 + 14080;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83778918:
	// cmplwi cr6,r5,700
	cr6.compare<uint32_t>(ctx.r5.u32, 700, xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bge cr6,0x83778928
	if (!cr6.lt) goto loc_83778928;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_83778928:
	// lwz r10,31176(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 31176);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x837789c4
	if (cr6.eq) goto loc_837789C4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837789b4
	if (cr6.eq) goto loc_837789B4;
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
loc_83778954:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r29,r10,14,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bne cr6,0x8377897c
	if (!cr6.eq) goto loc_8377897C;
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x83778980
	if (cr6.eq) goto loc_83778980;
loc_8377897C:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_83778980:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837789ac
	if (cr6.eq) goto loc_837789AC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwimi r10,r29,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r29,r11,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
loc_837789AC:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x83778954
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83778954;
loc_837789B4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// blt cr6,0x83778918
	if (cr6.lt) goto loc_83778918;
loc_837789C4:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// ori r17,r11,60648
	ctx.r17.u64 = ctx.r11.u64 | 60648;
	// ori r16,r10,11904
	ctx.r16.u64 = ctx.r10.u64 | 11904;
	// ori r19,r9,59456
	ctx.r19.u64 = ctx.r9.u64 | 59456;
	// ori r20,r8,65535
	ctx.r20.u64 = ctx.r8.u64 | 65535;
	// li r18,-1
	ctx.r18.s64 = -1;
loc_837789EC:
	// cmplwi cr6,r22,19
	cr6.compare<uint32_t>(ctx.r22.u32, 19, xer);
	// bgt cr6,0x83778d80
	if (cr6.gt) goto loc_83778D80;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r22,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30196
	ctx.r12.s64 = ctx.r12.s64 + -30196;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r22.u32) {
	case 0:
		goto loc_83778A5C;
	case 1:
		goto loc_83778A64;
	case 2:
		goto loc_83778A6C;
	case 3:
		goto loc_83778A74;
	case 4:
		goto loc_83778A7C;
	case 5:
		goto loc_83778A84;
	case 6:
		goto loc_83778A8C;
	case 7:
		goto loc_83778A94;
	case 8:
		goto loc_83778A9C;
	case 9:
		goto loc_83778AA4;
	case 10:
		goto loc_83778AAC;
	case 11:
		goto loc_83778AB4;
	case 12:
		goto loc_83778ABC;
	case 13:
		goto loc_83778D80;
	case 14:
		goto loc_83778AC4;
	case 15:
		goto loc_83778B2C;
	case 16:
		goto loc_83778B94;
	case 17:
		goto loc_83778BFC;
	case 18:
		goto loc_83778C04;
	case 19:
		goto loc_83778C0C;
	default:
		return;
	}
	// lwz r27,-30116(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30116);
	// lwz r27,-30108(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30108);
	// lwz r27,-30100(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30100);
	// lwz r27,-30092(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30092);
	// lwz r27,-30084(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30084);
	// lwz r27,-30076(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30076);
	// lwz r27,-30068(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30068);
	// lwz r27,-30060(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30060);
	// lwz r27,-30052(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30052);
	// lwz r27,-30044(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30044);
	// lwz r27,-30036(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30036);
	// lwz r27,-30028(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30028);
	// lwz r27,-30020(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30020);
	// lwz r27,-29312(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29312);
	// lwz r27,-30012(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30012);
	// lwz r27,-29908(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29908);
	// lwz r27,-29804(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29804);
	// lwz r27,-29700(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29700);
	// lwz r27,-29692(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29692);
	// lwz r27,-29684(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -29684);
loc_83778A5C:
	// li r27,9
	ctx.r27.s64 = 9;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A64:
	// li r27,66
	ctx.r27.s64 = 66;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A6C:
	// li r27,12
	ctx.r27.s64 = 12;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A74:
	// li r27,68
	ctx.r27.s64 = 68;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A7C:
	// li r27,10
	ctx.r27.s64 = 10;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A84:
	// li r27,69
	ctx.r27.s64 = 69;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A8C:
	// li r27,13
	ctx.r27.s64 = 13;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A94:
	// li r27,11
	ctx.r27.s64 = 11;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778A9C:
	// li r27,67
	ctx.r27.s64 = 67;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778AA4:
	// li r27,14
	ctx.r27.s64 = 14;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778AAC:
	// li r27,21
	ctx.r27.s64 = 21;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778AB4:
	// li r27,22
	ctx.r27.s64 = 22;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778ABC:
	// li r27,23
	ctx.r27.s64 = 23;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778AC4:
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r27,39
	ctx.r27.s64 = 39;
	// bl 0x8376bbb8
	ctx.lr = 0x83778AD4;
	sub_8376BBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83778AE4;
	sub_83132CF8(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132d48
	ctx.lr = 0x83778AF8;
	sub_83132D48(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x83778c10
	if (cr6.eq) goto loc_83778C10;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83778B0C;
	sub_83132CF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,67
	ctx.r4.s64 = 67;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83132d48
	ctx.lr = 0x83778B28;
	sub_83132D48(ctx, base);
	// b 0x83778c10
	goto loc_83778C10;
loc_83778B2C:
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r27,40
	ctx.r27.s64 = 40;
	// bl 0x8376bbb8
	ctx.lr = 0x83778B3C;
	sub_8376BBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83778B4C;
	sub_83132CF8(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132d48
	ctx.lr = 0x83778B60;
	sub_83132D48(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x83778c10
	if (cr6.eq) goto loc_83778C10;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83778B74;
	sub_83132CF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,71
	ctx.r4.s64 = 71;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83132d48
	ctx.lr = 0x83778B90;
	sub_83132D48(ctx, base);
	// b 0x83778c10
	goto loc_83778C10;
loc_83778B94:
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r27,41
	ctx.r27.s64 = 41;
	// bl 0x8376bbb8
	ctx.lr = 0x83778BA4;
	sub_8376BBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83778BB4;
	sub_83132CF8(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132d48
	ctx.lr = 0x83778BC8;
	sub_83132D48(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x83778c10
	if (cr6.eq) goto loc_83778C10;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83132cf8
	ctx.lr = 0x83778BDC;
	sub_83132CF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,68
	ctx.r4.s64 = 68;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83132d48
	ctx.lr = 0x83778BF8;
	sub_83132D48(ctx, base);
	// b 0x83778c10
	goto loc_83778C10;
loc_83778BFC:
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778C04:
	// li r27,50
	ctx.r27.s64 = 50;
	// b 0x83778c10
	goto loc_83778C10;
loc_83778C0C:
	// li r27,51
	ctx.r27.s64 = 51;
loc_83778C10:
	// lwzx r24,r28,r17
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r17.u32);
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83778d80
	if (cr6.eq) goto loc_83778D80;
	// add r25,r28,r16
	ctx.r25.u64 = ctx.r28.u64 + ctx.r16.u64;
loc_83778C24:
	// cmplwi cr6,r26,300
	cr6.compare<uint32_t>(ctx.r26.u32, 300, xer);
	// add r29,r28,r19
	ctx.r29.u64 = ctx.r28.u64 + ctx.r19.u64;
	// bge cr6,0x83778c34
	if (!cr6.lt) goto loc_83778C34;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_83778C34:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x83778d70
	if (!cr6.eq) goto loc_83778D70;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// rlwinm r28,r11,23,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83778d6c
	if (cr6.eq) goto loc_83778D6C;
	// addi r30,r29,328
	ctx.r30.s64 = ctx.r29.s64 + 328;
loc_83778C58:
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830714d8
	ctx.lr = 0x83778C6C;
	sub_830714D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778c80
	if (cr6.eq) goto loc_83778C80;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// b 0x83778ca0
	goto loc_83778CA0;
loc_83778C80:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83572958
	ctx.lr = 0x83778C90;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778d44
	if (cr6.eq) goto loc_83778D44;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_83778CA0:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x83778d44
	if (!cr6.lt) goto loc_83778D44;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830714d8
	ctx.lr = 0x83778CBC;
	sub_830714D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778ce8
	if (cr6.eq) goto loc_83778CE8;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778ce8
	if (cr6.eq) goto loc_83778CE8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x83778CE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83778CE8:
	// lwz r10,31176(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 31176);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83778d24
	if (cr6.eq) goto loc_83778D24;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// ble cr6,0x83778d0c
	if (!cr6.gt) goto loc_83778D0C;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_83778D0C:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// rlwinm r9,r11,23,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x83778d5c
	if (!cr6.lt) goto loc_83778D5C;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83778d5c
	goto loc_83778D5C;
loc_83778D24:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// rlwinm r8,r11,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x83778d5c
	if (!cr6.lt) goto loc_83778D5C;
	// rlwinm r11,r10,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83778d5c
	goto loc_83778D5C;
loc_83778D44:
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// rlwinm r10,r11,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x83778d5c
	if (!cr6.lt) goto loc_83778D5C;
	// lwz r11,31176(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 31176);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83778D5C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83778c58
	if (cr6.lt) goto loc_83778C58;
loc_83778D6C:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83778D70:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,548
	ctx.r25.s64 = ctx.r25.s64 + 548;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x83778c24
	if (cr6.lt) goto loc_83778C24;
loc_83778D80:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,23
	cr6.compare<uint32_t>(ctx.r22.u32, 23, xer);
	// blt cr6,0x837789ec
	if (cr6.lt) goto loc_837789EC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x83778db0
	if (cr6.eq) goto loc_83778DB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83778DB0;
	sub_825952B8(ctx, base);
loc_83778DB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83778DBC"))) PPC_WEAK_FUNC(sub_83778DBC);
PPC_FUNC_IMPL(__imp__sub_83778DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83778DC0"))) PPC_WEAK_FUNC(sub_83778DC0);
PPC_FUNC_IMPL(__imp__sub_83778DC0) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778e10
	if (cr6.eq) goto loc_83778E10;
	// bl 0x8306c970
	ctx.lr = 0x83778DEC;
	sub_8306C970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83778e10
	if (cr6.eq) goto loc_83778E10;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83778878
	ctx.lr = 0x83778E0C;
	sub_83778878(ctx, base);
	// b 0x83778e14
	goto loc_83778E14;
loc_83778E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83778E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83778E2C"))) PPC_WEAK_FUNC(sub_83778E2C);
PPC_FUNC_IMPL(__imp__sub_83778E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83778E30"))) PPC_WEAK_FUNC(sub_83778E30);
PPC_FUNC_IMPL(__imp__sub_83778E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83778E38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83778e5c
	if (!cr6.eq) goto loc_83778E5C;
loc_83778E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83778E5C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83773120
	ctx.lr = 0x83778E68;
	sub_83773120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83778e50
	if (!cr6.eq) goto loc_83778E50;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83778E88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778ed0
	if (cr6.eq) goto loc_83778ED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83778EA8;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778ed0
	if (cr6.eq) goto loc_83778ED0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83778EB4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837777c8
	ctx.lr = 0x83778EC4;
	sub_837777C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,188
	ctx.r30.s64 = ctx.r30.s64 + 188;
	// bne 0x83778eb4
	if (!cr0.eq) goto loc_83778EB4;
loc_83778ED0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83778EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778f30
	if (cr6.eq) goto loc_83778F30;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83778F04;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778f30
	if (cr6.eq) goto loc_83778F30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83778F10:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774550
	ctx.lr = 0x83778F24;
	sub_83774550(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,480
	ctx.r30.s64 = ctx.r30.s64 + 480;
	// bne 0x83778f10
	if (!cr0.eq) goto loc_83778F10;
loc_83778F30:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83778F44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778f8c
	if (cr6.eq) goto loc_83778F8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83778F64;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778f8c
	if (cr6.eq) goto loc_83778F8C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83778F70:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83776398
	ctx.lr = 0x83778F80;
	sub_83776398(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bne 0x83778f70
	if (!cr0.eq) goto loc_83778F70;
loc_83778F8C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83778FA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778fec
	if (cr6.eq) goto loc_83778FEC;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83778FC0;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83778fec
	if (cr6.eq) goto loc_83778FEC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83778FCC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774898
	ctx.lr = 0x83778FE0;
	sub_83774898(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// bne 0x83778fcc
	if (!cr0.eq) goto loc_83778FCC;
loc_83778FEC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83779000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779048
	if (cr6.eq) goto loc_83779048;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83779020;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779048
	if (cr6.eq) goto loc_83779048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8377902C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774aa8
	ctx.lr = 0x8377903C;
	sub_83774AA8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bne 0x8377902c
	if (!cr0.eq) goto loc_8377902C;
loc_83779048:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83775008
	ctx.lr = 0x83779054;
	sub_83775008(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83779068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837790b0
	if (cr6.eq) goto loc_837790B0;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x83779088;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837790b0
	if (cr6.eq) goto loc_837790B0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83779094:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774e98
	ctx.lr = 0x837790A4;
	sub_83774E98(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,164
	ctx.r30.s64 = ctx.r30.s64 + 164;
	// bne 0x83779094
	if (!cr0.eq) goto loc_83779094;
loc_837790B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837790C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837790d8
	if (cr6.eq) goto loc_837790D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83778878
	ctx.lr = 0x837790D8;
	sub_83778878(ctx, base);
loc_837790D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837790EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779134
	if (cr6.eq) goto loc_83779134;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8377910C;
	sub_8306E2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779134
	if (cr6.eq) goto loc_83779134;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83779118:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83774f48
	ctx.lr = 0x83779128;
	sub_83774F48(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,628
	ctx.r30.s64 = ctx.r30.s64 + 628;
	// bne 0x83779118
	if (!cr0.eq) goto loc_83779118;
loc_83779134:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83763b90
	ctx.lr = 0x8377913C;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779184
	if (cr6.eq) goto loc_83779184;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addis r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 1835008;
	// addic. r31,r31,8720
	xer.ca = ctx.r31.u32 > 4294958575;
	ctx.r31.s64 = ctx.r31.s64 + 8720;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x83779184
	if (cr0.eq) goto loc_83779184;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83779168;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779184
	if (cr6.eq) goto loc_83779184;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,6714
	ctx.r5.u64 = ctx.r5.u64 | 6714;
	// bl 0x831ce980
	ctx.lr = 0x83779184;
	sub_831CE980(ctx, base);
loc_83779184:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83779190"))) PPC_WEAK_FUNC(sub_83779190);
PPC_FUNC_IMPL(__imp__sub_83779190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_837791A0"))) PPC_WEAK_FUNC(sub_837791A0);
PPC_FUNC_IMPL(__imp__sub_837791A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// fcmpu cr6,f3,f13
	cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// fcmpu cr6,f4,f13
	cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// stfs f1,144(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f2,148(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f3,152(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f4,156(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83779214"))) PPC_WEAK_FUNC(sub_83779214);
PPC_FUNC_IMPL(__imp__sub_83779214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83779218"))) PPC_WEAK_FUNC(sub_83779218);
PPC_FUNC_IMPL(__imp__sub_83779218) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-10384
	ctx.r4.s64 = ctx.r11.s64 + -10384;
	// bl 0x83103328
	ctx.lr = 0x8377923C;
	sub_83103328(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-10280
	ctx.r9.s64 = ctx.r10.s64 + -10280;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8377925C;
	sub_82572FA0(ctx, base);
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8377926C;
	sub_82572FA0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// addi r6,r8,9008
	ctx.r6.s64 = ctx.r8.s64 + 9008;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// lis r3,-32222
	ctx.r3.s64 = -2111700992;
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f13,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v62,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-26260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v62,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837792E0"))) PPC_WEAK_FUNC(sub_837792E0);
PPC_FUNC_IMPL(__imp__sub_837792E0) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r3,-19904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83779344
	if (!cr6.eq) goto loc_83779344;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83779318;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377932c
	if (cr6.eq) goto loc_8377932C;
	// bl 0x83779218
	ctx.lr = 0x83779324;
	sub_83779218(ctx, base);
	// stw r3,-19904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19904, ctx.r3.u32);
	// b 0x83779334
	goto loc_83779334;
loc_8377932C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19904, ctx.r11.u32);
loc_83779334:
	// bl 0x83763ef8
	ctx.lr = 0x83779338;
	sub_83763EF8(ctx, base);
	// lwz r4,-19904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19904);
	// bl 0x83103100
	ctx.lr = 0x83779340;
	sub_83103100(ctx, base);
	// lwz r3,-19904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19904);
loc_83779344:
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

__attribute__((alias("__imp__sub_83779358"))) PPC_WEAK_FUNC(sub_83779358);
PPC_FUNC_IMPL(__imp__sub_83779358) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779388
	if (cr6.eq) goto loc_83779388;
	// bl 0x833bbd78
	ctx.lr = 0x83779380;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_83779388:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837793a8
	if (cr6.eq) goto loc_837793A8;
	// bl 0x835eb7f0
	ctx.lr = 0x8377939C;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837793A8;
	sub_82572FA0(ctx, base);
loc_837793A8:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837793c8
	if (cr6.eq) goto loc_837793C8;
	// bl 0x835eb7f0
	ctx.lr = 0x837793BC;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837793C8;
	sub_82572FA0(ctx, base);
loc_837793C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83779400"))) PPC_WEAK_FUNC(sub_83779400);
PPC_FUNC_IMPL(__imp__sub_83779400) {
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
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779438
	if (cr6.eq) goto loc_83779438;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83779438
	if (cr6.eq) goto loc_83779438;
	// bl 0x835eb7f0
	ctx.lr = 0x83779438;
	sub_835EB7F0(ctx, base);
loc_83779438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x83779444;
	sub_82572FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377945C"))) PPC_WEAK_FUNC(sub_8377945C);
PPC_FUNC_IMPL(__imp__sub_8377945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83779460"))) PPC_WEAK_FUNC(sub_83779460);
PPC_FUNC_IMPL(__imp__sub_83779460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83779468;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,72
	ctx.r24.s64 = ctx.r3.s64 + 72;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779490
	if (cr6.eq) goto loc_83779490;
	// bl 0x835eb7f0
	ctx.lr = 0x83779484;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83779490;
	sub_82572FA0(ctx, base);
loc_83779490:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825832d8
	ctx.lr = 0x83779498;
	sub_825832D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832e8
	ctx.lr = 0x837794A8;
	sub_825832E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825832f0
	ctx.lr = 0x837794B8;
	sub_825832F0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8332f198
	ctx.lr = 0x837794C8;
	sub_8332F198(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83815cb0
	ctx.lr = 0x837794D8;
	sub_83815CB0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x837794E8;
	sub_82DAB6D0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83ac2480
	ctx.lr = 0x837794F8;
	sub_83AC2480(ctx, base);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x83779514;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377955c
	if (cr6.eq) goto loc_8377955C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835ebb28
	ctx.lr = 0x83779548;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83779554;
	sub_82572FA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8377955C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83779568;
	sub_82572FA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83779570"))) PPC_WEAK_FUNC(sub_83779570);
PPC_FUNC_IMPL(__imp__sub_83779570) {
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
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837795a8
	if (cr6.eq) goto loc_837795A8;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837795a8
	if (cr6.eq) goto loc_837795A8;
	// bl 0x835eb7f0
	ctx.lr = 0x837795A8;
	sub_835EB7F0(ctx, base);
loc_837795A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x837795B4;
	sub_82572FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837795CC"))) PPC_WEAK_FUNC(sub_837795CC);
PPC_FUNC_IMPL(__imp__sub_837795CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837795D0"))) PPC_WEAK_FUNC(sub_837795D0);
PPC_FUNC_IMPL(__imp__sub_837795D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837795D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,80
	ctx.r24.s64 = ctx.r3.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779600
	if (cr6.eq) goto loc_83779600;
	// bl 0x835eb7f0
	ctx.lr = 0x837795F4;
	sub_835EB7F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82572fa0
	ctx.lr = 0x83779600;
	sub_82572FA0(ctx, base);
loc_83779600:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825832d8
	ctx.lr = 0x83779608;
	sub_825832D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832e8
	ctx.lr = 0x83779618;
	sub_825832E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825832f0
	ctx.lr = 0x83779628;
	sub_825832F0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8332f198
	ctx.lr = 0x83779638;
	sub_8332F198(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83815cb0
	ctx.lr = 0x83779648;
	sub_83815CB0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x83779658;
	sub_82DAB6D0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83ac2480
	ctx.lr = 0x83779668;
	sub_83AC2480(ctx, base);
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x83779684;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837796cc
	if (cr6.eq) goto loc_837796CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835ebb28
	ctx.lr = 0x837796B8;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837796C4;
	sub_82572FA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837796CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82572fa0
	ctx.lr = 0x837796D8;
	sub_82572FA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837796E0"))) PPC_WEAK_FUNC(sub_837796E0);
PPC_FUNC_IMPL(__imp__sub_837796E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8337f1e0
	sub_8337F1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837796FC"))) PPC_WEAK_FUNC(sub_837796FC);
PPC_FUNC_IMPL(__imp__sub_837796FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83779700"))) PPC_WEAK_FUNC(sub_83779700);
PPC_FUNC_IMPL(__imp__sub_83779700) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377972c
	if (cr6.eq) goto loc_8377972C;
	// bl 0x833bbd78
	ctx.lr = 0x83779724;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8377972C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83779748
	if (cr6.eq) goto loc_83779748;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x833bcb58
	ctx.lr = 0x83779744;
	sub_833BCB58(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_83779748:
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

__attribute__((alias("__imp__sub_8377975C"))) PPC_WEAK_FUNC(sub_8377975C);
PPC_FUNC_IMPL(__imp__sub_8377975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83779760"))) PPC_WEAK_FUNC(sub_83779760);
PPC_FUNC_IMPL(__imp__sub_83779760) {
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
	// bl 0x83779358
	ctx.lr = 0x83779770;
	sub_83779358(ctx, base);
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

__attribute__((alias("__imp__sub_83779784"))) PPC_WEAK_FUNC(sub_83779784);
PPC_FUNC_IMPL(__imp__sub_83779784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83779788"))) PPC_WEAK_FUNC(sub_83779788);
PPC_FUNC_IMPL(__imp__sub_83779788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837797ac
	if (!cr6.eq) goto loc_837797AC;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83779700
	sub_83779700(ctx, base);
	return;
loc_837797AC:
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8337f1e0
	sub_8337F1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837797B4"))) PPC_WEAK_FUNC(sub_837797B4);
PPC_FUNC_IMPL(__imp__sub_837797B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837797B8"))) PPC_WEAK_FUNC(sub_837797B8);
PPC_FUNC_IMPL(__imp__sub_837797B8) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-10280
	ctx.r10.s64 = ctx.r11.s64 + -10280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83779358
	ctx.lr = 0x837797E4;
	sub_83779358(ctx, base);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-19904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19904, ctx.r11.u32);
	// bl 0x82572fa0
	ctx.lr = 0x837797FC;
	sub_82572FA0(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x83779808;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x83779810;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83779830
	if (cr6.eq) goto loc_83779830;
	// bl 0x82595188
	ctx.lr = 0x83779820;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83779830;
	sub_825952B8(ctx, base);
loc_83779830:
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

__attribute__((alias("__imp__sub_8377984C"))) PPC_WEAK_FUNC(sub_8377984C);
PPC_FUNC_IMPL(__imp__sub_8377984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83779850"))) PPC_WEAK_FUNC(sub_83779850);
PPC_FUNC_IMPL(__imp__sub_83779850) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4008
	ctx.r9.s64 = ctx.r10.s64 + -4008;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x825749e0
	ctx.lr = 0x8377988C;
	sub_825749E0(ctx, base);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,8356
	ctx.r7.s64 = ctx.r8.s64 + 8356;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_837798B0"))) PPC_WEAK_FUNC(sub_837798B0);
PPC_FUNC_IMPL(__imp__sub_837798B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x837798e8
	if (cr6.gt) goto loc_837798E8;
	// beq cr6,0x837798e0
	if (cr6.eq) goto loc_837798E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x837798d8
	if (cr6.eq) goto loc_837798D8;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x837798f8
	if (!cr6.eq) goto loc_837798F8;
loc_837798D0:
	// li r3,364
	ctx.r3.s64 = 364;
	// blr 
	return;
loc_837798D8:
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
loc_837798E0:
	// li r3,360
	ctx.r3.s64 = 360;
	// blr 
	return;
loc_837798E8:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beq cr6,0x837798d0
	if (cr6.eq) goto loc_837798D0;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// beq cr6,0x837798e0
	if (cr6.eq) goto loc_837798E0;
loc_837798F8:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83779900"))) PPC_WEAK_FUNC(sub_83779900);
PPC_FUNC_IMPL(__imp__sub_83779900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bgt cr6,0x83779938
	if (cr6.gt) goto loc_83779938;
	// beq cr6,0x83779930
	if (cr6.eq) goto loc_83779930;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83779928
	if (cr6.eq) goto loc_83779928;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bne cr6,0x83779948
	if (!cr6.eq) goto loc_83779948;
loc_83779920:
	// li r3,212
	ctx.r3.s64 = 212;
	// blr 
	return;
loc_83779928:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_83779930:
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
loc_83779938:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beq cr6,0x83779920
	if (cr6.eq) goto loc_83779920;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// beq cr6,0x83779930
	if (cr6.eq) goto loc_83779930;
loc_83779948:
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83779950"))) PPC_WEAK_FUNC(sub_83779950);
PPC_FUNC_IMPL(__imp__sub_83779950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83779958;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31392
	ctx.r9.s64 = ctx.r11.s64 + 31392;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
loc_8377998C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377998c
	if (!cr6.eq) goto loc_8377998C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837799B0;
	sub_8259CC28(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b142a0
	ctx.lr = 0x837799BC;
	sub_82B142A0(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x831cdcf0
	ctx.lr = 0x837799D0;
	sub_831CDCF0(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r10,-9476
	ctx.r5.s64 = ctx.r10.s64 + -9476;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573118
	ctx.lr = 0x837799E8;
	sub_82573118(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837799F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837799f0
	if (!cr6.eq) goto loc_837799F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779A18;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83779A24"))) PPC_WEAK_FUNC(sub_83779A24);
PPC_FUNC_IMPL(__imp__sub_83779A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83779A28"))) PPC_WEAK_FUNC(sub_83779A28);
PPC_FUNC_IMPL(__imp__sub_83779A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83779A30;
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
	// bl 0x831156e8
	ctx.lr = 0x83779A44;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83117ee0
	ctx.lr = 0x83779A64;
	sub_83117EE0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837cabd8
	ctx.lr = 0x83779A70;
	sub_837CABD8(ctx, base);
	// cmpwi cr6,r29,25
	cr6.compare<int32_t>(ctx.r29.s32, 25, xer);
	// bne cr6,0x83779a84
	if (!cr6.eq) goto loc_83779A84;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r4,31380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31380);
	// b 0x83779a8c
	goto loc_83779A8C;
loc_83779A84:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r4,31384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31384);
loc_83779A8C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779A90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779a90
	if (!cr6.eq) goto loc_83779A90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779AB4;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83779AC0"))) PPC_WEAK_FUNC(sub_83779AC0);
PPC_FUNC_IMPL(__imp__sub_83779AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83779AC8;
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
	// bl 0x831156e8
	ctx.lr = 0x83779ADC;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83117f58
	ctx.lr = 0x83779AFC;
	sub_83117F58(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837ca890
	ctx.lr = 0x83779B08;
	sub_837CA890(ctx, base);
	// cmpwi cr6,r29,27
	cr6.compare<int32_t>(ctx.r29.s32, 27, xer);
	// bne cr6,0x83779b1c
	if (!cr6.eq) goto loc_83779B1C;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r4,31380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31380);
	// b 0x83779b24
	goto loc_83779B24;
loc_83779B1C:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r4,31384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31384);
loc_83779B24:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779B28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779b28
	if (!cr6.eq) goto loc_83779B28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779B4C;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83779B58"))) PPC_WEAK_FUNC(sub_83779B58);
PPC_FUNC_IMPL(__imp__sub_83779B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83779B60;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,31392
	ctx.r10.s64 = ctx.r11.s64 + 31392;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779B90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779b90
	if (!cr6.eq) goto loc_83779B90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83779BB4;
	sub_8259CC28(ctx, base);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83779BD8;
	sub_8259CB28(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x83779BEC;
	sub_831CDCF0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r29,r11,-9460
	ctx.r29.s64 = ctx.r11.s64 + -9460;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82573118
	ctx.lr = 0x83779C08;
	sub_82573118(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83779C10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83779c10
	if (!cr6.eq) goto loc_83779C10;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779C38;
	sub_825A1EB8(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// lwz r4,31368(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31368);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779C50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779c50
	if (!cr6.eq) goto loc_83779C50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83779C74;
	sub_8259CC28(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lwz r4,31372(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31372);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779C80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779c80
	if (!cr6.eq) goto loc_83779C80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779CA4;
	sub_825A1EB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x83779CB8;
	sub_825A1DA8(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b142a0
	ctx.lr = 0x83779CC4;
	sub_82B142A0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x83779CD8;
	sub_825A1DA8(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lwz r4,31376(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31376);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779CE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779ce4
	if (!cr6.eq) goto loc_83779CE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779D08;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x83779d1c
	if (!cr6.lt) goto loc_83779D1C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_83779D1C:
	// bl 0x83104018
	ctx.lr = 0x83779D20;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83779d3c
	if (!cr6.eq) goto loc_83779D3C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x83779D3C;
	sub_825A1EB8(ctx, base);
loc_83779D3C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83779d5c
	if (cr6.lt) goto loc_83779D5C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83779D5C;
	sub_825952B8(ctx, base);
loc_83779D5C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x83779d84
	if (cr6.lt) goto loc_83779D84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x83779D84;
	sub_825952B8(ctx, base);
loc_83779D84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83779D90"))) PPC_WEAK_FUNC(sub_83779D90);
PPC_FUNC_IMPL(__imp__sub_83779D90) {
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
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31392
	ctx.r9.s64 = ctx.r10.s64 + 31392;
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,92(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779DD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779dd0
	if (!cr6.eq) goto loc_83779DD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83779DF4;
	sub_8259CC28(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,31652
	ctx.r8.s64 = ctx.r10.s64 + 31652;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779E08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779e08
	if (!cr6.eq) goto loc_83779E08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779E2C;
	sub_825A1EB8(ctx, base);
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

__attribute__((alias("__imp__sub_83779E48"))) PPC_WEAK_FUNC(sub_83779E48);
PPC_FUNC_IMPL(__imp__sub_83779E48) {
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
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,31392
	ctx.r9.s64 = ctx.r10.s64 + 31392;
	// li r8,15
	ctx.r8.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,96(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779E88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779e88
	if (!cr6.eq) goto loc_83779E88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83779EAC;
	sub_8259CC28(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-9312
	ctx.r8.s64 = ctx.r10.s64 + -9312;
	// lis r7,-31770
	ctx.r7.s64 = -2082078720;
	// addi r6,r7,31676
	ctx.r6.s64 = ctx.r7.s64 + 31676;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83779ED0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83779ed0
	if (!cr6.eq) goto loc_83779ED0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x83779EF4;
	sub_825A1EB8(ctx, base);
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

__attribute__((alias("__imp__sub_83779F10"))) PPC_WEAK_FUNC(sub_83779F10);
PPC_FUNC_IMPL(__imp__sub_83779F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83779F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,31
	cr6.compare<int32_t>(ctx.r5.s32, 31, xer);
	// blt cr6,0x83779f50
	if (cr6.lt) goto loc_83779F50;
	// cmpwi cr6,r5,32
	cr6.compare<int32_t>(ctx.r5.s32, 32, xer);
	// bgt cr6,0x83779f50
	if (cr6.gt) goto loc_83779F50;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31392
	ctx.r9.s64 = ctx.r11.s64 + 31392;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x837b0c10
	ctx.lr = 0x83779F44;
	sub_837B0C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83779F50:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(ctx.r11.u32, 27, xer);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bgt cr6,0x8377a0f0
	if (cr6.gt) goto loc_8377A0F0;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24696
	ctx.r12.s64 = ctx.r12.s64 + -24696;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83779FF8;
	case 1:
		goto loc_83779FF8;
	case 2:
		goto loc_8377A0F0;
	case 3:
		goto loc_8377A0F0;
	case 4:
		goto loc_83779FF8;
	case 5:
		goto loc_83779FF8;
	case 6:
		goto loc_83779FF8;
	case 7:
		goto loc_8377A0F0;
	case 8:
		goto loc_8377A0F0;
	case 9:
		goto loc_8377A0F0;
	case 10:
		goto loc_8377A0F0;
	case 11:
		goto loc_8377A0F0;
	case 12:
		goto loc_8377A0F0;
	case 13:
		goto loc_8377A0F0;
	case 14:
		goto loc_8377A0F0;
	case 15:
		goto loc_8377A0F0;
	case 16:
		goto loc_8377A0F0;
	case 17:
		goto loc_8377A0F0;
	case 18:
		goto loc_8377A0F0;
	case 19:
		goto loc_8377A074;
	case 20:
		goto loc_8377A0F0;
	case 21:
		goto loc_8377A0F0;
	case 22:
		goto loc_8377A0A0;
	case 23:
		goto loc_8377A0C8;
	case 24:
		goto loc_8377A024;
	case 25:
		goto loc_8377A024;
	case 26:
		goto loc_8377A04C;
	case 27:
		goto loc_8377A04C;
	default:
		return;
	}
	// lwz r27,-24584(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24584);
	// lwz r27,-24584(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24584);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24584(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24584);
	// lwz r27,-24584(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24584);
	// lwz r27,-24584(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24584);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24460(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24460);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24336(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24336);
	// lwz r27,-24416(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24416);
	// lwz r27,-24376(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24376);
	// lwz r27,-24540(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24540);
	// lwz r27,-24540(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24540);
	// lwz r27,-24500(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24500);
	// lwz r27,-24500(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -24500);
loc_83779FF8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83779950
	ctx.lr = 0x8377A004;
	sub_83779950(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A01C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x8377a114
	goto loc_8377A114;
loc_8377A024:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83779a28
	ctx.lr = 0x8377A02C;
	sub_83779A28(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A044;
	sub_8259CB28(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x8377a114
	goto loc_8377A114;
loc_8377A04C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83779ac0
	ctx.lr = 0x8377A054;
	sub_83779AC0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A06C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8377a114
	goto loc_8377A114;
loc_8377A074:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83779b58
	ctx.lr = 0x8377A080;
	sub_83779B58(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A098;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8377a114
	goto loc_8377A114;
loc_8377A0A0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83779d90
	ctx.lr = 0x8377A0A8;
	sub_83779D90(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A0C0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x8377a114
	goto loc_8377A114;
loc_8377A0C8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83779e48
	ctx.lr = 0x8377A0D0;
	sub_83779E48(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A0E8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x8377a114
	goto loc_8377A114;
loc_8377A0F0:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83779950
	ctx.lr = 0x8377A0F8;
	sub_83779950(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8377A110;
	sub_8259CB28(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
loc_8377A114:
	// bl 0x8387e8e0
	ctx.lr = 0x8377A118;
	sub_8387E8E0(ctx, base);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8377A138;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8377a158
	if (cr6.lt) goto loc_8377A158;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377A158;
	sub_825952B8(ctx, base);
loc_8377A158:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377A164"))) PPC_WEAK_FUNC(sub_8377A164);
PPC_FUNC_IMPL(__imp__sub_8377A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377A168"))) PPC_WEAK_FUNC(sub_8377A168);
PPC_FUNC_IMPL(__imp__sub_8377A168) {
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
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83779f10
	ctx.lr = 0x8377A190;
	sub_83779F10(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b142a0
	ctx.lr = 0x8377A19C;
	sub_82B142A0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r11,-9484
	ctx.r5.s64 = ctx.r11.s64 + -9484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573118
	ctx.lr = 0x8377A1B4;
	sub_82573118(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8377A1BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8377a1bc
	if (!cr6.eq) goto loc_8377A1BC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8377A1E4;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8377A200"))) PPC_WEAK_FUNC(sub_8377A200);
PPC_FUNC_IMPL(__imp__sub_8377A200) {
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
	// bl 0x83779f10
	ctx.lr = 0x8377A218;
	sub_83779F10(ctx, base);
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

__attribute__((alias("__imp__sub_8377A230"))) PPC_WEAK_FUNC(sub_8377A230);
PPC_FUNC_IMPL(__imp__sub_8377A230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377A238;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377a2b0
	if (cr6.eq) goto loc_8377A2B0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8377a168
	ctx.lr = 0x8377A25C;
	sub_8377A168(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x8377a270
	if (!cr6.lt) goto loc_8377A270;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_8377A270:
	// bl 0x83816968
	ctx.lr = 0x8377A274;
	sub_83816968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83816378
	ctx.lr = 0x8377A27C;
	sub_83816378(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8377a2a0
	if (cr6.lt) goto loc_8377A2A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377A2A0;
	sub_825952B8(ctx, base);
loc_8377A2A0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8377A2B0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377a2c4
	if (cr6.eq) goto loc_8377A2C4;
	// bl 0x833bbd78
	ctx.lr = 0x8377A2C0;
	sub_833BBD78(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_8377A2C4:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8377a2f8
	if (cr6.eq) goto loc_8377A2F8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8377A2D8;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8377a2f4
	if (cr6.gt) goto loc_8377A2F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377A2F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377A2F4:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_8377A2F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x8377a310
	if (!cr6.eq) goto loc_8377A310;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,-19524(r10)
	PPC_STORE_U8(ctx.r10.u32 + -19524, ctx.r29.u8);
loc_8377A310:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377A31C"))) PPC_WEAK_FUNC(sub_8377A31C);
PPC_FUNC_IMPL(__imp__sub_8377A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377A320"))) PPC_WEAK_FUNC(sub_8377A320);
PPC_FUNC_IMPL(__imp__sub_8377A320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377A328;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,31372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31372);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
loc_8377A358:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377a358
	if (!cr6.eq) goto loc_8377A358;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8377A37C;
	sub_8259CC28(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,31392
	ctx.r8.s64 = ctx.r10.s64 + 31392;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8377A390:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377a390
	if (!cr6.eq) goto loc_8377A390;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8377A3B4;
	sub_825A1EB8(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b142a0
	ctx.lr = 0x8377A3C0;
	sub_82B142A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83779f10
	ctx.lr = 0x8377A3D0;
	sub_83779F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8377A3E4;
	sub_825A1DA8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8377a404
	if (cr6.lt) goto loc_8377A404;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377A404;
	sub_825952B8(ctx, base);
loc_8377A404:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lwz r4,31376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31376);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8377A41C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377a41c
	if (!cr6.eq) goto loc_8377A41C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8377A440;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377A44C"))) PPC_WEAK_FUNC(sub_8377A44C);
PPC_FUNC_IMPL(__imp__sub_8377A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377A450"))) PPC_WEAK_FUNC(sub_8377A450);
PPC_FUNC_IMPL(__imp__sub_8377A450) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8377a230
	ctx.lr = 0x8377A46C;
	sub_8377A230(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r10,-19524(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19524);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377a48c
	if (cr6.eq) goto loc_8377A48C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8377a550
	goto loc_8377A550;
loc_8377A48C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,-19524(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19524, ctx.r10.u8);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// beq cr6,0x8377a4d4
	if (cr6.eq) goto loc_8377A4D4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x8377A4B0;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x8377a4cc
	if (cr6.gt) goto loc_8377A4CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377A4CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377A4CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8377A4D4:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8377A4EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377a4fc
	if (cr6.eq) goto loc_8377A4FC;
	// bl 0x83779850
	ctx.lr = 0x8377A4F8;
	sub_83779850(ctx, base);
	// b 0x8377a500
	goto loc_8377A500;
loc_8377A4FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8377A500:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377a550
	if (cr6.eq) goto loc_8377A550;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8377a320
	ctx.lr = 0x8377A51C;
	sub_8377A320(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8377a530
	if (!cr6.lt) goto loc_8377A530;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8377A530:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x833bca80
	ctx.lr = 0x8377A540;
	sub_833BCA80(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377A54C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8377A550:
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

__attribute__((alias("__imp__sub_8377A568"))) PPC_WEAK_FUNC(sub_8377A568);
PPC_FUNC_IMPL(__imp__sub_8377A568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8377A570;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8377a6c4
	if (cr6.eq) goto loc_8377A6C4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8377a5a8
	if (cr6.eq) goto loc_8377A5A8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8377a6dc
	if (!cr6.eq) goto loc_8377A6DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377A5A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377a5cc
	if (cr6.eq) goto loc_8377A5CC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377a5cc
	if (cr6.eq) goto loc_8377A5CC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r26,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8377A5CC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377a6dc
	if (cr6.eq) goto loc_8377A6DC;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377a690
	if (!cr6.eq) goto loc_8377A690;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,-19528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19528);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,-19528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19528);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x8377a608
	if (cr6.lt) goto loc_8377A608;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8377A608:
	// stw r10,-19528(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19528, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8377a168
	ctx.lr = 0x8377A618;
	sub_8377A168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837798b0
	ctx.lr = 0x8377A620;
	sub_837798B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779900
	ctx.lr = 0x8377A62C;
	sub_83779900(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8377a644
	if (!cr6.lt) goto loc_8377A644;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_8377A644:
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83816968
	ctx.lr = 0x8377A64C;
	sub_83816968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// lfs f3,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// clrlwi r7,r28,16
	ctx.r7.u64 = ctx.r28.u32 & 0xFFFF;
	// lfs f4,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x83816550
	ctx.lr = 0x8377A680;
	sub_83816550(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// bl 0x8387e8e0
	ctx.lr = 0x8377A690;
	sub_8387E8E0(ctx, base);
loc_8377A690:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377a6a4
	if (cr6.eq) goto loc_8377A6A4;
	// bl 0x82572f50
	ctx.lr = 0x8377A6A0;
	sub_82572F50(ctx, base);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_8377A6A4:
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r27,-19524(r10)
	PPC_STORE_U8(ctx.r10.u32 + -19524, ctx.r27.u8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377A6C4:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lbz r10,-19524(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -19524);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377a6dc
	if (!cr6.eq) goto loc_8377A6DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377a450
	ctx.lr = 0x8377A6DC;
	sub_8377A450(ctx, base);
loc_8377A6DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377A6E8"))) PPC_WEAK_FUNC(sub_8377A6E8);
PPC_FUNC_IMPL(__imp__sub_8377A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377A6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,31368(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31368);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8377A720:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377a720
	if (!cr6.eq) goto loc_8377A720;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8377A744;
	sub_8259CC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8377a320
	ctx.lr = 0x8377A754;
	sub_8377A320(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x8377A768;
	sub_825A1DA8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8377a788
	if (cr6.lt) goto loc_8377A788;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377A788;
	sub_825952B8(ctx, base);
loc_8377A788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377A794"))) PPC_WEAK_FUNC(sub_8377A794);
PPC_FUNC_IMPL(__imp__sub_8377A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377A798"))) PPC_WEAK_FUNC(sub_8377A798);
PPC_FUNC_IMPL(__imp__sub_8377A798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8377A7A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-9280
	ctx.r10.s64 = ctx.r11.s64 + -9280;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// bl 0x8377a6e8
	ctx.lr = 0x8377A7DC;
	sub_8377A6E8(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8377a7ec
	if (cr6.lt) goto loc_8377A7EC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8377A7EC:
	// bl 0x83104018
	ctx.lr = 0x8377A7F0;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x8377a81c
	if (cr6.lt) goto loc_8377A81C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8377A81C;
	sub_825952B8(ctx, base);
loc_8377A81C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8377a83c
	if (cr6.eq) goto loc_8377A83C;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8377A83C:
	// lwz r11,-19520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19520);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-19520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19520, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377A850"))) PPC_WEAK_FUNC(sub_8377A850);
PPC_FUNC_IMPL(__imp__sub_8377A850) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-9280
	ctx.r10.s64 = ctx.r11.s64 + -9280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8377a230
	ctx.lr = 0x8377A87C;
	sub_8377A230(ctx, base);
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// lwz r11,-19520(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19520);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-19520(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19520, ctx.r11.u32);
	// bgt 0x8377a89c
	if (cr0.gt) goto loc_8377A89C;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-19524(r10)
	PPC_STORE_U8(ctx.r10.u32 + -19524, ctx.r11.u8);
loc_8377A89C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377a8b4
	if (cr6.eq) goto loc_8377A8B4;
	// bl 0x82416268
	ctx.lr = 0x8377A8B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8377A8B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377A8CC"))) PPC_WEAK_FUNC(sub_8377A8CC);
PPC_FUNC_IMPL(__imp__sub_8377A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377A8D0"))) PPC_WEAK_FUNC(sub_8377A8D0);
PPC_FUNC_IMPL(__imp__sub_8377A8D0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,33
	cr6.compare<int32_t>(ctx.r4.s32, 33, xer);
	// blt cr6,0x8377a8fc
	if (cr6.lt) goto loc_8377A8FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377A8FC:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// bgt cr6,0x8377a934
	if (cr6.gt) goto loc_8377A934;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8377a92c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A92C;
	// bdzf 4*cr6+eq,0x8377a934
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A934;
	// bdzf 4*cr6+eq,0x8377a934
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A934;
	// bdzf 4*cr6+eq,0x8377a934
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A934;
	// bdzf 4*cr6+eq,0x8377a92c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A92C;
	// bdzf 4*cr6+eq,0x8377a92c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A92C;
	// bdzf 4*cr6+eq,0x8377a92c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377A92C;
	// bne cr6,0x8377a92c
	if (!cr6.eq) goto loc_8377A92C;
loc_8377A92C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8377a938
	goto loc_8377A938;
loc_8377A934:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377A938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377a9a0
	if (cr6.eq) goto loc_8377A9A0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bne cr6,0x8377a97c
	if (!cr6.eq) goto loc_8377A97C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8377A964;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377aa70
	if (cr6.eq) goto loc_8377AA70;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8377a798
	ctx.lr = 0x8377A978;
	sub_8377A798(ctx, base);
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377A97C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8377A988;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377aa70
	if (cr6.eq) goto loc_8377AA70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// bl 0x8377a798
	ctx.lr = 0x8377A99C;
	sub_8377A798(ctx, base);
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377A9A0:
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(ctx.r31.s32, 24, xer);
	// beq cr6,0x8377aa14
	if (cr6.eq) goto loc_8377AA14;
	// ble cr6,0x8377a9e4
	if (!cr6.gt) goto loc_8377A9E4;
	// cmpwi cr6,r31,30
	cr6.compare<int32_t>(ctx.r31.s32, 30, xer);
	// bgt cr6,0x8377a9e4
	if (cr6.gt) goto loc_8377A9E4;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8377A9CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377aa70
	if (cr6.eq) goto loc_8377AA70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8377a798
	ctx.lr = 0x8377A9E0;
	sub_8377A798(ctx, base);
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377A9E4:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x8377A9FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377aa70
	if (cr6.eq) goto loc_8377AA70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8377a798
	ctx.lr = 0x8377AA10;
	sub_8377A798(ctx, base);
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377AA14:
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bne cr6,0x8377aa4c
	if (!cr6.eq) goto loc_8377AA4C;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x8377AA34;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377aa70
	if (cr6.eq) goto loc_8377AA70;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8377a798
	ctx.lr = 0x8377AA48;
	sub_8377A798(ctx, base);
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377AA4C:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x8377AA58;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377aa70
	if (cr6.eq) goto loc_8377AA70;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8377a798
	ctx.lr = 0x8377AA6C;
	sub_8377A798(ctx, base);
	// b 0x8377aa74
	goto loc_8377AA74;
loc_8377AA70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8377AA74:
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

__attribute__((alias("__imp__sub_8377AA8C"))) PPC_WEAK_FUNC(sub_8377AA8C);
PPC_FUNC_IMPL(__imp__sub_8377AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AA90"))) PPC_WEAK_FUNC(sub_8377AA90);
PPC_FUNC_IMPL(__imp__sub_8377AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8960
	ctx.r9.s64 = ctx.r11.s64 + -8960;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AAA4"))) PPC_WEAK_FUNC(sub_8377AAA4);
PPC_FUNC_IMPL(__imp__sub_8377AAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AAA8"))) PPC_WEAK_FUNC(sub_8377AAA8);
PPC_FUNC_IMPL(__imp__sub_8377AAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8948
	ctx.r9.s64 = ctx.r11.s64 + -8948;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AABC"))) PPC_WEAK_FUNC(sub_8377AABC);
PPC_FUNC_IMPL(__imp__sub_8377AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AAC0"))) PPC_WEAK_FUNC(sub_8377AAC0);
PPC_FUNC_IMPL(__imp__sub_8377AAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8936
	ctx.r9.s64 = ctx.r11.s64 + -8936;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AAD4"))) PPC_WEAK_FUNC(sub_8377AAD4);
PPC_FUNC_IMPL(__imp__sub_8377AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AAD8"))) PPC_WEAK_FUNC(sub_8377AAD8);
PPC_FUNC_IMPL(__imp__sub_8377AAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8932
	ctx.r9.s64 = ctx.r11.s64 + -8932;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AAEC"))) PPC_WEAK_FUNC(sub_8377AAEC);
PPC_FUNC_IMPL(__imp__sub_8377AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AAF0"))) PPC_WEAK_FUNC(sub_8377AAF0);
PPC_FUNC_IMPL(__imp__sub_8377AAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8880
	ctx.r9.s64 = ctx.r11.s64 + -8880;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB04"))) PPC_WEAK_FUNC(sub_8377AB04);
PPC_FUNC_IMPL(__imp__sub_8377AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AB08"))) PPC_WEAK_FUNC(sub_8377AB08);
PPC_FUNC_IMPL(__imp__sub_8377AB08) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB10"))) PPC_WEAK_FUNC(sub_8377AB10);
PPC_FUNC_IMPL(__imp__sub_8377AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-8872
	ctx.r9.s64 = ctx.r11.s64 + -8872;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB24"))) PPC_WEAK_FUNC(sub_8377AB24);
PPC_FUNC_IMPL(__imp__sub_8377AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AB28"))) PPC_WEAK_FUNC(sub_8377AB28);
PPC_FUNC_IMPL(__imp__sub_8377AB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-8656
	ctx.r9.s64 = ctx.r11.s64 + -8656;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB3C"))) PPC_WEAK_FUNC(sub_8377AB3C);
PPC_FUNC_IMPL(__imp__sub_8377AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AB40"))) PPC_WEAK_FUNC(sub_8377AB40);
PPC_FUNC_IMPL(__imp__sub_8377AB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-8688
	ctx.r9.s64 = ctx.r11.s64 + -8688;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB54"))) PPC_WEAK_FUNC(sub_8377AB54);
PPC_FUNC_IMPL(__imp__sub_8377AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AB58"))) PPC_WEAK_FUNC(sub_8377AB58);
PPC_FUNC_IMPL(__imp__sub_8377AB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-8432
	ctx.r9.s64 = ctx.r11.s64 + -8432;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB6C"))) PPC_WEAK_FUNC(sub_8377AB6C);
PPC_FUNC_IMPL(__imp__sub_8377AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AB70"))) PPC_WEAK_FUNC(sub_8377AB70);
PPC_FUNC_IMPL(__imp__sub_8377AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-8424
	ctx.r9.s64 = ctx.r11.s64 + -8424;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB84"))) PPC_WEAK_FUNC(sub_8377AB84);
PPC_FUNC_IMPL(__imp__sub_8377AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AB88"))) PPC_WEAK_FUNC(sub_8377AB88);
PPC_FUNC_IMPL(__imp__sub_8377AB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-8368
	ctx.r9.s64 = ctx.r11.s64 + -8368;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AB9C"))) PPC_WEAK_FUNC(sub_8377AB9C);
PPC_FUNC_IMPL(__imp__sub_8377AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377ABA0"))) PPC_WEAK_FUNC(sub_8377ABA0);
PPC_FUNC_IMPL(__imp__sub_8377ABA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-8872
	ctx.r9.s64 = ctx.r11.s64 + -8872;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8377ABB0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x8377abd4
	if (cr6.eq) goto loc_8377ABD4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// blt cr6,0x8377abb0
	if (cr6.lt) goto loc_8377ABB0;
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
loc_8377ABD4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377ABE4"))) PPC_WEAK_FUNC(sub_8377ABE4);
PPC_FUNC_IMPL(__imp__sub_8377ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377ABE8"))) PPC_WEAK_FUNC(sub_8377ABE8);
PPC_FUNC_IMPL(__imp__sub_8377ABE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-8688
	ctx.r9.s64 = ctx.r11.s64 + -8688;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8377ABF8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x8377ac1c
	if (cr6.eq) goto loc_8377AC1C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8377abf8
	if (cr6.lt) goto loc_8377ABF8;
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
loc_8377AC1C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AC2C"))) PPC_WEAK_FUNC(sub_8377AC2C);
PPC_FUNC_IMPL(__imp__sub_8377AC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AC30"))) PPC_WEAK_FUNC(sub_8377AC30);
PPC_FUNC_IMPL(__imp__sub_8377AC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-8656
	ctx.r9.s64 = ctx.r11.s64 + -8656;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8377AC40:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x8377ac64
	if (cr6.eq) goto loc_8377AC64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// blt cr6,0x8377ac40
	if (cr6.lt) goto loc_8377AC40;
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
loc_8377AC64:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377AC74"))) PPC_WEAK_FUNC(sub_8377AC74);
PPC_FUNC_IMPL(__imp__sub_8377AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377AC78"))) PPC_WEAK_FUNC(sub_8377AC78);
PPC_FUNC_IMPL(__imp__sub_8377AC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-8424
	ctx.r9.s64 = ctx.r11.s64 + -8424;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8377AC88:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x8377acac
	if (cr6.eq) goto loc_8377ACAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x8377ac88
	if (cr6.lt) goto loc_8377AC88;
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
loc_8377ACAC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377ACBC"))) PPC_WEAK_FUNC(sub_8377ACBC);
PPC_FUNC_IMPL(__imp__sub_8377ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377ACC0"))) PPC_WEAK_FUNC(sub_8377ACC0);
PPC_FUNC_IMPL(__imp__sub_8377ACC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377ACC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830706a8
	ctx.lr = 0x8377ACE4;
	sub_830706A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377acfc
	if (!cr6.eq) goto loc_8377ACFC;
loc_8377ACF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377ACFC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377acf0
	if (cr6.eq) goto loc_8377ACF0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377acf0
	if (cr6.eq) goto loc_8377ACF0;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// blt cr6,0x8377acf0
	if (cr6.lt) goto loc_8377ACF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377AD30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ad48
	if (cr6.eq) goto loc_8377AD48;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8377AD48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377AD50"))) PPC_WEAK_FUNC(sub_8377AD50);
PPC_FUNC_IMPL(__imp__sub_8377AD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377AD58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8377ae80
	if (cr6.eq) goto loc_8377AE80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8377AD78:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83070638
	ctx.lr = 0x8377AD88;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377addc
	if (cr6.eq) goto loc_8377ADDC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377addc
	if (cr6.eq) goto loc_8377ADDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377ADB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377addc
	if (cr6.eq) goto loc_8377ADDC;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377addc
	if (cr6.lt) goto loc_8377ADDC;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377ade0
	if (!cr6.gt) goto loc_8377ADE0;
loc_8377ADDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377ADE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ae70
	if (cr6.eq) goto loc_8377AE70;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83070638
	ctx.lr = 0x8377ADFC;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ae50
	if (cr6.eq) goto loc_8377AE50;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ae50
	if (cr6.eq) goto loc_8377AE50;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377AE24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ae50
	if (cr6.eq) goto loc_8377AE50;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377ae50
	if (cr6.lt) goto loc_8377AE50;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377ae54
	if (!cr6.gt) goto loc_8377AE54;
loc_8377AE50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377AE54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ae70
	if (cr6.eq) goto loc_8377AE70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377ae8c
	if (!cr6.eq) goto loc_8377AE8C;
loc_8377AE70:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377ad78
	if (cr6.lt) goto loc_8377AD78;
loc_8377AE80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377AE8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377AE98"))) PPC_WEAK_FUNC(sub_8377AE98);
PPC_FUNC_IMPL(__imp__sub_8377AE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377AEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8377afc8
	if (cr6.eq) goto loc_8377AFC8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8377AEC0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83070638
	ctx.lr = 0x8377AED0;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377af24
	if (cr6.eq) goto loc_8377AF24;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377af24
	if (cr6.eq) goto loc_8377AF24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377AEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377af24
	if (cr6.eq) goto loc_8377AF24;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377af24
	if (cr6.lt) goto loc_8377AF24;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377af28
	if (!cr6.gt) goto loc_8377AF28;
loc_8377AF24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377AF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377afb8
	if (cr6.eq) goto loc_8377AFB8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83070638
	ctx.lr = 0x8377AF44;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377af98
	if (cr6.eq) goto loc_8377AF98;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377af98
	if (cr6.eq) goto loc_8377AF98;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377AF6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377af98
	if (cr6.eq) goto loc_8377AF98;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377af98
	if (cr6.lt) goto loc_8377AF98;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377af9c
	if (!cr6.gt) goto loc_8377AF9C;
loc_8377AF98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377AF9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377afb8
	if (cr6.eq) goto loc_8377AFB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377afd4
	if (!cr6.eq) goto loc_8377AFD4;
loc_8377AFB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377aec0
	if (cr6.lt) goto loc_8377AEC0;
loc_8377AFC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377AFD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377AFE0"))) PPC_WEAK_FUNC(sub_8377AFE0);
PPC_FUNC_IMPL(__imp__sub_8377AFE0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377B00C;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b04c
	if (cr6.eq) goto loc_8377B04C;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377B028;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b04c
	if (cr6.eq) goto loc_8377B04C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8377b04c
	if (cr6.eq) goto loc_8377B04C;
loc_8377B044:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8377b13c
	goto loc_8377B13C;
loc_8377B04C:
	// li r6,107
	ctx.r6.s64 = 107;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377acc0
	ctx.lr = 0x8377B060;
	sub_8377ACC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b0c0
	if (cr6.eq) goto loc_8377B0C0;
	// li r6,107
	ctx.r6.s64 = 107;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377acc0
	ctx.lr = 0x8377B080;
	sub_8377ACC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b0c0
	if (cr6.eq) goto loc_8377B0C0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8377B094:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377b0b8
	if (cr6.eq) goto loc_8377B0B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377b094
	if (cr6.eq) goto loc_8377B094;
loc_8377B0B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8377b044
	if (!cr6.eq) goto loc_8377B044;
loc_8377B0C0:
	// li r6,106
	ctx.r6.s64 = 106;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377acc0
	ctx.lr = 0x8377B0D4;
	sub_8377ACC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b138
	if (cr6.eq) goto loc_8377B138;
	// li r6,106
	ctx.r6.s64 = 106;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377acc0
	ctx.lr = 0x8377B0F4;
	sub_8377ACC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b138
	if (cr6.eq) goto loc_8377B138;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
loc_8377B108:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377b12c
	if (cr6.eq) goto loc_8377B12C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377b108
	if (cr6.eq) goto loc_8377B108;
loc_8377B12C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8377b13c
	if (!cr6.eq) goto loc_8377B13C;
loc_8377B138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8377B13C:
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

__attribute__((alias("__imp__sub_8377B154"))) PPC_WEAK_FUNC(sub_8377B154);
PPC_FUNC_IMPL(__imp__sub_8377B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377B158"))) PPC_WEAK_FUNC(sub_8377B158);
PPC_FUNC_IMPL(__imp__sub_8377B158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r11,-8948
	ctx.r5.s64 = ctx.r11.s64 + -8948;
	// b 0x8377ad50
	sub_8377AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B168"))) PPC_WEAK_FUNC(sub_8377B168);
PPC_FUNC_IMPL(__imp__sub_8377B168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-8936
	ctx.r5.s64 = ctx.r11.s64 + -8936;
	// b 0x8377ad50
	sub_8377AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B178"))) PPC_WEAK_FUNC(sub_8377B178);
PPC_FUNC_IMPL(__imp__sub_8377B178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r5,r11,-8932
	ctx.r5.s64 = ctx.r11.s64 + -8932;
	// b 0x8377ad50
	sub_8377AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B188"))) PPC_WEAK_FUNC(sub_8377B188);
PPC_FUNC_IMPL(__imp__sub_8377B188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r5,r11,-8872
	ctx.r5.s64 = ctx.r11.s64 + -8872;
	// b 0x8377ae98
	sub_8377AE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B198"))) PPC_WEAK_FUNC(sub_8377B198);
PPC_FUNC_IMPL(__imp__sub_8377B198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r5,r11,-8656
	ctx.r5.s64 = ctx.r11.s64 + -8656;
	// b 0x8377ae98
	sub_8377AE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B1A8"))) PPC_WEAK_FUNC(sub_8377B1A8);
PPC_FUNC_IMPL(__imp__sub_8377B1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-8432
	ctx.r5.s64 = ctx.r11.s64 + -8432;
	// b 0x8377ae98
	sub_8377AE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B1B8"))) PPC_WEAK_FUNC(sub_8377B1B8);
PPC_FUNC_IMPL(__imp__sub_8377B1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r11,-8424
	ctx.r5.s64 = ctx.r11.s64 + -8424;
	// b 0x8377ae98
	sub_8377AE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B1C8"))) PPC_WEAK_FUNC(sub_8377B1C8);
PPC_FUNC_IMPL(__imp__sub_8377B1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r11,-8368
	ctx.r5.s64 = ctx.r11.s64 + -8368;
	// b 0x8377ad50
	sub_8377AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B1D8"))) PPC_WEAK_FUNC(sub_8377B1D8);
PPC_FUNC_IMPL(__imp__sub_8377B1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,-8880
	ctx.r5.s64 = ctx.r11.s64 + -8880;
	// b 0x8377ad50
	sub_8377AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B1E8"))) PPC_WEAK_FUNC(sub_8377B1E8);
PPC_FUNC_IMPL(__imp__sub_8377B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377B1F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8377B208:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83070638
	ctx.lr = 0x8377B21C;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b244
	if (cr6.eq) goto loc_8377B244;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b244
	if (cr6.eq) goto loc_8377B244;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377B244;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377B244:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377b26c
	if (!cr6.eq) goto loc_8377B26C;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// blt cr6,0x8377b208
	if (cr6.lt) goto loc_8377B208;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377B26C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B278"))) PPC_WEAK_FUNC(sub_8377B278);
PPC_FUNC_IMPL(__imp__sub_8377B278) {
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
	ctx.lr = 0x8377B280;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8377B2A0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83070638
	ctx.lr = 0x8377B2B4;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b2f8
	if (cr6.eq) goto loc_8377B2F8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377b2f8
	if (cr6.eq) goto loc_8377B2F8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377b2f8
	if (cr6.lt) goto loc_8377B2F8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377b2f8
	if (cr6.gt) goto loc_8377B2F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377B2F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377B2F8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377b2a0
	if (!cr0.eq) goto loc_8377B2A0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B30C"))) PPC_WEAK_FUNC(sub_8377B30C);
PPC_FUNC_IMPL(__imp__sub_8377B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377B310"))) PPC_WEAK_FUNC(sub_8377B310);
PPC_FUNC_IMPL(__imp__sub_8377B310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377B318;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-9000
	ctx.r31.s64 = ctx.r11.s64 + -9000;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8377B330:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83070638
	ctx.lr = 0x8377B344;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b36c
	if (cr6.eq) goto loc_8377B36C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b36c
	if (cr6.eq) goto loc_8377B36C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377B36C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377B36C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377b398
	if (!cr6.eq) goto loc_8377B398;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x8377b330
	if (cr6.lt) goto loc_8377B330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377b1e8
	ctx.lr = 0x8377B390;
	sub_8377B1E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377B398:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B3A4"))) PPC_WEAK_FUNC(sub_8377B3A4);
PPC_FUNC_IMPL(__imp__sub_8377B3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377B3A8"))) PPC_WEAK_FUNC(sub_8377B3A8);
PPC_FUNC_IMPL(__imp__sub_8377B3A8) {
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
	ctx.lr = 0x8377B3B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,-9000
	ctx.r31.s64 = ctx.r11.s64 + -9000;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r29,6
	ctx.r29.s64 = 6;
loc_8377B3D4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83070638
	ctx.lr = 0x8377B3E8;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377b42c
	if (cr6.eq) goto loc_8377B42C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377b42c
	if (cr6.eq) goto loc_8377B42C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377b42c
	if (cr6.lt) goto loc_8377B42C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377b42c
	if (cr6.gt) goto loc_8377B42C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377B42C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377B42C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377b3d4
	if (!cr0.eq) goto loc_8377B3D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377b278
	ctx.lr = 0x8377B444;
	sub_8377B278(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377B44C"))) PPC_WEAK_FUNC(sub_8377B44C);
PPC_FUNC_IMPL(__imp__sub_8377B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377B450"))) PPC_WEAK_FUNC(sub_8377B450);
PPC_FUNC_IMPL(__imp__sub_8377B450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r31.u32);
	// li r30,17
	ctx.r30.s64 = 17;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r5,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r5.u32);
	// stw r30,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r30.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r31,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r31.u32);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r31,28
	ctx.r31.s64 = 28;
	// stw r5,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// stw r30,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r30.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r31,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r31.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r31,8
	ctx.r31.s64 = 8;
	// stw r5,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// stw r30,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r30.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r31,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r31.u32);
	// li r30,30
	ctx.r30.s64 = 30;
	// li r31,31
	ctx.r31.s64 = 31;
	// stw r5,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r5.u32);
	// stw r30,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// li r31,7
	ctx.r31.s64 = 7;
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// stw r30,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r30.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r31.u32);
	// li r30,33
	ctx.r30.s64 = 33;
	// li r31,34
	ctx.r31.s64 = 34;
	// stw r5,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r5.u32);
	// stw r30,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r30.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// stw r31,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r31.u32);
	// li r30,19
	ctx.r30.s64 = 19;
	// li r31,20
	ctx.r31.s64 = 20;
	// stw r5,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r5.u32);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r30,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r30.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r31,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r31.u32);
	// li r5,37
	ctx.r5.s64 = 37;
	// stw r6,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r6.u32);
	// li r30,36
	ctx.r30.s64 = 36;
	// stw r9,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r9.u32);
	// li r31,38
	ctx.r31.s64 = 38;
	// stw r6,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r6.u32);
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// li r6,39
	ctx.r6.s64 = 39;
	// stw r9,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r30,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r30.u32);
	// stw r31,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r31.u32);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r6,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r6.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r5,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r9,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r9.u32);
	// li r3,27
	ctx.r3.s64 = 27;
	// stw r7,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r7.u32);
	// li r30,12
	ctx.r30.s64 = 12;
	// stw r8,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r11.u32);
	// li r6,41
	ctx.r6.s64 = 41;
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r30,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r30.u32);
	// li r9,42
	ctx.r9.s64 = 42;
	// stw r31,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r31.u32);
	// li r31,13
	ctx.r31.s64 = 13;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// li r10,43
	ctx.r10.s64 = 43;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r6,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r6.u32);
	// stw r5,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r5.u32);
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r9,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stw r31,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r31.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// li r31,47
	ctx.r31.s64 = 47;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r11,r1,-240
	ctx.r11.s64 = ctx.r1.s64 + -240;
	// stw r7,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r7.u32);
	// stw r5,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
	// stw r9,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r9.u32);
	// stw r31,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r31.u32);
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
loc_8377B5F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x8377b620
	if (cr6.eq) goto loc_8377B620;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// blt cr6,0x8377b5f8
	if (cr6.lt) goto loc_8377B5F8;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8377B620:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-236
	ctx.r10.s64 = ctx.r1.s64 + -236;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377B638"))) PPC_WEAK_FUNC(sub_8377B638);
PPC_FUNC_IMPL(__imp__sub_8377B638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,48
	ctx.r11.s64 = 48;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,49
	ctx.r8.s64 = 49;
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r11.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r9,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// li r3,51
	ctx.r3.s64 = 51;
	// stw r7,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r7.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r3,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r3.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r6,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r6.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r5,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// li r7,53
	ctx.r7.s64 = 53;
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// stw r8,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r8.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r7,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// li r11,55
	ctx.r11.s64 = 55;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r3.u32);
	// li r5,54
	ctx.r5.s64 = 54;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r6,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r6.u32);
	// li r8,56
	ctx.r8.s64 = 56;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r9.u32);
	// li r3,58
	ctx.r3.s64 = 58;
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// li r6,57
	ctx.r6.s64 = 57;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// li r9,59
	ctx.r9.s64 = 59;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r5,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r5.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
loc_8377B710:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x8377b730
	if (cr6.eq) goto loc_8377B730;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// blt cr6,0x8377b710
	if (cr6.lt) goto loc_8377B710;
	// blr 
	return;
loc_8377B730:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-108
	ctx.r10.s64 = ctx.r1.s64 + -108;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377B740"))) PPC_WEAK_FUNC(sub_8377B740);
PPC_FUNC_IMPL(__imp__sub_8377B740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,69
	ctx.r11.s64 = 69;
	// li r8,70
	ctx.r8.s64 = 70;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r8.u32);
	// stw r7,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r7.u32);
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r6,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r5,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r5.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r4,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r3,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r3.u32);
	// li r7,78
	ctx.r7.s64 = 78;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// stw r8,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r8.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r6,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r6.u32);
	// li r3,81
	ctx.r3.s64 = 81;
	// stw r5,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r5.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r4,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r4.u32);
	// li r8,82
	ctx.r8.s64 = 82;
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// stw r8,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// li r6,83
	ctx.r6.s64 = 83;
	// stw r7,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r7.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r6,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r6.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r5,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r5.u32);
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r4,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r4.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r3,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r3.u32);
	// li r7,88
	ctx.r7.s64 = 88;
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// stw r8,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r8.u32);
	// li r5,89
	ctx.r5.s64 = 89;
	// stw r7,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r7.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r6,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r6.u32);
	// li r3,91
	ctx.r3.s64 = 91;
	// stw r5,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r5.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r4,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r4.u32);
	// li r8,92
	ctx.r8.s64 = 92;
	// stw r3,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r3.u32);
	// li r7,23
	ctx.r7.s64 = 23;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// li r6,94
	ctx.r6.s64 = 94;
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r7,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r6.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// stw r5,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r5.u32);
	// li r3,26
	ctx.r3.s64 = 26;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r4,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r4.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r3,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r3.u32);
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r6,27
	ctx.r6.s64 = 27;
	// stw r8,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r8.u32);
	// stw r7,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// li r5,73
	ctx.r5.s64 = 73;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r6,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r6.u32);
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// li r3,74
	ctx.r3.s64 = 74;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r4.u32);
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r3,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r3.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// li r6,90
	ctx.r6.s64 = 90;
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// li r4,79
	ctx.r4.s64 = 79;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r5,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r5.u32);
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r4,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r3,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r3.u32);
	// li r7,85
	ctx.r7.s64 = 85;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// li r5,86
	ctx.r5.s64 = 86;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r4.u32);
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
loc_8377B90C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8377b92c
	if (cr6.eq) goto loc_8377B92C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// blt cr6,0x8377b90c
	if (cr6.lt) goto loc_8377B90C;
	// blr 
	return;
loc_8377B92C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-220
	ctx.r10.s64 = ctx.r1.s64 + -220;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377B93C"))) PPC_WEAK_FUNC(sub_8377B93C);
PPC_FUNC_IMPL(__imp__sub_8377B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377B940"))) PPC_WEAK_FUNC(sub_8377B940);
PPC_FUNC_IMPL(__imp__sub_8377B940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,97
	ctx.r11.s64 = 97;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,98
	ctx.r8.s64 = 98;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// stw r9,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r9.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r8,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r3.u32);
	// li r6,99
	ctx.r6.s64 = 99;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r7.u32);
	// li r9,101
	ctx.r9.s64 = 101;
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// li r8,102
	ctx.r8.s64 = 102;
	// stw r5,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r5.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r9,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// li r6,103
	ctx.r6.s64 = 103;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r7,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r7.u32);
	// li r9,105
	ctx.r9.s64 = 105;
	// stw r6,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r6.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r5,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r5.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
loc_8377B9D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x8377b9f8
	if (cr6.eq) goto loc_8377B9F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// blt cr6,0x8377b9d8
	if (cr6.lt) goto loc_8377B9D8;
	// blr 
	return;
loc_8377B9F8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-76
	ctx.r10.s64 = ctx.r1.s64 + -76;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377BA08"))) PPC_WEAK_FUNC(sub_8377BA08);
PPC_FUNC_IMPL(__imp__sub_8377BA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377BA10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8377bf08
	if (cr6.eq) goto loc_8377BF08;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8377bf08
	if (cr6.eq) goto loc_8377BF08;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r6,60
	cr6.compare<int32_t>(ctx.r6.s32, 60, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bgt cr6,0x8377bc70
	if (cr6.gt) goto loc_8377BC70;
	// cmpwi cr6,r6,48
	cr6.compare<int32_t>(ctx.r6.s32, 48, xer);
	// bge cr6,0x8377bc38
	if (!cr6.lt) goto loc_8377BC38;
	// cmplwi cr6,r6,20
	cr6.compare<uint32_t>(ctx.r6.u32, 20, xer);
	// bgt cr6,0x8377be34
	if (cr6.gt) goto loc_8377BE34;
	// lis r12,-31880
	ctx.r12.s64 = -2089287680;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17812
	ctx.r12.s64 = ctx.r12.s64 + -17812;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_8377BEFC;
	case 1:
		goto loc_8377BE34;
	case 2:
		goto loc_8377BE34;
	case 3:
		goto loc_8377BE34;
	case 4:
		goto loc_8377BE34;
	case 5:
		goto loc_8377BE34;
	case 6:
		goto loc_8377BE34;
	case 7:
		goto loc_8377BE34;
	case 8:
		goto loc_8377BE34;
	case 9:
		goto loc_8377BE34;
	case 10:
		goto loc_8377BE34;
	case 11:
		goto loc_8377BE34;
	case 12:
		goto loc_8377BAC0;
	case 13:
		goto loc_8377BC14;
	case 14:
		goto loc_8377BAD8;
	case 15:
		goto loc_8377BAF0;
	case 16:
		goto loc_8377BB2C;
	case 17:
		goto loc_8377BBBC;
	case 18:
		goto loc_8377BB64;
	case 19:
		goto loc_8377BB90;
	case 20:
		goto loc_8377BBF0;
	default:
		return;
	}
	// lwz r27,-16644(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16644);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-16844(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16844);
	// lwz r27,-17728(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17728);
	// lwz r27,-17388(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17388);
	// lwz r27,-17704(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17704);
	// lwz r27,-17680(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17680);
	// lwz r27,-17620(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17620);
	// lwz r27,-17476(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17476);
	// lwz r27,-17564(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17564);
	// lwz r27,-17520(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17520);
	// lwz r27,-17424(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17424);
loc_8377BAC0:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BAD8:
	// lhz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 188);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BAF0:
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BB08;
	sub_83120738(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,15
	ctx.r5.s64 = 15;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82a78580
	ctx.lr = 0x8377BB20;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BB2C:
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BB44;
	sub_83120738(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwimi r10,r9,21,6,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x3E00000) | (ctx.r10.u64 & 0xFFFFFFFFFC1FFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BB64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a66ef0
	ctx.lr = 0x8377BB70;
	sub_82A66EF0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8377BB84;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BB90:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a66ef0
	ctx.lr = 0x8377BB9C;
	sub_82A66EF0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8377BBB0;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BBBC:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BBD0;
	sub_83120738(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82a78580
	ctx.lr = 0x8377BBE4;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BBF0:
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82a78580
	ctx.lr = 0x8377BC08;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BC14:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// ori r4,r11,65535
	ctx.r4.u64 = ctx.r11.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82a78580
	ctx.lr = 0x8377BC2C;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BC38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8377b638
	ctx.lr = 0x8377BC44;
	sub_8377B638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a66ea0
	ctx.lr = 0x8377BC50;
	sub_82A66EA0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8377BC64;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BC70:
	// cmpwi cr6,r30,106
	cr6.compare<int32_t>(ctx.r30.s32, 106, xer);
	// bgt cr6,0x8377be2c
	if (cr6.gt) goto loc_8377BE2C;
	// beq cr6,0x8377be0c
	if (cr6.eq) goto loc_8377BE0C;
	// addi r11,r30,-61
	ctx.r11.s64 = ctx.r30.s64 + -61;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8377be34
	if (cr6.gt) goto loc_8377BE34;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8377bcd8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BCD8;
	// bdzf 4*cr6+eq,0x8377bd04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BD04;
	// bdzf 4*cr6+eq,0x8377bd30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BD30;
	// bdzf 4*cr6+eq,0x8377bd5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BD5C;
	// bdzf 4*cr6+eq,0x8377bd88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BD88;
	// bdzf 4*cr6+eq,0x8377bdb4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BDB4;
	// bne cr6,0x8377bde0
	if (!cr6.eq) goto loc_8377BDE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BCBC;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BCCC;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BCD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BCE8;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BCF8;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BD04:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BD14;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BD24;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BD30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BD40;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BD50;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BD5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BD6C;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BD7C;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BD88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BD98;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BDA8;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BDB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BDC4;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BDD4;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BDE0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8377BDF0;
	sub_83120738(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x8377BE00;
	sub_82A78580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BE0C:
	// li r6,106
	ctx.r6.s64 = 106;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764408
	ctx.lr = 0x8377BE20;
	sub_83764408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BE2C:
	// cmpwi cr6,r30,107
	cr6.compare<int32_t>(ctx.r30.s32, 107, xer);
	// beq cr6,0x8377bee4
	if (cr6.eq) goto loc_8377BEE4;
loc_8377BE34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8377b450
	ctx.lr = 0x8377BE40;
	sub_8377B450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,27
	cr6.compare<int32_t>(ctx.r3.s32, 27, xer);
	// beq cr6,0x8377be70
	if (cr6.eq) goto loc_8377BE70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be51a8
	ctx.lr = 0x8377BE54;
	sub_82BE51A8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8377BE68;
	sub_82A78580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BE70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8377b740
	ctx.lr = 0x8377BE78;
	sub_8377B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,28
	cr6.compare<int32_t>(ctx.r3.s32, 28, xer);
	// beq cr6,0x8377bea8
	if (cr6.eq) goto loc_8377BEA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82af5af0
	ctx.lr = 0x8377BE8C;
	sub_82AF5AF0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8377BEA0;
	sub_82A78580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BEA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8377b940
	ctx.lr = 0x8377BEB4;
	sub_8377B940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x8377befc
	if (cr6.eq) goto loc_8377BEFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83133c90
	ctx.lr = 0x8377BEC8;
	sub_83133C90(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8377BEDC;
	sub_82A78580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BEE4:
	// li r6,107
	ctx.r6.s64 = 107;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r29,102
	ctx.r4.s64 = ctx.r29.s64 + 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83764408
	ctx.lr = 0x8377BEF8;
	sub_83764408(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8377BEFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377BF08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377BF14"))) PPC_WEAK_FUNC(sub_8377BF14);
PPC_FUNC_IMPL(__imp__sub_8377BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377BF18"))) PPC_WEAK_FUNC(sub_8377BF18);
PPC_FUNC_IMPL(__imp__sub_8377BF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8377BF20;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8377c700
	if (cr6.eq) goto loc_8377C700;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8377c700
	if (cr6.eq) goto loc_8377C700;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r11,-8197
	ctx.r28.s64 = ctx.r11.s64 + -8197;
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// bl 0x837b0c10
	ctx.lr = 0x8377BF64;
	sub_837B0C10(ctx, base);
	// cmpwi cr6,r31,60
	cr6.compare<int32_t>(ctx.r31.s32, 60, xer);
	// bgt cr6,0x8377c23c
	if (cr6.gt) goto loc_8377C23C;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(ctx.r31.s32, 48, xer);
	// bge cr6,0x8377c1e4
	if (!cr6.lt) goto loc_8377C1E4;
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8377c558
	if (cr6.gt) goto loc_8377C558;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8377c6ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C6EC;
	// bdzf 4*cr6+eq,0x8377bfe4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377BFE4;
	// bdzf 4*cr6+eq,0x8377c020
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C020;
	// bdzf 4*cr6+eq,0x8377c068
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C068;
	// bdzf 4*cr6+eq,0x8377c154
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C154;
	// bdzf 4*cr6+eq,0x8377c0ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C0AC;
	// bdzf 4*cr6+eq,0x8377c100
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C100;
	// bne cr6,0x8377c198
	if (!cr6.eq) goto loc_8377C198;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377BFB8;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8377BFD8;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377BFE4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377BFF4;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,188(r25)
	PPC_STORE_U16(ctx.r25.u32 + 188, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x8377C014;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C020:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C030;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83121088
	ctx.lr = 0x8377C054;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C05C;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C068:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C078;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C098;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C0A0;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C0AC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C0BC;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x8377C0DC;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C0EC;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C0F4;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C100:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C110;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x8377C130;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C140;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C148;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C154:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C164;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C184;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C18C;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C198:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C1A8;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,184(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r10,r8,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r10,184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 184, ctx.r10.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x8377C1D8;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C1E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C1F4;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8377b638
	ctx.lr = 0x8377C214;
	sub_8377B638(ctx, base);
	// bl 0x83123620
	ctx.lr = 0x8377C218;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C228;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C230;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C23C:
	// cmpwi cr6,r31,106
	cr6.compare<int32_t>(ctx.r31.s32, 106, xer);
	// bgt cr6,0x8377c550
	if (cr6.gt) goto loc_8377C550;
	// beq cr6,0x8377c498
	if (cr6.eq) goto loc_8377C498;
	// addi r11,r31,-61
	ctx.r11.s64 = ctx.r31.s64 + -61;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8377c558
	if (cr6.gt) goto loc_8377C558;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8377c2bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C2BC;
	// bdzf 4*cr6+eq,0x8377c300
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C300;
	// bdzf 4*cr6+eq,0x8377c344
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C344;
	// bdzf 4*cr6+eq,0x8377c388
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C388;
	// bdzf 4*cr6+eq,0x8377c3cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C3CC;
	// bdzf 4*cr6+eq,0x8377c410
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377C410;
	// bne cr6,0x8377c454
	if (!cr6.eq) goto loc_8377C454;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C288;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C2A8;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C2B0;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C2BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C2CC;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C2EC;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C2F4;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C300:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C310;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C330;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C338;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C344:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C354;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C374;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C37C;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C388:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C398;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C3B8;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C3C0;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C3CC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C3DC;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,63
	ctx.r4.s64 = 63;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C3FC;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C404;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C410:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C420;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C440;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C448;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C454:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C464;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C484;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C48C;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C498:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8377c4fc
	if (!cr6.eq) goto loc_8377C4FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C4B0;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c4c8
	if (cr6.eq) goto loc_8377C4C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377c4fc
	if (!cr6.eq) goto loc_8377C4FC;
loc_8377C4C8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r25,56
	ctx.r11.s64 = ctx.r25.s64 + 56;
loc_8377C4D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377c4f4
	if (cr6.eq) goto loc_8377C4F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377c4d0
	if (cr6.eq) goto loc_8377C4D0;
loc_8377C4F4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8377c6ec
	if (!cr6.eq) goto loc_8377C6EC;
loc_8377C4FC:
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a725e8
	ctx.lr = 0x8377C50C;
	sub_82A725E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8377c530
	if (!cr6.lt) goto loc_8377C530;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8377C530:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r25,56
	ctx.r3.s64 = ctx.r25.s64 + 56;
	// bl 0x831ce7d8
	ctx.lr = 0x8377C53C;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C544;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C550:
	// cmpwi cr6,r31,107
	cr6.compare<int32_t>(ctx.r31.s32, 107, xer);
	// beq cr6,0x8377c6ac
	if (cr6.eq) goto loc_8377C6AC;
loc_8377C558:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8377b450
	ctx.lr = 0x8377C564;
	sub_8377B450(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,27
	cr6.compare<int32_t>(ctx.r3.s32, 27, xer);
	// beq cr6,0x8377c5c4
	if (cr6.eq) goto loc_8377C5C4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C580;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c5b0
	if (cr6.eq) goto loc_8377C5B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123650
	ctx.lr = 0x8377C5A0;
	sub_83123650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C5B0;
	sub_83121088(ctx, base);
loc_8377C5B0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C5B8;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C5C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377b740
	ctx.lr = 0x8377C5CC;
	sub_8377B740(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,28
	cr6.compare<int32_t>(ctx.r3.s32, 28, xer);
	// beq cr6,0x8377c640
	if (cr6.eq) goto loc_8377C640;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C5E8;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c614
	if (cr6.eq) goto loc_8377C614;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c614
	if (cr6.eq) goto loc_8377C614;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123700
	ctx.lr = 0x8377C60C;
	sub_83123700(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8377c620
	goto loc_8377C620;
loc_8377C614:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123700
	ctx.lr = 0x8377C61C;
	sub_83123700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_8377C620:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C62C;
	sub_83121088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C634;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C640:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8377b940
	ctx.lr = 0x8377C64C;
	sub_8377B940(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a72110
	ctx.lr = 0x8377C668;
	sub_82A72110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c698
	if (cr6.eq) goto loc_8377C698;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123720
	ctx.lr = 0x8377C688;
	sub_83123720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x8377C698;
	sub_83121088(ctx, base);
loc_8377C698:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C6A0;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C6AC:
	// li r5,107
	ctx.r5.s64 = 107;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a725e8
	ctx.lr = 0x8377C6BC;
	sub_82A725E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c6ec
	if (cr6.eq) goto loc_8377C6EC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8377c6e0
	if (!cr6.lt) goto loc_8377C6E0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8377C6E0:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r25,102
	ctx.r3.s64 = ctx.r25.s64 + 102;
	// bl 0x831ce7d8
	ctx.lr = 0x8377C6EC;
	sub_831CE7D8(ctx, base);
loc_8377C6EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8377C6F4;
	sub_8387E8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8377C700:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C70C"))) PPC_WEAK_FUNC(sub_8377C70C);
PPC_FUNC_IMPL(__imp__sub_8377C70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C710"))) PPC_WEAK_FUNC(sub_8377C710);
PPC_FUNC_IMPL(__imp__sub_8377C710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7828
	ctx.r9.s64 = ctx.r11.s64 + -7828;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377C724"))) PPC_WEAK_FUNC(sub_8377C724);
PPC_FUNC_IMPL(__imp__sub_8377C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C728"))) PPC_WEAK_FUNC(sub_8377C728);
PPC_FUNC_IMPL(__imp__sub_8377C728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7824
	ctx.r9.s64 = ctx.r11.s64 + -7824;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377C73C"))) PPC_WEAK_FUNC(sub_8377C73C);
PPC_FUNC_IMPL(__imp__sub_8377C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C740"))) PPC_WEAK_FUNC(sub_8377C740);
PPC_FUNC_IMPL(__imp__sub_8377C740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7760
	ctx.r9.s64 = ctx.r11.s64 + -7760;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377C754"))) PPC_WEAK_FUNC(sub_8377C754);
PPC_FUNC_IMPL(__imp__sub_8377C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C758"))) PPC_WEAK_FUNC(sub_8377C758);
PPC_FUNC_IMPL(__imp__sub_8377C758) {
	PPC_FUNC_PROLOGUE();
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377C760"))) PPC_WEAK_FUNC(sub_8377C760);
PPC_FUNC_IMPL(__imp__sub_8377C760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7712
	ctx.r9.s64 = ctx.r11.s64 + -7712;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377C774"))) PPC_WEAK_FUNC(sub_8377C774);
PPC_FUNC_IMPL(__imp__sub_8377C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C778"))) PPC_WEAK_FUNC(sub_8377C778);
PPC_FUNC_IMPL(__imp__sub_8377C778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-7392
	ctx.r9.s64 = ctx.r11.s64 + -7392;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377C78C"))) PPC_WEAK_FUNC(sub_8377C78C);
PPC_FUNC_IMPL(__imp__sub_8377C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C790"))) PPC_WEAK_FUNC(sub_8377C790);
PPC_FUNC_IMPL(__imp__sub_8377C790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377C798;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8377c8c0
	if (cr6.eq) goto loc_8377C8C0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8377C7B8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8377C7C8;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c81c
	if (cr6.eq) goto loc_8377C81C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c81c
	if (cr6.eq) goto loc_8377C81C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377C7F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c81c
	if (cr6.eq) goto loc_8377C81C;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377c81c
	if (cr6.lt) goto loc_8377C81C;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377c820
	if (!cr6.gt) goto loc_8377C820;
loc_8377C81C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377C820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c8b0
	if (cr6.eq) goto loc_8377C8B0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8377C83C;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c890
	if (cr6.eq) goto loc_8377C890;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c890
	if (cr6.eq) goto loc_8377C890;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377C864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c890
	if (cr6.eq) goto loc_8377C890;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377c890
	if (cr6.lt) goto loc_8377C890;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377c894
	if (!cr6.gt) goto loc_8377C894;
loc_8377C890:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377C894:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c8b0
	if (cr6.eq) goto loc_8377C8B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377c8cc
	if (!cr6.eq) goto loc_8377C8CC;
loc_8377C8B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377c7b8
	if (cr6.lt) goto loc_8377C7B8;
loc_8377C8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377C8CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C8D8"))) PPC_WEAK_FUNC(sub_8377C8D8);
PPC_FUNC_IMPL(__imp__sub_8377C8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r5,r11,-7712
	ctx.r5.s64 = ctx.r11.s64 + -7712;
	// b 0x8377c790
	sub_8377C790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C8E8"))) PPC_WEAK_FUNC(sub_8377C8E8);
PPC_FUNC_IMPL(__imp__sub_8377C8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-7392
	ctx.r5.s64 = ctx.r11.s64 + -7392;
	// b 0x8377c790
	sub_8377C790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C8F8"))) PPC_WEAK_FUNC(sub_8377C8F8);
PPC_FUNC_IMPL(__imp__sub_8377C8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r11,-7760
	ctx.r5.s64 = ctx.r11.s64 + -7760;
	// b 0x8377c790
	sub_8377C790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C908"))) PPC_WEAK_FUNC(sub_8377C908);
PPC_FUNC_IMPL(__imp__sub_8377C908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-7824
	ctx.r5.s64 = ctx.r11.s64 + -7824;
	// b 0x8377c790
	sub_8377C790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C918"))) PPC_WEAK_FUNC(sub_8377C918);
PPC_FUNC_IMPL(__imp__sub_8377C918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377C920;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a76558
	ctx.lr = 0x8377C93C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c954
	if (cr6.eq) goto loc_8377C954;
loc_8377C948:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377C954:
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r11,-7840
	ctx.r31.s64 = ctx.r11.s64 + -7840;
loc_8377C960:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8373f5f8
	ctx.lr = 0x8377C974;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c99c
	if (cr6.eq) goto loc_8377C99C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377c99c
	if (cr6.eq) goto loc_8377C99C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377C99C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377C99C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377c948
	if (!cr6.eq) goto loc_8377C948;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// blt cr6,0x8377c960
	if (cr6.lt) goto loc_8377C960;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377C9C4"))) PPC_WEAK_FUNC(sub_8377C9C4);
PPC_FUNC_IMPL(__imp__sub_8377C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377C9C8"))) PPC_WEAK_FUNC(sub_8377C9C8);
PPC_FUNC_IMPL(__imp__sub_8377C9C8) {
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
	ctx.lr = 0x8377C9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7840
	ctx.r31.s64 = ctx.r11.s64 + -7840;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8377C9F0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8373f5f8
	ctx.lr = 0x8377CA04;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ca48
	if (cr6.eq) goto loc_8377CA48;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377ca48
	if (cr6.eq) goto loc_8377CA48;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377ca48
	if (cr6.lt) goto loc_8377CA48;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377ca48
	if (cr6.gt) goto loc_8377CA48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377CA48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377CA48:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377c9f0
	if (!cr0.eq) goto loc_8377C9F0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8377CA68;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377caac
	if (cr6.eq) goto loc_8377CAAC;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377caac
	if (cr6.eq) goto loc_8377CAAC;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377caac
	if (cr6.lt) goto loc_8377CAAC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377caac
	if (cr6.gt) goto loc_8377CAAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377CAAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377CAAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CAB4"))) PPC_WEAK_FUNC(sub_8377CAB4);
PPC_FUNC_IMPL(__imp__sub_8377CAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CAB8"))) PPC_WEAK_FUNC(sub_8377CAB8);
PPC_FUNC_IMPL(__imp__sub_8377CAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8377CAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83071a08
	ctx.lr = 0x8377CADC;
	sub_83071A08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377caf4
	if (!cr6.eq) goto loc_8377CAF4;
loc_8377CAE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8377CAF4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cae8
	if (cr6.eq) goto loc_8377CAE8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377cae8
	if (cr6.eq) goto loc_8377CAE8;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// blt cr6,0x8377cae8
	if (cr6.lt) goto loc_8377CAE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377CB28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cb40
	if (cr6.eq) goto loc_8377CB40;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8377CB40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CB48"))) PPC_WEAK_FUNC(sub_8377CB48);
PPC_FUNC_IMPL(__imp__sub_8377CB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377CB50;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8377cc78
	if (cr6.eq) goto loc_8377CC78;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8377CB70:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83071998
	ctx.lr = 0x8377CB80;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cbd4
	if (cr6.eq) goto loc_8377CBD4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cbd4
	if (cr6.eq) goto loc_8377CBD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8377CBA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cbd4
	if (cr6.eq) goto loc_8377CBD4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377cbd4
	if (cr6.lt) goto loc_8377CBD4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377cbd8
	if (!cr6.gt) goto loc_8377CBD8;
loc_8377CBD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377CBD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cc68
	if (cr6.eq) goto loc_8377CC68;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83071998
	ctx.lr = 0x8377CBF4;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cc48
	if (cr6.eq) goto loc_8377CC48;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cc48
	if (cr6.eq) goto loc_8377CC48;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8377CC1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cc48
	if (cr6.eq) goto loc_8377CC48;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8377cc48
	if (cr6.lt) goto loc_8377CC48;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8377cc4c
	if (!cr6.gt) goto loc_8377CC4C;
loc_8377CC48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377CC4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cc68
	if (cr6.eq) goto loc_8377CC68;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8377cc84
	if (!cr6.eq) goto loc_8377CC84;
loc_8377CC68:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8377cb70
	if (cr6.lt) goto loc_8377CB70;
loc_8377CC78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8377CC84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CC90"))) PPC_WEAK_FUNC(sub_8377CC90);
PPC_FUNC_IMPL(__imp__sub_8377CC90) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x8377cab8
	ctx.lr = 0x8377CCB8;
	sub_8377CAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cd1c
	if (cr6.eq) goto loc_8377CD1C;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377cab8
	ctx.lr = 0x8377CCD8;
	sub_8377CAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cd1c
	if (cr6.eq) goto loc_8377CD1C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
loc_8377CCEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377cd10
	if (cr6.eq) goto loc_8377CD10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377ccec
	if (cr6.eq) goto loc_8377CCEC;
loc_8377CD10:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8377cd20
	if (!cr6.eq) goto loc_8377CD20;
loc_8377CD1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8377CD20:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CD34"))) PPC_WEAK_FUNC(sub_8377CD34);
PPC_FUNC_IMPL(__imp__sub_8377CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CD38"))) PPC_WEAK_FUNC(sub_8377CD38);
PPC_FUNC_IMPL(__imp__sub_8377CD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6968
	ctx.r5.s64 = ctx.r11.s64 + -6968;
	// b 0x8377cb48
	sub_8377CB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CD48"))) PPC_WEAK_FUNC(sub_8377CD48);
PPC_FUNC_IMPL(__imp__sub_8377CD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r11,-6964
	ctx.r5.s64 = ctx.r11.s64 + -6964;
	// b 0x8377cb48
	sub_8377CB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CD58"))) PPC_WEAK_FUNC(sub_8377CD58);
PPC_FUNC_IMPL(__imp__sub_8377CD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,-6936
	ctx.r5.s64 = ctx.r11.s64 + -6936;
	// b 0x8377cb48
	sub_8377CB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CD68"))) PPC_WEAK_FUNC(sub_8377CD68);
PPC_FUNC_IMPL(__imp__sub_8377CD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8377CD70;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,7
	ctx.r28.s64 = 7;
	// addi r31,r11,-6964
	ctx.r31.s64 = ctx.r11.s64 + -6964;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8377CD8C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83071998
	ctx.lr = 0x8377CDA0;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cdc8
	if (cr6.eq) goto loc_8377CDC8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cdc8
	if (cr6.eq) goto loc_8377CDC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8377CDC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377CDC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83071998
	ctx.lr = 0x8377CDE0;
	sub_83071998(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377ce24
	if (cr6.eq) goto loc_8377CE24;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377ce24
	if (cr6.eq) goto loc_8377CE24;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377ce24
	if (cr6.lt) goto loc_8377CE24;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377ce24
	if (cr6.gt) goto loc_8377CE24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377CE24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377CE24:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8377cd8c
	if (!cr0.eq) goto loc_8377CD8C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83071998
	ctx.lr = 0x8377CE44;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377ce88
	if (cr6.eq) goto loc_8377CE88;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377ce88
	if (cr6.eq) goto loc_8377CE88;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8377ce88
	if (cr6.lt) goto loc_8377CE88;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8377ce88
	if (cr6.gt) goto loc_8377CE88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8377CE88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377CE88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377CE90"))) PPC_WEAK_FUNC(sub_8377CE90);
PPC_FUNC_IMPL(__imp__sub_8377CE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r10,r4,226
	ctx.r10.s64 = ctx.r4.s64 + 226;
	// addi r11,r3,226
	ctx.r11.s64 = ctx.r3.s64 + 226;
loc_8377CE98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8377cebc
	if (cr6.eq) goto loc_8377CEBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8377ce98
	if (cr6.eq) goto loc_8377CE98;
loc_8377CEBC:
	// addic r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CEC8"))) PPC_WEAK_FUNC(sub_8377CEC8);
PPC_FUNC_IMPL(__imp__sub_8377CEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 + 68;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8377CED4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8377cefc
	if (!cr6.eq) goto loc_8377CEFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x8377ced4
	if (cr6.lt) goto loc_8377CED4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8377CEFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377CF04"))) PPC_WEAK_FUNC(sub_8377CF04);
PPC_FUNC_IMPL(__imp__sub_8377CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8377CF08"))) PPC_WEAK_FUNC(sub_8377CF08);
PPC_FUNC_IMPL(__imp__sub_8377CF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,347(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 347);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377cf1c
	if (cr6.eq) goto loc_8377CF1C;
loc_8377CF14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8377CF1C:
	// lbz r11,363(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 363);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377cf14
	if (!cr6.eq) goto loc_8377CF14;
	// lbz r11,379(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 379);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377cf14
	if (!cr6.eq) goto loc_8377CF14;
	// lbz r11,395(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 395);
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

__attribute__((alias("__imp__sub_8377CF44"))) PPC_WEAK_FUNC(sub_8377CF44);
PPC_FUNC_IMPL(__imp__sub_8377CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

