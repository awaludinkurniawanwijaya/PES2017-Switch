#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A1B0C0"))) PPC_WEAK_FUNC(sub_82A1B0C0);
PPC_FUNC_IMPL(__imp__sub_82A1B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A1B0C8;
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
	// bl 0x83740858
	ctx.lr = 0x82A1B0E0;
	sub_83740858(ctx, base);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82a1a288
	ctx.lr = 0x82A1B100;
	sub_82A1A288(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B108"))) PPC_WEAK_FUNC(sub_82A1B108);
PPC_FUNC_IMPL(__imp__sub_82A1B108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1B110;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x83740858
	ctx.lr = 0x82A1B134;
	sub_83740858(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r7,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1a330
	ctx.lr = 0x82A1B168;
	sub_82A1A330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B170"))) PPC_WEAK_FUNC(sub_82A1B170);
PPC_FUNC_IMPL(__imp__sub_82A1B170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A1B178;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x83740858
	ctx.lr = 0x82A1B1A0;
	sub_83740858(ctx, base);
	// mulli r11,r3,11
	ctx.r11.s64 = ctx.r3.s64 * 11;
	// addis r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 65536;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bl 0x83740858
	ctx.lr = 0x82A1B1B0;
	sub_83740858(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// sth r7,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r7.u16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1a3f0
	ctx.lr = 0x82A1B1F4;
	sub_82A1A3F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B1FC"))) PPC_WEAK_FUNC(sub_82A1B1FC);
PPC_FUNC_IMPL(__imp__sub_82A1B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B200"))) PPC_WEAK_FUNC(sub_82A1B200);
PPC_FUNC_IMPL(__imp__sub_82A1B200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A1B208;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x83740858
	ctx.lr = 0x82A1B230;
	sub_83740858(ctx, base);
	// mulli r11,r3,11
	ctx.r11.s64 = ctx.r3.s64 * 11;
	// addis r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 65536;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bl 0x83740858
	ctx.lr = 0x82A1B240;
	sub_83740858(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// sth r7,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r7.u16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1a4a8
	ctx.lr = 0x82A1B284;
	sub_82A1A4A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B28C"))) PPC_WEAK_FUNC(sub_82A1B28C);
PPC_FUNC_IMPL(__imp__sub_82A1B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B290"))) PPC_WEAK_FUNC(sub_82A1B290);
PPC_FUNC_IMPL(__imp__sub_82A1B290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A1B298;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r30,4456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4456, ctx.r30.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r30,4460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4460, ctx.r30.u32);
	// addi r3,r3,4556
	ctx.r3.s64 = ctx.r3.s64 + 4556;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r31,4496
	ctx.r11.s64 = ctx.r31.s64 + 4496;
	// stfs f31,4464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f31,4468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// stw r30,4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4472, ctx.r30.u32);
	// stw r30,4476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4476, ctx.r30.u32);
	// stw r30,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r30.u32);
	// stw r30,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r30.u32);
	// stw r30,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r30.u32);
	// stw r30,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r30.u32);
	// stb r30,4496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4496, ctx.r30.u8);
	// stb r30,4500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4500, ctx.r30.u8);
	// stb r30,4501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4501, ctx.r30.u8);
	// stb r30,4502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4502, ctx.r30.u8);
	// stb r30,4503(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4503, ctx.r30.u8);
	// stb r30,4504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4504, ctx.r30.u8);
	// stb r30,4505(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4505, ctx.r30.u8);
	// stb r30,4506(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4506, ctx.r30.u8);
	// stb r30,4507(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4507, ctx.r30.u8);
	// stb r30,4508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4508, ctx.r30.u8);
	// stb r30,4509(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4509, ctx.r30.u8);
	// stb r30,4510(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4510, ctx.r30.u8);
	// stb r30,4511(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4511, ctx.r30.u8);
	// stb r30,4512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4512, ctx.r30.u8);
	// stb r30,4513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4513, ctx.r30.u8);
	// stb r30,4514(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4514, ctx.r30.u8);
	// stb r30,4515(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4515, ctx.r30.u8);
	// stw r29,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r29.u32);
	// stw r29,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r29.u32);
	// stw r29,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r29.u32);
	// stfs f31,4532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// stfs f31,4536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// stfs f31,4540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4540, temp.u32);
	// stb r30,4544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4544, ctx.r30.u8);
	// stw r30,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r30.u32);
	// stw r30,4552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4552, ctx.r30.u32);
	// stb r30,4498(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4498, ctx.r30.u8);
	// stb r30,4499(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4499, ctx.r30.u8);
	// stb r25,4497(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4497, ctx.r25.u8);
	// stb r30,4516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4516, ctx.r30.u8);
	// stb r30,4517(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4517, ctx.r30.u8);
	// bl 0x82a19a60
	ctx.lr = 0x82A1B368;
	sub_82A19A60(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,5184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5184, ctx.r30.u32);
	// addi r9,r31,5180
	ctx.r9.s64 = ctx.r31.s64 + 5180;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
loc_82A1B388:
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a1b388
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B388;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r30.u32);
	// addi r11,r31,5116
	ctx.r11.s64 = ctx.r31.s64 + 5116;
	// stw r30,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r30.u32);
	// stw r30,5352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5352, ctx.r30.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r30,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r30.u32);
	// stb r30,5120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5120, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stb r30,5164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5164, ctx.r30.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r30,5165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5165, ctx.r30.u8);
loc_82A1B3C8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a1b3c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B3C8;
	// stfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// addi r3,r31,5192
	ctx.r3.s64 = ctx.r31.s64 + 5192;
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r30,5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5176, ctx.r30.u32);
	// bl 0x82a199d0
	ctx.lr = 0x82A1B3F0;
	sub_82A199D0(ctx, base);
	// stw r30,5356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5356, ctx.r30.u32);
	// stw r28,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r28.u32);
	// stfs f31,5364(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5364, temp.u32);
	// stfs f31,5368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5368, temp.u32);
	// li r26,24
	ctx.r26.s64 = 24;
	// stfs f31,5372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5372, temp.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f31,5376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5376, temp.u32);
	// stfs f31,5380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5380, temp.u32);
	// addi r27,r31,5464
	ctx.r27.s64 = ctx.r31.s64 + 5464;
	// stfs f31,5384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5384, temp.u32);
	// stw r30,5388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5388, ctx.r30.u32);
	// stb r30,5392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5392, ctx.r30.u8);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stw r29,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r29.u32);
	// addi r11,r31,5356
	ctx.r11.s64 = ctx.r31.s64 + 5356;
	// stw r30,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r30.u32);
	// stfs f31,5440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5440, temp.u32);
	// stb r30,5404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5404, ctx.r30.u8);
	// stw r30,5408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5408, ctx.r30.u32);
	// stw r30,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r30.u32);
	// stw r29,5420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5420, ctx.r29.u32);
	// stw r29,5416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5416, ctx.r29.u32);
	// stw r26,5424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5424, ctx.r26.u32);
	// stw r26,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r26.u32);
	// stw r30,5432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5432, ctx.r30.u32);
	// stb r30,5436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5436, ctx.r30.u8);
	// stb r30,5437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5437, ctx.r30.u8);
	// stw r30,5444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5444, ctx.r30.u32);
	// stb r10,5448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5448, ctx.r10.u8);
	// stw r9,5452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5452, ctx.r9.u32);
	// stb r30,5456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5456, ctx.r30.u8);
	// stw r30,5460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5460, ctx.r30.u32);
	// stw r28,5464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5464, ctx.r28.u32);
	// bl 0x82a3e330
	ctx.lr = 0x82A1B480;
	sub_82A3E330(ctx, base);
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// bl 0x82a3e330
	ctx.lr = 0x82A1B488;
	sub_82A3E330(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r30,5648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5648, ctx.r30.u8);
	// ori r11,r6,65535
	ctx.r11.u64 = ctx.r6.u64 | 65535;
	// stb r30,5649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5649, ctx.r30.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r10,5644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5644, ctx.r10.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r30,5650(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5650, ctx.r30.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r30,5651(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5651, ctx.r30.u8);
	// sth r30,5652(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5652, ctx.r30.u16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// sth r30,5654(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5654, ctx.r30.u16);
	// sth r30,5656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5656, ctx.r30.u16);
	// sth r30,5658(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5658, ctx.r30.u16);
	// stb r30,5660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5660, ctx.r30.u8);
	// stb r30,5661(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5661, ctx.r30.u8);
	// stb r30,5662(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5662, ctx.r30.u8);
	// stb r30,5663(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5663, ctx.r30.u8);
	// stb r30,5664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5664, ctx.r30.u8);
	// stb r30,5665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5665, ctx.r30.u8);
	// stb r30,5666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5666, ctx.r30.u8);
	// stb r30,5667(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5667, ctx.r30.u8);
	// stw r7,5668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5668, ctx.r7.u32);
	// stw r8,5672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5672, ctx.r8.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r9,5684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5684, ctx.r9.u32);
	// stw r11,5688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5688, ctx.r11.u32);
	// std r5,5676(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5676, ctx.r5.u64);
	// stw r10,5692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5692, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,5736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5736, ctx.r11.u32);
	// addi r11,r31,5756
	ctx.r11.s64 = ctx.r31.s64 + 5756;
	// stw r9,5732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5732, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,5696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5696, ctx.r30.u8);
	// addi r9,r31,5790
	ctx.r9.s64 = ctx.r31.s64 + 5790;
	// stb r30,5697(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5697, ctx.r30.u8);
	// stb r30,5698(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5698, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r30,5699(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5699, ctx.r30.u8);
	// addi r10,r31,5768
	ctx.r10.s64 = ctx.r31.s64 + 5768;
	// sth r30,5700(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5700, ctx.r30.u16);
	// sth r30,5702(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5702, ctx.r30.u16);
	// sth r30,5704(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5704, ctx.r30.u16);
	// sth r30,5706(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5706, ctx.r30.u16);
	// stb r30,5708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5708, ctx.r30.u8);
	// stb r30,5709(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5709, ctx.r30.u8);
	// stb r30,5710(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5710, ctx.r30.u8);
	// stb r30,5711(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5711, ctx.r30.u8);
	// stb r30,5712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5712, ctx.r30.u8);
	// stb r30,5713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5713, ctx.r30.u8);
	// stb r30,5714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5714, ctx.r30.u8);
	// stb r30,5715(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5715, ctx.r30.u8);
	// stw r7,5716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5716, ctx.r7.u32);
	// stw r8,5720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5720, ctx.r8.u32);
	// std r4,5724(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5724, ctx.r4.u64);
	// stb r30,5740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5740, ctx.r30.u8);
	// stw r28,5744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5744, ctx.r28.u32);
	// stw r28,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r28.u32);
	// stw r30,5752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5752, ctx.r30.u32);
	// stw r30,5340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5340, ctx.r30.u32);
	// stb r25,5817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5817, ctx.r25.u8);
	// sth r3,5818(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5818, ctx.r3.u16);
	// stw r29,5756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5756, ctx.r29.u32);
	// stw r29,5760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5760, ctx.r29.u32);
loc_82A1B5A8:
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// stbx r30,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a1b5a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B5A8;
	// li r11,600
	ctx.r11.s64 = 600;
	// lfs f0,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,5764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5764, temp.u32);
	// stb r30,5812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5812, ctx.r30.u8);
	// stfs f0,5860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5860, temp.u32);
	// stw r30,8876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8876, ctx.r30.u32);
	// stb r30,5813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5813, ctx.r30.u8);
	// stb r30,5814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5814, ctx.r30.u8);
	// stb r30,5815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5815, ctx.r30.u8);
	// stb r30,5816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5816, ctx.r30.u8);
	// stb r30,5820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5820, ctx.r30.u8);
	// stb r25,5821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5821, ctx.r25.u8);
	// stb r30,5822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5822, ctx.r30.u8);
	// stw r11,5824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5824, ctx.r11.u32);
	// stw r30,5828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5828, ctx.r30.u32);
	// stb r30,5832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5832, ctx.r30.u8);
	// stw r29,5836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5836, ctx.r29.u32);
	// stw r29,5840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5840, ctx.r29.u32);
	// stw r26,5844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5844, ctx.r26.u32);
	// stw r26,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r26.u32);
	// stw r30,5852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5852, ctx.r30.u32);
	// stw r30,5856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5856, ctx.r30.u32);
	// stb r30,5864(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5864, ctx.r30.u8);
	// stb r30,5865(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5865, ctx.r30.u8);
	// stb r30,5866(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5866, ctx.r30.u8);
	// stb r30,8880(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8880, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1B62C"))) PPC_WEAK_FUNC(sub_82A1B62C);
PPC_FUNC_IMPL(__imp__sub_82A1B62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B630"))) PPC_WEAK_FUNC(sub_82A1B630);
PPC_FUNC_IMPL(__imp__sub_82A1B630) {
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
	// lbz r30,5822(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5822);
	// lwz r31,5828(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5828);
	// bl 0x83740858
	ctx.lr = 0x82A1B650;
	sub_83740858(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a1b678
	if (cr6.eq) goto loc_82A1B678;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x82a1b680
	if (!cr6.gt) goto loc_82A1B680;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bgt cr6,0x82a1b680
	if (cr6.gt) goto loc_82A1B680;
	// bl 0x83740858
	ctx.lr = 0x82A1B66C;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x82a1b690
	goto loc_82A1B690;
loc_82A1B678:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82a1b688
	if (cr6.eq) goto loc_82A1B688;
loc_82A1B680:
	// bl 0x83740858
	ctx.lr = 0x82A1B684;
	sub_83740858(ctx, base);
	// b 0x82a1b690
	goto loc_82A1B690;
loc_82A1B688:
	// bl 0x83740858
	ctx.lr = 0x82A1B68C;
	sub_83740858(ctx, base);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A1B690:
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

__attribute__((alias("__imp__sub_82A1B6A8"))) PPC_WEAK_FUNC(sub_82A1B6A8);
PPC_FUNC_IMPL(__imp__sub_82A1B6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// stb r11,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r11.u8);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1B74C"))) PPC_WEAK_FUNC(sub_82A1B74C);
PPC_FUNC_IMPL(__imp__sub_82A1B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1B750"))) PPC_WEAK_FUNC(sub_82A1B750);
PPC_FUNC_IMPL(__imp__sub_82A1B750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A1B758;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,4456
	ctx.r5.s64 = 4456;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A1B76C;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,4496
	ctx.r3.s64 = ctx.r31.s64 + 4496;
	// stw r30,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r30.u32);
	// stw r30,4460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4460, ctx.r30.u32);
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4464(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f13,4468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// stw r30,4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4472, ctx.r30.u32);
	// stw r30,4476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4476, ctx.r30.u32);
	// stw r30,4480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4480, ctx.r30.u32);
	// stw r30,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r30.u32);
	// stw r30,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r30.u32);
	// stw r30,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r30.u32);
	// bl 0x82a1b6a8
	ctx.lr = 0x82A1B7A8;
	sub_82A1B6A8(ctx, base);
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r3,r31,4556
	ctx.r3.s64 = ctx.r31.s64 + 4556;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A1B7B8:
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f13,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1b7b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B7B8;
	// bl 0x82a19a60
	ctx.lr = 0x82A1B7CC;
	sub_82A19A60(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,5116
	ctx.r11.s64 = ctx.r31.s64 + 5116;
	// stfs f13,5152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5152, temp.u32);
	// li r28,255
	ctx.r28.s64 = 255;
	// stfs f13,5156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5156, temp.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stfs f13,5160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5160, temp.u32);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// stw r30,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r30.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stb r30,5120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5120, ctx.r30.u8);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stb r30,5164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5164, ctx.r30.u8);
	// stb r30,5165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5165, ctx.r30.u8);
loc_82A1B808:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a1b808
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B808;
	// li r29,2
	ctx.r29.s64 = 2;
	// stfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r8,r31,5180
	ctx.r8.s64 = ctx.r31.s64 + 5180;
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r30,5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5176, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r29,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r29.u32);
	// stw r30,5184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5184, ctx.r30.u32);
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
loc_82A1B848:
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a1b848
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B848;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r3,r31,5192
	ctx.r3.s64 = ctx.r31.s64 + 5192;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A1B864:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stwu r30,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1b864
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1B864;
	// bl 0x82a199d0
	ctx.lr = 0x82A1B878;
	sub_82A199D0(ctx, base);
	// stw r30,5340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5340, ctx.r30.u32);
	// stw r30,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r30.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r30,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r30.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r30,5352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5352, ctx.r30.u32);
	// stfs f13,5364(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5364, temp.u32);
	// stfs f13,5368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5368, temp.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stfs f13,5372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5372, temp.u32);
	// addi r27,r31,5464
	ctx.r27.s64 = ctx.r31.s64 + 5464;
	// stfs f13,5376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5376, temp.u32);
	// stfs f13,5380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5380, temp.u32);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// stfs f13,5384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5384, temp.u32);
	// stw r30,5356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5356, ctx.r30.u32);
	// stw r29,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r29.u32);
	// stfs f13,5364(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5364, temp.u32);
	// stfs f13,5368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5368, temp.u32);
	// stfs f13,5372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5372, temp.u32);
	// stfs f13,5376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5376, temp.u32);
	// stfs f13,5380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5380, temp.u32);
	// stfs f13,5384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5384, temp.u32);
	// stw r30,5388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5388, ctx.r30.u32);
	// stb r30,5392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5392, ctx.r30.u8);
	// stw r28,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r28.u32);
	// stw r30,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r30.u32);
	// stfs f13,5440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5440, temp.u32);
	// stw r11,5424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5424, ctx.r11.u32);
	// stw r11,5428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5428, ctx.r11.u32);
	// addi r11,r31,5356
	ctx.r11.s64 = ctx.r31.s64 + 5356;
	// stb r30,5404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5404, ctx.r30.u8);
	// stw r30,5408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5408, ctx.r30.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r30,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r30.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r28,5420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5420, ctx.r28.u32);
	// stw r28,5416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5416, ctx.r28.u32);
	// stw r30,5432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5432, ctx.r30.u32);
	// stb r30,5436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5436, ctx.r30.u8);
	// stb r30,5437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5437, ctx.r30.u8);
	// stw r30,5444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5444, ctx.r30.u32);
	// stb r9,5448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5448, ctx.r9.u8);
	// stw r8,5452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5452, ctx.r8.u32);
	// stb r30,5456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5456, ctx.r30.u8);
	// stw r30,5460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5460, ctx.r30.u32);
	// stw r29,5464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5464, ctx.r29.u32);
	// bl 0x82a3e330
	ctx.lr = 0x82A1B938;
	sub_82A3E330(ctx, base);
	// addi r3,r27,92
	ctx.r3.s64 = ctx.r27.s64 + 92;
	// bl 0x82a3e330
	ctx.lr = 0x82A1B940;
	sub_82A3E330(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stb r30,5648(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5648, ctx.r30.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r10,5644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5644, ctx.r10.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r30,5649(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5649, ctx.r30.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r30,5650(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5650, ctx.r30.u8);
	// ori r11,r6,65535
	ctx.r11.u64 = ctx.r6.u64 | 65535;
	// stb r30,5651(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5651, ctx.r30.u8);
	// sth r30,5652(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5652, ctx.r30.u16);
	// addi r3,r31,5868
	ctx.r3.s64 = ctx.r31.s64 + 5868;
	// sth r30,5654(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5654, ctx.r30.u16);
	// sth r30,5656(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5656, ctx.r30.u16);
	// sth r30,5658(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5658, ctx.r30.u16);
	// stb r30,5660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5660, ctx.r30.u8);
	// stb r30,5661(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5661, ctx.r30.u8);
	// stb r30,5662(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5662, ctx.r30.u8);
	// stb r30,5663(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5663, ctx.r30.u8);
	// stb r30,5664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5664, ctx.r30.u8);
	// stb r30,5665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5665, ctx.r30.u8);
	// stb r30,5666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5666, ctx.r30.u8);
	// stb r30,5667(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5667, ctx.r30.u8);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r7,5668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5668, ctx.r7.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r8,5672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5672, ctx.r8.u32);
	// stw r9,5684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5684, ctx.r9.u32);
	// stw r11,5688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5688, ctx.r11.u32);
	// std r5,5676(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5676, ctx.r5.u64);
	// stw r10,5692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5692, ctx.r10.u32);
	// stb r30,5696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5696, ctx.r30.u8);
	// stb r30,5697(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5697, ctx.r30.u8);
	// stb r30,5698(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5698, ctx.r30.u8);
	// stb r30,5699(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5699, ctx.r30.u8);
	// sth r30,5700(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5700, ctx.r30.u16);
	// sth r30,5702(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5702, ctx.r30.u16);
	// sth r30,5704(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5704, ctx.r30.u16);
	// sth r30,5706(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5706, ctx.r30.u16);
	// stb r30,5708(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5708, ctx.r30.u8);
	// stb r30,5709(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5709, ctx.r30.u8);
	// stb r30,5710(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5710, ctx.r30.u8);
	// stb r30,5711(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5711, ctx.r30.u8);
	// stb r30,5712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5712, ctx.r30.u8);
	// stb r30,5713(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5713, ctx.r30.u8);
	// stb r30,5714(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5714, ctx.r30.u8);
	// stb r30,5715(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5715, ctx.r30.u8);
	// stw r7,5716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5716, ctx.r7.u32);
	// stw r8,5720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5720, ctx.r8.u32);
	// stw r9,5732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5732, ctx.r9.u32);
	// stw r11,5736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5736, ctx.r11.u32);
	// std r4,5724(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5724, ctx.r4.u64);
	// stb r30,5740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5740, ctx.r30.u8);
	// stw r29,5744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5744, ctx.r29.u32);
	// stw r29,5748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5748, ctx.r29.u32);
	// stw r30,5752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5752, ctx.r30.u32);
	// bl 0x82a49478
	ctx.lr = 0x82A1BA38;
	sub_82A49478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b290
	ctx.lr = 0x82A1BA40;
	sub_82A1B290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BA4C"))) PPC_WEAK_FUNC(sub_82A1BA4C);
PPC_FUNC_IMPL(__imp__sub_82A1BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1BA50"))) PPC_WEAK_FUNC(sub_82A1BA50);
PPC_FUNC_IMPL(__imp__sub_82A1BA50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,5868
	ctx.r3.s64 = ctx.r3.s64 + 5868;
	// b 0x825a4b60
	sub_825A4B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BA58"))) PPC_WEAK_FUNC(sub_82A1BA58);
PPC_FUNC_IMPL(__imp__sub_82A1BA58) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,13968
	ctx.r9.s64 = ctx.r11.s64 + 13968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82a1ba8c
	if (cr6.eq) goto loc_82A1BA8C;
	// bl 0x82416268
	ctx.lr = 0x82A1BA88;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A1BA8C:
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

__attribute__((alias("__imp__sub_82A1BAA0"))) PPC_WEAK_FUNC(sub_82A1BAA0);
PPC_FUNC_IMPL(__imp__sub_82A1BAA0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1bac8
	if (cr6.lt) goto loc_82A1BAC8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1bacc
	if (cr6.lt) goto loc_82A1BACC;
loc_82A1BAC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1BACC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1baf4
	if (!cr6.eq) goto loc_82A1BAF4;
loc_82A1BAD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
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
loc_82A1BAF4:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1BB00;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1bad8
	if (cr6.eq) goto loc_82A1BAD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,1280
	ctx.r3.s64 = ctx.r3.s64 + 1280;
	// bl 0x825ca560
	ctx.lr = 0x82A1BB14;
	sub_825CA560(ctx, base);
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

__attribute__((alias("__imp__sub_82A1BB28"))) PPC_WEAK_FUNC(sub_82A1BB28);
PPC_FUNC_IMPL(__imp__sub_82A1BB28) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1bb50
	if (cr6.lt) goto loc_82A1BB50;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1bb54
	if (cr6.lt) goto loc_82A1BB54;
loc_82A1BB50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1BB54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1bb7c
	if (!cr6.eq) goto loc_82A1BB7C;
loc_82A1BB60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
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
loc_82A1BB7C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1BB88;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1bb60
	if (cr6.eq) goto loc_82A1BB60;
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
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

__attribute__((alias("__imp__sub_82A1BBC8"))) PPC_WEAK_FUNC(sub_82A1BBC8);
PPC_FUNC_IMPL(__imp__sub_82A1BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A1BBD0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce778
	ctx.lr = 0x82A1BBD8;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r29,r8,11
	ctx.r29.s64 = ctx.r8.s64 * 11;
	// lfs f28,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
loc_82A1BC04:
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1BC10;
	sub_82A0C788(ctx, base);
	// addi r3,r3,1280
	ctx.r3.s64 = ctx.r3.s64 + 1280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a5bd28
	ctx.lr = 0x82A1BC2C;
	sub_82A5BD28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1bc44
	if (cr6.eq) goto loc_82A1BC44;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82A1BC44:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a1bc04
	if (cr6.lt) goto loc_82A1BC04;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1BC60;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1BC64"))) PPC_WEAK_FUNC(sub_82A1BC64);
PPC_FUNC_IMPL(__imp__sub_82A1BC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1BC68"))) PPC_WEAK_FUNC(sub_82A1BC68);
PPC_FUNC_IMPL(__imp__sub_82A1BC68) {
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
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r8,4679(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4679);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,14624(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14624);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bgt cr6,0x82a1bdb8
	if (cr6.gt) goto loc_82A1BDB8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a1bda0
	if (cr6.eq) goto loc_82A1BDA0;
	// bdz 0x82a1bd94
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1BD94;
	// bdz 0x82a1bd88
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1BD88;
	// bdz 0x82a1bd7c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1BD7C;
	// bdz 0x82a1bd70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1BD70;
	// bdz 0x82a1bd64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1BD64;
	// bdz 0x82a1bccc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A1BCCC;
	// bdnz 0x82a1bdac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1BDAC;
loc_82A1BCCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8355a178
	ctx.lr = 0x82A1BCDC;
	sub_8355A178(ctx, base);
	// lbz r8,42(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f13,-11368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11368);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a1bd0c
	if (cr6.gt) goto loc_82A1BD0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a1bd38
	goto loc_82A1BD38;
loc_82A1BD0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,11792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11792);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a1bd28
	if (cr6.lt) goto loc_82A1BD28;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82a1bd38
	goto loc_82A1BD38;
loc_82A1BD28:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82A1BD38:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A1BD64:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,14252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14252);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BD70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-8360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8360);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BD7C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,14248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14248);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BD88:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-21064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21064);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BD94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-3404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3404);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BDA0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BDAC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,14244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14244);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82a1bdc0
	goto loc_82A1BDC0;
loc_82A1BDB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,25320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25320);
	ctx.f13.f64 = double(temp.f32);
loc_82A1BDC0:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1BDD8"))) PPC_WEAK_FUNC(sub_82A1BDD8);
PPC_FUNC_IMPL(__imp__sub_82A1BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A1BDE0;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,99
	ctx.r31.s64 = 99;
	// li r30,49
	ctx.r30.s64 = 49;
loc_82A1BDFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1BE08;
	sub_82A44AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// bl 0x82a44ac0
	ctx.lr = 0x82A1BE30;
	sub_82A44AC0(ctx, base);
	// lfs f10,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f30,f30
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fmadds f3,f31,f31,f8
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmuls f2,f6,f6
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f3,f1
	cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// ble cr6,0x82a1be68
	if (!cr6.gt) goto loc_82A1BE68;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82a1be6c
	goto loc_82A1BE6C;
loc_82A1BE68:
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82A1BE6C:
	// srawi r11,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82a1bdfc
	if (!cr0.eq) goto loc_82A1BDFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1BE84;
	sub_82A44AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f31,f9,f9,f8
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// bl 0x82a44ac0
	ctx.lr = 0x82A1BEB8;
	sub_82A44AC0(ctx, base);
	// lfs f7,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fmuls f1,f4,f4
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f0,f2,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a1bef0
	if (!cr6.gt) goto loc_82A1BEF0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a1bef4
	goto loc_82A1BEF4;
loc_82A1BEF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1BEF4:
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
loc_82A1BEFC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x82a1bf0c
	if (!cr6.eq) goto loc_82A1BF0C;
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
loc_82A1BF0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1BF18;
	sub_82A44AC0(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f9,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a1bf64
	if (cr6.lt) goto loc_82A1BF64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82a1bf64
	if (cr6.eq) goto loc_82A1BF64;
	// cmpwi cr6,r30,199
	cr6.compare<int32_t>(ctx.r30.s32, 199, xer);
	// beq cr6,0x82a1bf64
	if (cr6.eq) goto loc_82A1BF64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// blt cr6,0x82a1befc
	if (cr6.lt) goto loc_82A1BEFC;
loc_82A1BF64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A1BF78"))) PPC_WEAK_FUNC(sub_82A1BF78);
PPC_FUNC_IMPL(__imp__sub_82A1BF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A1BF80;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82A1BF88;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1bfac
	if (cr6.lt) goto loc_82A1BFAC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1bfb0
	if (cr6.lt) goto loc_82A1BFB0;
loc_82A1BFAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1BFB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1bfd0
	if (!cr6.eq) goto loc_82A1BFD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1BFCC;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A1BFD0:
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1BFE0;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82a1bff4
	if (!cr6.lt) goto loc_82A1BFF4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a1c01c
	goto loc_82A1C01C;
loc_82A1BFF4:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a1c004
	if (!cr6.lt) goto loc_82A1C004;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82a1c01c
	goto loc_82A1C01C;
loc_82A1C004:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_82A1C01C:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,4192(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x82a36180
	ctx.lr = 0x82A1C044;
	sub_82A36180(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lfs f12,1280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lfs f11,1288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r28,r8,11
	ctx.r28.s64 = ctx.r8.s64 * 11;
	// fadds f29,f12,f8
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f28,f11,f7
	ctx.f28.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
loc_82A1C078:
	// add. r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82a1c08c
	if (cr0.lt) goto loc_82A1C08C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c090
	if (cr6.lt) goto loc_82A1C090;
loc_82A1C08C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1c100
	if (cr6.eq) goto loc_82A1C100;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1C0A4;
	sub_82A0C788(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f1,4192(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a36180
	ctx.lr = 0x82A1C0B8;
	sub_82A36180(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f0,1280(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f30,f30
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f12,1288(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1288);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fsubs f5,f29,f7
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// fsubs f4,f28,f6
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f6.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f2,f4,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fcmpu cr6,f13,f2
	cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// ble cr6,0x82a1c100
	if (!cr6.gt) goto loc_82A1C100;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_82A1C100:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82a1c078
	if (cr6.lt) goto loc_82A1C078;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1C11C;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C120"))) PPC_WEAK_FUNC(sub_82A1C120);
PPC_FUNC_IMPL(__imp__sub_82A1C120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1C128;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82a1c15c
	if (!cr6.eq) goto loc_82A1C15C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A1C15C:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r25,r5,11
	ctx.r25.s64 = ctx.r5.s64 * 11;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lis r29,-31778
	ctx.r29.s64 = -2082603008;
loc_82A1C170:
	// add. r4,r25,r28
	ctx.r4.u64 = ctx.r25.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82a1c184
	if (cr0.lt) goto loc_82A1C184;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c188
	if (cr6.lt) goto loc_82A1C188;
loc_82A1C184:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1c214
	if (cr6.eq) goto loc_82A1C214;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1C19C;
	sub_82A0C788(ctx, base);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// lfs f1,4192(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x82a36180
	ctx.lr = 0x82A1C1C4;
	sub_82A36180(ctx, base);
	// lfs f7,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// lfs f12,1280(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f31,f31
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f11,1288(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f2,f11,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fsubs f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f0,f8,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82a1c214
	if (!cr6.gt) goto loc_82A1C214;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
loc_82A1C214:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// blt cr6,0x82a1c170
	if (cr6.lt) goto loc_82A1C170;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C234"))) PPC_WEAK_FUNC(sub_82A1C234);
PPC_FUNC_IMPL(__imp__sub_82A1C234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C238"))) PPC_WEAK_FUNC(sub_82A1C238);
PPC_FUNC_IMPL(__imp__sub_82A1C238) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f3,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmuls f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f9,f10
	cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C26C"))) PPC_WEAK_FUNC(sub_82A1C26C);
PPC_FUNC_IMPL(__imp__sub_82A1C26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C270"))) PPC_WEAK_FUNC(sub_82A1C270);
PPC_FUNC_IMPL(__imp__sub_82A1C270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1c294
	if (!cr6.lt) goto loc_82A1C294;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1c2bc
	goto loc_82A1C2BC;
loc_82A1C294:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a1c2a4
	if (!cr6.lt) goto loc_82A1C2A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1c2bc
	goto loc_82A1C2BC;
loc_82A1C2A4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A1C2BC:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1C2C8;
	sub_82A0C710(ctx, base);
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a1c2e8
	if (!cr6.eq) goto loc_82A1C2E8;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a1c2f8
	if (!cr6.gt) goto loc_82A1C2F8;
loc_82A1C2E8:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82a1c310
	if (!cr6.eq) goto loc_82A1C310;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a1c310
	if (cr6.lt) goto loc_82A1C310;
loc_82A1C2F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A1C310:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_82A1C328"))) PPC_WEAK_FUNC(sub_82A1C328);
PPC_FUNC_IMPL(__imp__sub_82A1C328) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1c358
	if (cr6.lt) goto loc_82A1C358;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c35c
	if (cr6.lt) goto loc_82A1C35C;
loc_82A1C358:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C35C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1c370
	if (!cr6.eq) goto loc_82A1C370;
loc_82A1C368:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1c398
	goto loc_82A1C398;
loc_82A1C370:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1C380;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1c368
	if (cr6.eq) goto loc_82A1C368;
	// lfs f1,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1c270
	ctx.lr = 0x82A1C398;
	sub_82A1C270(ctx, base);
loc_82A1C398:
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

__attribute__((alias("__imp__sub_82A1C3B0"))) PPC_WEAK_FUNC(sub_82A1C3B0);
PPC_FUNC_IMPL(__imp__sub_82A1C3B0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82a3f970
	ctx.lr = 0x82A1C3F4;
	sub_82A3F970(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82a1c420
	if (!cr6.lt) goto loc_82A1C420;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a1c420
	if (!cr6.lt) goto loc_82A1C420;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82a1c428
	goto loc_82A1C428;
loc_82A1C420:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A1C428:
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

__attribute__((alias("__imp__sub_82A1C440"))) PPC_WEAK_FUNC(sub_82A1C440);
PPC_FUNC_IMPL(__imp__sub_82A1C440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f2,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f1,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a1c3b0
	sub_82A1C3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C450"))) PPC_WEAK_FUNC(sub_82A1C450);
PPC_FUNC_IMPL(__imp__sub_82A1C450) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,25892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25892);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a1c484
	if (cr6.gt) goto loc_82A1C484;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A1C484:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,27680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27680);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C4A0"))) PPC_WEAK_FUNC(sub_82A1C4A0);
PPC_FUNC_IMPL(__imp__sub_82A1C4A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f8,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// lfs f11,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x82a1c4dc
	if (!cr6.gt) goto loc_82A1C4DC;
	// fsel f0,f0,f11,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82A1C4DC:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fsel f0,f0,f11,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C4FC"))) PPC_WEAK_FUNC(sub_82A1C4FC);
PPC_FUNC_IMPL(__imp__sub_82A1C4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C500"))) PPC_WEAK_FUNC(sub_82A1C500);
PPC_FUNC_IMPL(__imp__sub_82A1C500) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a1c530
	if (cr6.lt) goto loc_82A1C530;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c534
	if (cr6.lt) goto loc_82A1C534;
loc_82A1C530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1c55c
	if (cr6.eq) goto loc_82A1C55C;
	// bl 0x82a22c78
	ctx.lr = 0x82A1C548;
	sub_82A22C78(ctx, base);
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
loc_82A1C55C:
	// lwz r31,4472(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// bl 0x82a22b40
	ctx.lr = 0x82A1C564;
	sub_82A22B40(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r3,r11,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r11.s64;
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

__attribute__((alias("__imp__sub_82A1C580"))) PPC_WEAK_FUNC(sub_82A1C580);
PPC_FUNC_IMPL(__imp__sub_82A1C580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C5EC"))) PPC_WEAK_FUNC(sub_82A1C5EC);
PPC_FUNC_IMPL(__imp__sub_82A1C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C5F0"))) PPC_WEAK_FUNC(sub_82A1C5F0);
PPC_FUNC_IMPL(__imp__sub_82A1C5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A1C5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1c610
	if (!cr6.lt) goto loc_82A1C610;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a1c638
	goto loc_82A1C638;
loc_82A1C610:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x82a1c620
	if (!cr6.lt) goto loc_82A1C620;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82a1c638
	goto loc_82A1C638;
loc_82A1C620:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r28
	xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// eqv r9,r11,r28
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r28.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
loc_82A1C638:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A1C640;
	sub_82A2B4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a1c658
	if (cr6.lt) goto loc_82A1C658;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c65c
	if (cr6.lt) goto loc_82A1C65C;
loc_82A1C658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1c6b0
	if (cr6.eq) goto loc_82A1C6B0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a1c678
	if (!cr6.lt) goto loc_82A1C678;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1c6a0
	goto loc_82A1C6A0;
loc_82A1C678:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a1c688
	if (!cr6.lt) goto loc_82A1C688;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1c6a0
	goto loc_82A1C6A0;
loc_82A1C688:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82A1C6A0:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a1c6b0
	if (cr6.eq) goto loc_82A1C6B0;
	// li r31,255
	ctx.r31.s64 = 255;
	// b 0x82a1c6c4
	goto loc_82A1C6C4;
loc_82A1C6B0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a1c6c4
	if (cr6.lt) goto loc_82A1C6C4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c6c8
	if (cr6.lt) goto loc_82A1C6C8;
loc_82A1C6C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C6C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1c710
	if (!cr6.eq) goto loc_82A1C710;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1C6E4;
	sub_82A0C710(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a1c6fc
	if (cr6.lt) goto loc_82A1C6FC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a1c700
	if (cr6.lt) goto loc_82A1C700;
loc_82A1C6FC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A1C700:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a1c710
	if (cr6.eq) goto loc_82A1C710;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82A1C710:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a1c724
	if (cr6.lt) goto loc_82A1C724;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1c728
	if (cr6.lt) goto loc_82A1C728;
loc_82A1C724:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1C728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1c740
	if (!cr6.eq) goto loc_82A1C740;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A1C740:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A1C74C;
	sub_82A0C7B0(ctx, base);
	// lwz r11,5080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5080);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1C764"))) PPC_WEAK_FUNC(sub_82A1C764);
PPC_FUNC_IMPL(__imp__sub_82A1C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1C768"))) PPC_WEAK_FUNC(sub_82A1C768);
PPC_FUNC_IMPL(__imp__sub_82A1C768) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A1C780;
	sub_82A0C760(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x82a1c7ac
	if (cr6.eq) goto loc_82A1C7AC;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// beq cr6,0x82a1c7ac
	if (cr6.eq) goto loc_82A1C7AC;
	// cmpwi cr6,r11,85
	cr6.compare<int32_t>(ctx.r11.s32, 85, xer);
	// beq cr6,0x82a1c7ac
	if (cr6.eq) goto loc_82A1C7AC;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82a1c7b0
	if (!cr6.eq) goto loc_82A1C7B0;
loc_82A1C7AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A1C7B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C7C0"))) PPC_WEAK_FUNC(sub_82A1C7C0);
PPC_FUNC_IMPL(__imp__sub_82A1C7C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// addi r11,r11,14124
	ctx.r11.s64 = ctx.r11.s64 + 14124;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a1c7ec
	if (!cr6.lt) goto loc_82A1C7EC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a1c7f8
	goto loc_82A1C7F8;
loc_82A1C7EC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1c7fc
	if (cr6.lt) goto loc_82A1C7FC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A1C7F8:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82A1C7FC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a1c81c
	if (!cr6.lt) goto loc_82A1C81C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A1C81C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C830"))) PPC_WEAK_FUNC(sub_82A1C830);
PPC_FUNC_IMPL(__imp__sub_82A1C830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lfs f0,-23844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,5068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C858"))) PPC_WEAK_FUNC(sub_82A1C858);
PPC_FUNC_IMPL(__imp__sub_82A1C858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// lfs f0,5068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-23844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1C880"))) PPC_WEAK_FUNC(sub_82A1C880);
PPC_FUNC_IMPL(__imp__sub_82A1C880) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce75c
	ctx.lr = 0x82A1C898;
	__savefpr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,14124
	ctx.r31.s64 = ctx.r11.s64 + 14124;
	// lfs f0,14124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14124);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a1c8d4
	if (!cr6.lt) goto loc_82A1C8D4;
	// fadds f23,f1,f0
	ctx.f23.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82a1c8e0
	goto loc_82A1C8E0;
loc_82A1C8D4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a1c8e0
	if (cr6.lt) goto loc_82A1C8E0;
	// fsubs f23,f1,f0
	ctx.f23.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82A1C8E0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f29,f30
	ctx.f29.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f22,f0
	ctx.f22.f64 = ctx.f0.f64;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f24,f13
	ctx.f24.f64 = ctx.f13.f64;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmr f21,f13
	ctx.f21.f64 = ctx.f13.f64;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x825ca560
	ctx.lr = 0x82A1C93C;
	sub_825CA560(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f26,f1
	ctx.f26.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a1c954
	if (!cr6.lt) goto loc_82A1C954;
	// fadds f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 + ctx.f0.f64));
	// b 0x82a1c960
	goto loc_82A1C960;
loc_82A1C954:
	// fcmpu cr6,f26,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// blt cr6,0x82a1c960
	if (cr6.lt) goto loc_82A1C960;
	// fsubs f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
loc_82A1C960:
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A1C96C;
	sub_825CA560(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a1c984
	if (!cr6.lt) goto loc_82A1C984;
	// fadds f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// b 0x82a1c990
	goto loc_82A1C990;
loc_82A1C984:
	// fcmpu cr6,f27,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// blt cr6,0x82a1c990
	if (cr6.lt) goto loc_82A1C990;
	// fsubs f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
loc_82A1C990:
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A1C99C;
	sub_825CA560(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a1c9b4
	if (!cr6.lt) goto loc_82A1C9B4;
	// fadds f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// b 0x82a1c9c0
	goto loc_82A1C9C0;
loc_82A1C9B4:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x82a1c9c0
	if (cr6.lt) goto loc_82A1C9C0;
	// fsubs f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
loc_82A1C9C0:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A1C9CC;
	sub_825CA560(ctx, base);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82a1c9e0
	if (!cr6.lt) goto loc_82A1C9E0;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// b 0x82a1c9ec
	goto loc_82A1C9EC;
loc_82A1C9E0:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82a1c9ec
	if (cr6.lt) goto loc_82A1C9EC;
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_82A1C9EC:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f23,f26
	cr6.compare(ctx.f23.f64, ctx.f26.f64);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// blt cr6,0x82a1ca38
	if (cr6.lt) goto loc_82A1CA38;
	// fcmpu cr6,f23,f27
	cr6.compare(ctx.f23.f64, ctx.f27.f64);
	// bge cr6,0x82a1ca38
	if (!cr6.lt) goto loc_82A1CA38;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f22,104(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f25,88(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82a1cad8
	goto loc_82A1CAD8;
loc_82A1CA38:
	// fcmpu cr6,f23,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f23.f64, ctx.f27.f64);
	// blt cr6,0x82a1ca64
	if (cr6.lt) goto loc_82A1CA64;
	// fcmpu cr6,f23,f28
	cr6.compare(ctx.f23.f64, ctx.f28.f64);
	// bge cr6,0x82a1ca64
	if (!cr6.lt) goto loc_82A1CA64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f11,f24,f0
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// b 0x82a1cad0
	goto loc_82A1CAD0;
loc_82A1CA64:
	// fcmpu cr6,f23,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f23.f64, ctx.f28.f64);
	// blt cr6,0x82a1ca98
	if (cr6.lt) goto loc_82A1CA98;
	// fcmpu cr6,f23,f1
	cr6.compare(ctx.f23.f64, ctx.f1.f64);
	// bge cr6,0x82a1ca98
	if (!cr6.lt) goto loc_82A1CA98;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f24,104(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f21,88(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82a1cad8
	goto loc_82A1CAD8;
loc_82A1CA98:
	// fcmpu cr6,f23,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f23.f64, ctx.f1.f64);
	// blt cr6,0x82a1caa8
	if (cr6.lt) goto loc_82A1CAA8;
	// fcmpu cr6,f23,f13
	cr6.compare(ctx.f23.f64, ctx.f13.f64);
	// blt cr6,0x82a1cab8
	if (cr6.lt) goto loc_82A1CAB8;
loc_82A1CAA8:
	// fcmpu cr6,f23,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f23.f64, ctx.f26.f64);
	// bge cr6,0x82a1cb7c
	if (!cr6.lt) goto loc_82A1CB7C;
	// fcmpu cr6,f23,f31
	cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// blt cr6,0x82a1cb7c
	if (cr6.lt) goto loc_82A1CB7C;
loc_82A1CAB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f21,f0
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fmuls f11,f22,f0
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
loc_82A1CAD0:
	// stfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82A1CAD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f23,80(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f23,f31
	cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bge cr6,0x82a1cb0c
	if (!cr6.lt) goto loc_82A1CB0C;
	// fadds f0,f23,f13
	ctx.f0.f64 = double(float(ctx.f23.f64 + ctx.f13.f64));
	// b 0x82a1cb18
	goto loc_82A1CB18;
loc_82A1CB0C:
	// fcmpu cr6,f23,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f23.f64, ctx.f13.f64);
	// blt cr6,0x82a1cb1c
	if (cr6.lt) goto loc_82A1CB1C;
	// fsubs f0,f23,f13
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f13.f64));
loc_82A1CB18:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A1CB1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f1,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a710
	ctx.lr = 0x82A1CB30;
	sub_82A5A710(ctx, base);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a5b500
	ctx.lr = 0x82A1CB48;
	sub_82A5B500(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a1cb7c
	if (cr6.lt) goto loc_82A1CB7C;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f1,f7
	ctx.f1.f64 = double(float(sqrt(ctx.f7.f64)));
	// b 0x82a1cb84
	goto loc_82A1CB84;
loc_82A1CB7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
loc_82A1CB84:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7a8
	ctx.lr = 0x82A1CB90;
	__restfpr_21(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1CBA4"))) PPC_WEAK_FUNC(sub_82A1CBA4);
PPC_FUNC_IMPL(__imp__sub_82A1CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CBA8"))) PPC_WEAK_FUNC(sub_82A1CBA8);
PPC_FUNC_IMPL(__imp__sub_82A1CBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82A1CBB0;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce778
	ctx.lr = 0x82A1CBB8;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r24,372(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r26,-31778
	ctx.r26.s64 = -2082603008;
	// lwz r19,292(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f29.f64 = double(temp.f32);
loc_82A1CC00:
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(ctx.r18.s32, 2, xer);
	// beq cr6,0x82a1cc10
	if (cr6.eq) goto loc_82A1CC10;
	// cmpw cr6,r25,r18
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r18.s32, xer);
	// bne cr6,0x82a1cdc4
	if (!cr6.eq) goto loc_82A1CDC4;
loc_82A1CC10:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15260
	ctx.r27.s64 = 15260;
loc_82A1CC18:
	// add. r31,r23,r28
	ctx.r31.u64 = ctx.r23.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a1cc2c
	if (cr0.lt) goto loc_82A1CC2C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1cc30
	if (cr6.lt) goto loc_82A1CC30;
loc_82A1CC2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1CC30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1cdb4
	if (cr6.eq) goto loc_82A1CDB4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a1cc50
	if (cr6.lt) goto loc_82A1CC50;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1cc54
	if (cr6.lt) goto loc_82A1CC54;
loc_82A1CC50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1CC54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1cc74
	if (cr6.eq) goto loc_82A1CC74;
	// add r11,r31,r19
	ctx.r11.u64 = ctx.r31.u64 + ctx.r19.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a1cc78
	goto loc_82A1CC78;
loc_82A1CC74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1CC78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1cdb4
	if (cr6.eq) goto loc_82A1CDB4;
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1ccbc
	if (!cr6.eq) goto loc_82A1CCBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1CC9C;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bge cr6,0x82a1ccb0
	if (!cr6.lt) goto loc_82A1CCB0;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// b 0x82a1ccb4
	goto loc_82A1CCB4;
loc_82A1CCB0:
	// lwz r11,15260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
loc_82A1CCB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a1cdb4
	if (cr6.eq) goto loc_82A1CDB4;
loc_82A1CCBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1CCC8;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x82a0c788
	ctx.lr = 0x82A1CCF4;
	sub_82A0C788(ctx, base);
	// extsw r6,r24
	ctx.r6.s64 = ctx.r24.s32;
	// lfs f1,4192(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
	// bl 0x82a36180
	ctx.lr = 0x82A1CD18;
	sub_82A36180(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f31,f31
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmuls f5,f6,f28
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f28
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f11,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f9,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82a1cdb4
	if (!cr6.gt) goto loc_82A1CDB4;
	// fmuls f13,f30,f30
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a1cdb4
	if (!cr6.lt) goto loc_82A1CDB4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A1CD90;
	sub_825CA560(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfs f28,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x825cbd90
	ctx.lr = 0x82A1CD9C;
	sub_825CBD90(ctx, base);
	// fmuls f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82a1cdb4
	if (!cr6.gt) goto loc_82A1CDB4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
loc_82A1CDB4:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r27,15304
	cr6.compare<uint32_t>(ctx.r27.u32, 15304, xer);
	// blt cr6,0x82a1cc18
	if (cr6.lt) goto loc_82A1CC18;
loc_82A1CDC4:
	// addi r23,r23,11
	ctx.r23.s64 = ctx.r23.s64 + 11;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r23,22
	cr6.compare<int32_t>(ctx.r23.s32, 22, xer);
	// blt cr6,0x82a1cc00
	if (cr6.lt) goto loc_82A1CC00;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1CDE4;
	__restfpr_28(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1CDE8"))) PPC_WEAK_FUNC(sub_82A1CDE8);
PPC_FUNC_IMPL(__imp__sub_82A1CDE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f2,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lfs f13,14124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14124);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a1ce20
	if (!cr6.lt) goto loc_82A1CE20;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a1ce2c
	goto loc_82A1CE2C;
loc_82A1CE20:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1ce30
	if (cr6.lt) goto loc_82A1CE30;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A1CE2C:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82A1CE30:
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f4.f64;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a1cba8
	ctx.lr = 0x82A1CE4C;
	sub_82A1CBA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1CE5C"))) PPC_WEAK_FUNC(sub_82A1CE5C);
PPC_FUNC_IMPL(__imp__sub_82A1CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1CE60"))) PPC_WEAK_FUNC(sub_82A1CE60);
PPC_FUNC_IMPL(__imp__sub_82A1CE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A1CE68;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce770
	ctx.lr = 0x82A1CE70;
	__savefpr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1cea0
	if (cr6.lt) goto loc_82A1CEA0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1cea4
	if (cr6.lt) goto loc_82A1CEA4;
loc_82A1CEA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1CEA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1cec4
	if (!cr6.eq) goto loc_82A1CEC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7bc
	ctx.lr = 0x82A1CEC0;
	__restfpr_26(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A1CEC4:
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1CED4;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bge cr6,0x82a1cee8
	if (!cr6.lt) goto loc_82A1CEE8;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a1cf10
	goto loc_82A1CF10;
loc_82A1CEE8:
	// cmpwi cr6,r23,11
	cr6.compare<int32_t>(ctx.r23.s32, 11, xer);
	// bge cr6,0x82a1cef8
	if (!cr6.lt) goto loc_82A1CEF8;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82a1cf10
	goto loc_82A1CF10;
loc_82A1CEF8:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r23
	xer.ca = ctx.r23.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r23.s64 - ctx.r11.s64;
	// eqv r9,r11,r23
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r23.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r28,r7,31
	ctx.r28.u64 = ctx.r7.u32 & 0x1;
loc_82A1CF10:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lis r27,-31778
	ctx.r27.s64 = -2082603008;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f1,4192(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x82a36180
	ctx.lr = 0x82A1CF38;
	sub_82A36180(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f31,f9
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,1280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f11,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f11.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f10,1288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f10.f64 = double(temp.f32);
	// mulli r24,r28,11
	ctx.r24.s64 = ctx.r28.s64 * 11;
	// lfs f27,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f27.f64 = double(temp.f32);
	// fadds f29,f12,f7
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f28,f10,f4
	ctx.f28.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r29,15260
	ctx.r29.s64 = 15260;
loc_82A1CF8C:
	// add. r31,r24,r30
	ctx.r31.u64 = ctx.r24.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a1cfa0
	if (cr0.lt) goto loc_82A1CFA0;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1cfa4
	if (cr6.lt) goto loc_82A1CFA4;
loc_82A1CFA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1CFA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1d0c4
	if (cr6.eq) goto loc_82A1D0C4;
	// cmpw cr6,r23,r31
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r31.s32, xer);
	// beq cr6,0x82a1d0c4
	if (cr6.eq) goto loc_82A1D0C4;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1cff0
	if (!cr6.eq) goto loc_82A1CFF0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1CFD0;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a1cfe4
	if (!cr6.lt) goto loc_82A1CFE4;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82a1cfe8
	goto loc_82A1CFE8;
loc_82A1CFE4:
	// lwz r11,15260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
loc_82A1CFE8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a1d0c4
	if (cr6.eq) goto loc_82A1D0C4;
loc_82A1CFF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1CFFC;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f1,4192(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a36180
	ctx.lr = 0x82A1D010;
	sub_82A36180(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// lfs f0,1280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f11,1288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f10,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsubs f1,f28,f13
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f13,f1,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a1d0c4
	if (!cr6.gt) goto loc_82A1D0C4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825ca560
	ctx.lr = 0x82A1D074;
	sub_825CA560(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82a1c7c0
	ctx.lr = 0x82A1D088;
	sub_82A1C7C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A1D098;
	sub_825CBD90(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1d0ac
	if (cr6.lt) goto loc_82A1D0AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D0AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1d0c4
	if (!cr6.eq) goto loc_82A1D0C4;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
loc_82A1D0C4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,15304
	cr6.compare<uint32_t>(ctx.r29.u32, 15304, xer);
	// blt cr6,0x82a1cf8c
	if (cr6.lt) goto loc_82A1CF8C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7bc
	ctx.lr = 0x82A1D0E4;
	__restfpr_26(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D0E8"))) PPC_WEAK_FUNC(sub_82A1D0E8);
PPC_FUNC_IMPL(__imp__sub_82A1D0E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f12,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// addi r11,r11,14124
	ctx.r11.s64 = ctx.r11.s64 + 14124;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a1d120
	if (!cr6.lt) goto loc_82A1D120;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a1d12c
	goto loc_82A1D12C;
loc_82A1D120:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1d130
	if (cr6.lt) goto loc_82A1D130;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A1D12C:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A1D130:
	// stfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bge cr6,0x82a1d144
	if (!cr6.lt) goto loc_82A1D144;
	// fadds f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// b 0x82a1d150
	goto loc_82A1D150;
loc_82A1D144:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x82a1d154
	if (cr6.lt) goto loc_82A1D154;
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
loc_82A1D150:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A1D154:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f3.f64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82a1ce60
	ctx.lr = 0x82A1D164;
	sub_82A1CE60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1D174"))) PPC_WEAK_FUNC(sub_82A1D174);
PPC_FUNC_IMPL(__imp__sub_82A1D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D178"))) PPC_WEAK_FUNC(sub_82A1D178);
PPC_FUNC_IMPL(__imp__sub_82A1D178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A1D180;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce76c
	ctx.lr = 0x82A1D188;
	__savefpr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1d1b8
	if (cr6.lt) goto loc_82A1D1B8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1d1bc
	if (cr6.lt) goto loc_82A1D1BC;
loc_82A1D1B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1d1dc
	if (!cr6.eq) goto loc_82A1D1DC;
loc_82A1D1C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b8
	ctx.lr = 0x82A1D1D8;
	__restfpr_25(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A1D1DC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1d1ec
	if (!cr6.lt) goto loc_82A1D1EC;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82a1d214
	goto loc_82A1D214;
loc_82A1D1EC:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a1d1fc
	if (!cr6.lt) goto loc_82A1D1FC;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82a1d214
	goto loc_82A1D214;
loc_82A1D1FC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r25,r7,31
	ctx.r25.u64 = ctx.r7.u32 & 0x1;
loc_82A1D214:
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1D224;
	sub_82A0C788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1d1c8
	if (cr6.eq) goto loc_82A1D1C8;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// lfs f0,1304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1308);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f12,1312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	ctx.f12.f64 = double(temp.f32);
	// frsp f31,f9
	ctx.f31.f64 = double(float(ctx.f9.f64));
	// lfs f11,1280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,1284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	ctx.f8.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f7,1288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	ctx.f7.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmuls f6,f31,f0
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f5,f13,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f4,f12,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f29,f11,f6
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f28,f7,f4
	ctx.f28.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x825a22f8
	ctx.lr = 0x82A1D290;
	sub_825A22F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mulli r26,r3,11
	ctx.r26.s64 = ctx.r3.s64 * 11;
	// lfs f26,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f26.f64 = double(temp.f32);
	// li r28,15260
	ctx.r28.s64 = 15260;
loc_82A1D2A0:
	// add. r31,r26,r30
	ctx.r31.u64 = ctx.r26.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a1d2b4
	if (cr0.lt) goto loc_82A1D2B4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1d2b8
	if (cr6.lt) goto loc_82A1D2B8;
loc_82A1D2B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D2B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1d3d0
	if (cr6.eq) goto loc_82A1D3D0;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1d2fc
	if (!cr6.eq) goto loc_82A1D2FC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1D2DC;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82a1d2f0
	if (!cr6.lt) goto loc_82A1D2F0;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// b 0x82a1d2f4
	goto loc_82A1D2F4;
loc_82A1D2F0:
	// lwz r11,15260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15260);
loc_82A1D2F4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a1d3d0
	if (cr6.eq) goto loc_82A1D3D0;
loc_82A1D2FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1D308;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1d3d0
	if (cr6.eq) goto loc_82A1D3D0;
	// lfs f0,1304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f10,1312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f7,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1308);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f4,1284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsubs f1,f28,f13
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f0,f1,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a1d3d0
	if (!cr6.lt) goto loc_82A1D3D0;
	// fmuls f13,f27,f27
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a1d3d0
	if (!cr6.gt) goto loc_82A1D3D0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825ca560
	ctx.lr = 0x82A1D380;
	sub_825CA560(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82a1c7c0
	ctx.lr = 0x82A1D394;
	sub_82A1C7C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x825cbd90
	ctx.lr = 0x82A1D3A4;
	sub_825CBD90(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1d3b8
	if (cr6.lt) goto loc_82A1D3B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D3B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1d3d0
	if (!cr6.eq) goto loc_82A1D3D0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82A1D3D0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r28,15304
	cr6.compare<uint32_t>(ctx.r28.u32, 15304, xer);
	// blt cr6,0x82a1d2a0
	if (cr6.lt) goto loc_82A1D2A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b8
	ctx.lr = 0x82A1D3F0;
	__restfpr_25(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D3F4"))) PPC_WEAK_FUNC(sub_82A1D3F4);
PPC_FUNC_IMPL(__imp__sub_82A1D3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D3F8"))) PPC_WEAK_FUNC(sub_82A1D3F8);
PPC_FUNC_IMPL(__imp__sub_82A1D3F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// lfs f11,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f1,f11
	cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// addi r11,r11,14124
	ctx.r11.s64 = ctx.r11.s64 + 14124;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a1d434
	if (!cr6.lt) goto loc_82A1D434;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a1d440
	goto loc_82A1D440;
loc_82A1D434:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1d444
	if (cr6.lt) goto loc_82A1D444;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A1D440:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A1D444:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82a1d458
	if (!cr6.lt) goto loc_82A1D458;
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x82a1d464
	goto loc_82A1D464;
loc_82A1D458:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a1d468
	if (cr6.lt) goto loc_82A1D468;
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
loc_82A1D464:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A1D468:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f4.f64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82a1d178
	ctx.lr = 0x82A1D47C;
	sub_82A1D178(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1D48C"))) PPC_WEAK_FUNC(sub_82A1D48C);
PPC_FUNC_IMPL(__imp__sub_82A1D48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D490"))) PPC_WEAK_FUNC(sub_82A1D490);
PPC_FUNC_IMPL(__imp__sub_82A1D490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A1D498;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce768
	ctx.lr = 0x82A1D4A0;
	__savefpr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,11
	ctx.r10.s64 = 11;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// fmr f24,f2
	ctx.f24.f64 = ctx.f2.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,255
	ctx.r24.s64 = 255;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82A1D4D0:
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stfsu f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a1d4d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A1D4D0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f27,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f27.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f28,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// mulli r26,r4,11
	ctx.r26.s64 = ctx.r4.s64 * 11;
	// lfs f29,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,26160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26160);
	ctx.f26.f64 = double(temp.f32);
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// addi r27,r11,14124
	ctx.r27.s64 = ctx.r11.s64 + 14124;
loc_82A1D514:
	// stfs f26,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// add. r31,r26,r29
	ctx.r31.u64 = ctx.r26.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r24,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r24.u32);
	// blt 0x82a1d530
	if (cr0.lt) goto loc_82A1D530;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1d534
	if (cr6.lt) goto loc_82A1D534;
loc_82A1D530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1d600
	if (cr6.eq) goto loc_82A1D600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1D54C;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1d600
	if (cr6.eq) goto loc_82A1D600;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f24,f24
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// lfs f12,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r3,1280
	ctx.r5.s64 = ctx.r3.s64 + 1280;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f30,f8,f8,f7
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82a1d600
	if (!cr6.gt) goto loc_82A1D600;
	// fmuls f0,f25,f25
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82a1d600
	if (!cr6.lt) goto loc_82A1D600;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ca9d8
	ctx.lr = 0x82A1D59C;
	sub_825CA9D8(ctx, base);
	// lfs f13,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f31
	ctx.f11.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82a1d5c4
	if (!cr6.gt) goto loc_82A1D5C4;
	// fsel f13,f31,f28,f29
	ctx.f13.f64 = ctx.f31.f64 >= 0.0 ? ctx.f28.f64 : ctx.f29.f64;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f31,f13,f0,f31
	ctx.f31.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64)));
loc_82A1D5C4:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a1c7c0
	ctx.lr = 0x82A1D5D4;
	sub_82A1C7C0(ctx, base);
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a1d5ec
	if (cr6.lt) goto loc_82A1D5EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D5EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1d600
	if (!cr6.eq) goto loc_82A1D600;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
loc_82A1D600:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x82a1d514
	if (cr6.lt) goto loc_82A1D514;
	// lis r11,-31843
	ctx.r11.s64 = -2086862848;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-16248
	ctx.r6.s64 = ctx.r11.s64 + -16248;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d88b0
	ctx.lr = 0x82A1D628;
	sub_831D88B0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b4
	ctx.lr = 0x82A1D638;
	__restfpr_24(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D63C"))) PPC_WEAK_FUNC(sub_82A1D63C);
PPC_FUNC_IMPL(__imp__sub_82A1D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D640"))) PPC_WEAK_FUNC(sub_82A1D640);
PPC_FUNC_IMPL(__imp__sub_82A1D640) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// lfs f11,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f1,f11
	cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// addi r11,r11,14124
	ctx.r11.s64 = ctx.r11.s64 + 14124;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a1d67c
	if (!cr6.lt) goto loc_82A1D67C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82a1d688
	goto loc_82A1D688;
loc_82A1D67C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1d68c
	if (cr6.lt) goto loc_82A1D68C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82A1D688:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A1D68C:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82a1d6a0
	if (!cr6.lt) goto loc_82A1D6A0;
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x82a1d6ac
	goto loc_82A1D6AC;
loc_82A1D6A0:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82a1d6b0
	if (cr6.lt) goto loc_82A1D6B0;
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
loc_82A1D6AC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A1D6B0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f4.f64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82a1d490
	ctx.lr = 0x82A1D6C4;
	sub_82A1D490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1D6D4"))) PPC_WEAK_FUNC(sub_82A1D6D4);
PPC_FUNC_IMPL(__imp__sub_82A1D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D6D8"))) PPC_WEAK_FUNC(sub_82A1D6D8);
PPC_FUNC_IMPL(__imp__sub_82A1D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f3.f64;
	// lfs f3,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82a1d640
	sub_82A1D640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D6E8"))) PPC_WEAK_FUNC(sub_82A1D6E8);
PPC_FUNC_IMPL(__imp__sub_82A1D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f8,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a1d774
	if (!cr6.gt) goto loc_82A1D774;
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a1d774
	if (!cr6.lt) goto loc_82A1D774;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A1D74C;
	sub_825CA560(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A1D758;
	sub_825CE9F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82a1d778
	if (cr6.gt) goto loc_82A1D778;
loc_82A1D774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A1D778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1D794"))) PPC_WEAK_FUNC(sub_82A1D794);
PPC_FUNC_IMPL(__imp__sub_82A1D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1D798"))) PPC_WEAK_FUNC(sub_82A1D798);
PPC_FUNC_IMPL(__imp__sub_82A1D798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A1D7A0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce774
	ctx.lr = 0x82A1D7A8;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// li r27,0
	ctx.r27.s64 = 0;
	// fsubs f11,f4,f2
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r29,r8,11
	ctx.r29.s64 = ctx.r8.s64 * 11;
	// lfs f31,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f31.f64 = double(temp.f32);
	// fabs f28,f0
	ctx.f28.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f27,f13
	ctx.f27.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f30,f12,f31,f1
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f1.f64));
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// fmadds f29,f11,f31,f2
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f2.f64));
loc_82A1D7E8:
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmpw cr6,r4,r30
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a1d860
	if (cr6.eq) goto loc_82A1D860;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1D7FC;
	sub_82A0C788(ctx, base);
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a1d844
	if (!cr6.lt) goto loc_82A1D844;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a1d844
	if (!cr6.gt) goto loc_82A1D844;
	// fmuls f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a1d844
	if (!cr6.lt) goto loc_82A1D844;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a1d848
	if (cr6.gt) goto loc_82A1D848;
loc_82A1D844:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1d860
	if (cr6.eq) goto loc_82A1D860;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
loc_82A1D860:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a1d7e8
	if (cr6.lt) goto loc_82A1D7E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c0
	ctx.lr = 0x82A1D87C;
	__restfpr_27(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D880"))) PPC_WEAK_FUNC(sub_82A1D880);
PPC_FUNC_IMPL(__imp__sub_82A1D880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A1D888;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce774
	ctx.lr = 0x82A1D890;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r30,r7,11
	ctx.r30.s64 = ctx.r7.s64 * 11;
	// lfs f30,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f1,f30
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_82A1D8BC:
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1D8C8;
	sub_82A0C788(ctx, base);
	// fsubs f13,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a1d90c
	if (!cr6.lt) goto loc_82A1D90C;
	// fadds f13,f28,f29
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a1d90c
	if (!cr6.gt) goto loc_82A1D90C;
	// fmuls f0,f27,f30
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a1d90c
	if (!cr6.lt) goto loc_82A1D90C;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a1d910
	if (cr6.gt) goto loc_82A1D910;
loc_82A1D90C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D910:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1d928
	if (cr6.eq) goto loc_82A1D928;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_82A1D928:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a1d8bc
	if (cr6.lt) goto loc_82A1D8BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce7c0
	ctx.lr = 0x82A1D944;
	__restfpr_27(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1D948"))) PPC_WEAK_FUNC(sub_82A1D948);
PPC_FUNC_IMPL(__imp__sub_82A1D948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce778
	ctx.lr = 0x82A1D958;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f31,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1D978;
	sub_82A0C788(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// lfs f12,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f28,f12
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82a1d9c8
	if (!cr6.lt) goto loc_82A1D9C8;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a1d9c8
	if (!cr6.gt) goto loc_82A1D9C8;
	// fmuls f0,f29,f12
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82a1d9c8
	if (!cr6.lt) goto loc_82A1D9C8;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a1d9cc
	if (cr6.gt) goto loc_82A1D9CC;
loc_82A1D9C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1D9CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1D9E4;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1D9F0"))) PPC_WEAK_FUNC(sub_82A1D9F0);
PPC_FUNC_IMPL(__imp__sub_82A1D9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A1D9F8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,199
	ctx.r4.s64 = 199;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,199
	ctx.r28.s64 = 199;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DA20;
	sub_82A44AC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DA30;
	sub_82A44AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f29,f9,f9,f8
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DA60;
	sub_82A44AC0(ctx, base);
	// lfs f7,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fmuls f1,f4,f4
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f30,f2,f2,f1
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fcmpu cr6,f30,f29
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x82a1db00
	if (!cr6.gt) goto loc_82A1DB00;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44b98
	ctx.lr = 0x82A1DA94;
	sub_82A44B98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a1db00
	if (cr6.eq) goto loc_82A1DB00;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44b98
	ctx.lr = 0x82A1DAA8;
	sub_82A44B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DAB4;
	sub_82A44AC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DAC4;
	sub_82A44AC0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f9,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82a1db00
	if (!cr6.lt) goto loc_82A1DB00;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44b98
	ctx.lr = 0x82A1DAFC;
	sub_82A44B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82A1DB00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82a1db44
	if (!cr6.eq) goto loc_82A1DB44;
	// lfs f0,8156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8164);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bne cr6,0x82a1db44
	if (!cr6.eq) goto loc_82A1DB44;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A1DB44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8144
	ctx.r3.s64 = ctx.r30.s64 + 8144;
	// bl 0x825ca560
	ctx.lr = 0x82A1DB50;
	sub_825CA560(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// addi r11,r11,14128
	ctx.r11.s64 = ctx.r11.s64 + 14128;
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a1db6c
	if (!cr6.lt) goto loc_82A1DB6C;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// b 0x82a1db78
	goto loc_82A1DB78;
loc_82A1DB6C:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82a1db78
	if (cr6.lt) goto loc_82A1DB78;
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
loc_82A1DB78:
	// lfs f0,8168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a1dba8
	if (!cr6.gt) goto loc_82A1DBA8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f11.f64 = double(temp.f32);
	// fsel f12,f0,f12,f11
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A1DBA8:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-8304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8304);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a1dbc4
	if (cr6.gt) goto loc_82A1DBC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1DBC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1dbe8
	if (cr6.eq) goto loc_82A1DBE8;
loc_82A1DBD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_82A1DBE8:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x82a1dbd0
	if (!cr6.lt) goto loc_82A1DBD0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A1DBF4:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DC10;
	sub_82A44AC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DC20;
	sub_82A44AC0(ctx, base);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f30,f7
	cr6.compare(ctx.f30.f64, ctx.f7.f64);
	// bge cr6,0x82a1dc50
	if (!cr6.lt) goto loc_82A1DC50;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82a1dc54
	goto loc_82A1DC54;
loc_82A1DC50:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82A1DC54:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// bge cr6,0x82a1dbf4
	if (!cr6.lt) goto loc_82A1DBF4;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bgt cr6,0x82a1dcdc
	if (cr6.gt) goto loc_82A1DCDC;
loc_82A1DC8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DC98;
	sub_82A44AC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DCA8;
	sub_82A44AC0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f30
	cr6.compare(ctx.f7.f64, ctx.f30.f64);
	// bge cr6,0x82a1dcf4
	if (!cr6.lt) goto loc_82A1DCF4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// ble cr6,0x82a1dc8c
	if (!cr6.gt) goto loc_82A1DC8C;
loc_82A1DCDC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_82A1DCF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82A1DD0C"))) PPC_WEAK_FUNC(sub_82A1DD0C);
PPC_FUNC_IMPL(__imp__sub_82A1DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1DD10"))) PPC_WEAK_FUNC(sub_82A1DD10);
PPC_FUNC_IMPL(__imp__sub_82A1DD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A1DD18;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce76c
	ctx.lr = 0x82A1DD20;
	__savefpr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r25,32(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A1DD48;
	sub_82A0C7B0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1DD54;
	sub_82A0C788(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f28,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,1312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1312);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1308);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1284);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,1304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DDA8;
	sub_82A44AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825ca560
	ctx.lr = 0x82A1DDB4;
	sub_825CA560(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// lfs f0,14124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14124);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82a1ddd0
	if (!cr6.lt) goto loc_82A1DDD0;
	// fadds f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// b 0x82a1dddc
	goto loc_82A1DDDC;
loc_82A1DDD0:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82a1dddc
	if (cr6.lt) goto loc_82A1DDDC;
	// fsubs f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
loc_82A1DDDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DDE8;
	sub_82A44AC0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// li r20,255
	ctx.r20.s64 = 255;
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f31,f7
	ctx.f31.f64 = double(float(sqrt(ctx.f7.f64)));
	// bne cr6,0x82a1de2c
	if (!cr6.eq) goto loc_82A1DE2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A1DE28;
	sub_82A2B4E0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_82A1DE2C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cb988
	ctx.lr = 0x82A1DE38;
	sub_825CB988(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lfs f25,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f25.f64 = double(temp.f32);
	// li r22,6
	ctx.r22.s64 = 6;
	// lfs f30,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,-4460(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4460);
	ctx.f26.f64 = double(temp.f32);
loc_82A1DE5C:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82A1DE60:
	// cmpwi cr6,r24,22
	cr6.compare<int32_t>(ctx.r24.s32, 22, xer);
	// bge cr6,0x82a1de80
	if (!cr6.lt) goto loc_82A1DE80;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// bge cr6,0x82a1de80
	if (!cr6.lt) goto loc_82A1DE80;
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x82a1de84
	goto loc_82A1DE84;
loc_82A1DE80:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82A1DE84:
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a1de9c
	if (cr6.lt) goto loc_82A1DE9C;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1dea0
	if (cr6.lt) goto loc_82A1DEA0;
loc_82A1DE9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1DEA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1dfa0
	if (cr6.eq) goto loc_82A1DFA0;
	// cmpw cr6,r21,r30
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a1dfa0
	if (cr6.eq) goto loc_82A1DFA0;
	// cmpw cr6,r30,r20
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, xer);
	// beq cr6,0x82a1dfa0
	if (cr6.eq) goto loc_82A1DFA0;
	// fmadds f0,f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f26.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a1dfac
	if (cr6.gt) goto loc_82A1DFAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1DED8;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82A1DEEC;
	sub_82A0C7B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82a1df58
	if (!cr6.gt) goto loc_82A1DF58;
	// lfs f0,1308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f12,1304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	ctx.f12.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// lfs f11,1288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f31,f30
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lfs f10,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f8,1280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a5bd28
	ctx.lr = 0x82A1DF48;
	sub_82A5BD28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1df58
	if (cr6.eq) goto loc_82A1DF58;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A1DF58:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1dfa0
	if (cr6.eq) goto loc_82A1DFA0;
	// addi r4,r31,1280
	ctx.r4.s64 = ctx.r31.s64 + 1280;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1d9f0
	ctx.lr = 0x82A1DF70;
	sub_82A1D9F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// bl 0x82a44ac0
	ctx.lr = 0x82A1DF80;
	sub_82A44AC0(ctx, base);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1bc68
	ctx.lr = 0x82A1DF90;
	sub_82A1BC68(ctx, base);
	// fadds f0,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a1dfcc
	if (!cr6.gt) goto loc_82A1DFCC;
loc_82A1DFA0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// blt cr6,0x82a1de60
	if (cr6.lt) goto loc_82A1DE60;
loc_82A1DFAC:
	// addi r24,r24,11
	ctx.r24.s64 = ctx.r24.s64 + 11;
	// cmpwi cr6,r24,22
	cr6.compare<int32_t>(ctx.r24.s32, 22, xer);
	// blt cr6,0x82a1de5c
	if (cr6.lt) goto loc_82A1DE5C;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7b8
	ctx.lr = 0x82A1DFC8;
	__restfpr_25(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A1DFCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7b8
	ctx.lr = 0x82A1DFDC;
	__restfpr_25(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1DFE0"))) PPC_WEAK_FUNC(sub_82A1DFE0);
PPC_FUNC_IMPL(__imp__sub_82A1DFE0) {
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
	// bl 0x82a1dd10
	ctx.lr = 0x82A1DFF0;
	sub_82A1DD10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a1e004
	if (cr6.lt) goto loc_82A1E004;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1e008
	if (cr6.lt) goto loc_82A1E008;
loc_82A1E004:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1E008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82A1E024"))) PPC_WEAK_FUNC(sub_82A1E024);
PPC_FUNC_IMPL(__imp__sub_82A1E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E028"))) PPC_WEAK_FUNC(sub_82A1E028);
PPC_FUNC_IMPL(__imp__sub_82A1E028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A1E030;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce75c
	ctx.lr = 0x82A1E038;
	__savefpr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,21464
	ctx.r10.s64 = ctx.r4.s64 + 21464;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14124
	ctx.r11.s64 = ctx.r11.s64 + 14124;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lfsx f13,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// fadds f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f21,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f21.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f21
	cr6.compare(ctx.f25.f64, ctx.f21.f64);
	// bge cr6,0x82a1e08c
	if (!cr6.lt) goto loc_82A1E08C;
	// fadds f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f0.f64));
	// b 0x82a1e098
	goto loc_82A1E098;
loc_82A1E08C:
	// fcmpu cr6,f25,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x82a1e098
	if (cr6.lt) goto loc_82A1E098;
	// fsubs f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
loc_82A1E098:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r3,20120
	ctx.r3.s64 = ctx.r3.s64 + 20120;
	// bl 0x825ca600
	ctx.lr = 0x82A1E0A8;
	sub_825CA600(ctx, base);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// fsqrts f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(sqrt(ctx.f1.f64)));
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1E0BC;
	sub_82A0C788(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r21,255
	ctx.r21.s64 = 255;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1e0e0
	if (!cr6.eq) goto loc_82A1E0E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A1E0DC;
	sub_82A2B4E0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82A1E0E0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cb988
	ctx.lr = 0x82A1E0EC;
	sub_825CB988(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f26,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,11784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11784);
	ctx.f27.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f29,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f23,16088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16088);
	ctx.f23.f64 = double(temp.f32);
	// lis r22,5376
	ctx.r22.s64 = 352321536;
	// lfs f30,-11408(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11408);
	ctx.f30.f64 = double(temp.f32);
	// lfs f24,-4460(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4460);
	ctx.f24.f64 = double(temp.f32);
loc_82A1E128:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82A1E12C:
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(ctx.r26.s32, 22, xer);
	// bge cr6,0x82a1e14c
	if (!cr6.lt) goto loc_82A1E14C;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x82a1e14c
	if (!cr6.lt) goto loc_82A1E14C;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82a1e150
	goto loc_82A1E150;
loc_82A1E14C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82A1E150:
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a1e168
	if (cr6.lt) goto loc_82A1E168;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1e16c
	if (cr6.lt) goto loc_82A1E16C;
loc_82A1E168:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1E16C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1e254
	if (cr6.eq) goto loc_82A1E254;
	// cmpw cr6,r23,r29
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a1e254
	if (cr6.eq) goto loc_82A1E254;
	// cmpw cr6,r29,r21
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r21.s32, xer);
	// beq cr6,0x82a1e254
	if (cr6.eq) goto loc_82A1E254;
	// fmadds f0,f28,f28,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f24.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a1e260
	if (cr6.gt) goto loc_82A1E260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1E1A4;
	sub_82A0C788(ctx, base);
	// addi r30,r3,1280
	ctx.r30.s64 = ctx.r3.s64 + 1280;
	// addi r31,r24,1280
	ctx.r31.s64 = ctx.r24.s64 + 1280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca560
	ctx.lr = 0x82A1E1B8;
	sub_825CA560(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A1E1C4;
	sub_825CE9F8(ctx, base);
	// fabs f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f22,f31
	cr6.compare(ctx.f22.f64, ctx.f31.f64);
	// blt cr6,0x82a1e254
	if (cr6.lt) goto loc_82A1E254;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1e1f8
	if (cr6.eq) goto loc_82A1E1F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A1E1E8;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, xer);
	// beq cr6,0x82a1e254
	if (cr6.eq) goto loc_82A1E254;
loc_82A1E1F8:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x82a1e208
	if (cr6.gt) goto loc_82A1E208;
	// fmr f0,f21
	ctx.f0.f64 = ctx.f21.f64;
	// b 0x82a1e220
	goto loc_82A1E220;
loc_82A1E208:
	// fcmpu cr6,f31,f23
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f23.f64);
	// blt cr6,0x82a1e218
	if (cr6.lt) goto loc_82A1E218;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82a1e220
	goto loc_82A1E220;
loc_82A1E218:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82A1E220:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f0,f26,f29
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f29.f64)));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f6,f12,f28
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f3,f7,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f3
	cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bgt cr6,0x82a1e280
	if (cr6.gt) goto loc_82A1E280;
loc_82A1E254:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x82a1e12c
	if (cr6.lt) goto loc_82A1E12C;
loc_82A1E260:
	// addi r26,r26,11
	ctx.r26.s64 = ctx.r26.s64 + 11;
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(ctx.r26.s32, 22, xer);
	// blt cr6,0x82a1e128
	if (cr6.lt) goto loc_82A1E128;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7a8
	ctx.lr = 0x82A1E27C;
	__restfpr_21(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A1E280:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x831ce7a8
	ctx.lr = 0x82A1E290;
	__restfpr_21(ctx, base);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1E294"))) PPC_WEAK_FUNC(sub_82A1E294);
PPC_FUNC_IMPL(__imp__sub_82A1E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E298"))) PPC_WEAK_FUNC(sub_82A1E298);
PPC_FUNC_IMPL(__imp__sub_82A1E298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A1E2A0;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce770
	ctx.lr = 0x82A1E2A8;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r24,32(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c7b0
	ctx.lr = 0x82A1E2D4;
	sub_82A0C7B0(ctx, base);
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A1E2E8;
	sub_82A0C788(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// blt cr6,0x82a1e540
	if (cr6.lt) goto loc_82A1E540;
	// cmplwi cr6,r31,200
	cr6.compare<uint32_t>(ctx.r31.u32, 200, xer);
	// bge cr6,0x82a1e540
	if (!cr6.lt) goto loc_82A1E540;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1E318;
	sub_82A44AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82a1bc68
	ctx.lr = 0x82A1E348;
	sub_82A1BC68(ctx, base);
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bge cr6,0x82a1e540
	if (!cr6.lt) goto loc_82A1E540;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82A1E360;
	sub_82A44AC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ca9d8
	ctx.lr = 0x82A1E370;
	sub_825CA9D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82a44ac0
	ctx.lr = 0x82A1E384;
	sub_82A44AC0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r21,255
	ctx.r21.s64 = 255;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f31,f7
	ctx.f31.f64 = double(float(sqrt(ctx.f7.f64)));
	// bne cr6,0x82a1e3c8
	if (!cr6.eq) goto loc_82A1E3C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A1E3C4;
	sub_82A2B4E0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82A1E3C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 65536;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r27,r27,20120
	ctx.r27.s64 = ctx.r27.s64 + 20120;
	// lfs f26,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f26.f64 = double(temp.f32);
	// li r23,6
	ctx.r23.s64 = 6;
	// lfs f27,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f27.f64 = double(temp.f32);
loc_82A1E3E8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A1E3EC:
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// bge cr6,0x82a1e40c
	if (!cr6.lt) goto loc_82A1E40C;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bge cr6,0x82a1e40c
	if (!cr6.lt) goto loc_82A1E40C;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82a1e410
	goto loc_82A1E410;
loc_82A1E40C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82A1E410:
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a1e428
	if (cr6.lt) goto loc_82A1E428;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1e42c
	if (cr6.lt) goto loc_82A1E42C;
loc_82A1E428:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1E42C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1e528
	if (cr6.eq) goto loc_82A1E528;
	// cmpw cr6,r22,r30
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, xer);
	// beq cr6,0x82a1e528
	if (cr6.eq) goto loc_82A1E528;
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, xer);
	// beq cr6,0x82a1e528
	if (cr6.eq) goto loc_82A1E528;
	// fmadds f0,f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f27.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a1e534
	if (cr6.gt) goto loc_82A1E534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1E464;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82A1E478;
	sub_82A0C7B0(ctx, base);
	// addi r30,r31,1280
	ctx.r30.s64 = ctx.r31.s64 + 1280;
	// lfs f0,1308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f13,1312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f12,1304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a5bd28
	ctx.lr = 0x82A1E4D0;
	sub_82A5BD28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1e4e0
	if (cr6.eq) goto loc_82A1E4E0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A1E4E0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1e528
	if (cr6.eq) goto loc_82A1E528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a1d9f0
	ctx.lr = 0x82A1E4F8;
	sub_82A1D9F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// bl 0x82a44ac0
	ctx.lr = 0x82A1E508;
	sub_82A44AC0(ctx, base);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1bc68
	ctx.lr = 0x82A1E518;
	sub_82A1BC68(ctx, base);
	// fadds f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a1e554
	if (!cr6.gt) goto loc_82A1E554;
loc_82A1E528:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// blt cr6,0x82a1e3ec
	if (cr6.lt) goto loc_82A1E3EC;
loc_82A1E534:
	// addi r25,r25,11
	ctx.r25.s64 = ctx.r25.s64 + 11;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// blt cr6,0x82a1e3e8
	if (cr6.lt) goto loc_82A1E3E8;
loc_82A1E540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7bc
	ctx.lr = 0x82A1E550;
	__restfpr_26(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82A1E554:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7bc
	ctx.lr = 0x82A1E564;
	__restfpr_26(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1E568"))) PPC_WEAK_FUNC(sub_82A1E568);
PPC_FUNC_IMPL(__imp__sub_82A1E568) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f10,f1,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1E5A4"))) PPC_WEAK_FUNC(sub_82A1E5A4);
PPC_FUNC_IMPL(__imp__sub_82A1E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E5A8"))) PPC_WEAK_FUNC(sub_82A1E5A8);
PPC_FUNC_IMPL(__imp__sub_82A1E5A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1E5CC;
	sub_82A0C710(ctx, base);
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f11,8144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x82a1e610
	if (cr6.gt) goto loc_82A1E610;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A1E610:
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

__attribute__((alias("__imp__sub_82A1E628"))) PPC_WEAK_FUNC(sub_82A1E628);
PPC_FUNC_IMPL(__imp__sub_82A1E628) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82a1e6e0
	if (cr6.gt) goto loc_82A1E6E0;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82a1e6e0
	if (cr6.lt) goto loc_82A1E6E0;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a1e6e0
	if (cr6.gt) goto loc_82A1E6E0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A1E688;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a1e6d4
	if (!cr6.eq) goto loc_82A1E6D4;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82a1e6e0
	if (!cr6.lt) goto loc_82A1E6E0;
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
loc_82A1E6D4:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82a1e6e4
	if (cr6.gt) goto loc_82A1E6E4;
loc_82A1E6E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1E6E4:
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

__attribute__((alias("__imp__sub_82A1E6F8"))) PPC_WEAK_FUNC(sub_82A1E6F8);
PPC_FUNC_IMPL(__imp__sub_82A1E6F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1E738"))) PPC_WEAK_FUNC(sub_82A1E738);
PPC_FUNC_IMPL(__imp__sub_82A1E738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A1E740;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1e764
	if (!cr6.lt) goto loc_82A1E764;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a1e78c
	goto loc_82A1E78C;
loc_82A1E764:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a1e774
	if (!cr6.lt) goto loc_82A1E774;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a1e78c
	goto loc_82A1E78C;
loc_82A1E774:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_82A1E78C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f30,68(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82a0c788
	ctx.lr = 0x82A1E7B8;
	sub_82A0C788(ctx, base);
	// addi r8,r3,1280
	ctx.r8.s64 = ctx.r3.s64 + 1280;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x82a0c710
	ctx.lr = 0x82A1E7E4;
	sub_82A0C710(ctx, base);
	// lbz r4,252(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f31,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x82a1e81c
	if (cr6.gt) goto loc_82A1E81C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A1E81C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1E82C"))) PPC_WEAK_FUNC(sub_82A1E82C);
PPC_FUNC_IMPL(__imp__sub_82A1E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1E830"))) PPC_WEAK_FUNC(sub_82A1E830);
PPC_FUNC_IMPL(__imp__sub_82A1E830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A1E838;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce764
	ctx.lr = 0x82A1E840;
	__savefpr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,14128
	ctx.r31.s64 = ctx.r11.s64 + 14128;
	// lfs f11,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f23,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f23.f64 = double(temp.f32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f23
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// fadds f24,f12,f13
	ctx.f24.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// fsubs f26,f12,f8
	ctx.f26.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fcmpu cr6,f10,f24
	cr6.compare(ctx.f10.f64, ctx.f24.f64);
	// fadds f28,f8,f9
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// ble cr6,0x82a1ec58
	if (!cr6.gt) goto loc_82A1EC58;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f24
	cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// bgt cr6,0x82a1ec58
	if (cr6.gt) goto loc_82A1EC58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f29,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fdivs f25,f7,f9
	ctx.f25.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fdivs f27,f6,f9
	ctx.f27.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x825ca9d8
	ctx.lr = 0x82A1E924;
	sub_825CA9D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f5,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x825f7e40
	ctx.lr = 0x82A1E948;
	sub_825F7E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a5a710
	ctx.lr = 0x82A1E958;
	sub_82A5A710(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f3,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f30,-23844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	ctx.f30.f64 = double(temp.f32);
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x825f7e40
	ctx.lr = 0x82A1E988;
	sub_825F7E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a5a710
	ctx.lr = 0x82A1E998;
	sub_82A5A710(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8262ac50
	ctx.lr = 0x82A1E9A8;
	sub_8262AC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a710
	ctx.lr = 0x82A1E9B8;
	sub_82A5A710(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a710
	ctx.lr = 0x82A1E9DC;
	sub_82A5A710(ctx, base);
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8262ac50
	ctx.lr = 0x82A1EA04;
	sub_8262AC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a5a710
	ctx.lr = 0x82A1EA14;
	sub_82A5A710(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825f7e40
	ctx.lr = 0x82A1EA24;
	sub_825F7E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a710
	ctx.lr = 0x82A1EA34;
	sub_82A5A710(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f8,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f30,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fsel f6,f8,f30,f29
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fsel f5,f7,f30,f29
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fmuls f4,f6,f26
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82A1EA68:
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82a5b1a0
	ctx.lr = 0x82A1EAA4;
	sub_82A5B1A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a1eac0
	if (!cr6.gt) goto loc_82A1EAC0;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a1eac0
	if (cr6.lt) goto loc_82A1EAC0;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a1eaf4
	if (!cr6.gt) goto loc_82A1EAF4;
loc_82A1EAC0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x82a1eadc
	if (!cr6.gt) goto loc_82A1EADC;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a1eadc
	if (cr6.lt) goto loc_82A1EADC;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82a1eaf4
	if (!cr6.gt) goto loc_82A1EAF4;
loc_82A1EADC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x82a1ea68
	if (cr6.lt) goto loc_82A1EA68;
	// b 0x82a1eaf8
	goto loc_82A1EAF8;
loc_82A1EAF4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A1EAF8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ebcc
	if (cr6.eq) goto loc_82A1EBCC;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82a1eb2c
	if (!cr6.gt) goto loc_82A1EB2C;
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82a1eb2c
	if (!cr6.gt) goto loc_82A1EB2C;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82a1ec14
	goto loc_82A1EC14;
loc_82A1EB2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ebcc
	if (cr6.eq) goto loc_82A1EBCC;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bge cr6,0x82a1eb54
	if (!cr6.lt) goto loc_82A1EB54;
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// blt cr6,0x82a1ec10
	if (cr6.lt) goto loc_82A1EC10;
loc_82A1EB54:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ebcc
	if (cr6.eq) goto loc_82A1EBCC;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82a1eb90
	if (!cr6.lt) goto loc_82A1EB90;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f13,f30,f29
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fnmsubs f11,f12,f26,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f26.f64 - ctx.f13.f64)));
	// fnmsubs f10,f11,f27,f0
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f27.f64 - ctx.f0.f64)));
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, ctx.f28.f64);
	// b 0x82a1ec0c
	goto loc_82A1EC0C;
loc_82A1EB90:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ebcc
	if (cr6.eq) goto loc_82A1EBCC;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82a1ebcc
	if (!cr6.gt) goto loc_82A1EBCC;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f13,f30,f29
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fnmsubs f11,f12,f26,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f26.f64 - ctx.f13.f64)));
	// fnmsubs f10,f11,f27,f0
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f27.f64 - ctx.f0.f64)));
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f28
	cr6.compare(ctx.f9.f64, ctx.f28.f64);
	// b 0x82a1ec0c
	goto loc_82A1EC0C;
loc_82A1EBCC:
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f12,f30,f29
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// lfs f0,64(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f23,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 + ctx.f13.f64));
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f11,f24,f12
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f24.f64 - ctx.f12.f64)));
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// fnmsubs f12,f6,f27,f7
	ctx.f12.f64 = double(float(-(ctx.f6.f64 * ctx.f27.f64 - ctx.f7.f64)));
	// blt cr6,0x82a1ec00
	if (cr6.lt) goto loc_82A1EC00;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82A1EC00:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
loc_82A1EC0C:
	// bge cr6,0x82a1ec14
	if (!cr6.lt) goto loc_82A1EC14;
loc_82A1EC10:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A1EC14:
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f12,f30,f29
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// lfs f0,60(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f23,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f23.f64 + ctx.f13.f64));
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f11,f24,f12
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f24.f64 - ctx.f12.f64)));
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// fnmsubs f12,f6,f25,f7
	ctx.f12.f64 = double(float(-(ctx.f6.f64 * ctx.f25.f64 - ctx.f7.f64)));
	// blt cr6,0x82a1ec48
	if (cr6.lt) goto loc_82A1EC48;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82A1EC48:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82a1ec58
	if (!cr6.lt) goto loc_82A1EC58;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82A1EC58:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ec74
	if (cr6.eq) goto loc_82A1EC74;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a1ec78
	if (!cr6.eq) goto loc_82A1EC78;
loc_82A1EC74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1EC78:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7b0
	ctx.lr = 0x82A1EC88;
	__restfpr_23(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1EC8C"))) PPC_WEAK_FUNC(sub_82A1EC8C);
PPC_FUNC_IMPL(__imp__sub_82A1EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1EC90"))) PPC_WEAK_FUNC(sub_82A1EC90);
PPC_FUNC_IMPL(__imp__sub_82A1EC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,22
	cr6.compare<uint32_t>(ctx.r5.u32, 22, xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,12384
	ctx.r11.s64 = ctx.r11.s64 + 12384;
	// bge cr6,0x82a1ecb4
	if (!cr6.lt) goto loc_82A1ECB4;
	// addi r10,r5,7
	ctx.r10.s64 = ctx.r5.s64 + 7;
	// mulli r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 * 200;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82a1ecb8
	goto loc_82A1ECB8;
loc_82A1ECB4:
	// addi r9,r11,1400
	ctx.r9.s64 = ctx.r11.s64 + 1400;
loc_82A1ECB8:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a1ece0
	if (!cr6.lt) goto loc_82A1ECE0;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a1ece0
	if (!cr6.lt) goto loc_82A1ECE0;
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82A1ECE0:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1ECE8"))) PPC_WEAK_FUNC(sub_82A1ECE8);
PPC_FUNC_IMPL(__imp__sub_82A1ECE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A1ECF0;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce764
	ctx.lr = 0x82A1ECF8;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1ed20
	if (!cr6.lt) goto loc_82A1ED20;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// b 0x82a1ed48
	goto loc_82A1ED48;
loc_82A1ED20:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a1ed30
	if (!cr6.lt) goto loc_82A1ED30;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// b 0x82a1ed48
	goto loc_82A1ED48;
loc_82A1ED30:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r22,r7,31
	ctx.r22.u64 = ctx.r7.u32 & 0x1;
loc_82A1ED48:
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1ED58;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lbz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// extsb r23,r10
	ctx.r23.s64 = ctx.r10.s8;
	// bl 0x82a0c710
	ctx.lr = 0x82A1ED70;
	sub_82A0C710(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lfs f29,248(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x825ceaf8
	ctx.lr = 0x82A1ED8C;
	sub_825CEAF8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82a40840
	ctx.lr = 0x82A1ED9C;
	sub_82A40840(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca600
	ctx.lr = 0x82A1EDA4;
	sub_825CA600(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// fsqrts f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(sqrt(ctx.f1.f64)));
	// bl 0x82a0c788
	ctx.lr = 0x82A1EDB4;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a1edcc
	if (!cr6.eq) goto loc_82A1EDCC;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7b0
	ctx.lr = 0x82A1EDC8;
	__restfpr_23(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82A1EDCC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f25,14128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14128);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f23.f64 = double(temp.f32);
	// addi r31,r3,1280
	ctx.r31.s64 = ctx.r3.s64 + 1280;
	// lfs f27,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f27.f64 = double(temp.f32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lfs f26,-4460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4460);
	ctx.f26.f64 = double(temp.f32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lfs f28,21812(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21812);
	ctx.f28.f64 = double(temp.f32);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// lfs f30,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// addi r21,r11,14128
	ctx.r21.s64 = ctx.r11.s64 + 14128;
loc_82A1EE10:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82a1ef2c
	if (cr6.eq) goto loc_82A1EF2C;
	// ble cr6,0x82a1eed4
	if (!cr6.gt) goto loc_82A1EED4;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bgt cr6,0x82a1eed4
	if (cr6.gt) goto loc_82A1EED4;
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// stfs f30,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,6112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x825ca560
	ctx.lr = 0x82A1EE64;
	sub_825CA560(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A1EE6C;
	sub_825CE9F8(ctx, base);
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82a1eeac
	if (!cr6.eq) goto loc_82A1EEAC;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// bl 0x82a1cde8
	ctx.lr = 0x82A1EEA8;
	sub_82A1CDE8(ctx, base);
	// b 0x82a1ef90
	goto loc_82A1EF90;
loc_82A1EEAC:
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f2,f0,f27
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x82a1cde8
	ctx.lr = 0x82A1EED0;
	sub_82A1CDE8(ctx, base);
	// b 0x82a1ef90
	goto loc_82A1EF90;
loc_82A1EED4:
	// lfs f0,-4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f30
	cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// stfs f25,104(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bge cr6,0x82a1eef0
	if (!cr6.lt) goto loc_82A1EEF0;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// b 0x82a1eefc
	goto loc_82A1EEFC;
loc_82A1EEF0:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// blt cr6,0x82a1ef00
	if (cr6.lt) goto loc_82A1EF00;
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
loc_82A1EEFC:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82A1EF00:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1cba8
	ctx.lr = 0x82A1EF28;
	sub_82A1CBA8(ctx, base);
	// b 0x82a1ef90
	goto loc_82A1EF90;
loc_82A1EF2C:
	// lfs f0,-4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bge cr6,0x82a1ef48
	if (!cr6.lt) goto loc_82A1EF48;
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82a1ef54
	goto loc_82A1EF54;
loc_82A1EF48:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a1ef58
	if (cr6.lt) goto loc_82A1EF58;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82A1EF54:
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82A1EF58:
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1cba8
	ctx.lr = 0x82A1EF90;
	sub_82A1CBA8(ctx, base);
loc_82A1EF90:
	// cmpw cr6,r30,r22
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, xer);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// rlwinm r10,r3,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFF0;
	// beq cr6,0x82a1efa4
	if (cr6.eq) goto loc_82A1EFA4;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
loc_82A1EFA4:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82a1ee10
	if (cr6.lt) goto loc_82A1EE10;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7b0
	ctx.lr = 0x82A1EFC8;
	__restfpr_23(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1EFCC"))) PPC_WEAK_FUNC(sub_82A1EFCC);
PPC_FUNC_IMPL(__imp__sub_82A1EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1EFD0"))) PPC_WEAK_FUNC(sub_82A1EFD0);
PPC_FUNC_IMPL(__imp__sub_82A1EFD0) {
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
	// bl 0x82a1ece8
	ctx.lr = 0x82A1EFE0;
	sub_82A1ECE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r3,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF;
	// srawi r9,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f040
	if (cr6.eq) goto loc_82A1F040;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A1F040:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-23488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1F070"))) PPC_WEAK_FUNC(sub_82A1F070);
PPC_FUNC_IMPL(__imp__sub_82A1F070) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f13,24552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f13,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f9
	cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x82a1f0ac
	if (!cr6.lt) goto loc_82A1F0AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A1F0AC:
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// fsel f10,f0,f13,f12
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1F0E8"))) PPC_WEAK_FUNC(sub_82A1F0E8);
PPC_FUNC_IMPL(__imp__sub_82A1F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f13,8152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A1F110"))) PPC_WEAK_FUNC(sub_82A1F110);
PPC_FUNC_IMPL(__imp__sub_82A1F110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A1F118;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82a22c10
	ctx.lr = 0x82A1F140;
	sub_82A22C10(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1f16c
	if (cr6.lt) goto loc_82A1F16C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a1f16c
	if (!cr6.lt) goto loc_82A1F16C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a1f16c
	if (cr6.lt) goto loc_82A1F16C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1f170
	if (cr6.lt) goto loc_82A1F170;
loc_82A1F16C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F170:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f288
	if (cr6.eq) goto loc_82A1F288;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A1F184;
	sub_82A0C738(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a16440
	ctx.lr = 0x82A1F18C;
	sub_82A16440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a1f1a4
	if (cr6.lt) goto loc_82A1F1A4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1f1a8
	if (cr6.lt) goto loc_82A1F1A8;
loc_82A1F1A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F1A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f288
	if (cr6.eq) goto loc_82A1F288;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a1f1c4
	if (!cr6.lt) goto loc_82A1F1C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1f1ec
	goto loc_82A1F1EC;
loc_82A1F1C4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a1f1d4
	if (!cr6.lt) goto loc_82A1F1D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1f1ec
	goto loc_82A1F1EC;
loc_82A1F1D4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A1F1EC:
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1F1F4;
	sub_82A0C710(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a1f220
	if (cr6.lt) goto loc_82A1F220;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bge cr6,0x82a1f220
	if (!cr6.lt) goto loc_82A1F220;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r31,r10
	ctx.r9.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r7.s64;
	// b 0x82a1f224
	goto loc_82A1F224;
loc_82A1F220:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F224:
	// addi r10,r3,3612
	ctx.r10.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82a1f240
	if (!cr6.lt) goto loc_82A1F240;
	// addi r11,r11,3815
	ctx.r11.s64 = ctx.r11.s64 + 3815;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82a1f244
	goto loc_82A1F244;
loc_82A1F240:
	// lwz r11,15260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15260);
loc_82A1F244:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a1f288
	if (!cr6.eq) goto loc_82A1F288;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a1f264
	if (cr6.lt) goto loc_82A1F264;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1f268
	if (cr6.lt) goto loc_82A1F268;
loc_82A1F264:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f27c
	if (cr6.eq) goto loc_82A1F27C;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// bne cr6,0x82a1f288
	if (!cr6.eq) goto loc_82A1F288;
loc_82A1F27C:
	// lbz r3,8507(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8507);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A1F288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F294"))) PPC_WEAK_FUNC(sub_82A1F294);
PPC_FUNC_IMPL(__imp__sub_82A1F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1F298"))) PPC_WEAK_FUNC(sub_82A1F298);
PPC_FUNC_IMPL(__imp__sub_82A1F298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A1F2A0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce770
	ctx.lr = 0x82A1F2A8;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f27,-23848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23848);
	ctx.f27.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f28,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a1f374
	if (!cr6.gt) goto loc_82A1F374;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f0,f28,f29
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f29.f64;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82a5af98
	ctx.lr = 0x82A1F348;
	sub_82A5AF98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f370
	if (cr6.eq) goto loc_82A1F370;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82a1f374
	goto loc_82A1F374;
loc_82A1F370:
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82A1F374:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a1f40c
	if (!cr6.gt) goto loc_82A1F40C;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsel f11,f13,f28,f29
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f28.f64 : ctx.f29.f64;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82a5af98
	ctx.lr = 0x82A1F3D4;
	sub_82A5AF98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f408
	if (cr6.eq) goto loc_82A1F408;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7bc
	ctx.lr = 0x82A1F404;
	__restfpr_26(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A1F408:
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82A1F40C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7bc
	ctx.lr = 0x82A1F418;
	__restfpr_26(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F41C"))) PPC_WEAK_FUNC(sub_82A1F41C);
PPC_FUNC_IMPL(__imp__sub_82A1F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1F420"))) PPC_WEAK_FUNC(sub_82A1F420);
PPC_FUNC_IMPL(__imp__sub_82A1F420) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bne cr6,0x82a1f454
	if (!cr6.eq) goto loc_82A1F454;
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
loc_82A1F454:
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bne cr6,0x82a1f4f0
	if (!cr6.eq) goto loc_82A1F4F0;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r9,4548(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4548);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82a1f4f0
	if (!cr6.eq) goto loc_82A1F4F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82a0c710
	ctx.lr = 0x82A1F490;
	sub_82A0C710(ctx, base);
	// lbz r7,252(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,9008(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a1f4f0
	if (cr6.lt) goto loc_82A1F4F0;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82a1f4f0
	if (cr6.lt) goto loc_82A1F4F0;
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a1f4f4
	if (!cr6.lt) goto loc_82A1F4F4;
loc_82A1F4F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A1F4F4:
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

__attribute__((alias("__imp__sub_82A1F508"))) PPC_WEAK_FUNC(sub_82A1F508);
PPC_FUNC_IMPL(__imp__sub_82A1F508) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1f558
	if (!cr6.eq) goto loc_82A1F558;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a1f548
	if (!cr6.eq) goto loc_82A1F548;
loc_82A1F540:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a1f598
	goto loc_82A1F598;
loc_82A1F548:
	// lwz r5,5356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// addi r3,r11,5364
	ctx.r3.s64 = ctx.r11.s64 + 5364;
	// lwz r4,5360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5360);
	// b 0x82a1f594
	goto loc_82A1F594;
loc_82A1F558:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82a229e8
	ctx.lr = 0x82A1F568;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a1f540
	if (cr6.eq) goto loc_82A1F540;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3fb88
	ctx.lr = 0x82A1F588;
	sub_82A3FB88(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82A1F594:
	// bl 0x82a1f420
	ctx.lr = 0x82A1F598;
	sub_82A1F420(ctx, base);
loc_82A1F598:
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

__attribute__((alias("__imp__sub_82A1F5B0"))) PPC_WEAK_FUNC(sub_82A1F5B0);
PPC_FUNC_IMPL(__imp__sub_82A1F5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1F5B8;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x82A1F5E0;
	sub_82A0C710(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// mulli r25,r31,11
	ctx.r25.s64 = ctx.r31.s64 * 11;
	// lfs f30,7388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7388);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// addi r27,r27,-32320
	ctx.r27.s64 = ctx.r27.s64 + -32320;
loc_82A1F608:
	// add. r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x82a1f61c
	if (cr0.lt) goto loc_82A1F61C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1f620
	if (cr6.lt) goto loc_82A1F620;
loc_82A1F61C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F620:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f6a4
	if (cr6.eq) goto loc_82A1F6A4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a1f640
	if (cr6.lt) goto loc_82A1F640;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1f644
	if (cr6.lt) goto loc_82A1F644;
loc_82A1F640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f664
	if (cr6.eq) goto loc_82A1F664;
	// add r11,r4,r26
	ctx.r11.u64 = ctx.r4.u64 + ctx.r26.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a1f668
	goto loc_82A1F668;
loc_82A1F664:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1F668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f6a4
	if (cr6.eq) goto loc_82A1F6A4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a1f6a4
	if (!cr6.eq) goto loc_82A1F6A4;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A1F688;
	sub_82A0C788(ctx, base);
	// lfs f0,1280(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a1f698
	if (!cr6.lt) goto loc_82A1F698;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82A1F698:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82a1f6a4
	if (!cr6.gt) goto loc_82A1F6A4;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82A1F6A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a1f608
	if (cr6.lt) goto loc_82A1F608;
	// lbz r9,252(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 252);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// fsubs f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,14256(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14256);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-24912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmadds f1,f9,f13,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f6,f9,f29,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fcmpu cr6,f5,f7
	cr6.compare(ctx.f5.f64, ctx.f7.f64);
	// bge cr6,0x82a1f71c
	if (!cr6.lt) goto loc_82A1F71C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A1F71C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f72c
	if (cr6.eq) goto loc_82A1F72C;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82A1F72C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F740"))) PPC_WEAK_FUNC(sub_82A1F740);
PPC_FUNC_IMPL(__imp__sub_82A1F740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A1F748;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82A1F750;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a1f77c
	if (cr6.eq) goto loc_82A1F77C;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82a1f77c
	if (cr6.eq) goto loc_82A1F77C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a1f784
	goto loc_82A1F784;
loc_82A1F77C:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A1F784:
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1F794;
	sub_82A0C710(ctx, base);
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,252(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f13,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-24912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,9008(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-29856(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29856);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bne cr6,0x82a1f7fc
	if (!cr6.eq) goto loc_82A1F7FC;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x82a1f810
	goto loc_82A1F810;
loc_82A1F7FC:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x82a1f80c
	if (cr6.eq) goto loc_82A1F80C;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82a1f810
	if (!cr6.eq) goto loc_82A1F810;
loc_82A1F80C:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_82A1F810:
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// fmadds f10,f30,f31,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmuls f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x82a1f844
	if (!cr6.lt) goto loc_82A1F844;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A1F844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1f864
	if (cr6.eq) goto loc_82A1F864;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1F860;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A1F864:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82a1f888
	if (!cr6.eq) goto loc_82A1F888;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// b 0x82a1f89c
	goto loc_82A1F89C;
loc_82A1F888:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x82a1f898
	if (cr6.eq) goto loc_82A1F898;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x82a1f89c
	if (!cr6.eq) goto loc_82A1F89C;
loc_82A1F898:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_82A1F89C:
	// fmadds f13,f30,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 + ctx.f13.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a1f8b8
	if (!cr6.lt) goto loc_82A1F8B8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A1F8B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1f8d8
	if (!cr6.eq) goto loc_82A1F8D8;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1F8D4;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A1F8D8:
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a1f8f4
	if (!cr6.eq) goto loc_82A1F8F4;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x82a1f908
	goto loc_82A1F908;
loc_82A1F8F4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x82a1f904
	if (cr6.eq) goto loc_82A1F904;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x82a1f908
	if (!cr6.eq) goto loc_82A1F908;
loc_82A1F904:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_82A1F908:
	// lfs f13,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82a1f930
	if (!cr6.gt) goto loc_82A1F930;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1F92C;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82A1F930:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1f5b0
	ctx.lr = 0x82A1F93C;
	sub_82A1F5B0(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82a1f94c
	if (!cr6.eq) goto loc_82A1F94C;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x82a1f958
	goto loc_82A1F958;
loc_82A1F94C:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x82a1f958
	if (!cr6.eq) goto loc_82A1F958;
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_82A1F958:
	// fmadds f0,f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 + ctx.f1.f64));
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a1f978
	if (!cr6.lt) goto loc_82A1F978;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A1F978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A1F998;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1F99C"))) PPC_WEAK_FUNC(sub_82A1F99C);
PPC_FUNC_IMPL(__imp__sub_82A1F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1F9A0"))) PPC_WEAK_FUNC(sub_82A1F9A0);
PPC_FUNC_IMPL(__imp__sub_82A1F9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A1F9A8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce774
	ctx.lr = 0x82A1F9B0;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r25,292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r29,6112(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// bl 0x82a22b40
	ctx.lr = 0x82A1F9DC;
	sub_82A22B40(ctx, base);
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(ctx.r24.s32, 5, xer);
	// bne cr6,0x82a1fc98
	if (!cr6.eq) goto loc_82A1FC98;
	// lfs f0,8156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8156);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8164);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,4472(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11412);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x82a22b40
	ctx.lr = 0x82A1FA18;
	sub_82A22B40(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r27,r10,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r10.s64;
	// bl 0x82a22b40
	ctx.lr = 0x82A1FA2C;
	sub_82A22B40(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r8,5
	cr6.compare<int32_t>(ctx.r8.s32, 5, xer);
	// lfs f28,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x82a1fa60
	if (!cr6.eq) goto loc_82A1FA60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A1FA4C;
	sub_82A22B40(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r10,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a1faa0
	if (!cr6.eq) goto loc_82A1FAA0;
loc_82A1FA60:
	// bl 0x83740868
	ctx.lr = 0x82A1FA64;
	sub_83740868(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// ble cr6,0x82a1faa0
	if (!cr6.gt) goto loc_82A1FAA0;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f0,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a1faa0
	if (!cr6.lt) goto loc_82A1FAA0;
loc_82A1FA8C:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82A1FA9C;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A1FAA0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lbz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f27,19176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x82a1fad4
	if (cr6.eq) goto loc_82A1FAD4;
	// bl 0x83740868
	ctx.lr = 0x82A1FAB8;
	sub_83740868(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// ble cr6,0x82a1fad4
	if (!cr6.gt) goto loc_82A1FAD4;
	// fcmpu cr6,f31,f27
	cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// blt cr6,0x82a1fa8c
	if (cr6.lt) goto loc_82A1FA8C;
loc_82A1FAD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a1fc98
	if (cr6.lt) goto loc_82A1FC98;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a1fc98
	if (!cr6.eq) goto loc_82A1FC98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A1FB00;
	sub_82A22B40(ctx, base);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2b388
	ctx.lr = 0x82A1FB0C;
	sub_82A2B388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82a1fb1c
	if (!cr6.lt) goto loc_82A1FB1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1fb44
	goto loc_82A1FB44;
loc_82A1FB1C:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82a1fb2c
	if (!cr6.lt) goto loc_82A1FB2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1fb44
	goto loc_82A1FB44;
loc_82A1FB2C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A1FB44:
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1FB4C;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82a44bf8
	ctx.lr = 0x82A1FB7C;
	sub_82A44BF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fmuls f29,f31,f28
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsqrts f30,f3
	ctx.f30.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x82a44b68
	ctx.lr = 0x82A1FBB8;
	sub_82A44B68(ctx, base);
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fabs f0,f2
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82a1fc98
	if (!cr6.lt) goto loc_82A1FC98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a44b68
	ctx.lr = 0x82A1FBD8;
	sub_82A44B68(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a1fc98
	if (!cr6.lt) goto loc_82A1FC98;
	// fcmpu cr6,f30,f29
	cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x82a1fc98
	if (!cr6.gt) goto loc_82A1FC98;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x82a1fc08
	if (cr6.lt) goto loc_82A1FC08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82a1fc14
	goto loc_82A1FC14;
loc_82A1FC08:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fsubs f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A1FC14:
	// bl 0x83740868
	ctx.lr = 0x82A1FC18;
	sub_83740868(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,4472(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4472);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a22b40
	ctx.lr = 0x82A1FC48;
	sub_82A22B40(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// ble cr6,0x82a1fc98
	if (!cr6.gt) goto loc_82A1FC98;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a44c28
	ctx.lr = 0x82A1FC64;
	sub_82A44C28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a2df00
	ctx.lr = 0x82A1FC74;
	sub_82A2DF00(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x825ae5b0
	ctx.lr = 0x82A1FC8C;
	sub_825AE5B0(ctx, base);
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x82a1fc98
	if (!cr6.lt) goto loc_82A1FC98;
	// li r24,13
	ctx.r24.s64 = 13;
loc_82A1FC98:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82A1FCA8;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FCAC"))) PPC_WEAK_FUNC(sub_82A1FCAC);
PPC_FUNC_IMPL(__imp__sub_82A1FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1FCB0"))) PPC_WEAK_FUNC(sub_82A1FCB0);
PPC_FUNC_IMPL(__imp__sub_82A1FCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A1FCB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a22c10
	ctx.lr = 0x82A1FCE0;
	sub_82A22C10(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x82A1FCF0;
	sub_82A2B388(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1c500
	ctx.lr = 0x82A1FD04;
	sub_82A1C500(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1FD0C"))) PPC_WEAK_FUNC(sub_82A1FD0C);
PPC_FUNC_IMPL(__imp__sub_82A1FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1FD10"))) PPC_WEAK_FUNC(sub_82A1FD10);
PPC_FUNC_IMPL(__imp__sub_82A1FD10) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1fd34
	if (!cr6.lt) goto loc_82A1FD34;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1fd5c
	goto loc_82A1FD5C;
loc_82A1FD34:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a1fd44
	if (!cr6.lt) goto loc_82A1FD44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a1fd5c
	goto loc_82A1FD5C;
loc_82A1FD44:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A1FD5C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1FD68;
	sub_82A0C710(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a1fdd4
	if (cr6.lt) goto loc_82A1FDD4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bge cr6,0x82a1fdd4
	if (!cr6.lt) goto loc_82A1FDD4;
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r10,r11,35747
	ctx.r10.u64 = ctx.r11.u64 | 35747;
	// mulhwu r9,r31,r10
	ctx.r9.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r7,r8,11
	ctx.r7.s64 = ctx.r8.s64 * 11;
	// subf r11,r7,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r7.s64;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a1fdbc
	if (!cr6.lt) goto loc_82A1FDBC;
loc_82A1FD98:
	// addi r10,r11,9778
	ctx.r10.s64 = ctx.r11.s64 + 9778;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x82a1fe0c
	if (cr6.eq) goto loc_82A1FE0C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82a1fddc
	if (cr6.eq) goto loc_82A1FDDC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a1fddc
	if (cr6.eq) goto loc_82A1FDDC;
loc_82A1FDBC:
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
loc_82A1FDD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1fd98
	goto loc_82A1FD98;
loc_82A1FDDC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a1fdbc
	if (!cr6.lt) goto loc_82A1FDBC;
	// addi r10,r11,8430
	ctx.r10.s64 = ctx.r11.s64 + 8430;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82a1fe0c
	if (!cr6.eq) goto loc_82A1FE0C;
	// addi r11,r11,8507
	ctx.r11.s64 = ctx.r11.s64 + 8507;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a1fdbc
	if (cr6.eq) goto loc_82A1FDBC;
loc_82A1FE0C:
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

__attribute__((alias("__imp__sub_82A1FE24"))) PPC_WEAK_FUNC(sub_82A1FE24);
PPC_FUNC_IMPL(__imp__sub_82A1FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A1FE28"))) PPC_WEAK_FUNC(sub_82A1FE28);
PPC_FUNC_IMPL(__imp__sub_82A1FE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A1FE30;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82A1FE38;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a1fe54
	if (!cr6.lt) goto loc_82A1FE54;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a1fe78
	goto loc_82A1FE78;
loc_82A1FE54:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a1fe64
	if (!cr6.lt) goto loc_82A1FE64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a1fe78
	goto loc_82A1FE78;
loc_82A1FE64:
	// li r11,22
	ctx.r11.s64 = 22;
	// srawi r10,r29,31
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// adde r4,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A1FE78:
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A1FE84;
	sub_82A0C710(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A1FE94;
	sub_82A2B4E0(ctx, base);
	// li r26,255
	ctx.r26.s64 = 255;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a1feac
	if (cr6.lt) goto loc_82A1FEAC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1feb0
	if (cr6.lt) goto loc_82A1FEB0;
loc_82A1FEAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1FEB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ff3c
	if (cr6.eq) goto loc_82A1FF3C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82a1fecc
	if (!cr6.lt) goto loc_82A1FECC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a1fef4
	goto loc_82A1FEF4;
loc_82A1FECC:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82a1fedc
	if (!cr6.lt) goto loc_82A1FEDC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a1fef4
	goto loc_82A1FEF4;
loc_82A1FEDC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
loc_82A1FEF4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x82a1ff04
	if (!cr6.lt) goto loc_82A1FF04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1ff2c
	goto loc_82A1FF2C;
loc_82A1FF04:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a1ff14
	if (!cr6.lt) goto loc_82A1FF14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a1ff2c
	goto loc_82A1FF2C;
loc_82A1FF14:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r8,r11,r29
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82A1FF2C:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a1ff7c
	if (cr6.eq) goto loc_82A1FF7C;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82a1ff68
	goto loc_82A1FF68;
loc_82A1FF3C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a1ff54
	if (cr6.lt) goto loc_82A1FF54;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1ff58
	if (cr6.lt) goto loc_82A1FF58;
loc_82A1FF54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1FF58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a1ff7c
	if (cr6.eq) goto loc_82A1FF7C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82A1FF68:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x82a1ff7c
	if (cr6.lt) goto loc_82A1FF7C;
	// cmpwi cr6,r26,22
	cr6.compare<int32_t>(ctx.r26.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a1ff80
	if (cr6.lt) goto loc_82A1FF80;
loc_82A1FF7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A1FF80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20154
	if (cr6.eq) goto loc_82A20154;
	// bl 0x83740868
	ctx.lr = 0x82A1FF90;
	sub_83740868(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,-6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,27608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a0c788
	ctx.lr = 0x82A1FFC8;
	sub_82A0C788(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82A1FFDC;
	sub_82A0C788(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lis r30,-31778
	ctx.r30.s64 = -2082603008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,1280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// lwz r7,1284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// lfs f1,4192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,1288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bl 0x82a36180
	ctx.lr = 0x82A20014;
	sub_82A36180(ctx, base);
	// bl 0x825c2950
	ctx.lr = 0x82A20018;
	sub_825C2950(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,9008(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,14124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x82a2003c
	if (!cr6.lt) goto loc_82A2003C;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82a20048
	goto loc_82A20048;
loc_82A2003C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82a20048
	if (cr6.lt) goto loc_82A20048;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82A20048:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f1,4192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a36180
	ctx.lr = 0x82A20058;
	sub_82A36180(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82a44ac0
	ctx.lr = 0x82A20070;
	sub_82A44AC0(ctx, base);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f2,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f28,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// bl 0x82a5bd28
	ctx.lr = 0x82A200CC;
	sub_82A5BD28(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82a20154
	if (!cr6.eq) goto loc_82A20154;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1396(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1396);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1280(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,1288(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1288);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, xer);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f12,f7,f7,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// bne cr6,0x82a2012c
	if (!cr6.eq) goto loc_82A2012C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,14260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a20154
	if (cr6.lt) goto loc_82A20154;
loc_82A2012C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,27360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27360);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a20154
	if (cr6.lt) goto loc_82A20154;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,255
	ctx.r3.s64 = 255;
	// lfs f13,11836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11836);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a20158
	if (!cr6.lt) goto loc_82A20158;
loc_82A20154:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82A20158:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82A20164;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20168"))) PPC_WEAK_FUNC(sub_82A20168);
PPC_FUNC_IMPL(__imp__sub_82A20168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A20170;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r20,255
	ctx.r20.s64 = 255;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82a2018c
	if (!cr6.lt) goto loc_82A2018C;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82a201b0
	goto loc_82A201B0;
loc_82A2018C:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a2019c
	if (!cr6.lt) goto loc_82A2019C;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82a201b0
	goto loc_82A201B0;
loc_82A2019C:
	// li r11,22
	ctx.r11.s64 = 22;
	// srawi r10,r31,31
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// adde r26,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A201B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r22,12(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a2b4e0
	ctx.lr = 0x82A201BC;
	sub_82A2B4E0(ctx, base);
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A201D0;
	sub_82A0C788(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a201ec
	if (cr6.lt) goto loc_82A201EC;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a201f0
	if (cr6.lt) goto loc_82A201F0;
loc_82A201EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A201F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a202cc
	if (cr6.eq) goto loc_82A202CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A20208;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a3d2d0
	ctx.lr = 0x82A2021C;
	sub_82A3D2D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a20264
	if (!cr6.eq) goto loc_82A20264;
	// lwz r11,1396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1396);
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(ctx.r11.s32, 54, xer);
	// bne cr6,0x82a20268
	if (!cr6.eq) goto loc_82A20268;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d0a0
	ctx.lr = 0x82A20240;
	sub_82A3D0A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a20268
	if (cr6.eq) goto loc_82A20268;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,12
	ctx.r10.s64 = 786432;
	// rlwinm r9,r11,0,8,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82a20268
	if (!cr6.eq) goto loc_82A20268;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A20264:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A20268:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a203fc
	if (cr6.eq) goto loc_82A203FC;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a20298
	if (cr6.eq) goto loc_82A20298;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A20298:
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a203fc
	if (cr6.eq) goto loc_82A203FC;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a203fc
	if (cr6.lt) goto loc_82A203FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a203fc
	if (cr6.gt) goto loc_82A203FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A202CC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r23,r11,65535
	ctx.r23.u64 = ctx.r11.u64 | 65535;
	// ori r24,r10,20120
	ctx.r24.u64 = ctx.r10.u64 | 20120;
	// lis r21,3072
	ctx.r21.s64 = 201326592;
loc_82A202E4:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x82a203fc
	if (!cr6.lt) goto loc_82A203FC;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// add r10,r22,r24
	ctx.r10.u64 = ctx.r22.u64 + ctx.r24.u64;
	// bge cr6,0x82a20314
	if (!cr6.lt) goto loc_82A20314;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bge cr6,0x82a20314
	if (!cr6.lt) goto loc_82A20314;
	// mulli r11,r26,11
	ctx.r11.s64 = ctx.r26.s64 * 11;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82a20318
	goto loc_82A20318;
loc_82A20314:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82A20318:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a20330
	if (cr6.lt) goto loc_82A20330;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a20334
	if (cr6.lt) goto loc_82A20334;
loc_82A20330:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A20334:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a203f0
	if (cr6.eq) goto loc_82A203F0;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A20348;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2d0
	ctx.lr = 0x82A2035C;
	sub_82A3D2D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a20394
	if (!cr6.eq) goto loc_82A20394;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d0a0
	ctx.lr = 0x82A20374;
	sub_82A3D0A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a20398
	if (cr6.eq) goto loc_82A20398;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r21
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, xer);
	// bne cr6,0x82a20398
	if (!cr6.eq) goto loc_82A20398;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A20394:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A20398:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a203f0
	if (cr6.eq) goto loc_82A203F0;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a203c4
	if (cr6.eq) goto loc_82A203C4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_82A203C4:
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a203f0
	if (cr6.eq) goto loc_82A203F0;
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82a203f0
	if (cr6.lt) goto loc_82A203F0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a203f0
	if (cr6.gt) goto loc_82A203F0;
	// lwz r20,0(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82A203F0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r20,255
	cr6.compare<int32_t>(ctx.r20.s32, 255, xer);
	// beq cr6,0x82a202e4
	if (cr6.eq) goto loc_82A202E4;
loc_82A203FC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20408"))) PPC_WEAK_FUNC(sub_82A20408);
PPC_FUNC_IMPL(__imp__sub_82A20408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A20410;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce770
	ctx.lr = 0x82A20418;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addis r25,r27,1
	ctx.r25.s64 = ctx.r27.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r25,r25,20408
	ctx.r25.s64 = ctx.r25.s64 + 20408;
	// lwz r21,292(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82a2b4e0
	ctx.lr = 0x82A20448;
	sub_82A2B4E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a20460
	if (cr6.lt) goto loc_82A20460;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a20464
	if (cr6.lt) goto loc_82A20464;
loc_82A20460:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A20464:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a20480
	if (!cr6.eq) goto loc_82A20480;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r9,r11,20424
	ctx.r9.u64 = ctx.r11.u64 | 20424;
	// lwzx r24,r10,r9
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82A20480:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2048C;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lbz r10,253(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 253);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A204A8;
	sub_82A0C710(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r30,252(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f26,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,-11316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
loc_82A204C4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82a204dc
	if (cr6.eq) goto loc_82A204DC;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82a204dc
	if (cr6.eq) goto loc_82A204DC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a204e4
	goto loc_82A204E4;
loc_82A204DC:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A204E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a408a0
	ctx.lr = 0x82A204F0;
	sub_82A408A0(ctx, base);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82a20510
	if (!cr6.lt) goto loc_82A20510;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// bge cr6,0x82a20510
	if (!cr6.lt) goto loc_82A20510;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A20510:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a20528
	if (cr6.lt) goto loc_82A20528;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2052c
	if (cr6.lt) goto loc_82A2052C;
loc_82A20528:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2052C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20584
	if (cr6.eq) goto loc_82A20584;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A20540;
	sub_82A0C788(ctx, base);
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fnmsubs f9,f10,f31,f13
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x82a20578
	if (!cr6.lt) goto loc_82A20578;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A20578:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2059c
	if (cr6.eq) goto loc_82A2059C;
loc_82A20584:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82a204c4
	if (cr6.lt) goto loc_82A204C4;
	// b 0x82a205a0
	goto loc_82A205A0;
loc_82A2059C:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
loc_82A205A0:
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// lfs f13,-9980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9980);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f0
	ctx.f11.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fmuls f10,f31,f30
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fcmpu cr6,f9,f10
	cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// bge cr6,0x82a205dc
	if (!cr6.lt) goto loc_82A205DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A205DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a205ec
	if (!cr6.eq) goto loc_82A205EC;
	// fnmsubs f30,f31,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82A205EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f27,25612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25612);
	ctx.f27.f64 = double(temp.f32);
	// mulli r28,r28,11
	ctx.r28.s64 = ctx.r28.s64 * 11;
	// lfs f28,-6672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6672);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f29.f64 = double(temp.f32);
loc_82A20610:
	// add. r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x82a20624
	if (cr0.lt) goto loc_82A20624;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a20628
	if (cr6.lt) goto loc_82A20628;
loc_82A20624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A20628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20648
	if (cr6.eq) goto loc_82A20648;
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a2064c
	goto loc_82A2064C;
loc_82A20648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2064C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20724
	if (cr6.eq) goto loc_82A20724;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A20664;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// beq cr6,0x82a206c4
	if (cr6.eq) goto loc_82A206C4;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fnmsubs f13,f31,f29,f0
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f29.f64 - ctx.f0.f64)));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a20694
	if (!cr6.lt) goto loc_82A20694;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A20694:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a206c4
	if (!cr6.eq) goto loc_82A206C4;
	// fmadds f13,f31,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 + ctx.f30.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82a206b8
	if (!cr6.lt) goto loc_82A206B8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A206B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20724
	if (cr6.eq) goto loc_82A20724;
loc_82A206C4:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fnmsubs f13,f31,f28,f0
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f28.f64 - ctx.f0.f64)));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82a206e8
	if (!cr6.lt) goto loc_82A206E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A206E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20724
	if (cr6.eq) goto loc_82A20724;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f27
	cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// bgt cr6,0x82a20724
	if (cr6.gt) goto loc_82A20724;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// or r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 | ctx.r9.u64;
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
loc_82A20724:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82a20610
	if (cr6.lt) goto loc_82A20610;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7bc
	ctx.lr = 0x82A20740;
	__restfpr_26(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20744"))) PPC_WEAK_FUNC(sub_82A20744);
PPC_FUNC_IMPL(__imp__sub_82A20744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20748"))) PPC_WEAK_FUNC(sub_82A20748);
PPC_FUNC_IMPL(__imp__sub_82A20748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A20750;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addis r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// addi r25,r25,20408
	ctx.r25.s64 = ctx.r25.s64 + 20408;
	// lwz r21,292(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// bl 0x82a0c710
	ctx.lr = 0x82A20780;
	sub_82A0C710(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lbz r9,253(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 253);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r28,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A2079C;
	sub_82A0C710(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r24,252(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mulli r20,r28,11
	ctx.r20.s64 = ctx.r28.s64 * 11;
	// lfs f31,-11316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f31.f64 = double(temp.f32);
	// li r27,15304
	ctx.r27.s64 = 15304;
loc_82A207B8:
	// add. r30,r20,r29
	ctx.r30.u64 = ctx.r20.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x82a207cc
	if (cr0.lt) goto loc_82A207CC;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a207d0
	if (cr6.lt) goto loc_82A207D0;
loc_82A207CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A207D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a207f0
	if (cr6.eq) goto loc_82A207F0;
	// add r11,r30,r21
	ctx.r11.u64 = ctx.r30.u64 + ctx.r21.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a207f4
	goto loc_82A207F4;
loc_82A207F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A207F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20894
	if (cr6.eq) goto loc_82A20894;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A2080C;
	sub_82A0C710(ctx, base);
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// bge cr6,0x82a20820
	if (!cr6.lt) goto loc_82A20820;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// b 0x82a20824
	goto loc_82A20824;
loc_82A20820:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82A20824:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a20894
	if (cr6.eq) goto loc_82A20894;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A20838;
	sub_82A0C788(ctx, base);
	// extsb r9,r24
	ctx.r9.s64 = ctx.r24.s8;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f13,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f9,f10,f31,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x82a20870
	if (!cr6.lt) goto loc_82A20870;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A20870:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a20894
	if (!cr6.eq) goto loc_82A20894;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// or r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 | ctx.r26.u64;
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
loc_82A20894:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// cmpwi cr6,r27,15348
	cr6.compare<int32_t>(ctx.r27.s32, 15348, xer);
	// blt cr6,0x82a207b8
	if (cr6.lt) goto loc_82A207B8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A208B4"))) PPC_WEAK_FUNC(sub_82A208B4);
PPC_FUNC_IMPL(__imp__sub_82A208B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A208B8"))) PPC_WEAK_FUNC(sub_82A208B8);
PPC_FUNC_IMPL(__imp__sub_82A208B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A208C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82a20408
	ctx.lr = 0x82A208F0;
	sub_82A20408(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a20748
	ctx.lr = 0x82A20900;
	sub_82A20748(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82a2091c
	if (!cr6.gt) goto loc_82A2091C;
loc_82A20910:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A2091C:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a20910
	if (cr6.lt) goto loc_82A20910;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a20940
	if (!cr6.eq) goto loc_82A20940;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82a20944
	if (cr6.eq) goto loc_82A20944;
loc_82A20940:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A20944:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2094C"))) PPC_WEAK_FUNC(sub_82A2094C);
PPC_FUNC_IMPL(__imp__sub_82A2094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A20950"))) PPC_WEAK_FUNC(sub_82A20950);
PPC_FUNC_IMPL(__imp__sub_82A20950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A20958;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31763
	ctx.r27.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r25,-31743
	ctx.r25.s64 = -2080309248;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,-3564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r30,292(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r11,4460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a20d80
	if (!cr6.eq) goto loc_82A20D80;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,-21736(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A2098C;
	sub_83747068(ctx, base);
	// lwz r11,5356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a20cac
	if (cr6.eq) goto loc_82A20CAC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82a20be4
	if (cr6.eq) goto loc_82A20BE4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a20d80
	if (!cr6.eq) goto loc_82A20D80;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// lwz r4,5360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5360);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,6112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// bl 0x82a0c710
	ctx.lr = 0x82A209C0;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82a209e0
	if (cr6.eq) goto loc_82A209E0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A209E0:
	// lfs f13,8144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f0,f8
	ctx.f0.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82a20acc
	if (!cr6.lt) goto loc_82A20ACC;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,-21736(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A20A10;
	sub_83747068(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82a20d84
	goto loc_82A20D84;
loc_82A20ACC:
	// lfs f13,20(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a20d80
	if (cr6.lt) goto loc_82A20D80;
	// lwz r4,5756(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5756);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a20af0
	if (cr6.lt) goto loc_82A20AF0;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a20af4
	if (cr6.lt) goto loc_82A20AF4;
loc_82A20AF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A20AF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20b1c
	if (cr6.eq) goto loc_82A20B1C;
	// lwz r3,-3564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A20B08;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8448
	ctx.r10.s64 = 553648128;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82a20d80
	if (cr6.eq) goto loc_82A20D80;
loc_82A20B1C:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-21736(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A20B28;
	sub_83747068(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82a20d84
	goto loc_82A20D84;
loc_82A20BE4:
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,-21736(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A20BF0;
	sub_83747068(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82a20d84
	goto loc_82A20D84;
loc_82A20CAC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a20d80
	if (!cr6.eq) goto loc_82A20D80;
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,-21736(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A20CC4;
	sub_83747068(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82a20d84
	goto loc_82A20D84;
loc_82A20D80:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A20D84:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a20e64
	if (cr6.eq) goto loc_82A20E64;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,-21736(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A20D9C;
	sub_83747068(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lfs f3,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f2,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lfs f1,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f11,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f10,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f9,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,88(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82A20E64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A20E70"))) PPC_WEAK_FUNC(sub_82A20E70);
PPC_FUNC_IMPL(__imp__sub_82A20E70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A20E90;
	sub_82A0C788(ctx, base);
	// lfs f1,1276(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A20E9C;
	sub_825CE9F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a20f14
	if (!cr6.gt) goto loc_82A20F14;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a20ed4
	if (!cr6.lt) goto loc_82A20ED4;
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A20ED4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a20efc
	if (!cr6.lt) goto loc_82A20EFC;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A20EFC:
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A20F14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,20596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20596);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82a20f3c
	if (!cr6.gt) goto loc_82A20F3C;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82A20F3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,9
	ctx.r3.s64 = 9;
	// lfs f0,7636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7636);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a20f54
	if (cr6.gt) goto loc_82A20F54;
	// li r3,10
	ctx.r3.s64 = 10;
loc_82A20F54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
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

__attribute__((alias("__imp__sub_82A20F68"))) PPC_WEAK_FUNC(sub_82A20F68);
PPC_FUNC_IMPL(__imp__sub_82A20F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82A20F70;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x82a0c710
	ctx.lr = 0x82A20F9C;
	sub_82A0C710(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ori r10,r11,44728
	ctx.r10.u64 = ctx.r11.u64 | 44728;
	// cmpwi cr6,r26,38
	cr6.compare<int32_t>(ctx.r26.s32, 38, xer);
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// beq cr6,0x82a212bc
	if (cr6.eq) goto loc_82A212BC;
	// cmpwi cr6,r26,26
	cr6.compare<int32_t>(ctx.r26.s32, 26, xer);
	// beq cr6,0x82a212bc
	if (cr6.eq) goto loc_82A212BC;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2a6c8
	ctx.lr = 0x82A20FD4;
	sub_82A2A6C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21000
	if (cr6.eq) goto loc_82A21000;
	// cmpwi cr6,r26,27
	cr6.compare<int32_t>(ctx.r26.s32, 27, xer);
	// beq cr6,0x82a212c8
	if (cr6.eq) goto loc_82A212C8;
	// cmpwi cr6,r26,49
	cr6.compare<int32_t>(ctx.r26.s32, 49, xer);
	// beq cr6,0x82a212c8
	if (cr6.eq) goto loc_82A212C8;
	// cmpwi cr6,r26,31
	cr6.compare<int32_t>(ctx.r26.s32, 31, xer);
	// beq cr6,0x82a212c8
	if (cr6.eq) goto loc_82A212C8;
	// cmpwi cr6,r26,28
	cr6.compare<int32_t>(ctx.r26.s32, 28, xer);
	// beq cr6,0x82a2130c
	if (cr6.eq) goto loc_82A2130C;
loc_82A21000:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r26,28
	cr6.compare<int32_t>(ctx.r26.s32, 28, xer);
	// bne cr6,0x82a2112c
	if (!cr6.eq) goto loc_82A2112C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A2101C;
	sub_82A2B4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a21034
	if (cr6.lt) goto loc_82A21034;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21038
	if (cr6.lt) goto loc_82A21038;
loc_82A21034:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a21054
	if (!cr6.eq) goto loc_82A21054;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// ori r9,r11,20424
	ctx.r9.u64 = ctx.r11.u64 | 20424;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82A21054:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a21068
	if (cr6.lt) goto loc_82A21068;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2106c
	if (cr6.lt) goto loc_82A2106C;
loc_82A21068:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2106C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a21088
	if (!cr6.eq) goto loc_82A21088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A21084;
	sub_82A0C710(ctx, base);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_82A21088:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a2109c
	if (cr6.lt) goto loc_82A2109C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a210a0
	if (cr6.lt) goto loc_82A210A0;
loc_82A2109C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A210A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21110
	if (cr6.eq) goto loc_82A21110;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a210bc
	if (!cr6.lt) goto loc_82A210BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a210e4
	goto loc_82A210E4;
loc_82A210BC:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a210cc
	if (!cr6.lt) goto loc_82A210CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a210e4
	goto loc_82A210E4;
loc_82A210CC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r9,r11,r31
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82A210E4:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bne cr6,0x82a21110
	if (!cr6.eq) goto loc_82A21110;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2a6c8
	ctx.lr = 0x82A21100;
	sub_82A2A6C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21110
	if (cr6.eq) goto loc_82A21110;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82A21110:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2a6f0
	ctx.lr = 0x82A2111C;
	sub_82A2A6F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2112c
	if (cr6.eq) goto loc_82A2112C;
	// li r21,1
	ctx.r21.s64 = 1;
loc_82A2112C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a21164
	if (!cr6.lt) goto loc_82A21164;
	// clrlwi r10,r20,24
	ctx.r10.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a2115c
	if (!cr6.eq) goto loc_82A2115C;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a2115c
	if (!cr6.eq) goto loc_82A2115C;
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a21164
	if (cr6.eq) goto loc_82A21164;
loc_82A2115C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_82A21164:
	// addi r11,r26,-27
	ctx.r11.s64 = ctx.r26.s64 + -27;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bgt cr6,0x82a212b0
	if (cr6.gt) goto loc_82A212B0;
	// lis r12,-32094
	ctx.r12.s64 = -2103312384;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4488
	ctx.r12.s64 = ctx.r12.s64 + 4488;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82A2123C;
	case 1:
		goto loc_82A211E4;
	case 2:
		goto loc_82A21204;
	case 3:
		goto loc_82A2125C;
	case 4:
		goto loc_82A2127C;
	case 5:
		goto loc_82A212B0;
	case 6:
		goto loc_82A212B0;
	case 7:
		goto loc_82A212B0;
	case 8:
		goto loc_82A212B0;
	case 9:
		goto loc_82A212B0;
	case 10:
		goto loc_82A212B0;
	case 11:
		goto loc_82A212B0;
	case 12:
		goto loc_82A212B0;
	case 13:
		goto loc_82A212B0;
	case 14:
		goto loc_82A212B0;
	case 15:
		goto loc_82A212B0;
	case 16:
		goto loc_82A212B0;
	case 17:
		goto loc_82A212B0;
	case 18:
		goto loc_82A212B0;
	case 19:
		goto loc_82A212B0;
	case 20:
		goto loc_82A212B0;
	case 21:
		goto loc_82A212B0;
	case 22:
		goto loc_82A2129C;
	default:
		return;
	}
	// lwz r21,4668(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4668);
	// lwz r21,4580(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4580);
	// lwz r21,4612(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4612);
	// lwz r21,4700(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4700);
	// lwz r21,4732(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4732);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4784(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4784);
	// lwz r21,4764(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 4764);
loc_82A211E4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// clrlwi r25,r9,24
	ctx.r25.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A21204:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,21
	ctx.r9.s64 = ctx.r11.s64 + 21;
	// ori r8,r10,44306
	ctx.r8.u64 = ctx.r10.u64 | 44306;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r6,r22,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// lwzx r5,r7,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// clrlwi r25,r5,24
	ctx.r25.u64 = ctx.r5.u32 & 0xFF;
	// beq cr6,0x82a212b0
	if (cr6.eq) goto loc_82A212B0;
	// li r25,5
	ctx.r25.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A2123C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// clrlwi r25,r9,24
	ctx.r25.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A2125C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// clrlwi r25,r9,24
	ctx.r25.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A2127C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// clrlwi r25,r9,24
	ctx.r25.u64 = ctx.r9.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A2129C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// clrlwi r25,r9,24
	ctx.r25.u64 = ctx.r9.u32 & 0xFF;
loc_82A212B0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A212BC:
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82a212d4
	if (!cr6.eq) goto loc_82A212D4;
loc_82A212C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A212D4:
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2a6c8
	ctx.lr = 0x82A212E8;
	sub_82A2A6C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2130c
	if (cr6.eq) goto loc_82A2130C;
	// subfic r11,r31,1
	xer.ca = ctx.r31.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82A2130C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A21318"))) PPC_WEAK_FUNC(sub_82A21318);
PPC_FUNC_IMPL(__imp__sub_82A21318) {
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
	ctx.lr = 0x82A21320;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A21338;
	sub_82A2B4E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a21350
	if (cr6.lt) goto loc_82A21350;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21354
	if (cr6.lt) goto loc_82A21354;
loc_82A21350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a21370
	if (!cr6.eq) goto loc_82A21370;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// ori r9,r11,20424
	ctx.r9.u64 = ctx.r11.u64 | 20424;
	// lwzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82A21370:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a21384
	if (cr6.lt) goto loc_82A21384;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21388
	if (cr6.lt) goto loc_82A21388;
loc_82A21384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21388:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a213a8
	if (!cr6.eq) goto loc_82A213A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A213A4;
	sub_82A0C710(ctx, base);
	// lwz r27,44(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_82A213A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A213B4;
	sub_82A0C738(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A213C8;
	sub_82A0C710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82a213e4
	if (cr6.lt) goto loc_82A213E4;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a213e8
	if (cr6.lt) goto loc_82A213E8;
loc_82A213E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A213E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21418
	if (cr6.eq) goto loc_82A21418;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a29a58
	ctx.lr = 0x82A21408;
	sub_82A29A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21418
	if (cr6.eq) goto loc_82A21418;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A21418:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// bl 0x83747068
	ctx.lr = 0x82A21428;
	sub_83747068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82a20f68
	ctx.lr = 0x82A21440;
	sub_82A20F68(ctx, base);
	// lwz r10,-3564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r11,11
	ctx.r11.s64 = 11;
	// addis r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,292(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// mulli r5,r31,11
	ctx.r5.s64 = ctx.r31.s64 * 11;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r8,r8,-26424
	ctx.r8.s64 = ctx.r8.s64 + -26424;
loc_82A21464:
	// add. r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82a21478
	if (cr0.lt) goto loc_82A21478;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2147c
	if (cr6.lt) goto loc_82A2147C;
loc_82A21478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2147C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2149c
	if (cr6.eq) goto loc_82A2149C;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r4,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe r11,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a214a0
	goto loc_82A214A0;
loc_82A2149C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A214A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a214d4
	if (cr6.eq) goto loc_82A214D4;
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bge cr6,0x82a214bc
	if (!cr6.lt) goto loc_82A214BC;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82a214c0
	goto loc_82A214C0;
loc_82A214BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A214C0:
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// bne cr6,0x82a214d4
	if (!cr6.eq) goto loc_82A214D4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_82A214D4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82a21464
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A21464;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A214FC"))) PPC_WEAK_FUNC(sub_82A214FC);
PPC_FUNC_IMPL(__imp__sub_82A214FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21500"))) PPC_WEAK_FUNC(sub_82A21500);
PPC_FUNC_IMPL(__imp__sub_82A21500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,26104
	ctx.r11.s64 = ctx.r11.s64 + 26104;
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a21554
	if (cr6.eq) goto loc_82A21554;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a21554
	if (!cr6.eq) goto loc_82A21554;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a2154c
	if (cr6.eq) goto loc_82A2154C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A2154C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A21554:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2155C"))) PPC_WEAK_FUNC(sub_82A2155C);
PPC_FUNC_IMPL(__imp__sub_82A2155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21560"))) PPC_WEAK_FUNC(sub_82A21560);
PPC_FUNC_IMPL(__imp__sub_82A21560) {
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
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a21598
	if (!cr6.eq) goto loc_82A21598;
loc_82A21580:
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
loc_82A21598:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a21580
	if (cr6.eq) goto loc_82A21580;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,26180
	ctx.r11.s64 = ctx.r11.s64 + 26180;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a21580
	if (cr6.eq) goto loc_82A21580;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82a21580
	if (cr6.lt) goto loc_82A21580;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x83740868
	ctx.lr = 0x82A215E0;
	sub_83740868(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82A2160C"))) PPC_WEAK_FUNC(sub_82A2160C);
PPC_FUNC_IMPL(__imp__sub_82A2160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21610"))) PPC_WEAK_FUNC(sub_82A21610);
PPC_FUNC_IMPL(__imp__sub_82A21610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a21624
	if (!cr6.eq) goto loc_82A21624;
loc_82A2161C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A21624:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2161c
	if (cr6.eq) goto loc_82A2161C;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,26180
	ctx.r10.s64 = ctx.r10.s64 + 26180;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a2161c
	if (cr6.eq) goto loc_82A2161C;
	// lwz r9,8152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8144(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,8148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// lfs f12,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21694"))) PPC_WEAK_FUNC(sub_82A21694);
PPC_FUNC_IMPL(__imp__sub_82A21694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21698"))) PPC_WEAK_FUNC(sub_82A21698);
PPC_FUNC_IMPL(__imp__sub_82A21698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82a216b8
	if (cr6.eq) goto loc_82A216B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A216B8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r9,r11,22592
	ctx.r9.u64 = ctx.r11.u64 | 22592;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A216D4"))) PPC_WEAK_FUNC(sub_82A216D4);
PPC_FUNC_IMPL(__imp__sub_82A216D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A216D8"))) PPC_WEAK_FUNC(sub_82A216D8);
PPC_FUNC_IMPL(__imp__sub_82A216D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82a216f8
	if (cr6.eq) goto loc_82A216F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A216F8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r9,r11,22596
	ctx.r9.u64 = ctx.r11.u64 | 22596;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A21714"))) PPC_WEAK_FUNC(sub_82A21714);
PPC_FUNC_IMPL(__imp__sub_82A21714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21718"))) PPC_WEAK_FUNC(sub_82A21718);
PPC_FUNC_IMPL(__imp__sub_82A21718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82A21720;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce770
	ctx.lr = 0x82A21728;
	__savefpr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x82a21d24
	if (cr6.eq) goto loc_82A21D24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a2b4e0
	ctx.lr = 0x82A21744;
	sub_82A2B4E0(ctx, base);
	// cmpw cr6,r3,r22
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, xer);
	// beq cr6,0x82a21d24
	if (cr6.eq) goto loc_82A21D24;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82A2175C;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// beq cr6,0x82a21fa8
	if (cr6.eq) goto loc_82A21FA8;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x82a21fa8
	if (cr6.eq) goto loc_82A21FA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A21784;
	sub_82A0C710(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a0c710
	ctx.lr = 0x82A21798;
	sub_82A0C710(ctx, base);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bge cr6,0x82a217b0
	if (!cr6.lt) goto loc_82A217B0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82a217d8
	goto loc_82A217D8;
loc_82A217B0:
	// cmpwi cr6,r22,11
	cr6.compare<int32_t>(ctx.r22.s32, 11, xer);
	// bge cr6,0x82a217c0
	if (!cr6.lt) goto loc_82A217C0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82a217d8
	goto loc_82A217D8;
loc_82A217C0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r22
	xer.ca = ctx.r22.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r22.s64 - ctx.r11.s64;
	// eqv r9,r11,r22
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r22.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r25,r7,31
	ctx.r25.u64 = ctx.r7.u32 & 0x1;
loc_82A217D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x82A217E4;
	sub_82A22B40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x831ce980
	ctx.lr = 0x82A217F4;
	sub_831CE980(ctx, base);
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f26,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f26.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x82a21818
	if (!cr6.gt) goto loc_82A21818;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A21818:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82a2182c
	if (cr6.eq) goto loc_82A2182C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82a21830
	if (!cr6.eq) goto loc_82A21830;
loc_82A2182C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A21830:
	// lwz r18,144(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r18,3
	cr6.compare<int32_t>(ctx.r18.s32, 3, xer);
	// bne cr6,0x82a21858
	if (!cr6.eq) goto loc_82A21858;
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a21850
	if (cr6.eq) goto loc_82A21850;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a21858
	if (!cr6.eq) goto loc_82A21858;
loc_82A21850:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a2185c
	goto loc_82A2185C;
loc_82A21858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2185C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2186c
	if (cr6.eq) goto loc_82A2186C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A2186C:
	// lwz r19,12(r20)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x82a21888
	if (cr6.eq) goto loc_82A21888;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// beq cr6,0x82a21888
	if (cr6.eq) goto loc_82A21888;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a21890
	goto loc_82A21890;
loc_82A21888:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A21890:
	// addis r26,r19,1
	ctx.r26.s64 = ctx.r19.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,20408
	ctx.r26.s64 = ctx.r26.s64 + 20408;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r21,r10,24
	ctx.r21.u64 = ctx.r10.u32 & 0xFF;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfs f28,-24912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f28.f64 = double(temp.f32);
	// lwzx r23,r11,r9
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82a21984
	if (cr6.eq) goto loc_82A21984;
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(ctx.r18.s32, 2, xer);
	// beq cr6,0x82a21968
	if (cr6.eq) goto loc_82A21968;
	// cmpwi cr6,r18,4
	cr6.compare<int32_t>(ctx.r18.s32, 4, xer);
	// beq cr6,0x82a21968
	if (cr6.eq) goto loc_82A21968;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21940
	if (cr6.eq) goto loc_82A21940;
	// bl 0x83740868
	ctx.lr = 0x82A21908;
	sub_83740868(ctx, base);
	// fadds f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a44ac0
	ctx.lr = 0x82A21924;
	sub_82A44AC0(ctx, base);
	// lfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82a2198c
	goto loc_82A2198C;
loc_82A21940:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a44bf8
	ctx.lr = 0x82A2194C;
	sub_82A44BF8(ctx, base);
	// lfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82a2198c
	goto loc_82A2198C;
loc_82A21968:
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82a2198c
	goto loc_82A2198C;
loc_82A21984:
	// lfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
loc_82A2198C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A21998;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,292(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f31,f9
	ctx.f31.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82a0c710
	ctx.lr = 0x82A219E4;
	sub_82A0C710(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// lfs f0,21708(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,-26940(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26940);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a21adc
	if (!cr6.gt) goto loc_82A21ADC;
	// addi r28,r11,15304
	ctx.r28.s64 = ctx.r11.s64 + 15304;
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r29,r25,11
	ctx.r29.s64 = ctx.r25.s64 * 11;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82A21A10:
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmpw cr6,r4,r22
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, xer);
	// beq cr6,0x82a21acc
	if (cr6.eq) goto loc_82A21ACC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a21a30
	if (cr6.lt) goto loc_82A21A30;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21a34
	if (cr6.lt) goto loc_82A21A34;
loc_82A21A30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21A34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21a54
	if (cr6.eq) goto loc_82A21A54;
	// add r11,r4,r27
	ctx.r11.u64 = ctx.r4.u64 + ctx.r27.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a21a58
	goto loc_82A21A58;
loc_82A21A54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21A58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21acc
	if (cr6.eq) goto loc_82A21ACC;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82a21a74
	if (!cr6.lt) goto loc_82A21A74;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82a21a78
	goto loc_82A21A78;
loc_82A21A74:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82A21A78:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a21acc
	if (cr6.eq) goto loc_82A21ACC;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A21A88;
	sub_82A0C788(ctx, base);
	// lwz r11,1288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// lwz r10,1280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// lwz r9,1284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f8,f31
	cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// bge cr6,0x82a21acc
	if (!cr6.lt) goto loc_82A21ACC;
	// fcmpu cr6,f31,f27
	cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bgt cr6,0x82a21fa8
	if (cr6.gt) goto loc_82A21FA8;
loc_82A21ACC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x82a21a10
	if (cr6.lt) goto loc_82A21A10;
loc_82A21ADC:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x82a21afc
	if (!cr6.gt) goto loc_82A21AFC;
	// cmpwi cr6,r18,3
	cr6.compare<int32_t>(ctx.r18.s32, 3, xer);
	// ble cr6,0x82a21af4
	if (!cr6.gt) goto loc_82A21AF4;
	// cmpwi cr6,r18,16
	cr6.compare<int32_t>(ctx.r18.s32, 16, xer);
	// bne cr6,0x82a21afc
	if (!cr6.eq) goto loc_82A21AFC;
loc_82A21AF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a21b00
	goto loc_82A21B00;
loc_82A21AFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21B00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21d38
	if (cr6.eq) goto loc_82A21D38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 132);
	// bl 0x82a22ba8
	ctx.lr = 0x82A21B18;
	sub_82A22BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x82A21B28;
	sub_82A2B388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a21b3c
	if (cr6.lt) goto loc_82A21B3C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21b40
	if (cr6.lt) goto loc_82A21B40;
loc_82A21B3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21B40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21d38
	if (cr6.eq) goto loc_82A21D38;
	// cmpw cr6,r22,r3
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r3.s32, xer);
	// bne cr6,0x82a21d38
	if (!cr6.eq) goto loc_82A21D38;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82a21b64
	if (!cr6.lt) goto loc_82A21B64;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a21b8c
	goto loc_82A21B8C;
loc_82A21B64:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82a21b74
	if (!cr6.lt) goto loc_82A21B74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a21b8c
	goto loc_82A21B8C;
loc_82A21B74:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82A21B8C:
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x82a21d38
	if (!cr6.eq) goto loc_82A21D38;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x82a21ba8
	if (cr6.lt) goto loc_82A21BA8;
	// cmpwi cr6,r23,22
	cr6.compare<int32_t>(ctx.r23.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21bac
	if (cr6.lt) goto loc_82A21BAC;
loc_82A21BA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21BAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21d24
	if (cr6.eq) goto loc_82A21D24;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A21BC4;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// lbz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f29,f12
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f30,f9
	ctx.f30.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82a3cfa8
	ctx.lr = 0x82A21C0C;
	sub_82A3CFA8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a21c28
	if (cr6.eq) goto loc_82A21C28;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a21c50
	if (!cr6.eq) goto loc_82A21C50;
loc_82A21C28:
	// lbz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d2a8
	ctx.lr = 0x82A21C34;
	sub_82A3D2A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a21c54
	if (cr6.eq) goto loc_82A21C54;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a21c54
	if (cr6.eq) goto loc_82A21C54;
loc_82A21C50:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A21C54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,-4460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82a21c74
	if (cr6.eq) goto loc_82A21C74;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f30,f13
	cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// blt cr6,0x82a21fa8
	if (cr6.lt) goto loc_82A21FA8;
loc_82A21C74:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,-23848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x82a21cb8
	if (!cr6.lt) goto loc_82A21CB8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82a21cac
	if (cr6.eq) goto loc_82A21CAC;
	// fadds f0,f30,f27
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a21cb8
	if (!cr6.lt) goto loc_82A21CB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7bc
	ctx.lr = 0x82A21CA8;
	__restfpr_26(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82A21CAC:
	// fadds f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82a21fa8
	if (cr6.lt) goto loc_82A21FA8;
loc_82A21CB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82a21cd4
	if (!cr6.lt) goto loc_82A21CD4;
	// fadds f13,f30,f26
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x82a21fa8
	if (cr6.lt) goto loc_82A21FA8;
loc_82A21CD4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x82a21d24
	if (!cr6.eq) goto loc_82A21D24;
	// fadds f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82a21d24
	if (!cr6.lt) goto loc_82A21D24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ca560
	ctx.lr = 0x82A21CF4;
	sub_825CA560(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ca560
	ctx.lr = 0x82A21D04;
	sub_825CA560(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A21D10;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-23860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23860);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82a21fa8
	if (cr6.lt) goto loc_82A21FA8;
loc_82A21D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7bc
	ctx.lr = 0x82A21D34;
	__restfpr_26(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82A21D38:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A21D44;
	sub_82A0C710(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// bne cr6,0x82a21f84
	if (!cr6.eq) goto loc_82A21F84;
	// lbz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// beq cr6,0x82a21f84
	if (cr6.eq) goto loc_82A21F84;
	// cmpwi cr6,r11,85
	cr6.compare<int32_t>(ctx.r11.s32, 85, xer);
	// beq cr6,0x82a21f84
	if (cr6.eq) goto loc_82A21F84;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x82a21f84
	if (cr6.eq) goto loc_82A21F84;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x82a21d84
	if (cr6.lt) goto loc_82A21D84;
	// cmpwi cr6,r23,22
	cr6.compare<int32_t>(ctx.r23.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21d88
	if (cr6.lt) goto loc_82A21D88;
loc_82A21D84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21D88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a21dec
	if (!cr6.eq) goto loc_82A21DEC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x82a21da4
	if (cr6.eq) goto loc_82A21DA4;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// bne cr6,0x82a21dac
	if (!cr6.eq) goto loc_82A21DAC;
loc_82A21DA4:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A21DAC:
	// addis r10,r19,1
	ctx.r10.s64 = ctx.r19.s64 + 65536;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r10,r10,20120
	ctx.r10.s64 = ctx.r10.s64 + 20120;
	// bge cr6,0x82a21dc4
	if (!cr6.lt) goto loc_82A21DC4;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A21DC4:
	// lwz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x82a21ddc
	if (cr6.lt) goto loc_82A21DDC;
	// cmpwi cr6,r23,22
	cr6.compare<int32_t>(ctx.r23.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a21de0
	if (cr6.lt) goto loc_82A21DE0;
loc_82A21DDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A21DE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a21f84
	if (cr6.eq) goto loc_82A21F84;
loc_82A21DEC:
	// bl 0x83740868
	ctx.lr = 0x82A21DF0;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lfs f31,20048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20048);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f1,f31,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f28.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a0c788
	ctx.lr = 0x82A21E14;
	sub_82A0C788(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f9,1304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	ctx.f9.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f8,1308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1308);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	ctx.f7.f64 = double(temp.f32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lfs f6,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,1284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f1,f7,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fadds f30,f3,f6
	ctx.f30.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f29,f4,f1
	ctx.f29.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x83740868
	ctx.lr = 0x82A21E68;
	sub_83740868(ctx, base);
	// fmadds f13,f1,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f28.f64));
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a0c788
	ctx.lr = 0x82A21E84;
	sub_82A0C788(ctx, base);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lfs f8,1304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	ctx.f8.f64 = double(temp.f32);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// lfs f2,1280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,1312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	ctx.f6.f64 = double(temp.f32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f1,1288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f4,1308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1308);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f9,f9
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// fsubs f5,f13,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f9,1284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	ctx.f9.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f10,-23848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23848);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// fadds f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f5,f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsqrts f31,f5
	ctx.f31.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f31,f10
	cr6.compare(ctx.f31.f64, ctx.f10.f64);
	// fmadds f13,f1,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fsqrts f30,f13
	ctx.f30.f64 = double(float(sqrt(ctx.f13.f64)));
	// ble cr6,0x82a21f40
	if (!cr6.gt) goto loc_82A21F40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x82a21f84
	if (cr6.lt) goto loc_82A21F84;
loc_82A21F40:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825ca560
	ctx.lr = 0x82A21F4C;
	sub_825CA560(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x825ca560
	ctx.lr = 0x82A21F5C;
	sub_825CA560(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82A21F68;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-20096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a21d24
	if (!cr6.lt) goto loc_82A21D24;
	// fcmpu cr6,f30,f31
	cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82a21d24
	if (!cr6.lt) goto loc_82A21D24;
loc_82A21F84:
	// lbz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82a3d198
	ctx.lr = 0x82A21F90;
	sub_82A3D198(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a21fa8
	if (cr6.eq) goto loc_82A21FA8;
	// cmpwi cr6,r18,16
	cr6.compare<int32_t>(ctx.r18.s32, 16, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82a21fac
	if (cr6.eq) goto loc_82A21FAC;
loc_82A21FA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A21FAC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x831ce7bc
	ctx.lr = 0x82A21FB8;
	__restfpr_26(ctx, base);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A21FBC"))) PPC_WEAK_FUNC(sub_82A21FBC);
PPC_FUNC_IMPL(__imp__sub_82A21FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A21FC0"))) PPC_WEAK_FUNC(sub_82A21FC0);
PPC_FUNC_IMPL(__imp__sub_82A21FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A21FC8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// lwz r25,292(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// beq cr6,0x82a21ff8
	if (cr6.eq) goto loc_82A21FF8;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82a21ff8
	if (cr6.eq) goto loc_82A21FF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a22000
	goto loc_82A22000;
loc_82A21FF8:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A22000:
	// bl 0x82a0c710
	ctx.lr = 0x82A22004;
	sub_82A0C710(ctx, base);
	// lwz r11,4460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82a22018
	if (cr6.eq) goto loc_82A22018;
	// lwz r11,5356(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5356);
loc_82A22018:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a22160
	if (!cr6.eq) goto loc_82A22160;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,-26380
	ctx.r28.s64 = ctx.r28.s64 + -26380;
	// lfs f31,-6656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6656);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r27,-26424
	ctx.r27.s64 = ctx.r27.s64 + -26424;
loc_82A22040:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x82a22058
	if (cr6.eq) goto loc_82A22058;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// beq cr6,0x82a22058
	if (cr6.eq) goto loc_82A22058;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a22060
	goto loc_82A22060;
loc_82A22058:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A22060:
	// mulli r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 * 11;
	// add. r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x82a22078
	if (cr0.lt) goto loc_82A22078;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a2207c
	if (cr6.lt) goto loc_82A2207C;
loc_82A22078:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2207C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2209c
	if (cr6.eq) goto loc_82A2209C;
	// add r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a220a0
	goto loc_82A220A0;
loc_82A2209C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A220A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a2214c
	if (cr6.eq) goto loc_82A2214C;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a220bc
	if (!cr6.lt) goto loc_82A220BC;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82a220c0
	goto loc_82A220C0;
loc_82A220BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A220C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a194e8
	ctx.lr = 0x82A220CC;
	sub_82A194E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r31,43
	cr6.compare<int32_t>(ctx.r31.s32, 43, xer);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82a22170
	if (cr6.eq) goto loc_82A22170;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a194e8
	ctx.lr = 0x82A220EC;
	sub_82A194E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// bne cr6,0x82a2214c
	if (!cr6.eq) goto loc_82A2214C;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,8144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	// lwz r9,8148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	// lwz r8,8152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82a0c788
	ctx.lr = 0x82A22120;
	sub_82A0C788(ctx, base);
	// addi r7,r3,1280
	ctx.r7.s64 = ctx.r3.s64 + 1280;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f31
	cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// blt cr6,0x82a22194
	if (cr6.lt) goto loc_82A22194;
loc_82A2214C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x82a22040
	if (cr6.lt) goto loc_82A22040;
loc_82A22160:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82A22170:
	// bl 0x83740868
	ctx.lr = 0x82A22174;
	sub_83740868(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bge cr6,0x82a22160
	if (!cr6.lt) goto loc_82A22160;
loc_82A22194:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A221A4"))) PPC_WEAK_FUNC(sub_82A221A4);
PPC_FUNC_IMPL(__imp__sub_82A221A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A221A8"))) PPC_WEAK_FUNC(sub_82A221A8);
PPC_FUNC_IMPL(__imp__sub_82A221A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A221B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r11,4460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a222b0
	if (cr6.eq) goto loc_82A222B0;
	// lwz r11,5356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a222b0
	if (!cr6.eq) goto loc_82A222B0;
	// lwz r30,5756(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5756);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82a221f0
	if (cr6.lt) goto loc_82A221F0;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a221f4
	if (cr6.lt) goto loc_82A221F4;
loc_82A221F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A221F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a222b0
	if (cr6.eq) goto loc_82A222B0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82a22210
	if (!cr6.lt) goto loc_82A22210;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a22238
	goto loc_82A22238;
loc_82A22210:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x82a22220
	if (!cr6.lt) goto loc_82A22220;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a22238
	goto loc_82A22238;
loc_82A22220:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r31,r7,31
	ctx.r31.u64 = ctx.r7.u32 & 0x1;
loc_82A22238:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c710
	ctx.lr = 0x82A22240;
	sub_82A0C710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lbz r31,252(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// bl 0x82a0c738
	ctx.lr = 0x82A22254;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16608
	ctx.lr = 0x82A2225C;
	sub_82A16608(ctx, base);
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// lfs f13,5372(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5372);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lbz r11,50(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82a222a4
	if (!cr6.gt) goto loc_82A222A4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a222b0
	if (!cr6.eq) goto loc_82A222B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A222A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82a222b4
	if (cr6.eq) goto loc_82A222B4;
loc_82A222B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A222B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A222BC"))) PPC_WEAK_FUNC(sub_82A222BC);
PPC_FUNC_IMPL(__imp__sub_82A222BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A222C0"))) PPC_WEAK_FUNC(sub_82A222C0);
PPC_FUNC_IMPL(__imp__sub_82A222C0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,22
	cr6.compare<uint32_t>(ctx.r5.u32, 22, xer);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,12384
	ctx.r9.s64 = ctx.r9.s64 + 12384;
	// bge cr6,0x82a222f0
	if (!cr6.lt) goto loc_82A222F0;
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82a222f4
	goto loc_82A222F4;
loc_82A222F0:
	// addi r11,r9,1400
	ctx.r11.s64 = ctx.r9.s64 + 1400;
loc_82A222F4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a22304
	if (!cr6.lt) goto loc_82A22304;
	// mulli r10,r4,88
	ctx.r10.s64 = ctx.r4.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A22304:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a2231c
	if (cr6.lt) goto loc_82A2231C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a22320
	if (cr6.lt) goto loc_82A22320;
loc_82A2231C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A22320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a22374
	if (cr6.eq) goto loc_82A22374;
	// cmplwi cr6,r5,22
	cr6.compare<uint32_t>(ctx.r5.u32, 22, xer);
	// bge cr6,0x82a22358
	if (!cr6.lt) goto loc_82A22358;
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x825ca600
	ctx.lr = 0x82A22344;
	sub_825CA600(ctx, base);
	// fsqrts f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A22358:
	// addi r3,r9,1400
	ctx.r3.s64 = ctx.r9.s64 + 1400;
	// bl 0x825ca600
	ctx.lr = 0x82A22360;
	sub_825CA600(ctx, base);
	// fsqrts f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82A22374:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2238C"))) PPC_WEAK_FUNC(sub_82A2238C);
PPC_FUNC_IMPL(__imp__sub_82A2238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22390"))) PPC_WEAK_FUNC(sub_82A22390);
PPC_FUNC_IMPL(__imp__sub_82A22390) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x82A223A8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A223D0;
	sub_82A0C788(ctx, base);
	// addi r4,r3,1280
	ctx.r4.s64 = ctx.r3.s64 + 1280;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a1d6e8
	ctx.lr = 0x82A223F0;
	sub_82A1D6E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x82A223FC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22410"))) PPC_WEAK_FUNC(sub_82A22410);
PPC_FUNC_IMPL(__imp__sub_82A22410) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a22440
	if (cr6.lt) goto loc_82A22440;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a22444
	if (cr6.lt) goto loc_82A22444;
loc_82A22440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A22444:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a22458
	if (!cr6.eq) goto loc_82A22458;
loc_82A22450:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a22494
	goto loc_82A22494;
loc_82A22458:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A22464;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a22450
	if (cr6.eq) goto loc_82A22450;
	// lwz r11,1280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,1284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1284);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,1288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82a1e628
	ctx.lr = 0x82A22494;
	sub_82A1E628(ctx, base);
loc_82A22494:
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

__attribute__((alias("__imp__sub_82A224AC"))) PPC_WEAK_FUNC(sub_82A224AC);
PPC_FUNC_IMPL(__imp__sub_82A224AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A224B0"))) PPC_WEAK_FUNC(sub_82A224B0);
PPC_FUNC_IMPL(__imp__sub_82A224B0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x82A224C8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lfs f29,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f28,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x82A224F0;
	sub_82A0C788(ctx, base);
	// addi r4,r3,1280
	ctx.r4.s64 = ctx.r3.s64 + 1280;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a1d6e8
	ctx.lr = 0x82A22510;
	sub_82A1D6E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x82A2251C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22530"))) PPC_WEAK_FUNC(sub_82A22530);
PPC_FUNC_IMPL(__imp__sub_82A22530) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2253C"))) PPC_WEAK_FUNC(sub_82A2253C);
PPC_FUNC_IMPL(__imp__sub_82A2253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22540"))) PPC_WEAK_FUNC(sub_82A22540);
PPC_FUNC_IMPL(__imp__sub_82A22540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,37
	ctx.r10.s64 = 37;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A22550:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a22550
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A22550;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2255C"))) PPC_WEAK_FUNC(sub_82A2255C);
PPC_FUNC_IMPL(__imp__sub_82A2255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22560"))) PPC_WEAK_FUNC(sub_82A22560);
PPC_FUNC_IMPL(__imp__sub_82A22560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,37
	ctx.r10.s64 = 37;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A22570:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82a22570
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A22570;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2257C"))) PPC_WEAK_FUNC(sub_82A2257C);
PPC_FUNC_IMPL(__imp__sub_82A2257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22580"))) PPC_WEAK_FUNC(sub_82A22580);
PPC_FUNC_IMPL(__imp__sub_82A22580) {
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
	// bl 0x82a24050
	ctx.lr = 0x82A22598;
	sub_82A24050(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x82a24050
	ctx.lr = 0x82A225A0;
	sub_82A24050(ctx, base);
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

__attribute__((alias("__imp__sub_82A225B8"))) PPC_WEAK_FUNC(sub_82A225B8);
PPC_FUNC_IMPL(__imp__sub_82A225B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addi r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -9;
	// li r9,8
	ctx.r9.s64 = 8;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A225D0"))) PPC_WEAK_FUNC(sub_82A225D0);
PPC_FUNC_IMPL(__imp__sub_82A225D0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// addi r3,r3,6140
	ctx.r3.s64 = ctx.r3.s64 + 6140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A225DC"))) PPC_WEAK_FUNC(sub_82A225DC);
PPC_FUNC_IMPL(__imp__sub_82A225DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A225E0"))) PPC_WEAK_FUNC(sub_82A225E0);
PPC_FUNC_IMPL(__imp__sub_82A225E0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 524288;
	// addi r3,r3,24300
	ctx.r3.s64 = ctx.r3.s64 + 24300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A225EC"))) PPC_WEAK_FUNC(sub_82A225EC);
PPC_FUNC_IMPL(__imp__sub_82A225EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A225F0"))) PPC_WEAK_FUNC(sub_82A225F0);
PPC_FUNC_IMPL(__imp__sub_82A225F0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 524288;
	// addi r3,r3,24304
	ctx.r3.s64 = ctx.r3.s64 + 24304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A225FC"))) PPC_WEAK_FUNC(sub_82A225FC);
PPC_FUNC_IMPL(__imp__sub_82A225FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22600"))) PPC_WEAK_FUNC(sub_82A22600);
PPC_FUNC_IMPL(__imp__sub_82A22600) {
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
	// lwz r11,2720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2720, ctx.r11.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x82a22630
	if (!cr6.gt) goto loc_82A22630;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,2720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2720, ctx.r11.u32);
loc_82A22630:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2724, ctx.r11.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x82a2264c
	if (cr6.lt) goto loc_82A2264C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2724, ctx.r11.u32);
loc_82A2264C:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// li r5,340
	ctx.r5.s64 = 340;
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22660;
	sub_831CE980(ctx, base);
	// lwz r3,2724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
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

__attribute__((alias("__imp__sub_82A22678"))) PPC_WEAK_FUNC(sub_82A22678);
PPC_FUNC_IMPL(__imp__sub_82A22678) {
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
	// lwz r11,21760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21760);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21760, ctx.r11.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// ble cr6,0x82a226a8
	if (!cr6.gt) goto loc_82A226A8;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,21760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21760, ctx.r11.u32);
loc_82A226A8:
	// lwz r11,21764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21764);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21764, ctx.r11.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// blt cr6,0x82a226c4
	if (cr6.lt) goto loc_82A226C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21764, ctx.r11.u32);
loc_82A226C4:
	// lwz r11,21764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21764);
	// li r5,340
	ctx.r5.s64 = 340;
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A226D8;
	sub_831CE980(ctx, base);
	// lwz r3,21764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21764);
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

__attribute__((alias("__imp__sub_82A226F0"))) PPC_WEAK_FUNC(sub_82A226F0);
PPC_FUNC_IMPL(__imp__sub_82A226F0) {
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
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82a22720
	if (!cr6.gt) goto loc_82A22720;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
loc_82A22720:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x82a2273c
	if (cr6.lt) goto loc_82A2273C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
loc_82A2273C:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r5,340
	ctx.r5.s64 = 340;
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22750;
	sub_831CE980(ctx, base);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
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

__attribute__((alias("__imp__sub_82A22768"))) PPC_WEAK_FUNC(sub_82A22768);
PPC_FUNC_IMPL(__imp__sub_82A22768) {
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
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,1784
	ctx.r11.s64 = ctx.r11.s64 + 1784;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r10,99
	cr6.compare<int32_t>(ctx.r10.s32, 99, xer);
	// ble cr6,0x82a2279c
	if (!cr6.gt) goto loc_82A2279C;
	// li r10,99
	ctx.r10.s64 = 99;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A2279C:
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,1788
	ctx.r31.s64 = ctx.r31.s64 + 1788;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(ctx.r11.s32, 99, xer);
	// blt cr6,0x82a227c0
	if (cr6.lt) goto loc_82A227C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A227C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,680
	ctx.r5.s64 = 680;
	// mulli r11,r11,680
	ctx.r11.s64 = ctx.r11.s64 * 680;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A227D4;
	sub_831CE980(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_82A227EC"))) PPC_WEAK_FUNC(sub_82A227EC);
PPC_FUNC_IMPL(__imp__sub_82A227EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A227F0"))) PPC_WEAK_FUNC(sub_82A227F0);
PPC_FUNC_IMPL(__imp__sub_82A227F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,55
	cr6.compare<int32_t>(ctx.r4.s32, 55, xer);
	// bge cr6,0x82a22838
	if (!cr6.lt) goto loc_82A22838;
	// mulli r11,r4,348
	ctx.r11.s64 = ctx.r4.s64 * 348;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,46660
	ctx.r9.u64 = ctx.r10.u64 | 46660;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82a22838
	if (!cr6.gt) goto loc_82A22838;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-19216
	ctx.r11.s64 = ctx.r11.s64 + -19216;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a2282c
	if (!cr6.lt) goto loc_82A2282C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82A2282C:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82A22838:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22844"))) PPC_WEAK_FUNC(sub_82A22844);
PPC_FUNC_IMPL(__imp__sub_82A22844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22848"))) PPC_WEAK_FUNC(sub_82A22848);
PPC_FUNC_IMPL(__imp__sub_82A22848) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-76
	ctx.r10.s64 = ctx.r10.s64 + -76;
	// stw r11,516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 516, ctx.r11.u32);
	// stw r11,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22860"))) PPC_WEAK_FUNC(sub_82A22860);
PPC_FUNC_IMPL(__imp__sub_82A22860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,436
	ctx.r11.u64 = ctx.r11.u64 | 436;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22870"))) PPC_WEAK_FUNC(sub_82A22870);
PPC_FUNC_IMPL(__imp__sub_82A22870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,444
	ctx.r10.s64 = ctx.r10.s64 + 444;
	// addi r6,r6,436
	ctx.r6.s64 = ctx.r6.s64 + 436;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r5,516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 516, ctx.r5.u32);
	// stw r5,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r5.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r9,r9,-76
	ctx.r9.s64 = ctx.r9.s64 + -76;
loc_82A228A8:
	// lwz r11,516(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 516);
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a228b8
	if (!cr0.lt) goto loc_82A228B8;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_82A228B8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82a22910
	if (cr6.eq) goto loc_82A22910;
	// lwz r11,512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r11.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// ble cr6,0x82a228ec
	if (!cr6.gt) goto loc_82A228EC;
	// stw r4,512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 512, ctx.r4.u32);
loc_82A228EC:
	// lwz r11,516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 516, ctx.r11.u32);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// blt cr6,0x82a22904
	if (cr6.lt) goto loc_82A22904;
	// stw r5,516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 516, ctx.r5.u32);
loc_82A22904:
	// lwz r11,516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r8,r3,r10
	PPC_STORE_U64(ctx.r3.u32 + ctx.r10.u32, ctx.r8.u64);
loc_82A22910:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x82a228a8
	if (cr6.lt) goto loc_82A228A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22924"))) PPC_WEAK_FUNC(sub_82A22924);
PPC_FUNC_IMPL(__imp__sub_82A22924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22928"))) PPC_WEAK_FUNC(sub_82A22928);
PPC_FUNC_IMPL(__imp__sub_82A22928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A22930;
	__savegprlr_29(ctx, base);
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,956
	ctx.r6.s64 = ctx.r6.s64 + 956;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// ori r5,r11,444
	ctx.r5.u64 = ctx.r11.u64 | 444;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82a229d8
	if (!cr6.gt) goto loc_82A229D8;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// li r31,64
	ctx.r31.s64 = 64;
loc_82A22964:
	// lwz r10,516(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 516);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22974
	if (!cr0.lt) goto loc_82A22974;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
loc_82A22974:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// ble cr6,0x82a22994
	if (!cr6.gt) goto loc_82A22994;
	// stw r31,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r31.u32);
loc_82A22994:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// blt cr6,0x82a229ac
	if (cr6.lt) goto loc_82A229AC;
	// stw r4,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r4.u32);
loc_82A229AC:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82a22964
	if (cr6.lt) goto loc_82A22964;
loc_82A229D8:
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r4,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r4.u32);
	// stw r4,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r4.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A229E8"))) PPC_WEAK_FUNC(sub_82A229E8);
PPC_FUNC_IMPL(__imp__sub_82A229E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// blt cr6,0x82a229fc
	if (cr6.lt) goto loc_82A229FC;
loc_82A229F0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// blr 
	return;
loc_82A229FC:
	// mulli r11,r4,2728
	ctx.r11.s64 = ctx.r4.s64 * 2728;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,2720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2720);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// ble cr6,0x82a229f0
	if (!cr6.gt) goto loc_82A229F0;
	// lwz r10,2724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2724);
	// subf. r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22a20
	if (!cr0.lt) goto loc_82A22A20;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A22A20:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22A2C"))) PPC_WEAK_FUNC(sub_82A22A2C);
PPC_FUNC_IMPL(__imp__sub_82A22A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22A30"))) PPC_WEAK_FUNC(sub_82A22A30);
PPC_FUNC_IMPL(__imp__sub_82A22A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// blt cr6,0x82a22a40
	if (cr6.lt) goto loc_82A22A40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A22A40:
	// mulli r11,r4,2728
	ctx.r11.s64 = ctx.r4.s64 * 2728;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2720);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22A50"))) PPC_WEAK_FUNC(sub_82A22A50);
PPC_FUNC_IMPL(__imp__sub_82A22A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,6132
	ctx.r10.u64 = ctx.r11.u64 | 6132;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bgt cr6,0x82a22a70
	if (cr6.gt) goto loc_82A22A70;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// blr 
	return;
loc_82A22A70:
	// addis r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 196608;
	// addi r11,r11,4548
	ctx.r11.s64 = ctx.r11.s64 + 4548;
	// lwz r10,1588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// subf. r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22a88
	if (!cr0.lt) goto loc_82A22A88;
	// addi r10,r10,198
	ctx.r10.s64 = ctx.r10.s64 + 198;
loc_82A22A88:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r7,r10,1792
	ctx.r7.u64 = ctx.r10.u64 | 1792;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mulli r11,r8,680
	ctx.r11.s64 = ctx.r8.s64 * 680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// addi r3,r3,964
	ctx.r3.s64 = ctx.r3.s64 + 964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22ABC"))) PPC_WEAK_FUNC(sub_82A22ABC);
PPC_FUNC_IMPL(__imp__sub_82A22ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22AC0"))) PPC_WEAK_FUNC(sub_82A22AC0);
PPC_FUNC_IMPL(__imp__sub_82A22AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r11,r11,6132
	ctx.r11.u64 = ctx.r11.u64 | 6132;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22AD0"))) PPC_WEAK_FUNC(sub_82A22AD0);
PPC_FUNC_IMPL(__imp__sub_82A22AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,6132
	ctx.r10.u64 = ctx.r11.u64 | 6132;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bgt cr6,0x82a22af0
	if (cr6.gt) goto loc_82A22AF0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// blr 
	return;
loc_82A22AF0:
	// addis r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 196608;
	// addi r11,r11,4548
	ctx.r11.s64 = ctx.r11.s64 + 4548;
	// lwz r10,1588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// subf. r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22b08
	if (!cr0.lt) goto loc_82A22B08;
	// addi r10,r10,198
	ctx.r10.s64 = ctx.r10.s64 + 198;
loc_82A22B08:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r7,r10,1792
	ctx.r7.u64 = ctx.r10.u64 | 1792;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mulli r11,r8,680
	ctx.r11.s64 = ctx.r8.s64 * 680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// addi r3,r3,1304
	ctx.r3.s64 = ctx.r3.s64 + 1304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22B3C"))) PPC_WEAK_FUNC(sub_82A22B3C);
PPC_FUNC_IMPL(__imp__sub_82A22B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22B40"))) PPC_WEAK_FUNC(sub_82A22B40);
PPC_FUNC_IMPL(__imp__sub_82A22B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82a22b54
	if (!cr6.eq) goto loc_82A22B54;
	// addis r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 524288;
	// addi r3,r3,24212
	ctx.r3.s64 = ctx.r3.s64 + 24212;
	// blr 
	return;
loc_82A22B54:
	// lwz r11,2720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2720);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bgt cr6,0x82a22b6c
	if (cr6.gt) goto loc_82A22B6C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// b 0x82a22b84
	goto loc_82A22B84;
loc_82A22B6C:
	// lwz r11,2724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2724);
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a22b7c
	if (!cr0.lt) goto loc_82A22B7C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A22B7C:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A22B84:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// bne cr6,0x82a22b9c
	if (!cr6.eq) goto loc_82A22B9C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1632
	ctx.r3.s64 = ctx.r11.s64 + -1632;
	// blr 
	return;
loc_82A22B9C:
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22BA4"))) PPC_WEAK_FUNC(sub_82A22BA4);
PPC_FUNC_IMPL(__imp__sub_82A22BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22BA8"))) PPC_WEAK_FUNC(sub_82A22BA8);
PPC_FUNC_IMPL(__imp__sub_82A22BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 524288;
	// addi r10,r10,24212
	ctx.r10.s64 = ctx.r10.s64 + 24212;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a22bd4
	if (!cr6.gt) goto loc_82A22BD4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x82a22bcc
	if (!cr6.gt) goto loc_82A22BCC;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82a22bd4
	if (!cr6.eq) goto loc_82A22BD4;
loc_82A22BCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a22bd8
	goto loc_82A22BD8;
loc_82A22BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A22BD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a22bf8
	if (!cr6.eq) goto loc_82A22BF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82A22BF8:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22C0C"))) PPC_WEAK_FUNC(sub_82A22C0C);
PPC_FUNC_IMPL(__imp__sub_82A22C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22C10"))) PPC_WEAK_FUNC(sub_82A22C10);
PPC_FUNC_IMPL(__imp__sub_82A22C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,5448(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5448);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82a22c28
	if (cr6.gt) goto loc_82A22C28;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// b 0x82a22c44
	goto loc_82A22C44;
loc_82A22C28:
	// lwz r10,5452(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5452);
	// addi r11,r4,2728
	ctx.r11.s64 = ctx.r4.s64 + 2728;
	// subf. r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22c3c
	if (!cr0.lt) goto loc_82A22C3C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A22C3C:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A22C44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// bne cr6,0x82a22c64
	if (!cr6.eq) goto loc_82A22C64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82A22C64:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22C78"))) PPC_WEAK_FUNC(sub_82A22C78);
PPC_FUNC_IMPL(__imp__sub_82A22C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,5448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5448);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bgt cr6,0x82a22c90
	if (cr6.gt) goto loc_82A22C90;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// b 0x82a22cac
	goto loc_82A22CAC;
loc_82A22C90:
	// lwz r10,5452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5452);
	// addi r11,r3,2728
	ctx.r11.s64 = ctx.r3.s64 + 2728;
	// subf. r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22ca4
	if (!cr0.lt) goto loc_82A22CA4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A22CA4:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A22CAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22CC4"))) PPC_WEAK_FUNC(sub_82A22CC4);
PPC_FUNC_IMPL(__imp__sub_82A22CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22CC8"))) PPC_WEAK_FUNC(sub_82A22CC8);
PPC_FUNC_IMPL(__imp__sub_82A22CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,5448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5448);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// bgt cr6,0x82a22ce0
	if (cr6.gt) goto loc_82A22CE0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// b 0x82a22cfc
	goto loc_82A22CFC;
loc_82A22CE0:
	// lwz r10,5452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5452);
	// addi r11,r3,2728
	ctx.r11.s64 = ctx.r3.s64 + 2728;
	// subf. r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a22cf4
	if (!cr0.lt) goto loc_82A22CF4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A22CF4:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A22CFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A22D14"))) PPC_WEAK_FUNC(sub_82A22D14);
PPC_FUNC_IMPL(__imp__sub_82A22D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A22D18"))) PPC_WEAK_FUNC(sub_82A22D18);
PPC_FUNC_IMPL(__imp__sub_82A22D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A22D20;
	__savegprlr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82a3e330
	ctx.lr = 0x82A22D34;
	sub_82A3E330(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,-1536
	ctx.r24.s64 = ctx.r11.s64 + -1536;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82a22d58
	if (cr6.gt) goto loc_82A22D58;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a22d74
	goto loc_82A22D74;
loc_82A22D58:
	// lwz r10,16364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16364);
	// addi r11,r31,13640
	ctx.r11.s64 = ctx.r31.s64 + 13640;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a22d6c
	if (!cr6.lt) goto loc_82A22D6C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A22D6C:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A22D74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22D84;
	sub_831CE980(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r26,r11,-1632
	ctx.r26.s64 = ctx.r11.s64 + -1632;
	// ori r27,r10,24212
	ctx.r27.u64 = ctx.r10.u64 | 24212;
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82A22D98:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a22ff0
	if (!cr6.eq) goto loc_82A22FF0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82a22db4
	if (!cr6.eq) goto loc_82A22DB4;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a22df4
	goto loc_82A22DF4;
loc_82A22DB4:
	// lwz r11,2720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bgt cr6,0x82a22dc8
	if (cr6.gt) goto loc_82A22DC8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a22de0
	goto loc_82A22DE0;
loc_82A22DC8:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a22dd8
	if (!cr0.lt) goto loc_82A22DD8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A22DD8:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A22DE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a22df4
	if (cr6.eq) goto loc_82A22DF4;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A22DF4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a22e28
	if (!cr6.eq) goto loc_82A22E28;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a22e18
	if (cr6.eq) goto loc_82A22E18;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a22e28
	if (cr6.lt) goto loc_82A22E28;
loc_82A22E18:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22E24;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A22E28:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a22ff0
	if (!cr6.eq) goto loc_82A22FF0;
	// addic. r11,r28,1
	xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r11.s64 = ctx.r28.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a22e44
	if (!cr0.eq) goto loc_82A22E44;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a22e88
	goto loc_82A22E88;
loc_82A22E44:
	// lwz r10,2720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a22e58
	if (cr6.gt) goto loc_82A22E58;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a22e74
	goto loc_82A22E74;
loc_82A22E58:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a22e6c
	if (!cr0.lt) goto loc_82A22E6C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A22E6C:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A22E74:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a22e88
	if (cr6.eq) goto loc_82A22E88;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A22E88:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a22ebc
	if (!cr6.eq) goto loc_82A22EBC;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a22eac
	if (cr6.eq) goto loc_82A22EAC;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a22ebc
	if (cr6.lt) goto loc_82A22EBC;
loc_82A22EAC:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22EB8;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A22EBC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a22ff0
	if (!cr6.eq) goto loc_82A22FF0;
	// addic. r11,r28,2
	xer.ca = ctx.r28.u32 > 4294967293;
	ctx.r11.s64 = ctx.r28.s64 + 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a22ed8
	if (!cr0.eq) goto loc_82A22ED8;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a22f1c
	goto loc_82A22F1C;
loc_82A22ED8:
	// lwz r10,2720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a22eec
	if (cr6.gt) goto loc_82A22EEC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a22f08
	goto loc_82A22F08;
loc_82A22EEC:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r11,r10,-2
	xer.ca = ctx.r10.u32 > 1;
	ctx.r11.s64 = ctx.r10.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a22f00
	if (!cr0.lt) goto loc_82A22F00;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A22F00:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A22F08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a22f1c
	if (cr6.eq) goto loc_82A22F1C;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A22F1C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a22f50
	if (!cr6.eq) goto loc_82A22F50;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a22f40
	if (cr6.eq) goto loc_82A22F40;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a22f50
	if (cr6.lt) goto loc_82A22F50;
loc_82A22F40:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22F4C;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A22F50:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a22ff0
	if (!cr6.eq) goto loc_82A22FF0;
	// addic. r11,r28,3
	xer.ca = ctx.r28.u32 > 4294967292;
	ctx.r11.s64 = ctx.r28.s64 + 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a22f6c
	if (!cr0.eq) goto loc_82A22F6C;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a22fb0
	goto loc_82A22FB0;
loc_82A22F6C:
	// lwz r10,2720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a22f80
	if (cr6.gt) goto loc_82A22F80;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a22f9c
	goto loc_82A22F9C;
loc_82A22F80:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r11,r10,-3
	xer.ca = ctx.r10.u32 > 2;
	ctx.r11.s64 = ctx.r10.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a22f94
	if (!cr0.lt) goto loc_82A22F94;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A22F94:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A22F9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a22fb0
	if (cr6.eq) goto loc_82A22FB0;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A22FB0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a22fe4
	if (!cr6.eq) goto loc_82A22FE4;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a22fd4
	if (cr6.eq) goto loc_82A22FD4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a22fe4
	if (cr6.lt) goto loc_82A22FE4;
loc_82A22FD4:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A22FE0;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A22FE4:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// blt cr6,0x82a22d98
	if (cr6.lt) goto loc_82A22D98;
loc_82A22FF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82A22FF8;
	sub_83102DB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23004"))) PPC_WEAK_FUNC(sub_82A23004);
PPC_FUNC_IMPL(__imp__sub_82A23004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23008"))) PPC_WEAK_FUNC(sub_82A23008);
PPC_FUNC_IMPL(__imp__sub_82A23008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A23010;
	__savegprlr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82a3e330
	ctx.lr = 0x82A23024;
	sub_82A3E330(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,-1536
	ctx.r24.s64 = ctx.r11.s64 + -1536;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82a23048
	if (cr6.gt) goto loc_82A23048;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a23064
	goto loc_82A23064;
loc_82A23048:
	// lwz r10,16364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16364);
	// addi r11,r31,13640
	ctx.r11.s64 = ctx.r31.s64 + 13640;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a2305c
	if (!cr6.lt) goto loc_82A2305C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A2305C:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A23064:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A23074;
	sub_831CE980(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r26,r11,-1632
	ctx.r26.s64 = ctx.r11.s64 + -1632;
	// ori r27,r10,24212
	ctx.r27.u64 = ctx.r10.u64 | 24212;
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82A23088:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a23350
	if (!cr6.eq) goto loc_82A23350;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82a230a4
	if (!cr6.eq) goto loc_82A230A4;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a230e4
	goto loc_82A230E4;
loc_82A230A4:
	// lwz r11,2720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bgt cr6,0x82a230b8
	if (cr6.gt) goto loc_82A230B8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a230d0
	goto loc_82A230D0;
loc_82A230B8:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a230c8
	if (!cr0.lt) goto loc_82A230C8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A230C8:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A230D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a230e4
	if (cr6.eq) goto loc_82A230E4;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A230E4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a230fc
	if (!cr6.gt) goto loc_82A230FC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a23100
	if (!cr6.gt) goto loc_82A23100;
loc_82A230FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A23100:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23134
	if (cr6.eq) goto loc_82A23134;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23124
	if (cr6.eq) goto loc_82A23124;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a23134
	if (cr6.lt) goto loc_82A23134;
loc_82A23124:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A23130;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A23134:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a23350
	if (!cr6.eq) goto loc_82A23350;
	// addic. r11,r28,1
	xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r11.s64 = ctx.r28.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a23150
	if (!cr0.eq) goto loc_82A23150;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a23194
	goto loc_82A23194;
loc_82A23150:
	// lwz r10,2720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a23164
	if (cr6.gt) goto loc_82A23164;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a23180
	goto loc_82A23180;
loc_82A23164:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a23178
	if (!cr0.lt) goto loc_82A23178;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A23178:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A23180:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a23194
	if (cr6.eq) goto loc_82A23194;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A23194:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a231ac
	if (!cr6.gt) goto loc_82A231AC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a231b0
	if (!cr6.gt) goto loc_82A231B0;
loc_82A231AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A231B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a231e4
	if (cr6.eq) goto loc_82A231E4;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a231d4
	if (cr6.eq) goto loc_82A231D4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a231e4
	if (cr6.lt) goto loc_82A231E4;
loc_82A231D4:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A231E0;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A231E4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a23350
	if (!cr6.eq) goto loc_82A23350;
	// addic. r11,r28,2
	xer.ca = ctx.r28.u32 > 4294967293;
	ctx.r11.s64 = ctx.r28.s64 + 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a23200
	if (!cr0.eq) goto loc_82A23200;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a23244
	goto loc_82A23244;
loc_82A23200:
	// lwz r10,2720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a23214
	if (cr6.gt) goto loc_82A23214;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a23230
	goto loc_82A23230;
loc_82A23214:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r11,r10,-2
	xer.ca = ctx.r10.u32 > 1;
	ctx.r11.s64 = ctx.r10.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a23228
	if (!cr0.lt) goto loc_82A23228;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A23228:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A23230:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a23244
	if (cr6.eq) goto loc_82A23244;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A23244:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a2325c
	if (!cr6.gt) goto loc_82A2325C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a23260
	if (!cr6.gt) goto loc_82A23260;
loc_82A2325C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A23260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23294
	if (cr6.eq) goto loc_82A23294;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23284
	if (cr6.eq) goto loc_82A23284;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a23294
	if (cr6.lt) goto loc_82A23294;
loc_82A23284:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A23290;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A23294:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a23350
	if (!cr6.eq) goto loc_82A23350;
	// addic. r11,r28,3
	xer.ca = ctx.r28.u32 > 4294967292;
	ctx.r11.s64 = ctx.r28.s64 + 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82a232b0
	if (!cr0.eq) goto loc_82A232B0;
	// add r4,r31,r27
	ctx.r4.u64 = ctx.r31.u64 + ctx.r27.u64;
	// b 0x82a232f4
	goto loc_82A232F4;
loc_82A232B0:
	// lwz r10,2720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2720);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82a232c4
	if (cr6.gt) goto loc_82A232C4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a232e0
	goto loc_82A232E0;
loc_82A232C4:
	// lwz r11,2724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2724);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addic. r11,r10,-3
	xer.ca = ctx.r10.u32 > 2;
	ctx.r11.s64 = ctx.r10.s64 + -3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x82a232d8
	if (!cr0.lt) goto loc_82A232D8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82A232D8:
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A232E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82a232f4
	if (cr6.eq) goto loc_82A232F4;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
loc_82A232F4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82a2330c
	if (!cr6.gt) goto loc_82A2330C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a23310
	if (!cr6.gt) goto loc_82A23310;
loc_82A2330C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A23310:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23344
	if (cr6.eq) goto loc_82A23344;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23334
	if (cr6.eq) goto loc_82A23334;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82a23344
	if (cr6.lt) goto loc_82A23344;
loc_82A23334:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A23340;
	sub_831CE980(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A23344:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// blt cr6,0x82a23088
	if (cr6.lt) goto loc_82A23088;
loc_82A23350:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82A23358;
	sub_83102DB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23364"))) PPC_WEAK_FUNC(sub_82A23364);
PPC_FUNC_IMPL(__imp__sub_82A23364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23368"))) PPC_WEAK_FUNC(sub_82A23368);
PPC_FUNC_IMPL(__imp__sub_82A23368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// li r7,2
	ctx.r7.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A23370:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A23374:
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A23380:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u32);
	// bdnz 0x82a23380
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A23380;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x82a23374
	if (cr6.lt) goto loc_82A23374;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// bne 0x82a23370
	if (!cr0.eq) goto loc_82A23370;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A233B0"))) PPC_WEAK_FUNC(sub_82A233B0);
PPC_FUNC_IMPL(__imp__sub_82A233B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23404"))) PPC_WEAK_FUNC(sub_82A23404);
PPC_FUNC_IMPL(__imp__sub_82A23404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23408"))) PPC_WEAK_FUNC(sub_82A23408);
PPC_FUNC_IMPL(__imp__sub_82A23408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a23448
	if (!cr6.lt) goto loc_82A23448;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bge cr6,0x82a23448
	if (!cr6.lt) goto loc_82A23448;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bge cr6,0x82a23448
	if (!cr6.lt) goto loc_82A23448;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A23448:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23450"))) PPC_WEAK_FUNC(sub_82A23450);
PPC_FUNC_IMPL(__imp__sub_82A23450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A23458;
	__savegprlr_27(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r27,31
	cr6.compare<int32_t>(ctx.r27.s32, 31, xer);
	// bne cr6,0x82a235e0
	if (!cr6.eq) goto loc_82A235E0;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r3,r3,24552
	ctx.r3.s64 = ctx.r3.s64 + 24552;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a22678
	ctx.lr = 0x82A23480;
	sub_82A22678(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// sth r3,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r3.u16);
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// ble cr6,0x82a234a8
	if (!cr6.gt) goto loc_82A234A8;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
loc_82A234A8:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// blt cr6,0x82a234c4
	if (cr6.lt) goto loc_82A234C4;
	// stw r28,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r28.u32);
loc_82A234C4:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u64);
	// bl 0x82a24050
	ctx.lr = 0x82A234DC;
	sub_82A24050(ctx, base);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x82a24050
	ctx.lr = 0x82A234E4;
	sub_82A24050(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,340
	ctx.r5.s64 = 340;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A234F4;
	sub_831CE980(ctx, base);
	// lbz r7,328(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 328);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a23540
	if (cr6.eq) goto loc_82A23540;
	// lwz r11,10904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10904);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82a2351c
	if (cr6.gt) goto loc_82A2351C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82a23548
	goto loc_82A23548;
loc_82A2351C:
	// lwz r10,10908(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10908);
	// addi r11,r30,8184
	ctx.r11.s64 = ctx.r30.s64 + 8184;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a23530
	if (!cr6.lt) goto loc_82A23530;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A23530:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82a23548
	goto loc_82A23548;
loc_82A23540:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
loc_82A23548:
	// li r5,340
	ctx.r5.s64 = 340;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x831ce980
	ctx.lr = 0x82A23554;
	sub_831CE980(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r9,r11,1792
	ctx.r9.u64 = ctx.r11.u64 | 1792;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,964
	ctx.r3.s64 = ctx.r3.s64 + 964;
	// bl 0x82a22768
	ctx.lr = 0x82A2357C;
	sub_82A22768(ctx, base);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// sth r3,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r3.u16);
	// addi r11,r11,4548
	ctx.r11.s64 = ctx.r11.s64 + 4548;
	// lwz r10,1584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r10.u32);
	// cmpwi cr6,r10,198
	cr6.compare<int32_t>(ctx.r10.s32, 198, xer);
	// ble cr6,0x82a235a4
	if (!cr6.gt) goto loc_82A235A4;
	// li r10,198
	ctx.r10.s64 = 198;
	// stw r10,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r10.u32);
loc_82A235A4:
	// lwz r10,1588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1588, ctx.r10.u32);
	// cmpwi cr6,r10,198
	cr6.compare<int32_t>(ctx.r10.s32, 198, xer);
	// blt cr6,0x82a235bc
	if (cr6.lt) goto loc_82A235BC;
	// stw r28,1588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1588, ctx.r28.u32);
loc_82A235BC:
	// lwz r10,1588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u64);
	// bl 0x83102db0
	ctx.lr = 0x82A235D4;
	sub_83102DB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82A235DC;
	sub_83102DB0(ctx, base);
	// b 0x82a236d8
	goto loc_82A236D8;
loc_82A235E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14592
	ctx.r9.s64 = ctx.r11.s64 + 14592;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82a2360c
	if (!cr6.lt) goto loc_82A2360C;
	// mulli r11,r11,2728
	ctx.r11.s64 = ctx.r11.s64 * 2728;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a22600
	ctx.lr = 0x82A23608;
	sub_82A22600(ctx, base);
	// b 0x82a23614
	goto loc_82A23614;
loc_82A2360C:
	// addi r3,r30,24552
	ctx.r3.s64 = ctx.r30.s64 + 24552;
	// bl 0x82a22678
	ctx.lr = 0x82A23614;
	sub_82A22678(ctx, base);
loc_82A23614:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// sth r3,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r3.u16);
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// ble cr6,0x82a2363c
	if (!cr6.gt) goto loc_82A2363C;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
loc_82A2363C:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// blt cr6,0x82a23658
	if (cr6.lt) goto loc_82A23658;
	// stw r28,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r28.u32);
loc_82A23658:
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmpwi cr6,r27,7
	cr6.compare<int32_t>(ctx.r27.s32, 7, xer);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r11
	PPC_STORE_U64(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u64);
	// bne cr6,0x82a236d8
	if (!cr6.eq) goto loc_82A236D8;
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
	// addis r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 524288;
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r3,r3,24212
	ctx.r3.s64 = ctx.r3.s64 + 24212;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A23688;
	sub_831CE980(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a236b4
	if (cr6.lt) goto loc_82A236B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a236b4
	if (!cr6.lt) goto loc_82A236B4;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a236b4
	if (cr6.lt) goto loc_82A236B4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a236b8
	if (cr6.lt) goto loc_82A236B8;
loc_82A236B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A236B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a236d8
	if (cr6.eq) goto loc_82A236D8;
	// addis r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 524288;
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r3,r3,24300
	ctx.r3.s64 = ctx.r3.s64 + 24300;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A236D8;
	sub_831CE980(ctx, base);
loc_82A236D8:
	// mulli r11,r27,348
	ctx.r11.s64 = ctx.r27.s64 * 348;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-19216
	ctx.r3.s64 = ctx.r3.s64 + -19216;
	// bl 0x82a226f0
	ctx.lr = 0x82A236F0;
	sub_82A226F0(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A236F8"))) PPC_WEAK_FUNC(sub_82A236F8);
PPC_FUNC_IMPL(__imp__sub_82A236F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,436
	ctx.r10.u64 = ctx.r11.u64 | 436;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a2375c
	if (!cr6.lt) goto loc_82A2375C;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// subf. r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a23724
	if (!cr0.lt) goto loc_82A23724;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
loc_82A23724:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// bge cr6,0x82a23750
	if (!cr6.lt) goto loc_82A23750;
	// mulli r10,r10,2728
	ctx.r10.s64 = ctx.r10.s64 * 2728;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82A23750:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,24552
	ctx.r3.s64 = ctx.r11.s64 + 24552;
	// blr 
	return;
loc_82A2375C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23768"))) PPC_WEAK_FUNC(sub_82A23768);
PPC_FUNC_IMPL(__imp__sub_82A23768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r7,r10,436
	ctx.r7.u64 = ctx.r10.u64 | 436;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// lwzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82a23824
	if (!cr6.gt) goto loc_82A23824;
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ori r6,r11,65460
	ctx.r6.u64 = ctx.r11.u64 | 65460;
	// bge cr6,0x82a237f0
	if (!cr6.lt) goto loc_82A237F0;
loc_82A237A4:
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82a237b8
	if (!cr0.lt) goto loc_82A237B8;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
loc_82A237B8:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// mulli r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 * 340;
	// bge cr6,0x82a237e4
	if (!cr6.lt) goto loc_82A237E4;
	// mulli r10,r10,2728
	ctx.r10.s64 = ctx.r10.s64 * 2728;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82a237f4
	goto loc_82A237F4;
loc_82A237E4:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,24552
	ctx.r11.s64 = ctx.r11.s64 + 24552;
	// b 0x82a237f4
	goto loc_82A237F4;
loc_82A237F0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A237F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x82a2380c
	if (!cr6.eq) goto loc_82A2380C;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// beq cr6,0x82a23820
	if (cr6.eq) goto loc_82A23820;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82A2380C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x82a237a4
	if (cr6.lt) goto loc_82A237A4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A23820:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82A23824:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2382C"))) PPC_WEAK_FUNC(sub_82A2382C);
PPC_FUNC_IMPL(__imp__sub_82A2382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23830"))) PPC_WEAK_FUNC(sub_82A23830);
PPC_FUNC_IMPL(__imp__sub_82A23830) {
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
	// lwz r10,5452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5452);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,2728
	ctx.r11.s64 = ctx.r3.s64 + 2728;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a2385c
	if (!cr6.lt) goto loc_82A2385C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82A2385C:
	// mulli r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 * 340;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a23938
	if (cr6.eq) goto loc_82A23938;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23768
	ctx.lr = 0x82A23884;
	sub_82A23768(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a238b0
	if (cr6.lt) goto loc_82A238B0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a238b0
	if (!cr6.lt) goto loc_82A238B0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a238b0
	if (cr6.lt) goto loc_82A238B0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a238b4
	if (cr6.lt) goto loc_82A238B4;
loc_82A238B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A238B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23900
	if (cr6.eq) goto loc_82A23900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23768
	ctx.lr = 0x82A238D0;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a2392c
	if (cr6.eq) goto loc_82A2392C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82a238f0
	if (cr6.eq) goto loc_82A238F0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82a2392c
	if (!cr6.eq) goto loc_82A2392C;
loc_82A238F0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82a2392c
	goto loc_82A2392C;
loc_82A23900:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a2392c
	if (cr6.eq) goto loc_82A2392C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x82a3e400
	ctx.lr = 0x82A2391C;
	sub_82A3E400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a2392c
	if (!cr6.eq) goto loc_82A2392C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A2392C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A23938:
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

__attribute__((alias("__imp__sub_82A23950"))) PPC_WEAK_FUNC(sub_82A23950);
PPC_FUNC_IMPL(__imp__sub_82A23950) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A2396C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A23970:
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A2397C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r8.u32);
	// bdnz 0x82a2397c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A2397C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x82a23970
	if (cr6.lt) goto loc_82A23970;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// bge 0x82a2396c
	if (!cr0.lt) goto loc_82A2396C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a23368
	ctx.lr = 0x82A239B0;
	sub_82A23368(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A239C4"))) PPC_WEAK_FUNC(sub_82A239C4);
PPC_FUNC_IMPL(__imp__sub_82A239C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A239C8"))) PPC_WEAK_FUNC(sub_82A239C8);
PPC_FUNC_IMPL(__imp__sub_82A239C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A239D0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,8
	ctx.r29.s64 = 8;
loc_82A239E4:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,16464
	ctx.r6.s64 = ctx.r11.s64 + 16464;
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A239FC;
	sub_823FCA98(ctx, base);
	// li r5,2728
	ctx.r5.s64 = 2728;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23A0C;
	sub_831CDCF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,2728
	ctx.r30.s64 = ctx.r30.s64 + 2728;
	// bge 0x82a239e4
	if (!cr0.lt) goto loc_82A239E4;
	// addi r28,r31,24552
	ctx.r28.s64 = ctx.r31.s64 + 24552;
	// li r30,63
	ctx.r30.s64 = 63;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82A23A24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a24050
	ctx.lr = 0x82A23A2C;
	sub_82A24050(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,340
	ctx.r29.s64 = ctx.r29.s64 + 340;
	// bge 0x82a23a24
	if (!cr0.lt) goto loc_82A23A24;
	// li r5,21768
	ctx.r5.s64 = 21768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23A48;
	sub_831CDCF0(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r29,54
	ctx.r29.s64 = 54;
	// addi r30,r30,-19216
	ctx.r30.s64 = ctx.r30.s64 + -19216;
loc_82A23A54:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,16464
	ctx.r6.s64 = ctx.r11.s64 + 16464;
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A23A6C;
	sub_823FCA98(ctx, base);
	// li r5,348
	ctx.r5.s64 = 348;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23A7C;
	sub_831CDCF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,348
	ctx.r30.s64 = ctx.r30.s64 + 348;
	// bge 0x82a23a54
	if (!cr0.lt) goto loc_82A23A54;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,520
	ctx.r5.s64 = 520;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23A9C;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,520
	ctx.r5.s64 = 520;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,444
	ctx.r3.s64 = ctx.r3.s64 + 444;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23AB0;
	sub_831CDCF0(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r30,964
	ctx.r30.s64 = ctx.r30.s64 + 964;
	// ori r28,r11,1792
	ctx.r28.u64 = ctx.r11.u64 | 1792;
loc_82A23AC4:
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// li r5,99
	ctx.r5.s64 = 99;
	// addi r6,r11,9600
	ctx.r6.s64 = ctx.r11.s64 + 9600;
	// li r4,680
	ctx.r4.s64 = 680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x82A23ADC;
	sub_823FCA98(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23AEC;
	sub_831CDCF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bge 0x82a23ac4
	if (!cr0.lt) goto loc_82A23AC4;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// li r5,1592
	ctx.r5.s64 = 1592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4548
	ctx.r3.s64 = ctx.r3.s64 + 4548;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23B0C;
	sub_831CDCF0(ctx, base);
	// addis r26,r31,3
	ctx.r26.s64 = ctx.r31.s64 + 196608;
	// addi r26,r26,6140
	ctx.r26.s64 = ctx.r26.s64 + 6140;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291b380
	ctx.lr = 0x82A23B1C;
	sub_8291B380(ctx, base);
	// addis r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 524288;
	// addi r25,r25,24388
	ctx.r25.s64 = ctx.r25.s64 + 24388;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a23950
	ctx.lr = 0x82A23B2C;
	sub_82A23950(ctx, base);
	// addis r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 524288;
	// li r5,4552
	ctx.r5.s64 = 4552;
	// addi r29,r29,25412
	ctx.r29.s64 = ctx.r29.s64 + 25412;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23B44;
	sub_831CDCF0(ctx, base);
	// addis r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 524288;
	// li r27,255
	ctx.r27.s64 = 255;
	// addi r24,r24,29968
	ctx.r24.s64 = ctx.r24.s64 + 29968;
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r27,4532(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4532, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,4536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4536, ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23B68;
	sub_831CDCF0(ctx, base);
	// li r9,22
	ctx.r9.s64 = 22;
	// addis r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 524288;
	// addis r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 524288;
	// addi r28,r28,30060
	ctx.r28.s64 = ctx.r28.s64 + 30060;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,30072
	ctx.r10.s64 = ctx.r10.s64 + 30072;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82A23BA0:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stwu r30,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f31,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a23ba0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A23BA0;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// addi r3,r3,24212
	ctx.r3.s64 = ctx.r3.s64 + 24212;
	// bl 0x82a3e330
	ctx.lr = 0x82A23BD0;
	sub_82A3E330(ctx, base);
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// addi r3,r3,24300
	ctx.r3.s64 = ctx.r3.s64 + 24300;
	// bl 0x82a3e330
	ctx.lr = 0x82A23BDC;
	sub_82A3E330(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291ab40
	ctx.lr = 0x82A23BE4;
	sub_8291AB40(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1632
	ctx.r3.s64 = ctx.r11.s64 + -1632;
	// bl 0x82a3e330
	ctx.lr = 0x82A23BF0;
	sub_82A3E330(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a23368
	ctx.lr = 0x82A23BF8;
	sub_82A23368(ctx, base);
	// li r5,4552
	ctx.r5.s64 = 4552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A23C08;
	sub_831CDCF0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,92
	ctx.r5.s64 = 92;
	// stw r27,4532(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4532, ctx.r27.u32);
	// ori r9,r10,29964
	ctx.r9.u64 = ctx.r10.u64 | 29964;
	// stw r27,4536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4536, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82A23C2C;
	sub_831CDCF0(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// addi r11,r11,30068
	ctx.r11.s64 = ctx.r11.s64 + 30068;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A23C48:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f31,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a23c48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A23C48;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,30512
	ctx.r10.u64 = ctx.r11.u64 | 30512;
	// stbx r30,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23C7C"))) PPC_WEAK_FUNC(sub_82A23C7C);
PPC_FUNC_IMPL(__imp__sub_82A23C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23C80"))) PPC_WEAK_FUNC(sub_82A23C80);
PPC_FUNC_IMPL(__imp__sub_82A23C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A23C88;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82a3e330
	ctx.lr = 0x82A23C9C;
	sub_82A3E330(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82a22a30
	ctx.lr = 0x82A23CB4;
	sub_82A22A30(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a23d8c
	if (!cr6.gt) goto loc_82A23D8C;
	// lwz r22,212(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r25,208(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82A23CCC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82A23CD8;
	sub_82A22B40(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a23d8c
	if (cr6.eq) goto loc_82A23D8C;
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// beq cr6,0x82a23d8c
	if (cr6.eq) goto loc_82A23D8C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// bne cr6,0x82a23d0c
	if (!cr6.eq) goto loc_82A23D0C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a23d10
	if (cr6.eq) goto loc_82A23D10;
loc_82A23D0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A23D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// beq cr6,0x82a23d98
	if (cr6.eq) goto loc_82A23D98;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a23d54
	if (!cr6.eq) goto loc_82A23D54;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82a23d3c
	if (!cr6.gt) goto loc_82A23D3C;
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a23d40
	if (!cr6.gt) goto loc_82A23D40;
loc_82A23D3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A23D40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23d54
	if (cr6.eq) goto loc_82A23D54;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A23D54:
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// beq cr6,0x82a23de0
	if (cr6.eq) goto loc_82A23DE0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,6
	cr6.compare<int32_t>(ctx.r24.s32, 6, xer);
	// bge cr6,0x82a23d8c
	if (!cr6.lt) goto loc_82A23D8C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x82a23de0
	if (!cr6.lt) goto loc_82A23DE0;
	// bl 0x83740858
	ctx.lr = 0x82A23D78;
	sub_83740858(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82a23de0
	if (!cr6.lt) goto loc_82A23DE0;
loc_82A23D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A23D98:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a23de0
	if (cr6.eq) goto loc_82A23DE0;
	// cmpwi cr6,r9,14
	cr6.compare<int32_t>(ctx.r9.s32, 14, xer);
	// beq cr6,0x82a23d8c
	if (cr6.eq) goto loc_82A23D8C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a23dd0
	if (cr6.lt) goto loc_82A23DD0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82a23dd0
	if (!cr6.lt) goto loc_82A23DD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a23dd0
	if (cr6.lt) goto loc_82A23DD0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a23dd4
	if (cr6.lt) goto loc_82A23DD4;
loc_82A23DD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A23DD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a23df8
	if (!cr6.eq) goto loc_82A23DF8;
loc_82A23DE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x82a23ccc
	if (cr6.lt) goto loc_82A23CCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A23DF8:
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// bne cr6,0x82a23d8c
	if (!cr6.eq) goto loc_82A23D8C;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A23E10;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A23E1C"))) PPC_WEAK_FUNC(sub_82A23E1C);
PPC_FUNC_IMPL(__imp__sub_82A23E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23E20"))) PPC_WEAK_FUNC(sub_82A23E20);
PPC_FUNC_IMPL(__imp__sub_82A23E20) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82a29110
	ctx.lr = 0x82A23E54;
	sub_82A29110(ctx, base);
	// stb r3,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r3.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a29130
	ctx.lr = 0x82A23E60;
	sub_82A29130(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// beq cr6,0x82a23e78
	if (cr6.eq) goto loc_82A23E78;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_82A23E78:
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

__attribute__((alias("__imp__sub_82A23E94"))) PPC_WEAK_FUNC(sub_82A23E94);
PPC_FUNC_IMPL(__imp__sub_82A23E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23E98"))) PPC_WEAK_FUNC(sub_82A23E98);
PPC_FUNC_IMPL(__imp__sub_82A23E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a23ef8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EF8;
	// bdzf 4*cr6+eq,0x82a23edc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EDC;
	// bdzf 4*cr6+eq,0x82a23ef8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EF8;
	// bdzf 4*cr6+eq,0x82a23ee4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EE4;
	// bdzf 4*cr6+eq,0x82a23ef8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EF8;
	// bdzf 4*cr6+eq,0x82a23eec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EEC;
	// bdzf 4*cr6+eq,0x82a23ef8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A23EF8;
	// bne cr6,0x82a23ef4
	if (!cr6.eq) goto loc_82A23EF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A23EDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A23EE4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A23EEC:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82A23EF4:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82A23EF8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23EFC"))) PPC_WEAK_FUNC(sub_82A23EFC);
PPC_FUNC_IMPL(__imp__sub_82A23EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23F00"))) PPC_WEAK_FUNC(sub_82A23F00);
PPC_FUNC_IMPL(__imp__sub_82A23F00) {
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
	// addi r4,r4,68
	ctx.r4.s64 = ctx.r4.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a3fca8
	ctx.lr = 0x82A23F1C;
	sub_82A3FCA8(ctx, base);
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

__attribute__((alias("__imp__sub_82A23F34"))) PPC_WEAK_FUNC(sub_82A23F34);
PPC_FUNC_IMPL(__imp__sub_82A23F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23F38"))) PPC_WEAK_FUNC(sub_82A23F38);
PPC_FUNC_IMPL(__imp__sub_82A23F38) {
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
	// addi r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a3fca8
	ctx.lr = 0x82A23F54;
	sub_82A3FCA8(ctx, base);
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

__attribute__((alias("__imp__sub_82A23F6C"))) PPC_WEAK_FUNC(sub_82A23F6C);
PPC_FUNC_IMPL(__imp__sub_82A23F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23F70"))) PPC_WEAK_FUNC(sub_82A23F70);
PPC_FUNC_IMPL(__imp__sub_82A23F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23F84"))) PPC_WEAK_FUNC(sub_82A23F84);
PPC_FUNC_IMPL(__imp__sub_82A23F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23F88"))) PPC_WEAK_FUNC(sub_82A23F88);
PPC_FUNC_IMPL(__imp__sub_82A23F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a23fa0
	if (cr6.eq) goto loc_82A23FA0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A23FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23FA8"))) PPC_WEAK_FUNC(sub_82A23FA8);
PPC_FUNC_IMPL(__imp__sub_82A23FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
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

__attribute__((alias("__imp__sub_82A23FB8"))) PPC_WEAK_FUNC(sub_82A23FB8);
PPC_FUNC_IMPL(__imp__sub_82A23FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lbz r8,9(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A23FDC"))) PPC_WEAK_FUNC(sub_82A23FDC);
PPC_FUNC_IMPL(__imp__sub_82A23FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A23FE0"))) PPC_WEAK_FUNC(sub_82A23FE0);
PPC_FUNC_IMPL(__imp__sub_82A23FE0) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82a3faf0
	ctx.lr = 0x82A2401C;
	sub_82A3FAF0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82A2404C"))) PPC_WEAK_FUNC(sub_82A2404C);
PPC_FUNC_IMPL(__imp__sub_82A2404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24050"))) PPC_WEAK_FUNC(sub_82A24050);
PPC_FUNC_IMPL(__imp__sub_82A24050) {
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
	// li r5,340
	ctx.r5.s64 = 340;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A24070;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,55
	ctx.r9.s64 = 55;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82A240A8"))) PPC_WEAK_FUNC(sub_82A240A8);
PPC_FUNC_IMPL(__imp__sub_82A240A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A240B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r3,r11,5868
	ctx.r3.s64 = ctx.r11.s64 + 5868;
	// bl 0x82a49338
	ctx.lr = 0x82A240D8;
	sub_82A49338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24108
	if (cr6.eq) goto loc_82A24108;
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82a24108
	if (!cr6.eq) goto loc_82A24108;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A24108:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a241c8
	if (cr6.eq) goto loc_82A241C8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82a241bc
	if (cr6.eq) goto loc_82A241BC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a2415c
	if (cr6.eq) goto loc_82A2415C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a2413c
	if (cr6.lt) goto loc_82A2413C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a24140
	if (cr6.lt) goto loc_82A24140;
loc_82A2413C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A24140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a241c8
	if (cr6.eq) goto loc_82A241C8;
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// b 0x82a241c0
	goto loc_82A241C0;
loc_82A2415C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a24174
	if (cr6.lt) goto loc_82A24174;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82a24178
	if (cr6.lt) goto loc_82A24178;
loc_82A24174:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A24178:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a241c8
	if (cr6.eq) goto loc_82A241C8;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82a3faf0
	ctx.lr = 0x82A24198;
	sub_82A3FAF0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,15
	cr6.compare<int32_t>(ctx.r9.s32, 15, xer);
	// bne cr6,0x82a241c8
	if (!cr6.eq) goto loc_82A241C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// b 0x82a241c8
	goto loc_82A241C8;
loc_82A241BC:
	// addi r4,r29,972
	ctx.r4.s64 = ctx.r29.s64 + 972;
loc_82A241C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3faf0
	ctx.lr = 0x82A241C8;
	sub_82A3FAF0(ctx, base);
loc_82A241C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a2a558
	ctx.lr = 0x82A241E4;
	sub_82A2A558(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r9,12(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12, ctx.r9.u64);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a2a558
	ctx.lr = 0x82A241F8;
	sub_82A2A558(ctx, base);
	// std r3,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r3.u64);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lbz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r5,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r5.u8);
	// lbz r4,33(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// stb r4,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r4.u8);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stb r28,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24238"))) PPC_WEAK_FUNC(sub_82A24238);
PPC_FUNC_IMPL(__imp__sub_82A24238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82A24240;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,12(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,132(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r5,160
	ctx.r4.s64 = ctx.r5.s64 + 160;
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
	// lwz r7,96(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// stw r7,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// lwz r6,100(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r5,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r5.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82a3fa78
	ctx.lr = 0x82A242A4;
	sub_82A3FA78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// bl 0x82a3fa78
	ctx.lr = 0x82A242B0;
	sub_82A3FA78(ctx, base);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// addi r4,r29,8144
	ctx.r4.s64 = ctx.r29.s64 + 8144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a3faf0
	ctx.lr = 0x82A242C0;
	sub_82A3FAF0(ctx, base);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A242D4;
	sub_831CE980(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x831ce980
	ctx.lr = 0x82A242E4;
	sub_831CE980(ctx, base);
	// addi r26,r31,96
	ctx.r26.s64 = ctx.r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a3e330
	ctx.lr = 0x82A242F0;
	sub_82A3E330(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82A242F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A24308;
	sub_82A229E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x82619ec8
	ctx.lr = 0x82A24314;
	sub_82619EC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a24330
	if (!cr6.eq) goto loc_82A24330;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// blt cr6,0x82a242f8
	if (cr6.lt) goto loc_82A242F8;
	// b 0x82a2435c
	goto loc_82A2435C;
loc_82A24330:
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A24340;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a2435c
	if (cr6.eq) goto loc_82A2435C;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x82A2435C;
	sub_831CE980(ctx, base);
loc_82A2435C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3fb88
	ctx.lr = 0x82A24368;
	sub_82A3FB88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fb88
	ctx.lr = 0x82A24378;
	sub_82A3FB88(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f6,272(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a243b8
	if (!cr6.eq) goto loc_82A243B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r11.u8);
	// b 0x82a243bc
	goto loc_82A243BC;
loc_82A243B8:
	// stb r24,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r24.u8);
loc_82A243BC:
	// addi r30,r31,310
	ctx.r30.s64 = ctx.r31.s64 + 310;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3fa68
	ctx.lr = 0x82A243C8;
	sub_82A3FA68(ctx, base);
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stb r24,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r24.u8);
	// addi r10,r10,21776
	ctx.r10.s64 = ctx.r10.s64 + 21776;
	// ori r9,r11,21780
	ctx.r9.u64 = ctx.r11.u64 | 21780;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r6.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a24430
	if (cr6.eq) goto loc_82A24430;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a24414
	if (!cr6.eq) goto loc_82A24414;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a24418
	if (!cr6.eq) goto loc_82A24418;
loc_82A24414:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A24418:
	// stb r11,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r11.u8);
	// add r11,r25,r9
	ctx.r11.u64 = ctx.r25.u64 + ctx.r9.u64;
	// lhzx r8,r25,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r9.u32);
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r7,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r7.u16);
loc_82A24430:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,315(r31)
	PPC_STORE_U8(ctx.r31.u32 + 315, ctx.r7.u8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a24460
	if (cr6.eq) goto loc_82A24460;
	// lhzx r11,r25,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r9.u32);
	// add r8,r25,r9
	ctx.r8.u64 = ctx.r25.u64 + ctx.r9.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lhz r7,2(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// sth r7,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r7.u16);
loc_82A24460:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a2447c
	if (!cr6.eq) goto loc_82A2447C;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82a24480
	if (!cr6.eq) goto loc_82A24480;
loc_82A2447C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A24480:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,314(r31)
	PPC_STORE_U8(ctx.r31.u32 + 314, ctx.r11.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a244a4
	if (cr6.eq) goto loc_82A244A4;
	// lhzx r11,r25,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r9.u32);
	// add r10,r25,r9
	ctx.r10.u64 = ctx.r25.u64 + ctx.r9.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r9,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r9.u16);
loc_82A244A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A244AC"))) PPC_WEAK_FUNC(sub_82A244AC);
PPC_FUNC_IMPL(__imp__sub_82A244AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A244B0"))) PPC_WEAK_FUNC(sub_82A244B0);
PPC_FUNC_IMPL(__imp__sub_82A244B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A244B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x82a3faf0
	ctx.lr = 0x82A244EC;
	sub_82A3FAF0(ctx, base);
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,-3564(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r4,r11,8144
	ctx.r4.s64 = ctx.r11.s64 + 8144;
	// bl 0x82a3faf0
	ctx.lr = 0x82A24504;
	sub_82A3FAF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82a2a558
	ctx.lr = 0x82A24510;
	sub_82A2A558(ctx, base);
	// std r3,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r3.u64);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24524"))) PPC_WEAK_FUNC(sub_82A24524);
PPC_FUNC_IMPL(__imp__sub_82A24524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24528"))) PPC_WEAK_FUNC(sub_82A24528);
PPC_FUNC_IMPL(__imp__sub_82A24528) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24530"))) PPC_WEAK_FUNC(sub_82A24530);
PPC_FUNC_IMPL(__imp__sub_82A24530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24548"))) PPC_WEAK_FUNC(sub_82A24548);
PPC_FUNC_IMPL(__imp__sub_82A24548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24560"))) PPC_WEAK_FUNC(sub_82A24560);
PPC_FUNC_IMPL(__imp__sub_82A24560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24578"))) PPC_WEAK_FUNC(sub_82A24578);
PPC_FUNC_IMPL(__imp__sub_82A24578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24590"))) PPC_WEAK_FUNC(sub_82A24590);
PPC_FUNC_IMPL(__imp__sub_82A24590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A245AC"))) PPC_WEAK_FUNC(sub_82A245AC);
PPC_FUNC_IMPL(__imp__sub_82A245AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A245B0"))) PPC_WEAK_FUNC(sub_82A245B0);
PPC_FUNC_IMPL(__imp__sub_82A245B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A245CC"))) PPC_WEAK_FUNC(sub_82A245CC);
PPC_FUNC_IMPL(__imp__sub_82A245CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A245D0"))) PPC_WEAK_FUNC(sub_82A245D0);
PPC_FUNC_IMPL(__imp__sub_82A245D0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A245D8"))) PPC_WEAK_FUNC(sub_82A245D8);
PPC_FUNC_IMPL(__imp__sub_82A245D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24600"))) PPC_WEAK_FUNC(sub_82A24600);
PPC_FUNC_IMPL(__imp__sub_82A24600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24618"))) PPC_WEAK_FUNC(sub_82A24618);
PPC_FUNC_IMPL(__imp__sub_82A24618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24630"))) PPC_WEAK_FUNC(sub_82A24630);
PPC_FUNC_IMPL(__imp__sub_82A24630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a24668
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A24668;
	// bdzf 4*cr6+eq,0x82a24660
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A24660;
	// bdzf 4*cr6+eq,0x82a24660
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A24660;
	// bdzf 4*cr6+eq,0x82a24660
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A24660;
	// bdzf 4*cr6+eq,0x82a24668
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A24668;
	// bne cr6,0x82a24668
	if (!cr6.eq) goto loc_82A24668;
loc_82A24660:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A24668:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24670"))) PPC_WEAK_FUNC(sub_82A24670);
PPC_FUNC_IMPL(__imp__sub_82A24670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82A24678;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82a2497c
	if (cr6.eq) goto loc_82A2497C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a2497c
	if (cr6.eq) goto loc_82A2497C;
	// addi r27,r3,68
	ctx.r27.s64 = ctx.r3.s64 + 68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a14720
	ctx.lr = 0x82A246A8;
	sub_82A14720(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r23,r29,24
	ctx.r23.u64 = ctx.r29.u32 & 0xFF;
	// ori r25,r11,34548
	ctx.r25.u64 = ctx.r11.u64 | 34548;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r28,r31,r25
	ctx.r28.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r29,r26,14188
	ctx.r29.s64 = ctx.r26.s64 + 14188;
loc_82A246C0:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829175b0
	ctx.lr = 0x82A246D4;
	sub_829175B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a24794
	if (cr6.eq) goto loc_82A24794;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917940
	ctx.lr = 0x82A246F4;
	sub_82917940(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x82a24794
	if (cr6.gt) goto loc_82A24794;
	// lis r12,-32094
	ctx.r12.s64 = -2103312384;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18196
	ctx.r12.s64 = ctx.r12.s64 + 18196;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82A24748;
	case 1:
		goto loc_82A24750;
	case 2:
		goto loc_82A24758;
	case 3:
		goto loc_82A24758;
	case 4:
		goto loc_82A24760;
	case 5:
		goto loc_82A24768;
	case 6:
		goto loc_82A24770;
	case 7:
		goto loc_82A24770;
	case 8:
		goto loc_82A24778;
	case 9:
		goto loc_82A24780;
	case 10:
		goto loc_82A24780;
	case 11:
		goto loc_82A24788;
	case 12:
		goto loc_82A24790;
	default:
		return;
	}
	// lwz r21,18248(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18248);
	// lwz r21,18256(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18256);
	// lwz r21,18264(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18264);
	// lwz r21,18264(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18264);
	// lwz r21,18272(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18272);
	// lwz r21,18280(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18280);
	// lwz r21,18288(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18288);
	// lwz r21,18288(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18288);
	// lwz r21,18296(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18296);
	// lwz r21,18304(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18304);
	// lwz r21,18304(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18304);
	// lwz r21,18312(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18312);
	// lwz r21,18320(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18320);
loc_82A24748:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24750:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24758:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24760:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24768:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24770:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24778:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24780:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24788:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82a24794
	goto loc_82A24794;
loc_82A24790:
	// li r31,9
	ctx.r31.s64 = 9;
loc_82A24794:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a13be8
	ctx.lr = 0x82A247A4;
	sub_82A13BE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a13bf8
	ctx.lr = 0x82A247B4;
	sub_82A13BF8(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917740
	ctx.lr = 0x82A247C8;
	sub_82917740(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-124(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + -124, temp.u32);
	// stfs f0,-128(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -128, temp.u32);
	// stfs f12,-120(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + -120, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfsu f12,12(r29)
	ea = 12 + ctx.r29.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// blt cr6,0x82a246c0
	if (cr6.lt) goto loc_82A246C0;
	// addi r27,r26,31004
	ctx.r27.s64 = ctx.r26.s64 + 31004;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a14720
	ctx.lr = 0x82A2481C;
	sub_82A14720(ctx, base);
	// addis r29,r26,1
	ctx.r29.s64 = ctx.r26.s64 + 65536;
	// add r28,r24,r25
	ctx.r28.u64 = ctx.r24.u64 + ctx.r25.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r29,-20412
	ctx.r29.s64 = ctx.r29.s64 + -20412;
loc_82A2482C:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829175b0
	ctx.lr = 0x82A24840;
	sub_829175B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82a24900
	if (cr6.eq) goto loc_82A24900;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917940
	ctx.lr = 0x82A24860;
	sub_82917940(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x82a24900
	if (cr6.gt) goto loc_82A24900;
	// lis r12,-32094
	ctx.r12.s64 = -2103312384;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18560
	ctx.r12.s64 = ctx.r12.s64 + 18560;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_82A248B4;
	case 1:
		goto loc_82A248BC;
	case 2:
		goto loc_82A248C4;
	case 3:
		goto loc_82A248C4;
	case 4:
		goto loc_82A248CC;
	case 5:
		goto loc_82A248D4;
	case 6:
		goto loc_82A248DC;
	case 7:
		goto loc_82A248DC;
	case 8:
		goto loc_82A248E4;
	case 9:
		goto loc_82A248EC;
	case 10:
		goto loc_82A248EC;
	case 11:
		goto loc_82A248F4;
	case 12:
		goto loc_82A248FC;
	default:
		return;
	}
	// lwz r21,18612(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18612);
	// lwz r21,18620(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18620);
	// lwz r21,18628(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18628);
	// lwz r21,18628(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18628);
	// lwz r21,18636(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18636);
	// lwz r21,18644(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18644);
	// lwz r21,18652(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18652);
	// lwz r21,18652(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18652);
	// lwz r21,18660(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18660);
	// lwz r21,18668(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18668);
	// lwz r21,18668(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18668);
	// lwz r21,18676(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18676);
	// lwz r21,18684(r2)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18684);
loc_82A248B4:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248BC:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248C4:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248CC:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248D4:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248DC:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248E4:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248EC:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248F4:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82a24900
	goto loc_82A24900;
loc_82A248FC:
	// li r31,9
	ctx.r31.s64 = 9;
loc_82A24900:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a13be8
	ctx.lr = 0x82A24910;
	sub_82A13BE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a13bf8
	ctx.lr = 0x82A24920;
	sub_82A13BF8(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82917740
	ctx.lr = 0x82A24934;
	sub_82917740(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-124(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + -124, temp.u32);
	// stfs f0,-128(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -128, temp.u32);
	// stfs f12,-120(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + -120, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfsu f12,12(r29)
	ea = 12 + ctx.r29.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// blt cr6,0x82a2482c
	if (cr6.lt) goto loc_82A2482C;
loc_82A2497C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24984"))) PPC_WEAK_FUNC(sub_82A24984);
PPC_FUNC_IMPL(__imp__sub_82A24984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24988"))) PPC_WEAK_FUNC(sub_82A24988);
PPC_FUNC_IMPL(__imp__sub_82A24988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a249d4
	if (!cr6.eq) goto loc_82A249D4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a249e4
	if (cr6.eq) goto loc_82A249E4;
loc_82A2499C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A249A0:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a249fc
	if (!cr6.eq) goto loc_82A249FC;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82a24a40
	if (cr6.gt) goto loc_82A24A40;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a249ec
	if (cr6.eq) goto loc_82A249EC;
	// bdz 0x82a249f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A249F4;
	// bdz 0x82a24a30
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A24A30;
	// bdz 0x82a249f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A249F4;
	// b 0x82a249f4
	goto loc_82A249F4;
loc_82A249D4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a2499c
	if (!cr6.eq) goto loc_82A2499C;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x82a2499c
	if (!cr6.eq) goto loc_82A2499C;
loc_82A249E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a249a0
	goto loc_82A249A0;
loc_82A249EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82a24a34
	goto loc_82A24A34;
loc_82A249F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82a24a34
	goto loc_82A24A34;
loc_82A249FC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a24a40
	if (!cr6.eq) goto loc_82A24A40;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82a24a40
	if (cr6.gt) goto loc_82A24A40;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a24a30
	if (cr6.eq) goto loc_82A24A30;
	// bdz 0x82a24a28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A24A28;
	// bdz 0x82a24a30
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A24A30;
	// bdz 0x82a24a30
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A24A30;
	// b 0x82a24a30
	goto loc_82A24A30;
loc_82A24A28:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a24a34
	goto loc_82A24A34;
loc_82A24A30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A24A34:
	// li r10,11
	ctx.r10.s64 = 11;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82A24A40:
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82a24a58
	if (cr6.eq) goto loc_82A24A58;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A24A58:
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A24A68"))) PPC_WEAK_FUNC(sub_82A24A68);
PPC_FUNC_IMPL(__imp__sub_82A24A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A24A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// blt cr6,0x82a24be0
	if (cr6.lt) goto loc_82A24BE0;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bgt cr6,0x82a24be0
	if (cr6.gt) goto loc_82A24BE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a24ad0
	if (cr6.lt) goto loc_82A24AD0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A24AD0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x82a24aec
	if (!cr6.eq) goto loc_82A24AEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// b 0x82a24af4
	goto loc_82A24AF4;
loc_82A24AEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,31004
	ctx.r4.s64 = ctx.r29.s64 + 31004;
loc_82A24AF4:
	// bl 0x82a149f8
	ctx.lr = 0x82A24AF8;
	sub_82A149F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831ce980
	ctx.lr = 0x82A24B08;
	sub_831CE980(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// ble cr6,0x82a24b18
	if (!cr6.gt) goto loc_82A24B18;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82A24B18:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24b30
	if (cr6.eq) goto loc_82A24B30;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x82A24B30;
	sub_831CEE08(ctx, base);
loc_82A24B30:
	// li r9,25
	ctx.r9.s64 = 25;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82A24B3C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, xer);
	// beq cr6,0x82a24b5c
	if (cr6.eq) goto loc_82A24B5C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x82a24b3c
	if (cr6.lt) goto loc_82A24B3C;
	// b 0x82a24b60
	goto loc_82A24B60;
loc_82A24B5C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82A24B60:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x82a24b6c
	if (!cr6.eq) goto loc_82A24B6C;
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
loc_82A24B6C:
	// cmplwi cr6,r9,21
	cr6.compare<uint32_t>(ctx.r9.u32, 21, xer);
	// bgt cr6,0x82a24be0
	if (cr6.gt) goto loc_82A24BE0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lbz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// bne cr6,0x82a24ba8
	if (!cr6.eq) goto loc_82A24BA8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a24b9c
	if (!cr6.eq) goto loc_82A24B9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,15296
	ctx.r9.s64 = ctx.r11.s64 + 15296;
	// b 0x82a24bc4
	goto loc_82A24BC4;
loc_82A24B9C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,15400
	ctx.r9.s64 = ctx.r11.s64 + 15400;
	// b 0x82a24bc4
	goto loc_82A24BC4;
loc_82A24BA8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a24bbc
	if (!cr6.eq) goto loc_82A24BBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,15192
	ctx.r9.s64 = ctx.r11.s64 + 15192;
	// b 0x82a24bc4
	goto loc_82A24BC4;
loc_82A24BBC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,15192
	ctx.r9.s64 = ctx.r11.s64 + 15192;
loc_82A24BC4:
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// srawi r10,r28,31
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r28
	xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r28.s64 - ctx.r11.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A24BE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24BEC"))) PPC_WEAK_FUNC(sub_82A24BEC);
PPC_FUNC_IMPL(__imp__sub_82A24BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24BF0"))) PPC_WEAK_FUNC(sub_82A24BF0);
PPC_FUNC_IMPL(__imp__sub_82A24BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A24BF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// blt cr6,0x82a24f58
	if (cr6.lt) goto loc_82A24F58;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bgt cr6,0x82a24f58
	if (cr6.gt) goto loc_82A24F58;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a24c5c
	if (cr6.lt) goto loc_82A24C5C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A24C5C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bne cr6,0x82a24c78
	if (!cr6.eq) goto loc_82A24C78;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// b 0x82a24c80
	goto loc_82A24C80;
loc_82A24C78:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,31004
	ctx.r4.s64 = ctx.r30.s64 + 31004;
loc_82A24C80:
	// bl 0x82a149f8
	ctx.lr = 0x82A24C84;
	sub_82A149F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831ce980
	ctx.lr = 0x82A24C94;
	sub_831CE980(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// ble cr6,0x82a24ca4
	if (!cr6.gt) goto loc_82A24CA4;
	// li r11,11
	ctx.r11.s64 = 11;
loc_82A24CA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24cbc
	if (cr6.eq) goto loc_82A24CBC;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x82A24CBC;
	sub_831CEE08(ctx, base);
loc_82A24CBC:
	// li r9,25
	ctx.r9.s64 = 25;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82A24CC8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a24ce8
	if (cr6.eq) goto loc_82A24CE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x82a24cc8
	if (cr6.lt) goto loc_82A24CC8;
	// b 0x82a24cec
	goto loc_82A24CEC;
loc_82A24CE8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82A24CEC:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x82a24cf8
	if (!cr6.eq) goto loc_82A24CF8;
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
loc_82A24CF8:
	// cmplwi cr6,r9,21
	cr6.compare<uint32_t>(ctx.r9.u32, 21, xer);
	// bgt cr6,0x82a24f58
	if (cr6.gt) goto loc_82A24F58;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82a24d30
	if (!cr6.eq) goto loc_82A24D30;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a24d24
	if (!cr6.eq) goto loc_82A24D24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15296
	ctx.r11.s64 = ctx.r11.s64 + 15296;
	// b 0x82a24d4c
	goto loc_82A24D4C;
loc_82A24D24:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15400
	ctx.r11.s64 = ctx.r11.s64 + 15400;
	// b 0x82a24d4c
	goto loc_82A24D4C;
loc_82A24D30:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a24d44
	if (!cr6.eq) goto loc_82A24D44;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15192
	ctx.r11.s64 = ctx.r11.s64 + 15192;
	// b 0x82a24d4c
	goto loc_82A24D4C;
loc_82A24D44:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,15192
	ctx.r11.s64 = ctx.r11.s64 + 15192;
loc_82A24D4C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4460(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blt cr6,0x82a24f4c
	if (cr6.lt) goto loc_82A24F4C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bgt cr6,0x82a24f4c
	if (cr6.gt) goto loc_82A24F4C;
	// lwz r9,5756(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5756);
	// lwz r8,5760(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5760);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82a24d84
	if (cr6.lt) goto loc_82A24D84;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a24d88
	if (cr6.lt) goto loc_82A24D88;
loc_82A24D84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A24D88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24e1c
	if (cr6.eq) goto loc_82A24E1C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x82a24da4
	if (!cr6.lt) goto loc_82A24DA4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a24dcc
	goto loc_82A24DCC;
loc_82A24DA4:
	// cmpwi cr6,r9,11
	cr6.compare<int32_t>(ctx.r9.s32, 11, xer);
	// bge cr6,0x82a24db4
	if (!cr6.lt) goto loc_82A24DB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a24dcc
	goto loc_82A24DCC;
loc_82A24DB4:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// eqv r6,r11,r9
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
loc_82A24DCC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x82a24ddc
	if (!cr6.lt) goto loc_82A24DDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a24e04
	goto loc_82A24E04;
loc_82A24DDC:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a24dec
	if (!cr6.lt) goto loc_82A24DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a24e04
	goto loc_82A24E04;
loc_82A24DEC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r6,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r5,r11,r29
	ctx.r5.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
loc_82A24E04:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a24e1c
	if (!cr6.eq) goto loc_82A24E1C;
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 & ctx.r31.u64;
loc_82A24E1C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82a24e30
	if (cr6.lt) goto loc_82A24E30;
	// cmpwi cr6,r8,22
	cr6.compare<int32_t>(ctx.r8.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a24e34
	if (cr6.lt) goto loc_82A24E34;
loc_82A24E30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A24E34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24ec8
	if (cr6.eq) goto loc_82A24EC8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x82a24e50
	if (!cr6.lt) goto loc_82A24E50;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a24e78
	goto loc_82A24E78;
loc_82A24E50:
	// cmpwi cr6,r8,11
	cr6.compare<int32_t>(ctx.r8.s32, 11, xer);
	// bge cr6,0x82a24e60
	if (!cr6.lt) goto loc_82A24E60;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82a24e78
	goto loc_82A24E78;
loc_82A24E60:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// eqv r9,r11,r8
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
loc_82A24E78:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x82a24e88
	if (!cr6.lt) goto loc_82A24E88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a24eb0
	goto loc_82A24EB0;
loc_82A24E88:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82a24e98
	if (!cr6.lt) goto loc_82A24E98;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a24eb0
	goto loc_82A24EB0;
loc_82A24E98:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r6,r11,r29
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
loc_82A24EB0:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a24ec8
	if (!cr6.eq) goto loc_82A24EC8;
	// subf r11,r8,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r8.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_82A24EC8:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82a24ee8
	if (!cr6.eq) goto loc_82A24EE8;
	// li r11,11
	ctx.r11.s64 = 11;
	// srawi r10,r29,31
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a24f00
	goto loc_82A24F00;
loc_82A24EE8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82a24efc
	if (cr6.lt) goto loc_82A24EFC;
	// cmpwi cr6,r29,10
	cr6.compare<int32_t>(ctx.r29.s32, 10, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a24f00
	if (!cr6.gt) goto loc_82A24F00;
loc_82A24EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A24F00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24f4c
	if (cr6.eq) goto loc_82A24F4C;
	// lwz r11,5356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5356);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82a24f4c
	if (!cr6.eq) goto loc_82A24F4C;
	// lbz r11,5120(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a24f4c
	if (cr6.eq) goto loc_82A24F4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1a9e8
	ctx.lr = 0x82A24F34;
	sub_82A1A9E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82a24f4c
	if (cr6.eq) goto loc_82A24F4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82A24F4C:
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82a24f5c
	if (!cr6.gt) goto loc_82A24F5C;
loc_82A24F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A24F5C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A24F64"))) PPC_WEAK_FUNC(sub_82A24F64);
PPC_FUNC_IMPL(__imp__sub_82A24F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A24F68"))) PPC_WEAK_FUNC(sub_82A24F68);
PPC_FUNC_IMPL(__imp__sub_82A24F68) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subfe r10,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82a25008
	if (!cr6.eq) goto loc_82A25008;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82a25038
	if (cr6.gt) goto loc_82A25038;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a25030
	if (cr6.eq) goto loc_82A25030;
	// bdz 0x82a25030
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A25030;
	// bdz 0x82a25030
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A25030;
	// bdz 0x82a25030
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A25030;
	// b 0x82a25030
	goto loc_82A25030;
loc_82A25008:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82a25038
	if (!cr6.eq) goto loc_82A25038;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82a25038
	if (cr6.gt) goto loc_82A25038;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a25030
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A25030;
	// bdzf 4*cr6+eq,0x82a25030
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A25030;
	// bdzf 4*cr6+eq,0x82a25030
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A25030;
	// bne cr6,0x82a25030
	if (!cr6.eq) goto loc_82A25030;
loc_82A25030:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82A25038:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a25078
	if (!cr6.eq) goto loc_82A25078;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x82a250a8
	if (cr6.gt) goto loc_82A250A8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82a250a8
	if (cr6.eq) goto loc_82A250A8;
	// bdz 0x82a250a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A250A8;
	// bdz 0x82a250a0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A250A0;
	// bdz 0x82a250a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82A250A8;
	// b 0x82a250a8
	goto loc_82A250A8;
loc_82A25078:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82a250a8
	if (!cr6.eq) goto loc_82A250A8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x82a250a8
	if (cr6.gt) goto loc_82A250A8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82a250a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A250A8;
	// bdzf 4*cr6+eq,0x82a250a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A250A0;
	// bdzf 4*cr6+eq,0x82a250a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82A250A0;
	// bne cr6,0x82a250a0
	if (!cr6.eq) goto loc_82A250A0;
loc_82A250A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82A250A8:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82a14720
	ctx.lr = 0x82A250B0;
	sub_82A14720(ctx, base);
	// addi r3,r31,31004
	ctx.r3.s64 = ctx.r31.s64 + 31004;
	// bl 0x82a14720
	ctx.lr = 0x82A250B8;
	sub_82A14720(ctx, base);
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

__attribute__((alias("__imp__sub_82A250CC"))) PPC_WEAK_FUNC(sub_82A250CC);
PPC_FUNC_IMPL(__imp__sub_82A250CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A250D0"))) PPC_WEAK_FUNC(sub_82A250D0);
PPC_FUNC_IMPL(__imp__sub_82A250D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a250e8
	if (cr6.lt) goto loc_82A250E8;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bgt cr6,0x82a250e8
	if (cr6.gt) goto loc_82A250E8;
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x82a250fc
	goto loc_82A250FC;
loc_82A250E8:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a25100
	if (cr6.lt) goto loc_82A25100;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bgt cr6,0x82a25100
	if (cr6.gt) goto loc_82A25100;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_82A250FC:
	// b 0x82a24a68
	sub_82A24A68(ctx, base);
	return;
loc_82A25100:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25108"))) PPC_WEAK_FUNC(sub_82A25108);
PPC_FUNC_IMPL(__imp__sub_82A25108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a25124
	if (cr6.lt) goto loc_82A25124;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bgt cr6,0x82a25124
	if (cr6.gt) goto loc_82A25124;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x82a25138
	goto loc_82A25138;
loc_82A25124:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a25140
	if (cr6.lt) goto loc_82A25140;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// bgt cr6,0x82a25140
	if (cr6.gt) goto loc_82A25140;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_82A25138:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82a24bf0
	sub_82A24BF0(ctx, base);
	return;
loc_82A25140:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25148"))) PPC_WEAK_FUNC(sub_82A25148);
PPC_FUNC_IMPL(__imp__sub_82A25148) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// bl 0x82a157b0
	ctx.lr = 0x82A25184;
	sub_82A157B0(ctx, base);
	// addi r3,r31,31004
	ctx.r3.s64 = ctx.r31.s64 + 31004;
	// bl 0x82a157b0
	ctx.lr = 0x82A2518C;
	sub_82A157B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a24f68
	ctx.lr = 0x82A25194;
	sub_82A24F68(ctx, base);
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

__attribute__((alias("__imp__sub_82A251AC"))) PPC_WEAK_FUNC(sub_82A251AC);
PPC_FUNC_IMPL(__imp__sub_82A251AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A251B0"))) PPC_WEAK_FUNC(sub_82A251B0);
PPC_FUNC_IMPL(__imp__sub_82A251B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A251B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,7068
	ctx.r10.s64 = ctx.r11.s64 + 7068;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x828c6d28
	ctx.lr = 0x82A251F0;
	sub_828C6D28(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a25210
	if (!cr6.eq) goto loc_82A25210;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r11.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq 0x82a25270
	if (cr0.eq) goto loc_82A25270;
loc_82A25210:
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,21212(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-7352(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmsubs f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f7.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
loc_82A25270:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-16652
	ctx.r10.s64 = ctx.r11.s64 + -16652;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x825c3358
	ctx.lr = 0x82A25284;
	sub_825C3358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A25290"))) PPC_WEAK_FUNC(sub_82A25290);
PPC_FUNC_IMPL(__imp__sub_82A25290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stb r4,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r4.u8);
	// sth r31,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r31.u16);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2532C"))) PPC_WEAK_FUNC(sub_82A2532C);
PPC_FUNC_IMPL(__imp__sub_82A2532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A25330"))) PPC_WEAK_FUNC(sub_82A25330);
PPC_FUNC_IMPL(__imp__sub_82A25330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r10,r6,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r8,r10,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r31,r10,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stb r4,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r4.u8);
	// sth r6,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r6.u16);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A253D8"))) PPC_WEAK_FUNC(sub_82A253D8);
PPC_FUNC_IMPL(__imp__sub_82A253D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4808(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r6,r5,4824
	ctx.r6.s64 = ctx.r5.s64 + 4824;
	// lwz r9,4808(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r30,r8,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r8,4808(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4808);
	// rlwimi r30,r8,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// ld r8,4760(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// lhz r8,4824(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4824);
	// sth r8,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r8.u16);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// ld r8,4760(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lhz r8,4824(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4824);
	// sth r8,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r8.u16);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// ld r8,4760(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r8,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// ld r8,4760(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r8,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r8.u64);
loc_82A254BC:
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r7,4760(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// std r7,92(r8)
	PPC_STORE_U64(ctx.r8.u32 + 92, ctx.r7.u64);
	// stw r6,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r6.u32);
	// blt cr6,0x82a254bc
	if (cr6.lt) goto loc_82A254BC;
	// ld r9,4760(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// stb r10,486(r3)
	PPC_STORE_U8(ctx.r3.u32 + 486, ctx.r10.u8);
	// stw r6,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r6.u32);
	// stb r10,484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 484, ctx.r10.u8);
	// stb r10,485(r3)
	PPC_STORE_U8(ctx.r3.u32 + 485, ctx.r10.u8);
	// std r9,476(r3)
	PPC_STORE_U64(ctx.r3.u32 + 476, ctx.r9.u64);
	// ld r9,4760(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r9,488(r3)
	PPC_STORE_U64(ctx.r3.u32 + 488, ctx.r9.u64);
	// ld r9,4760(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r9,496(r3)
	PPC_STORE_U64(ctx.r3.u32 + 496, ctx.r9.u64);
	// ld r9,4760(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r9,504(r3)
	PPC_STORE_U64(ctx.r3.u32 + 504, ctx.r9.u64);
	// ld r9,4760(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r9,512(r3)
	PPC_STORE_U64(ctx.r3.u32 + 512, ctx.r9.u64);
	// ld r9,4760(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// std r9,520(r3)
	PPC_STORE_U64(ctx.r3.u32 + 520, ctx.r9.u64);
	// ld r11,4760(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4760);
	// stw r10,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r10.u32);
	// std r11,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25540"))) PPC_WEAK_FUNC(sub_82A25540);
PPC_FUNC_IMPL(__imp__sub_82A25540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-31778
	ctx.r6.s64 = -2082603008;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// li r4,255
	ctx.r4.s64 = 255;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r30,r10,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r10,4808(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r30,r10,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stb r31,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r31.u8);
	// sth r7,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r7.u16);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// ld r10,4760(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 4760);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// std r10,52(r3)
	PPC_STORE_U64(ctx.r3.u32 + 52, ctx.r10.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A25600"))) PPC_WEAK_FUNC(sub_82A25600);
PPC_FUNC_IMPL(__imp__sub_82A25600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A25608;
	__savegprlr_28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r30,3
	ctx.r30.s64 = 3;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// li r31,255
	ctx.r31.s64 = 255;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
loc_82A25638:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,4808(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r29,r6,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r6,4808(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r28,r6,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r6,4808(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r29,r6,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r6,4808(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r28,r6,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r4,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r4.u8);
	// sth r7,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r7.u16);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// ld r6,4760(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4760);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// std r6,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r6.u64);
	// blt cr6,0x82a25638
	if (cr6.lt) goto loc_82A25638;
	// lwz r8,740(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r11,r8,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r11,r3,724
	ctx.r11.s64 = ctx.r3.s64 + 724;
	// stw r6,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r6.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r6.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r8,744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r8.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r8.u32);
	// stfs f0,728(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 728, temp.u32);
	// stw r10,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r10.u32);
	// stw r10,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r10.u32);
	// stw r10,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r10.u32);
	// stw r10,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r10.u32);
	// stw r10,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r10.u32);
	// stb r10,724(r3)
	PPC_STORE_U8(ctx.r3.u32 + 724, ctx.r10.u8);
	// stw r10,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r10.u32);
	// stb r4,770(r3)
	PPC_STORE_U8(ctx.r3.u32 + 770, ctx.r4.u8);
	// stw r30,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r30.u32);
	// stw r31,736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 736, ctx.r31.u32);
	// sth r7,768(r3)
	PPC_STORE_U16(ctx.r3.u32 + 768, ctx.r7.u16);
	// ld r11,4760(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4760);
	// stw r10,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, ctx.r10.u32);
	// stb r10,788(r3)
	PPC_STORE_U8(ctx.r3.u32 + 788, ctx.r10.u8);
	// stb r10,789(r3)
	PPC_STORE_U8(ctx.r3.u32 + 789, ctx.r10.u8);
	// stw r10,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r10.u32);
	// std r11,776(r3)
	PPC_STORE_U64(ctx.r3.u32 + 776, ctx.r11.u64);
	// stw r10,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r10.u32);
	// stw r10,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, ctx.r10.u32);
	// stw r10,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r10.u32);
	// stb r10,808(r3)
	PPC_STORE_U8(ctx.r3.u32 + 808, ctx.r10.u8);
	// stb r10,809(r3)
	PPC_STORE_U8(ctx.r3.u32 + 809, ctx.r10.u8);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r6,812(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 812);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r6.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, ctx.r5.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// lwz r4,816(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// lwz r11,4808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4808);
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r10.u32);
	// sth r7,820(r3)
	PPC_STORE_U16(ctx.r3.u32 + 820, ctx.r7.u16);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A257C8"))) PPC_WEAK_FUNC(sub_82A257C8);
PPC_FUNC_IMPL(__imp__sub_82A257C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r9,55
	ctx.r9.s64 = 55;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// addi r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 + 5;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
loc_82A257F8:
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A25804:
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a25804
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A25804;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// bne 0x82a257f8
	if (!cr0.eq) goto loc_82A257F8;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

