#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_835D8898"))) PPC_WEAK_FUNC(sub_835D8898);
PPC_FUNC_IMPL(__imp__sub_835D8898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835D88A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r31.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r31,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r31.u32);
	// lis r3,-32218
	ctx.r3.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r31.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r31,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r31.u32);
	// lis r28,528
	ctx.r28.s64 = 34603008;
	// stw r31,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r31.u32);
	// lis r27,529
	ctx.r27.s64 = 34668544;
	// stw r31,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r31.u32);
	// ori r4,r11,48000
	ctx.r4.u64 = ctx.r11.u64 | 48000;
	// stw r31,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r31.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r31,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r31.u32);
	// stb r8,180(r29)
	PPC_STORE_U8(ctx.r29.u32 + 180, ctx.r8.u8);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r31,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r31.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// std r31,192(r29)
	PPC_STORE_U64(ctx.r29.u32 + 192, ctx.r31.u64);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r31,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r31.u32);
	// li r25,1024
	ctx.r25.s64 = 1024;
	// stw r9,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r9.u32);
	// ori r28,r28,13312
	ctx.r28.u64 = ctx.r28.u64 | 13312;
	// stb r10,208(r29)
	PPC_STORE_U8(ctx.r29.u32 + 208, ctx.r10.u8);
	// ori r27,r27,768
	ctx.r27.u64 = ctx.r27.u64 | 768;
	// stw r31,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r31.u32);
	// lfs f0,24504(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r31.u32);
	// lfs f13,16948(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16948);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r31.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r31.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,48(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f0,84(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// stw r4,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r4.u32);
	// stfs f0,112(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// stw r4,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r4.u32);
	// stw r31,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r31.u32);
	// stw r31,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r31.u32);
	// stw r31,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r31.u32);
	// stw r31,240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 240, ctx.r31.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// stw r6,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r6.u32);
	// stw r6,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r6.u32);
	// stw r31,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r31.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// stw r31,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r31.u32);
	// stw r31,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r31.u32);
	// stw r31,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r31.u32);
	// stw r28,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r28.u32);
	// stw r27,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r27.u32);
	// stw r9,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r9.u32);
	// stw r7,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r7.u32);
	// stw r10,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r10.u32);
	// stw r31,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r31.u32);
	// stw r9,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r9.u32);
	// stw r10,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r10.u32);
	// stw r11,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r11.u32);
	// stw r8,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r8.u32);
	// stw r7,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r7.u32);
	// stw r4,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r4.u32);
	// stw r8,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r8.u32);
	// stw r31,244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 244, ctx.r31.u32);
	// stw r9,248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 248, ctx.r9.u32);
	// bl 0x83a89f60
	ctx.lr = 0x835D89F4;
	sub_83A89F60(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 252, ctx.r11.u32);
	// stw r31,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r31.u32);
	// stw r30,264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 264, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8A14"))) PPC_WEAK_FUNC(sub_835D8A14);
PPC_FUNC_IMPL(__imp__sub_835D8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D8A18"))) PPC_WEAK_FUNC(sub_835D8A18);
PPC_FUNC_IMPL(__imp__sub_835D8A18) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,16952
	ctx.r9.s64 = ctx.r11.s64 + 16952;
	// stw r30,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r30.u32);
	// stw r30,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r30.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// stb r30,240(r3)
	PPC_STORE_U8(ctx.r3.u32 + 240, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x835D8A6C;
	sub_831CDCF0(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D8A7C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d8a7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D8A7C;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D8A94:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d8a94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D8A94;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_835D8AD0"))) PPC_WEAK_FUNC(sub_835D8AD0);
PPC_FUNC_IMPL(__imp__sub_835D8AD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x83a8a378
	sub_83A8A378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8AD8"))) PPC_WEAK_FUNC(sub_835D8AD8);
PPC_FUNC_IMPL(__imp__sub_835D8AD8) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,16952
	ctx.r9.s64 = ctx.r11.s64 + 16952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x835d8b0c
	if (cr6.eq) goto loc_835D8B0C;
	// bl 0x82416268
	ctx.lr = 0x835D8B08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835D8B0C:
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

__attribute__((alias("__imp__sub_835D8B20"))) PPC_WEAK_FUNC(sub_835D8B20);
PPC_FUNC_IMPL(__imp__sub_835D8B20) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,16856
	ctx.r9.s64 = ctx.r11.s64 + 16856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x835d8b54
	if (cr6.eq) goto loc_835D8B54;
	// bl 0x835daa80
	ctx.lr = 0x835D8B50;
	sub_835DAA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835D8B54:
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

__attribute__((alias("__imp__sub_835D8B68"))) PPC_WEAK_FUNC(sub_835D8B68);
PPC_FUNC_IMPL(__imp__sub_835D8B68) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835d8be0
	if (cr6.eq) goto loc_835D8BE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835df958
	ctx.lr = 0x835D8BA8;
	sub_835DF958(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lhz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// bl 0x835de768
	ctx.lr = 0x835D8BBC;
	sub_835DE768(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835d8bd4
	if (!cr6.eq) goto loc_835D8BD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835D8BD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835D8BE0:
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

__attribute__((alias("__imp__sub_835D8BF8"))) PPC_WEAK_FUNC(sub_835D8BF8);
PPC_FUNC_IMPL(__imp__sub_835D8BF8) {
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
	// bl 0x835d8a18
	ctx.lr = 0x835D8C10;
	sub_835D8A18(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17168
	ctx.r9.s64 = ctx.r10.s64 + 17168;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_835D8C44"))) PPC_WEAK_FUNC(sub_835D8C44);
PPC_FUNC_IMPL(__imp__sub_835D8C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D8C48"))) PPC_WEAK_FUNC(sub_835D8C48);
PPC_FUNC_IMPL(__imp__sub_835D8C48) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8c80
	if (!cr6.eq) goto loc_835D8C80;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_835D8C80:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835d8c98
	if (cr6.eq) goto loc_835D8C98;
	// bl 0x83a89b30
	ctx.lr = 0x835D8C94;
	sub_83A89B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_835D8C98:
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

__attribute__((alias("__imp__sub_835D8CAC"))) PPC_WEAK_FUNC(sub_835D8CAC);
PPC_FUNC_IMPL(__imp__sub_835D8CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D8CB0"))) PPC_WEAK_FUNC(sub_835D8CB0);
PPC_FUNC_IMPL(__imp__sub_835D8CB0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8ce8
	if (!cr6.eq) goto loc_835D8CE8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_835D8CE8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835d8d04
	if (cr6.eq) goto loc_835D8D04;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a89b68
	ctx.lr = 0x835D8D00;
	sub_83A89B68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_835D8D04:
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

__attribute__((alias("__imp__sub_835D8D18"))) PPC_WEAK_FUNC(sub_835D8D18);
PPC_FUNC_IMPL(__imp__sub_835D8D18) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8d50
	if (!cr6.eq) goto loc_835D8D50;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_835D8D50:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835d8d6c
	if (cr6.eq) goto loc_835D8D6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a89b68
	ctx.lr = 0x835D8D68;
	sub_83A89B68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_835D8D6C:
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

__attribute__((alias("__imp__sub_835D8D80"))) PPC_WEAK_FUNC(sub_835D8D80);
PPC_FUNC_IMPL(__imp__sub_835D8D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8da0
	if (!cr6.eq) goto loc_835D8DA0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_835D8DA0:
	// b 0x835db708
	sub_835DB708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8DA4"))) PPC_WEAK_FUNC(sub_835D8DA4);
PPC_FUNC_IMPL(__imp__sub_835D8DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D8DA8"))) PPC_WEAK_FUNC(sub_835D8DA8);
PPC_FUNC_IMPL(__imp__sub_835D8DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d8de4
	if (cr6.eq) goto loc_835D8DE4;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d8de4
	if (cr6.eq) goto loc_835D8DE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_835D8DE4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D8DF0"))) PPC_WEAK_FUNC(sub_835D8DF0);
PPC_FUNC_IMPL(__imp__sub_835D8DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8e10
	if (!cr6.eq) goto loc_835D8E10;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_835D8E10:
	// b 0x835dec88
	sub_835DEC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8E14"))) PPC_WEAK_FUNC(sub_835D8E14);
PPC_FUNC_IMPL(__imp__sub_835D8E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D8E18"))) PPC_WEAK_FUNC(sub_835D8E18);
PPC_FUNC_IMPL(__imp__sub_835D8E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835d8e40
	if (!cr6.eq) goto loc_835D8E40;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_835D8E40:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,-20396
	ctx.r3.s64 = ctx.r11.s64 + -20396;
	// b 0x835e3c58
	sub_835E3C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8E50"))) PPC_WEAK_FUNC(sub_835D8E50);
PPC_FUNC_IMPL(__imp__sub_835D8E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835d8e78
	if (!cr6.eq) goto loc_835D8E78;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_835D8E78:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,-20396
	ctx.r3.s64 = ctx.r11.s64 + -20396;
	// b 0x835e3c68
	sub_835E3C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8E88"))) PPC_WEAK_FUNC(sub_835D8E88);
PPC_FUNC_IMPL(__imp__sub_835D8E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835d8eb0
	if (!cr6.eq) goto loc_835D8EB0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_835D8EB0:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,-20396
	ctx.r3.s64 = ctx.r11.s64 + -20396;
	// b 0x835e3c48
	sub_835E3C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D8EC0"))) PPC_WEAK_FUNC(sub_835D8EC0);
PPC_FUNC_IMPL(__imp__sub_835D8EC0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8f04
	if (!cr6.eq) goto loc_835D8F04;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
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
loc_835D8F04:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835d8f28
	if (cr6.eq) goto loc_835D8F28;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835d8f28
	if (cr6.eq) goto loc_835D8F28;
	// bl 0x83a885a0
	ctx.lr = 0x835D8F20;
	sub_83A885A0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_835D8F28:
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

__attribute__((alias("__imp__sub_835D8F40"))) PPC_WEAK_FUNC(sub_835D8F40);
PPC_FUNC_IMPL(__imp__sub_835D8F40) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8f84
	if (!cr6.eq) goto loc_835D8F84;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
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
loc_835D8F84:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835d8fa0
	if (cr6.eq) goto loc_835D8FA0;
	// bl 0x83a88578
	ctx.lr = 0x835D8F98;
	sub_83A88578(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_835D8FA0:
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

__attribute__((alias("__imp__sub_835D8FB8"))) PPC_WEAK_FUNC(sub_835D8FB8);
PPC_FUNC_IMPL(__imp__sub_835D8FB8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d8ffc
	if (!cr6.eq) goto loc_835D8FFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
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
loc_835D8FFC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835d9020
	if (cr6.eq) goto loc_835D9020;
	// bl 0x83a89c38
	ctx.lr = 0x835D9010;
	sub_83A89C38(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_835D9020:
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

__attribute__((alias("__imp__sub_835D9038"))) PPC_WEAK_FUNC(sub_835D9038);
PPC_FUNC_IMPL(__imp__sub_835D9038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9058
	if (!cr6.eq) goto loc_835D9058;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
loc_835D9058:
	// b 0x835dbc18
	sub_835DBC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D905C"))) PPC_WEAK_FUNC(sub_835D905C);
PPC_FUNC_IMPL(__imp__sub_835D905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9060"))) PPC_WEAK_FUNC(sub_835D9060);
PPC_FUNC_IMPL(__imp__sub_835D9060) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d90dc
	if (cr6.eq) goto loc_835D90DC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d90dc
	if (cr6.eq) goto loc_835D90DC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835d90e4
	if (cr6.eq) goto loc_835D90E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835D90C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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
loc_835D90DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_835D90E4:
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

__attribute__((alias("__imp__sub_835D90F8"))) PPC_WEAK_FUNC(sub_835D90F8);
PPC_FUNC_IMPL(__imp__sub_835D90F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d9138
	if (cr6.eq) goto loc_835D9138;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r11,17616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d9138
	if (cr6.eq) goto loc_835D9138;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_835D9138:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D9144"))) PPC_WEAK_FUNC(sub_835D9144);
PPC_FUNC_IMPL(__imp__sub_835D9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9148"))) PPC_WEAK_FUNC(sub_835D9148);
PPC_FUNC_IMPL(__imp__sub_835D9148) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835d9174
	if (!cr6.eq) goto loc_835D9174;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// b 0x835d9358
	goto loc_835D9358;
loc_835D9174:
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e0890
	ctx.lr = 0x835D9180;
	sub_835E0890(ctx, base);
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x835dee00
	ctx.lr = 0x835D918C;
	sub_835DEE00(ctx, base);
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d92d4
	if (cr6.eq) goto loc_835D92D4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x835ddfd8
	ctx.lr = 0x835D91A4;
	sub_835DDFD8(ctx, base);
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x835dde98
	ctx.lr = 0x835D91BC;
	sub_835DDE98(ctx, base);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D91D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// divdu r7,r8,r9
	ctx.r7.u64 = PPCDivide(ctx.r8.u64, ctx.r9.u64);
	// std r7,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r7.u64);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,96(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x835D91FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,104(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x835D9248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x835D9290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// lwz r3,17616(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17616);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D92BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stb r9,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r9.u8);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
loc_835D92D4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835db868
	ctx.lr = 0x835D92E4;
	sub_835DB868(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835D92F8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835d92f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D92F8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,140
	ctx.r10.s64 = ctx.r31.s64 + 140;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835D9318:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835d9318
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D9318;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835D9338:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835d9338
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D9338;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,17712
	ctx.r10.s64 = ctx.r11.s64 + 17712;
	// lwz r11,404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_835D9358:
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

__attribute__((alias("__imp__sub_835D9370"))) PPC_WEAK_FUNC(sub_835D9370);
PPC_FUNC_IMPL(__imp__sub_835D9370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9378;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83a82ca8
	ctx.lr = 0x835D9388;
	sub_83A82CA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835ddb20
	ctx.lr = 0x835D9394;
	sub_835DDB20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d93f0
	if (!cr6.eq) goto loc_835D93F0;
	// lis r11,528
	ctx.r11.s64 = 34603008;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
	// ori r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 8192;
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 & ctx.r9.u64;
	// beq cr6,0x835d93e0
	if (cr6.eq) goto loc_835D93E0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bne cr6,0x835d93e0
	if (!cr6.eq) goto loc_835D93E0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_835D93E0:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x835d93fc
	if (!cr6.eq) goto loc_835D93FC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x835d93fc
	if (!cr6.eq) goto loc_835D93FC;
loc_835D93F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D93FC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9408"))) PPC_WEAK_FUNC(sub_835D9408);
PPC_FUNC_IMPL(__imp__sub_835D9408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835d946c
	if (cr6.eq) goto loc_835D946C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// lwz r10,17608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17608);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// sth r8,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r8.u16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x835d946c
	if (cr6.eq) goto loc_835D946C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D946C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835D946C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D947C"))) PPC_WEAK_FUNC(sub_835D947C);
PPC_FUNC_IMPL(__imp__sub_835D947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9480"))) PPC_WEAK_FUNC(sub_835D9480);
PPC_FUNC_IMPL(__imp__sub_835D9480) {
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
	// lwz r3,260(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d94c4
	if (cr6.eq) goto loc_835D94C4;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d94c4
	if (cr6.eq) goto loc_835D94C4;
	// bl 0x83a8aed8
	ctx.lr = 0x835D94B8;
	sub_83A8AED8(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x83a8aee8
	ctx.lr = 0x835D94C0;
	sub_83A8AEE8(ctx, base);
	// b 0x835d94cc
	goto loc_835D94CC;
loc_835D94C4:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83a8af18
	ctx.lr = 0x835D94CC;
	sub_83A8AF18(ctx, base);
loc_835D94CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835de4a0
	ctx.lr = 0x835D94D8;
	sub_835DE4A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a8aef8
	ctx.lr = 0x835D94E0;
	sub_83A8AEF8(ctx, base);
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

__attribute__((alias("__imp__sub_835D94FC"))) PPC_WEAK_FUNC(sub_835D94FC);
PPC_FUNC_IMPL(__imp__sub_835D94FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9500"))) PPC_WEAK_FUNC(sub_835D9500);
PPC_FUNC_IMPL(__imp__sub_835D9500) {
	PPC_FUNC_PROLOGUE();
	// b 0x835d9480
	sub_835D9480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9504"))) PPC_WEAK_FUNC(sub_835D9504);
PPC_FUNC_IMPL(__imp__sub_835D9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9508"))) PPC_WEAK_FUNC(sub_835D9508);
PPC_FUNC_IMPL(__imp__sub_835D9508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9510;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// lwz r11,17612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d9538
	if (!cr6.eq) goto loc_835D9538;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D9538:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,17628
	ctx.r30.s64 = ctx.r11.s64 + 17628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,17628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x835e5670
	ctx.lr = 0x835D955C;
	sub_835E5670(ctx, base);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,17620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d9580
	if (cr6.eq) goto loc_835D9580;
	// bl 0x835e2de0
	ctx.lr = 0x835D9570;
	sub_835E2DE0(ctx, base);
	// lwz r3,17620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17620);
	// bl 0x82416268
	ctx.lr = 0x835D9578;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17620, ctx.r11.u32);
loc_835D9580:
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,17624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17624);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d95a4
	if (cr6.eq) goto loc_835D95A4;
	// bl 0x835e2f20
	ctx.lr = 0x835D9594;
	sub_835E2F20(ctx, base);
	// lwz r3,17624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17624);
	// bl 0x82416268
	ctx.lr = 0x835D959C;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17624, ctx.r11.u32);
loc_835D95A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835dbb38
	ctx.lr = 0x835D95B4;
	sub_835DBB38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d95dc
	if (cr6.eq) goto loc_835D95DC;
loc_835D95C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835db7e8
	ctx.lr = 0x835D95CC;
	sub_835DB7E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x835d95c4
	if (cr6.lt) goto loc_835D95C4;
loc_835D95DC:
	// bl 0x835e12f0
	ctx.lr = 0x835D95E0;
	sub_835E12F0(ctx, base);
	// bl 0x835e4988
	ctx.lr = 0x835D95E4;
	sub_835E4988(ctx, base);
	// bl 0x835de780
	ctx.lr = 0x835D95E8;
	sub_835DE780(ctx, base);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r3,r11,-20396
	ctx.r3.s64 = ctx.r11.s64 + -20396;
	// bl 0x83572958
	ctx.lr = 0x835D95F4;
	sub_83572958(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835e4058
	ctx.lr = 0x835D95FC;
	sub_835E4058(ctx, base);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,17616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17616);
	// bl 0x835ddf98
	ctx.lr = 0x835D9608;
	sub_835DDF98(ctx, base);
	// lwz r3,17616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17616);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835D961C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,17616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17616);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d963c
	if (cr6.eq) goto loc_835D963C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D963C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835D963C:
	// lwz r9,17612(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r11,17616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17616, ctx.r11.u32);
	// stw r9,17612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17612, ctx.r9.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d60f8
	ctx.lr = 0x835D966C;
	sub_835D60F8(ctx, base);
	// bl 0x835e3dd8
	ctx.lr = 0x835D9670;
	sub_835E3DD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D967C"))) PPC_WEAK_FUNC(sub_835D967C);
PPC_FUNC_IMPL(__imp__sub_835D967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9680"))) PPC_WEAK_FUNC(sub_835D9680);
PPC_FUNC_IMPL(__imp__sub_835D9680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,17612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17612);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d96b0
	if (!cr6.eq) goto loc_835D96B0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D96B0:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D96D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x835dfc00
	ctx.lr = 0x835D96D4;
	sub_835DFC00(ctx, base);
	// bl 0x835e4b10
	ctx.lr = 0x835D96D8;
	sub_835E4B10(ctx, base);
	// lwz r11,17612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17612);
	// lwz r10,17628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,17612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17612, ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D96F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9704"))) PPC_WEAK_FUNC(sub_835D9704);
PPC_FUNC_IMPL(__imp__sub_835D9704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9708"))) PPC_WEAK_FUNC(sub_835D9708);
PPC_FUNC_IMPL(__imp__sub_835D9708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835D9710;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31744
	ctx.r27.s64 = -2080374784;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,17612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17612);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d9824
	if (cr6.eq) goto loc_835D9824;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,17628
	ctx.r31.s64 = ctx.r11.s64 + 17628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,17628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D974C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,17601
	ctx.r29.s64 = ctx.r11.s64 + 17601;
	// lbz r10,-1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// beq cr6,0x835d9834
	if (cr6.eq) goto loc_835D9834;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d977c
	if (!cr6.eq) goto loc_835D977C;
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r11,-1(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1, ctx.r11.u8);
loc_835D977C:
	// lwz r11,17612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17612);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r3,r11,0,1,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// bl 0x835e1448
	ctx.lr = 0x835D978C;
	sub_835E1448(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x835e49e0
	ctx.lr = 0x835D9794;
	sub_835E49E0(ctx, base);
	// lwz r11,17612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17612);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,17612(r27)
	PPC_STORE_U32(ctx.r27.u32 + 17612, ctx.r11.u32);
	// bne cr6,0x835d97b0
	if (!cr6.eq) goto loc_835D97B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-1(r29)
	PPC_STORE_U8(ctx.r29.u32 + -1, ctx.r11.u8);
loc_835D97B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D97C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835de790
	ctx.lr = 0x835D97CC;
	sub_835DE790(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835e2000
	ctx.lr = 0x835D97D8;
	sub_835E2000(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r3,17616(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17616);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835D97F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x835D9808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x835e2910
	ctx.lr = 0x835D980C;
	sub_835E2910(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x835D9820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x835e5680
	ctx.lr = 0x835D9824;
	sub_835E5680(ctx, base);
loc_835D9824:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_835D9834:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d977c
	if (cr6.eq) goto loc_835D977C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x835d977c
	goto loc_835D977C;
}

__attribute__((alias("__imp__sub_835D9844"))) PPC_WEAK_FUNC(sub_835D9844);
PPC_FUNC_IMPL(__imp__sub_835D9844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9848"))) PPC_WEAK_FUNC(sub_835D9848);
PPC_FUNC_IMPL(__imp__sub_835D9848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D9850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9880
	if (!cr6.eq) goto loc_835D9880;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835D9880:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d989c
	if (cr6.eq) goto loc_835D989C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835D989C:
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,17628
	ctx.r28.s64 = ctx.r29.s64 + 17628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D98BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e29b0
	ctx.lr = 0x835D98C8;
	sub_835E29B0(ctx, base);
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D98E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D98EC"))) PPC_WEAK_FUNC(sub_835D98EC);
PPC_FUNC_IMPL(__imp__sub_835D98EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D98F0"))) PPC_WEAK_FUNC(sub_835D98F0);
PPC_FUNC_IMPL(__imp__sub_835D98F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D98F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9928
	if (!cr6.eq) goto loc_835D9928;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835D9928:
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,17628
	ctx.r28.s64 = ctx.r29.s64 + 17628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e0680
	ctx.lr = 0x835D9954;
	sub_835E0680(ctx, base);
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D996C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9978"))) PPC_WEAK_FUNC(sub_835D9978);
PPC_FUNC_IMPL(__imp__sub_835D9978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9980;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d99ac
	if (!cr6.eq) goto loc_835D99AC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D99AC:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d99c8
	if (cr6.eq) goto loc_835D99C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D99C8:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D99E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e0738
	ctx.lr = 0x835D99F0;
	sub_835E0738(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9A08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9A14"))) PPC_WEAK_FUNC(sub_835D9A14);
PPC_FUNC_IMPL(__imp__sub_835D9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9A18"))) PPC_WEAK_FUNC(sub_835D9A18);
PPC_FUNC_IMPL(__imp__sub_835D9A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9A20;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9a70
	if (!cr6.eq) goto loc_835D9A70;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D9A70:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x835e4cb8
	ctx.lr = 0x835D9AA8;
	sub_835E4CB8(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9AC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9AD8"))) PPC_WEAK_FUNC(sub_835D9AD8);
PPC_FUNC_IMPL(__imp__sub_835D9AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835D9AE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9b14
	if (!cr6.eq) goto loc_835D9B14;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835D9B14:
	// lis r28,-31744
	ctx.r28.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r27,r28,17628
	ctx.r27.s64 = ctx.r28.s64 + 17628;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,17628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9B34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x835e4d10
	ctx.lr = 0x835D9B74;
	sub_835E4D10(ctx, base);
	// lwz r11,17628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9B98"))) PPC_WEAK_FUNC(sub_835D9B98);
PPC_FUNC_IMPL(__imp__sub_835D9B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9BA0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9bd8
	if (!cr6.eq) goto loc_835D9BD8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D9BD8:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9BF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835e4d80
	ctx.lr = 0x835D9C04;
	sub_835E4D80(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9C2C"))) PPC_WEAK_FUNC(sub_835D9C2C);
PPC_FUNC_IMPL(__imp__sub_835D9C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9C30"))) PPC_WEAK_FUNC(sub_835D9C30);
PPC_FUNC_IMPL(__imp__sub_835D9C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D9C38;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9c68
	if (!cr6.eq) goto loc_835D9C68;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835D9C68:
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,17628
	ctx.r28.s64 = ctx.r29.s64 + 17628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9C88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x835e4dc8
	ctx.lr = 0x835D9CAC;
	sub_835E4DC8(ctx, base);
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9CC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9CD0"))) PPC_WEAK_FUNC(sub_835D9CD0);
PPC_FUNC_IMPL(__imp__sub_835D9CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9CD8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9d10
	if (!cr6.eq) goto loc_835D9D10;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D9D10:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835e4e20
	ctx.lr = 0x835D9D3C;
	sub_835E4E20(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9D64"))) PPC_WEAK_FUNC(sub_835D9D64);
PPC_FUNC_IMPL(__imp__sub_835D9D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9D68"))) PPC_WEAK_FUNC(sub_835D9D68);
PPC_FUNC_IMPL(__imp__sub_835D9D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9D70;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9da8
	if (!cr6.eq) goto loc_835D9DA8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D9DA8:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9DC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835e4e68
	ctx.lr = 0x835D9DD4;
	sub_835E4E68(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9DEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9DFC"))) PPC_WEAK_FUNC(sub_835D9DFC);
PPC_FUNC_IMPL(__imp__sub_835D9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9E00"))) PPC_WEAK_FUNC(sub_835D9E00);
PPC_FUNC_IMPL(__imp__sub_835D9E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D9E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9e38
	if (!cr6.eq) goto loc_835D9E38;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835D9E38:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r30,r30,21
	ctx.r30.u64 = ctx.r30.u64 | 21;
	// beq cr6,0x835d9e8c
	if (cr6.eq) goto loc_835D9E8C;
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r30,17628
	ctx.r28.s64 = ctx.r30.s64 + 17628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9E68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e07f8
	ctx.lr = 0x835D9E74;
	sub_835E07F8(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9E8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835D9E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9E98"))) PPC_WEAK_FUNC(sub_835D9E98);
PPC_FUNC_IMPL(__imp__sub_835D9E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x835D9EA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9ee4
	if (!cr6.eq) goto loc_835D9EE4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_835D9EE4:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d9f0c
	if (cr6.eq) goto loc_835D9F0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e3c78
	ctx.lr = 0x835D9F00;
	sub_835E3C78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835d9f68
	if (!cr6.eq) goto loc_835D9F68;
loc_835D9F0C:
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r23,r29,17628
	ctx.r23.s64 = ctx.r29.s64 + 17628;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e47e0
	ctx.lr = 0x835D9F50;
	sub_835E47E0(ctx, base);
	// lwz r11,17628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17628);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9F68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835D9F68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9F74"))) PPC_WEAK_FUNC(sub_835D9F74);
PPC_FUNC_IMPL(__imp__sub_835D9F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D9F78"))) PPC_WEAK_FUNC(sub_835D9F78);
PPC_FUNC_IMPL(__imp__sub_835D9F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D9F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d9fac
	if (!cr6.eq) goto loc_835D9FAC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D9FAC:
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,17628
	ctx.r29.s64 = ctx.r30.s64 + 17628;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D9FCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e4058
	ctx.lr = 0x835D9FD4;
	sub_835E4058(ctx, base);
	// lwz r11,17628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D9FEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D9FF8"))) PPC_WEAK_FUNC(sub_835D9FF8);
PPC_FUNC_IMPL(__imp__sub_835D9FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lbz r11,7(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lwz r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r9,64(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// lbz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r8,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r8.u8);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835da05c
	if (!cr6.eq) goto loc_835DA05C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835da074
	if (cr6.eq) goto loc_835DA074;
loc_835DA05C:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// addi r8,r11,-27640
	ctx.r8.s64 = ctx.r11.s64 + -27640;
	// stw r8,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,17608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17608, ctx.r11.u32);
loc_835DA074:
	// lbz r11,196(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 196);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// lwz r8,200(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r7,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r6,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r6.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r8,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r8.u32);
	// ld r7,112(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r7,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r7.u64);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x835da17c
	if (!cr6.eq) goto loc_835DA17C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835da17c
	if (cr6.eq) goto loc_835DA17C;
	// lis r8,626
	ctx.r8.s64 = 41025536;
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ori r7,r8,1792
	ctx.r7.u64 = ctx.r8.u64 | 1792;
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r7,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r7.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r6,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r6.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 100);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lbz r6,101(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 101);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lbz r8,102(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 102);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lbz r6,103(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 103);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// lbz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// lbz r6,105(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 105);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lbz r8,106(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 106);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r7.u32);
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// b 0x835da180
	goto loc_835DA180;
loc_835DA17C:
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
loc_835DA180:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r8,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r8.u32);
	// lwz r7,92(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// lwz r6,96(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r10,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r10.u32);
	// stw r6,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// lbz r5,69(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 69);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r10,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r10.u32);
	// lbz r8,70(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 70);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r7.u32);
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r6.u32);
	// lfs f0,84(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r5,88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lfs f13,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lfs f12,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// lwz r3,164(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// b 0x83a8af40
	sub_83A8AF40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA208"))) PPC_WEAK_FUNC(sub_835DA208);
PPC_FUNC_IMPL(__imp__sub_835DA208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA20C"))) PPC_WEAK_FUNC(sub_835DA20C);
PPC_FUNC_IMPL(__imp__sub_835DA20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA210"))) PPC_WEAK_FUNC(sub_835DA210);
PPC_FUNC_IMPL(__imp__sub_835DA210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835DA218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,17612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17612);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835da24c
	if (!cr6.eq) goto loc_835DA24C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835DA24C:
	// lis r28,-31744
	ctx.r28.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r27,r28,17628
	ctx.r27.s64 = ctx.r28.s64 + 17628;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,17628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17628);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835DA26C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835dfa28
	ctx.lr = 0x835DA27C;
	sub_835DFA28(ctx, base);
	// lwz r11,17628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DA294;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA2A0"))) PPC_WEAK_FUNC(sub_835DA2A0);
PPC_FUNC_IMPL(__imp__sub_835DA2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DA2A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835da3e0
	if (cr6.eq) goto loc_835DA3E0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835d8898
	ctx.lr = 0x835DA2CC;
	sub_835D8898(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835d9ff8
	ctx.lr = 0x835DA2DC;
	sub_835D9FF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x835de2a0
	ctx.lr = 0x835DA2EC;
	sub_835DE2A0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da3d8
	if (!cr6.eq) goto loc_835DA3D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r3,6(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// bl 0x835e4908
	ctx.lr = 0x835DA308;
	sub_835E4908(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da3d8
	if (!cr6.eq) goto loc_835DA3D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835dec00
	ctx.lr = 0x835DA328;
	sub_835DEC00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da3d8
	if (!cr6.eq) goto loc_835DA3D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835e3cd8
	ctx.lr = 0x835DA344;
	sub_835E3CD8(ctx, base);
	// lbz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 68);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x835da3d8
	if (!cr6.eq) goto loc_835DA3D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835da394
	if (cr6.eq) goto loc_835DA394;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835e2ce8
	ctx.lr = 0x835DA380;
	sub_835E2CE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da3d8
	if (!cr6.eq) goto loc_835DA3D8;
loc_835DA394:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835da3c4
	if (cr6.eq) goto loc_835DA3C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835e2e08
	ctx.lr = 0x835DA3B0;
	sub_835E2E08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da3d8
	if (!cr6.eq) goto loc_835DA3D8;
loc_835DA3C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835e5618
	ctx.lr = 0x835DA3D0;
	sub_835E5618(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_835DA3D8:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835DA3E0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA3E8"))) PPC_WEAK_FUNC(sub_835DA3E8);
PPC_FUNC_IMPL(__imp__sub_835DA3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DA3F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835da464
	if (cr6.eq) goto loc_835DA464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d9370
	ctx.lr = 0x835DA414;
	sub_835D9370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da45c
	if (!cr6.eq) goto loc_835DA45C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835da2a0
	ctx.lr = 0x835DA428;
	sub_835DA2A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da45c
	if (!cr6.eq) goto loc_835DA45C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d8b68
	ctx.lr = 0x835DA440;
	sub_835D8B68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da45c
	if (!cr6.eq) goto loc_835DA45C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DA45C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_835DA464:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA46C"))) PPC_WEAK_FUNC(sub_835DA46C);
PPC_FUNC_IMPL(__imp__sub_835DA46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA470"))) PPC_WEAK_FUNC(sub_835DA470);
PPC_FUNC_IMPL(__imp__sub_835DA470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835DA478;
	__savegprlr_26(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x835d9370
	ctx.lr = 0x835DA488;
	sub_835D9370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da750
	if (!cr6.eq) goto loc_835DA750;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// lwz r11,17612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835da4b4
	if (cr6.eq) goto loc_835DA4B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_835DA4B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,17612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17612, ctx.r11.u32);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x835e3d88
	ctx.lr = 0x835DA4C8;
	sub_835E3D88(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,17628
	ctx.r30.s64 = ctx.r11.s64 + 17628;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16752
	ctx.r4.s64 = ctx.r11.s64 + 16752;
	// bl 0x835d6090
	ctx.lr = 0x835DA4E0;
	sub_835D6090(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da74c
	if (!cr6.eq) goto loc_835DA74C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830eed60
	ctx.lr = 0x835DA4F8;
	sub_830EED60(ctx, base);
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x82416260
	ctx.lr = 0x835DA500;
	sub_82416260(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835da520
	if (cr6.eq) goto loc_835DA520;
	// bl 0x835d8bf8
	ctx.lr = 0x835DA510;
	sub_835D8BF8(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,17616
	ctx.r30.s64 = ctx.r11.s64 + 17616;
	// stw r3,17616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17616, ctx.r3.u32);
	// b 0x835da530
	goto loc_835DA530;
loc_835DA520:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r30,r10,17616
	ctx.r30.s64 = ctx.r10.s64 + 17616;
	// stw r28,17616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17616, ctx.r28.u32);
loc_835DA530:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x835d8898
	ctx.lr = 0x835DA538;
	sub_835D8898(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x835d9ff8
	ctx.lr = 0x835DA548;
	sub_835D9FF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// bl 0x83a8b848
	ctx.lr = 0x835DA560;
	sub_83A8B848(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835DA578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835da730
	if (!cr6.eq) goto loc_835DA730;
	// lwz r11,17612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835da59c
	if (!cr6.eq) goto loc_835DA59C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x835ddf60
	ctx.lr = 0x835DA59C;
	sub_835DDF60(ctx, base);
loc_835DA59C:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x83a8b758
	ctx.lr = 0x835DA5A4;
	sub_83A8B758(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83a8b7d0
	ctx.lr = 0x835DA5AC;
	sub_83A8B7D0(ctx, base);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835db360
	ctx.lr = 0x835DA5B8;
	sub_835DB360(ctx, base);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r3,r11,-20396
	ctx.r3.s64 = ctx.r11.s64 + -20396;
	// bl 0x83572958
	ctx.lr = 0x835DA5C8;
	sub_83572958(ctx, base);
	// lbz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// bl 0x835e5518
	ctx.lr = 0x835DA5D0;
	sub_835E5518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e0eb8
	ctx.lr = 0x835DA5D8;
	sub_835E0EB8(ctx, base);
	// lhz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// bl 0x835de770
	ctx.lr = 0x835DA5E0;
	sub_835DE770(ctx, base);
	// lwz r10,17612(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835da62c
	if (cr6.eq) goto loc_835DA62C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835dbb38
	ctx.lr = 0x835DA600;
	sub_835DBB38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835da62c
	if (cr6.eq) goto loc_835DA62C;
loc_835DA610:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835db768
	ctx.lr = 0x835DA61C;
	sub_835DB768(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x835da610
	if (cr6.lt) goto loc_835DA610;
loc_835DA62C:
	// lwz r11,17612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835da66c
	if (cr6.eq) goto loc_835DA66C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82416260
	ctx.lr = 0x835DA644;
	sub_82416260(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,17620
	ctx.r11.s64 = ctx.r11.s64 + 17620;
	// beq cr6,0x835da65c
	if (cr6.eq) goto loc_835DA65C;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// b 0x835da660
	goto loc_835DA660;
loc_835DA65C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_835DA660:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835e2d88
	ctx.lr = 0x835DA66C;
	sub_835E2D88(ctx, base);
loc_835DA66C:
	// lwz r11,17612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835da6ac
	if (cr6.eq) goto loc_835DA6AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82416260
	ctx.lr = 0x835DA684;
	sub_82416260(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,17624
	ctx.r11.s64 = ctx.r11.s64 + 17624;
	// beq cr6,0x835da69c
	if (cr6.eq) goto loc_835DA69C;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// b 0x835da6a0
	goto loc_835DA6A0;
loc_835DA69C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_835DA6A0:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835e2ec0
	ctx.lr = 0x835DA6AC;
	sub_835E2EC0(ctx, base);
loc_835DA6AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x835e5630
	ctx.lr = 0x835DA6B4;
	sub_835E5630(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r31,r11,17024
	ctx.r31.s64 = ctx.r11.s64 + 17024;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835d9148
	ctx.lr = 0x835DA6D4;
	sub_835D9148(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r9,17684
	ctx.r10.s64 = ctx.r9.s64 + 17684;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835DA70C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x835dde98
	ctx.lr = 0x835DA724;
	sub_835DDE98(ctx, base);
	// lwz r11,17612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17612);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,17612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 17612, ctx.r11.u32);
loc_835DA730:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835da74c
	if (cr6.eq) goto loc_835DA74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DA74C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DA74C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_835DA750:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA758"))) PPC_WEAK_FUNC(sub_835DA758);
PPC_FUNC_IMPL(__imp__sub_835DA758) {
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
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x835da780
	if (cr6.lt) goto loc_835DA780;
	// li r11,10
	ctx.r11.s64 = 10;
	// divwu r10,r4,r11
	ctx.r10.u32 = PPCDivide(ctx.r4.u32, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x835da788
	goto loc_835DA788;
loc_835DA780:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_835DA788:
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-4536
	ctx.r3.s64 = ctx.r11.s64 + -4536;
	// bl 0x835da210
	ctx.lr = 0x835DA79C;
	sub_835DA210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA7AC"))) PPC_WEAK_FUNC(sub_835DA7AC);
PPC_FUNC_IMPL(__imp__sub_835DA7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA7B0"))) PPC_WEAK_FUNC(sub_835DA7B0);
PPC_FUNC_IMPL(__imp__sub_835DA7B0) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// divwu r9,r5,r11
	ctx.r9.u32 = PPCDivide(ctx.r5.u32, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-4440
	ctx.r3.s64 = ctx.r10.s64 + -4440;
	// bl 0x835da210
	ctx.lr = 0x835DA7E0;
	sub_835DA210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA7F0"))) PPC_WEAK_FUNC(sub_835DA7F0);
PPC_FUNC_IMPL(__imp__sub_835DA7F0) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// divwu r9,r5,r11
	ctx.r9.u32 = PPCDivide(ctx.r5.u32, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-4336
	ctx.r3.s64 = ctx.r10.s64 + -4336;
	// bl 0x835da210
	ctx.lr = 0x835DA820;
	sub_835DA210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA830"))) PPC_WEAK_FUNC(sub_835DA830);
PPC_FUNC_IMPL(__imp__sub_835DA830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-3912
	ctx.r3.s64 = ctx.r11.s64 + -3912;
	// b 0x835da210
	sub_835DA210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA844"))) PPC_WEAK_FUNC(sub_835DA844);
PPC_FUNC_IMPL(__imp__sub_835DA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA848"))) PPC_WEAK_FUNC(sub_835DA848);
PPC_FUNC_IMPL(__imp__sub_835DA848) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-3680
	ctx.r3.s64 = ctx.r10.s64 + -3680;
	// bl 0x835da210
	ctx.lr = 0x835DA87C;
	sub_835DA210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA88C"))) PPC_WEAK_FUNC(sub_835DA88C);
PPC_FUNC_IMPL(__imp__sub_835DA88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA890"))) PPC_WEAK_FUNC(sub_835DA890);
PPC_FUNC_IMPL(__imp__sub_835DA890) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-3528
	ctx.r3.s64 = ctx.r11.s64 + -3528;
	// bl 0x835da210
	ctx.lr = 0x835DA8B4;
	sub_835DA210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA8C4"))) PPC_WEAK_FUNC(sub_835DA8C4);
PPC_FUNC_IMPL(__imp__sub_835DA8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA8C8"))) PPC_WEAK_FUNC(sub_835DA8C8);
PPC_FUNC_IMPL(__imp__sub_835DA8C8) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,127
	ctx.r5.s64 = ctx.r1.s64 + 127;
	// addi r3,r11,-4008
	ctx.r3.s64 = ctx.r11.s64 + -4008;
	// bl 0x835da210
	ctx.lr = 0x835DA8EC;
	sub_835DA210(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA8FC"))) PPC_WEAK_FUNC(sub_835DA8FC);
PPC_FUNC_IMPL(__imp__sub_835DA8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA900"))) PPC_WEAK_FUNC(sub_835DA900);
PPC_FUNC_IMPL(__imp__sub_835DA900) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-4232
	ctx.r3.s64 = ctx.r10.s64 + -4232;
	// bl 0x835da210
	ctx.lr = 0x835DA934;
	sub_835DA210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA944"))) PPC_WEAK_FUNC(sub_835DA944);
PPC_FUNC_IMPL(__imp__sub_835DA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA948"))) PPC_WEAK_FUNC(sub_835DA948);
PPC_FUNC_IMPL(__imp__sub_835DA948) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-4120
	ctx.r3.s64 = ctx.r10.s64 + -4120;
	// bl 0x835da210
	ctx.lr = 0x835DA97C;
	sub_835DA210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DA98C"))) PPC_WEAK_FUNC(sub_835DA98C);
PPC_FUNC_IMPL(__imp__sub_835DA98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA990"))) PPC_WEAK_FUNC(sub_835DA990);
PPC_FUNC_IMPL(__imp__sub_835DA990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-3216
	ctx.r3.s64 = ctx.r11.s64 + -3216;
	// b 0x835da210
	sub_835DA210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA9A4"))) PPC_WEAK_FUNC(sub_835DA9A4);
PPC_FUNC_IMPL(__imp__sub_835DA9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA9A8"))) PPC_WEAK_FUNC(sub_835DA9A8);
PPC_FUNC_IMPL(__imp__sub_835DA9A8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// b 0x835e5d68
	sub_835E5D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DA9B4"))) PPC_WEAK_FUNC(sub_835DA9B4);
PPC_FUNC_IMPL(__imp__sub_835DA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DA9B8"))) PPC_WEAK_FUNC(sub_835DA9B8);
PPC_FUNC_IMPL(__imp__sub_835DA9B8) {
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
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,18152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x835da9fc
	if (!cr6.eq) goto loc_835DA9FC;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r10,18156
	ctx.r3.s64 = ctx.r10.s64 + 18156;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x835e6238
	ctx.lr = 0x835DA9F4;
	sub_835E6238(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,18152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18152, ctx.r11.u32);
loc_835DA9FC:
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

__attribute__((alias("__imp__sub_835DAA10"))) PPC_WEAK_FUNC(sub_835DAA10);
PPC_FUNC_IMPL(__imp__sub_835DAA10) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,18156
	ctx.r3.s64 = ctx.r11.s64 + 18156;
	// bl 0x835e6410
	ctx.lr = 0x835DAA28;
	sub_835E6410(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18152, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAA44"))) PPC_WEAK_FUNC(sub_835DAA44);
PPC_FUNC_IMPL(__imp__sub_835DAA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAA48"))) PPC_WEAK_FUNC(sub_835DAA48);
PPC_FUNC_IMPL(__imp__sub_835DAA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,18152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835daa74
	if (cr6.eq) goto loc_835DAA74;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,18156
	ctx.r3.s64 = ctx.r11.s64 + 18156;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x835e64a8
	sub_835E64A8(ctx, base);
	return;
loc_835DAA74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAA7C"))) PPC_WEAK_FUNC(sub_835DAA7C);
PPC_FUNC_IMPL(__imp__sub_835DAA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAA80"))) PPC_WEAK_FUNC(sub_835DAA80);
PPC_FUNC_IMPL(__imp__sub_835DAA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,18152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835daaa0
	if (cr6.eq) goto loc_835DAAA0;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,18156
	ctx.r3.s64 = ctx.r11.s64 + 18156;
	// b 0x835e6740
	sub_835E6740(ctx, base);
	return;
loc_835DAAA0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAAAC"))) PPC_WEAK_FUNC(sub_835DAAAC);
PPC_FUNC_IMPL(__imp__sub_835DAAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAAB0"))) PPC_WEAK_FUNC(sub_835DAAB0);
PPC_FUNC_IMPL(__imp__sub_835DAAB0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_835DAACC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x835daae0
	if (cr6.gt) goto loc_835DAAE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x835daaec
	goto loc_835DAAEC;
loc_835DAAE0:
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// ble cr6,0x835daaec
	if (!cr6.gt) goto loc_835DAAEC;
	// li r3,100
	ctx.r3.s64 = 100;
loc_835DAAEC:
	// bl 0x832d22b8
	ctx.lr = 0x835DAAF0;
	sub_832D22B8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835dab08
	if (cr6.eq) goto loc_835DAB08;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835DAB08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DAB08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835daacc
	if (cr6.eq) goto loc_835DAACC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DAB2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_835DAB44"))) PPC_WEAK_FUNC(sub_835DAB44);
PPC_FUNC_IMPL(__imp__sub_835DAB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAB48"))) PPC_WEAK_FUNC(sub_835DAB48);
PPC_FUNC_IMPL(__imp__sub_835DAB48) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835dab68
	if (!cr6.eq) goto loc_835DAB68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_835DAB68:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DAB80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAB90"))) PPC_WEAK_FUNC(sub_835DAB90);
PPC_FUNC_IMPL(__imp__sub_835DAB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_835DABB0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835dabb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DABB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-31906
	ctx.r9.s64 = -2090991616;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r6,r7,17296
	ctx.r6.s64 = ctx.r7.s64 + 17296;
	// addi r5,r9,-21840
	ctx.r5.s64 = ctx.r9.s64 + -21840;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x835d80e8
	ctx.lr = 0x835DAC00;
	sub_835D80E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAC10"))) PPC_WEAK_FUNC(sub_835DAC10);
PPC_FUNC_IMPL(__imp__sub_835DAC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DAC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,18256
	ctx.r31.s64 = ctx.r10.s64 + 18256;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x835dacac
	if (cr6.eq) goto loc_835DACAC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x835dacac
	if (!cr6.gt) goto loc_835DACAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a8bf50
	ctx.lr = 0x835DAC54;
	sub_83A8BF50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x835dac94
	if (cr6.eq) goto loc_835DAC94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a8ba50
	ctx.lr = 0x835DAC84;
	sub_83A8BA50(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DAC94:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r3,r3,8208
	ctx.r3.u64 = ctx.r3.u64 | 8208;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DACAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DACC4"))) PPC_WEAK_FUNC(sub_835DACC4);
PPC_FUNC_IMPL(__imp__sub_835DACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DACC8"))) PPC_WEAK_FUNC(sub_835DACC8);
PPC_FUNC_IMPL(__imp__sub_835DACC8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r31,r11,18256
	ctx.r31.s64 = ctx.r11.s64 + 18256;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835dad70
	if (!cr6.eq) goto loc_835DAD70;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835dad2c
	if (cr6.eq) goto loc_835DAD2C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835dad2c
	if (cr6.eq) goto loc_835DAD2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a8c898
	ctx.lr = 0x835DAD20;
	sub_83A8C898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x835dad68
	goto loc_835DAD68;
loc_835DAD2C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x83a8c500
	ctx.lr = 0x835DAD60;
	sub_83A8C500(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_835DAD68:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835DAD70:
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

__attribute__((alias("__imp__sub_835DAD88"))) PPC_WEAK_FUNC(sub_835DAD88);
PPC_FUNC_IMPL(__imp__sub_835DAD88) {
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
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,18264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18264);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835dadc4
	if (cr6.eq) goto loc_835DADC4;
	// bl 0x83a8be20
	ctx.lr = 0x835DADB4;
	sub_83A8BE20(ctx, base);
	// lwz r11,18264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18264);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,18264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18264, ctx.r11.u32);
loc_835DADC4:
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

__attribute__((alias("__imp__sub_835DADD8"))) PPC_WEAK_FUNC(sub_835DADD8);
PPC_FUNC_IMPL(__imp__sub_835DADD8) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dae30
	if (cr6.eq) goto loc_835DAE30;
	// bl 0x83a8c0d8
	ctx.lr = 0x835DAE00;
	sub_83A8C0D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x835dae28
	if (cr6.lt) goto loc_835DAE28;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_835DAE28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835DAE30:
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

__attribute__((alias("__imp__sub_835DAE44"))) PPC_WEAK_FUNC(sub_835DAE44);
PPC_FUNC_IMPL(__imp__sub_835DAE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAE48"))) PPC_WEAK_FUNC(sub_835DAE48);
PPC_FUNC_IMPL(__imp__sub_835DAE48) {
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
	// bl 0x83a8c128
	ctx.lr = 0x835DAE58;
	sub_83A8C128(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r9,r9,8193
	ctx.r9.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAE7C"))) PPC_WEAK_FUNC(sub_835DAE7C);
PPC_FUNC_IMPL(__imp__sub_835DAE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAE80"))) PPC_WEAK_FUNC(sub_835DAE80);
PPC_FUNC_IMPL(__imp__sub_835DAE80) {
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
	// bl 0x83a8c1e8
	ctx.lr = 0x835DAE90;
	sub_83A8C1E8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r9,r9,8193
	ctx.r9.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAEB4"))) PPC_WEAK_FUNC(sub_835DAEB4);
PPC_FUNC_IMPL(__imp__sub_835DAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAEB8"))) PPC_WEAK_FUNC(sub_835DAEB8);
PPC_FUNC_IMPL(__imp__sub_835DAEB8) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835daf14
	if (cr6.eq) goto loc_835DAF14;
	// bl 0x83a8bf80
	ctx.lr = 0x835DAEE0;
	sub_83A8BF80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x835daf08
	if (cr6.lt) goto loc_835DAF08;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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
loc_835DAF08:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
loc_835DAF14:
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

__attribute__((alias("__imp__sub_835DAF28"))) PPC_WEAK_FUNC(sub_835DAF28);
PPC_FUNC_IMPL(__imp__sub_835DAF28) {
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
	// bl 0x83a8bfd0
	ctx.lr = 0x835DAF38;
	sub_83A8BFD0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r9,r9,8193
	ctx.r9.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DAF5C"))) PPC_WEAK_FUNC(sub_835DAF5C);
PPC_FUNC_IMPL(__imp__sub_835DAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAF60"))) PPC_WEAK_FUNC(sub_835DAF60);
PPC_FUNC_IMPL(__imp__sub_835DAF60) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835dafbc
	if (cr6.eq) goto loc_835DAFBC;
	// bl 0x83a8c060
	ctx.lr = 0x835DAF88;
	sub_83A8C060(ctx, base);
	// addis r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -65536;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
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
loc_835DAFBC:
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

__attribute__((alias("__imp__sub_835DAFD4"))) PPC_WEAK_FUNC(sub_835DAFD4);
PPC_FUNC_IMPL(__imp__sub_835DAFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DAFD8"))) PPC_WEAK_FUNC(sub_835DAFD8);
PPC_FUNC_IMPL(__imp__sub_835DAFD8) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db00c
	if (cr6.eq) goto loc_835DB00C;
	// bl 0x83a8c2c0
	ctx.lr = 0x835DB000;
	sub_83A8C2C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_835DB00C:
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

__attribute__((alias("__imp__sub_835DB020"))) PPC_WEAK_FUNC(sub_835DB020);
PPC_FUNC_IMPL(__imp__sub_835DB020) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835db064
	if (cr6.eq) goto loc_835DB064;
	// bl 0x83a8c310
	ctx.lr = 0x835DB040;
	sub_83A8C310(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 | 16;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_835DB064:
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

__attribute__((alias("__imp__sub_835DB078"))) PPC_WEAK_FUNC(sub_835DB078);
PPC_FUNC_IMPL(__imp__sub_835DB078) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db0bc
	if (cr6.eq) goto loc_835DB0BC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db0bc
	if (cr6.eq) goto loc_835DB0BC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c3a8
	ctx.lr = 0x835DB0A8;
	sub_83A8C3A8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 | 16;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DB0BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB0CC"))) PPC_WEAK_FUNC(sub_835DB0CC);
PPC_FUNC_IMPL(__imp__sub_835DB0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB0D0"))) PPC_WEAK_FUNC(sub_835DB0D0);
PPC_FUNC_IMPL(__imp__sub_835DB0D0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db114
	if (cr6.eq) goto loc_835DB114;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835db114
	if (cr6.eq) goto loc_835DB114;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c450
	ctx.lr = 0x835DB100;
	sub_83A8C450(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DB114:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB124"))) PPC_WEAK_FUNC(sub_835DB124);
PPC_FUNC_IMPL(__imp__sub_835DB124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB128"))) PPC_WEAK_FUNC(sub_835DB128);
PPC_FUNC_IMPL(__imp__sub_835DB128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,18268
	ctx.r9.s64 = ctx.r10.s64 + 18268;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB154"))) PPC_WEAK_FUNC(sub_835DB154);
PPC_FUNC_IMPL(__imp__sub_835DB154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB158"))) PPC_WEAK_FUNC(sub_835DB158);
PPC_FUNC_IMPL(__imp__sub_835DB158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,18268
	ctx.r9.s64 = ctx.r10.s64 + 18268;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB184"))) PPC_WEAK_FUNC(sub_835DB184);
PPC_FUNC_IMPL(__imp__sub_835DB184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB188"))) PPC_WEAK_FUNC(sub_835DB188);
PPC_FUNC_IMPL(__imp__sub_835DB188) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db1dc
	if (cr6.eq) goto loc_835DB1DC;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r10,18268
	ctx.r8.s64 = ctx.r10.s64 + 18268;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x835db1dc
	if (!cr6.lt) goto loc_835DB1DC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c230
	ctx.lr = 0x835DB1D0;
	sub_83A8C230(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_835DB1DC:
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

__attribute__((alias("__imp__sub_835DB1F0"))) PPC_WEAK_FUNC(sub_835DB1F0);
PPC_FUNC_IMPL(__imp__sub_835DB1F0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db234
	if (cr6.eq) goto loc_835DB234;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db234
	if (cr6.eq) goto loc_835DB234;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a90fc0
	ctx.lr = 0x835DB220;
	sub_83A90FC0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DB234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB244"))) PPC_WEAK_FUNC(sub_835DB244);
PPC_FUNC_IMPL(__imp__sub_835DB244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB248"))) PPC_WEAK_FUNC(sub_835DB248);
PPC_FUNC_IMPL(__imp__sub_835DB248) {
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
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835db28c
	if (cr6.eq) goto loc_835DB28C;
	// bl 0x83a8d530
	ctx.lr = 0x835DB268;
	sub_83A8D530(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_835DB28C:
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

__attribute__((alias("__imp__sub_835DB2A0"))) PPC_WEAK_FUNC(sub_835DB2A0);
PPC_FUNC_IMPL(__imp__sub_835DB2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DB2A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db2c4
	if (cr6.eq) goto loc_835DB2C4;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x835db2d4
	goto loc_835DB2D4;
loc_835DB2C4:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_835DB2D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a925e0
	ctx.lr = 0x835DB2DC;
	sub_83A925E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835db308
	if (!cr6.gt) goto loc_835DB308;
loc_835DB2EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a923c0
	ctx.lr = 0x835DB2FC;
	sub_83A923C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x835db2ec
	if (cr6.lt) goto loc_835DB2EC;
loc_835DB308:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DB314"))) PPC_WEAK_FUNC(sub_835DB314);
PPC_FUNC_IMPL(__imp__sub_835DB314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB318"))) PPC_WEAK_FUNC(sub_835DB318);
PPC_FUNC_IMPL(__imp__sub_835DB318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DB320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a925e0
	ctx.lr = 0x835DB32C;
	sub_83A925E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835db354
	if (!cr6.gt) goto loc_835DB354;
loc_835DB33C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a92468
	ctx.lr = 0x835DB348;
	sub_83A92468(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x835db33c
	if (cr6.lt) goto loc_835DB33C;
loc_835DB354:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DB360"))) PPC_WEAK_FUNC(sub_835DB360);
PPC_FUNC_IMPL(__imp__sub_835DB360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835db398
	if (cr6.eq) goto loc_835DB398;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,18268
	ctx.r10.s64 = ctx.r11.s64 + 18268;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bge cr6,0x835db38c
	if (!cr6.lt) goto loc_835DB38C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_835DB38C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
loc_835DB398:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB3A0"))) PPC_WEAK_FUNC(sub_835DB3A0);
PPC_FUNC_IMPL(__imp__sub_835DB3A0) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r10,18268
	ctx.r8.s64 = ctx.r10.s64 + 18268;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x835db3f4
	if (!cr6.lt) goto loc_835DB3F4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db3f4
	if (cr6.eq) goto loc_835DB3F4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c238
	ctx.lr = 0x835DB3E0;
	sub_83A8C238(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DB3F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB404"))) PPC_WEAK_FUNC(sub_835DB404);
PPC_FUNC_IMPL(__imp__sub_835DB404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB408"))) PPC_WEAK_FUNC(sub_835DB408);
PPC_FUNC_IMPL(__imp__sub_835DB408) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db44c
	if (cr6.eq) goto loc_835DB44C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db44c
	if (cr6.eq) goto loc_835DB44C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c258
	ctx.lr = 0x835DB438;
	sub_83A8C258(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DB44C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB45C"))) PPC_WEAK_FUNC(sub_835DB45C);
PPC_FUNC_IMPL(__imp__sub_835DB45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB460"))) PPC_WEAK_FUNC(sub_835DB460);
PPC_FUNC_IMPL(__imp__sub_835DB460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// beq cr6,0x835db498
	if (cr6.eq) goto loc_835DB498;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,18268
	ctx.r10.s64 = ctx.r11.s64 + 18268;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bge cr6,0x835db48c
	if (!cr6.lt) goto loc_835DB48C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_835DB48C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
loc_835DB498:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB4A0"))) PPC_WEAK_FUNC(sub_835DB4A0);
PPC_FUNC_IMPL(__imp__sub_835DB4A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db4f0
	if (cr6.eq) goto loc_835DB4F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db4f0
	if (cr6.eq) goto loc_835DB4F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c258
	ctx.lr = 0x835DB4DC;
	sub_83A8C258(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835db504
	if (cr6.eq) goto loc_835DB504;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835DB4F0:
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
loc_835DB504:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
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

__attribute__((alias("__imp__sub_835DB520"))) PPC_WEAK_FUNC(sub_835DB520);
PPC_FUNC_IMPL(__imp__sub_835DB520) {
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
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db574
	if (cr6.eq) goto loc_835DB574;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835db574
	if (cr6.eq) goto loc_835DB574;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a8c238
	ctx.lr = 0x835DB560;
	sub_83A8C238(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835db588
	if (cr6.eq) goto loc_835DB588;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835DB574:
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
loc_835DB588:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
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

__attribute__((alias("__imp__sub_835DB5A4"))) PPC_WEAK_FUNC(sub_835DB5A4);
PPC_FUNC_IMPL(__imp__sub_835DB5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB5A8"))) PPC_WEAK_FUNC(sub_835DB5A8);
PPC_FUNC_IMPL(__imp__sub_835DB5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,48000
	ctx.r8.u64 = ctx.r8.u64 | 48000;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lfs f0,24504(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB640"))) PPC_WEAK_FUNC(sub_835DB640);
PPC_FUNC_IMPL(__imp__sub_835DB640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DB648;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r31,r10,18320
	ctx.r31.s64 = ctx.r10.s64 + 18320;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x835db700
	if (!cr6.lt) goto loc_835DB700;
	// mulli r29,r11,44
	ctx.r29.s64 = ctx.r11.s64 * 44;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x835db69c
	if (!cr6.gt) goto loc_835DB69C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835db318
	ctx.lr = 0x835DB69C;
	sub_835DB318(ctx, base);
loc_835DB69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a91fe8
	ctx.lr = 0x835DB6A4;
	sub_83A91FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x835db6fc
	if (!cr6.gt) goto loc_835DB6FC;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83a925e0
	ctx.lr = 0x835DB6D0;
	sub_83A925E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835db6fc
	if (!cr6.gt) goto loc_835DB6FC;
loc_835DB6E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a923c0
	ctx.lr = 0x835DB6F0;
	sub_83A923C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x835db6e0
	if (cr6.lt) goto loc_835DB6E0;
loc_835DB6FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DB700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DB708"))) PPC_WEAK_FUNC(sub_835DB708);
PPC_FUNC_IMPL(__imp__sub_835DB708) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r10,18320
	ctx.r7.s64 = ctx.r10.s64 + 18320;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r6,r8
	ctx.r9.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x835db758
	if (!cr6.lt) goto loc_835DB758;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x83a92040
	ctx.lr = 0x835DB754;
	sub_83A92040(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DB758:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB768"))) PPC_WEAK_FUNC(sub_835DB768);
PPC_FUNC_IMPL(__imp__sub_835DB768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DB770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r31,r10,18320
	ctx.r31.s64 = ctx.r10.s64 + 18320;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x835db7dc
	if (!cr6.lt) goto loc_835DB7DC;
	// mulli r29,r11,44
	ctx.r29.s64 = ctx.r11.s64 * 44;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835db2a0
	ctx.lr = 0x835DB7B8;
	sub_835DB2A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835db7d8
	if (!cr6.eq) goto loc_835DB7D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x83a925e0
	ctx.lr = 0x835DB7D4;
	sub_83A925E0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_835DB7D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835DB7DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DB7E4"))) PPC_WEAK_FUNC(sub_835DB7E4);
PPC_FUNC_IMPL(__imp__sub_835DB7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB7E8"))) PPC_WEAK_FUNC(sub_835DB7E8);
PPC_FUNC_IMPL(__imp__sub_835DB7E8) {
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
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r31,r10,18320
	ctx.r31.s64 = ctx.r10.s64 + 18320;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x835db84c
	if (!cr6.lt) goto loc_835DB84C;
	// mulli r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 * 44;
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x835db318
	ctx.lr = 0x835DB83C;
	sub_835DB318(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
loc_835DB84C:
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

__attribute__((alias("__imp__sub_835DB864"))) PPC_WEAK_FUNC(sub_835DB864);
PPC_FUNC_IMPL(__imp__sub_835DB864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB868"))) PPC_WEAK_FUNC(sub_835DB868);
PPC_FUNC_IMPL(__imp__sub_835DB868) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835db8d4
	if (cr6.eq) goto loc_835DB8D4;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r10,18320
	ctx.r7.s64 = ctx.r10.s64 + 18320;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r6,r8
	ctx.r9.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x835db8d4
	if (!cr6.lt) goto loc_835DB8D4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x835db8d4
	if (cr6.lt) goto loc_835DB8D4;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x835db8d4
	if (!cr6.lt) goto loc_835DB8D4;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x83a92500
	ctx.lr = 0x835DB8D0;
	sub_83A92500(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DB8D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB8E4"))) PPC_WEAK_FUNC(sub_835DB8E4);
PPC_FUNC_IMPL(__imp__sub_835DB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB8E8"))) PPC_WEAK_FUNC(sub_835DB8E8);
PPC_FUNC_IMPL(__imp__sub_835DB8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r10,18320
	ctx.r7.s64 = ctx.r10.s64 + 18320;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB938"))) PPC_WEAK_FUNC(sub_835DB938);
PPC_FUNC_IMPL(__imp__sub_835DB938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r10,18320
	ctx.r7.s64 = ctx.r10.s64 + 18320;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB988"))) PPC_WEAK_FUNC(sub_835DB988);
PPC_FUNC_IMPL(__imp__sub_835DB988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r7,44
	ctx.r7.s64 = 44;
	// addi r11,r11,18320
	ctx.r11.s64 = ctx.r11.s64 + 18320;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r8,r6,r7
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DB9D4"))) PPC_WEAK_FUNC(sub_835DB9D4);
PPC_FUNC_IMPL(__imp__sub_835DB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DB9D8"))) PPC_WEAK_FUNC(sub_835DB9D8);
PPC_FUNC_IMPL(__imp__sub_835DB9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r7,44
	ctx.r7.s64 = 44;
	// addi r11,r11,18320
	ctx.r11.s64 = ctx.r11.s64 + 18320;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r8,r6,r7
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// ori r6,r7,18
	ctx.r6.u64 = ctx.r7.u64 | 18;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfc r10,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r8,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 & ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DBA4C"))) PPC_WEAK_FUNC(sub_835DBA4C);
PPC_FUNC_IMPL(__imp__sub_835DBA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DBA50"))) PPC_WEAK_FUNC(sub_835DBA50);
PPC_FUNC_IMPL(__imp__sub_835DBA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x835DBA58;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// ori r23,r23,21
	ctx.r23.u64 = ctx.r23.u64 | 21;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835dbb10
	if (cr6.eq) goto loc_835DBB10;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lis r24,-31744
	ctx.r24.s64 = -2080374784;
loc_835DBA98:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x83a91ee0
	ctx.lr = 0x835DBAE8;
	sub_83A91EE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835dbb00
	if (!cr6.gt) goto loc_835DBB00;
	// lwz r11,18320(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 18320);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
loc_835DBB00:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// bne 0x835dba98
	if (!cr0.eq) goto loc_835DBA98;
loc_835DBB10:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x835dbb28
	if (cr6.eq) goto loc_835DBB28;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_835DBB28:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DBB34"))) PPC_WEAK_FUNC(sub_835DBB34);
PPC_FUNC_IMPL(__imp__sub_835DBB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DBB38"))) PPC_WEAK_FUNC(sub_835DBB38);
PPC_FUNC_IMPL(__imp__sub_835DBB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r11,18320
	ctx.r7.s64 = ctx.r11.s64 + 18320;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,18320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DBB74"))) PPC_WEAK_FUNC(sub_835DBB74);
PPC_FUNC_IMPL(__imp__sub_835DBB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DBB78"))) PPC_WEAK_FUNC(sub_835DBB78);
PPC_FUNC_IMPL(__imp__sub_835DBB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r11,18320
	ctx.r7.s64 = ctx.r11.s64 + 18320;
	// lwz r11,18320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x835dbbc8
	if (!cr6.lt) goto loc_835DBBC8;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_835DBBC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DBBD8"))) PPC_WEAK_FUNC(sub_835DBBD8);
PPC_FUNC_IMPL(__imp__sub_835DBBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,44
	ctx.r9.s64 = 44;
	// addi r8,r11,18320
	ctx.r8.s64 = ctx.r11.s64 + 18320;
	// lwz r11,18320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bge cr6,0x835dbc0c
	if (!cr6.lt) goto loc_835DBC0C;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
loc_835DBC0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DBC14"))) PPC_WEAK_FUNC(sub_835DBC14);
PPC_FUNC_IMPL(__imp__sub_835DBC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DBC18"))) PPC_WEAK_FUNC(sub_835DBC18);
PPC_FUNC_IMPL(__imp__sub_835DBC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DBC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,44
	ctx.r9.s64 = 44;
	// addi r31,r11,18320
	ctx.r31.s64 = ctx.r11.s64 + 18320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r11,18320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, xer);
	// bge cr6,0x835dbd04
	if (!cr6.lt) goto loc_835DBD04;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dbd04
	if (cr6.eq) goto loc_835DBD04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835db640
	ctx.lr = 0x835DBC68;
	sub_835DB640(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 * 44;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r30,24(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// ble cr6,0x835dbc90
	if (!cr6.gt) goto loc_835DBC90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835db318
	ctx.lr = 0x835DBC8C;
	sub_835DB318(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_835DBC90:
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83a91f88
	ctx.lr = 0x835DBCA8;
	sub_83A91F88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x835dbd00
	if (!cr6.gt) goto loc_835DBD00;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83a925e0
	ctx.lr = 0x835DBCD4;
	sub_83A925E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835dbd00
	if (!cr6.gt) goto loc_835DBD00;
loc_835DBCE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a923c0
	ctx.lr = 0x835DBCF4;
	sub_83A923C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x835dbce4
	if (cr6.lt) goto loc_835DBCE4;
loc_835DBD00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DBD04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DBD0C"))) PPC_WEAK_FUNC(sub_835DBD0C);
PPC_FUNC_IMPL(__imp__sub_835DBD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DBD10"))) PPC_WEAK_FUNC(sub_835DBD10);
PPC_FUNC_IMPL(__imp__sub_835DBD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x835DBD18;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r10,18320
	ctx.r29.s64 = ctx.r10.s64 + 18320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r21,44
	ctx.r21.s64 = 44;
	// lwz r10,18320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18320);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// ori r20,r8,21
	ctx.r20.u64 = ctx.r8.u64 | 21;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,92(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	// divw r5,r6,r21
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r21.s32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x835dbe8c
	if (!cr6.lt) goto loc_835DBE8C;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835dbe88
	if (cr6.eq) goto loc_835DBE88;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_835DBD8C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x835dbe70
	if (!cr6.eq) goto loc_835DBE70;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x835dbe64
	if (cr6.eq) goto loc_835DBE64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// divw r10,r11,r21
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r21.s32);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bge cr6,0x835dbe68
	if (!cr6.lt) goto loc_835DBE68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x835db5a8
	ctx.lr = 0x835DBDF4;
	sub_835DB5A8(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r28,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83a91ee8
	ctx.lr = 0x835DBE08;
	sub_83A91EE8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// ble cr6,0x835dbe30
	if (!cr6.gt) goto loc_835DBE30;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, xer);
	// beq cr6,0x835dbe70
	if (cr6.eq) goto loc_835DBE70;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835dbe4c
	goto loc_835DBE4C;
loc_835DBE30:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// ori r26,r26,8193
	ctx.r26.u64 = ctx.r26.u64 | 8193;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r7,r27
	ctx.r4.u64 = ctx.r7.u64 & ctx.r27.u64;
loc_835DBE4C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x835dbe5c
	if (cr6.lt) goto loc_835DBE5C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a925d8
	ctx.lr = 0x835DBE5C;
	sub_83A925D8(ctx, base);
loc_835DBE5C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x835dbe70
	if (cr6.eq) goto loc_835DBE70;
loc_835DBE64:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_835DBE68:
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// b 0x835dbe74
	goto loc_835DBE74;
loc_835DBE70:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_835DBE74:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// bne 0x835dbd8c
	if (!cr0.eq) goto loc_835DBD8C;
loc_835DBE88:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_835DBE8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DBE94"))) PPC_WEAK_FUNC(sub_835DBE94);
PPC_FUNC_IMPL(__imp__sub_835DBE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DBE98"))) PPC_WEAK_FUNC(sub_835DBE98);
PPC_FUNC_IMPL(__imp__sub_835DBE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835DBEA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r25,44
	ctx.r25.s64 = 44;
	// addi r30,r11,18320
	ctx.r30.s64 = ctx.r11.s64 + 18320;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,18320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r26,r10,r25
	ctx.r26.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// ble cr6,0x835dbf4c
	if (!cr6.gt) goto loc_835DBF4C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_835DBED8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835dbf34
	if (cr6.eq) goto loc_835DBF34;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r8,r10,r25
	ctx.r8.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bge cr6,0x835dbf34
	if (!cr6.lt) goto loc_835DBF34;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x835dbf34
	if (!cr6.gt) goto loc_835DBF34;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835dbf14
	if (!cr6.gt) goto loc_835DBF14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835db318
	ctx.lr = 0x835DBF14;
	sub_835DB318(ctx, base);
loc_835DBF14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a91f50
	ctx.lr = 0x835DBF1C;
	sub_83A91F50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x835dbf3c
	goto loc_835DBF3C;
loc_835DBF34:
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,21
	ctx.r24.u64 = ctx.r24.u64 | 21;
loc_835DBF3C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x835dbed8
	if (cr6.lt) goto loc_835DBED8;
loc_835DBF4C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DBF58"))) PPC_WEAK_FUNC(sub_835DBF58);
PPC_FUNC_IMPL(__imp__sub_835DBF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835DBF60;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dbfd0
	if (cr6.eq) goto loc_835DBFD0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,8
	ctx.r29.s64 = 8;
loc_835DBF80:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// beq cr6,0x835dbfc4
	if (cr6.eq) goto loc_835DBFC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x835DBFC4;
	sub_831CE980(ctx, base);
loc_835DBFC4:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x835dbf80
	if (!cr0.eq) goto loc_835DBF80;
loc_835DBFD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DBFD8"))) PPC_WEAK_FUNC(sub_835DBFD8);
PPC_FUNC_IMPL(__imp__sub_835DBFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835DBFE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x835dc030
	if (cr6.eq) goto loc_835DC030;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// beq cr6,0x835dc02c
	if (cr6.eq) goto loc_835DC02C;
loc_835DC00C:
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x835DC01C;
	sub_831CE980(ctx, base);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x835dc00c
	if (!cr6.eq) goto loc_835DC00C;
loc_835DC02C:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_835DC030:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC03C"))) PPC_WEAK_FUNC(sub_835DC03C);
PPC_FUNC_IMPL(__imp__sub_835DC03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC040"))) PPC_WEAK_FUNC(sub_835DC040);
PPC_FUNC_IMPL(__imp__sub_835DC040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835DC048;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x835dc06c
	if (!cr6.gt) goto loc_835DC06C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x835DC06C;
	sub_831CC150(ctx, base);
loc_835DC06C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,44
	ctx.r28.s64 = 44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x835dc0f8
	if (!cr6.lt) goto loc_835DC0F8;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,44
	ctx.r29.s64 = ctx.r4.s64 * 44;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835DC0A4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837e3808
	ctx.lr = 0x835DC0BC;
	sub_837E3808(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x835dc0e0
	if (cr6.eq) goto loc_835DC0E0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835DC0E0;
	sub_825952B8(ctx, base);
loc_835DC0E0:
	// mulli r11,r28,44
	ctx.r11.s64 = ctx.r28.s64 * 44;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_835DC0F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC100"))) PPC_WEAK_FUNC(sub_835DC100);
PPC_FUNC_IMPL(__imp__sub_835DC100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,44
	ctx.r9.s64 = 44;
	// ori r8,r10,29789
	ctx.r8.u64 = ctx.r10.u64 | 29789;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x835dc134
	if (!cr6.lt) goto loc_835DC134;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_835DC134:
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
	// blt cr6,0x835dc164
	if (cr6.lt) goto loc_835DC164;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_835DC164:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x835dc170
	if (!cr6.lt) goto loc_835DC170;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_835DC170:
	// b 0x835dc040
	sub_835DC040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC174"))) PPC_WEAK_FUNC(sub_835DC174);
PPC_FUNC_IMPL(__imp__sub_835DC174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DC178"))) PPC_WEAK_FUNC(sub_835DC178);
PPC_FUNC_IMPL(__imp__sub_835DC178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DC180;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,44
	ctx.r29.s64 = 44;
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
	// ble cr6,0x835dc1c4
	if (!cr6.gt) goto loc_835DC1C4;
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835dbfd8
	ctx.lr = 0x835DC1BC;
	sub_835DBFD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DC1C4:
	// bge cr6,0x835dc21c
	if (!cr6.lt) goto loc_835DC21C;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835dc100
	ctx.lr = 0x835DC1D4;
	sub_835DC100(ctx, base);
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
	// bl 0x835dbf58
	ctx.lr = 0x835DC1FC;
	sub_835DBF58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mulli r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 * 44;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_835DC21C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC224"))) PPC_WEAK_FUNC(sub_835DC224);
PPC_FUNC_IMPL(__imp__sub_835DC224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC228"))) PPC_WEAK_FUNC(sub_835DC228);
PPC_FUNC_IMPL(__imp__sub_835DC228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x835DC230;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r19,0(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r24,r11,18320
	ctx.r24.s64 = ctx.r11.s64 + 18320;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r4,r19,1
	ctx.r4.s64 = ctx.r19.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x835dc178
	ctx.lr = 0x835DC254;
	sub_835DC178(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,18256
	ctx.r31.s64 = ctx.r11.s64 + 18256;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835dc384
	if (!cr6.gt) goto loc_835DC384;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r26,r11,48000
	ctx.r26.u64 = ctx.r11.u64 | 48000;
	// li r22,6
	ctx.r22.s64 = 6;
loc_835DC284:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a8b9e0
	ctx.lr = 0x835DC290;
	sub_83A8B9E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835dc36c
	if (cr6.eq) goto loc_835DC36C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a8b970
	ctx.lr = 0x835DC2AC;
	sub_83A8B970(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bge cr6,0x835dc2c0
	if (!cr6.lt) goto loc_835DC2C0;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_835DC2C0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x835dc36c
	if (cr6.eq) goto loc_835DC36C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r28,44
	ctx.r28.s64 = 44;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_835DC2D4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x83a8bb78
	ctx.lr = 0x835DC344;
	sub_83A8BB78(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r6,r3
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, xer);
	// bge cr6,0x835dc35c
	if (!cr6.lt) goto loc_835DC35C;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_835DC35C:
	// addic. r20,r20,-1
	xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// bne 0x835dc2d4
	if (!cr0.eq) goto loc_835DC2D4;
loc_835DC36C:
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// blt cr6,0x835dc284
	if (cr6.lt) goto loc_835DC284;
loc_835DC384:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC38C"))) PPC_WEAK_FUNC(sub_835DC38C);
PPC_FUNC_IMPL(__imp__sub_835DC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC390"))) PPC_WEAK_FUNC(sub_835DC390);
PPC_FUNC_IMPL(__imp__sub_835DC390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x835DC398;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dc4c8
	if (cr6.eq) goto loc_835DC4C8;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x835e6810
	ctx.lr = 0x835DC3D0;
	sub_835E6810(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835dc4c0
	if (cr6.eq) goto loc_835DC4C0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_835DC3F4:
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// sth r29,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r29.u16);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
loc_835DC458:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835dc458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DC458;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// bl 0x835e6890
	ctx.lr = 0x835DC490;
	sub_835E6890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dc4b4
	if (!cr6.eq) goto loc_835DC4B4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835dc4b4
	if (cr6.eq) goto loc_835DC4B4;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// bne cr6,0x835dc4b4
	if (!cr6.eq) goto loc_835DC4B4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_835DC4B4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x835dc3f4
	if (cr6.lt) goto loc_835DC3F4;
loc_835DC4C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_835DC4C8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC4D4"))) PPC_WEAK_FUNC(sub_835DC4D4);
PPC_FUNC_IMPL(__imp__sub_835DC4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC4D8"))) PPC_WEAK_FUNC(sub_835DC4D8);
PPC_FUNC_IMPL(__imp__sub_835DC4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x835DC4E0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// bl 0x835e6810
	ctx.lr = 0x835DC508;
	sub_835E6810(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835dc620
	if (cr6.eq) goto loc_835DC620;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_835DC52C:
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// sth r29,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r29.u16);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// std r30,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r30.u64);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
loc_835DC590:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835dc590
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DC590;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// bl 0x835e6890
	ctx.lr = 0x835DC5C8;
	sub_835E6890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dc614
	if (!cr6.eq) goto loc_835DC614;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835dc614
	if (cr6.eq) goto loc_835DC614;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x835dc610
	if (cr6.eq) goto loc_835DC610;
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bgt cr6,0x835dc600
	if (cr6.gt) goto loc_835DC600;
	// li r11,10
	ctx.r11.s64 = 10;
loc_835DC600:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x835dc614
	goto loc_835DC614;
loc_835DC610:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_835DC614:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// blt cr6,0x835dc52c
	if (cr6.lt) goto loc_835DC52C;
loc_835DC620:
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// stw r22,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r22.u32);
	// stw r27,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r27.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC63C"))) PPC_WEAK_FUNC(sub_835DC63C);
PPC_FUNC_IMPL(__imp__sub_835DC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC640"))) PPC_WEAK_FUNC(sub_835DC640);
PPC_FUNC_IMPL(__imp__sub_835DC640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DC648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6de0
	ctx.lr = 0x835DC65C;
	sub_835E6DE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dc674
	if (!cr6.eq) goto loc_835DC674;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835DC674:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6810
	ctx.lr = 0x835DC67C;
	sub_835E6810(ctx, base);
	// addic. r30,r31,128
	xer.ca = ctx.r31.u32 > 4294967167;
	ctx.r30.s64 = ctx.r31.s64 + 128;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// beq 0x835dc6a0
	if (cr0.eq) goto loc_835DC6A0;
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
	ctx.lr = 0x835DC6A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DC6A0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// beq cr6,0x835dc6cc
	if (cr6.eq) goto loc_835DC6CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DC6CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DC6CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC6D8"))) PPC_WEAK_FUNC(sub_835DC6D8);
PPC_FUNC_IMPL(__imp__sub_835DC6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x835DC6E0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835dc918
	if (!cr6.gt) goto loc_835DC918;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835e6810
	ctx.lr = 0x835DC708;
	sub_835E6810(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835dc918
	if (!cr6.gt) goto loc_835DC918;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r24,r10,65535
	ctx.r24.u64 = ctx.r10.u64 | 65535;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// li r23,2
	ctx.r23.s64 = 2;
loc_835DC734:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835e6900
	ctx.lr = 0x835DC748;
	sub_835E6900(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x835dc904
	if (!cr6.eq) goto loc_835DC904;
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// sth r24,198(r1)
	PPC_STORE_U16(ctx.r1.u32 + 198, ctx.r24.u16);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// std r25,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r25.u64);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
loc_835DC7B8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835dc7b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DC7B8;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// bl 0x835e6890
	ctx.lr = 0x835DC7F0;
	sub_835E6890(ctx, base);
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// sth r25,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r25.u16);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x835dc89c
	if (cr6.eq) goto loc_835DC89C;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// bl 0x835d6228
	ctx.lr = 0x835DC814;
	sub_835D6228(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x835e6890
	ctx.lr = 0x835DC828;
	sub_835E6890(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x835dc860
	if (cr6.eq) goto loc_835DC860;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x835dc854
	if (!cr6.eq) goto loc_835DC854;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x835dc860
	if (!cr6.eq) goto loc_835DC860;
loc_835DC854:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_835DC860:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x835dc898
	if (!cr6.eq) goto loc_835DC898;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x835e6890
	ctx.lr = 0x835DC88C;
	sub_835E6890(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x835dc860
	if (!cr6.lt) goto loc_835DC860;
	// b 0x835dc89c
	goto loc_835DC89C;
loc_835DC898:
	// sth r29,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r29.u16);
loc_835DC89C:
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mulli r11,r9,208
	ctx.r11.s64 = ctx.r9.s64 * 208;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x835e7a60
	ctx.lr = 0x835DC8B4;
	sub_835E7A60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x835e6de0
	ctx.lr = 0x835DC8C0;
	sub_835E6DE0(ctx, base);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835e6828
	ctx.lr = 0x835DC8D4;
	sub_835E6828(ctx, base);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mulli r11,r7,208
	ctx.r11.s64 = ctx.r7.s64 * 208;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x825832e8
	ctx.lr = 0x835DC8E8;
	sub_825832E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dc904
	if (!cr6.eq) goto loc_835DC904;
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mulli r11,r9,208
	ctx.r11.s64 = ctx.r9.s64 * 208;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x835e6e38
	ctx.lr = 0x835DC904;
	sub_835E6E38(ctx, base);
loc_835DC904:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r22
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, xer);
	// blt cr6,0x835dc734
	if (cr6.lt) goto loc_835DC734;
loc_835DC918:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC92C"))) PPC_WEAK_FUNC(sub_835DC92C);
PPC_FUNC_IMPL(__imp__sub_835DC92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC930"))) PPC_WEAK_FUNC(sub_835DC930);
PPC_FUNC_IMPL(__imp__sub_835DC930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835DC938;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r31,r8,r10
	ctx.r31.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x835dc988
	if (cr0.eq) goto loc_835DC988;
	// li r30,0
	ctx.r30.s64 = 0;
loc_835DC960:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e6f08
	ctx.lr = 0x835DC974;
	sub_835E6F08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e7a00
	ctx.lr = 0x835DC97C;
	sub_835E7A00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// bne 0x835dc960
	if (!cr0.eq) goto loc_835DC960;
loc_835DC988:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x835e6bd0
	ctx.lr = 0x835DC990;
	sub_835E6BD0(ctx, base);
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x835e6bd0
	ctx.lr = 0x835DC998;
	sub_835E6BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DC9A4"))) PPC_WEAK_FUNC(sub_835DC9A4);
PPC_FUNC_IMPL(__imp__sub_835DC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DC9A8"))) PPC_WEAK_FUNC(sub_835DC9A8);
PPC_FUNC_IMPL(__imp__sub_835DC9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DC9B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r31,r8,r10
	ctx.r31.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x835dc9f4
	if (cr0.eq) goto loc_835DC9F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_835DC9D8:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835e6f08
	ctx.lr = 0x835DC9E8;
	sub_835E6F08(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// bne 0x835dc9d8
	if (!cr0.eq) goto loc_835DC9D8;
loc_835DC9F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DCA00"))) PPC_WEAK_FUNC(sub_835DCA00);
PPC_FUNC_IMPL(__imp__sub_835DCA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DCA08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r31,r8,r10
	ctx.r31.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x835dca44
	if (cr0.eq) goto loc_835DCA44;
	// li r30,0
	ctx.r30.s64 = 0;
loc_835DCA2C:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835e7a00
	ctx.lr = 0x835DCA38;
	sub_835E7A00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// bne 0x835dca2c
	if (!cr0.eq) goto loc_835DCA2C;
loc_835DCA44:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x835e6bd0
	ctx.lr = 0x835DCA4C;
	sub_835E6BD0(ctx, base);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x835e6bd0
	ctx.lr = 0x835DCA54;
	sub_835E6BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DCA60"))) PPC_WEAK_FUNC(sub_835DCA60);
PPC_FUNC_IMPL(__imp__sub_835DCA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DCA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dcaf4
	if (cr6.eq) goto loc_835DCAF4;
	// addic. r29,r30,128
	xer.ca = ctx.r30.u32 > 4294967167;
	ctx.r29.s64 = ctx.r30.s64 + 128;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x835dcaa4
	if (cr0.eq) goto loc_835DCAA4;
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
	ctx.lr = 0x835DCAA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DCAA4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x835dcaf0
	if (cr6.eq) goto loc_835DCAF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DCAF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DCAF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DCAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DCAFC"))) PPC_WEAK_FUNC(sub_835DCAFC);
PPC_FUNC_IMPL(__imp__sub_835DCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DCB00"))) PPC_WEAK_FUNC(sub_835DCB00);
PPC_FUNC_IMPL(__imp__sub_835DCB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DCB08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dcbc0
	if (cr6.eq) goto loc_835DCBC0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bge cr6,0x835dcbc0
	if (!cr6.lt) goto loc_835DCBC0;
	// addic. r28,r31,128
	xer.ca = ctx.r31.u32 > 4294967167;
	ctx.r28.s64 = ctx.r31.s64 + 128;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x835dcb64
	if (cr0.eq) goto loc_835DCB64;
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
	ctx.lr = 0x835DCB64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DCB64:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,6
	ctx.r11.s64 = 6;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r29,-4
	ctx.r8.s64 = ctx.r29.s64 + -4;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_835DCB94:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x835dcb94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DCB94;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835dcbbc
	if (cr6.eq) goto loc_835DCBBC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DCBBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DCBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DCBC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DCBC8"))) PPC_WEAK_FUNC(sub_835DCBC8);
PPC_FUNC_IMPL(__imp__sub_835DCBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DCBD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mulli r11,r4,208
	ctx.r11.s64 = ctx.r4.s64 * 208;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x825832e8
	ctx.lr = 0x835DCBF0;
	sub_825832E8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6fa0
	ctx.lr = 0x835DCBFC;
	sub_835E6FA0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6ee0
	ctx.lr = 0x835DCC08;
	sub_835E6EE0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x835dccb0
	if (cr6.lt) goto loc_835DCCB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6ee0
	ctx.lr = 0x835DCC20;
	sub_835E6EE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x835e7018
	ctx.lr = 0x835DCC38;
	sub_835E7018(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6fb8
	ctx.lr = 0x835DCC60;
	sub_835E6FB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dccbc
	if (!cr6.eq) goto loc_835DCCBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835d6228
	ctx.lr = 0x835DCC70;
	sub_835D6228(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x835dccbc
	if (cr6.lt) goto loc_835DCCBC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x835e6890
	ctx.lr = 0x835DCC8C;
	sub_835E6890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dccbc
	if (!cr6.eq) goto loc_835DCCBC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x8332f198
	ctx.lr = 0x835DCCA4;
	sub_8332F198(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835DCCB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_835DCCBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8332f198
	ctx.lr = 0x835DCCC4;
	sub_8332F198(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DCCD0"))) PPC_WEAK_FUNC(sub_835DCCD0);
PPC_FUNC_IMPL(__imp__sub_835DCCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x835DCCD8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,24
	ctx.r26.s64 = ctx.r3.s64 + 24;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// bl 0x835e6810
	ctx.lr = 0x835DCCF8;
	sub_835E6810(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835dcf18
	if (!cr6.gt) goto loc_835DCF18;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r25,r22,4
	ctx.r25.s64 = ctx.r22.s64 + 4;
	// li r29,-1
	ctx.r29.s64 = -1;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
loc_835DCD20:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835e6900
	ctx.lr = 0x835DCD34;
	sub_835E6900(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835dcd48
	if (!cr6.eq) goto loc_835DCD48;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x835dcf0c
	goto loc_835DCF0C;
loc_835DCD48:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e6900
	ctx.lr = 0x835DCD5C;
	sub_835E6900(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835dcd70
	if (cr6.eq) goto loc_835DCD70;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x835dcf0c
	if (!cr6.eq) goto loc_835DCF0C;
loc_835DCD70:
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r31.u8);
	// sth r28,198(r1)
	PPC_STORE_U16(ctx.r1.u32 + 198, ctx.r28.u16);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// std r29,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r29.u64);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
loc_835DCDD8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835dcdd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DCDD8;
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,476(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,484
	ctx.r11.s64 = ctx.r1.s64 + 484;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// sth r31,352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 352, ctx.r31.u16);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stw r31,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r31.u32);
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r31.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 452, ctx.r31.u8);
	// sth r28,454(r1)
	PPC_STORE_U16(ctx.r1.u32 + 454, ctx.r28.u16);
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r29.u32);
	// std r29,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r29.u64);
	// stw r31,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r31.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stw r31,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r31.u32);
	// stw r31,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r31.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stw r31,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r31.u32);
	// stb r31,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, ctx.r31.u8);
loc_835DCE64:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835dce64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DCE64;
	// stw r31,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r31.u32);
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r31.u32);
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r31.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// bl 0x835e6890
	ctx.lr = 0x835DCE9C;
	sub_835E6890(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e6890
	ctx.lr = 0x835DCEAC;
	sub_835E6890(ctx, base);
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// lwz r10,336(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x835dcec4
	if (cr6.eq) goto loc_835DCEC4;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835DCEC4:
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x835dcedc
	if (cr6.eq) goto loc_835DCEDC;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835DCEDC:
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835dcef4
	if (!cr6.eq) goto loc_835DCEF4;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// b 0x835dcefc
	goto loc_835DCEFC;
loc_835DCEF4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x835dcf0c
	if (cr6.eq) goto loc_835DCF0C;
loc_835DCEFC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835e6828
	ctx.lr = 0x835DCF0C;
	sub_835E6828(ctx, base);
loc_835DCF0C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r24
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, xer);
	// blt cr6,0x835dcd20
	if (cr6.lt) goto loc_835DCD20;
loc_835DCF18:
	// addi r3,r22,4
	ctx.r3.s64 = ctx.r22.s64 + 4;
	// bl 0x835e6810
	ctx.lr = 0x835DCF20;
	sub_835E6810(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x835dcf40
	if (cr6.eq) goto loc_835DCF40;
	// cmpw cr6,r23,r24
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r24.s32, xer);
	// blt cr6,0x835dcf40
	if (cr6.lt) goto loc_835DCF40;
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bne cr6,0x835dcf40
	if (!cr6.eq) goto loc_835DCF40;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x835dca00
	ctx.lr = 0x835DCF40;
	sub_835DCA00(ctx, base);
loc_835DCF40:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DCF4C"))) PPC_WEAK_FUNC(sub_835DCF4C);
PPC_FUNC_IMPL(__imp__sub_835DCF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DCF50"))) PPC_WEAK_FUNC(sub_835DCF50);
PPC_FUNC_IMPL(__imp__sub_835DCF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835DCF58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r30,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r30.s64 = 1 - ctx.r11.s64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x835dc4d8
	ctx.lr = 0x835DCF78;
	sub_835DC4D8(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r30,6
	ctx.r9.s64 = ctx.r30.s64 + 6;
	// li r26,208
	ctx.r26.s64 = 208;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// rlwinm r27,r9,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r30,0
	ctx.r30.s64 = 0;
	// divw. r5,r6,r26
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x835dcfd8
	if (cr0.eq) goto loc_835DCFD8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_835DCFA4:
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x835dcbc8
	ctx.lr = 0x835DCFB8;
	sub_835DCBC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x835dcfa4
	if (cr6.lt) goto loc_835DCFA4;
loc_835DCFD8:
	// addic. r30,r31,128
	xer.ca = ctx.r31.u32 > 4294967167;
	ctx.r30.s64 = ctx.r31.s64 + 128;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x835dcff8
	if (cr0.eq) goto loc_835DCFF8;
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
	ctx.lr = 0x835DCFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DCFF8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// subfic r10,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq cr6,0x835dd020
	if (cr6.eq) goto loc_835DD020;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DD020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DD020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD028"))) PPC_WEAK_FUNC(sub_835DD028);
PPC_FUNC_IMPL(__imp__sub_835DD028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DD030;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r31,r8,r10
	ctx.r31.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x835dd074
	if (cr0.eq) goto loc_835DD074;
	// li r30,0
	ctx.r30.s64 = 0;
loc_835DD058:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835e7398
	ctx.lr = 0x835DD068;
	sub_835E7398(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// bne 0x835dd058
	if (!cr0.eq) goto loc_835DD058;
loc_835DD074:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835dccd0
	ctx.lr = 0x835DD07C;
	sub_835DCCD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835dcf50
	ctx.lr = 0x835DD084;
	sub_835DCF50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD090"))) PPC_WEAK_FUNC(sub_835DD090);
PPC_FUNC_IMPL(__imp__sub_835DD090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
loc_835DD0B8:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835dd0dc
	if (cr6.eq) goto loc_835DD0DC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,-36
	ctx.r11.s64 = ctx.r1.s64 + -36;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835DD0D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835dd0d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DD0D0;
loc_835DD0DC:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// bne 0x835dd0b8
	if (!cr0.eq) goto loc_835DD0B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DD0EC"))) PPC_WEAK_FUNC(sub_835DD0EC);
PPC_FUNC_IMPL(__imp__sub_835DD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD0F0"))) PPC_WEAK_FUNC(sub_835DD0F0);
PPC_FUNC_IMPL(__imp__sub_835DD0F0) {
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
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835dd12c
	if (cr6.eq) goto loc_835DD12C;
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
	ctx.lr = 0x835DD12C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DD12C:
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
loc_835DD134:
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x835dd180
	if (cr6.eq) goto loc_835DD180;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x835dd17c
	if (cr6.eq) goto loc_835DD17C;
loc_835DD150:
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_835DD160:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835dd160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DD160;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x835dd150
	if (!cr6.eq) goto loc_835DD150;
loc_835DD17C:
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
loc_835DD180:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bne 0x835dd134
	if (!cr0.eq) goto loc_835DD134;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835dd1a8
	if (cr6.eq) goto loc_835DD1A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DD1A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DD1A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DD1BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_835DD1D8"))) PPC_WEAK_FUNC(sub_835DD1D8);
PPC_FUNC_IMPL(__imp__sub_835DD1D8) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x835dd250
	if (!cr6.gt) goto loc_835DD250;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x835dd2cc
	if (cr6.eq) goto loc_835DD2CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// beq cr6,0x835dd248
	if (cr6.eq) goto loc_835DD248;
loc_835DD228:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x835dd228
	if (!cr6.eq) goto loc_835DD228;
loc_835DD248:
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x835dd2cc
	goto loc_835DD2CC;
loc_835DD250:
	// bge cr6,0x835dd2cc
	if (!cr6.lt) goto loc_835DD2CC;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83547fe8
	ctx.lr = 0x835DD260;
	sub_83547FE8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// subf. r11,r7,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x835dd2ac
	if (cr0.eq) goto loc_835DD2AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_835DD298:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835dd2a4
	if (cr6.eq) goto loc_835DD2A4;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
loc_835DD2A4:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x835dd298
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DD298;
loc_835DD2AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
loc_835DD2CC:
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

__attribute__((alias("__imp__sub_835DD2E4"))) PPC_WEAK_FUNC(sub_835DD2E4);
PPC_FUNC_IMPL(__imp__sub_835DD2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD2E8"))) PPC_WEAK_FUNC(sub_835DD2E8);
PPC_FUNC_IMPL(__imp__sub_835DD2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DD2F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,24
	ctx.r29.s64 = 24;
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
	// ble cr6,0x835dd33c
	if (!cr6.gt) goto loc_835DD33C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x835d6c58
	ctx.lr = 0x835DD334;
	sub_835D6C58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DD33C:
	// bge cr6,0x835dd394
	if (!cr6.lt) goto loc_835DD394;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1e598
	ctx.lr = 0x835DD34C;
	sub_82D1E598(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r9,r10,r29
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	// subf r4,r9,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r9.s64;
	// bl 0x835dd090
	ctx.lr = 0x835DD36C;
	sub_835DD090(ctx, base);
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
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_835DD394:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD39C"))) PPC_WEAK_FUNC(sub_835DD39C);
PPC_FUNC_IMPL(__imp__sub_835DD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD3A0"))) PPC_WEAK_FUNC(sub_835DD3A0);
PPC_FUNC_IMPL(__imp__sub_835DD3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// addi r8,r3,68
	ctx.r8.s64 = ctx.r3.s64 + 68;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r8,r8,44
	ctx.r8.s64 = ctx.r8.s64 + 44;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// sth r5,98(r3)
	PPC_STORE_U16(ctx.r3.u32 + 98, ctx.r5.u16);
loc_835DD458:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835dd458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DD458;
	// std r11,176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 176, ctx.r11.u64);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x835dd1d8
	ctx.lr = 0x835DD484;
	sub_835DD1D8(ctx, base);
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

__attribute__((alias("__imp__sub_835DD49C"))) PPC_WEAK_FUNC(sub_835DD49C);
PPC_FUNC_IMPL(__imp__sub_835DD49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD4A0"))) PPC_WEAK_FUNC(sub_835DD4A0);
PPC_FUNC_IMPL(__imp__sub_835DD4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DD4A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dd510
	if (cr6.eq) goto loc_835DD510;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_835DD4C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835dd3a0
	ctx.lr = 0x835DD4CC;
	sub_835DD3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835dd4e0
	if (cr6.eq) goto loc_835DD4E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d71d0
	ctx.lr = 0x835DD4E0;
	sub_835D71D0(ctx, base);
loc_835DD4E0:
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dd4f8
	if (cr6.eq) goto loc_835DD4F8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835DD4F8;
	sub_825952B8(ctx, base);
loc_835DD4F8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r31,r31,208
	ctx.r31.s64 = ctx.r31.s64 + 208;
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// bne 0x835dd4c4
	if (!cr0.eq) goto loc_835DD4C4;
loc_835DD510:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD518"))) PPC_WEAK_FUNC(sub_835DD518);
PPC_FUNC_IMPL(__imp__sub_835DD518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835DD520;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,315
	ctx.r11.s64 = 20643840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,5041
	ctx.r10.u64 = ctx.r11.u64 | 5041;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x835dd544
	if (!cr6.gt) goto loc_835DD544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x835DD544;
	sub_831CC150(ctx, base);
loc_835DD544:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,208
	ctx.r24.s64 = 208;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x835dd604
	if (!cr6.lt) goto loc_835DD604;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,208
	ctx.r26.s64 = ctx.r4.s64 * 208;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x835DD57C;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x835dd5b8
	if (cr6.eq) goto loc_835DD5B8;
loc_835DD594:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x835dd5a8
	if (cr6.eq) goto loc_835DD5A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d71d0
	ctx.lr = 0x835DD5A8;
	sub_835D71D0(ctx, base);
loc_835DD5A8:
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x835dd594
	if (!cr6.eq) goto loc_835DD594;
loc_835DD5B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x835dd5ec
	if (cr6.eq) goto loc_835DD5EC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x835d7370
	ctx.lr = 0x835DD5DC;
	sub_835D7370(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x835DD5EC;
	sub_825952B8(ctx, base);
loc_835DD5EC:
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_835DD604:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD60C"))) PPC_WEAK_FUNC(sub_835DD60C);
PPC_FUNC_IMPL(__imp__sub_835DD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD610"))) PPC_WEAK_FUNC(sub_835DD610);
PPC_FUNC_IMPL(__imp__sub_835DD610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,315
	ctx.r10.s64 = 20643840;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,208
	ctx.r9.s64 = 208;
	// ori r8,r10,5041
	ctx.r8.u64 = ctx.r10.u64 | 5041;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x835dd644
	if (!cr6.lt) goto loc_835DD644;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_835DD644:
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
	// blt cr6,0x835dd674
	if (cr6.lt) goto loc_835DD674;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_835DD674:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x835dd680
	if (!cr6.lt) goto loc_835DD680;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_835DD680:
	// b 0x835dd518
	sub_835DD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD684"))) PPC_WEAK_FUNC(sub_835DD684);
PPC_FUNC_IMPL(__imp__sub_835DD684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DD688"))) PPC_WEAK_FUNC(sub_835DD688);
PPC_FUNC_IMPL(__imp__sub_835DD688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DD690;
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
	// li r29,208
	ctx.r29.s64 = 208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r11,r11,r29
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x835dd6f4
	if (!cr6.gt) goto loc_835DD6F4;
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x835dd74c
	if (cr6.eq) goto loc_835DD74C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x835d7298
	ctx.lr = 0x835DD6D4;
	sub_835D7298(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x835d7370
	ctx.lr = 0x835DD6E8;
	sub_835D7370(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DD6F4:
	// bge cr6,0x835dd74c
	if (!cr6.lt) goto loc_835DD74C;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835dd610
	ctx.lr = 0x835DD704;
	sub_835DD610(ctx, base);
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
	// bl 0x835dd4a0
	ctx.lr = 0x835DD72C;
	sub_835DD4A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mulli r10,r5,208
	ctx.r10.s64 = ctx.r5.s64 * 208;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_835DD74C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD754"))) PPC_WEAK_FUNC(sub_835DD754);
PPC_FUNC_IMPL(__imp__sub_835DD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD758"))) PPC_WEAK_FUNC(sub_835DD758);
PPC_FUNC_IMPL(__imp__sub_835DD758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835DD760;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// bl 0x835e6d98
	ctx.lr = 0x835DD77C;
	sub_835E6D98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e6bd0
	ctx.lr = 0x835DD784;
	sub_835E6BD0(ctx, base);
	// addi r29,r27,24
	ctx.r29.s64 = ctx.r27.s64 + 24;
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e6d98
	ctx.lr = 0x835DD794;
	sub_835E6D98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e6bd0
	ctx.lr = 0x835DD79C;
	sub_835E6BD0(ctx, base);
	// addi r28,r27,44
	ctx.r28.s64 = ctx.r27.s64 + 44;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835dd688
	ctx.lr = 0x835DD7AC;
	sub_835DD688(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835dd810
	if (cr6.eq) goto loc_835DD810;
	// li r30,0
	ctx.r30.s64 = 0;
loc_835DD7BC:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x835e7930
	ctx.lr = 0x835DD7FC;
	sub_835E7930(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r30,r5,16
	ctx.r30.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// blt cr6,0x835dd7bc
	if (cr6.lt) goto loc_835DD7BC;
loc_835DD810:
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r28,r27,128
	ctx.r28.s64 = ctx.r27.s64 + 128;
	// addi r4,r10,17308
	ctx.r4.s64 = ctx.r10.s64 + 17308;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835DD830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835dd854
	if (cr6.eq) goto loc_835DD854;
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
	ctx.lr = 0x835DD854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DD854:
	// addi r29,r27,96
	ctx.r29.s64 = ctx.r27.s64 + 96;
	// li r30,2
	ctx.r30.s64 = 2;
loc_835DD85C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x835dd2e8
	ctx.lr = 0x835DD868;
	sub_835DD2E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x835dd85c
	if (!cr0.eq) goto loc_835DD85C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835dd890
	if (cr6.eq) goto loc_835DD890;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DD890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DD890:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD89C"))) PPC_WEAK_FUNC(sub_835DD89C);
PPC_FUNC_IMPL(__imp__sub_835DD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD8A0"))) PPC_WEAK_FUNC(sub_835DD8A0);
PPC_FUNC_IMPL(__imp__sub_835DD8A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x835d8df0
	sub_835D8DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD8A4"))) PPC_WEAK_FUNC(sub_835DD8A4);
PPC_FUNC_IMPL(__imp__sub_835DD8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD8A8"))) PPC_WEAK_FUNC(sub_835DD8A8);
PPC_FUNC_IMPL(__imp__sub_835DD8A8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dd908
	if (cr6.eq) goto loc_835DD908;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dd908
	if (cr6.eq) goto loc_835DD908;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// bl 0x835d8e88
	ctx.lr = 0x835DD8F8;
	sub_835D8E88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dd908
	if (!cr6.eq) goto loc_835DD908;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835DD908:
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

__attribute__((alias("__imp__sub_835DD91C"))) PPC_WEAK_FUNC(sub_835DD91C);
PPC_FUNC_IMPL(__imp__sub_835DD91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD920"))) PPC_WEAK_FUNC(sub_835DD920);
PPC_FUNC_IMPL(__imp__sub_835DD920) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835d9848
	sub_835D9848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD92C"))) PPC_WEAK_FUNC(sub_835DD92C);
PPC_FUNC_IMPL(__imp__sub_835DD92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD930"))) PPC_WEAK_FUNC(sub_835DD930);
PPC_FUNC_IMPL(__imp__sub_835DD930) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835d98f0
	sub_835D98F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD93C"))) PPC_WEAK_FUNC(sub_835DD93C);
PPC_FUNC_IMPL(__imp__sub_835DD93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD940"))) PPC_WEAK_FUNC(sub_835DD940);
PPC_FUNC_IMPL(__imp__sub_835DD940) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x835d9978
	sub_835D9978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD948"))) PPC_WEAK_FUNC(sub_835DD948);
PPC_FUNC_IMPL(__imp__sub_835DD948) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835da758
	sub_835DA758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD954"))) PPC_WEAK_FUNC(sub_835DD954);
PPC_FUNC_IMPL(__imp__sub_835DD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD958"))) PPC_WEAK_FUNC(sub_835DD958);
PPC_FUNC_IMPL(__imp__sub_835DD958) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835d9e00
	sub_835D9E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DD964"))) PPC_WEAK_FUNC(sub_835DD964);
PPC_FUNC_IMPL(__imp__sub_835DD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD968"))) PPC_WEAK_FUNC(sub_835DD968);
PPC_FUNC_IMPL(__imp__sub_835DD968) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x835db640
	ctx.lr = 0x835DD984;
	sub_835DB640(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x835dd99c
	if (cr6.eq) goto loc_835DD99C;
	// bl 0x83a95820
	ctx.lr = 0x835DD994;
	sub_83A95820(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_835DD99C:
	// bl 0x835e3720
	ctx.lr = 0x835DD9A0;
	sub_835E3720(ctx, base);
	// bl 0x835dbe98
	ctx.lr = 0x835DD9A4;
	sub_835DBE98(ctx, base);
	// bl 0x835dad88
	ctx.lr = 0x835DD9A8;
	sub_835DAD88(ctx, base);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835dd9c0
	if (cr6.eq) goto loc_835DD9C0;
	// bl 0x83a93f78
	ctx.lr = 0x835DD9B8;
	sub_83A93F78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_835DD9C0:
	// bl 0x83a82ca0
	ctx.lr = 0x835DD9C4;
	sub_83A82CA0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x835DD9C8;
	sub_83102DB0(ctx, base);
	// bl 0x835e7f00
	ctx.lr = 0x835DD9CC;
	sub_835E7F00(ctx, base);
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

__attribute__((alias("__imp__sub_835DD9E4"))) PPC_WEAK_FUNC(sub_835DD9E4);
PPC_FUNC_IMPL(__imp__sub_835DD9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DD9E8"))) PPC_WEAK_FUNC(sub_835DD9E8);
PPC_FUNC_IMPL(__imp__sub_835DD9E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x835dda14
	if (cr6.eq) goto loc_835DDA14;
	// bl 0x83a81a70
	ctx.lr = 0x835DDA10;
	sub_83A81A70(ctx, base);
	// b 0x835dda18
	goto loc_835DDA18;
loc_835DDA14:
	// bl 0x83a824e0
	ctx.lr = 0x835DDA18;
	sub_83A824E0(ctx, base);
loc_835DDA18:
	// lbz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835dda38
	if (cr6.eq) goto loc_835DDA38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DDA38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DDA38:
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// bl 0x83a82e90
	ctx.lr = 0x835DDA40;
	sub_83A82E90(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,248
	ctx.r30.s64 = ctx.r30.s64 + 248;
loc_835DDA48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea590
	ctx.lr = 0x835DDA50;
	sub_831EA590(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x835dda48
	if (cr6.lt) goto loc_835DDA48;
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

__attribute__((alias("__imp__sub_835DDA7C"))) PPC_WEAK_FUNC(sub_835DDA7C);
PPC_FUNC_IMPL(__imp__sub_835DDA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDA80"))) PPC_WEAK_FUNC(sub_835DDA80);
PPC_FUNC_IMPL(__imp__sub_835DDA80) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddab8
	if (cr6.eq) goto loc_835DDAB8;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x835DDAB4;
	sub_831CE980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DDAB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DDAC8"))) PPC_WEAK_FUNC(sub_835DDAC8);
PPC_FUNC_IMPL(__imp__sub_835DDAC8) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddb0c
	if (cr6.eq) goto loc_835DDB0C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a95a28
	ctx.lr = 0x835DDAF8;
	sub_83A95A28(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DDB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DDB1C"))) PPC_WEAK_FUNC(sub_835DDB1C);
PPC_FUNC_IMPL(__imp__sub_835DDB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDB20"))) PPC_WEAK_FUNC(sub_835DDB20);
PPC_FUNC_IMPL(__imp__sub_835DDB20) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddb60
	if (cr6.eq) goto loc_835DDB60;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a8bf58
	ctx.lr = 0x835DDB50;
	sub_83A8BF58(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83a95cd0
	ctx.lr = 0x835DDB5C;
	sub_83A95CD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DDB60:
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

__attribute__((alias("__imp__sub_835DDB74"))) PPC_WEAK_FUNC(sub_835DDB74);
PPC_FUNC_IMPL(__imp__sub_835DDB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDB78"))) PPC_WEAK_FUNC(sub_835DDB78);
PPC_FUNC_IMPL(__imp__sub_835DDB78) {
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
	// bl 0x83a96d20
	ctx.lr = 0x835DDB88;
	sub_83A96D20(ctx, base);
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

__attribute__((alias("__imp__sub_835DDB9C"))) PPC_WEAK_FUNC(sub_835DDB9C);
PPC_FUNC_IMPL(__imp__sub_835DDB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDBA0"))) PPC_WEAK_FUNC(sub_835DDBA0);
PPC_FUNC_IMPL(__imp__sub_835DDBA0) {
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
	// bl 0x83a96d98
	ctx.lr = 0x835DDBB0;
	sub_83A96D98(ctx, base);
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

__attribute__((alias("__imp__sub_835DDBC4"))) PPC_WEAK_FUNC(sub_835DDBC4);
PPC_FUNC_IMPL(__imp__sub_835DDBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDBC8"))) PPC_WEAK_FUNC(sub_835DDBC8);
PPC_FUNC_IMPL(__imp__sub_835DDBC8) {
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
	// bl 0x83a96dc8
	ctx.lr = 0x835DDBD8;
	sub_83A96DC8(ctx, base);
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

__attribute__((alias("__imp__sub_835DDBEC"))) PPC_WEAK_FUNC(sub_835DDBEC);
PPC_FUNC_IMPL(__imp__sub_835DDBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDBF0"))) PPC_WEAK_FUNC(sub_835DDBF0);
PPC_FUNC_IMPL(__imp__sub_835DDBF0) {
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
	// bl 0x83a96df8
	ctx.lr = 0x835DDC00;
	sub_83A96DF8(ctx, base);
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

__attribute__((alias("__imp__sub_835DDC14"))) PPC_WEAK_FUNC(sub_835DDC14);
PPC_FUNC_IMPL(__imp__sub_835DDC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDC18"))) PPC_WEAK_FUNC(sub_835DDC18);
PPC_FUNC_IMPL(__imp__sub_835DDC18) {
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
	// bl 0x83a81c00
	ctx.lr = 0x835DDC28;
	sub_83A81C00(ctx, base);
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

__attribute__((alias("__imp__sub_835DDC3C"))) PPC_WEAK_FUNC(sub_835DDC3C);
PPC_FUNC_IMPL(__imp__sub_835DDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDC40"))) PPC_WEAK_FUNC(sub_835DDC40);
PPC_FUNC_IMPL(__imp__sub_835DDC40) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83a81d90
	ctx.lr = 0x835DDC58;
	sub_83A81D90(ctx, base);
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

__attribute__((alias("__imp__sub_835DDC6C"))) PPC_WEAK_FUNC(sub_835DDC6C);
PPC_FUNC_IMPL(__imp__sub_835DDC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDC70"))) PPC_WEAK_FUNC(sub_835DDC70);
PPC_FUNC_IMPL(__imp__sub_835DDC70) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83a81dd8
	ctx.lr = 0x835DDC88;
	sub_83A81DD8(ctx, base);
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

__attribute__((alias("__imp__sub_835DDC9C"))) PPC_WEAK_FUNC(sub_835DDC9C);
PPC_FUNC_IMPL(__imp__sub_835DDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDCA0"))) PPC_WEAK_FUNC(sub_835DDCA0);
PPC_FUNC_IMPL(__imp__sub_835DDCA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83a81e20
	ctx.lr = 0x835DDCB8;
	sub_83A81E20(ctx, base);
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

__attribute__((alias("__imp__sub_835DDCCC"))) PPC_WEAK_FUNC(sub_835DDCCC);
PPC_FUNC_IMPL(__imp__sub_835DDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDCD0"))) PPC_WEAK_FUNC(sub_835DDCD0);
PPC_FUNC_IMPL(__imp__sub_835DDCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r10,18336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18336);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835DDCE0"))) PPC_WEAK_FUNC(sub_835DDCE0);
PPC_FUNC_IMPL(__imp__sub_835DDCE0) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddd30
	if (cr6.eq) goto loc_835DDD30;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83a81e68
	ctx.lr = 0x835DDD10;
	sub_83A81E68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x835ddd2c
	if (!cr6.lt) goto loc_835DDD2C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// b 0x835ddd30
	goto loc_835DDD30;
loc_835DDD2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835DDD30:
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

__attribute__((alias("__imp__sub_835DDD48"))) PPC_WEAK_FUNC(sub_835DDD48);
PPC_FUNC_IMPL(__imp__sub_835DDD48) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddd88
	if (cr6.eq) goto loc_835DDD88;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a81e70
	ctx.lr = 0x835DDD74;
	sub_83A81E70(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835DDD88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

