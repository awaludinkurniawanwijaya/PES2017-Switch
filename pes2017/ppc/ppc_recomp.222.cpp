#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E8A6E8"))) PPC_WEAK_FUNC(sub_82E8A6E8);
PPC_FUNC_IMPL(__imp__sub_82E8A6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8A6F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82e8a720
	if (!cr6.gt) goto loc_82E8A720;
	// ld r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// tdllei r11,0
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// divdu r8,r9,r11
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r11.u64);
	// rotlwi r29,r8,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x82e8a860
	goto loc_82E8A860;
loc_82E8A720:
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e8a86c
	if (cr6.eq) goto loc_82E8A86C;
	// ld r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 80);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82e8a86c
	if (!cr6.gt) goto loc_82E8A86C;
	// lis r28,-32232
	ctx.r28.s64 = -2112356352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r28,27216
	ctx.r11.s64 = ctx.r28.s64 + 27216;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x831ce980
	ctx.lr = 0x82E8A750;
	sub_831CE980(ctx, base);
	// lhz r11,27216(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 27216);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x831d3450
	ctx.lr = 0x82E8A764;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8a86c
	if (cr6.eq) goto loc_82E8A86C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E8A778:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e8a778
	if (!cr6.eq) goto loc_82E8A778;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3450
	ctx.lr = 0x82E8A7A4;
	sub_831D3450(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8a7c0
	if (cr6.eq) goto loc_82E8A7C0;
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x82e8a7c0
	if (!cr6.lt) goto loc_82E8A7C0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82E8A7C0:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,312
	ctx.r11.s64 = ctx.r1.s64 + 312;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E8A7D0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82e8a7d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E8A7D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x831ce980
	ctx.lr = 0x82E8A7E4;
	sub_831CE980(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82475d40
	ctx.lr = 0x82E8A7F0;
	sub_82475D40(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d6e330
	ctx.lr = 0x82E8A804;
	sub_82D6E330(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e89aa8
	ctx.lr = 0x82E8A810;
	sub_82E89AA8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82e8a850
	if (!cr6.eq) goto loc_82E8A850;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x82e8a850
	if (!cr6.gt) goto loc_82E8A850;
	// ld r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 80);
	// tdllei r11,0
	// std r11,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r11.u64);
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// divdu r8,r9,r11
	ctx.r8.u64 = PPCDivide(ctx.r9.u64, ctx.r11.u64);
	// rotlwi r29,r8,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82E8A850:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d6b938
	ctx.lr = 0x82E8A858;
	sub_82D6B938(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824707c8
	ctx.lr = 0x82E8A860;
	sub_824707C8(ctx, base);
loc_82E8A860:
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// li r3,100
	ctx.r3.s64 = 100;
	// bgt cr6,0x82e8a870
	if (cr6.gt) goto loc_82E8A870;
loc_82E8A86C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82E8A870:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A878"))) PPC_WEAK_FUNC(sub_82E8A878);
PPC_FUNC_IMPL(__imp__sub_82E8A878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82E8A880;
	__savegprlr_14(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,1992(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1992);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82E8A8B4:
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82e8a8b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E8A8B4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82E8A8C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8a8c8
	if (!cr6.eq) goto loc_82E8A8C8;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r14,36
	ctx.r3.s64 = ctx.r14.s64 + 36;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E8A8F0;
	sub_82472FC0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82E8A900;
	sub_831CDCF0(ctx, base);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,28(r14)
	PPC_STORE_U32(ctx.r14.u32 + 28, ctx.r30.u32);
	// stw r10,32(r14)
	PPC_STORE_U32(ctx.r14.u32 + 32, ctx.r10.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r9,628(r14)
	PPC_STORE_U32(ctx.r14.u32 + 628, ctx.r9.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r26,r11,26900
	ctx.r26.s64 = ctx.r11.s64 + 26900;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r26,-236
	ctx.r4.s64 = ctx.r26.s64 + -236;
	// bl 0x831ce980
	ctx.lr = 0x82E8A92C;
	sub_831CE980(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82a5c280
	ctx.lr = 0x82E8A934;
	sub_82A5C280(ctx, base);
	// addi r8,r1,552
	ctx.r8.s64 = ctx.r1.s64 + 552;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// bl 0x83524ad0
	ctx.lr = 0x82E8A948;
	sub_83524AD0(ctx, base);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E8A954:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e8a954
	if (!cr6.eq) goto loc_82E8A954;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e8a9f8
	if (cr6.eq) goto loc_82E8A9F8;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r28,r11,35747
	ctx.r28.u64 = ctx.r11.u64 | 35747;
loc_82E8A980:
	// addi r29,r1,512
	ctx.r29.s64 = ctx.r1.s64 + 512;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, xer);
	// bne cr6,0x82e8a9c8
	if (!cr6.eq) goto loc_82E8A9C8;
	// addi r4,r26,-196
	ctx.r4.s64 = ctx.r26.s64 + -196;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x831ce980
	ctx.lr = 0x82E8A9A0;
	sub_831CE980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82a5c300
	ctx.lr = 0x82E8A9AC;
	sub_82A5C300(ctx, base);
	// mulhwu r10,r3,r28
	ctx.r10.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// mulli r8,r9,11
	ctx.r8.s64 = ctx.r9.s64 * 11;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// lbzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbx r6,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r6.u8);
loc_82E8A9C8:
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82E8A9D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e8a9d4
	if (!cr6.eq) goto loc_82E8A9D4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x82e8a980
	if (cr6.lt) goto loc_82E8A980;
loc_82E8A9F8:
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r14,632
	ctx.r3.s64 = ctx.r14.s64 + 632;
	// bl 0x82472fc0
	ctx.lr = 0x82E8AA04;
	sub_82472FC0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82e8aa2c
	if (cr6.eq) goto loc_82E8AA2C;
loc_82E8AA14:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r22,r10,512
	ctx.r22.s64 = ctx.r10.s64 + 512;
	// bne cr6,0x82e8aa14
	if (!cr6.eq) goto loc_82E8AA14;
loc_82E8AA2C:
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r30,r22,1
	ctx.r30.s64 = ctx.r22.s64 + 1;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82595718
	ctx.lr = 0x82E8AA48;
	sub_82595718(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,608(r14)
	PPC_STORE_U32(ctx.r14.u32 + 608, ctx.r3.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E8AA58;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r30,r11,15320
	ctx.r30.s64 = ctx.r11.s64 + 15320;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r23,608(r14)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r14.u32 + 608);
	// beq cr6,0x82e8aec8
	if (cr6.eq) goto loc_82E8AEC8;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r18,r5,-22836
	ctx.r18.s64 = ctx.r5.s64 + -22836;
	// addi r17,r6,15324
	ctx.r17.s64 = ctx.r6.s64 + 15324;
	// addi r21,r7,-19992
	ctx.r21.s64 = ctx.r7.s64 + -19992;
	// addi r16,r8,-22840
	ctx.r16.s64 = ctx.r8.s64 + -22840;
	// addi r15,r9,-22776
	ctx.r15.s64 = ctx.r9.s64 + -22776;
	// addi r20,r10,-56
	ctx.r20.s64 = ctx.r10.s64 + -56;
	// addi r19,r11,-22772
	ctx.r19.s64 = ctx.r11.s64 + -22772;
loc_82E8AAB4:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x82E8AAD0;
	sub_82472FC0(ctx, base);
	// li r11,513
	ctx.r11.s64 = 513;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r19,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r19.u32);
	// stw r20,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r31,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r31.u64);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// std r31,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r31.u64);
	// stw r31,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r31.u32);
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x8246c218
	ctx.lr = 0x82E8AB24;
	sub_8246C218(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82416260
	ctx.lr = 0x82E8AB2C;
	sub_82416260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8ab78
	if (cr6.eq) goto loc_82E8AB78;
	// bl 0x831ccb50
	ctx.lr = 0x82E8AB3C;
	sub_831CCB50(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x831cc6c8
	ctx.lr = 0x82E8AB44;
	sub_831CC6C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831cc4f0
	ctx.lr = 0x82E8AB54;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x82e8ab68
	if (!cr6.lt) goto loc_82E8AB68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82E8AB68:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831cc540
	ctx.lr = 0x82E8AB70;
	sub_831CC540(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82e8ab7c
	goto loc_82E8AB7C;
loc_82E8AB78:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E8AB7C:
	// addi r10,r1,280
	ctx.r10.s64 = ctx.r1.s64 + 280;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r31.u32);
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r10.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// bl 0x831cc4f0
	ctx.lr = 0x82E8ABA0;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x82e8abb4
	if (!cr6.lt) goto loc_82E8ABB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82E8ABB4:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x831cc540
	ctx.lr = 0x82E8ABBC;
	sub_831CC540(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8246eae0
	ctx.lr = 0x82E8ABC4;
	sub_8246EAE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x831cc4f0
	ctx.lr = 0x82E8ABD4;
	sub_831CC4F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8abf0
	if (cr6.eq) goto loc_82E8ABF0;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x82e8abf0
	if (!cr6.lt) goto loc_82E8ABF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82E8ABF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// bl 0x831cc540
	ctx.lr = 0x82E8AC08;
	sub_831CC540(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e8ac28
	if (cr6.eq) goto loc_82E8AC28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8AC28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8AC28:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8AC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,408(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// stb r3,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r3.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e8ac68
	if (!cr6.eq) goto loc_82E8AC68;
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// ori r4,r10,4
	ctx.r4.u64 = ctx.r10.u64 | 4;
	// bl 0x8246c218
	ctx.lr = 0x82E8AC68;
	sub_8246C218(ctx, base);
loc_82E8AC68:
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r17,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r17.u32);
	// lwz r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r16,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r16.u32);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r15,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r15.u32);
	// bl 0x8246e6a8
	ctx.lr = 0x82E8ACA0;
	sub_8246E6A8(ctx, base);
	// stw r18,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r18.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82473550
	ctx.lr = 0x82E8ACC4;
	sub_82473550(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82473550
	ctx.lr = 0x82E8ACCC;
	sub_82473550(ctx, base);
	// addi r4,r26,-180
	ctx.r4.s64 = ctx.r26.s64 + -180;
	// bl 0x82473550
	ctx.lr = 0x82E8ACD4;
	sub_82473550(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82e8ad0c
	if (cr6.eq) goto loc_82E8AD0C;
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x82E8ACEC;
	sub_82473550(ctx, base);
	// addi r4,r26,-20
	ctx.r4.s64 = ctx.r26.s64 + -20;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82473550
	ctx.lr = 0x82E8ACFC;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x82E8AD04;
	sub_82473550(ctx, base);
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// b 0x82e8ad5c
	goto loc_82E8AD5C;
loc_82E8AD0C:
	// addi r4,r26,-172
	ctx.r4.s64 = ctx.r26.s64 + -172;
	// bl 0x82473550
	ctx.lr = 0x82E8AD14;
	sub_82473550(ctx, base);
	// addi r4,r26,-132
	ctx.r4.s64 = ctx.r26.s64 + -132;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82473550
	ctx.lr = 0x82E8AD24;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x82E8AD2C;
	sub_82473550(ctx, base);
	// addi r4,r26,-136
	ctx.r4.s64 = ctx.r26.s64 + -136;
	// bl 0x82473550
	ctx.lr = 0x82E8AD34;
	sub_82473550(ctx, base);
	// addi r4,r26,-116
	ctx.r4.s64 = ctx.r26.s64 + -116;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82473550
	ctx.lr = 0x82E8AD44;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x82E8AD4C;
	sub_82473550(ctx, base);
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// bl 0x82473550
	ctx.lr = 0x82E8AD54;
	sub_82473550(ctx, base);
	// addi r4,r26,-104
	ctx.r4.s64 = ctx.r26.s64 + -104;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
loc_82E8AD5C:
	// bl 0x82473550
	ctx.lr = 0x82E8AD60;
	sub_82473550(ctx, base);
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82473550
	ctx.lr = 0x82E8AD6C;
	sub_82473550(ctx, base);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a79bf8
	ctx.lr = 0x82E8AD78;
	sub_82A79BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8ad8c
	if (cr6.lt) goto loc_82E8AD8C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8AD8C;
	sub_82416268(ctx, base);
loc_82E8AD8C:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bge cr6,0x82e8adbc
	if (!cr6.lt) goto loc_82E8ADBC;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce420
	ctx.lr = 0x82E8ADB8;
	sub_831CE420(ctx, base);
	// b 0x82e8adc8
	goto loc_82E8ADC8;
loc_82E8ADBC:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82E8ADC8:
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r28,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r25,r22
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, xer);
	// bge cr6,0x82e8afc0
	if (!cr6.lt) goto loc_82E8AFC0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82e8ae10
	if (!cr6.lt) goto loc_82E8AE10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E8AE10:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831d36a8
	ctx.lr = 0x82E8AE18;
	sub_831D36A8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E8AE30;
	sub_831CE980(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8ae4c
	if (!cr6.lt) goto loc_82E8AE4C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82E8AE4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x831d36a8
	ctx.lr = 0x82E8AE58;
	sub_831D36A8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r23,r11,r30
	ctx.r23.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r27,16(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8ae78
	if (cr6.lt) goto loc_82E8AE78;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8AE78;
	sub_82416268(ctx, base);
loc_82E8AE78:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E8AE8C;
	sub_82A79160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82E8AE9C;
	sub_831CCF00(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e8aeb0
	if (cr6.lt) goto loc_82E8AEB0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E8AEB0;
	sub_82416268(ctx, base);
loc_82E8AEB0:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bne cr6,0x82e8aab4
	if (!cr6.eq) goto loc_82E8AAB4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E8AEC8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82a8c428
	ctx.lr = 0x82E8AED8;
	sub_82A8C428(ctx, base);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82473550
	ctx.lr = 0x82E8AEF0;
	sub_82473550(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82473550
	ctx.lr = 0x82E8AEF8;
	sub_82473550(ctx, base);
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// bl 0x82473550
	ctx.lr = 0x82E8AF00;
	sub_82473550(ctx, base);
	// addi r4,r1,600
	ctx.r4.s64 = ctx.r1.s64 + 600;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a79bf8
	ctx.lr = 0x82E8AF0C;
	sub_82A79BF8(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82476258
	ctx.lr = 0x82E8AF18;
	sub_82476258(ctx, base);
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8af2c
	if (cr6.lt) goto loc_82E8AF2C;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x82E8AF2C;
	sub_82416268(ctx, base);
loc_82E8AF2C:
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r28,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r28.u32);
	// add r11,r5,r25
	ctx.r11.u64 = ctx.r5.u64 + ctx.r25.u64;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bge cr6,0x82e8b04c
	if (!cr6.lt) goto loc_82E8B04C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8af5c
	if (!cr6.lt) goto loc_82E8AF5C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82E8AF5C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831d36a8
	ctx.lr = 0x82E8AF64;
	sub_831D36A8(ctx, base);
	// lwz r11,608(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 608);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r8,612(r14)
	PPC_STORE_U32(ctx.r14.u32 + 612, ctx.r8.u32);
	// blt cr6,0x82e8af8c
	if (cr6.lt) goto loc_82E8AF8C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E8AF8C;
	sub_82416268(ctx, base);
loc_82E8AF8C:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E8AFA0;
	sub_82A79160(ctx, base);
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x831ccf00
	ctx.lr = 0x82E8AFAC;
	sub_831CCF00(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82a5c688
	ctx.lr = 0x82E8AFB4;
	sub_82A5C688(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82E8AFC0:
	// lwz r4,608(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 608);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e8afe4
	if (cr6.eq) goto loc_82E8AFE4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8AFDC;
	sub_825952B8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r31,608(r14)
	PPC_STORE_U32(ctx.r14.u32 + 608, ctx.r31.u32);
loc_82E8AFE4:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82e8aff4
	if (cr6.lt) goto loc_82E8AFF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8AFF4;
	sub_82416268(ctx, base);
loc_82E8AFF4:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E8B008;
	sub_82A79160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82E8B018;
	sub_831CCF00(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e8b02c
	if (cr6.lt) goto loc_82E8B02C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E8B02C;
	sub_82416268(ctx, base);
loc_82E8B02C:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82a5c688
	ctx.lr = 0x82E8B040;
	sub_82A5C688(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82E8B04C:
	// lwz r4,608(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 608);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e8b06c
	if (cr6.eq) goto loc_82E8B06C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8B068;
	sub_825952B8(ctx, base);
	// stw r31,608(r14)
	PPC_STORE_U32(ctx.r14.u32 + 608, ctx.r31.u32);
loc_82E8B06C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8b080
	if (cr6.lt) goto loc_82E8B080;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E8B080;
	sub_82416268(ctx, base);
loc_82E8B080:
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E8B094;
	sub_82A79160(ctx, base);
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x831ccf00
	ctx.lr = 0x82E8B0A0;
	sub_831CCF00(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82a5c688
	ctx.lr = 0x82E8B0A8;
	sub_82A5C688(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B0B4"))) PPC_WEAK_FUNC(sub_82E8B0B4);
PPC_FUNC_IMPL(__imp__sub_82E8B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B0B8"))) PPC_WEAK_FUNC(sub_82E8B0B8);
PPC_FUNC_IMPL(__imp__sub_82E8B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E8B0C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1170
	ctx.r11.s64 = 76677120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,18724
	ctx.r10.u64 = ctx.r11.u64 | 18724;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e8b0e4
	if (!cr6.gt) goto loc_82E8B0E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82E8B0E4;
	sub_831CC150(ctx, base);
loc_82E8B0E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,56
	ctx.r26.s64 = 56;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82e8b18c
	if (!cr6.lt) goto loc_82E8B18C;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,56
	ctx.r28.s64 = ctx.r4.s64 * 56;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E8B11C;
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
	// bl 0x82e95620
	ctx.lr = 0x82E8B140;
	sub_82E95620(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x82e8b174
	if (cr6.eq) goto loc_82E8B174;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ee46e0
	ctx.lr = 0x82E8B164;
	sub_82EE46E0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E8B174;
	sub_825952B8(ctx, base);
loc_82E8B174:
	// mulli r11,r26,56
	ctx.r11.s64 = ctx.r26.s64 * 56;
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
loc_82E8B18C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B194"))) PPC_WEAK_FUNC(sub_82E8B194);
PPC_FUNC_IMPL(__imp__sub_82E8B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B198"))) PPC_WEAK_FUNC(sub_82E8B198);
PPC_FUNC_IMPL(__imp__sub_82E8B198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8B1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,27312
	ctx.r10.s64 = ctx.r11.s64 + 27312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e899e8
	ctx.lr = 0x82E8B1B8;
	sub_82E899E8(ctx, base);
	// lwz r9,1992(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1992);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8b200
	if (cr6.eq) goto loc_82E8B200;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82E8B1D8;
	sub_82595150(ctx, base);
	// lwz r3,1992(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8b1f8
	if (cr6.eq) goto loc_82E8B1F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8B1F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8B1F8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82E8B200;
	sub_82595170(ctx, base);
loc_82E8B200:
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,5080
	ctx.r31.s64 = ctx.r31.s64 + 5080;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8b238
	if (cr6.eq) goto loc_82E8B238;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ee46e0
	ctx.lr = 0x82E8B224;
	sub_82EE46E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8B238;
	sub_825952B8(ctx, base);
loc_82E8B238:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r29,1984
	ctx.r3.s64 = ctx.r29.s64 + 1984;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82572fa0
	ctx.lr = 0x82E8B254;
	sub_82572FA0(ctx, base);
	// addi r3,r29,660
	ctx.r3.s64 = ctx.r29.s64 + 660;
	// bl 0x82a5c688
	ctx.lr = 0x82E8B25C;
	sub_82A5C688(ctx, base);
	// lwz r11,652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 652);
	// addi r31,r29,632
	ctx.r31.s64 = ctx.r29.s64 + 632;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8b274
	if (cr6.lt) goto loc_82E8B274;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82E8B274;
	sub_82416268(ctx, base);
loc_82E8B274:
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8b29c
	if (cr6.lt) goto loc_82E8B29C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82E8B29C;
	sub_82416268(ctx, base);
loc_82E8B29C:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B2B0"))) PPC_WEAK_FUNC(sub_82E8B2B0);
PPC_FUNC_IMPL(__imp__sub_82E8B2B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,688(r3)
	PPC_STORE_U8(ctx.r3.u32 + 688, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B2B8"))) PPC_WEAK_FUNC(sub_82E8B2B8);
PPC_FUNC_IMPL(__imp__sub_82E8B2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8b30c
	if (cr6.eq) goto loc_82E8B30C;
	// lwz r7,616(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-23488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_82E8B30C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B314"))) PPC_WEAK_FUNC(sub_82E8B314);
PPC_FUNC_IMPL(__imp__sub_82E8B314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B318"))) PPC_WEAK_FUNC(sub_82E8B318);
PPC_FUNC_IMPL(__imp__sub_82E8B318) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B320"))) PPC_WEAK_FUNC(sub_82E8B320);
PPC_FUNC_IMPL(__imp__sub_82E8B320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,616(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B328"))) PPC_WEAK_FUNC(sub_82E8B328);
PPC_FUNC_IMPL(__imp__sub_82E8B328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,56
	ctx.r9.s64 = 56;
	// ori r8,r10,18724
	ctx.r8.u64 = ctx.r10.u64 | 18724;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8b35c
	if (!cr6.lt) goto loc_82E8B35C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82E8B35C:
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
	// blt cr6,0x82e8b38c
	if (cr6.lt) goto loc_82E8B38C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82E8B38C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e8b398
	if (!cr6.lt) goto loc_82E8B398;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82E8B398:
	// b 0x82e8b0b8
	sub_82E8B0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B39C"))) PPC_WEAK_FUNC(sub_82E8B39C);
PPC_FUNC_IMPL(__imp__sub_82E8B39C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B3A0"))) PPC_WEAK_FUNC(sub_82E8B3A0);
PPC_FUNC_IMPL(__imp__sub_82E8B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8B3A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,27312
	ctx.r10.s64 = ctx.r11.s64 + 27312;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r29,r3,632
	ctx.r29.s64 = ctx.r3.s64 + 632;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r3,r3,660
	ctx.r3.s64 = ctx.r3.s64 + 660;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stb r30,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r30.u8);
	// bl 0x82a5c280
	ctx.lr = 0x82E8B3E8;
	sub_82A5C280(ctx, base);
	// std r30,1984(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1984, ctx.r30.u64);
	// addi r28,r31,1984
	ctx.r28.s64 = ctx.r31.s64 + 1984;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82E8B3FC;
	sub_82572FA0(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r9,5080
	ctx.r9.s64 = ctx.r9.s64 + 5080;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// bl 0x82572fa0
	ctx.lr = 0x82E8B424;
	sub_82572FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82E8B430;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82E8B43C;
	sub_82572FA0(ctx, base);
	// li r8,29
	ctx.r8.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E8B454;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8b464
	if (cr6.eq) goto loc_82E8B464;
	// bl 0x8335b0d0
	ctx.lr = 0x82E8B460;
	sub_8335B0D0(ctx, base);
	// b 0x82e8b468
	goto loc_82E8B468;
loc_82E8B464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E8B468:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r3,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r3.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// ori r9,r11,5096
	ctx.r9.u64 = ctx.r11.u64 | 5096;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// ori r11,r10,60000
	ctx.r11.u64 = ctx.r10.u64 | 60000;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// std r30,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E8B4C0;
	sub_831CDCF0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// stw r8,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r8.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E8B4E8;
	sub_831CDCF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x831cdcf0
	ctx.lr = 0x82E8B4F8;
	sub_831CDCF0(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r30.u32);
	// addi r3,r31,1996
	ctx.r3.s64 = ctx.r31.s64 + 1996;
	// bl 0x831cdcf0
	ctx.lr = 0x82E8B50C;
	sub_831CDCF0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1024
	ctx.r5.u64 = ctx.r5.u64 | 1024;
	// addi r3,r31,4044
	ctx.r3.s64 = ctx.r31.s64 + 4044;
	// bl 0x831cdcf0
	ctx.lr = 0x82E8B520;
	sub_831CDCF0(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stb r30,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r30.u8);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r4,r7,5068
	ctx.r4.u64 = ctx.r7.u64 | 5068;
	// ori r3,r6,5076
	ctx.r3.u64 = ctx.r6.u64 | 5076;
	// ori r11,r5,5072
	ctx.r11.u64 = ctx.r5.u64 | 5072;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// stwx r10,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82e8b560
	if (cr6.lt) goto loc_82E8B560;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82E8B560:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B574"))) PPC_WEAK_FUNC(sub_82E8B574);
PPC_FUNC_IMPL(__imp__sub_82E8B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B578"))) PPC_WEAK_FUNC(sub_82E8B578);
PPC_FUNC_IMPL(__imp__sub_82E8B578) {
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
	// bl 0x82e8b198
	ctx.lr = 0x82E8B598;
	sub_82E8B198(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8b5b0
	if (cr6.eq) goto loc_82E8B5B0;
	// bl 0x82416268
	ctx.lr = 0x82E8B5AC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8B5B0:
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

__attribute__((alias("__imp__sub_82E8B5C8"))) PPC_WEAK_FUNC(sub_82E8B5C8);
PPC_FUNC_IMPL(__imp__sub_82E8B5C8) {
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
	// bge cr6,0x82e8b600
	if (!cr6.lt) goto loc_82E8B600;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82e8b604
	if (!cr6.gt) goto loc_82E8B604;
loc_82E8B600:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E8B604:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8b654
	if (cr6.eq) goto loc_82E8B654;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,56
	ctx.r9.s64 = 56;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82e8b638
	if (!cr6.eq) goto loc_82E8B638;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8b328
	ctx.lr = 0x82E8B638;
	sub_82E8B328(ctx, base);
loc_82E8B638:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8b680
	if (cr6.eq) goto loc_82E8B680;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e8b67c
	goto loc_82E8B67C;
loc_82E8B654:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e8b66c
	if (!cr6.eq) goto loc_82E8B66C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8b328
	ctx.lr = 0x82E8B66C;
	sub_82E8B328(ctx, base);
loc_82E8B66C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8b680
	if (cr6.eq) goto loc_82E8B680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E8B67C:
	// bl 0x82e89d28
	ctx.lr = 0x82E8B680;
	sub_82E89D28(ctx, base);
loc_82E8B680:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
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

__attribute__((alias("__imp__sub_82E8B6A4"))) PPC_WEAK_FUNC(sub_82E8B6A4);
PPC_FUNC_IMPL(__imp__sub_82E8B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B6A8"))) PPC_WEAK_FUNC(sub_82E8B6A8);
PPC_FUNC_IMPL(__imp__sub_82E8B6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E8B6B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e8b6f8
	if (cr6.eq) goto loc_82E8B6F8;
loc_82E8B6D0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bctrl 
	ctx.lr = 0x82E8B6E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82e8b6d0
	if (!cr6.eq) goto loc_82E8B6D0;
loc_82E8B6F8:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B708"))) PPC_WEAK_FUNC(sub_82E8B708);
PPC_FUNC_IMPL(__imp__sub_82E8B708) {
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
	// bl 0x8310e000
	ctx.lr = 0x82E8B728;
	sub_8310E000(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8B730:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8b730
	if (!cr6.eq) goto loc_82E8B730;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E8B754;
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

__attribute__((alias("__imp__sub_82E8B76C"))) PPC_WEAK_FUNC(sub_82E8B76C);
PPC_FUNC_IMPL(__imp__sub_82E8B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B770"))) PPC_WEAK_FUNC(sub_82E8B770);
PPC_FUNC_IMPL(__imp__sub_82E8B770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82E8B778;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r23,r11,-22616
	ctx.r23.s64 = ctx.r11.s64 + -22616;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
loc_82E8B7AC:
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82e8b898
	if (cr6.eq) goto loc_82E8B898;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82E8B7CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8b7cc
	if (!cr6.eq) goto loc_82E8B7CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E8B7F0;
	sub_8259CC28(ctx, base);
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// bl 0x8310d878
	ctx.lr = 0x82E8B7F8;
	sub_8310D878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82E8B80C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8b80c
	if (!cr6.eq) goto loc_82E8B80C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E8B830;
	sub_8259CC28(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82E8B844;
	sub_825A1DA8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82e8b858
	if (!cr6.lt) goto loc_82E8B858;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82E8B858:
	// bl 0x8310e0c0
	ctx.lr = 0x82E8B85C;
	sub_8310E0C0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8b87c
	if (cr6.lt) goto loc_82E8B87C;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82E8B87C;
	sub_825952B8(ctx, base);
loc_82E8B87C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x82e8b89c
	if (cr6.eq) goto loc_82E8B89C;
loc_82E8B898:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E8B89C:
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e8b8d8
	if (cr6.eq) goto loc_82E8B8D8;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r29,r29,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8b8cc
	if (cr6.lt) goto loc_82E8B8CC;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82E8B8CC;
	sub_825952B8(ctx, base);
loc_82E8B8CC:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82E8B8D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8b904
	if (!cr6.eq) goto loc_82E8B904;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplwi cr6,r25,72
	cr6.compare<uint32_t>(ctx.r25.u32, 72, xer);
	// blt cr6,0x82e8b7ac
	if (cr6.lt) goto loc_82E8B7AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82E8B904:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B938"))) PPC_WEAK_FUNC(sub_82E8B938);
PPC_FUNC_IMPL(__imp__sub_82E8B938) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8b96c
	if (cr6.lt) goto loc_82E8B96C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8B96C;
	sub_825952B8(ctx, base);
loc_82E8B96C:
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

__attribute__((alias("__imp__sub_82E8B994"))) PPC_WEAK_FUNC(sub_82E8B994);
PPC_FUNC_IMPL(__imp__sub_82E8B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B998"))) PPC_WEAK_FUNC(sub_82E8B998);
PPC_FUNC_IMPL(__imp__sub_82E8B998) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8b770
	ctx.lr = 0x82E8B9B4;
	sub_82E8B770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e8b9e0
	if (!cr6.eq) goto loc_82E8B9E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e8b708
	ctx.lr = 0x82E8B9CC;
	sub_82E8B708(ctx, base);
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
loc_82E8B9E0:
	// bl 0x8310e000
	ctx.lr = 0x82E8B9E4;
	sub_8310E000(ctx, base);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r4,-22784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22784);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8B9F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8b9f0
	if (!cr6.eq) goto loc_82E8B9F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E8BA14;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82E8BA28"))) PPC_WEAK_FUNC(sub_82E8BA28);
PPC_FUNC_IMPL(__imp__sub_82E8BA28) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8b770
	ctx.lr = 0x82E8BA3C;
	sub_82E8B770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e8ba64
	if (!cr6.eq) goto loc_82E8BA64;
	// bl 0x8310e000
	ctx.lr = 0x82E8BA4C;
	sub_8310E000(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E8BA64:
	// bl 0x8310e000
	ctx.lr = 0x82E8BA68;
	sub_8310E000(ctx, base);
	// li r3,25000
	ctx.r3.s64 = 25000;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8BA7C"))) PPC_WEAK_FUNC(sub_82E8BA7C);
PPC_FUNC_IMPL(__imp__sub_82E8BA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BA80"))) PPC_WEAK_FUNC(sub_82E8BA80);
PPC_FUNC_IMPL(__imp__sub_82E8BA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8BA88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82e87ec0
	ctx.lr = 0x82E8BA98;
	sub_82E87EC0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,28528
	ctx.r10.s64 = ctx.r11.s64 + 28528;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82E8BAB8;
	sub_82596FA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BADC"))) PPC_WEAK_FUNC(sub_82E8BADC);
PPC_FUNC_IMPL(__imp__sub_82E8BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BAE0"))) PPC_WEAK_FUNC(sub_82E8BAE0);
PPC_FUNC_IMPL(__imp__sub_82E8BAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8BAE8"))) PPC_WEAK_FUNC(sub_82E8BAE8);
PPC_FUNC_IMPL(__imp__sub_82E8BAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8BAF0"))) PPC_WEAK_FUNC(sub_82E8BAF0);
PPC_FUNC_IMPL(__imp__sub_82E8BAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8BAF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,160
	ctx.r29.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BB0C;
	sub_82596FE8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r30,29
	ctx.r30.s64 = 29;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8bb5c
	if (cr6.eq) goto loc_82E8BB5C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E8BB30;
	sub_82595150(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8bb50
	if (cr6.eq) goto loc_82E8BB50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BB50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8BB50:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E8BB58;
	sub_82595170(ctx, base);
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
loc_82E8BB5C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8bba4
	if (cr6.eq) goto loc_82E8BBA4;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E8BB78;
	sub_82595150(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8bb98
	if (cr6.eq) goto loc_82E8BB98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BB98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E8BB98:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E8BBA0;
	sub_82595170(ctx, base);
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
loc_82E8BBA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BBAC;
	sub_82597088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BBB4"))) PPC_WEAK_FUNC(sub_82E8BBB4);
PPC_FUNC_IMPL(__imp__sub_82E8BBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BBB8"))) PPC_WEAK_FUNC(sub_82E8BBB8);
PPC_FUNC_IMPL(__imp__sub_82E8BBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8BBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BBD8;
	sub_82596FE8(ctx, base);
	// stw r29,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BBE4;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BBEC"))) PPC_WEAK_FUNC(sub_82E8BBEC);
PPC_FUNC_IMPL(__imp__sub_82E8BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BBF0"))) PPC_WEAK_FUNC(sub_82E8BBF0);
PPC_FUNC_IMPL(__imp__sub_82E8BBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8BBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BC10;
	sub_82596FE8(ctx, base);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8bc28
	if (cr6.eq) goto loc_82E8BC28;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83354de8
	ctx.lr = 0x82E8BC28;
	sub_83354DE8(ctx, base);
loc_82E8BC28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BC30;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BC38"))) PPC_WEAK_FUNC(sub_82E8BC38);
PPC_FUNC_IMPL(__imp__sub_82E8BC38) {
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
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BC5C;
	sub_82596FE8(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8bc84
	if (cr6.eq) goto loc_82E8BC84;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82597088
	ctx.lr = 0x82E8BC7C;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e8bc8c
	goto loc_82E8BC8C;
loc_82E8BC84:
	// bl 0x82597088
	ctx.lr = 0x82E8BC88;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8BC8C:
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

__attribute__((alias("__imp__sub_82E8BCA4"))) PPC_WEAK_FUNC(sub_82E8BCA4);
PPC_FUNC_IMPL(__imp__sub_82E8BCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BCA8"))) PPC_WEAK_FUNC(sub_82E8BCA8);
PPC_FUNC_IMPL(__imp__sub_82E8BCA8) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BCCC;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BCE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BCEC;
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

__attribute__((alias("__imp__sub_82E8BD08"))) PPC_WEAK_FUNC(sub_82E8BD08);
PPC_FUNC_IMPL(__imp__sub_82E8BD08) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BD2C;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BD40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BD4C;
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

__attribute__((alias("__imp__sub_82E8BD68"))) PPC_WEAK_FUNC(sub_82E8BD68);
PPC_FUNC_IMPL(__imp__sub_82E8BD68) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BD8C;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BDA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BDA8;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82E8BDC0"))) PPC_WEAK_FUNC(sub_82E8BDC0);
PPC_FUNC_IMPL(__imp__sub_82E8BDC0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28528
	ctx.r10.s64 = ctx.r11.s64 + 28528;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ee17c0
	ctx.lr = 0x82E8BDE4;
	sub_82EE17C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8baf0
	ctx.lr = 0x82E8BDEC;
	sub_82E8BAF0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82596f90
	ctx.lr = 0x82E8BDF4;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e87f50
	ctx.lr = 0x82E8BDFC;
	sub_82E87F50(ctx, base);
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

__attribute__((alias("__imp__sub_82E8BE10"))) PPC_WEAK_FUNC(sub_82E8BE10);
PPC_FUNC_IMPL(__imp__sub_82E8BE10) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28528
	ctx.r10.s64 = ctx.r11.s64 + 28528;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ee17c0
	ctx.lr = 0x82E8BE3C;
	sub_82EE17C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8baf0
	ctx.lr = 0x82E8BE44;
	sub_82E8BAF0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82596f90
	ctx.lr = 0x82E8BE4C;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e87f50
	ctx.lr = 0x82E8BE54;
	sub_82E87F50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8be6c
	if (cr6.eq) goto loc_82E8BE6C;
	// bl 0x82416268
	ctx.lr = 0x82E8BE68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8BE6C:
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

__attribute__((alias("__imp__sub_82E8BE84"))) PPC_WEAK_FUNC(sub_82E8BE84);
PPC_FUNC_IMPL(__imp__sub_82E8BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8BE88"))) PPC_WEAK_FUNC(sub_82E8BE88);
PPC_FUNC_IMPL(__imp__sub_82E8BE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8BE90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,160
	ctx.r28.s64 = ctx.r3.s64 + 160;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BEA8;
	sub_82596FE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e8bf10
	if (cr6.eq) goto loc_82E8BF10;
	// lwz r30,156(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e8bf10
	if (cr6.eq) goto loc_82E8BF10;
	// lwz r29,152(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e8bf10
	if (cr6.eq) goto loc_82E8BF10;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,220
	ctx.r4.s64 = ctx.r29.s64 + 220;
	// addi r3,r30,220
	ctx.r3.s64 = ctx.r30.s64 + 220;
	// bl 0x82420558
	ctx.lr = 0x82E8BEDC;
	sub_82420558(ctx, base);
	// lwz r10,248(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r10.u32);
loc_82E8BEE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8bee8
	if (!cr6.eq) goto loc_82E8BEE8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,316
	ctx.r3.s64 = ctx.r30.s64 + 316;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E8BF10;
	sub_824208C8(ctx, base);
loc_82E8BF10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BF18;
	sub_82597088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8BF20"))) PPC_WEAK_FUNC(sub_82E8BF20);
PPC_FUNC_IMPL(__imp__sub_82E8BF20) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8BF44;
	sub_82596FE8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8bf90
	if (!cr6.eq) goto loc_82E8BF90;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8bf90
	if (!cr6.eq) goto loc_82E8BF90;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BF70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8bf90
	if (cr6.eq) goto loc_82E8BF90;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82420558
	ctx.lr = 0x82E8BF90;
	sub_82420558(ctx, base);
loc_82E8BF90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8BFA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8bfd8
	if (cr6.eq) goto loc_82E8BFD8;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8bfc8
	if (cr6.eq) goto loc_82E8BFC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x82ee2dd0
	ctx.lr = 0x82E8BFC8;
	sub_82EE2DD0(ctx, base);
loc_82E8BFC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BFD0;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e8bfe4
	goto loc_82E8BFE4;
loc_82E8BFD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8BFE0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8BFE4:
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

__attribute__((alias("__imp__sub_82E8BFFC"))) PPC_WEAK_FUNC(sub_82E8BFFC);
PPC_FUNC_IMPL(__imp__sub_82E8BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C000"))) PPC_WEAK_FUNC(sub_82E8C000);
PPC_FUNC_IMPL(__imp__sub_82E8C000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8C008;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,160
	ctx.r28.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E8C01C;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E8C030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8c1d4
	if (cr6.eq) goto loc_82E8C1D4;
	// lbz r11,114(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c04c
	if (cr6.eq) goto loc_82E8C04C;
	// bl 0x82d48260
	ctx.lr = 0x82E8C04C;
	sub_82D48260(ctx, base);
loc_82E8C04C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e8c084
	if (cr6.lt) goto loc_82E8C084;
	// bne cr6,0x82e8c170
	if (!cr6.eq) goto loc_82E8C170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e879f8
	ctx.lr = 0x82E8C064;
	sub_82E879F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c170
	if (cr6.eq) goto loc_82E8C170;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8C078;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E8C084:
	// lwz r29,156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c148
	if (cr6.eq) goto loc_82E8C148;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x8252e3c0
	ctx.lr = 0x82E8C0A0;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E8C0AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8c0ac
	if (!cr6.eq) goto loc_82E8C0AC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82E8C0D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82e8c184
	if (!cr6.eq) goto loc_82E8C184;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e880b8
	ctx.lr = 0x82E8C0F4;
	sub_82E880B8(ctx, base);
	// bl 0x83356788
	ctx.lr = 0x82E8C0F8;
	sub_83356788(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e8c130
	if (!cr6.eq) goto loc_82E8C130;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x82E8C10C;
	sub_82586B80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83354bb8
	ctx.lr = 0x82E8C118;
	sub_83354BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e884d0
	ctx.lr = 0x82E8C124;
	sub_82E884D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x82E8C12C;
	sub_82586BD8(ctx, base);
	// b 0x82e8c13c
	goto loc_82E8C13C;
loc_82E8C130:
	// addi r4,r29,204
	ctx.r4.s64 = ctx.r29.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88708
	ctx.lr = 0x82E8C13C;
	sub_82E88708(ctx, base);
loc_82E8C13C:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82E8C148:
	// bl 0x82e6f960
	ctx.lr = 0x82E8C14C;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8c1a0
	if (cr6.eq) goto loc_82E8C1A0;
	// lwz r30,192(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x82e6f960
	ctx.lr = 0x82E8C15C;
	sub_82E6F960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e6fa08
	ctx.lr = 0x82E8C164;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c1a0
	if (cr6.eq) goto loc_82E8C1A0;
loc_82E8C170:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8C178;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E8C184:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e880b8
	ctx.lr = 0x82E8C18C;
	sub_82E880B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8C194;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E8C1A0:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// addi r4,r11,28412
	ctx.r4.s64 = ctx.r11.s64 + 28412;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x824208c8
	ctx.lr = 0x82E8C1B8;
	sub_824208C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82E8C1CC;
	sub_82E880B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
loc_82E8C1D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E8C1DC;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C1E8"))) PPC_WEAK_FUNC(sub_82E8C1E8);
PPC_FUNC_IMPL(__imp__sub_82E8C1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8C1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c248
	if (cr6.eq) goto loc_82E8C248;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C218;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x82E8C21C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c248
	if (cr6.eq) goto loc_82E8C248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C234;
	sub_82536D88(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x82E8C238;
	sub_82534770(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E8C248:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C254"))) PPC_WEAK_FUNC(sub_82E8C254);
PPC_FUNC_IMPL(__imp__sub_82E8C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C258"))) PPC_WEAK_FUNC(sub_82E8C258);
PPC_FUNC_IMPL(__imp__sub_82E8C258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8C260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c2b8
	if (cr6.eq) goto loc_82E8C2B8;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C288;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x82E8C28C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c2b8
	if (cr6.eq) goto loc_82E8C2B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C2A4;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E8C2A8;
	sub_825347E8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E8C2B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C2C4"))) PPC_WEAK_FUNC(sub_82E8C2C4);
PPC_FUNC_IMPL(__imp__sub_82E8C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C2C8"))) PPC_WEAK_FUNC(sub_82E8C2C8);
PPC_FUNC_IMPL(__imp__sub_82E8C2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8C2D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c328
	if (cr6.eq) goto loc_82E8C328;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C2F8;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x82E8C2FC;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c328
	if (cr6.eq) goto loc_82E8C328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C314;
	sub_82536D88(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82E8C318;
	sub_82534850(ctx, base);
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E8C328:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C334"))) PPC_WEAK_FUNC(sub_82E8C334);
PPC_FUNC_IMPL(__imp__sub_82E8C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C338"))) PPC_WEAK_FUNC(sub_82E8C338);
PPC_FUNC_IMPL(__imp__sub_82E8C338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8C340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c398
	if (cr6.eq) goto loc_82E8C398;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C368;
	sub_82536D88(ctx, base);
	// bl 0x825349b0
	ctx.lr = 0x82E8C36C;
	sub_825349B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c398
	if (cr6.eq) goto loc_82E8C398;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C384;
	sub_82536D88(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x82E8C388;
	sub_82534B10(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E8C398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C3A4"))) PPC_WEAK_FUNC(sub_82E8C3A4);
PPC_FUNC_IMPL(__imp__sub_82E8C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C3A8"))) PPC_WEAK_FUNC(sub_82E8C3A8);
PPC_FUNC_IMPL(__imp__sub_82E8C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8C3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c40c
	if (cr6.eq) goto loc_82E8C40C;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C3D8;
	sub_82536D88(ctx, base);
	// bl 0x82534998
	ctx.lr = 0x82E8C3DC;
	sub_82534998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8c40c
	if (!cr6.eq) goto loc_82E8C40C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C3F4;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825369e8
	ctx.lr = 0x82E8C400;
	sub_825369E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E8C40C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C418"))) PPC_WEAK_FUNC(sub_82E8C418);
PPC_FUNC_IMPL(__imp__sub_82E8C418) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82E8C43C;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8c45c
	if (cr6.lt) goto loc_82E8C45C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8C45C;
	sub_825952B8(ctx, base);
loc_82E8C45C:
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

__attribute__((alias("__imp__sub_82E8C484"))) PPC_WEAK_FUNC(sub_82E8C484);
PPC_FUNC_IMPL(__imp__sub_82E8C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C488"))) PPC_WEAK_FUNC(sub_82E8C488);
PPC_FUNC_IMPL(__imp__sub_82E8C488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8C490;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8c4b4
	if (!cr6.eq) goto loc_82E8C4B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E8C4B4:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C4D8;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x82E8C4DC;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8c518
	if (cr6.eq) goto loc_82E8C518;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E8C4F4;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535b70
	ctx.lr = 0x82E8C500;
	sub_82535B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252ae98
	ctx.lr = 0x82E8C50C;
	sub_8252AE98(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fe60
	ctx.lr = 0x82E8C514;
	sub_8241FE60(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82E8C518:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8c52c
	if (!cr6.lt) goto loc_82E8C52C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82E8C52C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8C530:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8c530
	if (!cr6.eq) goto loc_82E8C530;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E8C554;
	sub_82472FC0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e8c568
	if (cr6.lt) goto loc_82E8C568;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E8C568;
	sub_8386D088(ctx, base);
loc_82E8C568:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C574"))) PPC_WEAK_FUNC(sub_82E8C574);
PPC_FUNC_IMPL(__imp__sub_82E8C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C578"))) PPC_WEAK_FUNC(sub_82E8C578);
PPC_FUNC_IMPL(__imp__sub_82E8C578) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82e8c488
	ctx.lr = 0x82E8C5A8;
	sub_82E8C488(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e8c5e0
	if (!cr6.eq) goto loc_82E8C5E0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8c5c8
	if (cr6.lt) goto loc_82E8C5C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82E8C5C8;
	sub_82416268(ctx, base);
loc_82E8C5C8:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82E8C5E0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8c60c
	if (!cr6.eq) goto loc_82E8C60C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824707c8
	ctx.lr = 0x82E8C5F4;
	sub_824707C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82E8C60C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8c620
	if (!cr6.lt) goto loc_82E8C620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82E8C620:
	// bl 0x831d82e8
	ctx.lr = 0x82E8C624;
	sub_831D82E8(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824707c8
	ctx.lr = 0x82E8C630;
	sub_824707C8(ctx, base);
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
}

__attribute__((alias("__imp__sub_82E8C648"))) PPC_WEAK_FUNC(sub_82E8C648);
PPC_FUNC_IMPL(__imp__sub_82E8C648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8c680
	if (cr6.eq) goto loc_82E8C680;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c678
	if (cr6.eq) goto loc_82E8C678;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82e8c67c
	if (!cr6.eq) goto loc_82E8C67C;
loc_82E8C678:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8C67C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E8C680:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c694
	if (cr6.eq) goto loc_82E8C694;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_82E8C694:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C69C"))) PPC_WEAK_FUNC(sub_82E8C69C);
PPC_FUNC_IMPL(__imp__sub_82E8C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C6A0"))) PPC_WEAK_FUNC(sub_82E8C6A0);
PPC_FUNC_IMPL(__imp__sub_82E8C6A0) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E8C6CC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8c6e0
	if (cr6.eq) goto loc_82E8C6E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ee3318
	ctx.lr = 0x82E8C6DC;
	sub_82EE3318(ctx, base);
	// b 0x82e8c6e4
	goto loc_82E8C6E4;
loc_82E8C6E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8C6E4:
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// stw r3,-28160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28160, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82E8C700"))) PPC_WEAK_FUNC(sub_82E8C700);
PPC_FUNC_IMPL(__imp__sub_82E8C700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,24692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24692);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 188);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e8c74c
	if (cr6.eq) goto loc_82E8C74C;
	// lhz r11,194(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 194);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c744
	if (cr6.eq) goto loc_82E8C744;
	// lwz r11,196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82e8c748
	if (!cr6.eq) goto loc_82E8C748;
loc_82E8C744:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8C748:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E8C74C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c760
	if (cr6.eq) goto loc_82E8C760;
	// lhz r3,194(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 194);
	// blr 
	return;
loc_82E8C760:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C768"))) PPC_WEAK_FUNC(sub_82E8C768);
PPC_FUNC_IMPL(__imp__sub_82E8C768) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,24692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c80c
	if (cr6.eq) goto loc_82E8C80C;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8c7d0
	if (cr6.eq) goto loc_82E8C7D0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c7c8
	if (cr6.eq) goto loc_82E8C7C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82e8c7cc
	if (!cr6.eq) goto loc_82E8C7CC;
loc_82E8C7C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8C7CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E8C7D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c828
	if (cr6.eq) goto loc_82E8C828;
	// lhz r31,6(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82e8c828
	if (cr6.gt) goto loc_82E8C828;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e8c828
	if (cr6.eq) goto loc_82E8C828;
	// bl 0x82e8c648
	ctx.lr = 0x82E8C7F4;
	sub_82E8C648(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8c80c
	if (cr6.eq) goto loc_82E8C80C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E8C80C;
	sub_831CE980(ctx, base);
loc_82E8C80C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8C810:
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
loc_82E8C828:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8c810
	goto loc_82E8C810;
}

__attribute__((alias("__imp__sub_82E8C830"))) PPC_WEAK_FUNC(sub_82E8C830);
PPC_FUNC_IMPL(__imp__sub_82E8C830) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,24692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c86c
	if (cr6.eq) goto loc_82E8C86C;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82E8C858;
	sub_831CE980(ctx, base);
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
loc_82E8C86C:
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

__attribute__((alias("__imp__sub_82E8C880"))) PPC_WEAK_FUNC(sub_82E8C880);
PPC_FUNC_IMPL(__imp__sub_82E8C880) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eca7c0
	sub_82ECA7C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8C884"))) PPC_WEAK_FUNC(sub_82E8C884);
PPC_FUNC_IMPL(__imp__sub_82E8C884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C888"))) PPC_WEAK_FUNC(sub_82E8C888);
PPC_FUNC_IMPL(__imp__sub_82E8C888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,24692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c8a0
	if (cr6.eq) goto loc_82E8C8A0;
	// ld r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// blr 
	return;
loc_82E8C8A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C8A8"))) PPC_WEAK_FUNC(sub_82E8C8A8);
PPC_FUNC_IMPL(__imp__sub_82E8C8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// lwz r9,24692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24692);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,72(r9)
	PPC_STORE_U64(ctx.r9.u32 + 72, ctx.r11.u64);
	// lwz r9,24692(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24692);
	// stw r11,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r11.u32);
	// lwz r10,24692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24692);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C8D4"))) PPC_WEAK_FUNC(sub_82E8C8D4);
PPC_FUNC_IMPL(__imp__sub_82E8C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C8D8"))) PPC_WEAK_FUNC(sub_82E8C8D8);
PPC_FUNC_IMPL(__imp__sub_82E8C8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,24692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c8f0
	if (cr6.eq) goto loc_82E8C8F0;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
loc_82E8C8F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C8F8"))) PPC_WEAK_FUNC(sub_82E8C8F8);
PPC_FUNC_IMPL(__imp__sub_82E8C8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,24692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c910
	if (cr6.eq) goto loc_82E8C910;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// blr 
	return;
loc_82E8C910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8C918"))) PPC_WEAK_FUNC(sub_82E8C918);
PPC_FUNC_IMPL(__imp__sub_82E8C918) {
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
	// lis r31,-31756
	ctx.r31.s64 = -2081161216;
	// lwz r11,-28160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8c97c
	if (cr6.eq) goto loc_82E8C97C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E8C950;
	sub_82595150(ctx, base);
	// lwz r30,-28160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28160);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e8c96c
	if (cr6.eq) goto loc_82E8C96C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee3478
	ctx.lr = 0x82E8C964;
	sub_82EE3478(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82E8C96C;
	sub_82416268(ctx, base);
loc_82E8C96C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E8C974;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-28160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28160, ctx.r11.u32);
loc_82E8C97C:
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

__attribute__((alias("__imp__sub_82E8C994"))) PPC_WEAK_FUNC(sub_82E8C994);
PPC_FUNC_IMPL(__imp__sub_82E8C994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8C998"))) PPC_WEAK_FUNC(sub_82E8C998);
PPC_FUNC_IMPL(__imp__sub_82E8C998) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8ca00
	if (cr6.eq) goto loc_82E8CA00;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8c9ec
	if (cr6.eq) goto loc_82E8C9EC;
	// li r10,29
	ctx.r10.s64 = 29;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82E8C9E0;
	sub_825952B8(ctx, base);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
loc_82E8C9EC:
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// stw r30,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// stw r30,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r30.u32);
loc_82E8CA00:
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

__attribute__((alias("__imp__sub_82E8CA18"))) PPC_WEAK_FUNC(sub_82E8CA18);
PPC_FUNC_IMPL(__imp__sub_82E8CA18) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,28824
	ctx.r4.s64 = ctx.r11.s64 + 28824;
	// bl 0x83103328
	ctx.lr = 0x82E8CA3C;
	sub_83103328(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,28952
	ctx.r9.s64 = ctx.r10.s64 + 28952;
	// li r5,24
	ctx.r5.s64 = 24;
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E8CA74;
	sub_831CDCF0(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E8CA80:
	// stdu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r30.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82e8ca80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E8CA80;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E8CAA8"))) PPC_WEAK_FUNC(sub_82E8CAA8);
PPC_FUNC_IMPL(__imp__sub_82E8CAA8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28952
	ctx.r10.s64 = ctx.r11.s64 + 28952;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8c998
	ctx.lr = 0x82E8CAD0;
	sub_82E8C998(ctx, base);
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// stw r11,24692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24692, ctx.r11.u32);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e8cb04
	if (cr6.eq) goto loc_82E8CB04;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8CAFC;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_82E8CB04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82E8CB0C;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_82E8CB24"))) PPC_WEAK_FUNC(sub_82E8CB24);
PPC_FUNC_IMPL(__imp__sub_82E8CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CB28"))) PPC_WEAK_FUNC(sub_82E8CB28);
PPC_FUNC_IMPL(__imp__sub_82E8CB28) {
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
	// bl 0x82eca7a0
	ctx.lr = 0x82E8CB44;
	sub_82ECA7A0(ctx, base);
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// beq cr6,0x82e8cb68
	if (cr6.eq) goto loc_82E8CB68;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82eca7b0
	ctx.lr = 0x82E8CB5C;
	sub_82ECA7B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82E8CB68:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82e8cbd0
	if (!cr6.eq) goto loc_82E8CBD0;
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// lwz r30,-28160(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28160);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e8cb90
	if (!cr6.eq) goto loc_82E8CB90;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x82e8c6a0
	ctx.lr = 0x82E8CB8C;
	sub_82E8C6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E8CB90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee3658
	ctx.lr = 0x82E8CB98;
	sub_82EE3658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbz r30,112(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8cbd0
	if (cr6.eq) goto loc_82E8CBD0;
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// bl 0x82e8c918
	ctx.lr = 0x82E8CBBC;
	sub_82E8C918(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8cbd0
	if (cr6.eq) goto loc_82E8CBD0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82E8CBD0:
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

__attribute__((alias("__imp__sub_82E8CBE8"))) PPC_WEAK_FUNC(sub_82E8CBE8);
PPC_FUNC_IMPL(__imp__sub_82E8CBE8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,24692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e8cc38
	if (!cr6.eq) goto loc_82E8CC38;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,216
	ctx.r4.s64 = 216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E8CC20;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8cc30
	if (cr6.eq) goto loc_82E8CC30;
	// bl 0x82e8ca18
	ctx.lr = 0x82E8CC2C;
	sub_82E8CA18(ctx, base);
	// b 0x82e8cc34
	goto loc_82E8CC34;
loc_82E8CC30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8CC34:
	// stw r3,24692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24692, ctx.r3.u32);
loc_82E8CC38:
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

__attribute__((alias("__imp__sub_82E8CC4C"))) PPC_WEAK_FUNC(sub_82E8CC4C);
PPC_FUNC_IMPL(__imp__sub_82E8CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CC50"))) PPC_WEAK_FUNC(sub_82E8CC50);
PPC_FUNC_IMPL(__imp__sub_82E8CC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E8CC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8cce4
	if (cr6.eq) goto loc_82E8CCE4;
	// bl 0x82eb2a90
	ctx.lr = 0x82E8CC78;
	sub_82EB2A90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8cce4
	if (cr6.eq) goto loc_82E8CCE4;
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8cc98
	if (cr6.eq) goto loc_82E8CC98;
	// bl 0x82e8c998
	ctx.lr = 0x82E8CC98;
	sub_82E8C998(ctx, base);
loc_82E8CC98:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E8CCB0;
	sub_82595718(ctx, base);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r3,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r3.u32);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// lwz r11,24692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24692);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x831ce980
	ctx.lr = 0x82E8CCD4;
	sub_831CE980(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eb2b30
	ctx.lr = 0x82E8CCE4;
	sub_82EB2B30(ctx, base);
loc_82E8CCE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8CCEC"))) PPC_WEAK_FUNC(sub_82E8CCEC);
PPC_FUNC_IMPL(__imp__sub_82E8CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CCF0"))) PPC_WEAK_FUNC(sub_82E8CCF0);
PPC_FUNC_IMPL(__imp__sub_82E8CCF0) {
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
	// bl 0x82e8caa8
	ctx.lr = 0x82E8CD10;
	sub_82E8CAA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8cd28
	if (cr6.eq) goto loc_82E8CD28;
	// bl 0x82416268
	ctx.lr = 0x82E8CD24;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8CD28:
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

__attribute__((alias("__imp__sub_82E8CD40"))) PPC_WEAK_FUNC(sub_82E8CD40);
PPC_FUNC_IMPL(__imp__sub_82E8CD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e8cb28
	sub_82E8CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8CD44"))) PPC_WEAK_FUNC(sub_82E8CD44);
PPC_FUNC_IMPL(__imp__sub_82E8CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8CD48"))) PPC_WEAK_FUNC(sub_82E8CD48);
PPC_FUNC_IMPL(__imp__sub_82E8CD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82E8CD50;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r3,3336
	ctx.r10.s64 = ctx.r3.s64 + 3336;
	// addi r9,r3,3388
	ctx.r9.s64 = ctx.r3.s64 + 3388;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r3,3440
	ctx.r8.s64 = ctx.r3.s64 + 3440;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r23,3
	ctx.r23.s64 = 3;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82E8CD94:
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e8cddc
	if (cr6.eq) goto loc_82E8CDDC;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82E8CDA8:
	// add r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e8cdc4
	if (cr6.eq) goto loc_82E8CDC4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8cdc4
	if (cr6.eq) goto loc_82E8CDC4;
	// bl 0x832dec30
	ctx.lr = 0x82E8CDC4;
	sub_832DEC30(ctx, base);
loc_82E8CDC4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bne 0x82e8cda8
	if (!cr0.eq) goto loc_82E8CDA8;
loc_82E8CDDC:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x82e8cd94
	if (!cr0.eq) goto loc_82E8CD94;
	// li r5,3328
	ctx.r5.s64 = 3328;
	// stw r28,3332(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3332, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3384(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3384, ctx.r28.u32);
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// stw r28,3436(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3436, ctx.r28.u32);
	// stw r28,3536(r24)
	PPC_STORE_U32(ctx.r24.u32 + 3536, ctx.r28.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E8CE08;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8CE10"))) PPC_WEAK_FUNC(sub_82E8CE10);
PPC_FUNC_IMPL(__imp__sub_82E8CE10) {
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
	// bl 0x8310cc00
	ctx.lr = 0x82E8CE24;
	sub_8310CC00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e8ce48
	if (!cr6.eq) goto loc_82E8CE48;
loc_82E8CE30:
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
loc_82E8CE48:
	// bl 0x8308e078
	ctx.lr = 0x82E8CE4C;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82e8ce30
	if (!cr6.lt) goto loc_82E8CE30;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r9,r11,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82E8CE80"))) PPC_WEAK_FUNC(sub_82E8CE80);
PPC_FUNC_IMPL(__imp__sub_82E8CE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E8CE88;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82e8cec8
	if (cr6.lt) goto loc_82E8CEC8;
	// beq cr6,0x82e8cebc
	if (cr6.eq) goto loc_82E8CEBC;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x82e8d028
	if (!cr6.lt) goto loc_82E8D028;
	// lwz r31,3536(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3536);
	// addi r29,r4,3440
	ctx.r29.s64 = ctx.r4.s64 + 3440;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x82e8ced4
	goto loc_82E8CED4;
loc_82E8CEBC:
	// lwz r31,3436(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3436);
	// addi r29,r4,3388
	ctx.r29.s64 = ctx.r4.s64 + 3388;
	// b 0x82e8ced0
	goto loc_82E8CED0;
loc_82E8CEC8:
	// lwz r31,3384(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3384);
	// addi r29,r4,3336
	ctx.r29.s64 = ctx.r4.s64 + 3336;
loc_82E8CED0:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82E8CED4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e8d028
	if (cr6.eq) goto loc_82E8D028;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x82e8cf84
	if (!cr6.eq) goto loc_82E8CF84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c280
	ctx.lr = 0x82E8CEEC;
	sub_82A5C280(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// bl 0x83524ad0
	ctx.lr = 0x82E8CF00;
	sub_83524AD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x826501d8
	ctx.lr = 0x82E8CF10;
	sub_826501D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c300
	ctx.lr = 0x82E8CF1C;
	sub_82A5C300(ctx, base);
	// divwu r9,r3,r31
	ctx.r9.u32 = PPCDivide(ctx.r3.u32, ctx.r31.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mullw r8,r9,r31
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// twllei r31,0
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// subf r30,r8,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r8.s64;
	// beq cr6,0x82e8cf7c
	if (cr6.eq) goto loc_82E8CF7C;
loc_82E8CF38:
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// twllei r31,0
	// divwu r9,r11,r31
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r31.u32);
	// mullw r8,r9,r31
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bgt cr6,0x82e8cf78
	if (cr6.gt) goto loc_82E8CF78;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// blt cr6,0x82e8cf38
	if (cr6.lt) goto loc_82E8CF38;
	// b 0x82e8cf7c
	goto loc_82E8CF7C;
loc_82E8CF78:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82E8CF7C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c688
	ctx.lr = 0x82E8CF84;
	sub_82A5C688(ctx, base);
loc_82E8CF84:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82e8d028
	if (cr6.lt) goto loc_82E8D028;
	// divwu r11,r30,r31
	ctx.r11.u32 = PPCDivide(ctx.r30.u32, ctx.r31.u32);
	// twllei r31,0
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e8cfcc
	if (cr6.eq) goto loc_82E8CFCC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82e8cff4
	if (!cr6.eq) goto loc_82E8CFF4;
loc_82E8CFCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lis r4,19278
	ctx.r4.s64 = 1263403008;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,2034
	ctx.r4.u64 = ctx.r4.u64 | 2034;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x832dec18
	ctx.lr = 0x82E8CFE8;
	sub_832DEC18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e8cff4
	if (cr6.eq) goto loc_82E8CFF4;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82E8CFF4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d00c
	if (cr6.eq) goto loc_82E8D00C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82E8D00C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82e8d02c
	if (!cr6.eq) goto loc_82E8D02C;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82E8D028:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82E8D02C:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8D03C"))) PPC_WEAK_FUNC(sub_82E8D03C);
PPC_FUNC_IMPL(__imp__sub_82E8D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D040"))) PPC_WEAK_FUNC(sub_82E8D040);
PPC_FUNC_IMPL(__imp__sub_82E8D040) {
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
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82e8d120
	if (cr6.eq) goto loc_82E8D120;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e8d120
	if (cr6.eq) goto loc_82E8D120;
	// lwz r9,3384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3384);
	// addi r8,r3,3336
	ctx.r8.s64 = ctx.r3.s64 + 3336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8d0a0
	if (cr6.eq) goto loc_82E8D0A0;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82E8D07C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e8d09c
	if (cr6.eq) goto loc_82E8D09C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e8d07c
	if (cr6.lt) goto loc_82E8D07C;
	// b 0x82e8d0a0
	goto loc_82E8D0A0;
loc_82E8D09C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82E8D0A0:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8d0c4
	if (!cr6.eq) goto loc_82E8D0C4;
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
loc_82E8D0C4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d0e8
	if (cr6.eq) goto loc_82E8D0E8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82E8D0E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8d120
	if (!cr6.eq) goto loc_82E8D120;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832dec30
	ctx.lr = 0x82E8D0FC;
	sub_832DEC30(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_82E8D120:
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

__attribute__((alias("__imp__sub_82E8D138"))) PPC_WEAK_FUNC(sub_82E8D138);
PPC_FUNC_IMPL(__imp__sub_82E8D138) {
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
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82e8d218
	if (cr6.eq) goto loc_82E8D218;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e8d218
	if (cr6.eq) goto loc_82E8D218;
	// lwz r9,3436(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// addi r8,r3,3388
	ctx.r8.s64 = ctx.r3.s64 + 3388;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8d198
	if (cr6.eq) goto loc_82E8D198;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82E8D174:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e8d194
	if (cr6.eq) goto loc_82E8D194;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e8d174
	if (cr6.lt) goto loc_82E8D174;
	// b 0x82e8d198
	goto loc_82E8D198;
loc_82E8D194:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82E8D198:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8d1bc
	if (!cr6.eq) goto loc_82E8D1BC;
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
loc_82E8D1BC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d1e0
	if (cr6.eq) goto loc_82E8D1E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82E8D1E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e8d218
	if (!cr6.eq) goto loc_82E8D218;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832dec30
	ctx.lr = 0x82E8D1F4;
	sub_832DEC30(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_82E8D218:
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

__attribute__((alias("__imp__sub_82E8D230"))) PPC_WEAK_FUNC(sub_82E8D230);
PPC_FUNC_IMPL(__imp__sub_82E8D230) {
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
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82e8d260
	if (!cr6.eq) goto loc_82E8D260;
loc_82E8D248:
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
loc_82E8D260:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e8d248
	if (cr6.eq) goto loc_82E8D248;
	// lwz r9,3536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3536);
	// addi r8,r3,3440
	ctx.r8.s64 = ctx.r3.s64 + 3440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e8d2a8
	if (cr6.eq) goto loc_82E8D2A8;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82E8D284:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e8d2a4
	if (cr6.eq) goto loc_82E8D2A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e8d284
	if (cr6.lt) goto loc_82E8D284;
	// b 0x82e8d2a8
	goto loc_82E8D2A8;
loc_82E8D2A4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82E8D2A8:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8d2cc
	if (!cr6.eq) goto loc_82E8D2CC;
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
loc_82E8D2CC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d2f0
	if (cr6.eq) goto loc_82E8D2F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82E8D2F0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832dec30
	ctx.lr = 0x82E8D2F8;
	sub_832DEC30(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82E8D31C"))) PPC_WEAK_FUNC(sub_82E8D31C);
PPC_FUNC_IMPL(__imp__sub_82E8D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D320"))) PPC_WEAK_FUNC(sub_82E8D320);
PPC_FUNC_IMPL(__imp__sub_82E8D320) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,29136
	ctx.r10.s64 = ctx.r11.s64 + 29136;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r31,3332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3332, ctx.r31.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,3384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3384, ctx.r31.u32);
	// li r5,3328
	ctx.r5.s64 = 3328;
	// stw r31,3436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3436, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,3536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3536, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r9,3540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3540, ctx.r9.u32);
	// stw r31,3572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3572, ctx.r31.u32);
	// stw r31,3576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3576, ctx.r31.u32);
	// stw r8,3600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3600, ctx.r8.u32);
	// stw r31,3596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3596, ctx.r31.u32);
	// stb r31,3580(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3580, ctx.r31.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82E8D388;
	sub_831CDCF0(ctx, base);
	// addi r7,r30,3336
	ctx.r7.s64 = ctx.r30.s64 + 3336;
	// addi r6,r30,3388
	ctx.r6.s64 = ctx.r30.s64 + 3388;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r30,3440
	ctx.r5.s64 = ctx.r30.s64 + 3440;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82E8D3C0:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8d3f0
	if (cr6.eq) goto loc_82E8D3F0;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E8D3D8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// bdnz 0x82e8d3d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E8D3D8;
loc_82E8D3F0:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bne 0x82e8d3c0
	if (!cr0.eq) goto loc_82E8D3C0;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r30,3540
	ctx.r11.s64 = ctx.r30.s64 + 3540;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E8D408:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e8d408
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E8D408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82E8D42C"))) PPC_WEAK_FUNC(sub_82E8D42C);
PPC_FUNC_IMPL(__imp__sub_82E8D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8D430"))) PPC_WEAK_FUNC(sub_82E8D430);
PPC_FUNC_IMPL(__imp__sub_82E8D430) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r3,3544
	ctx.r3.s64 = ctx.r3.s64 + 3544;
	// addi r9,r11,29136
	ctx.r9.s64 = ctx.r11.s64 + 29136;
	// lwz r10,3544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3544);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// bne cr6,0x82e8d468
	if (!cr6.eq) goto loc_82E8D468;
	// bl 0x832d3160
	ctx.lr = 0x82E8D468;
	sub_832D3160(ctx, base);
loc_82E8D468:
	// lwz r3,3540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3540);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e8d480
	if (cr6.eq) goto loc_82E8D480;
	// bl 0x832d1a68
	ctx.lr = 0x82E8D478;
	sub_832D1A68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3540, ctx.r11.u32);
loc_82E8D480:
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r31,r31,3580
	ctx.r31.s64 = ctx.r31.s64 + 3580;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,24700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24700, ctx.r30.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82e8d4a8
	if (cr6.lt) goto loc_82E8D4A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82E8D4A8;
	sub_82416268(ctx, base);
loc_82E8D4A8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82E8D4D0"))) PPC_WEAK_FUNC(sub_82E8D4D0);
PPC_FUNC_IMPL(__imp__sub_82E8D4D0) {
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
	// bl 0x82e8d430
	ctx.lr = 0x82E8D4F0;
	sub_82E8D430(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d508
	if (cr6.eq) goto loc_82E8D508;
	// bl 0x82416268
	ctx.lr = 0x82E8D504;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E8D508:
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

__attribute__((alias("__imp__sub_82E8D520"))) PPC_WEAK_FUNC(sub_82E8D520);
PPC_FUNC_IMPL(__imp__sub_82E8D520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82E8D528;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3572);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e8d7c8
	if (cr6.lt) goto loc_82E8D7C8;
	// bne cr6,0x82e8d854
	if (!cr6.eq) goto loc_82E8D854;
	// addi r24,r3,3332
	ctx.r24.s64 = ctx.r3.s64 + 3332;
	// addi r30,r3,3544
	ctx.r30.s64 = ctx.r3.s64 + 3544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824168e8
	ctx.lr = 0x82E8D560;
	sub_824168E8(ctx, base);
	// cmplwi cr6,r3,996
	cr6.compare<uint32_t>(ctx.r3.u32, 996, xer);
	// beq cr6,0x82e8d854
	if (cr6.eq) goto loc_82E8D854;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,3540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3540);
	// bne cr6,0x82e8d79c
	if (!cr6.eq) goto loc_82E8D79C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e8d588
	if (cr6.eq) goto loc_82E8D588;
	// bl 0x832d1a68
	ctx.lr = 0x82E8D580;
	sub_832D1A68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3540, ctx.r11.u32);
loc_82E8D588:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e8d78c
	if (!cr6.gt) goto loc_82E8D78C;
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r9,-31774
	ctx.r9.s64 = -2082340864;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r25,15
	ctx.r25.s64 = 15;
	// addi r28,r11,-22048
	ctx.r28.s64 = ctx.r11.s64 + -22048;
	// addi r27,r10,-22076
	ctx.r27.s64 = ctx.r10.s64 + -22076;
	// addi r29,r9,-22104
	ctx.r29.s64 = ctx.r9.s64 + -22104;
loc_82E8D5B8:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x82E8D5C4;
	sub_82475D40(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bge cr6,0x82e8d5e0
	if (!cr6.lt) goto loc_82E8D5E0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82e8d5e8
	if (cr6.lt) goto loc_82E8D5E8;
loc_82E8D5E0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82e8d5ec
	goto loc_82E8D5EC;
loc_82E8D5E8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82E8D5EC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82e8d604
	if (!cr6.lt) goto loc_82E8D604;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E8D604:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e8d628
	if (cr6.eq) goto loc_82E8D628;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,13512
	ctx.r7.s64 = ctx.r11.s64 + 13512;
	// bl 0x82e8b6a8
	ctx.lr = 0x82E8D61C;
	sub_82E8B6A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82e8d62c
	goto loc_82E8D62C;
loc_82E8D628:
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_82E8D62C:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bge cr6,0x82e8d63c
	if (!cr6.lt) goto loc_82E8D63C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E8D63C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82E8D644;
	sub_837B0C10(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8d658
	if (cr6.lt) goto loc_82E8D658;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e8d65c
	goto loc_82E8D65C;
loc_82E8D658:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82E8D65C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x827a8810
	ctx.lr = 0x82E8D670;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e8d6a0
	if (!cr6.eq) goto loc_82E8D6A0;
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// addi r11,r11,278
	ctx.r11.s64 = ctx.r11.s64 + 278;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r9.u32);
	// b 0x82e8d750
	goto loc_82E8D750;
loc_82E8D6A0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8d6b4
	if (cr6.lt) goto loc_82E8D6B4;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82e8d6b8
	goto loc_82E8D6B8;
loc_82E8D6B4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_82E8D6B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x827a8810
	ctx.lr = 0x82E8D6CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e8d6fc
	if (!cr6.eq) goto loc_82E8D6FC;
	// lwz r11,3436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,3388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3388, ctx.r30.u32);
	// lwz r11,3436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r9.u32);
	// b 0x82e8d750
	goto loc_82E8D750;
loc_82E8D6FC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8d710
	if (cr6.lt) goto loc_82E8D710;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82e8d714
	goto loc_82E8D714;
loc_82E8D710:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82E8D714:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574d38
	ctx.lr = 0x82E8D724;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e8d750
	if (cr6.eq) goto loc_82E8D750;
	// lwz r11,3536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3536);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,3440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3440, ctx.r30.u32);
	// lwz r11,3536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3536);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r9.u32);
loc_82E8D750:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82E8D758;
	sub_8387E8E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8d76c
	if (cr6.lt) goto loc_82E8D76C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8D76C;
	sub_82416268(ctx, base);
loc_82E8D76C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// blt cr6,0x82e8d5b8
	if (cr6.lt) goto loc_82E8D5B8;
loc_82E8D78C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82E8D79C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e8d7b0
	if (cr6.eq) goto loc_82E8D7B0;
	// bl 0x832d1a68
	ctx.lr = 0x82E8D7A8;
	sub_832D1A68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3540, ctx.r11.u32);
loc_82E8D7B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832d3160
	ctx.lr = 0x82E8D7B8;
	sub_832D3160(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r23,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82E8D7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ce10
	ctx.lr = 0x82E8D7D0;
	sub_82E8CE10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d83c
	if (cr6.eq) goto loc_82E8D83C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8cd48
	ctx.lr = 0x82E8D7E4;
	sub_82E8CD48(ctx, base);
	// addi r30,r31,3540
	ctx.r30.s64 = ctx.r31.s64 + 3540;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832e0220
	ctx.lr = 0x82E8D7FC;
	sub_832E0220(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e8d83c
	if (!cr6.eq) goto loc_82E8D83C;
	// addi r7,r31,3544
	ctx.r7.s64 = ctx.r31.s64 + 3544;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3328
	ctx.r5.s64 = 3328;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x832d31b8
	ctx.lr = 0x82E8D81C;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x82e8d848
	if (cr6.eq) goto loc_82E8D848;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e8d83c
	if (cr6.eq) goto loc_82E8D83C;
	// bl 0x832d1a68
	ctx.lr = 0x82E8D834;
	sub_832D1A68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82E8D83C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82E8D848:
	// lwz r11,3572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3572);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r11.u32);
loc_82E8D854:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8D860"))) PPC_WEAK_FUNC(sub_82E8D860);
PPC_FUNC_IMPL(__imp__sub_82E8D860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82E8D868;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8d890
	if (cr6.lt) goto loc_82E8D890;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x82e8d894
	goto loc_82E8D894;
loc_82E8D890:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82E8D894:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
loc_82E8D8AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8d8ac
	if (!cr6.eq) goto loc_82E8D8AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E8D8D0;
	sub_82472FC0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bge cr6,0x82e8d8ec
	if (!cr6.lt) goto loc_82E8D8EC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82e8d8f4
	if (cr6.lt) goto loc_82E8D8F4;
loc_82E8D8EC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82e8d8f8
	goto loc_82E8D8F8;
loc_82E8D8F4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82E8D8F8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82e8d90c
	if (!cr6.lt) goto loc_82E8D90C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E8D90C:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e8d924
	if (cr6.eq) goto loc_82E8D924;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,13512
	ctx.r7.s64 = ctx.r11.s64 + 13512;
	// bl 0x82e8b6a8
	ctx.lr = 0x82E8D924;
	sub_82E8B6A8(ctx, base);
loc_82E8D924:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8d948
	if (cr6.eq) goto loc_82E8D948;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r26,3580
	ctx.r3.s64 = ctx.r26.s64 + 3580;
	// bl 0x82470e60
	ctx.lr = 0x82E8D948;
	sub_82470E60(ctx, base);
loc_82E8D948:
	// addi r28,r26,3440
	ctx.r28.s64 = ctx.r26.s64 + 3440;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82E8D954:
	// lwz r11,3536(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3536);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e8daf0
	if (!cr6.lt) goto loc_82E8DAF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r4,r11,8
	xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r4.s64 = ctx.r11.s64 + 8;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e8da74
	if (cr0.eq) goto loc_82E8DA74;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8D970:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8d970
	if (!cr6.eq) goto loc_82E8D970;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e8da74
	if (cr6.eq) goto loc_82E8DA74;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
loc_82E8D9A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8d9a4
	if (!cr6.eq) goto loc_82E8D9A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E8D9C8;
	sub_82472FC0(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bge cr6,0x82e8d9e4
	if (!cr6.lt) goto loc_82E8D9E4;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// blt cr6,0x82e8d9ec
	if (cr6.lt) goto loc_82E8D9EC;
loc_82E8D9E4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82e8d9f0
	goto loc_82E8D9F0;
loc_82E8D9EC:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82E8D9F0:
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x82e8da04
	if (!cr6.lt) goto loc_82E8DA04;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82E8DA04:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e8da20
	if (cr6.eq) goto loc_82E8DA20;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,13512
	ctx.r7.s64 = ctx.r11.s64 + 13512;
	// bl 0x82e8b6a8
	ctx.lr = 0x82E8DA1C;
	sub_82E8B6A8(ctx, base);
	// b 0x82e8da24
	goto loc_82E8DA24;
loc_82E8DA20:
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_82E8DA24:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8da38
	if (!cr6.lt) goto loc_82E8DA38;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82E8DA38:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x827a8810
	ctx.lr = 0x82E8DA4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e8da80
	if (cr6.eq) goto loc_82E8DA80;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8da68
	if (cr6.lt) goto loc_82E8DA68;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E8DA68;
	sub_82416268(ctx, base);
loc_82E8DA68:
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
loc_82E8DA74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// b 0x82e8d954
	goto loc_82E8D954;
loc_82E8DA80:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e8ce80
	ctx.lr = 0x82E8DA94;
	sub_82E8CE80(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8daa8
	if (cr6.lt) goto loc_82E8DAA8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E8DAA8;
	sub_82416268(ctx, base);
loc_82E8DAA8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82e8dac8
	if (cr6.lt) goto loc_82E8DAC8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8DAC8;
	sub_82416268(ctx, base);
loc_82E8DAC8:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82e8dbb8
	if (cr6.lt) goto loc_82E8DBB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82e8dbb0
	goto loc_82E8DBB0;
loc_82E8DAF0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8db74
	if (cr6.eq) goto loc_82E8DB74;
	// divwu r9,r30,r11
	ctx.r9.u32 = PPCDivide(ctx.r30.u32, ctx.r11.u32);
	// twllei r11,0
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82e8db38
	if (cr6.eq) goto loc_82E8DB38;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e8db60
	if (!cr6.eq) goto loc_82E8DB60;
loc_82E8DB38:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r4,19278
	ctx.r4.s64 = 1263403008;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,2034
	ctx.r4.u64 = ctx.r4.u64 | 2034;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x832dec18
	ctx.lr = 0x82E8DB54;
	sub_832DEC18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e8db60
	if (cr6.eq) goto loc_82E8DB60;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82E8DB60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82e8db74
	if (cr6.eq) goto loc_82E8DB74;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x82e8db78
	goto loc_82E8DB78;
loc_82E8DB74:
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
loc_82E8DB78:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8db8c
	if (cr6.lt) goto loc_82E8DB8C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8DB8C;
	sub_82416268(ctx, base);
loc_82E8DB8C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82e8dbb8
	if (cr6.lt) goto loc_82E8DBB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82E8DBB0:
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E8DBB8;
	sub_825952B8(ctx, base);
loc_82E8DBB8:
	// stw r25,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r25.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r30.u32);
	// stb r30,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r30.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8DBD0"))) PPC_WEAK_FUNC(sub_82E8DBD0);
PPC_FUNC_IMPL(__imp__sub_82E8DBD0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E8DC04;
	sub_82595718(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82E8DC2C"))) PPC_WEAK_FUNC(sub_82E8DC2C);
PPC_FUNC_IMPL(__imp__sub_82E8DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8DC30"))) PPC_WEAK_FUNC(sub_82E8DC30);
PPC_FUNC_IMPL(__imp__sub_82E8DC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E8DC38;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x82e8dcc0
	if (cr6.eq) goto loc_82E8DCC0;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r26,2
	ctx.r26.s64 = 2;
	// ori r27,r11,65534
	ctx.r27.u64 = ctx.r11.u64 | 65534;
loc_82E8DC60:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E8DC78;
	sub_82595718(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// beq 0x82e8dc90
	if (cr0.eq) goto loc_82E8DC90;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E8DC90:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82e8dcc8
	if (cr6.lt) goto loc_82E8DCC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82e8dc60
	if (!cr6.eq) goto loc_82E8DC60;
loc_82E8DCC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E8DCC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x82E8DCD4;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82E8DCD4"))) PPC_WEAK_FUNC(sub_82E8DCD4);
PPC_FUNC_IMPL(__imp__sub_82E8DCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8DCD8"))) PPC_WEAK_FUNC(sub_82E8DCD8);
PPC_FUNC_IMPL(__imp__sub_82E8DCD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r11,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r11.u8);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r11.u8);
	// stb r11,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r11.u8);
	// stb r11,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, ctx.r11.u8);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stb r11,133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 133, ctx.r11.u8);
	// stb r11,134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 134, ctx.r11.u8);
	// stb r11,135(r3)
	PPC_STORE_U8(ctx.r3.u32 + 135, ctx.r11.u8);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// stb r11,137(r3)
	PPC_STORE_U8(ctx.r3.u32 + 137, ctx.r11.u8);
	// stb r11,138(r3)
	PPC_STORE_U8(ctx.r3.u32 + 138, ctx.r11.u8);
	// stb r11,139(r3)
	PPC_STORE_U8(ctx.r3.u32 + 139, ctx.r11.u8);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stb r11,141(r3)
	PPC_STORE_U8(ctx.r3.u32 + 141, ctx.r11.u8);
	// stb r11,142(r3)
	PPC_STORE_U8(ctx.r3.u32 + 142, ctx.r11.u8);
	// stb r11,143(r3)
	PPC_STORE_U8(ctx.r3.u32 + 143, ctx.r11.u8);
	// stb r11,144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 144, ctx.r11.u8);
	// stb r11,145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 145, ctx.r11.u8);
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r11.u8);
	// stb r11,147(r3)
	PPC_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// stb r11,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r11.u8);
	// stb r11,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r11.u8);
	// stb r11,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r11.u8);
	// stb r11,151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 151, ctx.r11.u8);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stb r11,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, ctx.r11.u8);
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r11.u8);
	// stb r11,155(r3)
	PPC_STORE_U8(ctx.r3.u32 + 155, ctx.r11.u8);
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, ctx.r11.u8);
	// stb r11,157(r3)
	PPC_STORE_U8(ctx.r3.u32 + 157, ctx.r11.u8);
	// stb r11,158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 158, ctx.r11.u8);
	// stb r11,159(r3)
	PPC_STORE_U8(ctx.r3.u32 + 159, ctx.r11.u8);
	// stb r11,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r11.u8);
	// stb r11,161(r3)
	PPC_STORE_U8(ctx.r3.u32 + 161, ctx.r11.u8);
	// stb r11,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r11.u8);
	// stb r11,163(r3)
	PPC_STORE_U8(ctx.r3.u32 + 163, ctx.r11.u8);
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// stb r11,165(r3)
	PPC_STORE_U8(ctx.r3.u32 + 165, ctx.r11.u8);
	// stb r11,166(r3)
	PPC_STORE_U8(ctx.r3.u32 + 166, ctx.r11.u8);
	// stb r11,167(r3)
	PPC_STORE_U8(ctx.r3.u32 + 167, ctx.r11.u8);
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stb r11,169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 169, ctx.r11.u8);
	// stb r11,170(r3)
	PPC_STORE_U8(ctx.r3.u32 + 170, ctx.r11.u8);
	// stb r11,171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 171, ctx.r11.u8);
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// stb r11,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r11.u8);
	// stb r11,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r11.u8);
	// stb r11,175(r3)
	PPC_STORE_U8(ctx.r3.u32 + 175, ctx.r11.u8);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stb r11,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r11.u8);
	// stb r11,178(r3)
	PPC_STORE_U8(ctx.r3.u32 + 178, ctx.r11.u8);
	// stb r11,179(r3)
	PPC_STORE_U8(ctx.r3.u32 + 179, ctx.r11.u8);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stb r11,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r11.u8);
	// stb r11,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r11.u8);
	// stb r11,183(r3)
	PPC_STORE_U8(ctx.r3.u32 + 183, ctx.r11.u8);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stb r11,185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 185, ctx.r11.u8);
	// stb r11,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, ctx.r11.u8);
	// stb r11,187(r3)
	PPC_STORE_U8(ctx.r3.u32 + 187, ctx.r11.u8);
	// stb r11,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r11.u8);
	// stb r11,189(r3)
	PPC_STORE_U8(ctx.r3.u32 + 189, ctx.r11.u8);
	// stb r11,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r11.u8);
	// stb r11,191(r3)
	PPC_STORE_U8(ctx.r3.u32 + 191, ctx.r11.u8);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// sth r11,194(r3)
	PPC_STORE_U16(ctx.r3.u32 + 194, ctx.r11.u16);
	// stb r11,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r11.u8);
	// sth r11,198(r3)
	PPC_STORE_U16(ctx.r3.u32 + 198, ctx.r11.u16);
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// sth r11,202(r3)
	PPC_STORE_U16(ctx.r3.u32 + 202, ctx.r11.u16);
	// stb r11,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r11.u8);
	// sth r11,206(r3)
	PPC_STORE_U16(ctx.r3.u32 + 206, ctx.r11.u16);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// sth r11,210(r3)
	PPC_STORE_U16(ctx.r3.u32 + 210, ctx.r11.u16);
	// stb r11,212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 212, ctx.r11.u8);
	// sth r11,214(r3)
	PPC_STORE_U16(ctx.r3.u32 + 214, ctx.r11.u16);
	// stb r11,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r11.u8);
	// sth r11,218(r3)
	PPC_STORE_U16(ctx.r3.u32 + 218, ctx.r11.u16);
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, ctx.r11.u8);
	// sth r11,222(r3)
	PPC_STORE_U16(ctx.r3.u32 + 222, ctx.r11.u16);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// sth r11,226(r3)
	PPC_STORE_U16(ctx.r3.u32 + 226, ctx.r11.u16);
	// stb r11,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, ctx.r11.u8);
	// sth r11,230(r3)
	PPC_STORE_U16(ctx.r3.u32 + 230, ctx.r11.u16);
	// stb r11,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r11.u8);
	// sth r11,234(r3)
	PPC_STORE_U16(ctx.r3.u32 + 234, ctx.r11.u16);
	// stb r11,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r11.u8);
	// sth r11,238(r3)
	PPC_STORE_U16(ctx.r3.u32 + 238, ctx.r11.u16);
	// stb r11,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r11.u8);
	// sth r11,242(r3)
	PPC_STORE_U16(ctx.r3.u32 + 242, ctx.r11.u16);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// sth r11,246(r3)
	PPC_STORE_U16(ctx.r3.u32 + 246, ctx.r11.u16);
	// stb r11,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r11.u8);
	// sth r11,250(r3)
	PPC_STORE_U16(ctx.r3.u32 + 250, ctx.r11.u16);
	// stb r11,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r11.u8);
	// sth r11,254(r3)
	PPC_STORE_U16(ctx.r3.u32 + 254, ctx.r11.u16);
	// stb r11,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r11.u8);
	// sth r11,258(r3)
	PPC_STORE_U16(ctx.r3.u32 + 258, ctx.r11.u16);
	// stb r11,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r11.u8);
	// sth r11,262(r3)
	PPC_STORE_U16(ctx.r3.u32 + 262, ctx.r11.u16);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// sth r11,266(r3)
	PPC_STORE_U16(ctx.r3.u32 + 266, ctx.r11.u16);
	// stb r11,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, ctx.r11.u8);
	// sth r11,270(r3)
	PPC_STORE_U16(ctx.r3.u32 + 270, ctx.r11.u16);
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// sth r11,274(r3)
	PPC_STORE_U16(ctx.r3.u32 + 274, ctx.r11.u16);
	// stb r11,276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 276, ctx.r11.u8);
	// sth r11,278(r3)
	PPC_STORE_U16(ctx.r3.u32 + 278, ctx.r11.u16);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// sth r11,282(r3)
	PPC_STORE_U16(ctx.r3.u32 + 282, ctx.r11.u16);
	// stb r11,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r11.u8);
	// sth r11,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r11.u16);
	// stb r11,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r11.u8);
	// sth r11,290(r3)
	PPC_STORE_U16(ctx.r3.u32 + 290, ctx.r11.u16);
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// sth r11,294(r3)
	PPC_STORE_U16(ctx.r3.u32 + 294, ctx.r11.u16);
	// stb r11,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r11.u8);
	// sth r11,298(r3)
	PPC_STORE_U16(ctx.r3.u32 + 298, ctx.r11.u16);
	// stb r11,300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 300, ctx.r11.u8);
	// sth r11,302(r3)
	PPC_STORE_U16(ctx.r3.u32 + 302, ctx.r11.u16);
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// sth r11,306(r3)
	PPC_STORE_U16(ctx.r3.u32 + 306, ctx.r11.u16);
	// stb r11,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// sth r11,310(r3)
	PPC_STORE_U16(ctx.r3.u32 + 310, ctx.r11.u16);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r11.u8);
	// sth r11,314(r3)
	PPC_STORE_U16(ctx.r3.u32 + 314, ctx.r11.u16);
	// stb r11,316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 316, ctx.r11.u8);
	// sth r11,318(r3)
	PPC_STORE_U16(ctx.r3.u32 + 318, ctx.r11.u16);
	// stb r11,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r11.u8);
	// sth r11,322(r3)
	PPC_STORE_U16(ctx.r3.u32 + 322, ctx.r11.u16);
	// stb r11,324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 324, ctx.r11.u8);
	// sth r11,326(r3)
	PPC_STORE_U16(ctx.r3.u32 + 326, ctx.r11.u16);
	// stb r11,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r11.u8);
	// sth r11,330(r3)
	PPC_STORE_U16(ctx.r3.u32 + 330, ctx.r11.u16);
	// stb r11,332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 332, ctx.r11.u8);
	// sth r11,334(r3)
	PPC_STORE_U16(ctx.r3.u32 + 334, ctx.r11.u16);
	// stb r11,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r11.u8);
	// sth r11,338(r3)
	PPC_STORE_U16(ctx.r3.u32 + 338, ctx.r11.u16);
	// stb r11,340(r3)
	PPC_STORE_U8(ctx.r3.u32 + 340, ctx.r11.u8);
	// sth r11,342(r3)
	PPC_STORE_U16(ctx.r3.u32 + 342, ctx.r11.u16);
	// stb r11,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r11.u8);
	// sth r11,346(r3)
	PPC_STORE_U16(ctx.r3.u32 + 346, ctx.r11.u16);
	// stb r11,348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 348, ctx.r11.u8);
	// sth r11,350(r3)
	PPC_STORE_U16(ctx.r3.u32 + 350, ctx.r11.u16);
	// stb r11,352(r3)
	PPC_STORE_U8(ctx.r3.u32 + 352, ctx.r11.u8);
	// sth r11,354(r3)
	PPC_STORE_U16(ctx.r3.u32 + 354, ctx.r11.u16);
	// stb r11,356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 356, ctx.r11.u8);
	// sth r11,358(r3)
	PPC_STORE_U16(ctx.r3.u32 + 358, ctx.r11.u16);
	// stb r11,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r11.u8);
	// sth r11,362(r3)
	PPC_STORE_U16(ctx.r3.u32 + 362, ctx.r11.u16);
	// stb r11,364(r3)
	PPC_STORE_U8(ctx.r3.u32 + 364, ctx.r11.u8);
	// sth r11,366(r3)
	PPC_STORE_U16(ctx.r3.u32 + 366, ctx.r11.u16);
	// stb r11,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r11.u8);
	// sth r11,370(r3)
	PPC_STORE_U16(ctx.r3.u32 + 370, ctx.r11.u16);
	// stb r11,372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 372, ctx.r11.u8);
	// sth r11,374(r3)
	PPC_STORE_U16(ctx.r3.u32 + 374, ctx.r11.u16);
	// stb r11,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r11.u8);
	// sth r11,378(r3)
	PPC_STORE_U16(ctx.r3.u32 + 378, ctx.r11.u16);
	// stb r11,380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 380, ctx.r11.u8);
	// sth r11,382(r3)
	PPC_STORE_U16(ctx.r3.u32 + 382, ctx.r11.u16);
	// stb r11,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r11.u8);
	// sth r11,386(r3)
	PPC_STORE_U16(ctx.r3.u32 + 386, ctx.r11.u16);
	// stb r11,388(r3)
	PPC_STORE_U8(ctx.r3.u32 + 388, ctx.r11.u8);
	// sth r11,390(r3)
	PPC_STORE_U16(ctx.r3.u32 + 390, ctx.r11.u16);
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// sth r11,394(r3)
	PPC_STORE_U16(ctx.r3.u32 + 394, ctx.r11.u16);
	// stb r11,396(r3)
	PPC_STORE_U8(ctx.r3.u32 + 396, ctx.r11.u8);
	// sth r11,398(r3)
	PPC_STORE_U16(ctx.r3.u32 + 398, ctx.r11.u16);
	// stb r11,400(r3)
	PPC_STORE_U8(ctx.r3.u32 + 400, ctx.r11.u8);
	// sth r11,402(r3)
	PPC_STORE_U16(ctx.r3.u32 + 402, ctx.r11.u16);
	// stb r11,404(r3)
	PPC_STORE_U8(ctx.r3.u32 + 404, ctx.r11.u8);
	// sth r11,406(r3)
	PPC_STORE_U16(ctx.r3.u32 + 406, ctx.r11.u16);
	// stb r11,408(r3)
	PPC_STORE_U8(ctx.r3.u32 + 408, ctx.r11.u8);
	// sth r11,410(r3)
	PPC_STORE_U16(ctx.r3.u32 + 410, ctx.r11.u16);
	// stb r11,412(r3)
	PPC_STORE_U8(ctx.r3.u32 + 412, ctx.r11.u8);
	// sth r11,414(r3)
	PPC_STORE_U16(ctx.r3.u32 + 414, ctx.r11.u16);
	// stb r11,416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 416, ctx.r11.u8);
	// sth r11,418(r3)
	PPC_STORE_U16(ctx.r3.u32 + 418, ctx.r11.u16);
	// stb r11,420(r3)
	PPC_STORE_U8(ctx.r3.u32 + 420, ctx.r11.u8);
	// sth r11,422(r3)
	PPC_STORE_U16(ctx.r3.u32 + 422, ctx.r11.u16);
	// stb r11,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r11.u8);
	// sth r11,426(r3)
	PPC_STORE_U16(ctx.r3.u32 + 426, ctx.r11.u16);
	// stb r11,428(r3)
	PPC_STORE_U8(ctx.r3.u32 + 428, ctx.r11.u8);
	// sth r11,430(r3)
	PPC_STORE_U16(ctx.r3.u32 + 430, ctx.r11.u16);
	// stb r11,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, ctx.r11.u8);
	// sth r11,434(r3)
	PPC_STORE_U16(ctx.r3.u32 + 434, ctx.r11.u16);
	// stb r11,436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 436, ctx.r11.u8);
	// sth r11,438(r3)
	PPC_STORE_U16(ctx.r3.u32 + 438, ctx.r11.u16);
	// stb r11,440(r3)
	PPC_STORE_U8(ctx.r3.u32 + 440, ctx.r11.u8);
	// sth r11,442(r3)
	PPC_STORE_U16(ctx.r3.u32 + 442, ctx.r11.u16);
	// stb r11,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r11.u8);
	// sth r11,446(r3)
	PPC_STORE_U16(ctx.r3.u32 + 446, ctx.r11.u16);
	// stb r11,448(r3)
	PPC_STORE_U8(ctx.r3.u32 + 448, ctx.r11.u8);
	// sth r11,450(r3)
	PPC_STORE_U16(ctx.r3.u32 + 450, ctx.r11.u16);
	// stb r11,452(r3)
	PPC_STORE_U8(ctx.r3.u32 + 452, ctx.r11.u8);
	// sth r11,454(r3)
	PPC_STORE_U16(ctx.r3.u32 + 454, ctx.r11.u16);
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// sth r11,458(r3)
	PPC_STORE_U16(ctx.r3.u32 + 458, ctx.r11.u16);
	// stb r11,460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 460, ctx.r11.u8);
	// sth r11,462(r3)
	PPC_STORE_U16(ctx.r3.u32 + 462, ctx.r11.u16);
	// stb r11,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r11.u8);
	// sth r11,466(r3)
	PPC_STORE_U16(ctx.r3.u32 + 466, ctx.r11.u16);
	// stb r11,468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 468, ctx.r11.u8);
	// sth r11,470(r3)
	PPC_STORE_U16(ctx.r3.u32 + 470, ctx.r11.u16);
	// stb r11,472(r3)
	PPC_STORE_U8(ctx.r3.u32 + 472, ctx.r11.u8);
	// sth r11,474(r3)
	PPC_STORE_U16(ctx.r3.u32 + 474, ctx.r11.u16);
	// stb r11,476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 476, ctx.r11.u8);
	// sth r11,478(r3)
	PPC_STORE_U16(ctx.r3.u32 + 478, ctx.r11.u16);
	// stb r11,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r11.u8);
	// sth r11,482(r3)
	PPC_STORE_U16(ctx.r3.u32 + 482, ctx.r11.u16);
	// stb r11,484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 484, ctx.r11.u8);
	// sth r11,486(r3)
	PPC_STORE_U16(ctx.r3.u32 + 486, ctx.r11.u16);
	// stb r11,488(r3)
	PPC_STORE_U8(ctx.r3.u32 + 488, ctx.r11.u8);
	// sth r11,490(r3)
	PPC_STORE_U16(ctx.r3.u32 + 490, ctx.r11.u16);
	// stb r11,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r11.u8);
	// sth r11,494(r3)
	PPC_STORE_U16(ctx.r3.u32 + 494, ctx.r11.u16);
	// stb r11,496(r3)
	PPC_STORE_U8(ctx.r3.u32 + 496, ctx.r11.u8);
	// sth r11,498(r3)
	PPC_STORE_U16(ctx.r3.u32 + 498, ctx.r11.u16);
	// stb r11,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r11.u8);
	// sth r11,502(r3)
	PPC_STORE_U16(ctx.r3.u32 + 502, ctx.r11.u16);
	// stb r11,504(r3)
	PPC_STORE_U8(ctx.r3.u32 + 504, ctx.r11.u8);
	// sth r11,506(r3)
	PPC_STORE_U16(ctx.r3.u32 + 506, ctx.r11.u16);
	// stb r11,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r11.u8);
	// sth r11,510(r3)
	PPC_STORE_U16(ctx.r3.u32 + 510, ctx.r11.u16);
	// stb r11,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
	// sth r11,514(r3)
	PPC_STORE_U16(ctx.r3.u32 + 514, ctx.r11.u16);
	// stb r11,516(r3)
	PPC_STORE_U8(ctx.r3.u32 + 516, ctx.r11.u8);
	// sth r11,518(r3)
	PPC_STORE_U16(ctx.r3.u32 + 518, ctx.r11.u16);
	// stb r11,520(r3)
	PPC_STORE_U8(ctx.r3.u32 + 520, ctx.r11.u8);
	// sth r11,522(r3)
	PPC_STORE_U16(ctx.r3.u32 + 522, ctx.r11.u16);
	// stb r11,524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 524, ctx.r11.u8);
	// sth r11,526(r3)
	PPC_STORE_U16(ctx.r3.u32 + 526, ctx.r11.u16);
	// stb r11,528(r3)
	PPC_STORE_U8(ctx.r3.u32 + 528, ctx.r11.u8);
	// sth r11,530(r3)
	PPC_STORE_U16(ctx.r3.u32 + 530, ctx.r11.u16);
	// stb r11,532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 532, ctx.r11.u8);
	// sth r11,534(r3)
	PPC_STORE_U16(ctx.r3.u32 + 534, ctx.r11.u16);
	// stb r11,536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 536, ctx.r11.u8);
	// sth r11,538(r3)
	PPC_STORE_U16(ctx.r3.u32 + 538, ctx.r11.u16);
	// stb r11,540(r3)
	PPC_STORE_U8(ctx.r3.u32 + 540, ctx.r11.u8);
	// sth r11,542(r3)
	PPC_STORE_U16(ctx.r3.u32 + 542, ctx.r11.u16);
	// stb r11,544(r3)
	PPC_STORE_U8(ctx.r3.u32 + 544, ctx.r11.u8);
	// sth r11,546(r3)
	PPC_STORE_U16(ctx.r3.u32 + 546, ctx.r11.u16);
	// stb r11,548(r3)
	PPC_STORE_U8(ctx.r3.u32 + 548, ctx.r11.u8);
	// sth r11,550(r3)
	PPC_STORE_U16(ctx.r3.u32 + 550, ctx.r11.u16);
	// stb r11,552(r3)
	PPC_STORE_U8(ctx.r3.u32 + 552, ctx.r11.u8);
	// sth r11,554(r3)
	PPC_STORE_U16(ctx.r3.u32 + 554, ctx.r11.u16);
	// stb r11,556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 556, ctx.r11.u8);
	// sth r11,558(r3)
	PPC_STORE_U16(ctx.r3.u32 + 558, ctx.r11.u16);
	// stb r11,560(r3)
	PPC_STORE_U8(ctx.r3.u32 + 560, ctx.r11.u8);
	// sth r11,562(r3)
	PPC_STORE_U16(ctx.r3.u32 + 562, ctx.r11.u16);
	// stb r11,564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 564, ctx.r11.u8);
	// sth r11,566(r3)
	PPC_STORE_U16(ctx.r3.u32 + 566, ctx.r11.u16);
	// stb r11,568(r3)
	PPC_STORE_U8(ctx.r3.u32 + 568, ctx.r11.u8);
	// sth r11,570(r3)
	PPC_STORE_U16(ctx.r3.u32 + 570, ctx.r11.u16);
	// stb r11,572(r3)
	PPC_STORE_U8(ctx.r3.u32 + 572, ctx.r11.u8);
	// sth r11,574(r3)
	PPC_STORE_U16(ctx.r3.u32 + 574, ctx.r11.u16);
	// stb r11,576(r3)
	PPC_STORE_U8(ctx.r3.u32 + 576, ctx.r11.u8);
	// sth r11,578(r3)
	PPC_STORE_U16(ctx.r3.u32 + 578, ctx.r11.u16);
	// stb r11,580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 580, ctx.r11.u8);
	// sth r11,582(r3)
	PPC_STORE_U16(ctx.r3.u32 + 582, ctx.r11.u16);
	// stb r11,584(r3)
	PPC_STORE_U8(ctx.r3.u32 + 584, ctx.r11.u8);
	// sth r11,586(r3)
	PPC_STORE_U16(ctx.r3.u32 + 586, ctx.r11.u16);
	// stb r11,588(r3)
	PPC_STORE_U8(ctx.r3.u32 + 588, ctx.r11.u8);
	// sth r11,590(r3)
	PPC_STORE_U16(ctx.r3.u32 + 590, ctx.r11.u16);
	// stb r11,592(r3)
	PPC_STORE_U8(ctx.r3.u32 + 592, ctx.r11.u8);
	// sth r11,594(r3)
	PPC_STORE_U16(ctx.r3.u32 + 594, ctx.r11.u16);
	// stb r11,596(r3)
	PPC_STORE_U8(ctx.r3.u32 + 596, ctx.r11.u8);
	// sth r11,598(r3)
	PPC_STORE_U16(ctx.r3.u32 + 598, ctx.r11.u16);
	// stb r11,600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 600, ctx.r11.u8);
	// sth r11,602(r3)
	PPC_STORE_U16(ctx.r3.u32 + 602, ctx.r11.u16);
	// stb r11,604(r3)
	PPC_STORE_U8(ctx.r3.u32 + 604, ctx.r11.u8);
	// sth r11,606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 606, ctx.r11.u16);
	// stb r11,608(r3)
	PPC_STORE_U8(ctx.r3.u32 + 608, ctx.r11.u8);
	// sth r11,610(r3)
	PPC_STORE_U16(ctx.r3.u32 + 610, ctx.r11.u16);
	// stb r11,612(r3)
	PPC_STORE_U8(ctx.r3.u32 + 612, ctx.r11.u8);
	// sth r11,614(r3)
	PPC_STORE_U16(ctx.r3.u32 + 614, ctx.r11.u16);
	// stb r11,616(r3)
	PPC_STORE_U8(ctx.r3.u32 + 616, ctx.r11.u8);
	// sth r11,618(r3)
	PPC_STORE_U16(ctx.r3.u32 + 618, ctx.r11.u16);
	// stb r11,620(r3)
	PPC_STORE_U8(ctx.r3.u32 + 620, ctx.r11.u8);
	// stw r11,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r11.u32);
	// stb r11,628(r3)
	PPC_STORE_U8(ctx.r3.u32 + 628, ctx.r11.u8);
	// stw r11,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r11.u32);
	// stb r11,636(r3)
	PPC_STORE_U8(ctx.r3.u32 + 636, ctx.r11.u8);
	// stw r11,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r11.u32);
	// stb r11,644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 644, ctx.r11.u8);
	// stw r11,648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 648, ctx.r11.u32);
	// stb r11,652(r3)
	PPC_STORE_U8(ctx.r3.u32 + 652, ctx.r11.u8);
	// stw r11,656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 656, ctx.r11.u32);
	// stb r11,660(r3)
	PPC_STORE_U8(ctx.r3.u32 + 660, ctx.r11.u8);
	// stw r11,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r11.u32);
	// stb r11,668(r3)
	PPC_STORE_U8(ctx.r3.u32 + 668, ctx.r11.u8);
	// stw r11,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// stb r11,676(r3)
	PPC_STORE_U8(ctx.r3.u32 + 676, ctx.r11.u8);
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// stb r11,684(r3)
	PPC_STORE_U8(ctx.r3.u32 + 684, ctx.r11.u8);
	// stw r11,688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 688, ctx.r11.u32);
	// stb r11,692(r3)
	PPC_STORE_U8(ctx.r3.u32 + 692, ctx.r11.u8);
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// stb r11,700(r3)
	PPC_STORE_U8(ctx.r3.u32 + 700, ctx.r11.u8);
	// stw r11,704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 704, ctx.r11.u32);
	// stb r11,708(r3)
	PPC_STORE_U8(ctx.r3.u32 + 708, ctx.r11.u8);
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// stb r11,716(r3)
	PPC_STORE_U8(ctx.r3.u32 + 716, ctx.r11.u8);
	// stw r11,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r11.u32);
	// stb r11,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r11.u8);
	// stw r11,728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 728, ctx.r11.u32);
	// stb r11,732(r3)
	PPC_STORE_U8(ctx.r3.u32 + 732, ctx.r11.u8);
	// stw r11,736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 736, ctx.r11.u32);
	// stb r11,740(r3)
	PPC_STORE_U8(ctx.r3.u32 + 740, ctx.r11.u8);
	// stw r11,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r11.u32);
	// stb r11,748(r3)
	PPC_STORE_U8(ctx.r3.u32 + 748, ctx.r11.u8);
	// stw r11,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r11.u32);
	// stb r11,756(r3)
	PPC_STORE_U8(ctx.r3.u32 + 756, ctx.r11.u8);
	// stw r11,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r11.u32);
	// stb r11,764(r3)
	PPC_STORE_U8(ctx.r3.u32 + 764, ctx.r11.u8);
	// stw r11,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r11.u32);
	// stb r11,772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 772, ctx.r11.u8);
	// stw r11,776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 776, ctx.r11.u32);
	// stb r11,780(r3)
	PPC_STORE_U8(ctx.r3.u32 + 780, ctx.r11.u8);
	// stw r11,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, ctx.r11.u32);
	// stb r11,788(r3)
	PPC_STORE_U8(ctx.r3.u32 + 788, ctx.r11.u8);
	// stw r11,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r11.u32);
	// stb r11,796(r3)
	PPC_STORE_U8(ctx.r3.u32 + 796, ctx.r11.u8);
	// stw r11,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r11.u32);
	// stb r11,804(r3)
	PPC_STORE_U8(ctx.r3.u32 + 804, ctx.r11.u8);
	// stw r11,808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 808, ctx.r11.u32);
	// stb r11,812(r3)
	PPC_STORE_U8(ctx.r3.u32 + 812, ctx.r11.u8);
	// stw r11,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r11.u32);
	// stb r11,820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 820, ctx.r11.u8);
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, ctx.r11.u32);
	// stb r11,828(r3)
	PPC_STORE_U8(ctx.r3.u32 + 828, ctx.r11.u8);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r11.u32);
	// stb r11,836(r3)
	PPC_STORE_U8(ctx.r3.u32 + 836, ctx.r11.u8);
	// stw r11,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r11.u32);
	// stb r11,844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 844, ctx.r11.u8);
	// stw r11,848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 848, ctx.r11.u32);
	// stb r11,852(r3)
	PPC_STORE_U8(ctx.r3.u32 + 852, ctx.r11.u8);
	// stw r11,856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 856, ctx.r11.u32);
	// stb r11,860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 860, ctx.r11.u8);
	// stw r11,864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 864, ctx.r11.u32);
	// stb r11,868(r3)
	PPC_STORE_U8(ctx.r3.u32 + 868, ctx.r11.u8);
	// stw r11,872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 872, ctx.r11.u32);
	// stb r11,876(r3)
	PPC_STORE_U8(ctx.r3.u32 + 876, ctx.r11.u8);
	// stw r11,880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 880, ctx.r11.u32);
	// stb r11,884(r3)
	PPC_STORE_U8(ctx.r3.u32 + 884, ctx.r11.u8);
	// stw r11,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r11.u32);
	// stb r11,892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 892, ctx.r11.u8);
	// stw r11,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r11.u32);
	// stb r11,900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 900, ctx.r11.u8);
	// stw r11,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r11.u32);
	// stb r11,908(r3)
	PPC_STORE_U8(ctx.r3.u32 + 908, ctx.r11.u8);
	// stw r11,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r11.u32);
	// stb r11,916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 916, ctx.r11.u8);
	// stw r11,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r11.u32);
	// stb r11,924(r3)
	PPC_STORE_U8(ctx.r3.u32 + 924, ctx.r11.u8);
	// stw r11,928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 928, ctx.r11.u32);
	// stb r11,932(r3)
	PPC_STORE_U8(ctx.r3.u32 + 932, ctx.r11.u8);
	// stw r11,936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 936, ctx.r11.u32);
	// stb r11,940(r3)
	PPC_STORE_U8(ctx.r3.u32 + 940, ctx.r11.u8);
	// stw r11,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r11.u32);
	// stb r11,948(r3)
	PPC_STORE_U8(ctx.r3.u32 + 948, ctx.r11.u8);
	// stw r11,952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 952, ctx.r11.u32);
	// stb r11,956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 956, ctx.r11.u8);
	// stw r11,960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 960, ctx.r11.u32);
	// stb r11,964(r3)
	PPC_STORE_U8(ctx.r3.u32 + 964, ctx.r11.u8);
	// stw r11,968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 968, ctx.r11.u32);
	// stb r11,972(r3)
	PPC_STORE_U8(ctx.r3.u32 + 972, ctx.r11.u8);
	// stw r11,976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 976, ctx.r11.u32);
	// stb r11,980(r3)
	PPC_STORE_U8(ctx.r3.u32 + 980, ctx.r11.u8);
	// stw r11,984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 984, ctx.r11.u32);
	// stb r11,988(r3)
	PPC_STORE_U8(ctx.r3.u32 + 988, ctx.r11.u8);
	// stw r11,992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 992, ctx.r11.u32);
	// stb r11,996(r3)
	PPC_STORE_U8(ctx.r3.u32 + 996, ctx.r11.u8);
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// stb r11,1004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1004, ctx.r11.u8);
	// stw r11,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r11.u32);
	// stb r11,1012(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1012, ctx.r11.u8);
	// stw r11,1016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1016, ctx.r11.u32);
	// stb r11,1020(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1020, ctx.r11.u8);
	// stw r11,1024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1024, ctx.r11.u32);
	// stb r11,1028(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1028, ctx.r11.u8);
	// stw r11,1032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1032, ctx.r11.u32);
	// stb r11,1036(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1036, ctx.r11.u8);
	// stw r11,1040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1040, ctx.r11.u32);
	// stb r11,1044(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1044, ctx.r11.u8);
	// stw r11,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r11.u32);
	// stb r11,1052(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1052, ctx.r11.u8);
	// stw r11,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r11.u32);
	// stb r11,1060(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1060, ctx.r11.u8);
	// stw r11,1064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1064, ctx.r11.u32);
	// stb r11,1068(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1068, ctx.r11.u8);
	// stw r11,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, ctx.r11.u32);
	// stb r11,1076(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1076, ctx.r11.u8);
	// stw r11,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r11.u32);
	// stb r11,1084(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1084, ctx.r11.u8);
	// stw r11,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r11.u32);
	// stb r11,1092(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1092, ctx.r11.u8);
	// stw r11,1096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1096, ctx.r11.u32);
	// stb r11,1100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1100, ctx.r11.u8);
	// stw r11,1104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1104, ctx.r11.u32);
	// stb r11,1108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1108, ctx.r11.u8);
	// stw r11,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r11.u32);
	// stb r11,1116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1116, ctx.r11.u8);
	// stw r11,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r11.u32);
	// stb r11,1124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1124, ctx.r11.u8);
	// stw r11,1128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1128, ctx.r11.u32);
	// stb r11,1132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1132, ctx.r11.u8);
	// stw r11,1136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1136, ctx.r11.u32);
	// stb r11,1140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1140, ctx.r11.u8);
	// stw r11,1144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1144, ctx.r11.u32);
	// stb r11,1148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1148, ctx.r11.u8);
	// stw r11,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r11.u32);
	// stb r11,1156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1156, ctx.r11.u8);
	// stw r11,1160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1160, ctx.r11.u32);
	// stb r11,1164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1164, ctx.r11.u8);
	// stw r11,1168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1168, ctx.r11.u32);
	// stb r11,1172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1172, ctx.r11.u8);
	// stw r11,1176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1176, ctx.r11.u32);
	// stb r11,1180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1180, ctx.r11.u8);
	// stw r11,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r11.u32);
	// stb r11,1188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1188, ctx.r11.u8);
	// stw r11,1192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1192, ctx.r11.u32);
	// stb r11,1196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1196, ctx.r11.u8);
	// stw r11,1200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1200, ctx.r11.u32);
	// stb r11,1204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1204, ctx.r11.u8);
	// stw r11,1208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1208, ctx.r11.u32);
	// stb r11,1212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1212, ctx.r11.u8);
	// stw r11,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r11.u32);
	// stb r11,1220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1220, ctx.r11.u8);
	// stw r11,1224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1224, ctx.r11.u32);
	// stb r11,1228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1228, ctx.r11.u8);
	// stw r11,1232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1232, ctx.r11.u32);
	// stb r11,1236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1236, ctx.r11.u8);
	// stw r11,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r11.u32);
	// stb r11,1244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1244, ctx.r11.u8);
	// stw r11,1248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1248, ctx.r11.u32);
	// stb r11,1252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1252, ctx.r11.u8);
	// stw r11,1256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1256, ctx.r11.u32);
	// stb r11,1260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1260, ctx.r11.u8);
	// stw r11,1264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1264, ctx.r11.u32);
	// stb r11,1268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1268, ctx.r11.u8);
	// stw r11,1272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1272, ctx.r11.u32);
	// stb r11,1276(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1276, ctx.r11.u8);
	// stw r11,1280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1280, ctx.r11.u32);
	// stb r11,1284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1284, ctx.r11.u8);
	// stw r11,1288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1288, ctx.r11.u32);
	// stb r11,1292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1292, ctx.r11.u8);
	// stw r11,1296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1296, ctx.r11.u32);
	// stb r11,1300(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1300, ctx.r11.u8);
	// stw r11,1304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1304, ctx.r11.u32);
	// stb r11,1308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1308, ctx.r11.u8);
	// stw r11,1312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1312, ctx.r11.u32);
	// stb r11,1316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1316, ctx.r11.u8);
	// stw r11,1320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1320, ctx.r11.u32);
	// stb r11,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, ctx.r11.u8);
	// stw r11,1328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1328, ctx.r11.u32);
	// stb r11,1332(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1332, ctx.r11.u8);
	// stw r11,1336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1336, ctx.r11.u32);
	// stb r11,1340(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1340, ctx.r11.u8);
	// stw r11,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r11.u32);
	// stb r11,1348(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1348, ctx.r11.u8);
	// stw r11,1352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1352, ctx.r11.u32);
	// stb r11,1356(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1356, ctx.r11.u8);
	// stw r11,1360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1360, ctx.r11.u32);
	// stb r11,1364(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1364, ctx.r11.u8);
	// stw r11,1368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1368, ctx.r11.u32);
	// stb r11,1372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1372, ctx.r11.u8);
	// stw r11,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// stb r11,1380(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1380, ctx.r11.u8);
	// stw r11,1384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1384, ctx.r11.u32);
	// stb r11,1388(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1388, ctx.r11.u8);
	// stw r11,1392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1392, ctx.r11.u32);
	// stb r11,1396(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1396, ctx.r11.u8);
	// stw r11,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r11.u32);
	// stb r11,1404(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1404, ctx.r11.u8);
	// stw r11,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r11.u32);
	// stb r11,1412(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1412, ctx.r11.u8);
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
	// stb r11,1420(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1420, ctx.r11.u8);
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// stb r11,1428(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1428, ctx.r11.u8);
	// stw r11,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r11.u32);
	// stb r11,1436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1436, ctx.r11.u8);
	// stw r11,1440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1440, ctx.r11.u32);
	// stb r11,1444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1444, ctx.r11.u8);
	// stw r11,1448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1448, ctx.r11.u32);
	// stb r11,1452(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1452, ctx.r11.u8);
	// stw r11,1456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1456, ctx.r11.u32);
	// stb r11,1460(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1460, ctx.r11.u8);
	// stw r11,1464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1464, ctx.r11.u32);
	// stb r11,1468(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1468, ctx.r11.u8);
	// stw r11,1472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1472, ctx.r11.u32);
	// stb r11,1476(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1476, ctx.r11.u8);
	// stw r11,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r11.u32);
	// stb r11,1484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1484, ctx.r11.u8);
	// stw r11,1488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1488, ctx.r11.u32);
	// stb r11,1492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1492, ctx.r11.u8);
	// stw r11,1496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1496, ctx.r11.u32);
	// stb r11,1500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1500, ctx.r11.u8);
	// stw r11,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r11.u32);
	// stb r11,1508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1508, ctx.r11.u8);
	// stw r11,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r11.u32);
	// stb r11,1516(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1516, ctx.r11.u8);
	// stw r11,1520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1520, ctx.r11.u32);
	// stb r11,1524(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1524, ctx.r11.u8);
	// stw r11,1528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1528, ctx.r11.u32);
	// stb r11,1532(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1532, ctx.r11.u8);
	// stw r11,1536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1536, ctx.r11.u32);
	// stb r11,1540(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1540, ctx.r11.u8);
	// stw r11,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// stb r11,1548(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1548, ctx.r11.u8);
	// stw r11,1552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1552, ctx.r11.u32);
	// stb r11,1556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1556, ctx.r11.u8);
	// stw r11,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// stb r11,1564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1564, ctx.r11.u8);
	// stw r11,1568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1568, ctx.r11.u32);
	// stb r11,1572(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1572, ctx.r11.u8);
	// stw r11,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r11.u32);
	// stb r11,1580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1580, ctx.r11.u8);
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// stb r11,1588(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1588, ctx.r11.u8);
	// stw r11,1592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1592, ctx.r11.u32);
	// stb r11,1596(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1596, ctx.r11.u8);
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, ctx.r11.u32);
	// stb r11,1604(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1604, ctx.r11.u8);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// stb r11,1612(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1612, ctx.r11.u8);
	// stw r11,1616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1616, ctx.r11.u32);
	// stb r11,1620(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1620, ctx.r11.u8);
	// stw r11,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r11.u32);
	// stb r11,1628(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1628, ctx.r11.u8);
	// stw r11,1632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1632, ctx.r11.u32);
	// stb r11,1636(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1636, ctx.r11.u8);
	// stw r11,1640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1640, ctx.r11.u32);
	// stb r11,1644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1644, ctx.r11.u8);
	// stw r11,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r11.u32);
	// stb r11,1652(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1652, ctx.r11.u8);
	// stw r11,1656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1656, ctx.r11.u32);
	// stb r11,1660(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1660, ctx.r11.u8);
	// stw r11,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r11.u32);
	// stb r11,1668(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1668, ctx.r11.u8);
	// stw r11,1672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1672, ctx.r11.u32);
	// stb r11,1676(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1676, ctx.r11.u8);
	// stw r11,1680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1680, ctx.r11.u32);
	// stb r11,1684(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1684, ctx.r11.u8);
	// stw r11,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r11.u32);
	// stb r11,1692(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1692, ctx.r11.u8);
	// stw r11,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r11.u32);
	// stb r11,1700(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1700, ctx.r11.u8);
	// stw r11,1704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1704, ctx.r11.u32);
	// stb r11,1708(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1708, ctx.r11.u8);
	// stw r11,1712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1712, ctx.r11.u32);
	// stb r11,1716(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1716, ctx.r11.u8);
	// stw r11,1720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1720, ctx.r11.u32);
	// stb r11,1724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1724, ctx.r11.u8);
	// stw r11,1728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1728, ctx.r11.u32);
	// stb r11,1732(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1732, ctx.r11.u8);
	// stw r11,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r11.u32);
	// stb r11,1740(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1740, ctx.r11.u8);
	// stw r11,1744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1744, ctx.r11.u32);
	// stb r11,1748(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1748, ctx.r11.u8);
	// stw r11,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r11.u32);
	// stb r11,1756(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1756, ctx.r11.u8);
	// stw r11,1760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1760, ctx.r11.u32);
	// stb r11,1764(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1764, ctx.r11.u8);
	// stw r11,1768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1768, ctx.r11.u32);
	// stb r11,1772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1772, ctx.r11.u8);
	// stw r11,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r11.u32);
	// stb r11,1780(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1780, ctx.r11.u8);
	// stw r11,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r11.u32);
	// stb r11,1788(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1788, ctx.r11.u8);
	// stw r11,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r11.u32);
	// stb r11,1796(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1796, ctx.r11.u8);
	// stw r11,1800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1800, ctx.r11.u32);
	// stb r11,1804(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1804, ctx.r11.u8);
	// stw r11,1808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1808, ctx.r11.u32);
	// stb r11,1812(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1812, ctx.r11.u8);
	// stw r11,1816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1816, ctx.r11.u32);
	// stb r11,1820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1820, ctx.r11.u8);
	// stw r11,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r11.u32);
	// stb r11,1828(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1828, ctx.r11.u8);
	// stw r11,1832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1832, ctx.r11.u32);
	// stb r11,1836(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1836, ctx.r11.u8);
	// stw r11,1840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1840, ctx.r11.u32);
	// stb r11,1844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1844, ctx.r11.u8);
	// stw r11,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r11.u32);
	// stb r11,1852(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1852, ctx.r11.u8);
	// stw r11,1856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1856, ctx.r11.u32);
	// stb r11,1860(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1860, ctx.r11.u8);
	// stw r11,1864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1864, ctx.r11.u32);
	// stb r11,1868(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1868, ctx.r11.u8);
	// stw r11,1872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1872, ctx.r11.u32);
	// stb r11,1876(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1876, ctx.r11.u8);
	// stw r11,1880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1880, ctx.r11.u32);
	// stb r11,1884(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1884, ctx.r11.u8);
	// stw r11,1888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1888, ctx.r11.u32);
	// stb r11,1892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1892, ctx.r11.u8);
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, ctx.r11.u32);
	// stb r11,1900(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1900, ctx.r11.u8);
	// stw r11,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r11.u32);
	// stb r11,1908(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1908, ctx.r11.u8);
	// stw r11,1912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1912, ctx.r11.u32);
	// stb r11,1916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1916, ctx.r11.u8);
	// stw r11,1920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1920, ctx.r11.u32);
	// stb r11,1924(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1924, ctx.r11.u8);
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
	// stb r11,1932(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1932, ctx.r11.u8);
	// stw r11,1936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1936, ctx.r11.u32);
	// stb r11,1940(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1940, ctx.r11.u8);
	// stw r11,1944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1944, ctx.r11.u32);
	// stb r11,1948(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1948, ctx.r11.u8);
	// stw r11,1952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1952, ctx.r11.u32);
	// stb r11,1956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1956, ctx.r11.u8);
	// stw r11,1960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1960, ctx.r11.u32);
	// stb r11,1964(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1964, ctx.r11.u8);
	// stw r11,1968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1968, ctx.r11.u32);
	// stb r11,1972(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1972, ctx.r11.u8);
	// stw r11,1976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8E6D8"))) PPC_WEAK_FUNC(sub_82E8E6D8);
PPC_FUNC_IMPL(__imp__sub_82E8E6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E8E6E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8e70c
	if (cr6.lt) goto loc_82E8E70C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E8E70C;
	sub_825952B8(ctx, base);
loc_82E8E70C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,68
	ctx.r29.s64 = ctx.r28.s64 + 68;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8e740
	if (cr6.lt) goto loc_82E8E740;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E8E740;
	sub_825952B8(ctx, base);
loc_82E8E740:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e8e76c
	if (cr6.lt) goto loc_82E8E76C;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E8E76C;
	sub_825952B8(ctx, base);
loc_82E8E76C:
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
	// blt cr6,0x82e8e798
	if (cr6.lt) goto loc_82E8E798;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E8E798;
	sub_825952B8(ctx, base);
loc_82E8E798:
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

__attribute__((alias("__imp__sub_82E8E7AC"))) PPC_WEAK_FUNC(sub_82E8E7AC);
PPC_FUNC_IMPL(__imp__sub_82E8E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8E7B0"))) PPC_WEAK_FUNC(sub_82E8E7B0);
PPC_FUNC_IMPL(__imp__sub_82E8E7B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80848
	ctx.lr = 0x82E8E7D0;
	sub_82B80848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e8e7e4
	if (!cr6.eq) goto loc_82E8E7E4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82e8e7f0
	goto loc_82E8E7F0;
loc_82E8E7E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e78e40
	ctx.lr = 0x82E8E7EC;
	sub_82E78E40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82E8E7F0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e8e800
	if (cr6.eq) goto loc_82E8E800;
	// bl 0x8259b510
	ctx.lr = 0x82E8E800;
	sub_8259B510(ctx, base);
loc_82E8E800:
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

__attribute__((alias("__imp__sub_82E8E818"))) PPC_WEAK_FUNC(sub_82E8E818);
PPC_FUNC_IMPL(__imp__sub_82E8E818) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E8E854;
	sub_82595718(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82e8dc30
	ctx.lr = 0x82E8E884;
	sub_82E8DC30(ctx, base);
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

__attribute__((alias("__imp__sub_82E8E8A0"))) PPC_WEAK_FUNC(sub_82E8E8A0);
PPC_FUNC_IMPL(__imp__sub_82E8E8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E8E8A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e8e9fc
	if (cr6.eq) goto loc_82E8E9FC;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8e8e8
	if (cr6.eq) goto loc_82E8E8E8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29548
	ctx.r4.s64 = ctx.r11.s64 + 29548;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82E8E8E8;
	sub_825A1EB8(ctx, base);
loc_82E8E8E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E8E8EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8e8ec
	if (!cr6.eq) goto loc_82E8E8EC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82E8E914;
	sub_825A1EB8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e8e9fc
	if (cr6.eq) goto loc_82E8E9FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r30,r11,15320
	ctx.r30.s64 = ctx.r11.s64 + 15320;
	// addi r24,r10,-22600
	ctx.r24.s64 = ctx.r10.s64 + -22600;
loc_82E8E938:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e8e950
	if (cr6.eq) goto loc_82E8E950;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82E8E950;
	sub_825A1EB8(ctx, base);
loc_82E8E950:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8c428
	ctx.lr = 0x82E8E960;
	sub_82A8C428(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82474050
	ctx.lr = 0x82E8E96C;
	sub_82474050(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a79bf8
	ctx.lr = 0x82E8E978;
	sub_82A79BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8e98c
	if (!cr6.lt) goto loc_82E8E98C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E8E98C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8E990:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8e990
	if (!cr6.eq) goto loc_82E8E990;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82E8E9B4;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e8e9c8
	if (cr6.lt) goto loc_82E8E9C8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8E9C8;
	sub_82416268(ctx, base);
loc_82E8E9C8:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E8E9E0;
	sub_82A79160(ctx, base);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831ccf00
	ctx.lr = 0x82E8E9EC;
	sub_831CCF00(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e8e938
	if (!cr6.eq) goto loc_82E8E938;
loc_82E8E9FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E8EA04;
	sub_82E62630(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8EA18;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8EA20"))) PPC_WEAK_FUNC(sub_82E8EA20);
PPC_FUNC_IMPL(__imp__sub_82E8EA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E8EA28;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e8eb7c
	if (cr6.eq) goto loc_82E8EB7C;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e8ea68
	if (cr6.eq) goto loc_82E8EA68;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29548
	ctx.r4.s64 = ctx.r11.s64 + 29548;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82E8EA68;
	sub_825A1EB8(ctx, base);
loc_82E8EA68:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E8EA6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8ea6c
	if (!cr6.eq) goto loc_82E8EA6C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82E8EA94;
	sub_825A1EB8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e8eb7c
	if (cr6.eq) goto loc_82E8EB7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r30,r11,15320
	ctx.r30.s64 = ctx.r11.s64 + 15320;
	// addi r24,r10,-22600
	ctx.r24.s64 = ctx.r10.s64 + -22600;
loc_82E8EAB8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e8ead0
	if (cr6.eq) goto loc_82E8EAD0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82E8EAD0;
	sub_825A1EB8(ctx, base);
loc_82E8EAD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8c428
	ctx.lr = 0x82E8EAE0;
	sub_82A8C428(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82474170
	ctx.lr = 0x82E8EAEC;
	sub_82474170(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a79bf8
	ctx.lr = 0x82E8EAF8;
	sub_82A79BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e8eb0c
	if (!cr6.lt) goto loc_82E8EB0C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E8EB0C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E8EB10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e8eb10
	if (!cr6.eq) goto loc_82E8EB10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82E8EB34;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e8eb48
	if (cr6.lt) goto loc_82E8EB48;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E8EB48;
	sub_82416268(ctx, base);
loc_82E8EB48:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E8EB60;
	sub_82A79160(ctx, base);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831ccf00
	ctx.lr = 0x82E8EB6C;
	sub_831CCF00(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e8eab8
	if (!cr6.eq) goto loc_82E8EAB8;
loc_82E8EB7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E8EB84;
	sub_82E62630(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E8EB98;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8EBA0"))) PPC_WEAK_FUNC(sub_82E8EBA0);
PPC_FUNC_IMPL(__imp__sub_82E8EBA0) {
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
	// bl 0x82dc0998
	ctx.lr = 0x82E8EBB8;
	sub_82DC0998(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBC0;
	sub_82E62630(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBC8;
	sub_82E62630(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBD0;
	sub_82E62630(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBD8;
	sub_82E62630(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBE0;
	sub_82E62630(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBE8;
	sub_82E62630(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBF0;
	sub_82E62630(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82e62630
	ctx.lr = 0x82E8EBF8;
	sub_82E62630(ctx, base);
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

__attribute__((alias("__imp__sub_82E8EC0C"))) PPC_WEAK_FUNC(sub_82E8EC0C);
PPC_FUNC_IMPL(__imp__sub_82E8EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8EC10"))) PPC_WEAK_FUNC(sub_82E8EC10);
PPC_FUNC_IMPL(__imp__sub_82E8EC10) {
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
	// stwu r1,-2096(r1)
	ea = -2096 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dc0998
	ctx.lr = 0x82E8EC34;
	sub_82DC0998(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC3C;
	sub_82E62630(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC44;
	sub_82E62630(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC4C;
	sub_82E62630(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC54;
	sub_82E62630(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC5C;
	sub_82E62630(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC64;
	sub_82E62630(ctx, base);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC6C;
	sub_82E62630(ctx, base);
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x82e62630
	ctx.lr = 0x82E8EC74;
	sub_82E62630(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r4,r10,29195
	ctx.r4.s64 = ctx.r10.s64 + 29195;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82E8ED08;
	sub_8259CC28(ctx, base);
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// stb r30,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8dcd8
	ctx.lr = 0x82E8ED18;
	sub_82E8DCD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb5468
	ctx.lr = 0x82E8ED20;
	sub_82EB5468(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb5488
	ctx.lr = 0x82E8ED2C;
	sub_82EB5488(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8e6d8
	ctx.lr = 0x82E8ED38;
	sub_82E8E6D8(ctx, base);
	// addi r1,r1,2096
	ctx.r1.s64 = ctx.r1.s64 + 2096;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8ED50"))) PPC_WEAK_FUNC(sub_82E8ED50);
PPC_FUNC_IMPL(__imp__sub_82E8ED50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E8ED58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82E8ED84;
	sub_8259CB28(ctx, base);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lbz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82E8EDA8;
	sub_8259CB28(ctx, base);
	// lbz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r9,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r9.u8);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82E8EDCC;
	sub_8259CB28(ctx, base);
	// lbz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r8,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r8.u8);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82E8EDF0;
	sub_8259CB28(ctx, base);
	// lbz r7,128(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// stb r7,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r7.u8);
	// lbz r6,129(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// stb r6,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r6.u8);
	// lbz r5,130(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 130);
	// stb r5,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r5.u8);
	// lbz r4,131(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 131);
	// stb r4,131(r31)
	PPC_STORE_U8(ctx.r31.u32 + 131, ctx.r4.u8);
	// lbz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// stb r3,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r3.u8);
	// lbz r11,133(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 133);
	// stb r11,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r11.u8);
	// lbz r10,134(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 134);
	// stb r10,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r10.u8);
	// lbz r9,135(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 135);
	// stb r9,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r9.u8);
	// lbz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// stb r8,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r8.u8);
	// lbz r7,137(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 137);
	// stb r7,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r7.u8);
	// lbz r6,138(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 138);
	// stb r6,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r6.u8);
	// lbz r5,139(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 139);
	// stb r5,139(r31)
	PPC_STORE_U8(ctx.r31.u32 + 139, ctx.r5.u8);
	// lbz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// stb r4,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r4.u8);
	// lbz r3,141(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 141);
	// stb r3,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r3.u8);
	// lbz r11,142(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 142);
	// stb r11,142(r31)
	PPC_STORE_U8(ctx.r31.u32 + 142, ctx.r11.u8);
	// lbz r10,143(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 143);
	// stb r10,143(r31)
	PPC_STORE_U8(ctx.r31.u32 + 143, ctx.r10.u8);
	// lbz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// stb r9,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r9.u8);
	// lbz r8,145(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 145);
	// stb r8,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r8.u8);
	// lbz r7,146(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 146);
	// stb r7,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r7.u8);
	// lbz r6,147(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 147);
	// stb r6,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r6.u8);
	// lbz r5,148(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 148);
	// stb r5,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r5.u8);
	// lbz r4,149(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 149);
	// stb r4,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r4.u8);
	// lbz r3,150(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 150);
	// stb r3,150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 150, ctx.r3.u8);
	// lbz r11,151(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 151);
	// stb r11,151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 151, ctx.r11.u8);
	// lbz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
	// lbz r9,153(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// stb r9,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r9.u8);
	// lbz r8,154(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 154);
	// stb r8,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r8.u8);
	// lbz r7,155(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 155);
	// stb r7,155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 155, ctx.r7.u8);
	// lbz r6,156(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// stb r6,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r6.u8);
	// lbz r5,157(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// stb r5,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r5.u8);
	// lbz r4,158(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 158);
	// stb r4,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r4.u8);
	// lbz r3,159(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 159);
	// stb r3,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r3.u8);
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// lbz r10,161(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 161);
	// stb r10,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r10.u8);
	// lbz r9,162(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 162);
	// stb r9,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r9.u8);
	// lbz r8,163(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 163);
	// stb r8,163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 163, ctx.r8.u8);
	// lbz r7,164(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// stb r7,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r7.u8);
	// lbz r6,165(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 165);
	// stb r6,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r6.u8);
	// lbz r5,166(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 166);
	// stb r5,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r5.u8);
	// lbz r4,167(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 167);
	// stb r4,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r4.u8);
	// lbz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// stb r3,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r3.u8);
	// lbz r11,169(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 169);
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// lbz r10,170(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// stb r10,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r10.u8);
	// lbz r9,171(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// stb r9,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r9.u8);
	// lbz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 172);
	// stb r8,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r8.u8);
	// lbz r7,173(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 173);
	// stb r7,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r7.u8);
	// lbz r6,174(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// stb r6,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r6.u8);
	// lbz r5,175(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 175);
	// stb r5,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r5.u8);
	// lbz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// stb r4,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r4.u8);
	// lbz r3,177(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 177);
	// stb r3,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r3.u8);
	// lbz r11,178(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 178);
	// stb r11,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r11.u8);
	// lbz r10,179(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 179);
	// stb r10,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r10.u8);
	// lbz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 180);
	// stb r9,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r9.u8);
	// lbz r8,181(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 181);
	// stb r8,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r8.u8);
	// lbz r7,182(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 182);
	// stb r7,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r7.u8);
	// lbz r6,183(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 183);
	// stb r6,183(r31)
	PPC_STORE_U8(ctx.r31.u32 + 183, ctx.r6.u8);
	// lbz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 184);
	// stb r5,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r5.u8);
	// lbz r4,185(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 185);
	// stb r4,185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 185, ctx.r4.u8);
	// lbz r3,186(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 186);
	// stb r3,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r3.u8);
	// lbz r11,187(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 187);
	// stb r11,187(r31)
	PPC_STORE_U8(ctx.r31.u32 + 187, ctx.r11.u8);
	// lbz r10,188(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 188);
	// stb r10,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r10.u8);
	// lbz r9,189(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 189);
	// stb r9,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r9.u8);
	// lbz r8,190(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 190);
	// stb r8,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r8.u8);
	// lbz r7,191(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 191);
	// stb r7,191(r31)
	PPC_STORE_U8(ctx.r31.u32 + 191, ctx.r7.u8);
	// lhz r6,192(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 192);
	// sth r6,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r6.u16);
	// lhz r5,194(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 194);
	// sth r5,194(r31)
	PPC_STORE_U16(ctx.r31.u32 + 194, ctx.r5.u16);
	// lhz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 196);
	// sth r4,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r4.u16);
	// lhz r3,198(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 198);
	// sth r3,198(r31)
	PPC_STORE_U16(ctx.r31.u32 + 198, ctx.r3.u16);
	// lhz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 200);
	// sth r11,200(r31)
	PPC_STORE_U16(ctx.r31.u32 + 200, ctx.r11.u16);
	// lhz r10,202(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 202);
	// sth r10,202(r31)
	PPC_STORE_U16(ctx.r31.u32 + 202, ctx.r10.u16);
	// lhz r9,204(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 204);
	// sth r9,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r9.u16);
	// lhz r8,206(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 206);
	// sth r8,206(r31)
	PPC_STORE_U16(ctx.r31.u32 + 206, ctx.r8.u16);
	// lhz r7,208(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// sth r7,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r7.u16);
	// lhz r6,210(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 210);
	// sth r6,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r6.u16);
	// lhz r5,212(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 212);
	// sth r5,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r5.u16);
	// lhz r4,214(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 214);
	// sth r4,214(r31)
	PPC_STORE_U16(ctx.r31.u32 + 214, ctx.r4.u16);
	// lhz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 216);
	// sth r3,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r3.u16);
	// lhz r11,218(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 218);
	// sth r11,218(r31)
	PPC_STORE_U16(ctx.r31.u32 + 218, ctx.r11.u16);
	// lhz r10,220(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 220);
	// sth r10,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r10.u16);
	// lhz r9,222(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 222);
	// sth r9,222(r31)
	PPC_STORE_U16(ctx.r31.u32 + 222, ctx.r9.u16);
	// lhz r8,224(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 224);
	// sth r8,224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 224, ctx.r8.u16);
	// lhz r7,226(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 226);
	// sth r7,226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 226, ctx.r7.u16);
	// lhz r6,228(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 228);
	// sth r6,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r6.u16);
	// lhz r5,230(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 230);
	// sth r5,230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 230, ctx.r5.u16);
	// lhz r4,232(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 232);
	// sth r4,232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 232, ctx.r4.u16);
	// lhz r3,234(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 234);
	// sth r3,234(r31)
	PPC_STORE_U16(ctx.r31.u32 + 234, ctx.r3.u16);
	// lhz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 236);
	// sth r11,236(r31)
	PPC_STORE_U16(ctx.r31.u32 + 236, ctx.r11.u16);
	// lhz r10,238(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 238);
	// sth r10,238(r31)
	PPC_STORE_U16(ctx.r31.u32 + 238, ctx.r10.u16);
	// lhz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 240);
	// sth r9,240(r31)
	PPC_STORE_U16(ctx.r31.u32 + 240, ctx.r9.u16);
	// lhz r8,242(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 242);
	// sth r8,242(r31)
	PPC_STORE_U16(ctx.r31.u32 + 242, ctx.r8.u16);
	// lhz r7,244(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 244);
	// sth r7,244(r31)
	PPC_STORE_U16(ctx.r31.u32 + 244, ctx.r7.u16);
	// lhz r6,246(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 246);
	// sth r6,246(r31)
	PPC_STORE_U16(ctx.r31.u32 + 246, ctx.r6.u16);
	// lhz r5,248(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 248);
	// sth r5,248(r31)
	PPC_STORE_U16(ctx.r31.u32 + 248, ctx.r5.u16);
	// lhz r4,250(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 250);
	// sth r4,250(r31)
	PPC_STORE_U16(ctx.r31.u32 + 250, ctx.r4.u16);
	// lhz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 252);
	// sth r3,252(r31)
	PPC_STORE_U16(ctx.r31.u32 + 252, ctx.r3.u16);
	// lhz r11,254(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 254);
	// sth r11,254(r31)
	PPC_STORE_U16(ctx.r31.u32 + 254, ctx.r11.u16);
	// lhz r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// sth r10,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r10.u16);
	// lhz r9,258(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 258);
	// sth r9,258(r31)
	PPC_STORE_U16(ctx.r31.u32 + 258, ctx.r9.u16);
	// lhz r8,260(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 260);
	// sth r8,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r8.u16);
	// lhz r7,262(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 262);
	// sth r7,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r7.u16);
	// lhz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 264);
	// sth r6,264(r31)
	PPC_STORE_U16(ctx.r31.u32 + 264, ctx.r6.u16);
	// lhz r5,266(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 266);
	// sth r5,266(r31)
	PPC_STORE_U16(ctx.r31.u32 + 266, ctx.r5.u16);
	// lhz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 268);
	// sth r4,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r4.u16);
	// lhz r3,270(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 270);
	// sth r3,270(r31)
	PPC_STORE_U16(ctx.r31.u32 + 270, ctx.r3.u16);
	// lhz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 272);
	// sth r11,272(r31)
	PPC_STORE_U16(ctx.r31.u32 + 272, ctx.r11.u16);
	// lhz r10,274(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 274);
	// sth r10,274(r31)
	PPC_STORE_U16(ctx.r31.u32 + 274, ctx.r10.u16);
	// lhz r9,276(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 276);
	// sth r9,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r9.u16);
	// lhz r8,278(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 278);
	// sth r8,278(r31)
	PPC_STORE_U16(ctx.r31.u32 + 278, ctx.r8.u16);
	// lhz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 280);
	// sth r7,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r7.u16);
	// lhz r6,282(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 282);
	// sth r6,282(r31)
	PPC_STORE_U16(ctx.r31.u32 + 282, ctx.r6.u16);
	// lhz r5,284(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 284);
	// sth r5,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r5.u16);
	// lhz r4,286(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 286);
	// sth r4,286(r31)
	PPC_STORE_U16(ctx.r31.u32 + 286, ctx.r4.u16);
	// lhz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 288);
	// sth r3,288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 288, ctx.r3.u16);
	// lhz r11,290(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 290);
	// sth r11,290(r31)
	PPC_STORE_U16(ctx.r31.u32 + 290, ctx.r11.u16);
	// lhz r10,292(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// sth r10,292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 292, ctx.r10.u16);
	// lhz r9,294(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 294);
	// sth r9,294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 294, ctx.r9.u16);
	// lhz r8,296(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 296);
	// sth r8,296(r31)
	PPC_STORE_U16(ctx.r31.u32 + 296, ctx.r8.u16);
	// lhz r7,298(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 298);
	// sth r7,298(r31)
	PPC_STORE_U16(ctx.r31.u32 + 298, ctx.r7.u16);
	// lhz r6,300(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 300);
	// sth r6,300(r31)
	PPC_STORE_U16(ctx.r31.u32 + 300, ctx.r6.u16);
	// lhz r5,302(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 302);
	// sth r5,302(r31)
	PPC_STORE_U16(ctx.r31.u32 + 302, ctx.r5.u16);
	// lhz r4,304(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 304);
	// sth r4,304(r31)
	PPC_STORE_U16(ctx.r31.u32 + 304, ctx.r4.u16);
	// lhz r3,306(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 306);
	// sth r3,306(r31)
	PPC_STORE_U16(ctx.r31.u32 + 306, ctx.r3.u16);
	// lhz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 308);
	// sth r11,308(r31)
	PPC_STORE_U16(ctx.r31.u32 + 308, ctx.r11.u16);
	// lhz r10,310(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 310);
	// sth r10,310(r31)
	PPC_STORE_U16(ctx.r31.u32 + 310, ctx.r10.u16);
	// lhz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 312);
	// sth r9,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r9.u16);
	// lhz r8,314(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 314);
	// sth r8,314(r31)
	PPC_STORE_U16(ctx.r31.u32 + 314, ctx.r8.u16);
	// lhz r7,316(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 316);
	// sth r7,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r7.u16);
	// lhz r6,318(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 318);
	// sth r6,318(r31)
	PPC_STORE_U16(ctx.r31.u32 + 318, ctx.r6.u16);
	// lhz r5,320(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 320);
	// sth r5,320(r31)
	PPC_STORE_U16(ctx.r31.u32 + 320, ctx.r5.u16);
	// lhz r4,322(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 322);
	// sth r4,322(r31)
	PPC_STORE_U16(ctx.r31.u32 + 322, ctx.r4.u16);
	// lhz r3,324(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 324);
	// sth r3,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r3.u16);
	// lhz r11,326(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 326);
	// sth r11,326(r31)
	PPC_STORE_U16(ctx.r31.u32 + 326, ctx.r11.u16);
	// lhz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 328);
	// sth r10,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r10.u16);
	// lhz r9,330(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 330);
	// sth r9,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r9.u16);
	// lhz r8,332(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// sth r8,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r8.u16);
	// lhz r7,334(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// sth r7,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r7.u16);
	// lhz r6,336(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 336);
	// sth r6,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r6.u16);
	// lhz r5,338(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 338);
	// sth r5,338(r31)
	PPC_STORE_U16(ctx.r31.u32 + 338, ctx.r5.u16);
	// lhz r4,340(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 340);
	// sth r4,340(r31)
	PPC_STORE_U16(ctx.r31.u32 + 340, ctx.r4.u16);
	// lhz r3,342(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 342);
	// sth r3,342(r31)
	PPC_STORE_U16(ctx.r31.u32 + 342, ctx.r3.u16);
	// lhz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 344);
	// sth r11,344(r31)
	PPC_STORE_U16(ctx.r31.u32 + 344, ctx.r11.u16);
	// lhz r10,346(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 346);
	// sth r10,346(r31)
	PPC_STORE_U16(ctx.r31.u32 + 346, ctx.r10.u16);
	// lhz r9,348(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 348);
	// sth r9,348(r31)
	PPC_STORE_U16(ctx.r31.u32 + 348, ctx.r9.u16);
	// lhz r8,350(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 350);
	// sth r8,350(r31)
	PPC_STORE_U16(ctx.r31.u32 + 350, ctx.r8.u16);
	// lhz r7,352(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 352);
	// sth r7,352(r31)
	PPC_STORE_U16(ctx.r31.u32 + 352, ctx.r7.u16);
	// lhz r6,354(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 354);
	// sth r6,354(r31)
	PPC_STORE_U16(ctx.r31.u32 + 354, ctx.r6.u16);
	// lhz r5,356(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 356);
	// sth r5,356(r31)
	PPC_STORE_U16(ctx.r31.u32 + 356, ctx.r5.u16);
	// lhz r4,358(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 358);
	// sth r4,358(r31)
	PPC_STORE_U16(ctx.r31.u32 + 358, ctx.r4.u16);
	// lhz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 360);
	// sth r3,360(r31)
	PPC_STORE_U16(ctx.r31.u32 + 360, ctx.r3.u16);
	// lhz r11,362(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 362);
	// sth r11,362(r31)
	PPC_STORE_U16(ctx.r31.u32 + 362, ctx.r11.u16);
	// lhz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 364);
	// sth r10,364(r31)
	PPC_STORE_U16(ctx.r31.u32 + 364, ctx.r10.u16);
	// lhz r9,366(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 366);
	// sth r9,366(r31)
	PPC_STORE_U16(ctx.r31.u32 + 366, ctx.r9.u16);
	// lhz r8,368(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 368);
	// sth r8,368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 368, ctx.r8.u16);
	// lhz r7,370(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 370);
	// sth r7,370(r31)
	PPC_STORE_U16(ctx.r31.u32 + 370, ctx.r7.u16);
	// lhz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 372);
	// sth r6,372(r31)
	PPC_STORE_U16(ctx.r31.u32 + 372, ctx.r6.u16);
	// lhz r5,374(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 374);
	// sth r5,374(r31)
	PPC_STORE_U16(ctx.r31.u32 + 374, ctx.r5.u16);
	// lhz r4,376(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 376);
	// sth r4,376(r31)
	PPC_STORE_U16(ctx.r31.u32 + 376, ctx.r4.u16);
	// lhz r3,378(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 378);
	// sth r3,378(r31)
	PPC_STORE_U16(ctx.r31.u32 + 378, ctx.r3.u16);
	// lhz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 380);
	// sth r11,380(r31)
	PPC_STORE_U16(ctx.r31.u32 + 380, ctx.r11.u16);
	// lhz r10,382(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 382);
	// sth r10,382(r31)
	PPC_STORE_U16(ctx.r31.u32 + 382, ctx.r10.u16);
	// lhz r9,384(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 384);
	// sth r9,384(r31)
	PPC_STORE_U16(ctx.r31.u32 + 384, ctx.r9.u16);
	// lhz r8,386(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 386);
	// sth r8,386(r31)
	PPC_STORE_U16(ctx.r31.u32 + 386, ctx.r8.u16);
	// lhz r7,388(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 388);
	// sth r7,388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 388, ctx.r7.u16);
	// lhz r6,390(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 390);
	// sth r6,390(r31)
	PPC_STORE_U16(ctx.r31.u32 + 390, ctx.r6.u16);
	// lhz r5,392(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 392);
	// sth r5,392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 392, ctx.r5.u16);
	// lhz r4,394(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 394);
	// sth r4,394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 394, ctx.r4.u16);
	// lhz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 396);
	// sth r3,396(r31)
	PPC_STORE_U16(ctx.r31.u32 + 396, ctx.r3.u16);
	// lhz r11,398(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 398);
	// sth r11,398(r31)
	PPC_STORE_U16(ctx.r31.u32 + 398, ctx.r11.u16);
	// lhz r10,400(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 400);
	// sth r10,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r10.u16);
	// lhz r9,402(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 402);
	// sth r9,402(r31)
	PPC_STORE_U16(ctx.r31.u32 + 402, ctx.r9.u16);
	// lhz r8,404(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 404);
	// sth r8,404(r31)
	PPC_STORE_U16(ctx.r31.u32 + 404, ctx.r8.u16);
	// lhz r7,406(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 406);
	// sth r7,406(r31)
	PPC_STORE_U16(ctx.r31.u32 + 406, ctx.r7.u16);
	// lhz r6,408(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 408);
	// sth r6,408(r31)
	PPC_STORE_U16(ctx.r31.u32 + 408, ctx.r6.u16);
	// lhz r5,410(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 410);
	// sth r5,410(r31)
	PPC_STORE_U16(ctx.r31.u32 + 410, ctx.r5.u16);
	// lhz r4,412(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 412);
	// sth r4,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r4.u16);
	// lhz r3,414(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 414);
	// sth r3,414(r31)
	PPC_STORE_U16(ctx.r31.u32 + 414, ctx.r3.u16);
	// lhz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 416);
	// sth r11,416(r31)
	PPC_STORE_U16(ctx.r31.u32 + 416, ctx.r11.u16);
	// lhz r10,418(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 418);
	// sth r10,418(r31)
	PPC_STORE_U16(ctx.r31.u32 + 418, ctx.r10.u16);
	// lhz r9,420(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 420);
	// sth r9,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r9.u16);
	// lhz r8,422(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 422);
	// sth r8,422(r31)
	PPC_STORE_U16(ctx.r31.u32 + 422, ctx.r8.u16);
	// lhz r7,424(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 424);
	// sth r7,424(r31)
	PPC_STORE_U16(ctx.r31.u32 + 424, ctx.r7.u16);
	// lhz r6,426(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 426);
	// sth r6,426(r31)
	PPC_STORE_U16(ctx.r31.u32 + 426, ctx.r6.u16);
	// lhz r5,428(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 428);
	// sth r5,428(r31)
	PPC_STORE_U16(ctx.r31.u32 + 428, ctx.r5.u16);
	// lhz r4,430(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 430);
	// sth r4,430(r31)
	PPC_STORE_U16(ctx.r31.u32 + 430, ctx.r4.u16);
	// lhz r3,432(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 432);
	// sth r3,432(r31)
	PPC_STORE_U16(ctx.r31.u32 + 432, ctx.r3.u16);
	// lhz r11,434(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 434);
	// sth r11,434(r31)
	PPC_STORE_U16(ctx.r31.u32 + 434, ctx.r11.u16);
	// lhz r10,436(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 436);
	// sth r10,436(r31)
	PPC_STORE_U16(ctx.r31.u32 + 436, ctx.r10.u16);
	// lhz r9,438(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 438);
	// sth r9,438(r31)
	PPC_STORE_U16(ctx.r31.u32 + 438, ctx.r9.u16);
	// lhz r8,440(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 440);
	// sth r8,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r8.u16);
	// lhz r7,442(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 442);
	// sth r7,442(r31)
	PPC_STORE_U16(ctx.r31.u32 + 442, ctx.r7.u16);
	// lhz r6,444(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 444);
	// sth r6,444(r31)
	PPC_STORE_U16(ctx.r31.u32 + 444, ctx.r6.u16);
	// lhz r5,446(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 446);
	// sth r5,446(r31)
	PPC_STORE_U16(ctx.r31.u32 + 446, ctx.r5.u16);
	// lhz r4,448(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 448);
	// sth r4,448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 448, ctx.r4.u16);
	// lhz r3,450(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 450);
	// sth r3,450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 450, ctx.r3.u16);
	// lhz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 452);
	// sth r11,452(r31)
	PPC_STORE_U16(ctx.r31.u32 + 452, ctx.r11.u16);
	// lhz r10,454(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 454);
	// sth r10,454(r31)
	PPC_STORE_U16(ctx.r31.u32 + 454, ctx.r10.u16);
	// lhz r9,456(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 456);
	// sth r9,456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 456, ctx.r9.u16);
	// lhz r8,458(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 458);
	// sth r8,458(r31)
	PPC_STORE_U16(ctx.r31.u32 + 458, ctx.r8.u16);
	// lhz r7,460(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 460);
	// sth r7,460(r31)
	PPC_STORE_U16(ctx.r31.u32 + 460, ctx.r7.u16);
	// lhz r6,462(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 462);
	// sth r6,462(r31)
	PPC_STORE_U16(ctx.r31.u32 + 462, ctx.r6.u16);
	// lhz r5,464(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 464);
	// sth r5,464(r31)
	PPC_STORE_U16(ctx.r31.u32 + 464, ctx.r5.u16);
	// lhz r4,466(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 466);
	// sth r4,466(r31)
	PPC_STORE_U16(ctx.r31.u32 + 466, ctx.r4.u16);
	// lhz r3,468(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 468);
	// sth r3,468(r31)
	PPC_STORE_U16(ctx.r31.u32 + 468, ctx.r3.u16);
	// lhz r11,470(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 470);
	// sth r11,470(r31)
	PPC_STORE_U16(ctx.r31.u32 + 470, ctx.r11.u16);
	// lhz r10,472(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 472);
	// sth r10,472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 472, ctx.r10.u16);
	// lhz r9,474(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 474);
	// sth r9,474(r31)
	PPC_STORE_U16(ctx.r31.u32 + 474, ctx.r9.u16);
	// lhz r8,476(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 476);
	// sth r8,476(r31)
	PPC_STORE_U16(ctx.r31.u32 + 476, ctx.r8.u16);
	// lhz r7,478(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 478);
	// sth r7,478(r31)
	PPC_STORE_U16(ctx.r31.u32 + 478, ctx.r7.u16);
	// lhz r6,480(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 480);
	// sth r6,480(r31)
	PPC_STORE_U16(ctx.r31.u32 + 480, ctx.r6.u16);
	// lhz r5,482(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 482);
	// sth r5,482(r31)
	PPC_STORE_U16(ctx.r31.u32 + 482, ctx.r5.u16);
	// lhz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 484);
	// sth r4,484(r31)
	PPC_STORE_U16(ctx.r31.u32 + 484, ctx.r4.u16);
	// lhz r3,486(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 486);
	// sth r3,486(r31)
	PPC_STORE_U16(ctx.r31.u32 + 486, ctx.r3.u16);
	// lhz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 488);
	// sth r11,488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 488, ctx.r11.u16);
	// lhz r10,490(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 490);
	// sth r10,490(r31)
	PPC_STORE_U16(ctx.r31.u32 + 490, ctx.r10.u16);
	// lhz r9,492(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 492);
	// sth r9,492(r31)
	PPC_STORE_U16(ctx.r31.u32 + 492, ctx.r9.u16);
	// lhz r8,494(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 494);
	// sth r8,494(r31)
	PPC_STORE_U16(ctx.r31.u32 + 494, ctx.r8.u16);
	// lhz r7,496(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 496);
	// sth r7,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r7.u16);
	// lhz r6,498(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 498);
	// sth r6,498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 498, ctx.r6.u16);
	// lhz r5,500(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 500);
	// sth r5,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r5.u16);
	// lhz r4,502(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 502);
	// sth r4,502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 502, ctx.r4.u16);
	// lhz r3,504(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 504);
	// sth r3,504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 504, ctx.r3.u16);
	// lhz r11,506(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 506);
	// sth r11,506(r31)
	PPC_STORE_U16(ctx.r31.u32 + 506, ctx.r11.u16);
	// lhz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 508);
	// sth r10,508(r31)
	PPC_STORE_U16(ctx.r31.u32 + 508, ctx.r10.u16);
	// lhz r9,510(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 510);
	// sth r9,510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 510, ctx.r9.u16);
	// lhz r8,512(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 512);
	// sth r8,512(r31)
	PPC_STORE_U16(ctx.r31.u32 + 512, ctx.r8.u16);
	// lhz r7,514(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 514);
	// sth r7,514(r31)
	PPC_STORE_U16(ctx.r31.u32 + 514, ctx.r7.u16);
	// lhz r6,516(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 516);
	// sth r6,516(r31)
	PPC_STORE_U16(ctx.r31.u32 + 516, ctx.r6.u16);
	// lhz r5,518(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 518);
	// sth r5,518(r31)
	PPC_STORE_U16(ctx.r31.u32 + 518, ctx.r5.u16);
	// lhz r4,520(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 520);
	// sth r4,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r4.u16);
	// lhz r3,522(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 522);
	// sth r3,522(r31)
	PPC_STORE_U16(ctx.r31.u32 + 522, ctx.r3.u16);
	// lhz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 524);
	// sth r11,524(r31)
	PPC_STORE_U16(ctx.r31.u32 + 524, ctx.r11.u16);
	// lhz r10,526(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 526);
	// sth r10,526(r31)
	PPC_STORE_U16(ctx.r31.u32 + 526, ctx.r10.u16);
	// lhz r9,528(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 528);
	// sth r9,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r9.u16);
	// lhz r8,530(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 530);
	// sth r8,530(r31)
	PPC_STORE_U16(ctx.r31.u32 + 530, ctx.r8.u16);
	// lhz r7,532(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 532);
	// sth r7,532(r31)
	PPC_STORE_U16(ctx.r31.u32 + 532, ctx.r7.u16);
	// lhz r6,534(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 534);
	// sth r6,534(r31)
	PPC_STORE_U16(ctx.r31.u32 + 534, ctx.r6.u16);
	// lhz r5,536(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 536);
	// sth r5,536(r31)
	PPC_STORE_U16(ctx.r31.u32 + 536, ctx.r5.u16);
	// lhz r4,538(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 538);
	// sth r4,538(r31)
	PPC_STORE_U16(ctx.r31.u32 + 538, ctx.r4.u16);
	// lhz r3,540(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 540);
	// sth r3,540(r31)
	PPC_STORE_U16(ctx.r31.u32 + 540, ctx.r3.u16);
	// lhz r11,542(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 542);
	// sth r11,542(r31)
	PPC_STORE_U16(ctx.r31.u32 + 542, ctx.r11.u16);
	// lhz r10,544(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 544);
	// sth r10,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r10.u16);
	// lhz r9,546(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 546);
	// sth r9,546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 546, ctx.r9.u16);
	// lhz r8,548(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 548);
	// sth r8,548(r31)
	PPC_STORE_U16(ctx.r31.u32 + 548, ctx.r8.u16);
	// lhz r7,550(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 550);
	// sth r7,550(r31)
	PPC_STORE_U16(ctx.r31.u32 + 550, ctx.r7.u16);
	// lhz r6,552(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 552);
	// sth r6,552(r31)
	PPC_STORE_U16(ctx.r31.u32 + 552, ctx.r6.u16);
	// lhz r5,554(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 554);
	// sth r5,554(r31)
	PPC_STORE_U16(ctx.r31.u32 + 554, ctx.r5.u16);
	// lhz r4,556(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 556);
	// sth r4,556(r31)
	PPC_STORE_U16(ctx.r31.u32 + 556, ctx.r4.u16);
	// lhz r3,558(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 558);
	// sth r3,558(r31)
	PPC_STORE_U16(ctx.r31.u32 + 558, ctx.r3.u16);
	// lhz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 560);
	// sth r11,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r11.u16);
	// lhz r10,562(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 562);
	// sth r10,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r10.u16);
	// lhz r9,564(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 564);
	// sth r9,564(r31)
	PPC_STORE_U16(ctx.r31.u32 + 564, ctx.r9.u16);
	// lhz r8,566(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 566);
	// sth r8,566(r31)
	PPC_STORE_U16(ctx.r31.u32 + 566, ctx.r8.u16);
	// lhz r7,568(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 568);
	// sth r7,568(r31)
	PPC_STORE_U16(ctx.r31.u32 + 568, ctx.r7.u16);
	// lhz r6,570(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 570);
	// sth r6,570(r31)
	PPC_STORE_U16(ctx.r31.u32 + 570, ctx.r6.u16);
	// lhz r5,572(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 572);
	// sth r5,572(r31)
	PPC_STORE_U16(ctx.r31.u32 + 572, ctx.r5.u16);
	// lhz r4,574(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 574);
	// sth r4,574(r31)
	PPC_STORE_U16(ctx.r31.u32 + 574, ctx.r4.u16);
	// lhz r3,576(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 576);
	// sth r3,576(r31)
	PPC_STORE_U16(ctx.r31.u32 + 576, ctx.r3.u16);
	// lhz r11,578(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 578);
	// sth r11,578(r31)
	PPC_STORE_U16(ctx.r31.u32 + 578, ctx.r11.u16);
	// lhz r10,580(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 580);
	// sth r10,580(r31)
	PPC_STORE_U16(ctx.r31.u32 + 580, ctx.r10.u16);
	// lhz r9,582(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 582);
	// sth r9,582(r31)
	PPC_STORE_U16(ctx.r31.u32 + 582, ctx.r9.u16);
	// lhz r8,584(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 584);
	// sth r8,584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 584, ctx.r8.u16);
	// lhz r7,586(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 586);
	// sth r7,586(r31)
	PPC_STORE_U16(ctx.r31.u32 + 586, ctx.r7.u16);
	// lhz r6,588(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 588);
	// sth r6,588(r31)
	PPC_STORE_U16(ctx.r31.u32 + 588, ctx.r6.u16);
	// lhz r5,590(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 590);
	// sth r5,590(r31)
	PPC_STORE_U16(ctx.r31.u32 + 590, ctx.r5.u16);
	// lhz r4,592(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 592);
	// sth r4,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r4.u16);
	// lhz r3,594(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 594);
	// sth r3,594(r31)
	PPC_STORE_U16(ctx.r31.u32 + 594, ctx.r3.u16);
	// lhz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 596);
	// sth r11,596(r31)
	PPC_STORE_U16(ctx.r31.u32 + 596, ctx.r11.u16);
	// lhz r10,598(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 598);
	// sth r10,598(r31)
	PPC_STORE_U16(ctx.r31.u32 + 598, ctx.r10.u16);
	// lhz r9,600(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 600);
	// sth r9,600(r31)
	PPC_STORE_U16(ctx.r31.u32 + 600, ctx.r9.u16);
	// lhz r8,602(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 602);
	// sth r8,602(r31)
	PPC_STORE_U16(ctx.r31.u32 + 602, ctx.r8.u16);
	// lhz r7,604(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// sth r7,604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 604, ctx.r7.u16);
	// lhz r6,606(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 606);
	// sth r6,606(r31)
	PPC_STORE_U16(ctx.r31.u32 + 606, ctx.r6.u16);
	// lhz r5,608(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 608);
	// sth r5,608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 608, ctx.r5.u16);
	// lhz r4,610(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 610);
	// sth r4,610(r31)
	PPC_STORE_U16(ctx.r31.u32 + 610, ctx.r4.u16);
	// lhz r3,612(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 612);
	// sth r3,612(r31)
	PPC_STORE_U16(ctx.r31.u32 + 612, ctx.r3.u16);
	// lhz r11,614(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 614);
	// sth r11,614(r31)
	PPC_STORE_U16(ctx.r31.u32 + 614, ctx.r11.u16);
	// lhz r10,616(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 616);
	// sth r10,616(r31)
	PPC_STORE_U16(ctx.r31.u32 + 616, ctx.r10.u16);
	// lhz r9,618(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 618);
	// sth r9,618(r31)
	PPC_STORE_U16(ctx.r31.u32 + 618, ctx.r9.u16);
	// lwz r8,620(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r8,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r8.u32);
	// lwz r7,624(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r7,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r7.u32);
	// lwz r6,628(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r6,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r6.u32);
	// lwz r5,632(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// stw r5,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r5.u32);
	// lwz r4,636(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	// stw r4,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r4.u32);
	// lwz r3,640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// stw r3,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r3.u32);
	// lwz r11,644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 644);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lwz r10,648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// lwz r9,652(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// stw r9,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r9.u32);
	// lwz r8,656(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// stw r8,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r8.u32);
	// lwz r7,660(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// stw r7,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r7.u32);
	// lwz r6,664(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r6,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r6.u32);
	// lwz r5,668(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 668);
	// stw r5,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r5.u32);
	// lwz r4,672(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	// stw r4,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r4.u32);
	// lwz r3,676(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// stw r3,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r3.u32);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lwz r10,684(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
	// lwz r9,688(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	// stw r9,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r9.u32);
	// lwz r8,692(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// stw r8,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
	// lwz r7,696(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// stw r7,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r7.u32);
	// lwz r6,700(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// stw r6,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r6.u32);
	// lwz r5,704(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	// stw r5,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r5.u32);
	// lwz r4,708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// stw r4,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r4.u32);
	// lwz r3,712(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// stw r3,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r3.u32);
	// lwz r11,716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// lwz r10,720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// lwz r9,724(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 724);
	// stw r9,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r9.u32);
	// lwz r8,728(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// stw r8,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r8.u32);
	// lwz r7,732(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// stw r7,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r7.u32);
	// lwz r6,736(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// stw r6,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r6.u32);
	// lwz r5,740(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// stw r5,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r5.u32);
	// lwz r4,744(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// stw r4,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r4.u32);
	// lwz r3,748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// stw r3,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r3.u32);
	// lwz r11,752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 752);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r10,756(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// stw r10,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
	// lwz r9,760(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 760);
	// stw r9,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r9.u32);
	// lwz r8,764(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// stw r8,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r8.u32);
	// lwz r7,768(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// stw r7,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r7.u32);
	// lwz r6,772(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// stw r6,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r6.u32);
	// lwz r5,776(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// stw r5,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r5.u32);
	// lwz r4,780(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	// stw r4,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r4.u32);
	// lwz r3,784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// stw r3,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r3.u32);
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lwz r10,792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// lwz r9,796(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// stw r9,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r9.u32);
	// lwz r8,800(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stw r8,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r8.u32);
	// lwz r7,804(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// stw r7,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r7.u32);
	// lwz r6,808(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// stw r6,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r6.u32);
	// lwz r5,812(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	// stw r5,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r5.u32);
	// lwz r4,816(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// stw r4,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r4.u32);
	// lwz r3,820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	// stw r3,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r3.u32);
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lwz r10,828(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r9,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r9.u32);
	// lwz r8,836(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// stw r8,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r8.u32);
	// lwz r7,840(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	// stw r7,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r7.u32);
	// lwz r6,844(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// stw r6,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r6.u32);
	// lwz r5,848(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// stw r5,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r5.u32);
	// lwz r4,852(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// stw r4,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r4.u32);
	// lwz r3,856(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// stw r3,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r3.u32);
	// lwz r11,860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// lwz r10,864(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 864);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// lwz r9,868(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 868);
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// lwz r8,872(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 872);
	// stw r8,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r8.u32);
	// lwz r7,876(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 876);
	// stw r7,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r7.u32);
	// lwz r6,880(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 880);
	// stw r6,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r6.u32);
	// lwz r5,884(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 884);
	// stw r5,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r5.u32);
	// lwz r4,888(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 888);
	// stw r4,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r4.u32);
	// lwz r3,892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// stw r3,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r3.u32);
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// lwz r10,900(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// lwz r9,904(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// lwz r8,908(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 908);
	// stw r8,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r8.u32);
	// lwz r7,912(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// stw r7,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r7.u32);
	// lwz r6,916(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 916);
	// stw r6,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r6.u32);
	// lwz r5,920(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 920);
	// stw r5,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r5.u32);
	// lwz r4,924(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	// stw r4,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r4.u32);
	// lwz r3,928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	// stw r3,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r3.u32);
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// lwz r10,936(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// lwz r9,940(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 940);
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// lwz r8,944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// stw r8,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r8.u32);
	// lwz r7,948(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// stw r7,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r7.u32);
	// lwz r6,952(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// stw r6,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r6.u32);
	// lwz r5,956(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// stw r5,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r5.u32);
	// lwz r4,960(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// stw r4,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r4.u32);
	// lwz r3,964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	// stw r3,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r3.u32);
	// lwz r11,968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// lwz r10,972(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 972);
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// lwz r9,976(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 976);
	// stw r9,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r9.u32);
	// lwz r8,980(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 980);
	// stw r8,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r8.u32);
	// lwz r7,984(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// stw r7,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r7.u32);
	// lwz r6,988(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// stw r6,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r6.u32);
	// lwz r5,992(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// stw r5,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r5.u32);
	// lwz r4,996(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 996);
	// stw r4,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r4.u32);
	// lwz r3,1000(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// stw r3,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r3.u32);
	// lwz r11,1004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// lwz r10,1008(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// stw r10,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r10.u32);
	// lwz r9,1012(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1012);
	// stw r9,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
	// lwz r8,1016(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// stw r8,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r8.u32);
	// lwz r7,1020(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1020);
	// stw r7,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r7.u32);
	// lwz r6,1024(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// stw r6,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r6.u32);
	// lwz r5,1028(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// stw r5,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r5.u32);
	// lwz r4,1032(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	// stw r4,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r4.u32);
	// lwz r3,1036(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	// stw r3,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r3.u32);
	// lwz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1040);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// lwz r10,1044(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1044);
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// lwz r9,1048(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// lwz r8,1052(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// stw r8,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r8.u32);
	// lwz r7,1056(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1056);
	// stw r7,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r7.u32);
	// lwz r6,1060(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// stw r6,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r6.u32);
	// lwz r5,1064(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1064);
	// stw r5,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r5.u32);
	// lwz r4,1068(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1068);
	// stw r4,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r4.u32);
	// lwz r3,1072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1072);
	// stw r3,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r3.u32);
	// lwz r11,1076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1076);
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// lwz r10,1080(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// stw r10,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r10.u32);
	// lwz r9,1084(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1084);
	// stw r9,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r9.u32);
	// lwz r8,1088(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// stw r8,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r8.u32);
	// lwz r7,1092(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// stw r7,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r7.u32);
	// lwz r6,1096(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	// stw r6,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r6.u32);
	// lwz r5,1100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// stw r5,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r5.u32);
	// lwz r4,1104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// stw r4,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r4.u32);
	// lwz r3,1108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	// stw r3,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// lwz r11,1112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// lwz r10,1116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1116);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// lwz r9,1120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// stw r9,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r9.u32);
	// lwz r8,1124(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1124);
	// stw r8,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r8.u32);
	// lwz r7,1128(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// stw r7,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r7.u32);
	// lwz r6,1132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// stw r6,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r6.u32);
	// lwz r5,1136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// stw r5,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r5.u32);
	// lwz r4,1140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	// stw r4,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r4.u32);
	// lwz r3,1144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	// stw r3,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r3.u32);
	// lwz r11,1148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// lwz r10,1152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
	// lwz r9,1156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// stw r9,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r9.u32);
	// lwz r8,1160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1160);
	// stw r8,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r8.u32);
	// lwz r7,1164(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	// stw r7,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r7.u32);
	// lwz r6,1168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1168);
	// stw r6,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r6.u32);
	// lwz r5,1172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// stw r5,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r5.u32);
	// lwz r4,1176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1176);
	// stw r4,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r4.u32);
	// lwz r3,1180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1180);
	// stw r3,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r3.u32);
	// lwz r11,1184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1184);
	// stw r11,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r11.u32);
	// lwz r10,1188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1188);
	// stw r10,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r10.u32);
	// lwz r9,1192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1192);
	// stw r9,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r9.u32);
	// lwz r8,1196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1196);
	// stw r8,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r8.u32);
	// lwz r7,1200(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// stw r7,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r7.u32);
	// lwz r6,1204(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1204);
	// stw r6,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r6.u32);
	// lwz r5,1208(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1208);
	// stw r5,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r5.u32);
	// lwz r4,1212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1212);
	// stw r4,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r4.u32);
	// lwz r3,1216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1216);
	// stw r3,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r3.u32);
	// lwz r11,1220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1220);
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// lwz r10,1224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1224);
	// stw r10,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r10.u32);
	// lwz r9,1228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1228);
	// stw r9,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r9.u32);
	// lwz r8,1232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1232);
	// stw r8,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r8.u32);
	// lwz r7,1236(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1236);
	// stw r7,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r7.u32);
	// lwz r6,1240(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1240);
	// stw r6,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r6.u32);
	// lwz r5,1244(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1244);
	// stw r5,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r5.u32);
	// lwz r4,1248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1248);
	// stw r4,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r4.u32);
	// lwz r3,1252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1252);
	// stw r3,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r3.u32);
	// lwz r11,1256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1256);
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// lwz r10,1260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	// stw r10,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r10.u32);
	// lwz r9,1264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1264);
	// stw r9,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r9.u32);
	// lwz r8,1268(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1268);
	// stw r8,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r8.u32);
	// lwz r7,1272(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1272);
	// stw r7,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r7.u32);
	// lwz r6,1276(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1276);
	// stw r6,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r6.u32);
	// lwz r5,1280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	// stw r5,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r5.u32);
	// lwz r4,1284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// stw r4,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r4.u32);
	// lwz r3,1288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	// stw r3,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r3.u32);
	// lwz r11,1292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// lwz r10,1296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// stw r10,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r10.u32);
	// lwz r9,1300(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1300);
	// stw r9,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r9.u32);
	// lwz r8,1304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	// stw r8,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r8.u32);
	// lwz r7,1308(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1308);
	// stw r7,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r7.u32);
	// lwz r6,1312(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	// stw r6,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r6.u32);
	// lwz r5,1316(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1316);
	// stw r5,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r5.u32);
	// lwz r4,1320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	// stw r4,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r4.u32);
	// lwz r3,1324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1324);
	// stw r3,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r3.u32);
	// lwz r11,1328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1328);
	// stw r11,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r11.u32);
	// lwz r10,1332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// stw r10,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r10.u32);
	// lwz r9,1336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1336);
	// stw r9,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r9.u32);
	// lwz r8,1340(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1340);
	// stw r8,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r8.u32);
	// lwz r7,1344(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1344);
	// stw r7,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r7.u32);
	// lwz r6,1348(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1348);
	// stw r6,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r6.u32);
	// lwz r5,1352(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1352);
	// stw r5,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r5.u32);
	// lwz r4,1356(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1356);
	// stw r4,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r4.u32);
	// lwz r3,1360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1360);
	// stw r3,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r3.u32);
	// lwz r11,1364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1364);
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// lwz r10,1368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1368);
	// stw r10,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r10.u32);
	// lwz r9,1372(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1372);
	// stw r9,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r9.u32);
	// lwz r8,1376(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1376);
	// stw r8,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r8.u32);
	// lwz r7,1380(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// stw r7,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r7.u32);
	// lwz r6,1384(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1384);
	// stw r6,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r6.u32);
	// lwz r5,1388(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	// stw r5,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r5.u32);
	// lwz r4,1392(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// stw r4,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r4.u32);
	// lwz r3,1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// stw r3,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r3.u32);
	// lwz r11,1400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1400);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// lwz r10,1404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
	// lwz r9,1408(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r9,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r9.u32);
	// lwz r8,1412(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r8,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r8.u32);
	// lwz r7,1416(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// stw r7,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r7.u32);
	// lwz r6,1420(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// stw r6,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r6.u32);
	// lwz r5,1424(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r5,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r5.u32);
	// lwz r4,1428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r4,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r4.u32);
	// lwz r3,1432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// stw r3,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r3.u32);
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// lwz r10,1440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// lwz r9,1444(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
	// lwz r8,1448(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// lwz r7,1452(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r7,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r7.u32);
	// lwz r6,1456(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r6,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r6.u32);
	// lwz r5,1460(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r5,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r5.u32);
	// lwz r4,1464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r4,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r4.u32);
	// lwz r3,1468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r3,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r3.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r10,1476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// lwz r9,1480(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// stw r9,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// lwz r8,1484(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r8,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r8.u32);
	// lwz r7,1488(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r7,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r7.u32);
	// lwz r6,1492(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r6,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r6.u32);
	// lwz r5,1496(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// stw r5,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r5.u32);
	// lwz r4,1500(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// stw r4,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r4.u32);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r3,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r10,1512(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// stw r10,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r10.u32);
	// lwz r9,1516(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r9,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r9.u32);
	// lwz r8,1520(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// stw r8,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r8.u32);
	// lwz r7,1524(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// stw r7,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r7.u32);
	// lwz r6,1528(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r6,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r6.u32);
	// lwz r5,1532(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r5,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r5.u32);
	// lwz r4,1536(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r4,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r4.u32);
	// lwz r3,1540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r3,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r3.u32);
	// lwz r11,1544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// lwz r10,1548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// lwz r9,1552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r9,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r9.u32);
	// lwz r8,1556(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r8,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r8.u32);
	// lwz r7,1560(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r7,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r7.u32);
	// lwz r6,1564(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r6,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r6.u32);
	// lwz r5,1568(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r5,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r5.u32);
	// lwz r4,1572(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r4,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r4.u32);
	// lwz r3,1576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r3,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r3.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r10,1584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r10,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r10.u32);
	// lwz r9,1588(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r9,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r9.u32);
	// lwz r8,1592(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r8,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r8.u32);
	// lwz r7,1596(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// lwz r6,1600(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r6,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r6.u32);
	// lwz r5,1604(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r5,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r5.u32);
	// lwz r4,1608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r4,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r4.u32);
	// lwz r3,1612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r3,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r3.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lwz r10,1620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// lwz r9,1624(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r9,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r9.u32);
	// lwz r8,1628(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// stw r8,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r8.u32);
	// lwz r7,1632(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r7,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r7.u32);
	// lwz r6,1636(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// stw r6,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r6.u32);
	// lwz r5,1640(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r5,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r5.u32);
	// lwz r4,1644(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// stw r4,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r4.u32);
	// lwz r3,1648(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// stw r3,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r3.u32);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lwz r10,1656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// lwz r9,1660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r9,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r9.u32);
	// lwz r8,1664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r8,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r8.u32);
	// lwz r7,1668(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// stw r7,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r7.u32);
	// lwz r6,1672(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// stw r6,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r6.u32);
	// lwz r5,1676(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r5,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r5.u32);
	// lwz r4,1680(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	// stw r4,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r4.u32);
	// lwz r3,1684(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// stw r3,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r3.u32);
	// lwz r11,1688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// lwz r10,1692(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// lwz r9,1696(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// stw r9,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r9.u32);
	// lwz r8,1700(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// stw r8,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r8.u32);
	// lwz r7,1704(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// stw r7,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r7.u32);
	// lwz r6,1708(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// stw r6,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r6.u32);
	// lwz r5,1712(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r5,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r5.u32);
	// lwz r4,1716(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r4,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r4.u32);
	// lwz r3,1720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// stw r3,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r3.u32);
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// lwz r10,1728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// stw r10,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r10.u32);
	// lwz r9,1732(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// stw r9,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r9.u32);
	// lwz r8,1736(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	// stw r8,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r8.u32);
	// lwz r7,1740(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r7,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r7.u32);
	// lwz r6,1744(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// stw r6,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r6.u32);
	// lwz r5,1748(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// stw r5,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r5.u32);
	// lwz r4,1752(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1752);
	// stw r4,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r4.u32);
	// lwz r3,1756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// stw r3,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// lwz r11,1760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1760);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// lwz r10,1764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// stw r10,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r10.u32);
	// lwz r9,1768(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// stw r9,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r9.u32);
	// lwz r8,1772(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// stw r8,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r8.u32);
	// lwz r7,1776(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// stw r7,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r7.u32);
	// lwz r6,1780(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// stw r6,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r6.u32);
	// lwz r5,1784(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1784);
	// stw r5,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r5.u32);
	// lwz r4,1788(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1788);
	// stw r4,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r4.u32);
	// lwz r3,1792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r3,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r3.u32);
	// lwz r11,1796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// stw r11,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r11.u32);
	// lwz r10,1800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1800);
	// stw r10,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r10.u32);
	// lwz r9,1804(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r9,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r9.u32);
	// lwz r8,1808(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r8,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r8.u32);
	// lwz r7,1812(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r7,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r7.u32);
	// lwz r6,1816(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r6,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r6.u32);
	// lwz r5,1820(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r5,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r5.u32);
	// lwz r4,1824(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1824);
	// stw r4,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r4.u32);
	// lwz r3,1828(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1828);
	// stw r3,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r3.u32);
	// lwz r11,1832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1832);
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// lwz r10,1836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1836);
	// stw r10,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r10.u32);
	// lwz r9,1840(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1840);
	// stw r9,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r9.u32);
	// lwz r8,1844(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1844);
	// stw r8,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r8.u32);
	// lwz r7,1848(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// stw r7,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r7.u32);
	// lwz r6,1852(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1852);
	// stw r6,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r6.u32);
	// lwz r5,1856(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r5,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r5.u32);
	// lwz r4,1860(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	// stw r4,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r4.u32);
	// lwz r3,1864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	// stw r3,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	// stw r11,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r11.u32);
	// lwz r10,1872(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	// stw r10,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r10.u32);
	// lwz r9,1876(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1876);
	// stw r9,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r9.u32);
	// lwz r8,1880(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1880);
	// stw r8,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r8.u32);
	// lwz r7,1884(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1884);
	// stw r7,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r7.u32);
	// lwz r6,1888(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// stw r6,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r6.u32);
	// lwz r5,1892(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// stw r5,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r5.u32);
	// lwz r4,1896(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1896);
	// stw r4,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r4.u32);
	// lwz r11,1900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1900);
	// stw r11,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r11.u32);
	// lwz r10,1904(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	// stw r10,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r10.u32);
	// lwz r9,1908(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// stw r9,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r9.u32);
	// lwz r8,1912(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1912);
	// stw r8,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r8.u32);
	// lwz r7,1916(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1916);
	// stw r7,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r7.u32);
	// lwz r6,1920(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// stw r6,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r6.u32);
	// lwz r5,1924(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// stw r5,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r5.u32);
	// lwz r4,1928(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// stw r4,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r4.u32);
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lwz r10,1936(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stw r10,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r10.u32);
	// lwz r9,1940(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r9,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r9.u32);
	// lwz r8,1944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r8,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r8.u32);
	// lwz r7,1948(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// stw r7,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r7.u32);
	// lwz r6,1952(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// stw r6,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r6.u32);
	// lwz r5,1956(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	// stw r5,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r5.u32);
	// lwz r4,1960(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	// stw r4,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r4.u32);
	// lwz r11,1964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r10,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r10.u32);
	// lwz r9,1972(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// stw r9,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r9.u32);
	// lwz r8,1976(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	// stw r8,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9014C"))) PPC_WEAK_FUNC(sub_82E9014C);
PPC_FUNC_IMPL(__imp__sub_82E9014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90150"))) PPC_WEAK_FUNC(sub_82E90150);
PPC_FUNC_IMPL(__imp__sub_82E90150) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x82e62630
	ctx.lr = 0x82E90170;
	sub_82E62630(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E90184;
	sub_825952B8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82e62630
	ctx.lr = 0x82E9018C;
	sub_82E62630(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x825952b8
	ctx.lr = 0x82E9019C;
	sub_825952B8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82e62630
	ctx.lr = 0x82E901A4;
	sub_82E62630(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x825952b8
	ctx.lr = 0x82E901B4;
	sub_825952B8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82e62630
	ctx.lr = 0x82E901BC;
	sub_82E62630(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x825952b8
	ctx.lr = 0x82E901CC;
	sub_825952B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82e62630
	ctx.lr = 0x82E901D4;
	sub_82E62630(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x825952b8
	ctx.lr = 0x82E901E4;
	sub_825952B8(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82e62630
	ctx.lr = 0x82E901EC;
	sub_82E62630(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825952b8
	ctx.lr = 0x82E901FC;
	sub_825952B8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82e62630
	ctx.lr = 0x82E90204;
	sub_82E62630(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x825952b8
	ctx.lr = 0x82E90214;
	sub_825952B8(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82e62630
	ctx.lr = 0x82E9021C;
	sub_82E62630(ctx, base);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x825952b8
	ctx.lr = 0x82E9022C;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc0998
	ctx.lr = 0x82E90234;
	sub_82DC0998(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E90244;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_82E9025C"))) PPC_WEAK_FUNC(sub_82E9025C);
PPC_FUNC_IMPL(__imp__sub_82E9025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E90260"))) PPC_WEAK_FUNC(sub_82E90260);
PPC_FUNC_IMPL(__imp__sub_82E90260) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,29552
	ctx.r10.s64 = ctx.r11.s64 + 29552;
	// addi r31,r3,232
	ctx.r31.s64 = ctx.r3.s64 + 232;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,252(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82e902a8
	if (cr6.lt) goto loc_82E902A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E902A8;
	sub_825952B8(ctx, base);
loc_82E902A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82e90150
	ctx.lr = 0x82E902C4;
	sub_82E90150(ctx, base);
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

__attribute__((alias("__imp__sub_82E902DC"))) PPC_WEAK_FUNC(sub_82E902DC);
PPC_FUNC_IMPL(__imp__sub_82E902DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E902E0"))) PPC_WEAK_FUNC(sub_82E902E0);
PPC_FUNC_IMPL(__imp__sub_82E902E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E902E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e9043c
	if (cr6.eq) goto loc_82E9043C;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e90328
	if (cr6.eq) goto loc_82E90328;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29548
	ctx.r4.s64 = ctx.r11.s64 + 29548;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82E90328;
	sub_825A1EB8(ctx, base);
loc_82E90328:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E9032C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9032c
	if (!cr6.eq) goto loc_82E9032C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82E90354;
	sub_825A1EB8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e9043c
	if (cr6.eq) goto loc_82E9043C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r30,r11,15320
	ctx.r30.s64 = ctx.r11.s64 + 15320;
	// addi r24,r10,-22600
	ctx.r24.s64 = ctx.r10.s64 + -22600;
loc_82E90378:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e90390
	if (cr6.eq) goto loc_82E90390;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82E90390;
	sub_825A1EB8(ctx, base);
loc_82E90390:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8c428
	ctx.lr = 0x82E903A0;
	sub_82A8C428(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d74280
	ctx.lr = 0x82E903AC;
	sub_82D74280(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a79bf8
	ctx.lr = 0x82E903B8;
	sub_82A79BF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e903cc
	if (!cr6.lt) goto loc_82E903CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E903CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E903D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e903d0
	if (!cr6.eq) goto loc_82E903D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82E903F4;
	sub_825A1EB8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e90408
	if (cr6.lt) goto loc_82E90408;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E90408;
	sub_82416268(ctx, base);
loc_82E90408:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// bl 0x82a79160
	ctx.lr = 0x82E90420;
	sub_82A79160(ctx, base);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831ccf00
	ctx.lr = 0x82E9042C;
	sub_831CCF00(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e90378
	if (!cr6.eq) goto loc_82E90378;
loc_82E9043C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dc0998
	ctx.lr = 0x82E90444;
	sub_82DC0998(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E90458;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90460"))) PPC_WEAK_FUNC(sub_82E90460);
PPC_FUNC_IMPL(__imp__sub_82E90460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82E90468;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E90490;
	sub_82595718(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x82E904BC;
	sub_82595718(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r27,r31,24
	ctx.r27.s64 = ctx.r31.s64 + 24;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x82E904E8;
	sub_82595718(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x82E90514;
	sub_82595718(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x82E90540;
	sub_82595718(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r24,r31,60
	ctx.r24.s64 = ctx.r31.s64 + 60;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x82E9056C;
	sub_82595718(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// addi r23,r31,72
	ctx.r23.s64 = ctx.r31.s64 + 72;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x82E90598;
	sub_82595718(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r22,r31,84
	ctx.r22.s64 = ctx.r31.s64 + 84;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x82E905C4;
	sub_82595718(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x82E905F0;
	sub_82595718(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// bl 0x82dc0998
	ctx.lr = 0x82E9060C;
	sub_82DC0998(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E90614;
	sub_82E62630(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E9061C;
	sub_82E62630(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E90624;
	sub_82E62630(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E9062C;
	sub_82E62630(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E90634;
	sub_82E62630(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E9063C;
	sub_82E62630(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E90644;
	sub_82E62630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e62630
	ctx.lr = 0x82E9064C;
	sub_82E62630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E90658"))) PPC_WEAK_FUNC(sub_82E90658);
PPC_FUNC_IMPL(__imp__sub_82E90658) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_82E90684:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e90684
	if (!cr6.eq) goto loc_82E90684;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E906A8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ee0780
	ctx.lr = 0x82E906B8;
	sub_82EE0780(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e906d8
	if (cr6.lt) goto loc_82E906D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E906D8;
	sub_825952B8(ctx, base);
loc_82E906D8:
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

__attribute__((alias("__imp__sub_82E906EC"))) PPC_WEAK_FUNC(sub_82E906EC);
PPC_FUNC_IMPL(__imp__sub_82E906EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E906F0"))) PPC_WEAK_FUNC(sub_82E906F0);
PPC_FUNC_IMPL(__imp__sub_82E906F0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,29552
	ctx.r10.s64 = ctx.r11.s64 + 29552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82e90460
	ctx.lr = 0x82E9071C;
	sub_82E90460(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r4,r8,29195
	ctx.r4.s64 = ctx.r8.s64 + 29195;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stb r30,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82E907C0;
	sub_8259CC28(ctx, base);
	// stb r30,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r30.u8);
	// stb r30,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// bl 0x82e8ec10
	ctx.lr = 0x82E907D8;
	sub_82E8EC10(ctx, base);
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

__attribute__((alias("__imp__sub_82E907F4"))) PPC_WEAK_FUNC(sub_82E907F4);
PPC_FUNC_IMPL(__imp__sub_82E907F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E907F8"))) PPC_WEAK_FUNC(sub_82E907F8);
PPC_FUNC_IMPL(__imp__sub_82E907F8) {
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
	// bl 0x82e90260
	ctx.lr = 0x82E90818;
	sub_82E90260(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e90830
	if (cr6.eq) goto loc_82E90830;
	// bl 0x82416268
	ctx.lr = 0x82E9082C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E90830:
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

__attribute__((alias("__imp__sub_82E90848"))) PPC_WEAK_FUNC(sub_82E90848);
PPC_FUNC_IMPL(__imp__sub_82E90848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E90850;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4272(r1)
	ea = -4272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82e6f960
	ctx.lr = 0x82E90864;
	sub_82E6F960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e92fc0
	if (cr6.eq) goto loc_82E92FC0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e8dcd8
	ctx.lr = 0x82E90878;
	sub_82E8DCD8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8e7b0
	ctx.lr = 0x82E90884;
	sub_82E8E7B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e908ac
	if (!cr6.eq) goto loc_82E908AC;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82e8dcd8
	ctx.lr = 0x82E90898;
	sub_82E8DCD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e8ed50
	ctx.lr = 0x82E908A4;
	sub_82E8ED50(ctx, base);
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x82e8e6d8
	ctx.lr = 0x82E908AC;
	sub_82E8E6D8(ctx, base);
loc_82E908AC:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8eba0
	ctx.lr = 0x82E908B8;
	sub_82E8EBA0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb9a60
	ctx.lr = 0x82E908C4;
	sub_82EB9A60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e908d8
	if (cr6.lt) goto loc_82E908D8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e908dc
	goto loc_82E908DC;
loc_82E908D8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82E908DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e90658
	ctx.lr = 0x82E908E4;
	sub_82E90658(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e90904
	if (cr6.lt) goto loc_82E90904;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82E90904;
	sub_825952B8(ctx, base);
loc_82E90904:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bl 0x82eb9ad0
	ctx.lr = 0x82E90924;
	sub_82EB9AD0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e90938
	if (cr6.lt) goto loc_82E90938;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e9093c
	goto loc_82E9093C;
loc_82E90938:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82E9093C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e90658
	ctx.lr = 0x82E90944;
	sub_82E90658(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e90960
	if (cr6.lt) goto loc_82E90960;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82E90960;
	sub_825952B8(ctx, base);
loc_82E90960:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// bl 0x82eb9b40
	ctx.lr = 0x82E90978;
	sub_82EB9B40(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e9098c
	if (cr6.lt) goto loc_82E9098C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e90990
	goto loc_82E90990;
loc_82E9098C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82E90990:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e90658
	ctx.lr = 0x82E90998;
	sub_82E90658(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e909b4
	if (cr6.lt) goto loc_82E909B4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82E909B4;
	sub_825952B8(ctx, base);
loc_82E909B4:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// bl 0x82eb9bb0
	ctx.lr = 0x82E909CC;
	sub_82EB9BB0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e909e0
	if (cr6.lt) goto loc_82E909E0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82e909e4
	goto loc_82E909E4;
loc_82E909E0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82E909E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e90658
	ctx.lr = 0x82E909EC;
	sub_82E90658(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e90a08
	if (cr6.lt) goto loc_82E90A08;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82E90A08;
	sub_825952B8(ctx, base);
loc_82E90A08:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8378d870
	ctx.lr = 0x82E90A38;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3248
	ctx.lr = 0x82E90A40;
	sub_82EB3248(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90A58;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3268
	ctx.lr = 0x82E90A60;
	sub_82EB3268(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90A78;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3288
	ctx.lr = 0x82E90A80;
	sub_82EB3288(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90A98;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb32a8
	ctx.lr = 0x82E90AA0;
	sub_82EB32A8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90AB8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb32c8
	ctx.lr = 0x82E90AC0;
	sub_82EB32C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90AD8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb32e8
	ctx.lr = 0x82E90AE0;
	sub_82EB32E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90AF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3308
	ctx.lr = 0x82E90B00;
	sub_82EB3308(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90B18;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3328
	ctx.lr = 0x82E90B20;
	sub_82EB3328(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90B38;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3348
	ctx.lr = 0x82E90B40;
	sub_82EB3348(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8378d870
	ctx.lr = 0x82E90B58;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3368
	ctx.lr = 0x82E90B60;
	sub_82EB3368(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90B78;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3388
	ctx.lr = 0x82E90B80;
	sub_82EB3388(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90B98;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb33a8
	ctx.lr = 0x82E90BA0;
	sub_82EB33A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90BB8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb33c8
	ctx.lr = 0x82E90BC0;
	sub_82EB33C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90BD8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb33e8
	ctx.lr = 0x82E90BE0;
	sub_82EB33E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90BF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3408
	ctx.lr = 0x82E90C00;
	sub_82EB3408(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90C18;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3428
	ctx.lr = 0x82E90C20;
	sub_82EB3428(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90C38;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3448
	ctx.lr = 0x82E90C40;
	sub_82EB3448(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90C58;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3468
	ctx.lr = 0x82E90C60;
	sub_82EB3468(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90C78;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3488
	ctx.lr = 0x82E90C80;
	sub_82EB3488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90C98;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb34a8
	ctx.lr = 0x82E90CA0;
	sub_82EB34A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90CB8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb34c8
	ctx.lr = 0x82E90CC0;
	sub_82EB34C8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90CD8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb34e8
	ctx.lr = 0x82E90CE0;
	sub_82EB34E8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90CF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3508
	ctx.lr = 0x82E90D00;
	sub_82EB3508(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90D18;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3528
	ctx.lr = 0x82E90D20;
	sub_82EB3528(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90D38;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3548
	ctx.lr = 0x82E90D40;
	sub_82EB3548(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90D58;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3568
	ctx.lr = 0x82E90D60;
	sub_82EB3568(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90D78;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3588
	ctx.lr = 0x82E90D80;
	sub_82EB3588(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90D98;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb35a8
	ctx.lr = 0x82E90DA0;
	sub_82EB35A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90DB8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb35c8
	ctx.lr = 0x82E90DC0;
	sub_82EB35C8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90DD8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb35e8
	ctx.lr = 0x82E90DE0;
	sub_82EB35E8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90DF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3608
	ctx.lr = 0x82E90E00;
	sub_82EB3608(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90E18;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3628
	ctx.lr = 0x82E90E20;
	sub_82EB3628(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E90E38;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3648
	ctx.lr = 0x82E90E40;
	sub_82EB3648(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E90E5C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3668
	ctx.lr = 0x82E90E64;
	sub_82EB3668(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90E7C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3688
	ctx.lr = 0x82E90E84;
	sub_82EB3688(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90E9C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb36a8
	ctx.lr = 0x82E90EA4;
	sub_82EB36A8(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90EBC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb36c8
	ctx.lr = 0x82E90EC4;
	sub_82EB36C8(ctx, base);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90EDC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb36e8
	ctx.lr = 0x82E90EE4;
	sub_82EB36E8(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90EFC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3708
	ctx.lr = 0x82E90F04;
	sub_82EB3708(ctx, base);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90F1C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3728
	ctx.lr = 0x82E90F24;
	sub_82EB3728(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E90F3C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3748
	ctx.lr = 0x82E90F44;
	sub_82EB3748(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E90F60;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3768
	ctx.lr = 0x82E90F68;
	sub_82EB3768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90F80;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3788
	ctx.lr = 0x82E90F88;
	sub_82EB3788(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90FA0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb37a8
	ctx.lr = 0x82E90FA8;
	sub_82EB37A8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90FC0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb37c8
	ctx.lr = 0x82E90FC8;
	sub_82EB37C8(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E90FE0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb37e8
	ctx.lr = 0x82E90FE8;
	sub_82EB37E8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91000;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3808
	ctx.lr = 0x82E91008;
	sub_82EB3808(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91020;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3828
	ctx.lr = 0x82E91028;
	sub_82EB3828(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91040;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3848
	ctx.lr = 0x82E91048;
	sub_82EB3848(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91060;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3868
	ctx.lr = 0x82E91068;
	sub_82EB3868(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91080;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3888
	ctx.lr = 0x82E91088;
	sub_82EB3888(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E910A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb38a8
	ctx.lr = 0x82E910A8;
	sub_82EB38A8(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E910C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb38c8
	ctx.lr = 0x82E910C8;
	sub_82EB38C8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E910E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb38e8
	ctx.lr = 0x82E910E8;
	sub_82EB38E8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91100;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3908
	ctx.lr = 0x82E91108;
	sub_82EB3908(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91120;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3928
	ctx.lr = 0x82E91128;
	sub_82EB3928(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91140;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3948
	ctx.lr = 0x82E91148;
	sub_82EB3948(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91160;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3968
	ctx.lr = 0x82E91168;
	sub_82EB3968(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91180;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3988
	ctx.lr = 0x82E91188;
	sub_82EB3988(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E911A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb39a8
	ctx.lr = 0x82E911A8;
	sub_82EB39A8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E911C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb39c8
	ctx.lr = 0x82E911C8;
	sub_82EB39C8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E911E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb39e8
	ctx.lr = 0x82E911E8;
	sub_82EB39E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91200;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3a08
	ctx.lr = 0x82E91208;
	sub_82EB3A08(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91220;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3a28
	ctx.lr = 0x82E91228;
	sub_82EB3A28(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91240;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3a48
	ctx.lr = 0x82E91248;
	sub_82EB3A48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91260;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3a68
	ctx.lr = 0x82E91268;
	sub_82EB3A68(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91280;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3a88
	ctx.lr = 0x82E91288;
	sub_82EB3A88(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E912A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3aa8
	ctx.lr = 0x82E912A8;
	sub_82EB3AA8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E912C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ac8
	ctx.lr = 0x82E912C8;
	sub_82EB3AC8(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8378d870
	ctx.lr = 0x82E912E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ae8
	ctx.lr = 0x82E912E8;
	sub_82EB3AE8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91300;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3b08
	ctx.lr = 0x82E91308;
	sub_82EB3B08(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91320;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3b28
	ctx.lr = 0x82E91328;
	sub_82EB3B28(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91340;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3b48
	ctx.lr = 0x82E91348;
	sub_82EB3B48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91360;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3b68
	ctx.lr = 0x82E91368;
	sub_82EB3B68(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91380;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3b88
	ctx.lr = 0x82E91388;
	sub_82EB3B88(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E913A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ba8
	ctx.lr = 0x82E913A8;
	sub_82EB3BA8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E913C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3bc8
	ctx.lr = 0x82E913C8;
	sub_82EB3BC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E913E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3be8
	ctx.lr = 0x82E913E8;
	sub_82EB3BE8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91400;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3c08
	ctx.lr = 0x82E91408;
	sub_82EB3C08(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91420;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3c28
	ctx.lr = 0x82E91428;
	sub_82EB3C28(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91440;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3c48
	ctx.lr = 0x82E91448;
	sub_82EB3C48(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91460;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3c68
	ctx.lr = 0x82E91468;
	sub_82EB3C68(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91480;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3c88
	ctx.lr = 0x82E91488;
	sub_82EB3C88(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E914A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ca8
	ctx.lr = 0x82E914A8;
	sub_82EB3CA8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E914C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3cc8
	ctx.lr = 0x82E914C8;
	sub_82EB3CC8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E914E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ce8
	ctx.lr = 0x82E914E8;
	sub_82EB3CE8(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91500;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3d08
	ctx.lr = 0x82E91508;
	sub_82EB3D08(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91520;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3d28
	ctx.lr = 0x82E91528;
	sub_82EB3D28(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91540;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3d48
	ctx.lr = 0x82E91548;
	sub_82EB3D48(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91560;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3d68
	ctx.lr = 0x82E91568;
	sub_82EB3D68(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8378d870
	ctx.lr = 0x82E91580;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3d88
	ctx.lr = 0x82E91588;
	sub_82EB3D88(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E915A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3da8
	ctx.lr = 0x82E915A8;
	sub_82EB3DA8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E915C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3dc8
	ctx.lr = 0x82E915C8;
	sub_82EB3DC8(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E915E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3de8
	ctx.lr = 0x82E915E8;
	sub_82EB3DE8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91600;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3e08
	ctx.lr = 0x82E91608;
	sub_82EB3E08(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91620;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3e28
	ctx.lr = 0x82E91628;
	sub_82EB3E28(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91640;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3e48
	ctx.lr = 0x82E91648;
	sub_82EB3E48(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91660;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3e68
	ctx.lr = 0x82E91668;
	sub_82EB3E68(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91680;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3e88
	ctx.lr = 0x82E91688;
	sub_82EB3E88(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E916A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ea8
	ctx.lr = 0x82E916A8;
	sub_82EB3EA8(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8378d870
	ctx.lr = 0x82E916C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ec8
	ctx.lr = 0x82E916C8;
	sub_82EB3EC8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E916E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3ee8
	ctx.lr = 0x82E916E8;
	sub_82EB3EE8(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91700;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3f08
	ctx.lr = 0x82E91708;
	sub_82EB3F08(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91720;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3f28
	ctx.lr = 0x82E91728;
	sub_82EB3F28(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91740;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3f48
	ctx.lr = 0x82E91748;
	sub_82EB3F48(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91760;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3f68
	ctx.lr = 0x82E91768;
	sub_82EB3F68(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91780;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3f88
	ctx.lr = 0x82E91788;
	sub_82EB3F88(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E917A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3fa8
	ctx.lr = 0x82E917A8;
	sub_82EB3FA8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E917C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3fc8
	ctx.lr = 0x82E917C8;
	sub_82EB3FC8(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E917E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3fe8
	ctx.lr = 0x82E917E8;
	sub_82EB3FE8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91800;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4008
	ctx.lr = 0x82E91808;
	sub_82EB4008(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91820;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4028
	ctx.lr = 0x82E91828;
	sub_82EB4028(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91840;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4048
	ctx.lr = 0x82E91848;
	sub_82EB4048(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91860;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4068
	ctx.lr = 0x82E91868;
	sub_82EB4068(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91880;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4088
	ctx.lr = 0x82E91888;
	sub_82EB4088(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E918A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb40a8
	ctx.lr = 0x82E918A8;
	sub_82EB40A8(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E918C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb40c8
	ctx.lr = 0x82E918C8;
	sub_82EB40C8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E918E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb40e8
	ctx.lr = 0x82E918E8;
	sub_82EB40E8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91900;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4108
	ctx.lr = 0x82E91908;
	sub_82EB4108(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91920;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4128
	ctx.lr = 0x82E91928;
	sub_82EB4128(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8378d870
	ctx.lr = 0x82E91940;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4148
	ctx.lr = 0x82E91948;
	sub_82EB4148(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91960;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4168
	ctx.lr = 0x82E91968;
	sub_82EB4168(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91980;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4188
	ctx.lr = 0x82E91988;
	sub_82EB4188(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E919A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb41a8
	ctx.lr = 0x82E919A8;
	sub_82EB41A8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E919C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb41c8
	ctx.lr = 0x82E919C8;
	sub_82EB41C8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E919E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb41e8
	ctx.lr = 0x82E919E8;
	sub_82EB41E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91A00;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4208
	ctx.lr = 0x82E91A08;
	sub_82EB4208(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91A20;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4228
	ctx.lr = 0x82E91A28;
	sub_82EB4228(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91A40;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4248
	ctx.lr = 0x82E91A48;
	sub_82EB4248(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91A60;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4268
	ctx.lr = 0x82E91A68;
	sub_82EB4268(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91A80;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4288
	ctx.lr = 0x82E91A88;
	sub_82EB4288(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91AA0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb42a8
	ctx.lr = 0x82E91AA8;
	sub_82EB42A8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91AC0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb42c8
	ctx.lr = 0x82E91AC8;
	sub_82EB42C8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91AE0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb42e8
	ctx.lr = 0x82E91AE8;
	sub_82EB42E8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91B00;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4308
	ctx.lr = 0x82E91B08;
	sub_82EB4308(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91B20;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4328
	ctx.lr = 0x82E91B28;
	sub_82EB4328(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91B40;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4348
	ctx.lr = 0x82E91B48;
	sub_82EB4348(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91B60;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4368
	ctx.lr = 0x82E91B68;
	sub_82EB4368(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91B80;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4388
	ctx.lr = 0x82E91B88;
	sub_82EB4388(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E91BA0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb43a8
	ctx.lr = 0x82E91BA8;
	sub_82EB43A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E91BC0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb43c8
	ctx.lr = 0x82E91BC8;
	sub_82EB43C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91BDC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb43e8
	ctx.lr = 0x82E91BE4;
	sub_82EB43E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91BF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4408
	ctx.lr = 0x82E91C00;
	sub_82EB4408(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91C14;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4428
	ctx.lr = 0x82E91C1C;
	sub_82EB4428(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91C30;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4448
	ctx.lr = 0x82E91C38;
	sub_82EB4448(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91C4C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4468
	ctx.lr = 0x82E91C54;
	sub_82EB4468(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91C68;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4488
	ctx.lr = 0x82E91C70;
	sub_82EB4488(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91C84;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb44a8
	ctx.lr = 0x82E91C8C;
	sub_82EB44A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91CA0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb44c8
	ctx.lr = 0x82E91CA8;
	sub_82EB44C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E91CBC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb44e8
	ctx.lr = 0x82E91CC4;
	sub_82EB44E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E91CDC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4508
	ctx.lr = 0x82E91CE4;
	sub_82EB4508(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91CF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4528
	ctx.lr = 0x82E91D00;
	sub_82EB4528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91D14;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4548
	ctx.lr = 0x82E91D1C;
	sub_82EB4548(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91D30;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4568
	ctx.lr = 0x82E91D38;
	sub_82EB4568(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91D4C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4588
	ctx.lr = 0x82E91D54;
	sub_82EB4588(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91D68;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb45a8
	ctx.lr = 0x82E91D70;
	sub_82EB45A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91D84;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb45c8
	ctx.lr = 0x82E91D8C;
	sub_82EB45C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91DA0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb45e8
	ctx.lr = 0x82E91DA8;
	sub_82EB45E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91DBC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4608
	ctx.lr = 0x82E91DC4;
	sub_82EB4608(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91DD8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4628
	ctx.lr = 0x82E91DE0;
	sub_82EB4628(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91DF4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4648
	ctx.lr = 0x82E91DFC;
	sub_82EB4648(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91E10;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4668
	ctx.lr = 0x82E91E18;
	sub_82EB4668(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91E2C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4688
	ctx.lr = 0x82E91E34;
	sub_82EB4688(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91E48;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb46a8
	ctx.lr = 0x82E91E50;
	sub_82EB46A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91E64;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb46c8
	ctx.lr = 0x82E91E6C;
	sub_82EB46C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91E80;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb46e8
	ctx.lr = 0x82E91E88;
	sub_82EB46E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91E9C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4708
	ctx.lr = 0x82E91EA4;
	sub_82EB4708(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91EB8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4728
	ctx.lr = 0x82E91EC0;
	sub_82EB4728(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91ED4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4748
	ctx.lr = 0x82E91EDC;
	sub_82EB4748(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91EF0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4768
	ctx.lr = 0x82E91EF8;
	sub_82EB4768(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91F0C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4788
	ctx.lr = 0x82E91F14;
	sub_82EB4788(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91F28;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb47a8
	ctx.lr = 0x82E91F30;
	sub_82EB47A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91F44;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb47c8
	ctx.lr = 0x82E91F4C;
	sub_82EB47C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91F60;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb47e8
	ctx.lr = 0x82E91F68;
	sub_82EB47E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91F7C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4808
	ctx.lr = 0x82E91F84;
	sub_82EB4808(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8378d870
	ctx.lr = 0x82E91F98;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4828
	ctx.lr = 0x82E91FA0;
	sub_82EB4828(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91FB4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4848
	ctx.lr = 0x82E91FBC;
	sub_82EB4848(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91FD0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4868
	ctx.lr = 0x82E91FD8;
	sub_82EB4868(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E91FEC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4888
	ctx.lr = 0x82E91FF4;
	sub_82EB4888(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92008;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb48a8
	ctx.lr = 0x82E92010;
	sub_82EB48A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92024;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb48c8
	ctx.lr = 0x82E9202C;
	sub_82EB48C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92040;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb48e8
	ctx.lr = 0x82E92048;
	sub_82EB48E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9205C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4908
	ctx.lr = 0x82E92064;
	sub_82EB4908(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92078;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4928
	ctx.lr = 0x82E92080;
	sub_82EB4928(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92094;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4948
	ctx.lr = 0x82E9209C;
	sub_82EB4948(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E920B0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4968
	ctx.lr = 0x82E920B8;
	sub_82EB4968(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E920CC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4988
	ctx.lr = 0x82E920D4;
	sub_82EB4988(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E920E8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb49a8
	ctx.lr = 0x82E920F0;
	sub_82EB49A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92104;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb49c8
	ctx.lr = 0x82E9210C;
	sub_82EB49C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92120;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb49e8
	ctx.lr = 0x82E92128;
	sub_82EB49E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9213C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4a08
	ctx.lr = 0x82E92144;
	sub_82EB4A08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92158;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4a28
	ctx.lr = 0x82E92160;
	sub_82EB4A28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92174;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4a48
	ctx.lr = 0x82E9217C;
	sub_82EB4A48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92190;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4a68
	ctx.lr = 0x82E92198;
	sub_82EB4A68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E921AC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4a88
	ctx.lr = 0x82E921B4;
	sub_82EB4A88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E921C8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4aa8
	ctx.lr = 0x82E921D0;
	sub_82EB4AA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E921E4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ac8
	ctx.lr = 0x82E921EC;
	sub_82EB4AC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92200;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ae8
	ctx.lr = 0x82E92208;
	sub_82EB4AE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9221C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4b08
	ctx.lr = 0x82E92224;
	sub_82EB4B08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92238;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4b28
	ctx.lr = 0x82E92240;
	sub_82EB4B28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92254;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4b48
	ctx.lr = 0x82E9225C;
	sub_82EB4B48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92270;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4b68
	ctx.lr = 0x82E92278;
	sub_82EB4B68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9228C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4b88
	ctx.lr = 0x82E92294;
	sub_82EB4B88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E922A8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ba8
	ctx.lr = 0x82E922B0;
	sub_82EB4BA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E922C4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4bc8
	ctx.lr = 0x82E922CC;
	sub_82EB4BC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E922E0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4be8
	ctx.lr = 0x82E922E8;
	sub_82EB4BE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E922FC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4c08
	ctx.lr = 0x82E92304;
	sub_82EB4C08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92318;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4c28
	ctx.lr = 0x82E92320;
	sub_82EB4C28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92334;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4c48
	ctx.lr = 0x82E9233C;
	sub_82EB4C48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92350;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4c68
	ctx.lr = 0x82E92358;
	sub_82EB4C68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8378d870
	ctx.lr = 0x82E9236C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4c88
	ctx.lr = 0x82E92374;
	sub_82EB4C88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92388;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ca8
	ctx.lr = 0x82E92390;
	sub_82EB4CA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E923A4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4cc8
	ctx.lr = 0x82E923AC;
	sub_82EB4CC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E923C0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ce8
	ctx.lr = 0x82E923C8;
	sub_82EB4CE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E923DC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4d08
	ctx.lr = 0x82E923E4;
	sub_82EB4D08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E923F8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4d28
	ctx.lr = 0x82E92400;
	sub_82EB4D28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92414;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4d48
	ctx.lr = 0x82E9241C;
	sub_82EB4D48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92430;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4d68
	ctx.lr = 0x82E92438;
	sub_82EB4D68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9244C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4d88
	ctx.lr = 0x82E92454;
	sub_82EB4D88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92468;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4da8
	ctx.lr = 0x82E92470;
	sub_82EB4DA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92484;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4dc8
	ctx.lr = 0x82E9248C;
	sub_82EB4DC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E924A0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4de8
	ctx.lr = 0x82E924A8;
	sub_82EB4DE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E924BC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4e08
	ctx.lr = 0x82E924C4;
	sub_82EB4E08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E924D8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4e28
	ctx.lr = 0x82E924E0;
	sub_82EB4E28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E924F4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4e48
	ctx.lr = 0x82E924FC;
	sub_82EB4E48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92510;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4e68
	ctx.lr = 0x82E92518;
	sub_82EB4E68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9252C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4e88
	ctx.lr = 0x82E92534;
	sub_82EB4E88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92548;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ea8
	ctx.lr = 0x82E92550;
	sub_82EB4EA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92564;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ec8
	ctx.lr = 0x82E9256C;
	sub_82EB4EC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92580;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ee8
	ctx.lr = 0x82E92588;
	sub_82EB4EE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9259C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4f08
	ctx.lr = 0x82E925A4;
	sub_82EB4F08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E925B8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4f28
	ctx.lr = 0x82E925C0;
	sub_82EB4F28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E925D4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4f48
	ctx.lr = 0x82E925DC;
	sub_82EB4F48(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E925F0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4f68
	ctx.lr = 0x82E925F8;
	sub_82EB4F68(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9260C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4f88
	ctx.lr = 0x82E92614;
	sub_82EB4F88(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92628;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4fa8
	ctx.lr = 0x82E92630;
	sub_82EB4FA8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92644;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4fc8
	ctx.lr = 0x82E9264C;
	sub_82EB4FC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92660;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4fe8
	ctx.lr = 0x82E92668;
	sub_82EB4FE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9267C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5008
	ctx.lr = 0x82E92684;
	sub_82EB5008(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92698;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5028
	ctx.lr = 0x82E926A0;
	sub_82EB5028(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E926B4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5048
	ctx.lr = 0x82E926BC;
	sub_82EB5048(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E926D0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5068
	ctx.lr = 0x82E926D8;
	sub_82EB5068(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E926EC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5088
	ctx.lr = 0x82E926F4;
	sub_82EB5088(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92708;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb50a8
	ctx.lr = 0x82E92710;
	sub_82EB50A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92724;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb50c8
	ctx.lr = 0x82E9272C;
	sub_82EB50C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92740;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb50e8
	ctx.lr = 0x82E92748;
	sub_82EB50E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9275C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5108
	ctx.lr = 0x82E92764;
	sub_82EB5108(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92778;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5128
	ctx.lr = 0x82E92780;
	sub_82EB5128(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92794;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5148
	ctx.lr = 0x82E9279C;
	sub_82EB5148(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E927B0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5168
	ctx.lr = 0x82E927B8;
	sub_82EB5168(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E927D0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5188
	ctx.lr = 0x82E927D8;
	sub_82EB5188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E927EC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb51a8
	ctx.lr = 0x82E927F4;
	sub_82EB51A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92808;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb51c8
	ctx.lr = 0x82E92810;
	sub_82EB51C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92824;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb51e8
	ctx.lr = 0x82E9282C;
	sub_82EB51E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92840;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5208
	ctx.lr = 0x82E92848;
	sub_82EB5208(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9285C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5228
	ctx.lr = 0x82E92864;
	sub_82EB5228(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92878;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5248
	ctx.lr = 0x82E92880;
	sub_82EB5248(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92894;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5268
	ctx.lr = 0x82E9289C;
	sub_82EB5268(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E928B0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5288
	ctx.lr = 0x82E928B8;
	sub_82EB5288(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E928CC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb52a8
	ctx.lr = 0x82E928D4;
	sub_82EB52A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E928EC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb52c8
	ctx.lr = 0x82E928F4;
	sub_82EB52C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92908;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb52e8
	ctx.lr = 0x82E92910;
	sub_82EB52E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92924;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5308
	ctx.lr = 0x82E9292C;
	sub_82EB5308(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92940;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5328
	ctx.lr = 0x82E92948;
	sub_82EB5328(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E9295C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5348
	ctx.lr = 0x82E92964;
	sub_82EB5348(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92978;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5368
	ctx.lr = 0x82E92980;
	sub_82EB5368(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92994;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5388
	ctx.lr = 0x82E9299C;
	sub_82EB5388(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E929B0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb53a8
	ctx.lr = 0x82E929B8;
	sub_82EB53A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E929CC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb53c8
	ctx.lr = 0x82E929D4;
	sub_82EB53C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E929E8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb53e8
	ctx.lr = 0x82E929F0;
	sub_82EB53E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92A04;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5408
	ctx.lr = 0x82E92A0C;
	sub_82EB5408(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92A20;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5428
	ctx.lr = 0x82E92A28;
	sub_82EB5428(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92A3C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5448
	ctx.lr = 0x82E92A44;
	sub_82EB5448(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92A58;
	sub_8378D870(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8378d870
	ctx.lr = 0x82E92A70;
	sub_8378D870(ctx, base);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8378d870
	ctx.lr = 0x82E92A88;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb54a8
	ctx.lr = 0x82E92A90;
	sub_82EB54A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92AA4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb54c8
	ctx.lr = 0x82E92AAC;
	sub_82EB54C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92AC0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb54e8
	ctx.lr = 0x82E92AC8;
	sub_82EB54E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92ADC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5508
	ctx.lr = 0x82E92AE4;
	sub_82EB5508(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92AF8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5528
	ctx.lr = 0x82E92B00;
	sub_82EB5528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92B14;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5548
	ctx.lr = 0x82E92B1C;
	sub_82EB5548(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92B30;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5568
	ctx.lr = 0x82E92B38;
	sub_82EB5568(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92B4C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5588
	ctx.lr = 0x82E92B54;
	sub_82EB5588(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92B68;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb55a8
	ctx.lr = 0x82E92B70;
	sub_82EB55A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92B84;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb55c8
	ctx.lr = 0x82E92B8C;
	sub_82EB55C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92BA0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb55e8
	ctx.lr = 0x82E92BA8;
	sub_82EB55E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92BBC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5608
	ctx.lr = 0x82E92BC4;
	sub_82EB5608(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92BD8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5628
	ctx.lr = 0x82E92BE0;
	sub_82EB5628(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92BF4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5648
	ctx.lr = 0x82E92BFC;
	sub_82EB5648(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92C10;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5668
	ctx.lr = 0x82E92C18;
	sub_82EB5668(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92C2C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5688
	ctx.lr = 0x82E92C34;
	sub_82EB5688(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8378d870
	ctx.lr = 0x82E92C48;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb56a8
	ctx.lr = 0x82E92C50;
	sub_82EB56A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92C64;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb56c8
	ctx.lr = 0x82E92C6C;
	sub_82EB56C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92C80;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb56e8
	ctx.lr = 0x82E92C88;
	sub_82EB56E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92C9C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5708
	ctx.lr = 0x82E92CA4;
	sub_82EB5708(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92CB8;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5728
	ctx.lr = 0x82E92CC0;
	sub_82EB5728(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92CD4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5748
	ctx.lr = 0x82E92CDC;
	sub_82EB5748(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92CF0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5768
	ctx.lr = 0x82E92CF8;
	sub_82EB5768(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92D0C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5788
	ctx.lr = 0x82E92D14;
	sub_82EB5788(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92D28;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb57a8
	ctx.lr = 0x82E92D30;
	sub_82EB57A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92D44;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb57c8
	ctx.lr = 0x82E92D4C;
	sub_82EB57C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92D60;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb57e8
	ctx.lr = 0x82E92D68;
	sub_82EB57E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92D7C;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5808
	ctx.lr = 0x82E92D84;
	sub_82EB5808(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92D98;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5828
	ctx.lr = 0x82E92DA0;
	sub_82EB5828(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92DB4;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5848
	ctx.lr = 0x82E92DBC;
	sub_82EB5848(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92DD0;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5868
	ctx.lr = 0x82E92DD8;
	sub_82EB5868(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92DEC;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5888
	ctx.lr = 0x82E92DF4;
	sub_82EB5888(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92E08;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb58a8
	ctx.lr = 0x82E92E10;
	sub_82EB58A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8378d870
	ctx.lr = 0x82E92E24;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb58c8
	ctx.lr = 0x82E92E2C;
	sub_82EB58C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d870
	ctx.lr = 0x82E92E40;
	sub_8378D870(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb44e8
	ctx.lr = 0x82E92E48;
	sub_82EB44E8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3528
	ctx.lr = 0x82E92E54;
	sub_82EB3528(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// bl 0x82eb4548
	ctx.lr = 0x82E92E64;
	sub_82EB4548(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb52a8
	ctx.lr = 0x82E92E70;
	sub_82EB52A8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb52c8
	ctx.lr = 0x82E92E7C;
	sub_82EB52C8(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb37a8
	ctx.lr = 0x82E92E88;
	sub_82EB37A8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// bl 0x82eb46e8
	ctx.lr = 0x82E92E98;
	sub_82EB46E8(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3868
	ctx.lr = 0x82E92EA4;
	sub_82EB3868(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r7,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// bl 0x82eb38a8
	ctx.lr = 0x82E92EB4;
	sub_82EB38A8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// bl 0x82eb50e8
	ctx.lr = 0x82E92EC4;
	sub_82EB50E8(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb45c8
	ctx.lr = 0x82E92ED0;
	sub_82EB45C8(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5428
	ctx.lr = 0x82E92EDC;
	sub_82EB5428(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb5448
	ctx.lr = 0x82E92EE8;
	sub_82EB5448(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4508
	ctx.lr = 0x82E92EF4;
	sub_82EB4508(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb49c8
	ctx.lr = 0x82E92F00;
	sub_82EB49C8(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb34c8
	ctx.lr = 0x82E92F0C;
	sub_82EB34C8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// bl 0x82eb3a88
	ctx.lr = 0x82E92F1C;
	sub_82EB3A88(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
	// bl 0x82eb5608
	ctx.lr = 0x82E92F2C;
	sub_82EB5608(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4ae8
	ctx.lr = 0x82E92F38;
	sub_82EB4AE8(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4b28
	ctx.lr = 0x82E92F44;
	sub_82EB4B28(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb3c88
	ctx.lr = 0x82E92F50;
	sub_82EB3C88(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x82eb4928
	ctx.lr = 0x82E92F60;
	sub_82EB4928(ctx, base);
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4948
	ctx.lr = 0x82E92F6C;
	sub_82EB4948(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4828
	ctx.lr = 0x82E92F78;
	sub_82EB4828(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4848
	ctx.lr = 0x82E92F84;
	sub_82EB4848(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb4308
	ctx.lr = 0x82E92F90;
	sub_82EB4308(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// bl 0x82eb4a28
	ctx.lr = 0x82E92FA0;
	sub_82EB4A28(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82eb56a8
	ctx.lr = 0x82E92FAC;
	sub_82EB56A8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r9,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r9.u8);
	// bl 0x82e8e6d8
	ctx.lr = 0x82E92FC0;
	sub_82E8E6D8(ctx, base);
loc_82E92FC0:
	// addi r1,r1,4272
	ctx.r1.s64 = ctx.r1.s64 + 4272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E92FC8"))) PPC_WEAK_FUNC(sub_82E92FC8);
PPC_FUNC_IMPL(__imp__sub_82E92FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E92FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E92FFC;
	sub_82595718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// beq cr6,0x82e93040
	if (cr6.eq) goto loc_82E93040;
loc_82E93024:
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee0780
	ctx.lr = 0x82E93034;
	sub_82EE0780(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82e93024
	if (!cr6.eq) goto loc_82E93024;
loc_82E93040:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9304C"))) PPC_WEAK_FUNC(sub_82E9304C);
PPC_FUNC_IMPL(__imp__sub_82E9304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93050"))) PPC_WEAK_FUNC(sub_82E93050);
PPC_FUNC_IMPL(__imp__sub_82E93050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E93058;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-22544
	ctx.r4.s64 = ctx.r9.s64 + -22544;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82E9308C;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82e92fc8
	ctx.lr = 0x82E9309C;
	sub_82E92FC8(ctx, base);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r8,29620
	ctx.r7.s64 = ctx.r8.s64 + 29620;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e902e0
	ctx.lr = 0x82E930B8;
	sub_82E902E0(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e8e818
	ctx.lr = 0x82E930C8;
	sub_82E8E818(ctx, base);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r7,29612
	ctx.r7.s64 = ctx.r7.s64 + 29612;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e8a0
	ctx.lr = 0x82E930E4;
	sub_82E8E8A0(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82e8e818
	ctx.lr = 0x82E930F4;
	sub_82E8E818(ctx, base);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r5,29604
	ctx.r7.s64 = ctx.r5.s64 + 29604;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ea20
	ctx.lr = 0x82E93110;
	sub_82E8EA20(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82e8e818
	ctx.lr = 0x82E93120;
	sub_82E8E818(ctx, base);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r4,29596
	ctx.r7.s64 = ctx.r4.s64 + 29596;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e8a0
	ctx.lr = 0x82E9313C;
	sub_82E8E8A0(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82e8e818
	ctx.lr = 0x82E9314C;
	sub_82E8E818(ctx, base);
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r3,29588
	ctx.r7.s64 = ctx.r3.s64 + 29588;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ea20
	ctx.lr = 0x82E93168;
	sub_82E8EA20(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82e8e818
	ctx.lr = 0x82E93178;
	sub_82E8E818(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,29580
	ctx.r7.s64 = ctx.r11.s64 + 29580;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e8a0
	ctx.lr = 0x82E93194;
	sub_82E8E8A0(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82e8e818
	ctx.lr = 0x82E931A4;
	sub_82E8E818(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r10,29572
	ctx.r7.s64 = ctx.r10.s64 + 29572;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8ea20
	ctx.lr = 0x82E931C0;
	sub_82E8EA20(ctx, base);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82e8e818
	ctx.lr = 0x82E931D0;
	sub_82E8E818(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r9,29564
	ctx.r7.s64 = ctx.r9.s64 + 29564;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8e8a0
	ctx.lr = 0x82E931EC;
	sub_82E8E8A0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r29,100(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82e8e818
	ctx.lr = 0x82E931FC;
	sub_82E8E818(ctx, base);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r7,r8,29556
	ctx.r7.s64 = ctx.r8.s64 + 29556;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ea20
	ctx.lr = 0x82E93218;
	sub_82E8EA20(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e9323c
	if (cr6.eq) goto loc_82E9323C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82E93238;
	sub_8259CB28(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82E9323C:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82e93264
	if (cr6.lt) goto loc_82E93264;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E93264;
	sub_825952B8(ctx, base);
loc_82E93264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93270"))) PPC_WEAK_FUNC(sub_82E93270);
PPC_FUNC_IMPL(__imp__sub_82E93270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E93278;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,29194
	ctx.r4.s64 = ctx.r9.s64 + 29194;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82E932AC;
	sub_8259CC28(ctx, base);
	// bl 0x82e6e978
	ctx.lr = 0x82E932B0;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e932d0
	if (cr6.eq) goto loc_82E932D0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82E932D0;
	sub_8259CB28(ctx, base);
loc_82E932D0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82e932e4
	if (!cr6.lt) goto loc_82E932E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82E932E4:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e90658
	ctx.lr = 0x82E932F0;
	sub_82E90658(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8378d870
	ctx.lr = 0x82E9330C;
	sub_8378D870(ctx, base);
	// lwz r10,252(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// addi r11,r30,232
	ctx.r11.s64 = ctx.r30.s64 + 232;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e93320
	if (cr6.lt) goto loc_82E93320;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E93320:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e90658
	ctx.lr = 0x82E9332C;
	sub_82E90658(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8378d870
	ctx.lr = 0x82E93344;
	sub_8378D870(ctx, base);
	// lbz r10,261(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 261);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x8378d870
	ctx.lr = 0x82E93364;
	sub_8378D870(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e93050
	ctx.lr = 0x82E93370;
	sub_82E93050(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82e93390
	if (cr6.lt) goto loc_82E93390;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E93390;
	sub_825952B8(ctx, base);
loc_82E93390:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93398"))) PPC_WEAK_FUNC(sub_82E93398);
PPC_FUNC_IMPL(__imp__sub_82E93398) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e933cc
	if (!cr6.eq) goto loc_82E933CC;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82E933CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x82e93050
	ctx.lr = 0x82E933EC;
	sub_82E93050(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82e93418
	if (cr6.lt) goto loc_82E93418;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E93418;
	sub_825952B8(ctx, base);
loc_82E93418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E93430"))) PPC_WEAK_FUNC(sub_82E93430);
PPC_FUNC_IMPL(__imp__sub_82E93430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,30112
	ctx.r9.s64 = ctx.r11.s64 + 30112;
	// beq cr6,0x82e93488
	if (cr6.eq) goto loc_82E93488;
	// addi r11,r9,-104
	ctx.r11.s64 = ctx.r9.s64 + -104;
loc_82E93454:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82e93474
	if (cr6.eq) goto loc_82E93474;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// blt cr6,0x82e93454
	if (cr6.lt) goto loc_82E93454;
	// blr 
	return;
loc_82E93474:
	// addi r11,r9,-104
	ctx.r11.s64 = ctx.r9.s64 + -104;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82E93488:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82E9348C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x82e934ac
	if (cr6.eq) goto loc_82E934AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// blt cr6,0x82e9348c
	if (cr6.lt) goto loc_82E9348C;
	// blr 
	return;
loc_82E934AC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E934BC"))) PPC_WEAK_FUNC(sub_82E934BC);
PPC_FUNC_IMPL(__imp__sub_82E934BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E934C0"))) PPC_WEAK_FUNC(sub_82E934C0);
PPC_FUNC_IMPL(__imp__sub_82E934C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r6,r4,r4
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulld r9,r7,r7
	ctx.r9.s64 = ctx.r7.s64 * ctx.r7.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulld r10,r11,r7
	ctx.r10.s64 = ctx.r11.s64 * ctx.r7.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// mulld r9,r9,r5
	ctx.r9.s64 = ctx.r9.s64 * ctx.r5.s64;
	// divdu r6,r8,r7
	ctx.r6.u64 = PPCDivide(ctx.r8.u64, ctx.r7.u64);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// divdu r9,r5,r11
	ctx.r9.u64 = PPCDivide(ctx.r5.u64, ctx.r11.u64);
	// tdllei r7,0
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mullw r8,r10,r10
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// tdllei r11,0
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e93548
	if (cr6.lt) goto loc_82E93548;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9354c
	if (!cr6.eq) goto loc_82E9354C;
loc_82E93548:
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
loc_82E9354C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93560"))) PPC_WEAK_FUNC(sub_82E93560);
PPC_FUNC_IMPL(__imp__sub_82E93560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e935d4
	if (!cr6.eq) goto loc_82E935D4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e935d4
	if (cr6.eq) goto loc_82E935D4;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x82e935dc
	if (cr6.gt) goto loc_82E935DC;
	// lis r12,-32023
	ctx.r12.s64 = -2098659328;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13724
	ctx.r12.s64 = ctx.r12.s64 + 13724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82E935D4;
	case 1:
		goto loc_82E935DC;
	case 2:
		goto loc_82E935DC;
	case 3:
		goto loc_82E935DC;
	case 4:
		goto loc_82E935DC;
	case 5:
		goto loc_82E935DC;
	case 6:
		goto loc_82E935D4;
	case 7:
		goto loc_82E935D4;
	case 8:
		goto loc_82E935D4;
	case 9:
		goto loc_82E935DC;
	case 10:
		goto loc_82E935D4;
	case 11:
		goto loc_82E935DC;
	case 12:
		goto loc_82E935DC;
	case 13:
		goto loc_82E935DC;
	default:
		return;
	}
	// lwz r23,13780(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13780);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13780(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13780);
	// lwz r23,13780(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13780);
	// lwz r23,13780(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13780);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13780(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13780);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	// lwz r23,13788(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
loc_82E935D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E935DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E935E4"))) PPC_WEAK_FUNC(sub_82E935E4);
PPC_FUNC_IMPL(__imp__sub_82E935E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E935E8"))) PPC_WEAK_FUNC(sub_82E935E8);
PPC_FUNC_IMPL(__imp__sub_82E935E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93620"))) PPC_WEAK_FUNC(sub_82E93620);
PPC_FUNC_IMPL(__imp__sub_82E93620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bge cr6,0x82e9365c
	if (!cr6.lt) goto loc_82E9365C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82E9364C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82e9364c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E9364C;
	// blr 
	return;
loc_82E9365C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93678"))) PPC_WEAK_FUNC(sub_82E93678);
PPC_FUNC_IMPL(__imp__sub_82E93678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,57(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r4.u8);
	// beq cr6,0x82e936c0
	if (cr6.eq) goto loc_82E936C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r9,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, ctx.r9.u8);
	// blr 
	return;
loc_82E936C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E936CC"))) PPC_WEAK_FUNC(sub_82E936CC);
PPC_FUNC_IMPL(__imp__sub_82E936CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E936D0"))) PPC_WEAK_FUNC(sub_82E936D0);
PPC_FUNC_IMPL(__imp__sub_82E936D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x82e93710
	if (cr6.eq) goto loc_82E93710;
loc_82E936F4:
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e93704
	if (cr6.eq) goto loc_82E93704;
	// bl 0x82e934c0
	ctx.lr = 0x82E93704;
	sub_82E934C0(ctx, base);
loc_82E93704:
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x82e936f4
	if (!cr6.eq) goto loc_82E936F4;
loc_82E93710:
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

__attribute__((alias("__imp__sub_82E93724"))) PPC_WEAK_FUNC(sub_82E93724);
PPC_FUNC_IMPL(__imp__sub_82E93724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93728"))) PPC_WEAK_FUNC(sub_82E93728);
PPC_FUNC_IMPL(__imp__sub_82E93728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stb r11,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// stb r11,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blt cr6,0x82e93758
	if (cr6.lt) goto loc_82E93758;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82E93758:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93768"))) PPC_WEAK_FUNC(sub_82E93768);
PPC_FUNC_IMPL(__imp__sub_82E93768) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// bl 0x82595718
	ctx.lr = 0x82E937C0;
	sub_82595718(ctx, base);
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82E937D8:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e937fc
	if (cr6.eq) goto loc_82E937FC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E937F0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e937f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E937F0;
loc_82E937FC:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bne 0x82e937d8
	if (!cr0.eq) goto loc_82E937D8;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stb r30,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// stb r8,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82E93864"))) PPC_WEAK_FUNC(sub_82E93864);
PPC_FUNC_IMPL(__imp__sub_82E93864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93868"))) PPC_WEAK_FUNC(sub_82E93868);
PPC_FUNC_IMPL(__imp__sub_82E93868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E93870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
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
	// bne cr6,0x82e93914
	if (!cr6.eq) goto loc_82E93914;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93430
	ctx.lr = 0x82E9389C;
	sub_82E93430(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8259cb28
	ctx.lr = 0x82E938B4;
	sub_8259CB28(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82E938B8;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e938c8
	if (cr6.eq) goto loc_82E938C8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82e938cc
	goto loc_82E938CC;
loc_82E938C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E938CC:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e93560
	ctx.lr = 0x82E938E8;
	sub_82E93560(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r3,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r3.u8);
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// stb r8,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r8.u8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E93908:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e93908
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E93908;
loc_82E93914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9391C"))) PPC_WEAK_FUNC(sub_82E9391C);
PPC_FUNC_IMPL(__imp__sub_82E9391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93920"))) PPC_WEAK_FUNC(sub_82E93920);
PPC_FUNC_IMPL(__imp__sub_82E93920) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// addi r10,r11,31736
	ctx.r10.s64 = ctx.r11.s64 + 31736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596f90
	ctx.lr = 0x82E93950;
	sub_82596F90(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82596f90
	ctx.lr = 0x82E93958;
	sub_82596F90(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82596f90
	ctx.lr = 0x82E93960;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524210
	ctx.lr = 0x82E93968;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e93988
	if (cr6.eq) goto loc_82E93988;
	// bl 0x82595188
	ctx.lr = 0x82E93978;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E93988;
	sub_825952B8(ctx, base);
loc_82E93988:
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

__attribute__((alias("__imp__sub_82E939A4"))) PPC_WEAK_FUNC(sub_82E939A4);
PPC_FUNC_IMPL(__imp__sub_82E939A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E939A8"))) PPC_WEAK_FUNC(sub_82E939A8);
PPC_FUNC_IMPL(__imp__sub_82E939A8) {
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
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
loc_82E939C8:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596f90
	ctx.lr = 0x82E939D4;
	sub_82596F90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82e939c8
	if (!cr0.lt) goto loc_82E939C8;
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

__attribute__((alias("__imp__sub_82E939F4"))) PPC_WEAK_FUNC(sub_82E939F4);
PPC_FUNC_IMPL(__imp__sub_82E939F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E939F8"))) PPC_WEAK_FUNC(sub_82E939F8);
PPC_FUNC_IMPL(__imp__sub_82E939F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E93A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x835242a0
	ctx.lr = 0x82E93A10;
	sub_835242A0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,31736
	ctx.r10.s64 = ctx.r11.s64 + 31736;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82E93A30;
	sub_82596FA8(ctx, base);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82596fa8
	ctx.lr = 0x82E93A3C;
	sub_82596FA8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r9,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r9.u8);
	// bl 0x82596fa8
	ctx.lr = 0x82E93A4C;
	sub_82596FA8(ctx, base);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,31748
	ctx.r7.s64 = ctx.r8.s64 + 31748;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93A64"))) PPC_WEAK_FUNC(sub_82E93A64);
PPC_FUNC_IMPL(__imp__sub_82E93A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93A68"))) PPC_WEAK_FUNC(sub_82E93A68);
PPC_FUNC_IMPL(__imp__sub_82E93A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E93A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82E93A84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee3798
	ctx.lr = 0x82E93A8C;
	sub_82EE3798(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bge 0x82e93a84
	if (!cr0.lt) goto loc_82E93A84;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82E93AA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee37f0
	ctx.lr = 0x82E93AAC;
	sub_82EE37F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x82e93aa0
	if (!cr0.eq) goto loc_82E93AA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93AC4"))) PPC_WEAK_FUNC(sub_82E93AC4);
PPC_FUNC_IMPL(__imp__sub_82E93AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93AC8"))) PPC_WEAK_FUNC(sub_82E93AC8);
PPC_FUNC_IMPL(__imp__sub_82E93AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E93AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x835242a0
	ctx.lr = 0x82E93AE0;
	sub_835242A0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,31736
	ctx.r10.s64 = ctx.r11.s64 + 31736;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82E93B00;
	sub_82596FA8(ctx, base);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82596fa8
	ctx.lr = 0x82E93B0C;
	sub_82596FA8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r9,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r9.u8);
	// bl 0x82596fa8
	ctx.lr = 0x82E93B1C;
	sub_82596FA8(ctx, base);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r7,r8,31760
	ctx.r7.s64 = ctx.r8.s64 + 31760;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82E93B34;
	sub_82596FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// bl 0x82ee36f8
	ctx.lr = 0x82E93B40;
	sub_82EE36F8(ctx, base);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e93a68
	ctx.lr = 0x82E93B50;
	sub_82E93A68(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82588f18
	ctx.lr = 0x82E93B60;
	sub_82588F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93B6C"))) PPC_WEAK_FUNC(sub_82E93B6C);
PPC_FUNC_IMPL(__imp__sub_82E93B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93B70"))) PPC_WEAK_FUNC(sub_82E93B70);
PPC_FUNC_IMPL(__imp__sub_82E93B70) {
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
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93B94;
	sub_82596FE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82E93BA4;
	sub_82597088(ctx, base);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93BB0;
	sub_82596FE8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82E93BC0;
	sub_82597088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835242e8
	ctx.lr = 0x82E93BCC;
	sub_835242E8(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82E93BEC"))) PPC_WEAK_FUNC(sub_82E93BEC);
PPC_FUNC_IMPL(__imp__sub_82E93BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93BF0"))) PPC_WEAK_FUNC(sub_82E93BF0);
PPC_FUNC_IMPL(__imp__sub_82E93BF0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x83b3f898
	ctx.lr = 0x82E93C10;
	sub_83B3F898(ctx, base);
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e93c40
	if (cr6.eq) goto loc_82E93C40;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E93C24;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e93c40
	if (!cr6.eq) goto loc_82E93C40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E93C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93C40:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e93c70
	if (cr6.eq) goto loc_82E93C70;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E93C54;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e93c70
	if (!cr6.eq) goto loc_82E93C70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E93C70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93C70:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e93ca0
	if (cr6.eq) goto loc_82E93CA0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E93C84;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e93ca0
	if (!cr6.eq) goto loc_82E93CA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E93CA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93CA0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e93cd0
	if (cr6.eq) goto loc_82E93CD0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E93CB4;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e93cd0
	if (!cr6.eq) goto loc_82E93CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E93CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E93CD0:
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

__attribute__((alias("__imp__sub_82E93CE8"))) PPC_WEAK_FUNC(sub_82E93CE8);
PPC_FUNC_IMPL(__imp__sub_82E93CE8) {
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
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93D0C;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82597088
	ctx.lr = 0x82E93D18;
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

__attribute__((alias("__imp__sub_82E93D34"))) PPC_WEAK_FUNC(sub_82E93D34);
PPC_FUNC_IMPL(__imp__sub_82E93D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93D38"))) PPC_WEAK_FUNC(sub_82E93D38);
PPC_FUNC_IMPL(__imp__sub_82E93D38) {
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
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93D5C;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,52(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// bl 0x82597088
	ctx.lr = 0x82E93D68;
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

__attribute__((alias("__imp__sub_82E93D84"))) PPC_WEAK_FUNC(sub_82E93D84);
PPC_FUNC_IMPL(__imp__sub_82E93D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93D88"))) PPC_WEAK_FUNC(sub_82E93D88);
PPC_FUNC_IMPL(__imp__sub_82E93D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E93D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,92
	ctx.r30.s64 = ctx.r3.s64 + 92;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82596fe8
	ctx.lr = 0x82E93DA8;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x82597088
	ctx.lr = 0x82E93DB4;
	sub_82597088(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e93e38
	if (!cr6.eq) goto loc_82E93E38;
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93DC8;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,124(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// bl 0x82597088
	ctx.lr = 0x82E93DD4;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93DDC;
	sub_82596FE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82E93DEC;
	sub_82597088(ctx, base);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82588ff8
	ctx.lr = 0x82E93DF8;
	sub_82588FF8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e93e14
	if (cr6.eq) goto loc_82E93E14;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82e93e18
	if (cr6.eq) goto loc_82E93E18;
loc_82E93E14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E93E18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e93e44
	if (cr6.eq) goto loc_82E93E44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93E2C;
	sub_82596FE8(ctx, base);
	// stb r29,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E93E38;
	sub_82597088(ctx, base);
loc_82E93E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E93E44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93E50"))) PPC_WEAK_FUNC(sub_82E93E50);
PPC_FUNC_IMPL(__imp__sub_82E93E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E93E58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82596fe8
	ctx.lr = 0x82E93E70;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,124(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// bl 0x82597088
	ctx.lr = 0x82E93E7C;
	sub_82597088(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e93ef4
	if (cr6.eq) goto loc_82E93EF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93E8C;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,124(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// bl 0x82597088
	ctx.lr = 0x82E93E98;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93EA0;
	sub_82596FE8(ctx, base);
	// stb r29,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82E93EAC;
	sub_82597088(ctx, base);
	// addi r4,r30,256
	ctx.r4.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82588ff8
	ctx.lr = 0x82E93EB8;
	sub_82588FF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e93ed4
	if (cr6.eq) goto loc_82E93ED4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e93ed4
	if (cr6.eq) goto loc_82E93ED4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82E93ED4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e93f00
	if (cr6.eq) goto loc_82E93F00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E93EE8;
	sub_82596FE8(ctx, base);
	// stb r28,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82E93EF4;
	sub_82597088(ctx, base);
loc_82E93EF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E93F00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E93F0C"))) PPC_WEAK_FUNC(sub_82E93F0C);
PPC_FUNC_IMPL(__imp__sub_82E93F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93F10"))) PPC_WEAK_FUNC(sub_82E93F10);
PPC_FUNC_IMPL(__imp__sub_82E93F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e93f6c
	if (!cr6.eq) goto loc_82E93F6C;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_82E93F2C:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e93f40
	if (!cr6.lt) goto loc_82E93F40;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82e93f60
	goto loc_82E93F60;
loc_82E93F40:
	// lbz r8,25(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e93f58
	if (cr6.eq) goto loc_82E93F58;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e93f58
	if (!cr6.lt) goto loc_82E93F58;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82E93F58:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E93F60:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e93f2c
	if (cr6.eq) goto loc_82E93F2C;
loc_82E93F6C:
	// lbz r11,25(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e93f84
	if (cr6.eq) goto loc_82E93F84;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82e93f88
	goto loc_82E93F88;
loc_82E93F84:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82E93F88:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e93fc0
	if (!cr6.eq) goto loc_82E93FC0;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_82E93F98:
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e93fb0
	if (!cr6.lt) goto loc_82E93FB0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e93fb4
	goto loc_82E93FB4;
loc_82E93FB0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82E93FB4:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e93f98
	if (cr6.eq) goto loc_82E93F98;
loc_82E93FC0:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E93FCC"))) PPC_WEAK_FUNC(sub_82E93FCC);
PPC_FUNC_IMPL(__imp__sub_82E93FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E93FD0"))) PPC_WEAK_FUNC(sub_82E93FD0);
PPC_FUNC_IMPL(__imp__sub_82E93FD0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e94020
	if (cr6.eq) goto loc_82E94020;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E94000;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E94018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E94020;
	sub_82595170(ctx, base);
loc_82E94020:
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

__attribute__((alias("__imp__sub_82E94034"))) PPC_WEAK_FUNC(sub_82E94034);
PPC_FUNC_IMPL(__imp__sub_82E94034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94038"))) PPC_WEAK_FUNC(sub_82E94038);
PPC_FUNC_IMPL(__imp__sub_82E94038) {
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
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E9405C;
	sub_82596FE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82E9406C;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e93d88
	ctx.lr = 0x82E94074;
	sub_82E93D88(ctx, base);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94080;
	sub_82596FE8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82E94090;
	sub_82597088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835242e8
	ctx.lr = 0x82E9409C;
	sub_835242E8(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82E940BC"))) PPC_WEAK_FUNC(sub_82E940BC);
PPC_FUNC_IMPL(__imp__sub_82E940BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E940C0"))) PPC_WEAK_FUNC(sub_82E940C0);
PPC_FUNC_IMPL(__imp__sub_82E940C0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31748
	ctx.r10.s64 = ctx.r11.s64 + 31748;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e93b70
	ctx.lr = 0x82E940EC;
	sub_82E93B70(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r8,r9,31736
	ctx.r8.s64 = ctx.r9.s64 + 31736;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82596f90
	ctx.lr = 0x82E94100;
	sub_82596F90(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82596f90
	ctx.lr = 0x82E94108;
	sub_82596F90(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82596f90
	ctx.lr = 0x82E94110;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524210
	ctx.lr = 0x82E94118;
	sub_83524210(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e94138
	if (cr6.eq) goto loc_82E94138;
	// bl 0x82595188
	ctx.lr = 0x82E94128;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E94138;
	sub_825952B8(ctx, base);
loc_82E94138:
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

__attribute__((alias("__imp__sub_82E94154"))) PPC_WEAK_FUNC(sub_82E94154);
PPC_FUNC_IMPL(__imp__sub_82E94154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94158"))) PPC_WEAK_FUNC(sub_82E94158);
PPC_FUNC_IMPL(__imp__sub_82E94158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94168
	if (!cr6.eq) goto loc_82E94168;
	// blr 
	return;
loc_82E94168:
	// b 0x82ee39b8
	sub_82EE39B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9416C"))) PPC_WEAK_FUNC(sub_82E9416C);
PPC_FUNC_IMPL(__imp__sub_82E9416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94170"))) PPC_WEAK_FUNC(sub_82E94170);
PPC_FUNC_IMPL(__imp__sub_82E94170) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e941a8
	if (!cr6.eq) goto loc_82E941A8;
loc_82E94190:
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_82E941A8:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94228
	if (cr6.eq) goto loc_82E94228;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94228
	if (cr6.eq) goto loc_82E94228;
	// bl 0x82e93ce8
	ctx.lr = 0x82E941C4;
	sub_82E93CE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e941e4
	if (!cr6.eq) goto loc_82E941E4;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82e93d38
	ctx.lr = 0x82E941D8;
	sub_82E93D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94190
	if (cr6.eq) goto loc_82E94190;
loc_82E941E4:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82e93ce8
	ctx.lr = 0x82E941EC;
	sub_82E93CE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9420c
	if (!cr6.eq) goto loc_82E9420C;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x82e93d38
	ctx.lr = 0x82E94200;
	sub_82E93D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94190
	if (cr6.eq) goto loc_82E94190;
loc_82E9420C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82ee3a20
	ctx.lr = 0x82E94214;
	sub_82EE3A20(ctx, base);
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
loc_82E94228:
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

__attribute__((alias("__imp__sub_82E94240"))) PPC_WEAK_FUNC(sub_82E94240);
PPC_FUNC_IMPL(__imp__sub_82E94240) {
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
	// bl 0x82e94170
	ctx.lr = 0x82E94260;
	sub_82E94170(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82e94270
	if (!cr6.eq) goto loc_82E94270;
loc_82E94268:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82e94284
	goto loc_82E94284;
loc_82E94270:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94268
	if (cr6.eq) goto loc_82E94268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ee3a88
	ctx.lr = 0x82E94284;
	sub_82EE3A88(ctx, base);
loc_82E94284:
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

__attribute__((alias("__imp__sub_82E9429C"))) PPC_WEAK_FUNC(sub_82E9429C);
PPC_FUNC_IMPL(__imp__sub_82E9429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E942A0"))) PPC_WEAK_FUNC(sub_82E942A0);
PPC_FUNC_IMPL(__imp__sub_82E942A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e942b0
	if (!cr6.eq) goto loc_82E942B0;
	// blr 
	return;
loc_82E942B0:
	// b 0x82ee3cf0
	sub_82EE3CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E942B4"))) PPC_WEAK_FUNC(sub_82E942B4);
PPC_FUNC_IMPL(__imp__sub_82E942B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E942B8"))) PPC_WEAK_FUNC(sub_82E942B8);
PPC_FUNC_IMPL(__imp__sub_82E942B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e942c8
	if (!cr6.eq) goto loc_82E942C8;
	// blr 
	return;
loc_82E942C8:
	// b 0x82ee3d60
	sub_82EE3D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E942CC"))) PPC_WEAK_FUNC(sub_82E942CC);
PPC_FUNC_IMPL(__imp__sub_82E942CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E942D0"))) PPC_WEAK_FUNC(sub_82E942D0);
PPC_FUNC_IMPL(__imp__sub_82E942D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e942e0
	if (!cr6.eq) goto loc_82E942E0;
	// blr 
	return;
loc_82E942E0:
	// b 0x82ee3dd0
	sub_82EE3DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E942E4"))) PPC_WEAK_FUNC(sub_82E942E4);
PPC_FUNC_IMPL(__imp__sub_82E942E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E942E8"))) PPC_WEAK_FUNC(sub_82E942E8);
PPC_FUNC_IMPL(__imp__sub_82E942E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e942f8
	if (!cr6.eq) goto loc_82E942F8;
	// blr 
	return;
loc_82E942F8:
	// b 0x82ee3e40
	sub_82EE3E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E942FC"))) PPC_WEAK_FUNC(sub_82E942FC);
PPC_FUNC_IMPL(__imp__sub_82E942FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94300"))) PPC_WEAK_FUNC(sub_82E94300);
PPC_FUNC_IMPL(__imp__sub_82E94300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94310
	if (!cr6.eq) goto loc_82E94310;
	// blr 
	return;
loc_82E94310:
	// b 0x82ee3eb0
	sub_82EE3EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94314"))) PPC_WEAK_FUNC(sub_82E94314);
PPC_FUNC_IMPL(__imp__sub_82E94314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94318"))) PPC_WEAK_FUNC(sub_82E94318);
PPC_FUNC_IMPL(__imp__sub_82E94318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94328
	if (!cr6.eq) goto loc_82E94328;
	// blr 
	return;
loc_82E94328:
	// b 0x82ee3f30
	sub_82EE3F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9432C"))) PPC_WEAK_FUNC(sub_82E9432C);
PPC_FUNC_IMPL(__imp__sub_82E9432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94330"))) PPC_WEAK_FUNC(sub_82E94330);
PPC_FUNC_IMPL(__imp__sub_82E94330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94340
	if (!cr6.eq) goto loc_82E94340;
	// blr 
	return;
loc_82E94340:
	// b 0x82ee3fb8
	sub_82EE3FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94344"))) PPC_WEAK_FUNC(sub_82E94344);
PPC_FUNC_IMPL(__imp__sub_82E94344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94348"))) PPC_WEAK_FUNC(sub_82E94348);
PPC_FUNC_IMPL(__imp__sub_82E94348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94358
	if (!cr6.eq) goto loc_82E94358;
	// blr 
	return;
loc_82E94358:
	// b 0x82e93d88
	sub_82E93D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9435C"))) PPC_WEAK_FUNC(sub_82E9435C);
PPC_FUNC_IMPL(__imp__sub_82E9435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94360"))) PPC_WEAK_FUNC(sub_82E94360);
PPC_FUNC_IMPL(__imp__sub_82E94360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94370
	if (!cr6.eq) goto loc_82E94370;
	// blr 
	return;
loc_82E94370:
	// b 0x82e93e50
	sub_82E93E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94374"))) PPC_WEAK_FUNC(sub_82E94374);
PPC_FUNC_IMPL(__imp__sub_82E94374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94378"))) PPC_WEAK_FUNC(sub_82E94378);
PPC_FUNC_IMPL(__imp__sub_82E94378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E94380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82e943a0
	if (!cr6.eq) goto loc_82E943A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E943A0:
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E943AC;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82597088
	ctx.lr = 0x82E943B8;
	sub_82597088(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E943C8"))) PPC_WEAK_FUNC(sub_82E943C8);
PPC_FUNC_IMPL(__imp__sub_82E943C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E943D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82e943f0
	if (!cr6.eq) goto loc_82E943F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E943F0:
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E943FC;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82597088
	ctx.lr = 0x82E94408;
	sub_82597088(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94418"))) PPC_WEAK_FUNC(sub_82E94418);
PPC_FUNC_IMPL(__imp__sub_82E94418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e9442c
	if (!cr6.eq) goto loc_82E9442C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E9442C:
	// b 0x82ee40b8
	sub_82EE40B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94430"))) PPC_WEAK_FUNC(sub_82E94430);
PPC_FUNC_IMPL(__imp__sub_82E94430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94440
	if (!cr6.eq) goto loc_82E94440;
	// blr 
	return;
loc_82E94440:
	// b 0x82ee48b8
	sub_82EE48B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94444"))) PPC_WEAK_FUNC(sub_82E94444);
PPC_FUNC_IMPL(__imp__sub_82E94444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94448"))) PPC_WEAK_FUNC(sub_82E94448);
PPC_FUNC_IMPL(__imp__sub_82E94448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94458
	if (!cr6.eq) goto loc_82E94458;
	// blr 
	return;
loc_82E94458:
	// b 0x82ee3ae0
	sub_82EE3AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9445C"))) PPC_WEAK_FUNC(sub_82E9445C);
PPC_FUNC_IMPL(__imp__sub_82E9445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94460"))) PPC_WEAK_FUNC(sub_82E94460);
PPC_FUNC_IMPL(__imp__sub_82E94460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94470
	if (!cr6.eq) goto loc_82E94470;
	// blr 
	return;
loc_82E94470:
	// b 0x82ee4928
	sub_82EE4928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94474"))) PPC_WEAK_FUNC(sub_82E94474);
PPC_FUNC_IMPL(__imp__sub_82E94474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94478"))) PPC_WEAK_FUNC(sub_82E94478);
PPC_FUNC_IMPL(__imp__sub_82E94478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E94480;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e94504
	if (!cr6.eq) goto loc_82E94504;
	// lbz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82E944B8:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e944d4
	if (cr6.eq) goto loc_82E944D4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82e944e0
	goto loc_82E944E0;
loc_82E944D4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82E944E0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e944f4
	if (cr6.eq) goto loc_82E944F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e944f8
	goto loc_82E944F8;
loc_82E944F4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82E944F8:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e944b8
	if (cr6.eq) goto loc_82E944B8;
loc_82E94504:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94564
	if (cr6.eq) goto loc_82E94564;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e9455c
	if (!cr6.eq) goto loc_82E9455C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82dba428
	ctx.lr = 0x82E94540;
	sub_82DBA428(ctx, base);
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
loc_82E9455C:
	// bl 0x8349cc40
	ctx.lr = 0x82E94560;
	sub_8349CC40(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E94564:
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// lbz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e945a8
	if (!cr6.lt) goto loc_82E945A8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dba428
	ctx.lr = 0x82E9458C;
	sub_82DBA428(ctx, base);
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
loc_82E945A8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E945BC;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
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

__attribute__((alias("__imp__sub_82E945D4"))) PPC_WEAK_FUNC(sub_82E945D4);
PPC_FUNC_IMPL(__imp__sub_82E945D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E945D8"))) PPC_WEAK_FUNC(sub_82E945D8);
PPC_FUNC_IMPL(__imp__sub_82E945D8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,31760
	ctx.r10.s64 = ctx.r11.s64 + 31760;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e94038
	ctx.lr = 0x82E945FC;
	sub_82E94038(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82588f78
	ctx.lr = 0x82E94604;
	sub_82588F78(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82e939a8
	ctx.lr = 0x82E9460C;
	sub_82E939A8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82596f90
	ctx.lr = 0x82E94614;
	sub_82596F90(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r8,r9,31736
	ctx.r8.s64 = ctx.r9.s64 + 31736;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82596f90
	ctx.lr = 0x82E94628;
	sub_82596F90(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82596f90
	ctx.lr = 0x82E94630;
	sub_82596F90(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82596f90
	ctx.lr = 0x82E94638;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524210
	ctx.lr = 0x82E94640;
	sub_83524210(ctx, base);
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

__attribute__((alias("__imp__sub_82E94654"))) PPC_WEAK_FUNC(sub_82E94654);
PPC_FUNC_IMPL(__imp__sub_82E94654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94658"))) PPC_WEAK_FUNC(sub_82E94658);
PPC_FUNC_IMPL(__imp__sub_82E94658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E94660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94674;
	sub_82596FE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82E94684;
	sub_82597088(ctx, base);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94690;
	sub_82596FE8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// bl 0x82597088
	ctx.lr = 0x82E946A0;
	sub_82597088(ctx, base);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E946AC;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x82597088
	ctx.lr = 0x82E946B8;
	sub_82597088(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82e946f8
	if (!cr6.eq) goto loc_82E946F8;
loc_82E946C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e946d8
	if (cr6.eq) goto loc_82E946D8;
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82ee45b0
	ctx.lr = 0x82E946D8;
	sub_82EE45B0(ctx, base);
loc_82E946D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E946E0;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x82597088
	ctx.lr = 0x82E946EC;
	sub_82597088(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82e946c0
	if (cr6.eq) goto loc_82E946C0;
loc_82E946F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94700;
	sub_82596FE8(ctx, base);
	// stb r28,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82E9470C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94718"))) PPC_WEAK_FUNC(sub_82E94718);
PPC_FUNC_IMPL(__imp__sub_82E94718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E94720;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e9475c
	if (!cr6.eq) goto loc_82E9475C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dba428
	ctx.lr = 0x82E94750;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E9475C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82e947a0
	if (!cr6.eq) goto loc_82E947A0;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e9489c
	if (!cr6.lt) goto loc_82E9489C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dba428
	ctx.lr = 0x82E94794;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E947A0:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82e947dc
	if (!cr6.eq) goto loc_82E947DC;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// lbz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e9489c
	if (!cr6.lt) goto loc_82E9489C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dba428
	ctx.lr = 0x82E947D0;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E947DC:
	// lbz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82e94840
	if (!cr6.gt) goto loc_82E94840;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8349cc40
	ctx.lr = 0x82E947F8;
	sub_8349CC40(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82e9483c
	if (!cr6.lt) goto loc_82E9483C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e94888
	if (!cr6.eq) goto loc_82E94888;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82E94828:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82dba428
	ctx.lr = 0x82E94830;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E9483C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82E94840:
	// bge cr6,0x82e9489c
	if (!cr6.lt) goto loc_82E9489C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ccd48
	ctx.lr = 0x82E94850;
	sub_833CCD48(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82e94868
	if (cr6.eq) goto loc_82E94868;
	// lbz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e9489c
	if (!cr6.lt) goto loc_82E9489C;
loc_82E94868:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e94828
	if (cr6.eq) goto loc_82E94828;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82E94888:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82dba428
	ctx.lr = 0x82E94890;
	sub_82DBA428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82E9489C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e94478
	ctx.lr = 0x82E948B0;
	sub_82E94478(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E948C8"))) PPC_WEAK_FUNC(sub_82E948C8);
PPC_FUNC_IMPL(__imp__sub_82E948C8) {
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
	// bl 0x82e945d8
	ctx.lr = 0x82E948E8;
	sub_82E945D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94908
	if (cr6.eq) goto loc_82E94908;
	// bl 0x82595188
	ctx.lr = 0x82E948F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82E94908;
	sub_825952B8(ctx, base);
loc_82E94908:
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

__attribute__((alias("__imp__sub_82E94924"))) PPC_WEAK_FUNC(sub_82E94924);
PPC_FUNC_IMPL(__imp__sub_82E94924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94928"))) PPC_WEAK_FUNC(sub_82E94928);
PPC_FUNC_IMPL(__imp__sub_82E94928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E94930;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r5,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r5.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// addi r5,r1,167
	ctx.r5.s64 = ctx.r1.s64 + 167;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83875fd0
	ctx.lr = 0x82E94950;
	sub_83875FD0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82e949ac
	if (cr6.eq) goto loc_82E949AC;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e949ac
	if (cr6.eq) goto loc_82E949AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// bl 0x82e94240
	ctx.lr = 0x82E94978;
	sub_82E94240(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82e949ac
	if (!cr6.eq) goto loc_82E949AC;
	// bl 0x83a7d958
	ctx.lr = 0x82E94984;
	sub_83A7D958(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82E94990;
	sub_83524138(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x82e949ac
	if (cr6.lt) goto loc_82E949AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E949AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E949B8"))) PPC_WEAK_FUNC(sub_82E949B8);
PPC_FUNC_IMPL(__imp__sub_82E949B8) {
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
	// addi r4,r3,168
	ctx.r4.s64 = ctx.r3.s64 + 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80748
	ctx.lr = 0x82E949D0;
	sub_82B80748(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e949e0
	if (cr6.eq) goto loc_82E949E0;
	// bl 0x82ed5eb0
	ctx.lr = 0x82E949E0;
	sub_82ED5EB0(ctx, base);
loc_82E949E0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e949f0
	if (cr6.eq) goto loc_82E949F0;
	// bl 0x8259b510
	ctx.lr = 0x82E949F0;
	sub_8259B510(ctx, base);
loc_82E949F0:
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

__attribute__((alias("__imp__sub_82E94A04"))) PPC_WEAK_FUNC(sub_82E94A04);
PPC_FUNC_IMPL(__imp__sub_82E94A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94A08"))) PPC_WEAK_FUNC(sub_82E94A08);
PPC_FUNC_IMPL(__imp__sub_82E94A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E94A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94a2c
	if (!cr6.eq) goto loc_82E94A2C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E94A2C:
	// bl 0x82ee4040
	ctx.lr = 0x82E94A30;
	sub_82EE4040(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82e94aac
	if (cr6.eq) goto loc_82E94AAC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82E94A48:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e94a94
	if (!cr6.eq) goto loc_82E94A94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// bl 0x82e94170
	ctx.lr = 0x82E94A64;
	sub_82E94170(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82e94a94
	if (cr6.eq) goto loc_82E94A94;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94a94
	if (cr6.eq) goto loc_82E94A94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ee3a88
	ctx.lr = 0x82E94A80;
	sub_82EE3A88(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82e94a94
	if (!cr6.eq) goto loc_82E94A94;
	// bl 0x83a7d958
	ctx.lr = 0x82E94A8C;
	sub_83A7D958(ctx, base);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_82E94A94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ccd48
	ctx.lr = 0x82E94A9C;
	sub_833CCD48(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e94a48
	if (!cr6.eq) goto loc_82E94A48;
loc_82E94AAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94AB8"))) PPC_WEAK_FUNC(sub_82E94AB8);
PPC_FUNC_IMPL(__imp__sub_82E94AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E94AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e93f10
	ctx.lr = 0x82E94AD8;
	sub_82E93F10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d05c28
	ctx.lr = 0x82E94AFC;
	sub_82D05C28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82c5a180
	ctx.lr = 0x82E94B10;
	sub_82C5A180(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94B1C"))) PPC_WEAK_FUNC(sub_82E94B1C);
PPC_FUNC_IMPL(__imp__sub_82E94B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94B20"))) PPC_WEAK_FUNC(sub_82E94B20);
PPC_FUNC_IMPL(__imp__sub_82E94B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E94B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x82E94B44;
	sub_8257FAD0(ctx, base);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b80748
	ctx.lr = 0x82E94B54;
	sub_82B80748(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e94ba4
	if (!cr6.eq) goto loc_82E94BA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee4fa8
	ctx.lr = 0x82E94B70;
	sub_82EE4FA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83884cc0
	ctx.lr = 0x82E94B7C;
	sub_83884CC0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94b8c
	if (cr6.eq) goto loc_82E94B8C;
	// bl 0x8259b510
	ctx.lr = 0x82E94B8C;
	sub_8259B510(ctx, base);
loc_82E94B8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94ba4
	if (cr6.eq) goto loc_82E94BA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8387bf40
	ctx.lr = 0x82E94BA4;
	sub_8387BF40(ctx, base);
loc_82E94BA4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82e94bbc
	if (cr6.lt) goto loc_82E94BBC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82E94BBC;
	sub_8257FB60(ctx, base);
loc_82E94BBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94BC8"))) PPC_WEAK_FUNC(sub_82E94BC8);
PPC_FUNC_IMPL(__imp__sub_82E94BC8) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e94c04
	if (!cr6.eq) goto loc_82E94C04;
loc_82E94BEC:
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
loc_82E94C04:
	// bl 0x82ee3c80
	ctx.lr = 0x82E94C08;
	sub_82EE3C80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94bec
	if (cr6.eq) goto loc_82E94BEC;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82e94ab8
	ctx.lr = 0x82E94C20;
	sub_82E94AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82E94C38"))) PPC_WEAK_FUNC(sub_82E94C38);
PPC_FUNC_IMPL(__imp__sub_82E94C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E94C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,168
	ctx.r29.s64 = ctx.r4.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b80748
	ctx.lr = 0x82E94C5C;
	sub_82B80748(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// beq cr6,0x82e94c7c
	if (cr6.eq) goto loc_82E94C7C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82E94C7C;
	sub_8259B510(ctx, base);
loc_82E94C7C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e94ca0
	if (cr6.eq) goto loc_82E94CA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E94CA0:
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e94b20
	ctx.lr = 0x82E94CAC;
	sub_82E94B20(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e94cc8
	if (!cr6.eq) goto loc_82E94CC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82e94ce4
	goto loc_82E94CE4;
loc_82E94CC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8387bf40
	ctx.lr = 0x82E94CD4;
	sub_8387BF40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82b64b88
	ctx.lr = 0x82E94CE4;
	sub_82B64B88(ctx, base);
loc_82E94CE4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94cf4
	if (cr6.eq) goto loc_82E94CF4;
	// bl 0x8259b510
	ctx.lr = 0x82E94CF4;
	sub_8259B510(ctx, base);
loc_82E94CF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94D00"))) PPC_WEAK_FUNC(sub_82E94D00);
PPC_FUNC_IMPL(__imp__sub_82E94D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E94D08;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94D1C;
	sub_82596FE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x82597088
	ctx.lr = 0x82E94D2C;
	sub_82597088(ctx, base);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94D38;
	sub_82596FE8(ctx, base);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94D44;
	sub_82597088(ctx, base);
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94D50;
	sub_82596FE8(ctx, base);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94D5C;
	sub_82597088(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r4,r9,31588
	ctx.r4.s64 = ctx.r9.s64 + 31588;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82E94D94;
	sub_8259CC28(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r28.u64);
	// bl 0x82e93d88
	ctx.lr = 0x82E94DB4;
	sub_82E93D88(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82e94de8
	if (!cr6.eq) goto loc_82E94DE8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e94ddc
	if (cr6.lt) goto loc_82E94DDC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82E94DDC;
	sub_825952B8(ctx, base);
loc_82E94DDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E94DE8:
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94DF4;
	sub_82596FE8(ctx, base);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94E00;
	sub_82597088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94E08;
	sub_82596FE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82E94E18;
	sub_82597088(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835249e8
	ctx.lr = 0x82E94E24;
	sub_835249E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94e54
	if (cr6.eq) goto loc_82E94E54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94E34;
	sub_82596FE8(ctx, base);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94E40;
	sub_82597088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82E94E48;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E94E54:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82E94E5C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94E68"))) PPC_WEAK_FUNC(sub_82E94E68);
PPC_FUNC_IMPL(__imp__sub_82E94E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E94E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94E84;
	sub_82596FE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x82597088
	ctx.lr = 0x82E94E94;
	sub_82597088(ctx, base);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94EA0;
	sub_82596FE8(ctx, base);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94EAC;
	sub_82597088(ctx, base);
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94EB8;
	sub_82596FE8(ctx, base);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94EC4;
	sub_82597088(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r4,r9,31608
	ctx.r4.s64 = ctx.r9.s64 + 31608;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82E94EFC;
	sub_8259CC28(ctx, base);
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r28,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r28.u64);
	// bl 0x82596fe8
	ctx.lr = 0x82E94F1C;
	sub_82596FE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// bl 0x82597088
	ctx.lr = 0x82E94F2C;
	sub_82597088(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835249e8
	ctx.lr = 0x82E94F38;
	sub_835249E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e94f7c
	if (cr6.eq) goto loc_82E94F7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E94F48;
	sub_82596FE8(ctx, base);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82E94F54;
	sub_82597088(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e94f70
	if (cr6.lt) goto loc_82E94F70;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82E94F70;
	sub_825952B8(ctx, base);
loc_82E94F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E94F7C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e94f98
	if (cr6.lt) goto loc_82E94F98;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82E94F98;
	sub_825952B8(ctx, base);
loc_82E94F98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E94FA4"))) PPC_WEAK_FUNC(sub_82E94FA4);
PPC_FUNC_IMPL(__imp__sub_82E94FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E94FA8"))) PPC_WEAK_FUNC(sub_82E94FA8);
PPC_FUNC_IMPL(__imp__sub_82E94FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E94FB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e950fc
	if (cr6.eq) goto loc_82E950FC;
	// bl 0x82ee3b50
	ctx.lr = 0x82E94FCC;
	sub_82EE3B50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e950ac
	if (cr6.eq) goto loc_82E950AC;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E94FF4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9500c
	if (cr6.eq) goto loc_82E9500C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e939f8
	ctx.lr = 0x82E95004;
	sub_82E939F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82e95010
	goto loc_82E95010;
loc_82E9500C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82E95010:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,264
	ctx.r4.s64 = 264;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E95024;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e9503c
	if (cr6.eq) goto loc_82E9503C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e93ac8
	ctx.lr = 0x82E95034;
	sub_82E93AC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82e95040
	goto loc_82E95040;
loc_82E9503C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E95040:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e950b8
	if (cr6.eq) goto loc_82E950B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e94e68
	ctx.lr = 0x82E95050;
	sub_82E94E68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e950b8
	if (cr6.eq) goto loc_82E950B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e950b8
	if (cr6.eq) goto loc_82E950B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e94d00
	ctx.lr = 0x82E9506C;
	sub_82E94D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e950b8
	if (cr6.eq) goto loc_82E950B8;
	// lwz r29,176(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// beq cr6,0x82e95098
	if (cr6.eq) goto loc_82E95098;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e93fd0
	ctx.lr = 0x82E95098;
	sub_82E93FD0(ctx, base);
loc_82E95098:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e950ac
	if (cr6.eq) goto loc_82E950AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e93fd0
	ctx.lr = 0x82E950AC;
	sub_82E93FD0(ctx, base);
loc_82E950AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E950B8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e950d4
	if (cr6.eq) goto loc_82E950D4;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x82E950CC;
	sub_8398A348(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E950D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e950e8
	if (cr6.eq) goto loc_82E950E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e93fd0
	ctx.lr = 0x82E950E8;
	sub_82E93FD0(ctx, base);
loc_82E950E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e950fc
	if (cr6.eq) goto loc_82E950FC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e93fd0
	ctx.lr = 0x82E950FC;
	sub_82E93FD0(ctx, base);
loc_82E950FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E95108"))) PPC_WEAK_FUNC(sub_82E95108);
PPC_FUNC_IMPL(__imp__sub_82E95108) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E9513C;
	sub_82595718(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// beq 0x82e95180
	if (cr0.eq) goto loc_82E95180;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82E95180:
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

__attribute__((alias("__imp__sub_82E95198"))) PPC_WEAK_FUNC(sub_82E95198);
PPC_FUNC_IMPL(__imp__sub_82E95198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E951A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// bl 0x82a8c428
	ctx.lr = 0x82E951C0;
	sub_82A8C428(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r11,-2392
	ctx.r29.s64 = ctx.r11.s64 + -2392;
loc_82E951CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ee3708
	ctx.lr = 0x82E951D4;
	sub_82EE3708(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e951f8
	if (cr6.eq) goto loc_82E951F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82474170
	ctx.lr = 0x82E951F0;
	sub_82474170(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x82E951F8;
	sub_82473550(ctx, base);
loc_82E951F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82e951cc
	if (cr6.lt) goto loc_82E951CC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e952d0
	if (cr6.eq) goto loc_82E952D0;
	// bl 0x82e7e2f8
	ctx.lr = 0x82E95218;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e952d0
	if (cr6.eq) goto loc_82E952D0;
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r5,109
	ctx.r5.s64 = 109;
	// addi r4,r11,31776
	ctx.r4.s64 = ctx.r11.s64 + 31776;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82E95248;
	sub_8259CC28(ctx, base);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82E95254;
	sub_82A79BF8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82e95268
	if (!cr6.lt) goto loc_82E95268;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82E95268:
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82E95278:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e95278
	if (!cr6.eq) goto loc_82E95278;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E9529C;
	sub_8259CC28(ctx, base);
	// li r6,313
	ctx.r6.s64 = 313;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e7eb70
	ctx.lr = 0x82E952B0;
	sub_82E7EB70(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e952c4
	if (cr6.lt) goto loc_82E952C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82E952C4;
	sub_82416268(ctx, base);
loc_82E952C4:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
loc_82E952D0:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a79160
	ctx.lr = 0x82E952D8;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82E952EC;
	sub_831CCF00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E952F8"))) PPC_WEAK_FUNC(sub_82E952F8);
PPC_FUNC_IMPL(__imp__sub_82E952F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82E95300;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,56
	ctx.r25.s64 = ctx.r3.s64 + 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E9531C;
	sub_82596FE8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r28,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r28.u8);
	// bl 0x82597088
	ctx.lr = 0x82E9532C;
	sub_82597088(ctx, base);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E95338;
	sub_82596FE8(ctx, base);
	// stb r24,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E95344;
	sub_82597088(ctx, base);
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82589098
	ctx.lr = 0x82E95354;
	sub_82589098(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e95368
	if (cr6.eq) goto loc_82E95368;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// b 0x82e954b4
	goto loc_82E954B4;
loc_82E95368:
	// addi r26,r31,160
	ctx.r26.s64 = ctx.r31.s64 + 160;
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82E95374:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ee3930
	ctx.lr = 0x82E9537C;
	sub_82EE3930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// and r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x82e95374
	if (!cr0.eq) goto loc_82E95374;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e953a8
	if (!cr6.eq) goto loc_82E953A8;
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x82e954b4
	goto loc_82E954B4;
loc_82E953A8:
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E953B4;
	sub_82596FE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x82597088
	ctx.lr = 0x82E953C0;
	sub_82597088(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e954b4
	if (!cr6.eq) goto loc_82E954B4;
	// li r29,1000
	ctx.r29.s64 = 1000;
loc_82E953CC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82e94a08
	ctx.lr = 0x82E953D4;
	sub_82E94A08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e954b4
	if (cr6.eq) goto loc_82E954B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e95198
	ctx.lr = 0x82E953E8;
	sub_82E95198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e954b4
	if (!cr6.eq) goto loc_82E954B4;
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E95400;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r22,124(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// bl 0x82597088
	ctx.lr = 0x82E9540C;
	sub_82597088(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82e9547c
	if (cr6.eq) goto loc_82E9547C;
	// bl 0x83740858
	ctx.lr = 0x82E95418;
	sub_83740858(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// divwu r5,r29,r9
	ctx.r5.u32 = PPCDivide(ctx.r29.u32, ctx.r9.u32);
	// twllei r9,0
	// bl 0x82588f90
	ctx.lr = 0x82E95458;
	sub_82588F90(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e95494
	if (cr6.eq) goto loc_82E95494;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E9546C;
	sub_82596FE8(ctx, base);
	// stb r24,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E95478;
	sub_82597088(ctx, base);
	// b 0x82e95494
	goto loc_82E95494;
loc_82E9547C:
	// bl 0x83740858
	ctx.lr = 0x82E95480;
	sub_83740858(ctx, base);
	// divwu r5,r29,r3
	ctx.r5.u32 = PPCDivide(ctx.r29.u32, ctx.r3.u32);
	// twllei r3,0
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82588f90
	ctx.lr = 0x82E95494;
	sub_82588F90(ctx, base);
loc_82E95494:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E9549C;
	sub_82596FE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// bl 0x82597088
	ctx.lr = 0x82E954A8;
	sub_82597088(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e953cc
	if (cr6.eq) goto loc_82E953CC;
loc_82E954B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E954BC;
	sub_82596FE8(ctx, base);
	// stb r24,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r24.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x82E954C8;
	sub_82597088(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E954D4"))) PPC_WEAK_FUNC(sub_82E954D4);
PPC_FUNC_IMPL(__imp__sub_82E954D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E954D8"))) PPC_WEAK_FUNC(sub_82E954D8);
PPC_FUNC_IMPL(__imp__sub_82E954D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E954E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e9552c
	if (!cr6.eq) goto loc_82E9552C;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
loc_82E95504:
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e95518
	if (!cr6.lt) goto loc_82E95518;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82e95520
	goto loc_82E95520;
loc_82E95518:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E95520:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e95504
	if (cr6.eq) goto loc_82E95504;
loc_82E9552C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82e95548
	if (cr6.eq) goto loc_82E95548;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e95590
	if (!cr6.lt) goto loc_82E95590;
loc_82E95548:
	// bl 0x83a7d958
	ctx.lr = 0x82E9554C;
	sub_83A7D958(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82e95108
	ctx.lr = 0x82E9556C;
	sub_82E95108(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e94718
	ctx.lr = 0x82E95580;
	sub_82E94718(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E95590:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E9559C"))) PPC_WEAK_FUNC(sub_82E9559C);
PPC_FUNC_IMPL(__imp__sub_82E9559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E955A0"))) PPC_WEAK_FUNC(sub_82E955A0);
PPC_FUNC_IMPL(__imp__sub_82E955A0) {
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
	// stb r4,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r4.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e955d0
	if (!cr6.eq) goto loc_82E955D0;
loc_82E955C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e95608
	goto loc_82E95608;
loc_82E955D0:
	// bl 0x82ee3c08
	ctx.lr = 0x82E955D4;
	sub_82EE3C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e955c8
	if (cr6.eq) goto loc_82E955C8;
	// bl 0x83a7d958
	ctx.lr = 0x82E955E4;
	sub_83A7D958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,143
	ctx.r4.s64 = ctx.r1.s64 + 143;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82e954d8
	ctx.lr = 0x82E955F4;
	sub_82E954D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82E95608:
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

__attribute__((alias("__imp__sub_82E95620"))) PPC_WEAK_FUNC(sub_82E95620);
PPC_FUNC_IMPL(__imp__sub_82E95620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82E95628;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e956ac
	if (cr6.eq) goto loc_82E956AC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r5,48
	ctx.r31.s64 = ctx.r5.s64 + 48;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82E95650:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e95698
	if (cr6.eq) goto loc_82E95698;
	// stw r26,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82E95678;
	sub_8259CB28(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// stb r28,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r28.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82E95698;
	sub_8259CB28(ctx, base);
loc_82E95698:
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x82e95650
	if (!cr6.eq) goto loc_82E95650;
loc_82E956AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E956B8"))) PPC_WEAK_FUNC(sub_82E956B8);
PPC_FUNC_IMPL(__imp__sub_82E956B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E956C0;
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
	// beq cr6,0x82e95808
	if (cr6.eq) goto loc_82E95808;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,56
	ctx.r29.s64 = 56;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e95700
	if (!cr0.eq) goto loc_82E95700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d71cb8
	ctx.lr = 0x82E956F4;
	sub_82D71CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E95700:
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
	// bgt cr6,0x82e95764
	if (cr6.gt) goto loc_82E95764;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82ee4770
	ctx.lr = 0x82E95728;
	sub_82EE4770(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ee46e0
	ctx.lr = 0x82E95738;
	sub_82EE46E0(ctx, base);
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
	// mulli r10,r7,56
	ctx.r10.s64 = ctx.r7.s64 * 56;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E95764:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82e9579c
	if (cr6.gt) goto loc_82E9579C;
	// mulli r10,r9,56
	ctx.r10.s64 = ctx.r9.s64 * 56;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ee4770
	ctx.lr = 0x82E95790;
	sub_82EE4770(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82e957f4
	goto loc_82E957F4;
loc_82E9579C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e957c8
	if (cr6.eq) goto loc_82E957C8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ee46e0
	ctx.lr = 0x82E957B4;
	sub_82EE46E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E957C8;
	sub_825952B8(ctx, base);
loc_82E957C8:
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
	// bl 0x837e8478
	ctx.lr = 0x82E957E0;
	sub_837E8478(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e95808
	if (cr6.eq) goto loc_82E95808;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E957F4:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82e95620
	ctx.lr = 0x82E95804;
	sub_82E95620(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82E95808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E95814"))) PPC_WEAK_FUNC(sub_82E95814);
PPC_FUNC_IMPL(__imp__sub_82E95814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95818"))) PPC_WEAK_FUNC(sub_82E95818);
PPC_FUNC_IMPL(__imp__sub_82E95818) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,76
	ctx.r10.s64 = 4980736;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// ori r8,r10,19264
	ctx.r8.u64 = ctx.r10.u64 | 19264;
	// lfs f0,31584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31584);
	ctx.f0.f64 = double(temp.f32);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82ec5100
	ctx.lr = 0x82E95854;
	sub_82EC5100(ctx, base);
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

__attribute__((alias("__imp__sub_82E9586C"))) PPC_WEAK_FUNC(sub_82E9586C);
PPC_FUNC_IMPL(__imp__sub_82E9586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95870"))) PPC_WEAK_FUNC(sub_82E95870);
PPC_FUNC_IMPL(__imp__sub_82E95870) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82ec5100
	ctx.lr = 0x82E958A8;
	sub_82EC5100(ctx, base);
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

__attribute__((alias("__imp__sub_82E958C0"))) PPC_WEAK_FUNC(sub_82E958C0);
PPC_FUNC_IMPL(__imp__sub_82E958C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E958C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,176(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,176
	ctx.r29.s64 = ctx.r3.s64 + 176;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e958f0
	if (cr6.eq) goto loc_82E958F0;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82e93fd0
	ctx.lr = 0x82E958EC;
	sub_82E93FD0(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82E958F0:
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r30,184
	ctx.r31.s64 = ctx.r30.s64 + 184;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9590c
	if (cr6.eq) goto loc_82E9590C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e93fd0
	ctx.lr = 0x82E95908;
	sub_82E93FD0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82E9590C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e95924
	if (cr6.eq) goto loc_82E95924;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e93fd0
	ctx.lr = 0x82E95920;
	sub_82E93FD0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82E95924:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e9593c
	if (cr6.eq) goto loc_82E9593C;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82e93fd0
	ctx.lr = 0x82E95938;
	sub_82E93FD0(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82E9593C:
	// lwz r31,172(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e9596c
	if (cr6.eq) goto loc_82E9596C;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E95950;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e9596c
	if (!cr6.eq) goto loc_82E9596C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E9596C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E9596C:
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82e93bf0
	ctx.lr = 0x82E95974;
	sub_82E93BF0(ctx, base);
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5a180
	ctx.lr = 0x82E95988;
	sub_82C5A180(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E9599C;
	sub_825952B8(ctx, base);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e959b8
	if (cr6.eq) goto loc_82E959B8;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x82E959B4;
	sub_8398A348(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82E959B8:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82e627f0
	ctx.lr = 0x82E959C0;
	sub_82E627F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E959C8"))) PPC_WEAK_FUNC(sub_82E959C8);
PPC_FUNC_IMPL(__imp__sub_82E959C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82e956b8
	ctx.lr = 0x82E95A00;
	sub_82E956B8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x82e956b8
	ctx.lr = 0x82E95A0C;
	sub_82E956B8(ctx, base);
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

__attribute__((alias("__imp__sub_82E95A28"))) PPC_WEAK_FUNC(sub_82E95A28);
PPC_FUNC_IMPL(__imp__sub_82E95A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E95A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bl 0x82d71c30
	ctx.lr = 0x82E95A78;
	sub_82D71C30(ctx, base);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82d71c30
	ctx.lr = 0x82E95A84;
	sub_82D71C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E95A90"))) PPC_WEAK_FUNC(sub_82E95A90);
PPC_FUNC_IMPL(__imp__sub_82E95A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E95A98;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// bl 0x82d71c30
	ctx.lr = 0x82E95AE0;
	sub_82D71C30(ctx, base);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82d71c30
	ctx.lr = 0x82E95AEC;
	sub_82D71C30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// bl 0x8387b310
	ctx.lr = 0x82E95B08;
	sub_8387B310(ctx, base);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82E95B34;
	sub_8257FA88(ctx, base);
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r6,r7,-22208
	ctx.r6.s64 = ctx.r7.s64 + -22208;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// lwz r10,-22208(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22208);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e95b70
	if (cr6.eq) goto loc_82E95B70;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82E95B70;
	sub_825749E0(ctx, base);
loc_82E95B70:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b80748
	ctx.lr = 0x82E95B7C;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82e95ba8
	if (cr6.eq) goto loc_82E95BA8;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E95B8C;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e95ba8
	if (!cr6.eq) goto loc_82E95BA8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E95BA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E95BA8:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e95d50
	if (cr6.eq) goto loc_82E95D50;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x82e95bd4
	if (cr6.eq) goto loc_82E95BD4;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82E95BD4;
	sub_825749E0(ctx, base);
loc_82E95BD4:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b80748
	ctx.lr = 0x82E95BE0;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82e95c0c
	if (cr6.eq) goto loc_82E95C0C;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E95BF0;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e95c0c
	if (!cr6.eq) goto loc_82E95C0C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E95C0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E95C0C:
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82e95d40
	if (cr6.eq) goto loc_82E95D40;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x82ea9ee0
	ctx.lr = 0x82E95C2C;
	sub_82EA9EE0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e95d30
	if (cr6.eq) goto loc_82E95D30;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e95870
	ctx.lr = 0x82E95C40;
	sub_82E95870(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ea57b8
	ctx.lr = 0x82E95C54;
	sub_82EA57B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e95d2c
	if (cr6.eq) goto loc_82E95D2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e959c8
	ctx.lr = 0x82E95C6C;
	sub_82E959C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e95ce8
	if (cr6.lt) goto loc_82E95CE8;
	// bne cr6,0x82e95d28
	if (!cr6.eq) goto loc_82E95D28;
	// bl 0x830ff290
	ctx.lr = 0x82E95C80;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,272
	ctx.r4.s64 = 272;
	// bne cr6,0x82e95cc0
	if (!cr6.eq) goto loc_82E95CC0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E95CA4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e95d1c
	if (cr6.eq) goto loc_82E95D1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ee5de8
	ctx.lr = 0x82E95CB8;
	sub_82EE5DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e95d20
	goto loc_82E95D20;
loc_82E95CC0:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82E95CCC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e95d1c
	if (cr6.eq) goto loc_82E95D1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ee5de8
	ctx.lr = 0x82E95CE0;
	sub_82EE5DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e95d20
	goto loc_82E95D20;
loc_82E95CE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82E95D00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e95d1c
	if (cr6.eq) goto loc_82E95D1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ee5978
	ctx.lr = 0x82E95D14;
	sub_82EE5978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e95d20
	goto loc_82E95D20;
loc_82E95D1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E95D20:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8398b528
	ctx.lr = 0x82E95D28;
	sub_8398B528(ctx, base);
loc_82E95D28:
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
loc_82E95D2C:
	// bl 0x82e627f0
	ctx.lr = 0x82E95D30;
	sub_82E627F0(ctx, base);
loc_82E95D30:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e95d40
	if (cr6.eq) goto loc_82E95D40;
	// bl 0x8259b510
	ctx.lr = 0x82E95D40;
	sub_8259B510(ctx, base);
loc_82E95D40:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e95d50
	if (cr6.eq) goto loc_82E95D50;
	// bl 0x8259b510
	ctx.lr = 0x82E95D50;
	sub_8259B510(ctx, base);
loc_82E95D50:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e95d60
	if (cr6.eq) goto loc_82E95D60;
	// bl 0x8259b510
	ctx.lr = 0x82E95D60;
	sub_8259B510(ctx, base);
loc_82E95D60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E95D6C"))) PPC_WEAK_FUNC(sub_82E95D6C);
PPC_FUNC_IMPL(__imp__sub_82E95D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95D70"))) PPC_WEAK_FUNC(sub_82E95D70);
PPC_FUNC_IMPL(__imp__sub_82E95D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,577(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e95dbc
	if (!cr6.eq) goto loc_82E95DBC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,577(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e95db4
	if (!cr6.eq) goto loc_82E95DB4;
loc_82E95DA0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,577(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e95da0
	if (cr6.eq) goto loc_82E95DA0;
loc_82E95DB4:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82E95DBC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e95df4
	if (!cr6.eq) goto loc_82E95DF4;
loc_82E95DCC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e95df4
	if (!cr6.eq) goto loc_82E95DF4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e95dcc
	if (cr6.eq) goto loc_82E95DCC;
loc_82E95DF4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E95DFC"))) PPC_WEAK_FUNC(sub_82E95DFC);
PPC_FUNC_IMPL(__imp__sub_82E95DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E95E00"))) PPC_WEAK_FUNC(sub_82E95E00);
PPC_FUNC_IMPL(__imp__sub_82E95E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e95e1c
	if (cr6.eq) goto loc_82E95E1C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E95E1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,577(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e95e58
	if (!cr6.eq) goto loc_82E95E58;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,577(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e95e50
	if (!cr6.eq) goto loc_82E95E50;
loc_82E95E3C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,577(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e95e3c
	if (cr6.eq) goto loc_82E95E3C;
loc_82E95E50:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82E95E58:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e95e90
	if (!cr6.eq) goto loc_82E95E90;
loc_82E95E68:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e95e90
	if (!cr6.eq) goto loc_82E95E90;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e95e68
	if (cr6.eq) goto loc_82E95E68;
loc_82E95E90:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,577(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E95EA8"))) PPC_WEAK_FUNC(sub_82E95EA8);
PPC_FUNC_IMPL(__imp__sub_82E95EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,577(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 577);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e95ec8
	if (!cr6.eq) goto loc_82E95EC8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82E95EC8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e95ef0
	if (!cr6.eq) goto loc_82E95EF0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82E95EF0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e95f10
	if (!cr6.eq) goto loc_82E95F10;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82E95F10:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E95F20"))) PPC_WEAK_FUNC(sub_82E95F20);
PPC_FUNC_IMPL(__imp__sub_82E95F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,32076
	ctx.r10.s64 = ctx.r11.s64 + 32076;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// ld r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// lbz r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// stb r7,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r7.u8);
	// ld r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r6,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// lbz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// stb r5,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r5.u8);
	// ld r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// lbz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// stb r10,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r10.u8);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// lbz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// stb r8,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r8.u8);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// lbz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 72);
	// stb r6,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r6.u8);
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lbz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r5,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r5.u8);
	// lfs f13,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lbz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lbz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// stb r10,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r10.u8);
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// lbz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// stb r8,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r8.u8);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// lbz r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 112);
	// stb r6,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r6.u8);
	// lfs f11,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lbz r5,120(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 120);
	// stb r5,120(r3)
	PPC_STORE_U8(ctx.r3.u32 + 120, ctx.r5.u8);
	// lfs f10,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,124(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lbz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 128);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// lfs f9,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,132(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lbz r10,136(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 136);
	// stb r10,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r10.u8);
	// lbz r9,137(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 137);
	// stb r9,137(r3)
	PPC_STORE_U8(ctx.r3.u32 + 137, ctx.r9.u8);
	// lbz r8,140(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 140);
	// stb r8,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r8.u8);
	// lfs f8,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lbz r7,148(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 148);
	// stb r7,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r7.u8);
	// lfs f7,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,152(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lbz r6,160(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 160);
	// stb r6,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r6.u8);
	// ld r5,168(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// std r5,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r5.u64);
	// lbz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 176);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// lbz r10,177(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 177);
	// stb r10,177(r3)
	PPC_STORE_U8(ctx.r3.u32 + 177, ctx.r10.u8);
	// lbz r9,180(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 180);
	// stb r9,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r9.u8);
	// lfs f6,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,184(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lbz r8,188(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 188);
	// stb r8,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r8.u8);
	// lfs f5,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,192(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lbz r7,200(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 200);
	// stb r7,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r7.u8);
	// ld r6,208(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// std r6,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r6.u64);
	// lbz r5,216(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// stb r5,216(r3)
	PPC_STORE_U8(ctx.r3.u32 + 216, ctx.r5.u8);
	// lfs f4,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lbz r11,224(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 224);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// lfs f3,228(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,228(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lbz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// stb r10,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r10.u8);
	// lfs f2,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,236(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lbz r9,240(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 240);
	// stb r9,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r9.u8);
	// lfs f1,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,244(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lbz r8,248(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 248);
	// stb r8,248(r3)
	PPC_STORE_U8(ctx.r3.u32 + 248, ctx.r8.u8);
	// lwz r7,252(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// stw r7,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r7.u32);
	// lbz r6,256(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 256);
	// stb r6,256(r3)
	PPC_STORE_U8(ctx.r3.u32 + 256, ctx.r6.u8);
	// lwz r5,260(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r5,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r5.u32);
	// lbz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 264);
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// lfs f0,268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lbz r10,272(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 272);
	// stb r10,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r10.u8);
	// lfs f13,276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,276(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lbz r9,280(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 280);
	// stb r9,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r9.u8);
	// lfs f12,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,284(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lbz r8,288(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 288);
	// stb r8,288(r3)
	PPC_STORE_U8(ctx.r3.u32 + 288, ctx.r8.u8);
	// lfs f11,292(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,292(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// lbz r7,296(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 296);
	// stb r7,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r7.u8);
	// lfs f10,300(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,300(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// lbz r6,304(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 304);
	// stb r6,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r6.u8);
	// lfs f9,308(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,308(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// lbz r5,312(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 312);
	// stb r5,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r5.u8);
	// lfs f8,316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,316(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// lbz r11,320(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 320);
	// stb r11,320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 320, ctx.r11.u8);
	// lfs f7,324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,324(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// lbz r10,328(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 328);
	// stb r10,328(r3)
	PPC_STORE_U8(ctx.r3.u32 + 328, ctx.r10.u8);
	// lfs f6,332(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,332(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// lbz r9,336(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 336);
	// stb r9,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r9.u8);
	// lbz r8,337(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 337);
	// stb r8,337(r3)
	PPC_STORE_U8(ctx.r3.u32 + 337, ctx.r8.u8);
	// lbz r7,338(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 338);
	// stb r7,338(r3)
	PPC_STORE_U8(ctx.r3.u32 + 338, ctx.r7.u8);
	// lbz r6,339(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 339);
	// stb r6,339(r3)
	PPC_STORE_U8(ctx.r3.u32 + 339, ctx.r6.u8);
	// lbz r5,344(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 344);
	// stb r5,344(r3)
	PPC_STORE_U8(ctx.r3.u32 + 344, ctx.r5.u8);
	// ld r11,352(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 352);
	// std r11,352(r3)
	PPC_STORE_U64(ctx.r3.u32 + 352, ctx.r11.u64);
	// lbz r10,360(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 360);
	// stb r10,360(r3)
	PPC_STORE_U8(ctx.r3.u32 + 360, ctx.r10.u8);
	// lwz r9,364(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// stw r9,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r9.u32);
	// lbz r8,368(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 368);
	// stb r8,368(r3)
	PPC_STORE_U8(ctx.r3.u32 + 368, ctx.r8.u8);
	// lwz r7,372(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	// stw r7,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r7.u32);
	// lbz r6,376(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 376);
	// stb r6,376(r3)
	PPC_STORE_U8(ctx.r3.u32 + 376, ctx.r6.u8);
	// lwz r5,380(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// stw r5,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r5.u32);
	// lbz r11,384(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 384);
	// stb r11,384(r3)
	PPC_STORE_U8(ctx.r3.u32 + 384, ctx.r11.u8);
	// lwz r10,388(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// stw r10,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r10.u32);
	// lbz r9,392(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 392);
	// stb r9,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r9.u8);
	// lfd f5,400(r4)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 400);
	// stfd f5,400(r3)
	PPC_STORE_U64(ctx.r3.u32 + 400, ctx.f5.u64);
	// lbz r8,408(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 408);
	// stb r8,408(r3)
	PPC_STORE_U8(ctx.r3.u32 + 408, ctx.r8.u8);
	// lfd f4,416(r4)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 416);
	// stfd f4,416(r3)
	PPC_STORE_U64(ctx.r3.u32 + 416, ctx.f4.u64);
	// lbz r7,424(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 424);
	// stb r7,424(r3)
	PPC_STORE_U8(ctx.r3.u32 + 424, ctx.r7.u8);
	// lwz r6,428(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 428);
	// stw r6,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r6.u32);
	// lbz r5,432(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 432);
	// stb r5,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, ctx.r5.u8);
	// lbz r11,433(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 433);
	// stb r11,433(r3)
	PPC_STORE_U8(ctx.r3.u32 + 433, ctx.r11.u8);
	// lbz r10,436(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 436);
	// stb r10,436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 436, ctx.r10.u8);
	// lwz r9,440(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 440);
	// stw r9,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r9.u32);
	// lbz r8,444(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 444);
	// stb r8,444(r3)
	PPC_STORE_U8(ctx.r3.u32 + 444, ctx.r8.u8);
	// lwz r7,448(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 448);
	// stw r7,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r7.u32);
	// lbz r6,452(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 452);
	// stb r6,452(r3)
	PPC_STORE_U8(ctx.r3.u32 + 452, ctx.r6.u8);
	// lbz r5,453(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 453);
	// stb r5,453(r3)
	PPC_STORE_U8(ctx.r3.u32 + 453, ctx.r5.u8);
	// lbz r11,456(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 456);
	// stb r11,456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 456, ctx.r11.u8);
	// lwz r10,460(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 460);
	// stw r10,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r10.u32);
	// lbz r9,464(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 464);
	// stb r9,464(r3)
	PPC_STORE_U8(ctx.r3.u32 + 464, ctx.r9.u8);
	// lwz r8,468(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// stw r8,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r8.u32);
	// lbz r7,472(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 472);
	// stb r7,472(r3)
	PPC_STORE_U8(ctx.r3.u32 + 472, ctx.r7.u8);
	// lwz r6,476(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// stw r6,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r6.u32);
	// lbz r5,480(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 480);
	// stb r5,480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 480, ctx.r5.u8);
	// lbz r11,481(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 481);
	// stb r11,481(r3)
	PPC_STORE_U8(ctx.r3.u32 + 481, ctx.r11.u8);
	// lbz r10,484(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 484);
	// stb r10,484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 484, ctx.r10.u8);
	// lwz r9,488(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 488);
	// stw r9,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r9.u32);
	// lbz r8,492(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 492);
	// stb r8,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r8.u8);
	// lwz r7,496(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	// stw r7,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r7.u32);
	// lbz r6,500(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 500);
	// stb r6,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r6.u8);
	// lwz r5,504(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	// stw r5,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r5.u32);
	// lbz r11,508(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 508);
	// stb r11,508(r3)
	PPC_STORE_U8(ctx.r3.u32 + 508, ctx.r11.u8);
	// lbz r10,509(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 509);
	// stb r10,509(r3)
	PPC_STORE_U8(ctx.r3.u32 + 509, ctx.r10.u8);
	// lbz r9,510(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 510);
	// stb r9,510(r3)
	PPC_STORE_U8(ctx.r3.u32 + 510, ctx.r9.u8);
	// lbz r8,511(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 511);
	// stb r8,511(r3)
	PPC_STORE_U8(ctx.r3.u32 + 511, ctx.r8.u8);
	// lbz r7,512(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 512);
	// stb r7,512(r3)
	PPC_STORE_U8(ctx.r3.u32 + 512, ctx.r7.u8);
	// lbz r6,513(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 513);
	// stb r6,513(r3)
	PPC_STORE_U8(ctx.r3.u32 + 513, ctx.r6.u8);
	// lbz r5,520(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 520);
	// stb r5,520(r3)
	PPC_STORE_U8(ctx.r3.u32 + 520, ctx.r5.u8);
	// ld r4,528(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 528);
	// std r4,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r4.u64);
	// blr 
	return;
}

