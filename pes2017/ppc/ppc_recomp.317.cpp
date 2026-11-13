#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A2E1C"))) PPC_WEAK_FUNC(sub_832A2E1C);
PPC_FUNC_IMPL(__imp__sub_832A2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E20"))) PPC_WEAK_FUNC(sub_832A2E20);
PPC_FUNC_IMPL(__imp__sub_832A2E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2E34"))) PPC_WEAK_FUNC(sub_832A2E34);
PPC_FUNC_IMPL(__imp__sub_832A2E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E38"))) PPC_WEAK_FUNC(sub_832A2E38);
PPC_FUNC_IMPL(__imp__sub_832A2E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2E4C"))) PPC_WEAK_FUNC(sub_832A2E4C);
PPC_FUNC_IMPL(__imp__sub_832A2E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E50"))) PPC_WEAK_FUNC(sub_832A2E50);
PPC_FUNC_IMPL(__imp__sub_832A2E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2E64"))) PPC_WEAK_FUNC(sub_832A2E64);
PPC_FUNC_IMPL(__imp__sub_832A2E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E68"))) PPC_WEAK_FUNC(sub_832A2E68);
PPC_FUNC_IMPL(__imp__sub_832A2E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,64
	ctx.r7.s64 = 64;
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2E7C"))) PPC_WEAK_FUNC(sub_832A2E7C);
PPC_FUNC_IMPL(__imp__sub_832A2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E80"))) PPC_WEAK_FUNC(sub_832A2E80);
PPC_FUNC_IMPL(__imp__sub_832A2E80) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832a2eac
	if (cr6.lt) goto loc_832A2EAC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r5,r11,30056
	ctx.r5.s64 = ctx.r11.s64 + 30056;
	// b 0x832a2f90
	goto loc_832A2F90;
loc_832A2EAC:
	// srawi r10,r11,16
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// li r8,82
	ctx.r8.s64 = 82;
	// li r7,32
	ctx.r7.s64 = 32;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// li r6,91
	ctx.r6.s64 = 91;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// li r5,69
	ctx.r5.s64 = 69;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// ori r9,r9,52429
	ctx.r9.u64 = ctx.r9.u64 | 52429;
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x832a2f10
	if (cr6.lt) goto loc_832A2F10;
	// li r8,10
	ctx.r8.s64 = 10;
	// divwu r6,r10,r8
	ctx.r6.u32 = PPCDivide(ctx.r10.u32, ctx.r8.u32);
	// mulhwu r5,r6,r9
	ctx.r5.u64 = (uint64_t(ctx.r6.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r8,r5,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r7,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r7,r8,48
	ctx.r7.s64 = ctx.r8.s64 + 48;
loc_832A2F10:
	// mulhwu r9,r10,r9
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r6,-9524
	ctx.r5.s64 = ctx.r6.s64 + -9524;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r11,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r6,r11,24,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// rlwinm r31,r11,28,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// clrlwi r30,r11,28
	ctx.r30.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lbzx r7,r6,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbzx r6,r31,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// li r10,58
	ctx.r10.s64 = 58;
	// lbzx r31,r30,r5
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// li r11,93
	ctx.r11.s64 = 93;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r31.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
loc_832A2F90:
	// bl 0x832a1fe8
	ctx.lr = 0x832A2F94;
	sub_832A1FE8(ctx, base);
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

__attribute__((alias("__imp__sub_832A2FAC"))) PPC_WEAK_FUNC(sub_832A2FAC);
PPC_FUNC_IMPL(__imp__sub_832A2FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FB0"))) PPC_WEAK_FUNC(sub_832A2FB0);
PPC_FUNC_IMPL(__imp__sub_832A2FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A2FB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a2fd4
	if (!cr6.lt) goto loc_832A2FD4;
	// bl 0x832a2e80
	ctx.lr = 0x832A2FCC;
	sub_832A2E80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A2FD4:
	// rlwinm r10,r11,15,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x3F;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// li r8,91
	ctx.r8.s64 = 91;
	// rlwinm r6,r11,9,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// ori r9,r9,52429
	ctx.r9.u64 = ctx.r9.u64 | 52429;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bge cr6,0x832a3000
	if (!cr6.lt) goto loc_832A3000;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x832a3024
	goto loc_832A3024;
loc_832A3000:
	// li r8,10
	ctx.r8.s64 = 10;
	// divwu r5,r10,r8
	ctx.r5.u32 = PPCDivide(ctx.r10.u32, ctx.r8.u32);
	// mulhwu r8,r5,r9
	ctx.r8.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
loc_832A3024:
	// mulhwu r9,r10,r9
	ctx.r9.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r7,-9524
	ctx.r31.s64 = ctx.r7.s64 + -9524;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r11,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r30,r11,24,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// clrlwi r28,r11,28
	ctx.r28.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r7,r11,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r29,r11,28,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// rlwinm r27,r6,28,28,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// lbzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// lbzx r30,r29,r31
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbzx r26,r7,r31
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// lbzx r29,r27,r31
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// li r7,58
	ctx.r7.s64 = 58;
	// lbzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r26.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// bl 0x832a1fe8
	ctx.lr = 0x832A30D0;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30D8"))) PPC_WEAK_FUNC(sub_832A30D8);
PPC_FUNC_IMPL(__imp__sub_832A30D8) {
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
	ctx.lr = 0x832A30E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,28
	ctx.r30.s64 = 28;
loc_832A30FC:
	// srw r11,r28,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r30.u8 & 0x3F));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bctrl 
	ctx.lr = 0x832A311C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3130
	if (!cr6.gt) goto loc_832A3130;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3130:
	// addic. r30,r30,-4
	xer.ca = ctx.r30.u32 > 3;
	ctx.r30.s64 = ctx.r30.s64 + -4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x832a30fc
	if (!cr0.lt) goto loc_832A30FC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3140"))) PPC_WEAK_FUNC(sub_832A3140);
PPC_FUNC_IMPL(__imp__sub_832A3140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A3148;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,60
	ctx.r30.s64 = 60;
	// li r29,8
	ctx.r29.s64 = 8;
loc_832A3164:
	// srd r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r30.u8 & 0x7F));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bctrl 
	ctx.lr = 0x832A3184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3198
	if (!cr6.gt) goto loc_832A3198;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3198:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bne 0x832a3164
	if (!cr0.eq) goto loc_832A3164;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A31B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a31cc
	if (!cr6.gt) goto loc_832A31CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A31CC:
	// li r30,28
	ctx.r30.s64 = 28;
loc_832A31D0:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srd r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r27.u64 >> (ctx.r11.u8 & 0x7F));
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// bctrl 
	ctx.lr = 0x832A31F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3208
	if (!cr6.gt) goto loc_832A3208;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3208:
	// addic. r30,r30,-4
	xer.ca = ctx.r30.u32 > 3;
	ctx.r30.s64 = ctx.r30.s64 + -4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x832a31d0
	if (!cr0.lt) goto loc_832A31D0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3218"))) PPC_WEAK_FUNC(sub_832A3218);
PPC_FUNC_IMPL(__imp__sub_832A3218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832A3220;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a3248
	if (cr6.eq) goto loc_832A3248;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r28,82
	ctx.r28.s64 = 82;
	// addi r26,r11,-9456
	ctx.r26.s64 = ctx.r11.s64 + -9456;
	// b 0x832a3254
	goto loc_832A3254;
loc_832A3248:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r28,114
	ctx.r28.s64 = 114;
	// addi r26,r11,-9524
	ctx.r26.s64 = ctx.r11.s64 + -9524;
loc_832A3254:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfic r6,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r11.s64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r6,r3,r9
	ctx.r6.u64 = ctx.r3.u64 & ctx.r9.u64;
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r9,r5,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r3,r8,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// addi r11,r9,17
	ctx.r11.s64 = ctx.r9.s64 + 17;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// subf r30,r11,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a3374
	if (cr6.eq) goto loc_832A3374;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a3304
	if (cr6.eq) goto loc_832A3304;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A32C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a32dc
	if (!cr6.gt) goto loc_832A32DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A32DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A32F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3304
	if (!cr6.gt) goto loc_832A3304;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3304:
	// lfd f1,0(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x832a3320
	if (cr6.eq) goto loc_832A3320;
	// bl 0x832a30d8
	ctx.lr = 0x832A331C;
	sub_832A30D8(ctx, base);
	// b 0x832a3324
	goto loc_832A3324;
loc_832A3320:
	// bl 0x832a3140
	ctx.lr = 0x832A3324;
	sub_832A3140(ctx, base);
loc_832A3324:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a3438
	if (!cr6.gt) goto loc_832A3438;
loc_832A332C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3344;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3358
	if (!cr6.gt) goto loc_832A3358;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3358:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a332c
	if (cr6.gt) goto loc_832A332C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832A3374:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a33b0
	if (!cr6.gt) goto loc_832A33B0;
loc_832A337C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a33a8
	if (!cr6.gt) goto loc_832A33A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A33A8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a337c
	if (cr6.gt) goto loc_832A337C;
loc_832A33B0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a3408
	if (cr6.eq) goto loc_832A3408;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A33CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a33e0
	if (!cr6.gt) goto loc_832A33E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A33E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A33F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3408
	if (!cr6.gt) goto loc_832A3408;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3408:
	// lfd f1,0(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x832a3434
	if (cr6.eq) goto loc_832A3434;
	// bl 0x832a30d8
	ctx.lr = 0x832A3420;
	sub_832A30D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832A3434:
	// bl 0x832a3140
	ctx.lr = 0x832A3438;
	sub_832A3140(ctx, base);
loc_832A3438:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A344C"))) PPC_WEAK_FUNC(sub_832A344C);
PPC_FUNC_IMPL(__imp__sub_832A344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3450"))) PPC_WEAK_FUNC(sub_832A3450);
PPC_FUNC_IMPL(__imp__sub_832A3450) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832a3218
	sub_832A3218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3458"))) PPC_WEAK_FUNC(sub_832A3458);
PPC_FUNC_IMPL(__imp__sub_832A3458) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x832a3218
	sub_832A3218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3460"))) PPC_WEAK_FUNC(sub_832A3460);
PPC_FUNC_IMPL(__imp__sub_832A3460) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicl r11,r7,12,52
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 12) & 0xFFF;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2047
	ctx.r9.s64 = ctx.r11.s64 + -2047;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x832a350c
	if (cr6.eq) goto loc_832A350C;
	// clrldi r9,r7,12
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832a34c0
	if (!cr6.eq) goto loc_832A34C0;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x832a3694
	if (cr6.eq) goto loc_832A3694;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A34C0:
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x832a34e8
	if (!cr6.eq) goto loc_832A34E8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,9000(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9000);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x832a34e0
	if (cr6.lt) goto loc_832A34E0;
	// li r8,3
	ctx.r8.s64 = 3;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A34E0:
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A34E8:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x832a3504
	if (cr6.eq) goto loc_832A3504;
	// li r8,5
	ctx.r8.s64 = 5;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A3504:
	// li r8,6
	ctx.r8.s64 = 6;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A350C:
	// addi r11,r11,-1023
	ctx.r11.s64 = ctx.r11.s64 + -1023;
	// subfic r9,r11,127
	xer.ca = ctx.r11.u32 <= 127;
	ctx.r9.s64 = 127 - ctx.r11.s64;
	// addi r6,r11,126
	ctx.r6.s64 = ctx.r11.s64 + 126;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x832a353c
	if (!cr6.lt) goto loc_832A353C;
	// cmpwi cr6,r11,-126
	cr6.compare<int32_t>(ctx.r11.s32, -126, xer);
	// bge cr6,0x832a3534
	if (!cr6.lt) goto loc_832A3534;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A3534:
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A353C:
	// mulli r11,r11,19728
	ctx.r11.s64 = ctx.r11.s64 * 19728;
	// srawi r11,r11,16
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// subfic r10,r11,17
	xer.ca = ctx.r11.u32 <= 17;
	ctx.r10.s64 = 17 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x832a358c
	if (!cr6.lt) goto loc_832A358C;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// addi r9,r9,30312
	ctx.r9.s64 = ctx.r9.s64 + 30312;
	// blt cr6,0x832a35c0
	if (cr6.lt) goto loc_832A35C0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lfd f0,184(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 184);
	// li r5,23
	ctx.r5.s64 = 23;
	// divwu r4,r6,r5
	ctx.r4.u32 = PPCDivide(ctx.r6.u32, ctx.r5.u32);
	// mulli r6,r4,23
	ctx.r6.s64 = ctx.r4.s64 * 23;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
loc_832A3580:
	// fmul f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f1.f64;
	// bdnz 0x832a3580
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A3580;
	// b 0x832a35c0
	goto loc_832A35C0;
loc_832A358C:
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// addi r9,r9,30120
	ctx.r9.s64 = ctx.r9.s64 + 30120;
	// blt cr6,0x832a35c0
	if (cr6.lt) goto loc_832A35C0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lfd f0,184(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 184);
	// li r5,23
	ctx.r5.s64 = 23;
	// divwu r4,r6,r5
	ctx.r4.u32 = PPCDivide(ctx.r6.u32, ctx.r5.u32);
	// mulli r6,r4,23
	ctx.r6.s64 = ctx.r4.s64 * 23;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
loc_832A35B8:
	// fmul f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f1.f64;
	// bdnz 0x832a35b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A35B8;
loc_832A35C0:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmul f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 * ctx.f1.f64;
	// lfd f13,9000(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9000);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x832a35ec
	if (cr6.lt) goto loc_832A35EC;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x832a35fc
	goto loc_832A35FC;
loc_832A35EC:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_832A35FC:
	// lis r9,319
	ctx.r9.s64 = 20905984;
	// lis r6,-4663
	ctx.r6.s64 = -305594368;
	// ori r5,r9,48773
	ctx.r5.u64 = ctx.r9.u64 | 48773;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// bge cr6,0x832a362c
	if (!cr6.lt) goto loc_832A362C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,30096
	ctx.r5.s64 = ctx.r11.s64 + 30096;
	// addi r3,r10,30068
	ctx.r3.s64 = ctx.r10.s64 + 30068;
	// li r4,329
	ctx.r4.s64 = 329;
	// bl 0x83298458
	ctx.lr = 0x832A362C;
	sub_83298458(ctx, base);
loc_832A362C:
	// lis r9,355
	ctx.r9.s64 = 23265280;
	// lis r6,23946
	ctx.r6.s64 = 1569325056;
	// ori r5,r9,17784
	ctx.r5.u64 = ctx.r9.u64 | 17784;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// bge cr6,0x832a3658
	if (!cr6.lt) goto loc_832A3658;
	// rldicr r9,r10,2,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// b 0x832a3694
	goto loc_832A3694;
loc_832A3658:
	// lis r9,3552
	ctx.r9.s64 = 232783872;
	// lis r6,-22684
	ctx.r6.s64 = -1486618624;
	// ori r5,r9,46771
	ctx.r5.u64 = ctx.r9.u64 | 46771;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// blt cr6,0x832a3694
	if (cr6.lt) goto loc_832A3694;
	// lis r9,7460
	ctx.r9.s64 = 488898560;
	// lis r6,-21422
	ctx.r6.s64 = -1403912192;
	// ori r5,r9,45791
	ctx.r5.u64 = ctx.r9.u64 | 45791;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// bge cr6,0x832a36e0
	if (!cr6.lt) goto loc_832A36E0;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divdu r10,r10,r9
	ctx.r10.u64 = PPCDivide(ctx.r10.u64, ctx.r9.u64);
loc_832A3694:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x832a36ac
	if (cr6.lt) goto loc_832A36AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832A36AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r8,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,15460
	ctx.r7.s64 = ctx.r10.s64 + 15460;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r5,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832A36E0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,30096
	ctx.r5.s64 = ctx.r11.s64 + 30096;
	// addi r3,r10,30068
	ctx.r3.s64 = ctx.r10.s64 + 30068;
	// li r4,350
	ctx.r4.s64 = 350;
	// bl 0x83298458
	ctx.lr = 0x832A36F8;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_832A36F8"))) PPC_WEAK_FUNC(sub_832A36F8);
PPC_FUNC_IMPL(__imp__sub_832A36F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ble cr6,0x832a3714
	if (!cr6.gt) goto loc_832A3714;
	// li r4,17
	ctx.r4.s64 = 17;
loc_832A3714:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,30536
	ctx.r7.s64 = ctx.r10.s64 + 30536;
	// ldx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// divdu r6,r11,r10
	ctx.r6.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// rldicl r5,r10,63,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// mulld r4,r6,r10
	ctx.r4.s64 = ctx.r6.s64 * ctx.r10.s64;
	// subf r8,r4,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r4.s64;
	// tdllei r10,0
	// cmpld cr6,r8,r5
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r5.u64, xer);
	// blt cr6,0x832a3768
	if (cr6.lt) goto loc_832A3768;
	// lis r8,3552
	ctx.r8.s64 = 232783872;
	// lis r7,-22684
	ctx.r7.s64 = -1486618624;
	// ori r6,r8,46771
	ctx.r6.u64 = ctx.r8.u64 | 46771;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, xer);
	// blt cr6,0x832a3768
	if (cr6.lt) goto loc_832A3768;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divdu r11,r11,r10
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
loc_832A3768:
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A3774"))) PPC_WEAK_FUNC(sub_832A3774);
PPC_FUNC_IMPL(__imp__sub_832A3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3778"))) PPC_WEAK_FUNC(sub_832A3778);
PPC_FUNC_IMPL(__imp__sub_832A3778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r11,17
	ctx.r11.s64 = 17;
	// li r7,10
	ctx.r7.s64 = 10;
loc_832A3784:
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x832a37dc
	if (cr6.eq) goto loc_832A37DC;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// lis r8,-13108
	ctx.r8.s64 = -859045888;
	// ori r6,r9,52429
	ctx.r6.u64 = ctx.r9.u64 | 52429;
	// ori r5,r8,52428
	ctx.r5.u64 = ctx.r8.u64 | 52428;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// mulhdu r3,r10,r6
	ctx.r3.u64 = ((unsigned __int128)ctx.r10.u64 * (unsigned __int128)ctx.r6.u64) >> 64;
	// rldicl r9,r3,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rldicr r8,r9,2,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r8,r9,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divdu r10,r10,r7
	ctx.r10.u64 = PPCDivide(ctx.r10.u64, ctx.r7.u64);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r9,48
	ctx.r5.s64 = ctx.r9.s64 + 48;
	// stbx r5,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x832a3784
	if (!cr0.lt) goto loc_832A3784;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,18(r4)
	PPC_STORE_U8(ctx.r4.u32 + 18, ctx.r11.u8);
	// blr 
	return;
loc_832A37DC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832a37fc
	if (cr6.lt) goto loc_832A37FC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,48
	ctx.r10.s64 = 48;
loc_832A37F0:
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a37f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A37F0;
loc_832A37FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,18(r4)
	PPC_STORE_U8(ctx.r4.u32 + 18, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A3808"))) PPC_WEAK_FUNC(sub_832A3808);
PPC_FUNC_IMPL(__imp__sub_832A3808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832A3810;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x832a385c
	if (!cr6.lt) goto loc_832A385C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3924
	if (!cr6.gt) goto loc_832A3924;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x832a3924
	goto loc_832A3924;
loc_832A385C:
	// cmpwi cr6,r28,17
	cr6.compare<int32_t>(ctx.r28.s32, 17, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bge cr6,0x832a38ac
	if (!cr6.lt) goto loc_832A38AC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x832a3924
	if (cr6.lt) goto loc_832A3924;
loc_832A3870:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a389c
	if (!cr6.gt) goto loc_832A389C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A389C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// ble cr6,0x832a3870
	if (!cr6.gt) goto loc_832A3870;
	// b 0x832a3924
	goto loc_832A3924;
loc_832A38AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A38C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a38d8
	if (!cr6.gt) goto loc_832A38D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A38D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(ctx.r30.s32, 17, xer);
	// blt cr6,0x832a38ac
	if (cr6.lt) goto loc_832A38AC;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bgt cr6,0x832a3924
	if (cr6.gt) goto loc_832A3924;
loc_832A38EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3918
	if (!cr6.gt) goto loc_832A3918;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3918:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// ble cr6,0x832a38ec
	if (!cr6.gt) goto loc_832A38EC;
loc_832A3924:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | ctx.r29.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832a3a40
	if (cr6.eq) goto loc_832A3A40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3964
	if (!cr6.gt) goto loc_832A3964;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3964:
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// add r27,r30,r29
	ctx.r27.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,17
	cr6.compare<int32_t>(ctx.r27.s32, 17, xer);
	// ble cr6,0x832a397c
	if (!cr6.gt) goto loc_832A397C;
	// li r26,17
	ctx.r26.s64 = 17;
loc_832A397C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832a39c0
	if (!cr6.lt) goto loc_832A39C0;
	// neg r29,r30
	ctx.r29.s64 = -ctx.r30.s64;
	// extsb r28,r24
	ctx.r28.s64 = ctx.r24.s8;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
loc_832A3990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A39A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a39b8
	if (!cr6.gt) goto loc_832A39B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A39B8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x832a3990
	if (!cr0.eq) goto loc_832A3990;
loc_832A39C0:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bge cr6,0x832a3a00
	if (!cr6.lt) goto loc_832A3A00;
loc_832A39C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A39E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a39f4
	if (!cr6.gt) goto loc_832A39F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A39F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a39c8
	if (cr6.lt) goto loc_832A39C8;
loc_832A3A00:
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// bge cr6,0x832a3a40
	if (!cr6.lt) goto loc_832A3A40;
	// extsb r29,r24
	ctx.r29.s64 = ctx.r24.s8;
	// subf r30,r30,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r30.s64;
loc_832A3A10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3A24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3a38
	if (!cr6.gt) goto loc_832A3A38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3A38:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x832a3a10
	if (!cr0.eq) goto loc_832A3A10;
loc_832A3A40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3A48"))) PPC_WEAK_FUNC(sub_832A3A48);
PPC_FUNC_IMPL(__imp__sub_832A3A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832A3A50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x832A3A84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3a98
	if (!cr6.gt) goto loc_832A3A98;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3A98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832a3b74
	if (cr6.eq) goto loc_832A3B74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3AC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3ad8
	if (!cr6.gt) goto loc_832A3AD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3AD8:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,17
	cr6.compare<int32_t>(ctx.r28.s32, 17, xer);
	// ble cr6,0x832a3af4
	if (!cr6.gt) goto loc_832A3AF4;
	// li r27,17
	ctx.r27.s64 = 17;
	// b 0x832a3afc
	goto loc_832A3AFC;
loc_832A3AF4:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// ble cr6,0x832a3b74
	if (!cr6.gt) goto loc_832A3B74;
loc_832A3AFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3B14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3b28
	if (!cr6.gt) goto loc_832A3B28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3B28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x832a3afc
	if (cr6.lt) goto loc_832A3AFC;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bge cr6,0x832a3b74
	if (!cr6.lt) goto loc_832A3B74;
	// extsb r29,r26
	ctx.r29.s64 = ctx.r26.s8;
	// subf r30,r30,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r30.s64;
loc_832A3B44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3B58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3b6c
	if (!cr6.gt) goto loc_832A3B6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3B6C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x832a3b44
	if (!cr0.eq) goto loc_832A3B44;
loc_832A3B74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r4,r24
	ctx.r4.s64 = ctx.r24.s8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A3B88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3b9c
	if (!cr6.gt) goto loc_832A3B9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3B9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// blt cr6,0x832a3bd0
	if (cr6.lt) goto loc_832A3BD0;
	// li r4,43
	ctx.r4.s64 = 43;
	// bctrl 
	ctx.lr = 0x832A3BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3bf0
	if (!cr6.gt) goto loc_832A3BF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x832a3bf0
	goto loc_832A3BF0;
loc_832A3BD0:
	// li r4,45
	ctx.r4.s64 = 45;
	// bctrl 
	ctx.lr = 0x832A3BD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3bec
	if (!cr6.gt) goto loc_832A3BEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3BEC:
	// neg r25,r25
	ctx.r25.s64 = -ctx.r25.s64;
loc_832A3BF0:
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divw r11,r25,r11
	ctx.r11.s32 = PPCDivide(ctx.r25.s32, ctx.r11.s32);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bctrl 
	ctx.lr = 0x832A3C10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3c24
	if (!cr6.gt) goto loc_832A3C24;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3C24:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// mulhw r8,r25,r9
	ctx.r8.s64 = (int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r6,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r6.s64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bctrl 
	ctx.lr = 0x832A3C64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a3c78
	if (!cr6.gt) goto loc_832A3C78;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A3C78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3C80"))) PPC_WEAK_FUNC(sub_832A3C80);
PPC_FUNC_IMPL(__imp__sub_832A3C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A3C88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832a3ca8
	if (!cr6.lt) goto loc_832A3CA8;
	// li r30,6
	ctx.r30.s64 = 6;
loc_832A3CA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x832a36f8
	ctx.lr = 0x832A3CBC;
	sub_832A36F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832a3778
	ctx.lr = 0x832A3CC4;
	sub_832A3778(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a3cdc
	if (!cr6.lt) goto loc_832A3CDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a3ce0
	goto loc_832A3CE0;
loc_832A3CDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832A3CE0:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x832a3d00
	if (cr6.eq) goto loc_832A3D00;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832A3D00:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r3,r10,14344
	ctx.r3.s64 = ctx.r10.s64 + 14344;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3D18"))) PPC_WEAK_FUNC(sub_832A3D18);
PPC_FUNC_IMPL(__imp__sub_832A3D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A3D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832a3d40
	if (!cr6.lt) goto loc_832A3D40;
	// li r30,2
	ctx.r30.s64 = 2;
loc_832A3D40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x832a36f8
	ctx.lr = 0x832A3D54;
	sub_832A36F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832a3778
	ctx.lr = 0x832A3D5C;
	sub_832A3778(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a3d74
	if (!cr6.lt) goto loc_832A3D74;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a3d78
	goto loc_832A3D78;
loc_832A3D74:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832A3D78:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x832a3d98
	if (cr6.eq) goto loc_832A3D98;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832A3D98:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r3,r10,14344
	ctx.r3.s64 = ctx.r10.s64 + 14344;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3DB0"))) PPC_WEAK_FUNC(sub_832A3DB0);
PPC_FUNC_IMPL(__imp__sub_832A3DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A3DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x832a3dd8
	if (!cr6.lt) goto loc_832A3DD8;
	// li r31,6
	ctx.r31.s64 = 6;
loc_832A3DD8:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x832a36f8
	ctx.lr = 0x832A3DE0;
	sub_832A36F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832a3778
	ctx.lr = 0x832A3DE8;
	sub_832A3778(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x832a3e0c
	if (cr6.eq) goto loc_832A3E0C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832A3E0C:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r3,r10,14920
	ctx.r3.s64 = ctx.r10.s64 + 14920;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3E28"))) PPC_WEAK_FUNC(sub_832A3E28);
PPC_FUNC_IMPL(__imp__sub_832A3E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A3E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x832a3e60
	if (cr6.gt) goto loc_832A3E60;
	// subfic r11,r31,0
	xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_832A3E60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a36f8
	ctx.lr = 0x832A3E6C;
	sub_832A36F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832a3778
	ctx.lr = 0x832A3E74;
	sub_832A3778(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x832a3f0c
	if (!cr6.lt) goto loc_832A3F0C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832a3ed0
	if (!cr6.eq) goto loc_832A3ED0;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// ble cr6,0x832a3eb4
	if (!cr6.gt) goto loc_832A3EB4;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x832a3ebc
	goto loc_832A3EBC;
loc_832A3EB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832a3ed0
	if (!cr6.gt) goto loc_832A3ED0;
loc_832A3EBC:
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,48
	cr6.compare<uint32_t>(ctx.r9.u32, 48, xer);
	// bne cr6,0x832a3ed0
	if (!cr6.eq) goto loc_832A3ED0;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x832a3ebc
	if (cr0.gt) goto loc_832A3EBC;
loc_832A3ED0:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x832a3ef0
	if (cr6.eq) goto loc_832A3EF0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_832A3EF0:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// addi r3,r9,14920
	ctx.r3.s64 = ctx.r9.s64 + 14920;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A3F0C:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832a3f58
	if (!cr6.eq) goto loc_832A3F58;
	// cmpwi cr6,r31,17
	cr6.compare<int32_t>(ctx.r31.s32, 17, xer);
	// ble cr6,0x832a3f34
	if (!cr6.gt) goto loc_832A3F34;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// bge cr6,0x832a3f58
	if (!cr6.lt) goto loc_832A3F58;
	// li r31,17
	ctx.r31.s64 = 17;
loc_832A3F34:
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// ble cr6,0x832a3f58
	if (!cr6.gt) goto loc_832A3F58;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_832A3F40:
	// lbzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,48
	cr6.compare<uint32_t>(ctx.r7.u32, 48, xer);
	// bne cr6,0x832a3f58
	if (!cr6.eq) goto loc_832A3F58;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bgt cr6,0x832a3f40
	if (cr6.gt) goto loc_832A3F40;
loc_832A3F58:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bge cr6,0x832a3f6c
	if (!cr6.lt) goto loc_832A3F6C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_832A3F6C:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x832a3f88
	if (cr6.eq) goto loc_832A3F88;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832A3F88:
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r3,r9,14344
	ctx.r3.s64 = ctx.r9.s64 + 14344;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3FA0"))) PPC_WEAK_FUNC(sub_832A3FA0);
PPC_FUNC_IMPL(__imp__sub_832A3FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832A3FA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfd f1,0(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// bl 0x832a3460
	ctx.lr = 0x832A3FD0;
	sub_832A3460(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a40b0
	if (cr6.eq) goto loc_832A40B0;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x83296ba8
	ctx.lr = 0x832A3FE4;
	sub_83296BA8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a4054
	if (cr6.eq) goto loc_832A4054;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A4004;
	sub_832A1F80(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a42b8
	if (!cr6.gt) goto loc_832A42B8;
loc_832A400C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A4024;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a4038
	if (!cr6.gt) goto loc_832A4038;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A4038:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a400c
	if (cr6.gt) goto loc_832A400C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832A4054:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a4090
	if (!cr6.gt) goto loc_832A4090;
loc_832A405C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A4074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a4088
	if (!cr6.gt) goto loc_832A4088;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A4088:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a405c
	if (cr6.gt) goto loc_832A405C;
loc_832A4090:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A409C;
	sub_832A1F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832A40B0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x832A40C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lbz r8,93(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r10,30680
	ctx.r7.s64 = ctx.r10.s64 + 30680;
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lbzx r26,r8,r7
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// beq cr6,0x832a40f4
	if (cr6.eq) goto loc_832A40F4;
	// li r28,45
	ctx.r28.s64 = 45;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x832a412c
	goto loc_832A412C;
loc_832A40F4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a4110
	if (cr6.eq) goto loc_832A4110;
	// li r28,43
	ctx.r28.s64 = 43;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x832a412c
	goto loc_832A412C;
loc_832A4110:
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4128
	if (cr6.eq) goto loc_832A4128;
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// b 0x832a412c
	goto loc_832A412C;
loc_832A4128:
	// li r28,0
	ctx.r28.s64 = 0;
loc_832A412C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a41dc
	if (cr6.eq) goto loc_832A41DC;
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a416c
	if (cr6.eq) goto loc_832A416C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A4158;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a416c
	if (!cr6.gt) goto loc_832A416C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A416C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832A418C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a42b8
	if (!cr6.gt) goto loc_832A42B8;
loc_832A4194:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A41AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a41c0
	if (!cr6.gt) goto loc_832A41C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A41C0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a4194
	if (cr6.gt) goto loc_832A4194;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832A41DC:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a422c
	if (cr6.eq) goto loc_832A422C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a4268
	if (!cr6.gt) goto loc_832A4268;
	// extsb r29,r26
	ctx.r29.s64 = ctx.r26.s8;
loc_832A41F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A420C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a4220
	if (!cr6.gt) goto loc_832A4220;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A4220:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a41f4
	if (cr6.gt) goto loc_832A41F4;
	// b 0x832a4268
	goto loc_832A4268;
loc_832A422C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a4268
	if (!cr6.gt) goto loc_832A4268;
loc_832A4234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A424C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a4260
	if (!cr6.gt) goto loc_832A4260;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A4260:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a4234
	if (cr6.gt) goto loc_832A4234;
loc_832A4268:
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a4298
	if (cr6.eq) goto loc_832A4298;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A4284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a4298
	if (!cr6.gt) goto loc_832A4298;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A4298:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832A42B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832A42B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A42CC"))) PPC_WEAK_FUNC(sub_832A42CC);
PPC_FUNC_IMPL(__imp__sub_832A42CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A42D0"))) PPC_WEAK_FUNC(sub_832A42D0);
PPC_FUNC_IMPL(__imp__sub_832A42D0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a4304
	if (cr6.eq) goto loc_832A4304;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// b 0x832a430c
	goto loc_832A430C;
loc_832A4304:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
loc_832A430C:
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x832a4320
	if (!cr6.eq) goto loc_832A4320;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x832a43c8
	goto loc_832A43C8;
loc_832A4320:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_832A4328:
	// mulld r9,r11,r6
	ctx.r9.s64 = ctx.r11.s64 * ctx.r6.s64;
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// blt cr6,0x832a4344
	if (cr6.lt) goto loc_832A4344;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x832a4328
	if (cr6.lt) goto loc_832A4328;
loc_832A4344:
	// li r9,52
	ctx.r9.s64 = 52;
	// divdu r7,r10,r11
	ctx.r7.u64 = PPCDivide(ctx.r10.u64, ctx.r11.u64);
	// divdu r8,r10,r11
	ctx.r8.u64 = PPCDivide(ctx.r10.u64, ctx.r11.u64);
	// mulld r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 * ctx.r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// tdllei r11,0
	// tdllei r11,0
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_832A4368:
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r9,r9,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// blt cr6,0x832a4380
	if (cr6.lt) goto loc_832A4380;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
loc_832A4380:
	// bdnz 0x832a4368
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A4368;
	// rldicr r11,r8,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 52) & 0xFFF0000000000000;
	// li r10,1
	ctx.r10.s64 = 1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rldicr r10,r10,53,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// li r9,1023
	ctx.r9.s64 = 1023;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// rldicr r9,r9,52,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 52) & 0xFFF0000000000000;
	// blt cr6,0x832a43bc
	if (cr6.lt) goto loc_832A43BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r8,r8,52,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 52) & 0xFFFFFFFFFFFFFFFF;
loc_832A43AC:
	// rldicl r11,r11,63,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, xer);
	// bge cr6,0x832a43ac
	if (!cr6.lt) goto loc_832A43AC;
loc_832A43BC:
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_832A43C8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15640
	ctx.r5.s64 = ctx.r11.s64 + 15640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a3fa0
	ctx.lr = 0x832A43E0;
	sub_832A3FA0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a441c
	if (cr6.eq) goto loc_832A441C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,30688
	ctx.r9.s64 = ctx.r11.s64 + 30688;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bctrl 
	ctx.lr = 0x832A4408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a441c
	if (!cr6.gt) goto loc_832A441C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_832A441C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
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

__attribute__((alias("__imp__sub_832A4440"))) PPC_WEAK_FUNC(sub_832A4440);
PPC_FUNC_IMPL(__imp__sub_832A4440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,15488
	ctx.r5.s64 = ctx.r11.s64 + 15488;
	// b 0x832a3fa0
	sub_832A3FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4454"))) PPC_WEAK_FUNC(sub_832A4454);
PPC_FUNC_IMPL(__imp__sub_832A4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4458"))) PPC_WEAK_FUNC(sub_832A4458);
PPC_FUNC_IMPL(__imp__sub_832A4458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,101
	ctx.r6.s64 = 101;
	// addi r5,r11,15792
	ctx.r5.s64 = ctx.r11.s64 + 15792;
	// b 0x832a3fa0
	sub_832A3FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A446C"))) PPC_WEAK_FUNC(sub_832A446C);
PPC_FUNC_IMPL(__imp__sub_832A446C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4470"))) PPC_WEAK_FUNC(sub_832A4470);
PPC_FUNC_IMPL(__imp__sub_832A4470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,69
	ctx.r6.s64 = 69;
	// addi r5,r11,15792
	ctx.r5.s64 = ctx.r11.s64 + 15792;
	// b 0x832a3fa0
	sub_832A3FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4484"))) PPC_WEAK_FUNC(sub_832A4484);
PPC_FUNC_IMPL(__imp__sub_832A4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4488"))) PPC_WEAK_FUNC(sub_832A4488);
PPC_FUNC_IMPL(__imp__sub_832A4488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,101
	ctx.r6.s64 = 101;
	// addi r5,r11,15912
	ctx.r5.s64 = ctx.r11.s64 + 15912;
	// b 0x832a3fa0
	sub_832A3FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A449C"))) PPC_WEAK_FUNC(sub_832A449C);
PPC_FUNC_IMPL(__imp__sub_832A449C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A44A0"))) PPC_WEAK_FUNC(sub_832A44A0);
PPC_FUNC_IMPL(__imp__sub_832A44A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,69
	ctx.r6.s64 = 69;
	// addi r5,r11,15912
	ctx.r5.s64 = ctx.r11.s64 + 15912;
	// b 0x832a3fa0
	sub_832A3FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A44B4"))) PPC_WEAK_FUNC(sub_832A44B4);
PPC_FUNC_IMPL(__imp__sub_832A44B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A44B8"))) PPC_WEAK_FUNC(sub_832A44B8);
PPC_FUNC_IMPL(__imp__sub_832A44B8) {
	PPC_FUNC_PROLOGUE();
	// li r6,1000
	ctx.r6.s64 = 1000;
	// b 0x832a42d0
	sub_832A42D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A44C0"))) PPC_WEAK_FUNC(sub_832A44C0);
PPC_FUNC_IMPL(__imp__sub_832A44C0) {
	PPC_FUNC_PROLOGUE();
	// li r6,1024
	ctx.r6.s64 = 1024;
	// b 0x832a42d0
	sub_832A42D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A44C8"))) PPC_WEAK_FUNC(sub_832A44C8);
PPC_FUNC_IMPL(__imp__sub_832A44C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A44D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x832a44fc
	if (cr6.lt) goto loc_832A44FC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r11,-31520
	ctx.r5.s64 = ctx.r11.s64 + -31520;
	// bl 0x832a1fe8
	ctx.lr = 0x832A44F4;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A44FC:
	// srawi r11,r29,16
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 16;
	// li r9,91
	ctx.r9.s64 = 91;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// addi r31,r10,15488
	ctx.r31.s64 = ctx.r10.s64 + 15488;
	// bge cr6,0x832a454c
	if (!cr6.lt) goto loc_832A454C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a454c
	if (cr6.eq) goto loc_832A454C;
	// li r5,63
	ctx.r5.s64 = 63;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x83296be0
	ctx.lr = 0x832A453C;
	sub_83296BE0(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lwz r6,17304(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17304);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x832a456c
	goto loc_832A456C;
loc_832A454C:
	// lwz r6,17304(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17304);
	// rlwinm r9,r11,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// lbzx r7,r9,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
loc_832A456C:
	// li r8,58
	ctx.r8.s64 = 58;
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r8,r9,1760
	ctx.r8.s64 = ctx.r9.s64 + 1760;
loc_832A4588:
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r9,r5,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x832a4624
	if (cr0.eq) goto loc_832A4624;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x832a45b4
	if (!cr6.gt) goto loc_832A45B4;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// b 0x832a45b8
	goto loc_832A45B8;
loc_832A45B4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_832A45B8:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x832a4588
	if (!cr6.eq) goto loc_832A4588;
loc_832A45C0:
	// srawi r11,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// rlwinm r10,r7,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r9,28,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xF;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// lbzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lbzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
loc_832A45FC:
	// li r10,93
	ctx.r10.s64 = 93;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a1fe8
	ctx.lr = 0x832A461C;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A4624:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a45c0
	if (cr6.eq) goto loc_832A45C0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x83296be0
	ctx.lr = 0x832A4640;
	sub_83296BE0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x832a45fc
	goto loc_832A45FC;
}

__attribute__((alias("__imp__sub_832A4648"))) PPC_WEAK_FUNC(sub_832A4648);
PPC_FUNC_IMPL(__imp__sub_832A4648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r6,10
	ctx.r6.s64 = 10;
	// ori r7,r10,52429
	ctx.r7.u64 = ctx.r10.u64 | 52429;
loc_832A465C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a4698
	if (cr6.eq) goto loc_832A4698;
	// mulhwu r10,r4,r7
	ctx.r10.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// divwu r4,r4,r6
	ctx.r4.u32 = PPCDivide(ctx.r4.u32, ctx.r6.u32);
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x832a465c
	if (!cr0.lt) goto loc_832A465C;
	// b 0x832a46b8
	goto loc_832A46B8;
loc_832A4698:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832a46b8
	if (cr6.lt) goto loc_832A46B8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,48
	ctx.r10.s64 = 48;
loc_832A46AC:
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a46ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A46AC;
loc_832A46B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,10(r8)
	PPC_STORE_U8(ctx.r8.u32 + 10, ctx.r3.u8);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a46e4
	if (!cr6.eq) goto loc_832A46E4;
loc_832A46D0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a46d0
	if (cr6.eq) goto loc_832A46D0;
loc_832A46E4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A46F4"))) PPC_WEAK_FUNC(sub_832A46F4);
PPC_FUNC_IMPL(__imp__sub_832A46F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A46F8"))) PPC_WEAK_FUNC(sub_832A46F8);
PPC_FUNC_IMPL(__imp__sub_832A46F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r7,10
	ctx.r7.s64 = 10;
loc_832A4704:
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x832a4754
	if (cr6.eq) goto loc_832A4754;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// ori r6,r10,52429
	ctx.r6.u64 = ctx.r10.u64 | 52429;
	// ori r5,r9,52428
	ctx.r5.u64 = ctx.r9.u64 | 52428;
	// rldimi r6,r5,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// mulhdu r3,r4,r6
	ctx.r3.u64 = ((unsigned __int128)ctx.r4.u64 * (unsigned __int128)ctx.r6.u64) >> 64;
	// rldicl r10,r3,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rldicr r9,r10,2,61
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r6,r9,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r9.s64;
	// divdu r4,r4,r7
	ctx.r4.u64 = PPCDivide(ctx.r4.u64, ctx.r7.u64);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// stbx r5,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u8);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x832a4704
	if (!cr0.lt) goto loc_832A4704;
	// b 0x832a4774
	goto loc_832A4774;
loc_832A4754:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832a4774
	if (cr6.lt) goto loc_832A4774;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,48
	ctx.r10.s64 = 48;
loc_832A4768:
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a4768
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A4768;
loc_832A4774:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r3.u8);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a47a0
	if (!cr6.eq) goto loc_832A47A0;
loc_832A478C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a478c
	if (cr6.eq) goto loc_832A478C;
loc_832A47A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A47B0"))) PPC_WEAK_FUNC(sub_832A47B0);
PPC_FUNC_IMPL(__imp__sub_832A47B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,10
	ctx.r11.s64 = 10;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832A47C0:
	// clrlwi r9,r4,29
	ctx.r9.u64 = ctx.r4.u32 & 0x7;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a47c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A47C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a4808
	if (!cr6.eq) goto loc_832A4808;
loc_832A47F4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a47f4
	if (cr6.eq) goto loc_832A47F4;
loc_832A4808:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A4818"))) PPC_WEAK_FUNC(sub_832A4818);
PPC_FUNC_IMPL(__imp__sub_832A4818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,22
	ctx.r9.s64 = 22;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,21
	ctx.r11.s64 = 21;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832A4828:
	// clrlwi r9,r4,29
	ctx.r9.u64 = ctx.r4.u32 & 0x7;
	// rldicl r4,r4,61,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a4828
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A4828;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,22(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22, ctx.r3.u8);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a486c
	if (!cr6.eq) goto loc_832A486C;
loc_832A4858:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a4858
	if (cr6.eq) goto loc_832A4858;
loc_832A486C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A487C"))) PPC_WEAK_FUNC(sub_832A487C);
PPC_FUNC_IMPL(__imp__sub_832A487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4880"))) PPC_WEAK_FUNC(sub_832A4880);
PPC_FUNC_IMPL(__imp__sub_832A4880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r10,-9524
	ctx.r8.s64 = ctx.r10.s64 + -9524;
	// clrlwi r7,r4,28
	ctx.r7.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r6,r9,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r4,r6,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// lbzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r3,r6,28
	ctx.r3.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r6,r9,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r7,r4,28
	ctx.r7.u64 = ctx.r4.u32 & 0xF;
	// clrlwi r4,r9,28
	ctx.r4.u64 = ctx.r9.u32 & 0xF;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// rlwinm r9,r6,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// lbzx r5,r3,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r9,r9,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xF;
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbzx r5,r4,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r3,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r3.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bne cr6,0x832a4930
	if (!cr6.eq) goto loc_832A4930;
loc_832A491C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// beq cr6,0x832a491c
	if (cr6.eq) goto loc_832A491C;
loc_832A4930:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A4940"))) PPC_WEAK_FUNC(sub_832A4940);
PPC_FUNC_IMPL(__imp__sub_832A4940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r8,r8,-9524
	ctx.r8.s64 = ctx.r8.s64 + -9524;
loc_832A495C:
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rldicl r4,r4,60,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a495c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A495C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r3.u8);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a49a0
	if (!cr6.eq) goto loc_832A49A0;
loc_832A498C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a498c
	if (cr6.eq) goto loc_832A498C;
loc_832A49A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A49B0"))) PPC_WEAK_FUNC(sub_832A49B0);
PPC_FUNC_IMPL(__imp__sub_832A49B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r10,-9456
	ctx.r8.s64 = ctx.r10.s64 + -9456;
	// clrlwi r7,r4,28
	ctx.r7.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r6,r9,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r4,r6,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// lbzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r3,r6,28
	ctx.r3.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r6,r9,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r7,r4,28
	ctx.r7.u64 = ctx.r4.u32 & 0xF;
	// clrlwi r4,r9,28
	ctx.r4.u64 = ctx.r9.u32 & 0xF;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// rlwinm r9,r6,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// lbzx r5,r3,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rlwinm r9,r9,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xF;
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbzx r5,r4,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lbzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r3,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r3.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bne cr6,0x832a4a60
	if (!cr6.eq) goto loc_832A4A60;
loc_832A4A4C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// beq cr6,0x832a4a4c
	if (cr6.eq) goto loc_832A4A4C;
loc_832A4A60:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A4A70"))) PPC_WEAK_FUNC(sub_832A4A70);
PPC_FUNC_IMPL(__imp__sub_832A4A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,15
	ctx.r11.s64 = 15;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r8,r8,-9456
	ctx.r8.s64 = ctx.r8.s64 + -9456;
loc_832A4A8C:
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rldicl r4,r4,60,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a4a8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A4A8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r3.u8);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a4ad0
	if (!cr6.eq) goto loc_832A4AD0;
loc_832A4ABC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a4abc
	if (cr6.eq) goto loc_832A4ABC;
loc_832A4AD0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A4AE0"))) PPC_WEAK_FUNC(sub_832A4AE0);
PPC_FUNC_IMPL(__imp__sub_832A4AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,31
	ctx.r11.s64 = 31;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832A4AF0:
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a4af0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A4AF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r3.u8);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a4b38
	if (!cr6.eq) goto loc_832A4B38;
loc_832A4B24:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a4b24
	if (cr6.eq) goto loc_832A4B24;
loc_832A4B38:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A4B48"))) PPC_WEAK_FUNC(sub_832A4B48);
PPC_FUNC_IMPL(__imp__sub_832A4B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,63
	ctx.r11.s64 = 63;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832A4B58:
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rldicl r4,r4,63,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x832a4b58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A4B58;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r3.u8);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x832a4b9c
	if (!cr6.eq) goto loc_832A4B9C;
loc_832A4B88:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// beq cr6,0x832a4b88
	if (cr6.eq) goto loc_832A4B88;
loc_832A4B9C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A4BAC"))) PPC_WEAK_FUNC(sub_832A4BAC);
PPC_FUNC_IMPL(__imp__sub_832A4BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4BB0"))) PPC_WEAK_FUNC(sub_832A4BB0);
PPC_FUNC_IMPL(__imp__sub_832A4BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4bc8
	if (cr6.eq) goto loc_832A4BC8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832A4BC8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a4be4
	if (!cr6.lt) goto loc_832A4BE4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,45
	ctx.r10.s64 = 45;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// b 0x832a4c20
	goto loc_832A4C20;
loc_832A4BE4:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4c00
	if (cr6.eq) goto loc_832A4C00;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,43
	ctx.r10.s64 = 43;
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// b 0x832a4c20
	goto loc_832A4C20;
loc_832A4C00:
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a4c1c
	if (cr6.eq) goto loc_832A4C1C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// b 0x832a4c20
	goto loc_832A4C20;
loc_832A4C1C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832A4C20:
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x832a4648
	sub_832A4648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4C30"))) PPC_WEAK_FUNC(sub_832A4C30);
PPC_FUNC_IMPL(__imp__sub_832A4C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4c48
	if (cr6.eq) goto loc_832A4C48;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_832A4C48:
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x832a4c64
	if (!cr6.lt) goto loc_832A4C64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,45
	ctx.r10.s64 = 45;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// b 0x832a4ca0
	goto loc_832A4CA0;
loc_832A4C64:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4c80
	if (cr6.eq) goto loc_832A4C80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,43
	ctx.r10.s64 = 43;
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// b 0x832a4ca0
	goto loc_832A4CA0;
loc_832A4C80:
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a4c9c
	if (cr6.eq) goto loc_832A4C9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// b 0x832a4ca0
	goto loc_832A4CA0;
loc_832A4C9C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832A4CA0:
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x832a46f8
	sub_832A46F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4CB0"))) PPC_WEAK_FUNC(sub_832A4CB0);
PPC_FUNC_IMPL(__imp__sub_832A4CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4cd0
	if (cr6.eq) goto loc_832A4CD0;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
loc_832A4CD0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x832a4648
	sub_832A4648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4CD8"))) PPC_WEAK_FUNC(sub_832A4CD8);
PPC_FUNC_IMPL(__imp__sub_832A4CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4cf8
	if (cr6.eq) goto loc_832A4CF8;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
loc_832A4CF8:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x832a46f8
	sub_832A46F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4D00"))) PPC_WEAK_FUNC(sub_832A4D00);
PPC_FUNC_IMPL(__imp__sub_832A4D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A4D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4d6c
	if (cr6.eq) goto loc_832A4D6C;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4d40
	if (cr6.eq) goto loc_832A4D40;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
loc_832A4D40:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x832a4d5c
	if (!cr6.lt) goto loc_832A4D5C;
	// li r11,45
	ctx.r11.s64 = 45;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4dd0
	goto loc_832A4DD0;
loc_832A4D5C:
	// li r11,43
	ctx.r11.s64 = 43;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4dd0
	goto loc_832A4DD0;
loc_832A4D6C:
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4db4
	if (cr6.eq) goto loc_832A4DB4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4d88
	if (cr6.eq) goto loc_832A4D88;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
loc_832A4D88:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x832a4da4
	if (!cr6.lt) goto loc_832A4DA4;
	// li r11,45
	ctx.r11.s64 = 45;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4dd0
	goto loc_832A4DD0;
loc_832A4DA4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4dd0
	goto loc_832A4DD0;
loc_832A4DB4:
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4dc4
	if (cr6.eq) goto loc_832A4DC4;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
loc_832A4DC4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832a4dd0
	if (!cr6.eq) goto loc_832A4DD0;
	// rlwinm r30,r11,25,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_832A4DD0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A4DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4e1c
	if (cr6.eq) goto loc_832A4E1C;
	// li r11,48
	ctx.r11.s64 = 48;
	// extsb r10,r29
	ctx.r10.s64 = ctx.r29.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832a4e10
	if (cr6.eq) goto loc_832A4E10;
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A4E10:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A4E1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4E2C"))) PPC_WEAK_FUNC(sub_832A4E2C);
PPC_FUNC_IMPL(__imp__sub_832A4E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4E30"))) PPC_WEAK_FUNC(sub_832A4E30);
PPC_FUNC_IMPL(__imp__sub_832A4E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A4E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4e9c
	if (cr6.eq) goto loc_832A4E9C;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4e70
	if (cr6.eq) goto loc_832A4E70;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
loc_832A4E70:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// bge cr6,0x832a4e8c
	if (!cr6.lt) goto loc_832A4E8C;
	// li r11,45
	ctx.r11.s64 = 45;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4f00
	goto loc_832A4F00;
loc_832A4E8C:
	// li r11,43
	ctx.r11.s64 = 43;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4f00
	goto loc_832A4F00;
loc_832A4E9C:
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4ee4
	if (cr6.eq) goto loc_832A4EE4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4eb8
	if (cr6.eq) goto loc_832A4EB8;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
loc_832A4EB8:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// bge cr6,0x832a4ed4
	if (!cr6.lt) goto loc_832A4ED4;
	// li r11,45
	ctx.r11.s64 = 45;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4f00
	goto loc_832A4F00;
loc_832A4ED4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832a4f00
	goto loc_832A4F00;
loc_832A4EE4:
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a4ef4
	if (cr6.eq) goto loc_832A4EF4;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
loc_832A4EF4:
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x832a4f00
	if (!cr6.eq) goto loc_832A4F00;
	// rlwinm r30,r11,25,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
loc_832A4F00:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A4F0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a4f4c
	if (cr6.eq) goto loc_832A4F4C;
	// li r11,48
	ctx.r11.s64 = 48;
	// extsb r10,r29
	ctx.r10.s64 = ctx.r29.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832a4f40
	if (cr6.eq) goto loc_832A4F40;
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A4F40:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A4F4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A4F5C"))) PPC_WEAK_FUNC(sub_832A4F5C);
PPC_FUNC_IMPL(__imp__sub_832A4F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A4F60"))) PPC_WEAK_FUNC(sub_832A4F60);
PPC_FUNC_IMPL(__imp__sub_832A4F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A4F68;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r5,24(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x832a4fb4
	if (cr6.eq) goto loc_832A4FB4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A4FAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x832a4fc8
	goto loc_832A4FC8;
loc_832A4FB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A4FC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
loc_832A4FC8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r30,r3,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r27,r3,r11
	ctx.r27.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bl 0x83296ba8
	ctx.lr = 0x832A4FFC;
	sub_83296BA8(ctx, base);
	// subf r7,r28,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r28.s64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r6,r30,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r30.s64;
	// rlwinm r5,r11,30,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// subf r4,r3,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r3.s64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// and r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 & ctx.r4.u64;
	// beq cr6,0x832a50c8
	if (cr6.eq) goto loc_832A50C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A5030;
	sub_832A1F80(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832a506c
	if (!cr6.gt) goto loc_832A506C;
loc_832A5038:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A5050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a5064
	if (!cr6.gt) goto loc_832A5064;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A5064:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt cr6,0x832a5038
	if (cr6.gt) goto loc_832A5038;
loc_832A506C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A5078;
	sub_832A1F80(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a51ec
	if (!cr6.gt) goto loc_832A51EC;
loc_832A5080:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A5098;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a50ac
	if (!cr6.gt) goto loc_832A50AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A50AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a5080
	if (cr6.gt) goto loc_832A5080;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A50C8:
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a515c
	if (cr6.eq) goto loc_832A515C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A50E0;
	sub_832A1F80(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a511c
	if (!cr6.gt) goto loc_832A511C;
loc_832A50E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A5100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a5114
	if (!cr6.gt) goto loc_832A5114;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A5114:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a50e8
	if (cr6.gt) goto loc_832A50E8;
loc_832A511C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832a51e0
	if (!cr6.gt) goto loc_832A51E0;
loc_832A5124:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A513C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a5150
	if (!cr6.gt) goto loc_832A5150;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A5150:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt cr6,0x832a5124
	if (cr6.gt) goto loc_832A5124;
	// b 0x832a51e0
	goto loc_832A51E0;
loc_832A515C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a5198
	if (!cr6.gt) goto loc_832A5198;
loc_832A5164:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A517C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a5190
	if (!cr6.gt) goto loc_832A5190;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A5190:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832a5164
	if (cr6.gt) goto loc_832A5164;
loc_832A5198:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A51A4;
	sub_832A1F80(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832a51e0
	if (!cr6.gt) goto loc_832A51E0;
loc_832A51AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A51C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a51d8
	if (!cr6.gt) goto loc_832A51D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A51D8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt cr6,0x832a51ac
	if (cr6.gt) goto loc_832A51AC;
loc_832A51E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A51EC;
	sub_832A1F80(ctx, base);
loc_832A51EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5200"))) PPC_WEAK_FUNC(sub_832A5200);
PPC_FUNC_IMPL(__imp__sub_832A5200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17308
	ctx.r5.s64 = ctx.r11.s64 + 17308;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5210"))) PPC_WEAK_FUNC(sub_832A5210);
PPC_FUNC_IMPL(__imp__sub_832A5210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17336
	ctx.r5.s64 = ctx.r11.s64 + 17336;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5220"))) PPC_WEAK_FUNC(sub_832A5220);
PPC_FUNC_IMPL(__imp__sub_832A5220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17364
	ctx.r5.s64 = ctx.r11.s64 + 17364;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5230"))) PPC_WEAK_FUNC(sub_832A5230);
PPC_FUNC_IMPL(__imp__sub_832A5230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17392
	ctx.r5.s64 = ctx.r11.s64 + 17392;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5240"))) PPC_WEAK_FUNC(sub_832A5240);
PPC_FUNC_IMPL(__imp__sub_832A5240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17420
	ctx.r5.s64 = ctx.r11.s64 + 17420;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5250"))) PPC_WEAK_FUNC(sub_832A5250);
PPC_FUNC_IMPL(__imp__sub_832A5250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17448
	ctx.r5.s64 = ctx.r11.s64 + 17448;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5260"))) PPC_WEAK_FUNC(sub_832A5260);
PPC_FUNC_IMPL(__imp__sub_832A5260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,17476
	ctx.r5.s64 = ctx.r11.s64 + 17476;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5270"))) PPC_WEAK_FUNC(sub_832A5270);
PPC_FUNC_IMPL(__imp__sub_832A5270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,129
	ctx.r10.s64 = 129;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwimi r11,r10,0,30,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFFFB) | (ctx.r11.u64 & 0x4);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r5,r8,17392
	ctx.r5.s64 = ctx.r8.s64 + 17392;
	// b 0x832a4f60
	sub_832A4F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5298"))) PPC_WEAK_FUNC(sub_832A5298);
PPC_FUNC_IMPL(__imp__sub_832A5298) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,28624
	ctx.r30.s64 = ctx.r11.s64 + 28624;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x832A52C8;
	sub_83294018(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x832afe10
	ctx.lr = 0x832A52E0;
	sub_832AFE10(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// ori r11,r10,20863
	ctx.r11.u64 = ctx.r10.u64 | 20863;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x832a5330
	if (!cr6.lt) goto loc_832A5330;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x832a5314
	if (cr6.lt) goto loc_832A5314;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r11,-31420
	ctx.r6.s64 = ctx.r11.s64 + -31420;
	// b 0x832a531c
	goto loc_832A531C;
loc_832A5314:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r11,-31428
	ctx.r6.s64 = ctx.r11.s64 + -31428;
loc_832A531C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-31504
	ctx.r4.s64 = ctx.r11.s64 + -31504;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x832982e8
	ctx.lr = 0x832A5330;
	sub_832982E8(ctx, base);
loc_832A5330:
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

__attribute__((alias("__imp__sub_832A5348"))) PPC_WEAK_FUNC(sub_832A5348);
PPC_FUNC_IMPL(__imp__sub_832A5348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A5350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r27,-31748
	ctx.r27.s64 = -2080636928;
	// addi r31,r11,28624
	ctx.r31.s64 = ctx.r11.s64 + 28624;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r27,28384
	ctx.r30.s64 = ctx.r27.s64 + 28384;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,46(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// addi r4,r11,-31352
	ctx.r4.s64 = ctx.r11.s64 + -31352;
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// bl 0x832b0408
	ctx.lr = 0x832A5390;
	sub_832B0408(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,45(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// addi r4,r10,-31360
	ctx.r4.s64 = ctx.r10.s64 + -31360;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// bl 0x832b0408
	ctx.lr = 0x832A53B4;
	sub_832B0408(ctx, base);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// addi r4,r8,-31388
	ctx.r4.s64 = ctx.r8.s64 + -31388;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r5,r5,16960
	ctx.r5.u64 = ctx.r5.u64 | 16960;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bl 0x832b0408
	ctx.lr = 0x832A53E0;
	sub_832B0408(ctx, base);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// lis r5,15258
	ctx.r5.s64 = 999948288;
	// lbz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r4,r4,-31416
	ctx.r4.s64 = ctx.r4.s64 + -31416;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r5,r5,51712
	ctx.r5.u64 = ctx.r5.u64 | 51712;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b0408
	ctx.lr = 0x832A5408;
	sub_832B0408(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A5418;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// ori r11,r9,20863
	ctx.r11.u64 = ctx.r9.u64 | 20863;
	// std r3,28384(r27)
	PPC_STORE_U64(ctx.r27.u32 + 28384, ctx.r3.u64);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r7,r29,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r11,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r11.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x832a5454
	if (cr6.lt) goto loc_832A5454;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_832A5454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A545C"))) PPC_WEAK_FUNC(sub_832A545C);
PPC_FUNC_IMPL(__imp__sub_832A545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5460"))) PPC_WEAK_FUNC(sub_832A5460);
PPC_FUNC_IMPL(__imp__sub_832A5460) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,28384
	ctx.r31.s64 = ctx.r11.s64 + 28384;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A5488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832A5498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x832A54A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x832A54B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_832A54CC"))) PPC_WEAK_FUNC(sub_832A54CC);
PPC_FUNC_IMPL(__imp__sub_832A54CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A54D0"))) PPC_WEAK_FUNC(sub_832A54D0);
PPC_FUNC_IMPL(__imp__sub_832A54D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r11,r11,28624
	ctx.r11.s64 = ctx.r11.s64 + 28624;
	// addi r10,r10,28384
	ctx.r10.s64 = ctx.r10.s64 + 28384;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// b 0x832b0618
	sub_832B0618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A54F4"))) PPC_WEAK_FUNC(sub_832A54F4);
PPC_FUNC_IMPL(__imp__sub_832A54F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A54F8"))) PPC_WEAK_FUNC(sub_832A54F8);
PPC_FUNC_IMPL(__imp__sub_832A54F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r11,r11,28624
	ctx.r11.s64 = ctx.r11.s64 + 28624;
	// addi r10,r10,28384
	ctx.r10.s64 = ctx.r10.s64 + 28384;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// b 0x832b06c0
	sub_832B06C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A551C"))) PPC_WEAK_FUNC(sub_832A551C);
PPC_FUNC_IMPL(__imp__sub_832A551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5520"))) PPC_WEAK_FUNC(sub_832A5520);
PPC_FUNC_IMPL(__imp__sub_832A5520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,28624
	ctx.r9.s64 = ctx.r11.s64 + 28624;
	// addi r8,r10,28384
	ctx.r8.s64 = ctx.r10.s64 + 28384;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r11.u32);
	// stw r10,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A5544"))) PPC_WEAK_FUNC(sub_832A5544);
PPC_FUNC_IMPL(__imp__sub_832A5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5548"))) PPC_WEAK_FUNC(sub_832A5548);
PPC_FUNC_IMPL(__imp__sub_832A5548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,15,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7FFF;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm r6,r7,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A5570"))) PPC_WEAK_FUNC(sub_832A5570);
PPC_FUNC_IMPL(__imp__sub_832A5570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r5,r6,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x3FFFFF;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// xor r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A55A4"))) PPC_WEAK_FUNC(sub_832A55A4);
PPC_FUNC_IMPL(__imp__sub_832A55A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A55A8"))) PPC_WEAK_FUNC(sub_832A55A8);
PPC_FUNC_IMPL(__imp__sub_832A55A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r10,7,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A55E4"))) PPC_WEAK_FUNC(sub_832A55E4);
PPC_FUNC_IMPL(__imp__sub_832A55E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A55E8"))) PPC_WEAK_FUNC(sub_832A55E8);
PPC_FUNC_IMPL(__imp__sub_832A55E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r10,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// xor r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xor r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A562C"))) PPC_WEAK_FUNC(sub_832A562C);
PPC_FUNC_IMPL(__imp__sub_832A562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5630"))) PPC_WEAK_FUNC(sub_832A5630);
PPC_FUNC_IMPL(__imp__sub_832A5630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// xor r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// xor r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A567C"))) PPC_WEAK_FUNC(sub_832A567C);
PPC_FUNC_IMPL(__imp__sub_832A567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5680"))) PPC_WEAK_FUNC(sub_832A5680);
PPC_FUNC_IMPL(__imp__sub_832A5680) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A568C"))) PPC_WEAK_FUNC(sub_832A568C);
PPC_FUNC_IMPL(__imp__sub_832A568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5690"))) PPC_WEAK_FUNC(sub_832A5690);
PPC_FUNC_IMPL(__imp__sub_832A5690) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// rlwinm r7,r9,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1C;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// rlwinm r6,r8,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1C;
	// rlwinm r3,r5,2,27,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r11,2,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lwzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// lwzx r7,r6,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r6,r4,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1C;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// lwzx r5,r3,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r4,r7,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r31,r5,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// lwzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// rlwinm r9,r3,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FFFFFF;
	// xor r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// xor r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r7.u64;
	// rlwinm r8,r6,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x3FFFFF;
	// xor r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// rlwinm r9,r4,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// xor r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// xor r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A573C"))) PPC_WEAK_FUNC(sub_832A573C);
PPC_FUNC_IMPL(__imp__sub_832A573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5740"))) PPC_WEAK_FUNC(sub_832A5740);
PPC_FUNC_IMPL(__imp__sub_832A5740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A5748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832a5760
	if (!cr6.eq) goto loc_832A5760;
	// lis r4,16838
	ctx.r4.s64 = 1103495168;
	// ori r4,r4,20077
	ctx.r4.u64 = ctx.r4.u64 | 20077;
loc_832A5760:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x832A577C;
	sub_83102DB0(ctx, base);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
loc_832A5788:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832a5570
	ctx.lr = 0x832A5790;
	sub_832A5570(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x832a5788
	if (!cr0.eq) goto loc_832A5788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832a5570
	ctx.lr = 0x832A57A4;
	sub_832A5570(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x832A57AC;
	sub_83102DB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A57B8"))) PPC_WEAK_FUNC(sub_832A57B8);
PPC_FUNC_IMPL(__imp__sub_832A57B8) {
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
	// rlwinm r11,r4,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E0000;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832a57f0
	if (cr6.eq) goto loc_832A57F0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-31036
	ctx.r4.s64 = ctx.r11.s64 + -31036;
	// b 0x832a5818
	goto loc_832A5818;
loc_832A57F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x832A57FC;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a5810
	if (cr6.eq) goto loc_832A5810;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832a5830
	goto loc_832A5830;
loc_832A5810:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-31060
	ctx.r4.s64 = ctx.r11.s64 + -31060;
loc_832A5818:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r10,-31068
	ctx.r3.s64 = ctx.r10.s64 + -31068;
	// bl 0x83298338
	ctx.lr = 0x832A582C;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832A5830:
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

__attribute__((alias("__imp__sub_832A5848"))) PPC_WEAK_FUNC(sub_832A5848);
PPC_FUNC_IMPL(__imp__sub_832A5848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A5850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r6,34(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832a587c
	if (!cr6.eq) goto loc_832A587C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-30936
	ctx.r4.s64 = ctx.r11.s64 + -30936;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832A587C;
	sub_832982E8(ctx, base);
loc_832A587C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r31,r11,29704
	ctx.r31.s64 = ctx.r11.s64 + 29704;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b1978
	ctx.lr = 0x832A5894;
	sub_832B1978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a58b4
	if (!cr6.eq) goto loc_832A58B4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-30976
	ctx.r4.s64 = ctx.r11.s64 + -30976;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832A58B4;
	sub_832982E8(ctx, base);
loc_832A58B4:
	// lhz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lhz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a58e0
	if (cr6.eq) goto loc_832A58E0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lhz r5,46(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-31004
	ctx.r4.s64 = ctx.r11.s64 + -31004;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298398
	ctx.lr = 0x832A58E0;
	sub_83298398(ctx, base);
loc_832A58E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A58EC"))) PPC_WEAK_FUNC(sub_832A58EC);
PPC_FUNC_IMPL(__imp__sub_832A58EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A58F0"))) PPC_WEAK_FUNC(sub_832A58F0);
PPC_FUNC_IMPL(__imp__sub_832A58F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// b 0x83307688
	sub_83307688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A58FC"))) PPC_WEAK_FUNC(sub_832A58FC);
PPC_FUNC_IMPL(__imp__sub_832A58FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5900"))) PPC_WEAK_FUNC(sub_832A5900);
PPC_FUNC_IMPL(__imp__sub_832A5900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// b 0x832b1a90
	sub_832B1A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5910"))) PPC_WEAK_FUNC(sub_832A5910);
PPC_FUNC_IMPL(__imp__sub_832A5910) {
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
	// bl 0x832a6f70
	ctx.lr = 0x832A5928;
	sub_832A6F70(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,29704
	ctx.r3.s64 = ctx.r11.s64 + 29704;
	// bl 0x832b1a40
	ctx.lr = 0x832A5938;
	sub_832B1A40(ctx, base);
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

__attribute__((alias("__imp__sub_832A5950"))) PPC_WEAK_FUNC(sub_832A5950);
PPC_FUNC_IMPL(__imp__sub_832A5950) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r30,r11,29704
	ctx.r30.s64 = ctx.r11.s64 + 29704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b19f0
	ctx.lr = 0x832A5974;
	sub_832B19F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a59bc
	if (cr6.eq) goto loc_832A59BC;
	// bl 0x832a6ef8
	ctx.lr = 0x832A5984;
	sub_832A6EF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a59b0
	if (cr6.lt) goto loc_832A59B0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,22800
	ctx.r4.s64 = ctx.r11.s64 + 22800;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x832a1350
	ctx.lr = 0x832A59A0;
	sub_832A1350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832a59d4
	if (cr6.gt) goto loc_832A59D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6f70
	ctx.lr = 0x832A59B0;
	sub_832A6F70(ctx, base);
loc_832A59B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832b1a40
	ctx.lr = 0x832A59BC;
	sub_832B1A40(ctx, base);
loc_832A59BC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-30916
	ctx.r4.s64 = ctx.r11.s64 + -30916;
	// addi r3,r10,-31068
	ctx.r3.s64 = ctx.r10.s64 + -31068;
	// bl 0x83298338
	ctx.lr = 0x832A59D0;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832A59D4:
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

__attribute__((alias("__imp__sub_832A59EC"))) PPC_WEAK_FUNC(sub_832A59EC);
PPC_FUNC_IMPL(__imp__sub_832A59EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A59F0"))) PPC_WEAK_FUNC(sub_832A59F0);
PPC_FUNC_IMPL(__imp__sub_832A59F0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// bl 0x832a57b8
	ctx.lr = 0x832A5A14;
	sub_832A57B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a5a24
	if (cr6.eq) goto loc_832A5A24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832A5A24;
	sub_832A13D8(ctx, base);
loc_832A5A24:
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

__attribute__((alias("__imp__sub_832A5A38"))) PPC_WEAK_FUNC(sub_832A5A38);
PPC_FUNC_IMPL(__imp__sub_832A5A38) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-30888
	ctx.r30.s64 = ctx.r11.s64 + -30888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a57b8
	ctx.lr = 0x832A5A60;
	sub_832A57B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a5acc
	if (cr6.eq) goto loc_832A5ACC;
	// bl 0x832a6bf8
	ctx.lr = 0x832A5A70;
	sub_832A6BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a5aa8
	if (!cr6.eq) goto loc_832A5AA8;
	// bl 0x832b16c0
	ctx.lr = 0x832A5A80;
	sub_832B16C0(ctx, base);
	// bl 0x83254150
	ctx.lr = 0x832A5A84;
	sub_83254150(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-31068
	ctx.r9.s64 = ctx.r11.s64 + -31068;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-31128
	ctx.r4.s64 = ctx.r10.s64 + -31128;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83298338
	ctx.lr = 0x832A5AA4;
	sub_83298338(ctx, base);
	// b 0x832a5acc
	goto loc_832A5ACC;
loc_832A5AA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6f88
	ctx.lr = 0x832A5AB0;
	sub_832A6F88(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29704
	ctx.r10.s64 = ctx.r11.s64 + 29704;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a5acc
	if (cr6.eq) goto loc_832A5ACC;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x832a6c18
	ctx.lr = 0x832A5ACC;
	sub_832A6C18(ctx, base);
loc_832A5ACC:
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

__attribute__((alias("__imp__sub_832A5AE4"))) PPC_WEAK_FUNC(sub_832A5AE4);
PPC_FUNC_IMPL(__imp__sub_832A5AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5AE8"))) PPC_WEAK_FUNC(sub_832A5AE8);
PPC_FUNC_IMPL(__imp__sub_832A5AE8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// bl 0x832a57b8
	ctx.lr = 0x832A5B04;
	sub_832A57B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a5b10
	if (cr6.eq) goto loc_832A5B10;
	// bl 0x832a7078
	ctx.lr = 0x832A5B10;
	sub_832A7078(ctx, base);
loc_832A5B10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A5B20"))) PPC_WEAK_FUNC(sub_832A5B20);
PPC_FUNC_IMPL(__imp__sub_832A5B20) {
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
	// rlwinm r11,r4,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E0000;
	// lis r10,22
	ctx.r10.s64 = 1441792;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832a5b6c
	if (cr6.eq) goto loc_832A5B6C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30832
	ctx.r4.s64 = ctx.r11.s64 + -30832;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832A5B58;
	sub_83298338(ctx, base);
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
loc_832A5B6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832a1510
	ctx.lr = 0x832A5B78;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A5B9C"))) PPC_WEAK_FUNC(sub_832A5B9C);
PPC_FUNC_IMPL(__imp__sub_832A5B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5BA0"))) PPC_WEAK_FUNC(sub_832A5BA0);
PPC_FUNC_IMPL(__imp__sub_832A5BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A5BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a5be4
	if (!cr6.eq) goto loc_832A5BE4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30724
	ctx.r4.s64 = ctx.r11.s64 + -30724;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832A5BD4;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A5BE4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832a5c10
	if (!cr6.eq) goto loc_832A5C10;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30744
	ctx.r4.s64 = ctx.r11.s64 + -30744;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832A5C00;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A5C10:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832a5c3c
	if (!cr6.eq) goto loc_832A5C3C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832A5C2C;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A5C3C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a5c6c
	if (!cr6.eq) goto loc_832A5C6C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30784
	ctx.r4.s64 = ctx.r11.s64 + -30784;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832A5C5C;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A5C6C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,-22544
	ctx.r31.s64 = ctx.r11.s64 + -22544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832aa2a8
	ctx.lr = 0x832A5C84;
	sub_832AA2A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a5ce4
	if (cr6.lt) goto loc_832A5CE4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-30792
	ctx.r4.s64 = ctx.r11.s64 + -30792;
	// bl 0x83296d78
	ctx.lr = 0x832A5C9C;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832a5cd0
	if (!cr6.eq) goto loc_832A5CD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x832aa0c0
	ctx.lr = 0x832A5CB4;
	sub_832AA0C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a5ce4
	if (cr6.lt) goto loc_832A5CE4;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832a8af0
	ctx.lr = 0x832A5CC8;
	sub_832A8AF0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A5CD0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832a89f0
	ctx.lr = 0x832A5CE4;
	sub_832A89F0(ctx, base);
loc_832A5CE4:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5CEC"))) PPC_WEAK_FUNC(sub_832A5CEC);
PPC_FUNC_IMPL(__imp__sub_832A5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5CF0"))) PPC_WEAK_FUNC(sub_832A5CF0);
PPC_FUNC_IMPL(__imp__sub_832A5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a5d34
	if (!cr6.eq) goto loc_832A5D34;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30700
	ctx.r4.s64 = ctx.r11.s64 + -30700;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832A5D1C;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832A5D34:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x832aa2a8
	ctx.lr = 0x832A5D44;
	sub_832AA2A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a5d64
	if (cr6.lt) goto loc_832A5D64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832a8ce8
	ctx.lr = 0x832A5D54;
	sub_832A8CE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a5d64
	if (cr6.lt) goto loc_832A5D64;
	// bl 0x832a13d8
	ctx.lr = 0x832A5D60;
	sub_832A13D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832A5D64:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A5D74"))) PPC_WEAK_FUNC(sub_832A5D74);
PPC_FUNC_IMPL(__imp__sub_832A5D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5D78"))) PPC_WEAK_FUNC(sub_832A5D78);
PPC_FUNC_IMPL(__imp__sub_832A5D78) {
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
	// rlwinm r11,r3,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7E0000;
	// lis r10,20
	ctx.r10.s64 = 1310720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832a5dd8
	if (cr6.eq) goto loc_832A5DD8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-30676
	ctx.r5.s64 = ctx.r11.s64 + -30676;
	// addi r4,r10,-30872
	ctx.r4.s64 = ctx.r10.s64 + -30872;
	// addi r3,r9,27400
	ctx.r3.s64 = ctx.r9.s64 + 27400;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832A5DBC;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832A5DD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x832A5DE4;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a5dfc
	if (cr6.eq) goto loc_832A5DFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a5e18
	if (!cr6.eq) goto loc_832A5E18;
loc_832A5DFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832A5E18:
	// bl 0x832a8c10
	ctx.lr = 0x832A5E1C;
	sub_832A8C10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a5e30
	if (cr6.lt) goto loc_832A5E30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832A5E2C;
	sub_832A13D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832A5E30:
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

__attribute__((alias("__imp__sub_832A5E44"))) PPC_WEAK_FUNC(sub_832A5E44);
PPC_FUNC_IMPL(__imp__sub_832A5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5E48"))) PPC_WEAK_FUNC(sub_832A5E48);
PPC_FUNC_IMPL(__imp__sub_832A5E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A5E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83296470
	ctx.lr = 0x832A5E64;
	sub_83296470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a5e94
	if (!cr6.lt) goto loc_832A5E94;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-30660
	ctx.r4.s64 = ctx.r11.s64 + -30660;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83298338
	ctx.lr = 0x832A5E88;
	sub_83298338(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A5E94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b2238
	ctx.lr = 0x832A5EA4;
	sub_832B2238(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A5EAC"))) PPC_WEAK_FUNC(sub_832A5EAC);
PPC_FUNC_IMPL(__imp__sub_832A5EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5EB0"))) PPC_WEAK_FUNC(sub_832A5EB0);
PPC_FUNC_IMPL(__imp__sub_832A5EB0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// bl 0x832a5b20
	ctx.lr = 0x832A5ED4;
	sub_832A5B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a5ef8
	if (!cr6.eq) goto loc_832A5EF8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832A5EF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832b2310
	ctx.lr = 0x832A5F00;
	sub_832B2310(ctx, base);
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

__attribute__((alias("__imp__sub_832A5F14"))) PPC_WEAK_FUNC(sub_832A5F14);
PPC_FUNC_IMPL(__imp__sub_832A5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F18"))) PPC_WEAK_FUNC(sub_832A5F18);
PPC_FUNC_IMPL(__imp__sub_832A5F18) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// bl 0x832a5b20
	ctx.lr = 0x832A5F3C;
	sub_832A5B20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a5f60
	if (!cr6.eq) goto loc_832A5F60;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832A5F60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832b2320
	ctx.lr = 0x832A5F68;
	sub_832B2320(ctx, base);
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

__attribute__((alias("__imp__sub_832A5F7C"))) PPC_WEAK_FUNC(sub_832A5F7C);
PPC_FUNC_IMPL(__imp__sub_832A5F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A5F80"))) PPC_WEAK_FUNC(sub_832A5F80);
PPC_FUNC_IMPL(__imp__sub_832A5F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A5F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a5fec
	if (cr6.eq) goto loc_832A5FEC;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83294018
	ctx.lr = 0x832A5FAC;
	sub_83294018(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83295b88
	ctx.lr = 0x832A5FBC;
	sub_83295B88(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-30300
	ctx.r3.s64 = ctx.r11.s64 + -30300;
	// bl 0x83296d78
	ctx.lr = 0x832A5FCC;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832a5fec
	if (cr6.eq) goto loc_832A5FEC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-30328
	ctx.r4.s64 = ctx.r11.s64 + -30328;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832982e8
	ctx.lr = 0x832A5FEC;
	sub_832982E8(ctx, base);
loc_832A5FEC:
	// li r5,1752
	ctx.r5.s64 = 1752;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832A5FFC;
	sub_83294018(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r11,17520
	ctx.r30.s64 = ctx.r11.s64 + 17520;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832A6018;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a6038
	if (!cr6.eq) goto loc_832A6038;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-30360
	ctx.r4.s64 = ctx.r11.s64 + -30360;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x832982e8
	ctx.lr = 0x832A6038;
	sub_832982E8(ctx, base);
loc_832A6038:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r7,r11,-31512
	ctx.r7.s64 = ctx.r11.s64 + -31512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5470
	ctx.lr = 0x832A6054;
	sub_832B5470(ctx, base);
	// lhz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r3,1751(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1751);
	// stb r10,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6070"))) PPC_WEAK_FUNC(sub_832A6070);
PPC_FUNC_IMPL(__imp__sub_832A6070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A6078;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r6,1750(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1750);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,-31512
	ctx.r30.s64 = ctx.r11.s64 + -31512;
	// addi r29,r10,-30196
	ctx.r29.s64 = ctx.r10.s64 + -30196;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832a60bc
	if (cr6.eq) goto loc_832A60BC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30536
	ctx.r5.s64 = ctx.r11.s64 + -30536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83298338
	ctx.lr = 0x832A60B8;
	sub_83298338(ctx, base);
	// stb r28,1750(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1750, ctx.r28.u8);
loc_832A60BC:
	// lhz r6,62(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832a60e4
	if (cr6.eq) goto loc_832A60E4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30216
	ctx.r5.s64 = ctx.r11.s64 + -30216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83298338
	ctx.lr = 0x832A60E0;
	sub_83298338(ctx, base);
	// sth r28,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r28.u16);
loc_832A60E4:
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x832a610c
	if (cr6.eq) goto loc_832A610C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30240
	ctx.r5.s64 = ctx.r11.s64 + -30240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83298338
	ctx.lr = 0x832A6108;
	sub_83298338(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_832A610C:
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832a6134
	if (cr6.eq) goto loc_832A6134;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30264
	ctx.r5.s64 = ctx.r11.s64 + -30264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83298338
	ctx.lr = 0x832A6130;
	sub_83298338(ctx, base);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_832A6134:
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832a615c
	if (cr6.eq) goto loc_832A615C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30280
	ctx.r5.s64 = ctx.r11.s64 + -30280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83298338
	ctx.lr = 0x832A6158;
	sub_83298338(ctx, base);
	// stb r28,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r28.u8);
loc_832A615C:
	// lbz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832a6184
	if (cr6.eq) goto loc_832A6184;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30292
	ctx.r5.s64 = ctx.r11.s64 + -30292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x83298338
	ctx.lr = 0x832A6180;
	sub_83298338(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_832A6184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A618C"))) PPC_WEAK_FUNC(sub_832A618C);
PPC_FUNC_IMPL(__imp__sub_832A618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6190"))) PPC_WEAK_FUNC(sub_832A6190);
PPC_FUNC_IMPL(__imp__sub_832A6190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A6198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r30,r11,-31512
	ctx.r30.s64 = ctx.r11.s64 + -31512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r10,-29808
	ctx.r4.s64 = ctx.r10.s64 + -29808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83298398
	ctx.lr = 0x832A61C0;
	sub_83298398(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x83102db0
	ctx.lr = 0x832A61C8;
	sub_83102DB0(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-29820
	ctx.r4.s64 = ctx.r9.s64 + -29820;
	// bl 0x83298398
	ctx.lr = 0x832A61D8;
	sub_83298398(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,1684(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1684);
	// bl 0x832a0d78
	ctx.lr = 0x832A61E4;
	sub_832A0D78(ctx, base);
	// addi r8,r3,15
	ctx.r8.s64 = ctx.r3.s64 + 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r8,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// ble cr6,0x832a6204
	if (!cr6.gt) goto loc_832A6204;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x832982e8
	ctx.lr = 0x832A6204;
	sub_832982E8(ctx, base);
loc_832A6204:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-29832
	ctx.r4.s64 = ctx.r11.s64 + -29832;
	// bl 0x83298398
	ctx.lr = 0x832A6210;
	sub_83298398(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x832a5298
	ctx.lr = 0x832A6218;
	sub_832A5298(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-29844
	ctx.r4.s64 = ctx.r10.s64 + -29844;
	// bl 0x83298398
	ctx.lr = 0x832A6228;
	sub_83298398(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b15f8
	ctx.lr = 0x832A6234;
	sub_832B15F8(ctx, base);
	// addi r9,r3,15
	ctx.r9.s64 = ctx.r3.s64 + 15;
	// rlwinm r28,r9,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// ble cr6,0x832a6254
	if (!cr6.gt) goto loc_832A6254;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x832982e8
	ctx.lr = 0x832A6254;
	sub_832982E8(ctx, base);
loc_832A6254:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2b38
	ctx.lr = 0x832A625C;
	sub_832B2B38(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29868
	ctx.r4.s64 = ctx.r11.s64 + -29868;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83298398
	ctx.lr = 0x832A6270;
	sub_83298398(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// addi r4,r9,-29960
	ctx.r4.s64 = ctx.r9.s64 + -29960;
	// lhz r8,54(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lhz r6,50(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// bl 0x83298398
	ctx.lr = 0x832A6298;
	sub_83298398(ctx, base);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,-29980
	ctx.r4.s64 = ctx.r8.s64 + -29980;
	// bl 0x83298398
	ctx.lr = 0x832A62A8;
	sub_83298398(ctx, base);
	// bl 0x832a0fc0
	ctx.lr = 0x832A62AC;
	sub_832A0FC0(ctx, base);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r7,-30012
	ctx.r4.s64 = ctx.r7.s64 + -30012;
	// bl 0x83298398
	ctx.lr = 0x832A62C0;
	sub_83298398(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x832b27d8
	ctx.lr = 0x832A62C8;
	sub_832B27D8(ctx, base);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,-30028
	ctx.r4.s64 = ctx.r6.s64 + -30028;
	// bl 0x83298398
	ctx.lr = 0x832A62D8;
	sub_83298398(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83297ae8
	ctx.lr = 0x832A62EC;
	sub_83297AE8(ctx, base);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,-30036
	ctx.r4.s64 = ctx.r5.s64 + -30036;
	// bl 0x83298398
	ctx.lr = 0x832A62FC;
	sub_83298398(ctx, base);
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b55e0
	ctx.lr = 0x832A6308;
	sub_832B55E0(ctx, base);
	// addi r4,r3,15
	ctx.r4.s64 = ctx.r3.s64 + 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r4,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// ble cr6,0x832a6328
	if (!cr6.gt) goto loc_832A6328;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x832982e8
	ctx.lr = 0x832A6328;
	sub_832982E8(ctx, base);
loc_832A6328:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-30056
	ctx.r4.s64 = ctx.r11.s64 + -30056;
	// bl 0x83298398
	ctx.lr = 0x832A6334;
	sub_83298398(ctx, base);
	// addi r4,r31,902
	ctx.r4.s64 = ctx.r31.s64 + 902;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b5520
	ctx.lr = 0x832A6340;
	sub_832B5520(ctx, base);
	// addi r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 15;
	// rlwinm r28,r10,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// ble cr6,0x832a6360
	if (!cr6.gt) goto loc_832A6360;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x832982e8
	ctx.lr = 0x832A6360;
	sub_832982E8(ctx, base);
loc_832A6360:
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bgt cr6,0x832a6388
	if (cr6.gt) goto loc_832A6388;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-30088
	ctx.r4.s64 = ctx.r11.s64 + -30088;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832982e8
	ctx.lr = 0x832A6388;
	sub_832982E8(ctx, base);
loc_832A6388:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a63a0
	if (cr6.eq) goto loc_832A63A0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r11,-30096
	ctx.r5.s64 = ctx.r11.s64 + -30096;
	// b 0x832a63a8
	goto loc_832A63A8;
loc_832A63A0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r11,-30112
	ctx.r5.s64 = ctx.r11.s64 + -30112;
loc_832A63A8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-30156
	ctx.r4.s64 = ctx.r11.s64 + -30156;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x83298398
	ctx.lr = 0x832A63C4;
	sub_83298398(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1c28
	ctx.lr = 0x832A63D4;
	sub_832A1C28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A63DC"))) PPC_WEAK_FUNC(sub_832A63DC);
PPC_FUNC_IMPL(__imp__sub_832A63DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A63E0"))) PPC_WEAK_FUNC(sub_832A63E0);
PPC_FUNC_IMPL(__imp__sub_832A63E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832A63E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,371(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 371);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a6414
	if (!cr6.eq) goto loc_832A6414;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-29596
	ctx.r4.s64 = ctx.r11.s64 + -29596;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// bl 0x832982e8
	ctx.lr = 0x832A6414;
	sub_832982E8(ctx, base);
loc_832A6414:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r24,r11,18360
	ctx.r24.s64 = ctx.r11.s64 + 18360;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r29,r11,-30440
	ctx.r29.s64 = ctx.r11.s64 + -30440;
	// addi r26,r10,-30416
	ctx.r26.s64 = ctx.r10.s64 + -30416;
	// addi r28,r9,-31512
	ctx.r28.s64 = ctx.r9.s64 + -31512;
loc_832A643C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A6448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a6460
	if (!cr6.eq) goto loc_832A6460;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a64a0
	goto loc_832A64A0;
loc_832A6460:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298398
	ctx.lr = 0x832A6470;
	sub_83298398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b2f68
	ctx.lr = 0x832A6478;
	sub_832B2F68(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a648c
	if (!cr6.gt) goto loc_832A648C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a64a0
	goto loc_832A64A0;
loc_832A648C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832A649C;
	sub_83298338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832A64A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a64fc
	if (cr6.eq) goto loc_832A64FC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// blt cr6,0x832a643c
	if (cr6.lt) goto loc_832A643C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r23,r11,18352
	ctx.r23.s64 = ctx.r11.s64 + 18352;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r26,r11,-30396
	ctx.r26.s64 = ctx.r11.s64 + -30396;
	// addi r25,r10,-30372
	ctx.r25.s64 = ctx.r10.s64 + -30372;
loc_832A64DC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r30,17
	ctx.r29.s64 = ctx.r30.s64 + 17;
	// bne cr6,0x832a6514
	if (!cr6.eq) goto loc_832A6514;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a6574
	goto loc_832A6574;
loc_832A64FC:
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwzx r5,r11,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x832982e8
	ctx.lr = 0x832A6514;
	sub_832982E8(ctx, base);
loc_832A6514:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a6528
	if (!cr6.eq) goto loc_832A6528;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a6574
	goto loc_832A6574;
loc_832A6528:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298398
	ctx.lr = 0x832A6538;
	sub_83298398(ctx, base);
	// addi r6,r30,274
	ctx.r6.s64 = ctx.r30.s64 + 274;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a5ba0
	ctx.lr = 0x832A654C;
	sub_832A5BA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a6560
	if (!cr6.gt) goto loc_832A6560;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a6574
	goto loc_832A6574;
loc_832A6560:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832A6570;
	sub_83298338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832A6574:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a65c4
	if (cr6.eq) goto loc_832A65C4;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// blt cr6,0x832a64dc
	if (cr6.lt) goto loc_832A64DC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x832a65b8
	if (cr6.eq) goto loc_832A65B8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r5,r11,-29648
	ctx.r5.s64 = ctx.r11.s64 + -29648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x832A65AC;
	sub_83295250(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a65dc
	if (!cr6.eq) goto loc_832A65DC;
loc_832A65B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832A65C4:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,-29664
	ctx.r4.s64 = ctx.r10.s64 + -29664;
	// lwzx r5,r11,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// bl 0x832982e8
	ctx.lr = 0x832A65DC;
	sub_832982E8(ctx, base);
loc_832A65DC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-29712
	ctx.r4.s64 = ctx.r11.s64 + -29712;
	// bl 0x83298398
	ctx.lr = 0x832A65EC;
	sub_83298398(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a5e48
	ctx.lr = 0x832A65F8;
	sub_832A5E48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832a6614
	if (cr6.gt) goto loc_832A6614;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-29768
	ctx.r4.s64 = ctx.r11.s64 + -29768;
	// bl 0x832982e8
	ctx.lr = 0x832A6614;
	sub_832982E8(ctx, base);
loc_832A6614:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29772
	ctx.r4.s64 = ctx.r11.s64 + -29772;
	// bl 0x832a5eb0
	ctx.lr = 0x832A6624;
	sub_832A5EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6630"))) PPC_WEAK_FUNC(sub_832A6630);
PPC_FUNC_IMPL(__imp__sub_832A6630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832A6638;
	__savegprlr_22(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10224(r1)
	ea = -10224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r24,r11,29740
	ctx.r24.s64 = ctx.r11.s64 + 29740;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x83294018
	ctx.lr = 0x832A6674;
	sub_83294018(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x832a6690
	if (cr6.eq) goto loc_832A6690;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,7856
	ctx.r5.s64 = ctx.r11.s64 + 7856;
	// bl 0x83295250
	ctx.lr = 0x832A6690;
	sub_83295250(ctx, base);
loc_832A6690:
	// li r7,8192
	ctx.r7.s64 = 8192;
	// addi r6,r1,1936
	ctx.r6.s64 = ctx.r1.s64 + 1936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83298098
	ctx.lr = 0x832A66A4;
	sub_83298098(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r6,r11,27000
	ctx.r6.s64 = ctx.r11.s64 + 27000;
	// addi r5,r10,-29260
	ctx.r5.s64 = ctx.r10.s64 + -29260;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83297a40
	ctx.lr = 0x832A66C0;
	sub_83297A40(ctx, base);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r31,r11,-31512
	ctx.r31.s64 = ctx.r11.s64 + -31512;
	// addi r6,r9,-30500
	ctx.r6.s64 = ctx.r9.s64 + -30500;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,17512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17512);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// addi r8,r28,8
	ctx.r8.s64 = ctx.r28.s64 + 8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x83298488
	ctx.lr = 0x832A6738;
	sub_83298488(ctx, base);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-29300
	ctx.r4.s64 = ctx.r7.s64 + -29300;
	// bl 0x83298338
	ctx.lr = 0x832A6748;
	sub_83298338(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832a6760
	if (!cr6.eq) goto loc_832A6760;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29316
	ctx.r4.s64 = ctx.r11.s64 + -29316;
	// bl 0x832982e8
	ctx.lr = 0x832A6760;
	sub_832982E8(ctx, base);
loc_832A6760:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832a5f80
	ctx.lr = 0x832A676C;
	sub_832A5F80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r24)
	PPC_STORE_U8(ctx.r24.u32 + 4, ctx.r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a6790
	if (cr6.eq) goto loc_832A6790;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832a6070
	ctx.lr = 0x832A6790;
	sub_832A6070(ctx, base);
loc_832A6790:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// add r28,r29,r23
	ctx.r28.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r27,r11,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// ble cr6,0x832a67b4
	if (!cr6.gt) goto loc_832A67B4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-30472
	ctx.r4.s64 = ctx.r11.s64 + -30472;
	// bl 0x832982e8
	ctx.lr = 0x832A67B4;
	sub_832982E8(ctx, base);
loc_832A67B4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r4,r11,-29344
	ctx.r4.s64 = ctx.r11.s64 + -29344;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83298398
	ctx.lr = 0x832A67D0;
	sub_83298398(ctx, base);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832a6190
	ctx.lr = 0x832A67E4;
	sub_832A6190(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-29784
	ctx.r4.s64 = ctx.r10.s64 + -29784;
	// bl 0x83298398
	ctx.lr = 0x832A67F4;
	sub_83298398(ctx, base);
	// bl 0x832b56b0
	ctx.lr = 0x832A67F8;
	sub_832B56B0(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-29796
	ctx.r4.s64 = ctx.r9.s64 + -29796;
	// bl 0x83298398
	ctx.lr = 0x832A6808;
	sub_83298398(ctx, base);
	// lwz r3,17512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17512);
	// bl 0x83297e58
	ctx.lr = 0x832A6810;
	sub_83297E58(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832a63e0
	ctx.lr = 0x832A681C;
	sub_832A63E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bl 0x83297c60
	ctx.lr = 0x832A682C;
	sub_83297C60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// blt cr6,0x832a684c
	if (cr6.lt) goto loc_832A684C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-29464
	ctx.r4.s64 = ctx.r11.s64 + -29464;
	// bl 0x83298398
	ctx.lr = 0x832A6848;
	sub_83298398(ctx, base);
	// b 0x832a6868
	goto loc_832A6868;
loc_832A684C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-29516
	ctx.r4.s64 = ctx.r11.s64 + -29516;
	// bl 0x83298398
	ctx.lr = 0x832A6858;
	sub_83298398(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83297c60
	ctx.lr = 0x832A6860;
	sub_83297C60(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83297c60
	ctx.lr = 0x832A6868;
	sub_83297C60(ctx, base);
loc_832A6868:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83297c60
	ctx.lr = 0x832A6870;
	sub_83297C60(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-29532
	ctx.r4.s64 = ctx.r11.s64 + -29532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298398
	ctx.lr = 0x832A6884;
	sub_83298398(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83297c60
	ctx.lr = 0x832A688C;
	sub_83297C60(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-29548
	ctx.r4.s64 = ctx.r10.s64 + -29548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298398
	ctx.lr = 0x832A68A0;
	sub_83298398(ctx, base);
	// bl 0x83298100
	ctx.lr = 0x832A68A4;
	sub_83298100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832a10a8
	ctx.lr = 0x832A68AC;
	sub_832A10A8(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-29352
	ctx.r4.s64 = ctx.r9.s64 + -29352;
	// bl 0x83298398
	ctx.lr = 0x832A68BC;
	sub_83298398(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,5(r24)
	PPC_STORE_U8(ctx.r24.u32 + 5, ctx.r11.u8);
	// addi r1,r1,10224
	ctx.r1.s64 = ctx.r1.s64 + 10224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A68CC"))) PPC_WEAK_FUNC(sub_832A68CC);
PPC_FUNC_IMPL(__imp__sub_832A68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A68D0"))) PPC_WEAK_FUNC(sub_832A68D0);
PPC_FUNC_IMPL(__imp__sub_832A68D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832a6630
	sub_832A6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A68D4"))) PPC_WEAK_FUNC(sub_832A68D4);
PPC_FUNC_IMPL(__imp__sub_832A68D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A68D8"))) PPC_WEAK_FUNC(sub_832A68D8);
PPC_FUNC_IMPL(__imp__sub_832A68D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29740
	ctx.r10.s64 = ctx.r11.s64 + 29740;
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A68F0"))) PPC_WEAK_FUNC(sub_832A68F0);
PPC_FUNC_IMPL(__imp__sub_832A68F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A68F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r30,r11,29740
	ctx.r30.s64 = ctx.r11.s64 + 29740;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r31,r10,-29368
	ctx.r31.s64 = ctx.r10.s64 + -29368;
	// addi r4,r11,-29200
	ctx.r4.s64 = ctx.r11.s64 + -29200;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r29,5(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// bl 0x83298398
	ctx.lr = 0x832A6928;
	sub_83298398(ctx, base);
	// bl 0x83298108
	ctx.lr = 0x832A692C;
	sub_83298108(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832a1108
	ctx.lr = 0x832A6934;
	sub_832A1108(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a10a8
	ctx.lr = 0x832A693C;
	sub_832A10A8(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-29208
	ctx.r4.s64 = ctx.r10.s64 + -29208;
	// bl 0x83298398
	ctx.lr = 0x832A694C;
	sub_83298398(ctx, base);
	// bl 0x83298110
	ctx.lr = 0x832A6950;
	sub_83298110(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-29220
	ctx.r4.s64 = ctx.r9.s64 + -29220;
	// bl 0x83298398
	ctx.lr = 0x832A6960;
	sub_83298398(ctx, base);
	// bl 0x832b55b8
	ctx.lr = 0x832A6964;
	sub_832B55B8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bne cr6,0x832a6a08
	if (!cr6.eq) goto loc_832A6A08;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29388
	ctx.r4.s64 = ctx.r11.s64 + -29388;
	// bl 0x83298398
	ctx.lr = 0x832A6984;
	sub_83298398(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,-29400
	ctx.r3.s64 = ctx.r10.s64 + -29400;
	// bl 0x832a5cf0
	ctx.lr = 0x832A6990;
	sub_832A5CF0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832a69b0
	if (!cr6.gt) goto loc_832A69B0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-29772
	ctx.r4.s64 = ctx.r11.s64 + -29772;
	// bl 0x832a5f18
	ctx.lr = 0x832A69A8;
	sub_832A5F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b96b8
	ctx.lr = 0x832A69B0;
	sub_832B96B8(ctx, base);
loc_832A69B0:
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29412
	ctx.r4.s64 = ctx.r11.s64 + -29412;
	// lwz r5,18384(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18384);
	// bl 0x83298398
	ctx.lr = 0x832A69C8;
	sub_83298398(ctx, base);
	// lwz r3,18384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18384);
	// bl 0x832a5cf0
	ctx.lr = 0x832A69D0;
	sub_832A5CF0(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r10,18376
	ctx.r11.s64 = ctx.r10.s64 + 18376;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r28,r11,-29432
	ctx.r28.s64 = ctx.r11.s64 + -29432;
loc_832A69E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298398
	ctx.lr = 0x832A69F8;
	sub_83298398(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x832b3220
	ctx.lr = 0x832A6A00;
	sub_832B3220(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x832a69e8
	if (!cr0.eq) goto loc_832A69E8;
loc_832A6A08:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12816
	ctx.r4.s64 = ctx.r11.s64 + 12816;
	// bl 0x83298398
	ctx.lr = 0x832A6A18;
	sub_83298398(ctx, base);
	// bl 0x83297bb0
	ctx.lr = 0x832A6A1C;
	sub_83297BB0(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-29224
	ctx.r4.s64 = ctx.r10.s64 + -29224;
	// bl 0x83298398
	ctx.lr = 0x832A6A2C;
	sub_83298398(ctx, base);
	// bl 0x83297fc0
	ctx.lr = 0x832A6A30;
	sub_83297FC0(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-29232
	ctx.r4.s64 = ctx.r9.s64 + -29232;
	// bl 0x83298398
	ctx.lr = 0x832A6A40;
	sub_83298398(ctx, base);
	// bl 0x832b56b8
	ctx.lr = 0x832A6A44;
	sub_832B56B8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,12076
	ctx.r4.s64 = ctx.r8.s64 + 12076;
	// bl 0x83298398
	ctx.lr = 0x832A6A54;
	sub_83298398(ctx, base);
	// bl 0x832a1c68
	ctx.lr = 0x832A6A58;
	sub_832A1C68(ctx, base);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-29356
	ctx.r4.s64 = ctx.r7.s64 + -29356;
	// bl 0x83298398
	ctx.lr = 0x832A6A68;
	sub_83298398(ctx, base);
	// bl 0x832b5678
	ctx.lr = 0x832A6A6C;
	sub_832B5678(ctx, base);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,25828
	ctx.r4.s64 = ctx.r6.s64 + 25828;
	// bl 0x83298398
	ctx.lr = 0x832A6A7C;
	sub_83298398(ctx, base);
	// bl 0x832a1008
	ctx.lr = 0x832A6A80;
	sub_832A1008(ctx, base);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-30944
	ctx.r4.s64 = ctx.r5.s64 + -30944;
	// bl 0x83298398
	ctx.lr = 0x832A6A90;
	sub_83298398(ctx, base);
	// bl 0x832b1680
	ctx.lr = 0x832A6A94;
	sub_832B1680(ctx, base);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-29244
	ctx.r4.s64 = ctx.r4.s64 + -29244;
	// bl 0x83298398
	ctx.lr = 0x832A6AA4;
	sub_83298398(ctx, base);
	// bl 0x83307688
	ctx.lr = 0x832A6AA8;
	sub_83307688(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-29252
	ctx.r4.s64 = ctx.r11.s64 + -29252;
	// bl 0x83298398
	ctx.lr = 0x832A6AB8;
	sub_83298398(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x832A6ABC;
	sub_83102DB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6AC4"))) PPC_WEAK_FUNC(sub_832A6AC4);
PPC_FUNC_IMPL(__imp__sub_832A6AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6AC8"))) PPC_WEAK_FUNC(sub_832A6AC8);
PPC_FUNC_IMPL(__imp__sub_832A6AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x832a6af0
	if (!cr6.gt) goto loc_832A6AF0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x832a6ae0
	if (!cr6.eq) goto loc_832A6AE0;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_832A6AE0:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x832a6b1c
	if (!cr6.eq) goto loc_832A6B1C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832A6AF0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x832a6b00
	if (!cr6.gt) goto loc_832A6B00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832A6B00:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832a6b10
	if (!cr6.eq) goto loc_832A6B10;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_832A6B10:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x832a6b1c
	if (!cr6.eq) goto loc_832A6B1C;
	// blr 
	return;
loc_832A6B1C:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6B28"))) PPC_WEAK_FUNC(sub_832A6B28);
PPC_FUNC_IMPL(__imp__sub_832A6B28) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x832d4fe0
	ctx.lr = 0x832A6B5C;
	sub_832D4FE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832a6b7c
	if (!cr6.eq) goto loc_832A6B7C;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_832A6B7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A6B9C"))) PPC_WEAK_FUNC(sub_832A6B9C);
PPC_FUNC_IMPL(__imp__sub_832A6B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6BA0"))) PPC_WEAK_FUNC(sub_832A6BA0);
PPC_FUNC_IMPL(__imp__sub_832A6BA0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a6bcc
	if (cr6.eq) goto loc_832A6BCC;
	// bl 0x832d1a68
	ctx.lr = 0x832A6BC4;
	sub_832D1A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_832A6BCC:
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

__attribute__((alias("__imp__sub_832A6BE0"))) PPC_WEAK_FUNC(sub_832A6BE0);
PPC_FUNC_IMPL(__imp__sub_832A6BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82417108
	sub_82417108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6BF4"))) PPC_WEAK_FUNC(sub_832A6BF4);
PPC_FUNC_IMPL(__imp__sub_832A6BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6BF8"))) PPC_WEAK_FUNC(sub_832A6BF8);
PPC_FUNC_IMPL(__imp__sub_832A6BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,29752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29752);
	// b 0x83d7565c
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6C04"))) PPC_WEAK_FUNC(sub_832A6C04);
PPC_FUNC_IMPL(__imp__sub_832A6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6C08"))) PPC_WEAK_FUNC(sub_832A6C08);
PPC_FUNC_IMPL(__imp__sub_832A6C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,29752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29752);
	// b 0x83d7566c
	__imp__KeTlsSetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6C18"))) PPC_WEAK_FUNC(sub_832A6C18);
PPC_FUNC_IMPL(__imp__sub_832A6C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x832a6c24
	if (!cr6.eq) goto loc_832A6C24;
	// b 0x832d22c0
	sub_832D22C0(ctx, base);
	return;
loc_832A6C24:
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// b 0x832d22b8
	sub_832D22B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6C2C"))) PPC_WEAK_FUNC(sub_832A6C2C);
PPC_FUNC_IMPL(__imp__sub_832A6C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6C30"))) PPC_WEAK_FUNC(sub_832A6C30);
PPC_FUNC_IMPL(__imp__sub_832A6C30) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x832a6c80
	if (!cr6.gt) goto loc_832A6C80;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bne cr6,0x832a6c70
	if (!cr6.eq) goto loc_832A6C70;
	// li r4,-2
	ctx.r4.s64 = -2;
loc_832A6C50:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82416a10
	ctx.lr = 0x832A6C5C;
	sub_82416A10(ctx, base);
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
loc_832A6C70:
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x832a6ca8
	if (!cr6.eq) goto loc_832A6CA8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x832a6c50
	goto loc_832A6C50;
loc_832A6C80:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x832a6c90
	if (!cr6.gt) goto loc_832A6C90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832a6c50
	goto loc_832A6C50;
loc_832A6C90:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x832a6ca0
	if (!cr6.eq) goto loc_832A6CA0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x832a6c50
	goto loc_832A6C50;
loc_832A6CA0:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x832a6c50
	if (cr6.eq) goto loc_832A6C50;
loc_832A6CA8:
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6CC0"))) PPC_WEAK_FUNC(sub_832A6CC0);
PPC_FUNC_IMPL(__imp__sub_832A6CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A6CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x832a6cf4
	if (cr6.eq) goto loc_832A6CF4;
	// bl 0x82416b78
	ctx.lr = 0x832A6CE8;
	sub_82416B78(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x832a6cf4
	if (cr6.eq) goto loc_832A6CF4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_832A6CF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416c48
	ctx.lr = 0x832A6D00;
	sub_82416C48(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a6d14
	if (cr6.eq) goto loc_832A6D14;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d2f58
	ctx.lr = 0x832A6D14;
	sub_832D2F58(ctx, base);
loc_832A6D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6D20"))) PPC_WEAK_FUNC(sub_832A6D20);
PPC_FUNC_IMPL(__imp__sub_832A6D20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2950
	ctx.lr = 0x832A6D4C;
	sub_832D2950(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a6d9c
	if (cr6.eq) goto loc_832A6D9C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,29748(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29748);
	// bl 0x832d2b88
	ctx.lr = 0x832A6D70;
	sub_832D2B88(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a6d94
	if (cr6.eq) goto loc_832A6D94;
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
loc_832A6D94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d1a68
	ctx.lr = 0x832A6D9C;
	sub_832D1A68(ctx, base);
loc_832A6D9C:
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
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

__attribute__((alias("__imp__sub_832A6DB8"))) PPC_WEAK_FUNC(sub_832A6DB8);
PPC_FUNC_IMPL(__imp__sub_832A6DB8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x832d1a68
	ctx.lr = 0x832A6DD4;
	sub_832D1A68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d1a68
	ctx.lr = 0x832A6DDC;
	sub_832D1A68(ctx, base);
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

__attribute__((alias("__imp__sub_832A6DF0"))) PPC_WEAK_FUNC(sub_832A6DF0);
PPC_FUNC_IMPL(__imp__sub_832A6DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82417108
	sub_82417108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6DFC"))) PPC_WEAK_FUNC(sub_832A6DFC);
PPC_FUNC_IMPL(__imp__sub_832A6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6E00"))) PPC_WEAK_FUNC(sub_832A6E00);
PPC_FUNC_IMPL(__imp__sub_832A6E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x832d2d80
	sub_832D2D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6E08"))) PPC_WEAK_FUNC(sub_832A6E08);
PPC_FUNC_IMPL(__imp__sub_832A6E08) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x832a6e34
	if (cr6.eq) goto loc_832A6E34;
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_832A6E34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x832d2c58
	ctx.lr = 0x832A6E50;
	sub_832D2C58(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82417108
	ctx.lr = 0x832A6E64;
	sub_82417108(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_832A6E8C"))) PPC_WEAK_FUNC(sub_832A6E8C);
PPC_FUNC_IMPL(__imp__sub_832A6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6E90"))) PPC_WEAK_FUNC(sub_832A6E90);
PPC_FUNC_IMPL(__imp__sub_832A6E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x832d2c20
	sub_832D2C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6EA0"))) PPC_WEAK_FUNC(sub_832A6EA0);
PPC_FUNC_IMPL(__imp__sub_832A6EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x832d2c20
	sub_832D2C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6EB8"))) PPC_WEAK_FUNC(sub_832A6EB8);
PPC_FUNC_IMPL(__imp__sub_832A6EB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6EBC"))) PPC_WEAK_FUNC(sub_832A6EBC);
PPC_FUNC_IMPL(__imp__sub_832A6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6EC0"))) PPC_WEAK_FUNC(sub_832A6EC0);
PPC_FUNC_IMPL(__imp__sub_832A6EC0) {
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
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x83d7562c
	ctx.lr = 0x832A6ED4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
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

__attribute__((alias("__imp__sub_832A6EE8"))) PPC_WEAK_FUNC(sub_832A6EE8);
PPC_FUNC_IMPL(__imp__sub_832A6EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d7554c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6EEC"))) PPC_WEAK_FUNC(sub_832A6EEC);
PPC_FUNC_IMPL(__imp__sub_832A6EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6EF0"))) PPC_WEAK_FUNC(sub_832A6EF0);
PPC_FUNC_IMPL(__imp__sub_832A6EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d7553c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6EF4"))) PPC_WEAK_FUNC(sub_832A6EF4);
PPC_FUNC_IMPL(__imp__sub_832A6EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6EF8"))) PPC_WEAK_FUNC(sub_832A6EF8);
PPC_FUNC_IMPL(__imp__sub_832A6EF8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2a70
	ctx.lr = 0x832A6F20;
	sub_832D2A70(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a6f48
	if (!cr6.eq) goto loc_832A6F48;
	// lis r3,-32766
	ctx.r3.s64 = -2147352576;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
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
loc_832A6F48:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A6F70"))) PPC_WEAK_FUNC(sub_832A6F70);
PPC_FUNC_IMPL(__imp__sub_832A6F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x832d1a68
	sub_832D1A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A6F80"))) PPC_WEAK_FUNC(sub_832A6F80);
PPC_FUNC_IMPL(__imp__sub_832A6F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A6F84"))) PPC_WEAK_FUNC(sub_832A6F84);
PPC_FUNC_IMPL(__imp__sub_832A6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A6F88"))) PPC_WEAK_FUNC(sub_832A6F88);
PPC_FUNC_IMPL(__imp__sub_832A6F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A6F90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_832A6FA8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x832a6fcc
	if (!cr6.eq) goto loc_832A6FCC;
	// stwcx. r26,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a6fa8
	if (!cr0.eq) goto loc_832A6FA8;
	// b 0x832a6fd4
	goto loc_832A6FD4;
loc_832A6FCC:
	// stwcx. r11,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832A6FD4:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a7068
	if (cr6.eq) goto loc_832A7068;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x832a7004
	if (!cr6.eq) goto loc_832A7004;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A7004:
	// li r29,2
	ctx.r29.s64 = 2;
loc_832A7008:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a7008
	if (!cr0.eq) goto loc_832A7008;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a7068
	if (cr6.eq) goto loc_832A7068;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_832A7034:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82417108
	ctx.lr = 0x832A7040;
	sub_82417108(ctx, base);
loc_832A7040:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a7040
	if (!cr0.eq) goto loc_832A7040;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a7034
	if (!cr6.eq) goto loc_832A7034;
loc_832A7068:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7078"))) PPC_WEAK_FUNC(sub_832A7078);
PPC_FUNC_IMPL(__imp__sub_832A7078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwsync 
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_832A7098:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a7098
	if (!cr0.eq) goto loc_832A7098;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x832d2b10
	sub_832D2B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A70C4"))) PPC_WEAK_FUNC(sub_832A70C4);
PPC_FUNC_IMPL(__imp__sub_832A70C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A70C8"))) PPC_WEAK_FUNC(sub_832A70C8);
PPC_FUNC_IMPL(__imp__sub_832A70C8) {
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
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r31,r10,29748
	ctx.r31.s64 = ctx.r10.s64 + 29748;
	// stw r11,29748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29748, ctx.r11.u32);
	// bl 0x83d7568c
	ctx.lr = 0x832A70EC;
	__imp__KeTlsAlloc(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832a710c
	if (!cr6.eq) goto loc_832A710C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-28284
	ctx.r4.s64 = ctx.r11.s64 + -28284;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832A710C;
	sub_832982E8(ctx, base);
loc_832A710C:
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

__attribute__((alias("__imp__sub_832A7120"))) PPC_WEAK_FUNC(sub_832A7120);
PPC_FUNC_IMPL(__imp__sub_832A7120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,29752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29752);
	// b 0x83d7567c
	__imp__KeTlsFree(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A712C"))) PPC_WEAK_FUNC(sub_832A712C);
PPC_FUNC_IMPL(__imp__sub_832A712C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A7130"))) PPC_WEAK_FUNC(sub_832A7130);
PPC_FUNC_IMPL(__imp__sub_832A7130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A7138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d86c8
	ctx.lr = 0x832A7168;
	sub_831D86C8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a71ac
	if (cr6.eq) goto loc_832A71AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82416b10
	ctx.lr = 0x832A717C;
	sub_82416B10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6c30
	ctx.lr = 0x832A7188;
	sub_832A6C30(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x832a719c
	if (cr6.lt) goto loc_832A719C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6cc0
	ctx.lr = 0x832A719C;
	sub_832A6CC0(ctx, base);
loc_832A719C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d2f58
	ctx.lr = 0x832A71A4;
	sub_832D2F58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832a71c0
	if (!cr6.eq) goto loc_832A71C0;
loc_832A71AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A71C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6ac8
	ctx.lr = 0x832A71C8;
	sub_832A6AC8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A71D8"))) PPC_WEAK_FUNC(sub_832A71D8);
PPC_FUNC_IMPL(__imp__sub_832A71D8) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83297bb8
	ctx.lr = 0x832A71EC;
	sub_83297BB8(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// divdu r10,r3,r11
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r11.u64);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A7208"))) PPC_WEAK_FUNC(sub_832A7208);
PPC_FUNC_IMPL(__imp__sub_832A7208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A7210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a7238
	if (!cr6.eq) goto loc_832A7238;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A7238:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,29760
	ctx.r30.s64 = ctx.r11.s64 + 29760;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b7bd0
	ctx.lr = 0x832A7254;
	sub_832B7BD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a72dc
	if (cr6.lt) goto loc_832A72DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296ba8
	ctx.lr = 0x832A7268;
	sub_83296BA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832a72a8
	if (cr6.eq) goto loc_832A72A8;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x832a72a8
	if (!cr6.eq) goto loc_832A72A8;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(ctx.r31.s32, 256, xer);
	// blt cr6,0x832a7298
	if (cr6.lt) goto loc_832A7298;
loc_832A7288:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A7298:
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// li r10,47
	ctx.r10.s64 = 47;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_832A72A8:
	// addi r11,r30,144
	ctx.r11.s64 = ctx.r30.s64 + 144;
	// subfic r30,r31,248
	xer.ca = ctx.r31.u32 <= 248;
	ctx.r30.s64 = 248 - ctx.r31.s64;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// addi r5,r11,-28192
	ctx.r5.s64 = ctx.r11.s64 + -28192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x832A72CC;
	sub_83297A40(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// bge cr6,0x832a7288
	if (!cr6.lt) goto loc_832A7288;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_832A72DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A72E8"))) PPC_WEAK_FUNC(sub_832A72E8);
PPC_FUNC_IMPL(__imp__sub_832A72E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A72F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_832A7308:
	// lbzu r28,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r28.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x832a7308
	if (!cr6.eq) goto loc_832A7308;
	// addi r27,r31,144
	ctx.r27.s64 = ctx.r31.s64 + 144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stbx r11,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r11.u8);
	// bl 0x832b7d08
	ctx.lr = 0x832A7334;
	sub_832B7D08(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r11,-31512
	ctx.r30.s64 = ctx.r11.s64 + -31512;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x832a737c
	if (cr6.eq) goto loc_832A737C;
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x832a7370
	if (!cr6.eq) goto loc_832A7370;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r10,-28008
	ctx.r4.s64 = ctx.r10.s64 + -28008;
	// bl 0x83298398
	ctx.lr = 0x832A7368;
	sub_83298398(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a73c8
	goto loc_832A73C8;
loc_832A7370:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r10,-28040
	ctx.r4.s64 = ctx.r10.s64 + -28040;
	// b 0x832a73c0
	goto loc_832A73C0;
loc_832A737C:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r10,-28068
	ctx.r4.s64 = ctx.r10.s64 + -28068;
	// bl 0x83298338
	ctx.lr = 0x832A7388;
	sub_83298338(ctx, base);
	// li r4,493
	ctx.r4.s64 = 493;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x832b81c0
	ctx.lr = 0x832A7394;
	sub_832B81C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// blt cr6,0x832a73b8
	if (cr6.lt) goto loc_832A73B8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-28092
	ctx.r4.s64 = ctx.r11.s64 + -28092;
	// bl 0x83298398
	ctx.lr = 0x832A73B0;
	sub_83298398(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a73c8
	goto loc_832A73C8;
loc_832A73B8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-28120
	ctx.r4.s64 = ctx.r11.s64 + -28120;
loc_832A73C0:
	// bl 0x83298338
	ctx.lr = 0x832A73C4;
	sub_83298338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832A73C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stbx r28,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r28.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a73f4
	if (cr6.eq) goto loc_832A73F4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// addi r4,r11,-28152
	ctx.r4.s64 = ctx.r11.s64 + -28152;
	// bl 0x83298398
	ctx.lr = 0x832A73EC;
	sub_83298398(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A73F4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-28184
	ctx.r4.s64 = ctx.r11.s64 + -28184;
	// bl 0x83298338
	ctx.lr = 0x832A7400;
	sub_83298338(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7408"))) PPC_WEAK_FUNC(sub_832A7408);
PPC_FUNC_IMPL(__imp__sub_832A7408) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7438
	if (!cr6.gt) goto loc_832A7438;
	// bl 0x832a5a38
	ctx.lr = 0x832A7434;
	sub_832A5A38(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_832A7438:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x832a7450
	if (!cr6.gt) goto loc_832A7450;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7450;
	sub_832A5AE8(ctx, base);
loc_832A7450:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a747c
	if (cr6.eq) goto loc_832A747C;
loc_832A745C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A7470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a745c
	if (!cr6.eq) goto loc_832A745C;
loc_832A747C:
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

__attribute__((alias("__imp__sub_832A7498"))) PPC_WEAK_FUNC(sub_832A7498);
PPC_FUNC_IMPL(__imp__sub_832A7498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A74A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a753c
	if (!cr6.eq) goto loc_832A753C;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lis r7,-31956
	ctx.r7.s64 = -2094268416;
	// stb r11,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r11.u8);
	// lis r8,-31913
	ctx.r8.s64 = -2091450368;
	// stb r9,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r9.u8);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r7,-30488
	ctx.r11.s64 = ctx.r7.s64 + -30488;
	// addi r9,r8,10584
	ctx.r9.s64 = ctx.r8.s64 + 10584;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// bl 0x832b85e8
	ctx.lr = 0x832A7504;
	sub_832B85E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x832b8768
	ctx.lr = 0x832A7514;
	sub_832B8768(ctx, base);
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r9,r9,-31208
	ctx.r9.s64 = ctx.r9.s64 + -31208;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x832a7540
	goto loc_832A7540;
loc_832A753C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_832A7540:
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ble cr6,0x832a7550
	if (!cr6.gt) goto loc_832A7550;
	// li r11,5
	ctx.r11.s64 = 5;
loc_832A7550:
	// subfic r10,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x832a7560
	if (!cr6.lt) goto loc_832A7560;
	// li r11,5
	ctx.r11.s64 = 5;
loc_832A7560:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7580"))) PPC_WEAK_FUNC(sub_832A7580);
PPC_FUNC_IMPL(__imp__sub_832A7580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A7588;
	__savegprlr_26(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bne cr6,0x832a75e4
	if (!cr6.eq) goto loc_832A75E4;
	// li r5,688
	ctx.r5.s64 = 688;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x832948b0
	ctx.lr = 0x832A75CC;
	sub_832948B0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,7856
	ctx.r6.s64 = ctx.r11.s64 + 7856;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x832A75E0;
	sub_83294C00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832A75E4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-27940
	ctx.r5.s64 = ctx.r11.s64 + -27940;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x832A75F8;
	sub_83295250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a7628
	if (cr6.eq) goto loc_832A7628;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x83294f00
	ctx.lr = 0x832A7610;
	sub_83294F00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a7628
	if (cr6.lt) goto loc_832A7628;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
loc_832A7628:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x832b8bd0
	ctx.lr = 0x832A7640;
	sub_832B8BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r4,r10,-29564
	ctx.r4.s64 = ctx.r10.s64 + -29564;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832a7f00
	ctx.lr = 0x832A7670;
	sub_832A7F00(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-31208
	ctx.r11.s64 = ctx.r11.s64 + -31208;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832b8a10
	ctx.lr = 0x832A7688;
	sub_832B8A10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a76a4
	if (!cr6.lt) goto loc_832A76A4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-27988
	ctx.r4.s64 = ctx.r11.s64 + -27988;
	// addi r3,r10,-29208
	ctx.r3.s64 = ctx.r10.s64 + -29208;
	// bl 0x832982e8
	ctx.lr = 0x832A76A4;
	sub_832982E8(ctx, base);
loc_832A76A4:
	// subfic r11,r3,5
	xer.ca = ctx.r3.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r3.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a76b4
	if (!cr6.lt) goto loc_832A76B4;
	// li r3,5
	ctx.r3.s64 = 5;
loc_832A76B4:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A76D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a76e8
	if (!cr6.eq) goto loc_832A76E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83295af0
	ctx.lr = 0x832A76E4;
	sub_83295AF0(ctx, base);
	// bl 0x83294958
	ctx.lr = 0x832A76E8;
	sub_83294958(ctx, base);
loc_832A76E8:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A76F0"))) PPC_WEAK_FUNC(sub_832A76F0);
PPC_FUNC_IMPL(__imp__sub_832A76F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A76F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832b9270
	ctx.lr = 0x832A7700;
	sub_832B9270(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a771c
	if (!cr6.lt) goto loc_832A771C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-27720
	ctx.r4.s64 = ctx.r11.s64 + -27720;
	// addi r3,r10,-29208
	ctx.r3.s64 = ctx.r10.s64 + -29208;
	// bl 0x832982e8
	ctx.lr = 0x832A771C;
	sub_832982E8(ctx, base);
loc_832A771C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x832a5950
	ctx.lr = 0x832A7734;
	sub_832A5950(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a7754
	if (!cr6.lt) goto loc_832A7754;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-27748
	ctx.r4.s64 = ctx.r11.s64 + -27748;
	// addi r3,r10,-29208
	ctx.r3.s64 = ctx.r10.s64 + -29208;
	// bl 0x832982e8
	ctx.lr = 0x832A7754;
	sub_832982E8(ctx, base);
loc_832A7754:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a7794
	if (!cr6.eq) goto loc_832A7794;
	// li r5,688
	ctx.r5.s64 = 688;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x832948b0
	ctx.lr = 0x832A777C;
	sub_832948B0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,7856
	ctx.r6.s64 = ctx.r11.s64 + 7856;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294c00
	ctx.lr = 0x832A7790;
	sub_83294C00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_832A7794:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,18392
	ctx.r6.s64 = ctx.r11.s64 + 18392;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832A77AC;
	sub_832B3FD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832a77cc
	if (!cr6.eq) goto loc_832A77CC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-27792
	ctx.r4.s64 = ctx.r11.s64 + -27792;
	// addi r3,r10,-29208
	ctx.r3.s64 = ctx.r10.s64 + -29208;
	// bl 0x832982e8
	ctx.lr = 0x832A77CC;
	sub_832982E8(ctx, base);
loc_832A77CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832a7208
	ctx.lr = 0x832A77D4;
	sub_832A7208(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a77f0
	if (!cr6.lt) goto loc_832A77F0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-27792
	ctx.r4.s64 = ctx.r11.s64 + -27792;
	// addi r3,r10,-29208
	ctx.r3.s64 = ctx.r10.s64 + -29208;
	// bl 0x832982e8
	ctx.lr = 0x832A77F0;
	sub_832982E8(ctx, base);
loc_832A77F0:
	// lbz r10,369(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 369);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a7800
	if (cr6.eq) goto loc_832A7800;
	// bl 0x832a72e8
	ctx.lr = 0x832A7800;
	sub_832A72E8(ctx, base);
loc_832A7800:
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x832b82a0
	ctx.lr = 0x832A780C;
	sub_832B82A0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a782c
	if (!cr6.eq) goto loc_832A782C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-27832
	ctx.r4.s64 = ctx.r11.s64 + -27832;
	// addi r3,r10,-29208
	ctx.r3.s64 = ctx.r10.s64 + -29208;
	// bl 0x832982e8
	ctx.lr = 0x832A782C;
	sub_832982E8(ctx, base);
loc_832A782C:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r28,r11,-29208
	ctx.r28.s64 = ctx.r11.s64 + -29208;
	// bne cr6,0x832a7850
	if (!cr6.eq) goto loc_832A7850;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-27888
	ctx.r4.s64 = ctx.r11.s64 + -27888;
	// bl 0x83298338
	ctx.lr = 0x832A7850;
	sub_83298338(ctx, base);
loc_832A7850:
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// li r5,12
	ctx.r5.s64 = 12;
	// lbz r10,369(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 369);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stb r11,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r11.u8);
	// stb r10,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r10.u8);
	// bl 0x83293ec8
	ctx.lr = 0x832A7870;
	sub_83293EC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b8a10
	ctx.lr = 0x832A7878;
	sub_832B8A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a7894
	if (!cr6.lt) goto loc_832A7894;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-27792
	ctx.r4.s64 = ctx.r11.s64 + -27792;
	// bl 0x832982e8
	ctx.lr = 0x832A7894;
	sub_832982E8(ctx, base);
loc_832A7894:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b8e28
	ctx.lr = 0x832A78AC;
	sub_832B8E28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a78e8
	if (!cr6.eq) goto loc_832A78E8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r9,r11,22
	ctx.r9.u64 = ctx.r11.u64 | 22;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x832a78dc
	if (!cr6.eq) goto loc_832A78DC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-27792
	ctx.r4.s64 = ctx.r11.s64 + -27792;
	// bl 0x832982e8
	ctx.lr = 0x832A78DC;
	sub_832982E8(ctx, base);
loc_832A78DC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// bl 0x832982e8
	ctx.lr = 0x832A78E8;
	sub_832982E8(ctx, base);
loc_832A78E8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,29144
	ctx.r11.s64 = ctx.r11.s64 + 29144;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x832b8608
	ctx.lr = 0x832A78F8;
	sub_832B8608(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// subfic r10,r30,5
	xer.ca = ctx.r30.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r30.s64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r11,r11,-31192
	ctx.r11.s64 = ctx.r11.s64 + -31192;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x832a791c
	if (!cr6.lt) goto loc_832A791C;
	// li r11,5
	ctx.r11.s64 = 5;
loc_832A791C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x832a7960
	if (!cr6.gt) goto loc_832A7960;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7960;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832A7960:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a7978
	if (!cr6.eq) goto loc_832A7978;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83295af0
	ctx.lr = 0x832A7974;
	sub_83295AF0(ctx, base);
	// bl 0x83294958
	ctx.lr = 0x832A7978;
	sub_83294958(ctx, base);
loc_832A7978:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7980"))) PPC_WEAK_FUNC(sub_832A7980);
PPC_FUNC_IMPL(__imp__sub_832A7980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// addi r9,r11,29760
	ctx.r9.s64 = ctx.r11.s64 + 29760;
	// addi r8,r10,10584
	ctx.r8.s64 = ctx.r10.s64 + 10584;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A79A4"))) PPC_WEAK_FUNC(sub_832A79A4);
PPC_FUNC_IMPL(__imp__sub_832A79A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A79A8"))) PPC_WEAK_FUNC(sub_832A79A8);
PPC_FUNC_IMPL(__imp__sub_832A79A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// lbz r3,401(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 401);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A79B8"))) PPC_WEAK_FUNC(sub_832A79B8);
PPC_FUNC_IMPL(__imp__sub_832A79B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832A79CC"))) PPC_WEAK_FUNC(sub_832A79CC);
PPC_FUNC_IMPL(__imp__sub_832A79CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A79D0"))) PPC_WEAK_FUNC(sub_832A79D0);
PPC_FUNC_IMPL(__imp__sub_832A79D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,29760
	ctx.r11.s64 = ctx.r11.s64 + 29760;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A79E0"))) PPC_WEAK_FUNC(sub_832A79E0);
PPC_FUNC_IMPL(__imp__sub_832A79E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A79F0"))) PPC_WEAK_FUNC(sub_832A79F0);
PPC_FUNC_IMPL(__imp__sub_832A79F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A7A00"))) PPC_WEAK_FUNC(sub_832A7A00);
PPC_FUNC_IMPL(__imp__sub_832A7A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,29760
	ctx.r11.s64 = ctx.r11.s64 + 29760;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A7A10"))) PPC_WEAK_FUNC(sub_832A7A10);
PPC_FUNC_IMPL(__imp__sub_832A7A10) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7a44
	if (!cr6.gt) goto loc_832A7A44;
	// bl 0x832a5a38
	ctx.lr = 0x832A7A40;
	sub_832A5A38(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_832A7A44:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// ble cr6,0x832a7a54
	if (!cr6.gt) goto loc_832A7A54;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7A54;
	sub_832A5AE8(ctx, base);
loc_832A7A54:
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

__attribute__((alias("__imp__sub_832A7A6C"))) PPC_WEAK_FUNC(sub_832A7A6C);
PPC_FUNC_IMPL(__imp__sub_832A7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A7A70"))) PPC_WEAK_FUNC(sub_832A7A70);
PPC_FUNC_IMPL(__imp__sub_832A7A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// b 0x832b8340
	sub_832B8340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7A88"))) PPC_WEAK_FUNC(sub_832A7A88);
PPC_FUNC_IMPL(__imp__sub_832A7A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// b 0x832b83f0
	sub_832B83F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7A9C"))) PPC_WEAK_FUNC(sub_832A7A9C);
PPC_FUNC_IMPL(__imp__sub_832A7A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A7AA0"))) PPC_WEAK_FUNC(sub_832A7AA0);
PPC_FUNC_IMPL(__imp__sub_832A7AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r11,29760
	ctx.r11.s64 = ctx.r11.s64 + 29760;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// b 0x83293ec8
	sub_83293EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7AB4"))) PPC_WEAK_FUNC(sub_832A7AB4);
PPC_FUNC_IMPL(__imp__sub_832A7AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A7AB8"))) PPC_WEAK_FUNC(sub_832A7AB8);
PPC_FUNC_IMPL(__imp__sub_832A7AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A7AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,29760
	ctx.r30.s64 = ctx.r11.s64 + 29760;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7ae0
	if (!cr6.gt) goto loc_832A7AE0;
	// bl 0x832a5a38
	ctx.lr = 0x832A7AE0;
	sub_832A5A38(ctx, base);
loc_832A7AE0:
	// stw r29,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r29.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7AFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a7b30
	if (cr6.eq) goto loc_832A7B30;
loc_832A7B08:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A7B24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a7b08
	if (!cr6.eq) goto loc_832A7B08;
loc_832A7B30:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7b40
	if (!cr6.gt) goto loc_832A7B40;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7B40;
	sub_832A5AE8(ctx, base);
loc_832A7B40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7B48"))) PPC_WEAK_FUNC(sub_832A7B48);
PPC_FUNC_IMPL(__imp__sub_832A7B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A7B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7b70
	if (!cr6.gt) goto loc_832A7B70;
	// bl 0x832a5a38
	ctx.lr = 0x832A7B70;
	sub_832A5A38(ctx, base);
loc_832A7B70:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r4,3
	ctx.r4.s64 = 3;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// and r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832A7B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a7bd0
	if (cr6.eq) goto loc_832A7BD0;
loc_832A7BA8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A7BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832a7ba8
	if (!cr6.eq) goto loc_832A7BA8;
loc_832A7BD0:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7be0
	if (!cr6.gt) goto loc_832A7BE0;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7BE0;
	sub_832A5AE8(ctx, base);
loc_832A7BE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7BE8"))) PPC_WEAK_FUNC(sub_832A7BE8);
PPC_FUNC_IMPL(__imp__sub_832A7BE8) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,29760
	ctx.r10.s64 = ctx.r11.s64 + 29760;
	// lwz r31,136(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832a7c1c
	if (!cr6.gt) goto loc_832A7C1C;
	// bl 0x832b28e8
	ctx.lr = 0x832A7C10;
	sub_832B28E8(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x832a7c1c
	if (cr6.eq) goto loc_832A7C1C;
	// bl 0x832b2e88
	ctx.lr = 0x832A7C1C;
	sub_832B2E88(ctx, base);
loc_832A7C1C:
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

__attribute__((alias("__imp__sub_832A7C30"))) PPC_WEAK_FUNC(sub_832A7C30);
PPC_FUNC_IMPL(__imp__sub_832A7C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A7C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7c5c
	if (!cr6.gt) goto loc_832A7C5C;
	// bl 0x832a5a38
	ctx.lr = 0x832A7C58;
	sub_832A5A38(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_832A7C5C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a7c84
	if (cr6.eq) goto loc_832A7C84;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7c78
	if (!cr6.gt) goto loc_832A7C78;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7C78;
	sub_832A5AE8(ctx, base);
loc_832A7C78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A7C84:
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// ble cr6,0x832a7c98
	if (!cr6.gt) goto loc_832A7C98;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7C98;
	sub_832A5AE8(ctx, base);
loc_832A7C98:
	// lis r9,-31913
	ctx.r9.s64 = -2091450368;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// addi r7,r9,10584
	ctx.r7.s64 = ctx.r9.s64 + 10584;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r29,r5,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bne cr6,0x832a7cf0
	if (!cr6.eq) goto loc_832A7CF0;
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// addi r11,r11,10584
	ctx.r11.s64 = ctx.r11.s64 + 10584;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x832b85e8
	ctx.lr = 0x832A7CD4;
	sub_832B85E8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x832b8c18
	ctx.lr = 0x832A7CDC;
	sub_832B8C18(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r11,r11,-31208
	ctx.r11.s64 = ctx.r11.s64 + -31208;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832A7CF0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a7c78
	if (!cr6.eq) goto loc_832A7C78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7D0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A7D18"))) PPC_WEAK_FUNC(sub_832A7D18);
PPC_FUNC_IMPL(__imp__sub_832A7D18) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// addi r9,r11,29760
	ctx.r9.s64 = ctx.r11.s64 + 29760;
	// addi r8,r10,10584
	ctx.r8.s64 = ctx.r10.s64 + 10584;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x832a7d78
	if (cr6.eq) goto loc_832A7D78;
	// bl 0x832a7408
	ctx.lr = 0x832A7D4C;
	sub_832A7408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a7d78
	if (cr6.eq) goto loc_832A7D78;
loc_832A7D58:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a1d18
	ctx.lr = 0x832A7D64;
	sub_832A1D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832A7D6C;
	sub_832A1D18(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832a7d58
	if (!cr6.eq) goto loc_832A7D58;
loc_832A7D78:
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

__attribute__((alias("__imp__sub_832A7D90"))) PPC_WEAK_FUNC(sub_832A7D90);
PPC_FUNC_IMPL(__imp__sub_832A7D90) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a7c30
	ctx.lr = 0x832A7DA8;
	sub_832A7C30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a7dec
	if (cr6.eq) goto loc_832A7DEC;
	// bl 0x832a1d18
	ctx.lr = 0x832A7DB4;
	sub_832A1D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b92f8
	ctx.lr = 0x832A7DBC;
	sub_832B92F8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832b8330
	ctx.lr = 0x832A7DCC;
	sub_832B8330(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7de4
	if (!cr6.gt) goto loc_832A7DE4;
	// bl 0x832a59f0
	ctx.lr = 0x832A7DDC;
	sub_832A59F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_832A7DE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_832A7DEC:
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

__attribute__((alias("__imp__sub_832A7E00"))) PPC_WEAK_FUNC(sub_832A7E00);
PPC_FUNC_IMPL(__imp__sub_832A7E00) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// addi r31,r11,29760
	ctx.r31.s64 = ctx.r11.s64 + 29760;
	// addi r9,r10,10584
	ctx.r9.s64 = ctx.r10.s64 + 10584;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x832a7e4c
	if (!cr6.eq) goto loc_832A7E4C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7E48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832a7ebc
	goto loc_832A7EBC;
loc_832A7E4C:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a7e60
	if (!cr6.gt) goto loc_832A7E60;
	// bl 0x832a5a38
	ctx.lr = 0x832A7E5C;
	sub_832A5A38(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_832A7E60:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// ble cr6,0x832a7e7c
	if (!cr6.gt) goto loc_832A7E7C;
	// bl 0x832a5ae8
	ctx.lr = 0x832A7E7C;
	sub_832A5AE8(ctx, base);
loc_832A7E7C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a7e90
	if (cr6.eq) goto loc_832A7E90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832a7ea4
	goto loc_832A7EA4;
loc_832A7E90:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x832b84b8
	ctx.lr = 0x832A7E98;
	sub_832B84B8(ctx, base);
	// bl 0x832b28e8
	ctx.lr = 0x832A7E9C;
	sub_832B28E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
loc_832A7EA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a7ee4
	if (cr6.eq) goto loc_832A7EE4;
	// bl 0x832a7408
	ctx.lr = 0x832A7EB4;
	sub_832A7408(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832a7c30
	ctx.lr = 0x832A7EBC;
	sub_832A7C30(ctx, base);
loc_832A7EBC:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a7ed4
	if (cr6.eq) goto loc_832A7ED4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832b92f8
	ctx.lr = 0x832A7ED4;
	sub_832B92F8(ctx, base);
loc_832A7ED4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A7EE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832A7EE0:
	// b 0x832a7ee0
	goto loc_832A7EE0;
loc_832A7EE4:
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

__attribute__((alias("__imp__sub_832A7EFC"))) PPC_WEAK_FUNC(sub_832A7EFC);
PPC_FUNC_IMPL(__imp__sub_832A7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A7F00"))) PPC_WEAK_FUNC(sub_832A7F00);
PPC_FUNC_IMPL(__imp__sub_832A7F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,18520
	ctx.r6.s64 = ctx.r11.s64 + 18520;
loc_832A7F20:
	// lbzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// clrlwi r31,r11,27
	ctx.r31.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r30,r9,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r31,r5,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r31.u8 & 0x3F));
	// lwzx r30,r30,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// and r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 & ctx.r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a7f8c
	if (cr6.eq) goto loc_832A7F8C;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// sld r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,64
	cr6.compare<uint32_t>(ctx.r8.u32, 64, xer);
	// ble cr6,0x832a7f20
	if (!cr6.gt) goto loc_832A7F20;
loc_832A7F64:
	// subfic r11,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r10.s64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x832a7f94
	if (cr6.lt) goto loc_832A7F94;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832A7F8C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x832a7f64
	if (cr6.eq) goto loc_832A7F64;
loc_832A7F94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A7FA4"))) PPC_WEAK_FUNC(sub_832A7FA4);
PPC_FUNC_IMPL(__imp__sub_832A7FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A7FA8"))) PPC_WEAK_FUNC(sub_832A7FA8);
PPC_FUNC_IMPL(__imp__sub_832A7FA8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgt cr6,0x832a8150
	if (cr6.gt) goto loc_832A8150;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832a8038
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A8038;
	// bdzf 4*cr6+eq,0x832a805c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A805C;
	// bdzf 4*cr6+eq,0x832a8080
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A8080;
	// bdzf 4*cr6+eq,0x832a80b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A80B0;
	// bdzf 4*cr6+eq,0x832a80d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A80D0;
	// bdzf 4*cr6+eq,0x832a80ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A80EC;
	// bdzf 4*cr6+eq,0x832a8108
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A8108;
	// bne cr6,0x832a812c
	if (!cr6.eq) goto loc_832A812C;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r9,r11,5
	xer.ca = ctx.r11.u32 <= 5;
	ctx.r9.s64 = 5 - ctx.r11.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x832a8010
	if (!cr6.lt) goto loc_832A8010;
	// li r11,5
	ctx.r11.s64 = 5;
loc_832A8010:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8030;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A8038:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A805C:
	// bl 0x832a79d0
	ctx.lr = 0x832A8060;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832a7a10
	ctx.lr = 0x832A8078;
	sub_832A7A10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A8080:
	// bl 0x832a79d0
	ctx.lr = 0x832A8084;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x832a7a70
	ctx.lr = 0x832A80AC;
	sub_832A7A70(ctx, base);
	// b 0x832a8154
	goto loc_832A8154;
loc_832A80B0:
	// bl 0x832a79d0
	ctx.lr = 0x832A80B4;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832a7a88
	ctx.lr = 0x832A80CC;
	sub_832A7A88(ctx, base);
	// b 0x832a8154
	goto loc_832A8154;
loc_832A80D0:
	// bl 0x832a79d0
	ctx.lr = 0x832A80D4;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832a7b48
	ctx.lr = 0x832A80E4;
	sub_832A7B48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A80EC:
	// bl 0x832a79d0
	ctx.lr = 0x832A80F0;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a7b48
	ctx.lr = 0x832A8100;
	sub_832A7B48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A8108:
	// bl 0x832a79d0
	ctx.lr = 0x832A810C;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832a7aa0
	ctx.lr = 0x832A8124;
	sub_832A7AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A812C:
	// bl 0x832a79d0
	ctx.lr = 0x832A8130;
	sub_832A79D0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x832a8150
	if (!cr6.eq) goto loc_832A8150;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832a7ab8
	ctx.lr = 0x832A8148;
	sub_832A7AB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832a8154
	goto loc_832A8154;
loc_832A8150:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832A8154:
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

__attribute__((alias("__imp__sub_832A816C"))) PPC_WEAK_FUNC(sub_832A816C);
PPC_FUNC_IMPL(__imp__sub_832A816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8170"))) PPC_WEAK_FUNC(sub_832A8170);
PPC_FUNC_IMPL(__imp__sub_832A8170) {
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
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r31,r11,512
	xer.ca = ctx.r11.u32 <= 512;
	ctx.r31.s64 = 512 - ctx.r11.s64;
	// addi r30,r10,12
	ctx.r30.s64 = ctx.r10.s64 + 12;
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832979a8
	ctx.lr = 0x832A81B0;
	sub_832979A8(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// blt cr6,0x832a81c0
	if (cr6.lt) goto loc_832A81C0;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x832a81d8
	goto loc_832A81D8;
loc_832A81C0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a81e0
	if (cr6.eq) goto loc_832A81E0;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x832a81e0
	if (!cr6.eq) goto loc_832A81E0;
loc_832A81D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_832A81E0:
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

__attribute__((alias("__imp__sub_832A81F8"))) PPC_WEAK_FUNC(sub_832A81F8);
PPC_FUNC_IMPL(__imp__sub_832A81F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A8200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// blt cr6,0x832a8224
	if (cr6.lt) goto loc_832A8224;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A8224:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
loc_832A822C:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r7,r9,-10
	ctx.r7.s64 = ctx.r9.s64 + -10;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x832a822c
	if (cr6.eq) goto loc_832A822C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x832a8278
	if (!cr6.eq) goto loc_832A8278;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,512
	ctx.r8.s64 = 512;
	// li r7,10
	ctx.r7.s64 = 10;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// stb r7,11(r9)
	PPC_STORE_U8(ctx.r9.u32 + 11, ctx.r7.u8);
	// b 0x832a827c
	goto loc_832A827C;
loc_832A8278:
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
loc_832A827C:
	// lhz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r28,6(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a82dc
	if (cr6.eq) goto loc_832A82DC;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x832a82b8
	if (cr6.lt) goto loc_832A82B8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83293f28
	ctx.lr = 0x832A82B4;
	sub_83293F28(ctx, base);
	// b 0x832a82dc
	goto loc_832A82DC;
loc_832A82B8:
	// subf r29,r30,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83293f28
	ctx.lr = 0x832A82D4;
	sub_83293F28(ctx, base);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
loc_832A82DC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r9,r27,r30
	ctx.r9.u64 = ctx.r27.u64 + ctx.r30.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r7,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r7.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// stw r9,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A830C"))) PPC_WEAK_FUNC(sub_832A830C);
PPC_FUNC_IMPL(__imp__sub_832A830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8310"))) PPC_WEAK_FUNC(sub_832A8310);
PPC_FUNC_IMPL(__imp__sub_832A8310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A8318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r6,r10,-32400
	ctx.r6.s64 = ctx.r10.s64 + -32400;
	// addi r5,r9,-32264
	ctx.r5.s64 = ctx.r9.s64 + -32264;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bctrl 
	ctx.lr = 0x832A8368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r11,512
	ctx.r11.s64 = 512;
	// sth r4,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r4.u16);
	// sth r3,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// sth r29,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r29.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8394"))) PPC_WEAK_FUNC(sub_832A8394);
PPC_FUNC_IMPL(__imp__sub_832A8394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8398"))) PPC_WEAK_FUNC(sub_832A8398);
PPC_FUNC_IMPL(__imp__sub_832A8398) {
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
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// lhz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// addi r7,r9,30176
	ctx.r7.s64 = ctx.r9.s64 + 30176;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r5,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a8448
	if (cr6.eq) goto loc_832A8448;
loc_832A83DC:
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r30,540
	ctx.r11.s64 = ctx.r30.s64 + 540;
	// lhz r9,546(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 546);
	// lhz r8,544(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 544);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,540(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// subf r3,r8,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subf r10,r4,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r4.s64;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832a841c
	if (cr6.eq) goto loc_832A841C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832a8430
	goto loc_832A8430;
loc_832A841C:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83293fb0
	ctx.lr = 0x832A8428;
	sub_83293FB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_832A8430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a8464
	if (!cr6.eq) goto loc_832A8464;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832a83dc
	if (!cr6.eq) goto loc_832A83DC;
loc_832A8448:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832A844C:
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
loc_832A8464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832a844c
	goto loc_832A844C;
}

__attribute__((alias("__imp__sub_832A846C"))) PPC_WEAK_FUNC(sub_832A846C);
PPC_FUNC_IMPL(__imp__sub_832A846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8470"))) PPC_WEAK_FUNC(sub_832A8470);
PPC_FUNC_IMPL(__imp__sub_832A8470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832A8478;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r11,30176
	ctx.r25.s64 = ctx.r11.s64 + 30176;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r24,2052(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2052);
loc_832A8490:
	// lhz r26,262(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 262);
	// rotlwi r11,r26,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 2);
	// rotlwi r27,r26,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r26.u32, 3);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_832A84A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r25
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a8564
	if (cr6.eq) goto loc_832A8564;
loc_832A84BC:
	// lhz r11,546(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 546);
	// addi r31,r29,540
	ctx.r31.s64 = ctx.r29.s64 + 540;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a84d4
	if (!cr6.eq) goto loc_832A84D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a854c
	goto loc_832A854C;
loc_832A84D4:
	// lhz r10,262(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 262);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x832a84e8
	if (!cr6.lt) goto loc_832A84E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832a854c
	goto loc_832A854C;
loc_832A84E8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x832a8504
	if (cr6.eq) goto loc_832A8504;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832a854c
	goto loc_832A854C;
loc_832A8504:
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// lbzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-47
	ctx.r10.s64 = ctx.r11.s64 + -47;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x832a853c
	if (!cr6.eq) goto loc_832A853C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832a854c
	goto loc_832A854C;
loc_832A853C:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x83293fb0
	ctx.lr = 0x832A8544;
	sub_83293FB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_832A854C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a8590
	if (!cr6.eq) goto loc_832A8590;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832a84bc
	if (!cr6.eq) goto loc_832A84BC;
loc_832A8564:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// bne cr6,0x832a84a0
	if (!cr6.eq) goto loc_832A84A0;
loc_832A8578:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,19
	ctx.r10.u64 = ctx.r11.u64 | 19;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832A8590:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a8578
	if (cr6.eq) goto loc_832A8578;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a85dc
	if (!cr6.eq) goto loc_832A85DC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// beq cr6,0x832a85c4
	if (cr6.eq) goto loc_832A85C4;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832aa420
	ctx.lr = 0x832A85C0;
	sub_832AA420(ctx, base);
	// b 0x832a8490
	goto loc_832A8490;
loc_832A85C4:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,40
	ctx.r10.u64 = ctx.r11.u64 | 40;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832A85DC:
	// lwz r11,680(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 680);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 680, ctx.r11.u32);
	// bge 0x832a8604
	if (!cr0.lt) goto loc_832A8604;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832A8604:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8618"))) PPC_WEAK_FUNC(sub_832A8618);
PPC_FUNC_IMPL(__imp__sub_832A8618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A8620;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31747
	ctx.r27.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-32528(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A863C;
	sub_832A5A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a8398
	ctx.lr = 0x832A8644;
	sub_832A8398(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a8658
	if (cr6.eq) goto loc_832A8658;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,17
	ctx.r10.u64 = ctx.r11.u64 | 17;
	// b 0x832a8700
	goto loc_832A8700;
loc_832A8658:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r29,r11,30176
	ctx.r29.s64 = ctx.r11.s64 + 30176;
	// lwz r3,2048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2048);
	// bl 0x832b9768
	ctx.lr = 0x832A8668;
	sub_832B9768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a86f8
	if (cr6.eq) goto loc_832A86F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x832a86a8
	if (cr6.eq) goto loc_832A86A8;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_832A86A8:
	// stwx r31,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r31.u32);
	// addi r10,r31,540
	ctx.r10.s64 = ctx.r31.s64 + 540;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// sth r11,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r11.u16);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r8,546(r31)
	PPC_STORE_U16(ctx.r31.u32 + 546, ctx.r8.u16);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r7.u32);
	// bl 0x83293ec8
	ctx.lr = 0x832A86D8;
	sub_83293EC8(ctx, base);
	// lhz r6,544(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 544);
	// ori r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 32768;
	// sth r5,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r5.u16);
	// lwz r3,-32528(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A86EC;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A86F8:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
loc_832A8700:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,-32528(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A870C;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8718"))) PPC_WEAK_FUNC(sub_832A8718);
PPC_FUNC_IMPL(__imp__sub_832A8718) {
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
	// lwz r3,676(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a8748
	if (!cr6.gt) goto loc_832A8748;
	// bl 0x832a59f0
	ctx.lr = 0x832A8740;
	sub_832A59F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
loc_832A8748:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a875c
	if (cr6.eq) goto loc_832A875C;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832a1d18
	ctx.lr = 0x832A875C;
	sub_832A1D18(ctx, base);
loc_832A875C:
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A8768;
	sub_832A5A38(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a877c
	if (cr6.eq) goto loc_832A877C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_832A877C:
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r9,r9,30176
	ctx.r9.s64 = ctx.r9.s64 + 30176;
	// beq cr6,0x832a8794
	if (cr6.eq) goto loc_832A8794;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x832a87b0
	goto loc_832A87B0;
loc_832A8794:
	// lhz r10,546(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 546);
	// lwz r8,540(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r11.u32);
loc_832A87B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2048(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2048);
	// bl 0x832b9878
	ctx.lr = 0x832A87BC;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A87C4;
	sub_832A5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_832A87DC"))) PPC_WEAK_FUNC(sub_832A87DC);
PPC_FUNC_IMPL(__imp__sub_832A87DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A87E0"))) PPC_WEAK_FUNC(sub_832A87E0);
PPC_FUNC_IMPL(__imp__sub_832A87E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832A87E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r26,108(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x832a1cb0
	ctx.lr = 0x832A881C;
	sub_832A1CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a8858
	if (cr6.eq) goto loc_832A8858;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x832A8834;
	sub_83294018(ctx, base);
	// addic. r28,r29,8
	xer.ca = ctx.r29.u32 > 4294967287;
	ctx.r28.s64 = ctx.r29.s64 + 8;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// beq 0x832a8858
	if (cr0.eq) goto loc_832A8858;
	// bl 0x832a5950
	ctx.lr = 0x832A8844;
	sub_832A5950(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r3.u32);
	// bgt cr6,0x832a8868
	if (cr6.gt) goto loc_832A8868;
	// addi r3,r28,-8
	ctx.r3.s64 = ctx.r28.s64 + -8;
	// bl 0x832a1d18
	ctx.lr = 0x832A8858;
	sub_832A1D18(ctx, base);
loc_832A8858:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832A8868:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r25,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r25.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83296be0
	ctx.lr = 0x832A8884;
	sub_83296BE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,548
	ctx.r4.s64 = ctx.r31.s64 + 548;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A88A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a88c0
	if (cr6.lt) goto loc_832A88C0;
	// lhz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 544);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r10,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r10.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832A88C0:
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x832a59f0
	ctx.lr = 0x832A88C8;
	sub_832A59F0(ctx, base);
	// addi r3,r28,-8
	ctx.r3.s64 = ctx.r28.s64 + -8;
	// bl 0x832a1d18
	ctx.lr = 0x832A88D0;
	sub_832A1D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A88E8"))) PPC_WEAK_FUNC(sub_832A88E8);
PPC_FUNC_IMPL(__imp__sub_832A88E8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832ba618
	ctx.lr = 0x832A8918;
	sub_832BA618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8718
	ctx.lr = 0x832A8920;
	sub_832A8718(ctx, base);
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

__attribute__((alias("__imp__sub_832A8938"))) PPC_WEAK_FUNC(sub_832A8938);
PPC_FUNC_IMPL(__imp__sub_832A8938) {
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
	// bl 0x832a8718
	ctx.lr = 0x832A8948;
	sub_832A8718(ctx, base);
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

__attribute__((alias("__imp__sub_832A895C"))) PPC_WEAK_FUNC(sub_832A895C);
PPC_FUNC_IMPL(__imp__sub_832A895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8960"))) PPC_WEAK_FUNC(sub_832A8960);
PPC_FUNC_IMPL(__imp__sub_832A8960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A8968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,684
	ctx.r4.s64 = 684;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832b9548
	ctx.lr = 0x832A8988;
	sub_832B9548(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,30176
	ctx.r31.s64 = ctx.r11.s64 + 30176;
	// stw r3,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r3.u32);
	// bgt cr6,0x832a89b0
	if (cr6.gt) goto loc_832A89B0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-27580
	ctx.r4.s64 = ctx.r11.s64 + -27580;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832A89B0;
	sub_832982E8(ctx, base);
loc_832A89B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x832A89C0;
	sub_83294018(ctx, base);
	// mulli r11,r29,696
	ctx.r11.s64 = ctx.r29.s64 * 696;
	// stw r28,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r28.u32);
	// addi r11,r11,51
	ctx.r11.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A89DC"))) PPC_WEAK_FUNC(sub_832A89DC);
PPC_FUNC_IMPL(__imp__sub_832A89DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A89E0"))) PPC_WEAK_FUNC(sub_832A89E0);
PPC_FUNC_IMPL(__imp__sub_832A89E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,32224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32224);
	// b 0x832b96b8
	sub_832B96B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A89EC"))) PPC_WEAK_FUNC(sub_832A89EC);
PPC_FUNC_IMPL(__imp__sub_832A89EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A89F0"))) PPC_WEAK_FUNC(sub_832A89F0);
PPC_FUNC_IMPL(__imp__sub_832A89F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A89F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x832ba580
	ctx.lr = 0x832A8A18;
	sub_832BA580(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a8a38
	if (!cr6.eq) goto loc_832A8A38;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,19
	ctx.r31.u64 = ctx.r31.u64 | 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A8A38:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x832a1350
	ctx.lr = 0x832A8A48;
	sub_832A1350(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a8a5c
	if (!cr6.lt) goto loc_832A8A5C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832a8aa8
	goto loc_832A8AA8;
loc_832A8A5C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8618
	ctx.lr = 0x832A8A68;
	sub_832A8618(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x832a8a98
	if (cr6.lt) goto loc_832A8A98;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832a87e0
	ctx.lr = 0x832A8A8C;
	sub_832A87E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a8acc
	if (!cr6.lt) goto loc_832A8ACC;
loc_832A8A98:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a8aa8
	if (cr6.eq) goto loc_832A8AA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a8718
	ctx.lr = 0x832A8AA8;
	sub_832A8718(ctx, base);
loc_832A8AA8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832a8ab8
	if (!cr6.gt) goto loc_832A8AB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832A8AB8;
	sub_832A13D8(ctx, base);
loc_832A8AB8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832ba618
	ctx.lr = 0x832A8AC0;
	sub_832BA618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A8ACC:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-30488
	ctx.r4.s64 = ctx.r11.s64 + -30488;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a0cc0
	ctx.lr = 0x832A8AE0;
	sub_832A0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8AEC"))) PPC_WEAK_FUNC(sub_832A8AEC);
PPC_FUNC_IMPL(__imp__sub_832A8AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8AF0"))) PPC_WEAK_FUNC(sub_832A8AF0);
PPC_FUNC_IMPL(__imp__sub_832A8AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A8AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x832a1350
	ctx.lr = 0x832A8B1C;
	sub_832A1350(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a8b30
	if (!cr6.lt) goto loc_832A8B30;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x832a8bdc
	goto loc_832A8BDC;
loc_832A8B30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8618
	ctx.lr = 0x832A8B3C;
	sub_832A8618(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x832a8bcc
	if (cr6.lt) goto loc_832A8BCC;
	// stw r27,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r27.u32);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// addi r3,r29,264
	ctx.r3.s64 = ctx.r29.s64 + 264;
	// lhz r28,262(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 262);
	// lhz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 260);
	// sth r10,276(r31)
	PPC_STORE_U16(ctx.r31.u32 + 276, ctx.r10.u16);
	// sth r28,278(r31)
	PPC_STORE_U16(ctx.r31.u32 + 278, ctx.r28.u16);
	// lhz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 260);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x83293ec8
	ctx.lr = 0x832A8B80;
	sub_83293EC8(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r9,r29,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832A8B90:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832a8b90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A8B90;
	// lhz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 544);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// sth r10,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r10.u16);
	// addi r4,r11,-30408
	ctx.r4.s64 = ctx.r11.s64 + -30408;
	// bl 0x832a0cc0
	ctx.lr = 0x832A8BC0;
	sub_832A0CC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A8BCC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a8bdc
	if (cr6.eq) goto loc_832A8BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8718
	ctx.lr = 0x832A8BDC;
	sub_832A8718(ctx, base);
loc_832A8BDC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x832a8bec
	if (!cr6.gt) goto loc_832A8BEC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832A8BEC;
	sub_832A13D8(ctx, base);
loc_832A8BEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8BF8"))) PPC_WEAK_FUNC(sub_832A8BF8);
PPC_FUNC_IMPL(__imp__sub_832A8BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r11,-22544
	ctx.r6.s64 = ctx.r11.s64 + -22544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832a87e0
	sub_832A87E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8C10"))) PPC_WEAK_FUNC(sub_832A8C10);
PPC_FUNC_IMPL(__imp__sub_832A8C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A8C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A8C2C;
	sub_832A5A38(ctx, base);
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832a8c5c
	if (!cr6.eq) goto loc_832A8C5C;
	// lhz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 544);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 544, ctx.r10.u16);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A8C50;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A8C5C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ble cr6,0x832a8c7c
	if (!cr6.gt) goto loc_832A8C7C;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
	// bl 0x832a5ae8
	ctx.lr = 0x832A8C70;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832A8C7C:
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// ori r30,r30,19
	ctx.r30.u64 = ctx.r30.u64 | 19;
	// bl 0x832a5ae8
	ctx.lr = 0x832A8C88;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8C94"))) PPC_WEAK_FUNC(sub_832A8C94);
PPC_FUNC_IMPL(__imp__sub_832A8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8C98"))) PPC_WEAK_FUNC(sub_832A8C98);
PPC_FUNC_IMPL(__imp__sub_832A8C98) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8CC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a8cd4
	if (cr6.eq) goto loc_832A8CD4;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832a1d18
	ctx.lr = 0x832A8CD4;
	sub_832A1D18(ctx, base);
loc_832A8CD4:
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

__attribute__((alias("__imp__sub_832A8CE8"))) PPC_WEAK_FUNC(sub_832A8CE8);
PPC_FUNC_IMPL(__imp__sub_832A8CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A8CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A8D04;
	sub_832A5A38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x832a8398
	ctx.lr = 0x832A8D10;
	sub_832A8398(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a8d4c
	if (cr6.eq) goto loc_832A8D4C;
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// lwz r29,536(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832a8d3c
	if (!cr6.eq) goto loc_832A8D3C;
	// lhz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 544);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,544(r3)
	PPC_STORE_U16(ctx.r3.u32 + 544, ctx.r10.u16);
	// b 0x832a8d54
	goto loc_832A8D54;
loc_832A8D3C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ble cr6,0x832a8d50
	if (!cr6.gt) goto loc_832A8D50;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// b 0x832a8d54
	goto loc_832A8D54;
loc_832A8D4C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
loc_832A8D50:
	// ori r31,r31,19
	ctx.r31.u64 = ctx.r31.u64 | 19;
loc_832A8D54:
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A8D5C;
	sub_832A5AE8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x832a8d6c
	if (!cr6.lt) goto loc_832A8D6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832A8D6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8D74"))) PPC_WEAK_FUNC(sub_832A8D74);
PPC_FUNC_IMPL(__imp__sub_832A8D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8D78"))) PPC_WEAK_FUNC(sub_832A8D78);
PPC_FUNC_IMPL(__imp__sub_832A8D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A8D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A8D98;
	sub_832A5A38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8470
	ctx.lr = 0x832A8DA4;
	sub_832A8470(ctx, base);
	// lwz r11,-32528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a5ae8
	ctx.lr = 0x832A8DB4;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8DC0"))) PPC_WEAK_FUNC(sub_832A8DC0);
PPC_FUNC_IMPL(__imp__sub_832A8DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A8DC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x832a5a38
	ctx.lr = 0x832A8DF0;
	sub_832A5A38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8470
	ctx.lr = 0x832A8DFC;
	sub_832A8470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a8e2c
	if (cr6.eq) goto loc_832A8E2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a8470
	ctx.lr = 0x832A8E14;
	sub_832A8470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a8e2c
	if (!cr6.eq) goto loc_832A8E2C;
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
loc_832A8E2C:
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A8E34;
	sub_832A5AE8(ctx, base);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8E48"))) PPC_WEAK_FUNC(sub_832A8E48);
PPC_FUNC_IMPL(__imp__sub_832A8E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A8E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A8E64;
	sub_832A5A38(ctx, base);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A8E78;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8E84"))) PPC_WEAK_FUNC(sub_832A8E84);
PPC_FUNC_IMPL(__imp__sub_832A8E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8E88"))) PPC_WEAK_FUNC(sub_832A8E88);
PPC_FUNC_IMPL(__imp__sub_832A8E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A8E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832A8EA4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a8ea4
	if (!cr0.eq) goto loc_832A8EA4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a8f0c
	if (cr6.eq) goto loc_832A8F0C;
loc_832A8ECC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832a8ee4
	if (!cr6.eq) goto loc_832A8EE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832A8EE0;
	sub_832B2E08(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832A8EE4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a8ee4
	if (!cr0.eq) goto loc_832A8EE4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a8ecc
	if (!cr6.eq) goto loc_832A8ECC;
loc_832A8F0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8F14"))) PPC_WEAK_FUNC(sub_832A8F14);
PPC_FUNC_IMPL(__imp__sub_832A8F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A8F18"))) PPC_WEAK_FUNC(sub_832A8F18);
PPC_FUNC_IMPL(__imp__sub_832A8F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A8F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8F50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpd cr6,r3,r27
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r27.s64, xer);
	// beq cr6,0x832a8f7c
	if (cr6.eq) goto loc_832A8F7C;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bgt cr6,0x832a8f6c
	if (cr6.gt) goto loc_832A8F6C;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A8F6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A8F7C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A8FA0"))) PPC_WEAK_FUNC(sub_832A8FA0);
PPC_FUNC_IMPL(__imp__sub_832A8FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A8FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A8FD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpd cr6,r3,r27
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r27.s64, xer);
	// beq cr6,0x832a9004
	if (cr6.eq) goto loc_832A9004;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bgt cr6,0x832a8ff4
	if (cr6.gt) goto loc_832A8FF4;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A8FF4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A9004:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A9020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9028"))) PPC_WEAK_FUNC(sub_832A9028);
PPC_FUNC_IMPL(__imp__sub_832A9028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A9030;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r29,r5,8192
	xer.ca = ctx.r5.u32 <= 8192;
	ctx.r29.s64 = 8192 - ctx.r5.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, xer);
	// ble cr6,0x832a9054
	if (!cr6.gt) goto loc_832A9054;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
loc_832A9054:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpd cr6,r30,r11
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, xer);
	// bne cr6,0x832a9068
	if (!cr6.eq) goto loc_832A9068;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x832a908c
	goto loc_832A908C;
loc_832A9068:
	// li r6,8192
	ctx.r6.s64 = 8192;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8f18
	ctx.lr = 0x832A907C;
	sub_832A8F18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a90ac
	if (cr6.lt) goto loc_832A90AC;
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_832A908C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a90ac
	if (cr6.lt) goto loc_832A90AC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832A90A8;
	sub_83293EC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832A90AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A90B4"))) PPC_WEAK_FUNC(sub_832A90B4);
PPC_FUNC_IMPL(__imp__sub_832A90B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A90B8"))) PPC_WEAK_FUNC(sub_832A90B8);
PPC_FUNC_IMPL(__imp__sub_832A90B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832A90C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r27,r5,8192
	xer.ca = ctx.r5.u32 <= 8192;
	ctx.r27.s64 = 8192 - ctx.r5.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpw cr6,r27,r7
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, xer);
	// ble cr6,0x832a90e4
	if (!cr6.gt) goto loc_832A90E4;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_832A90E4:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmpd cr6,r26,r11
	cr6.compare<int64_t>(ctx.r26.s64, ctx.r11.s64, xer);
	// bne cr6,0x832a90f8
	if (!cr6.eq) goto loc_832A90F8;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x832a9120
	goto loc_832A9120;
loc_832A90F8:
	// li r6,8192
	ctx.r6.s64 = 8192;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a8f18
	ctx.lr = 0x832A910C;
	sub_832A8F18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// blt cr6,0x832a9120
	if (cr6.lt) goto loc_832A9120;
	// std r26,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r26.u64);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_832A9120:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x832a9134
	if (!cr6.lt) goto loc_832A9134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832A9134:
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bge cr6,0x832a9150
	if (!cr6.lt) goto loc_832A9150;
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832A9150;
	sub_83294018(ctx, base);
loc_832A9150:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832A9160;
	sub_83293EC8(ctx, base);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// ble cr6,0x832a9170
	if (!cr6.gt) goto loc_832A9170;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_832A9170:
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a8fa0
	ctx.lr = 0x832A9184;
	sub_832A8FA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9190
	if (cr6.lt) goto loc_832A9190;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_832A9190:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9198"))) PPC_WEAK_FUNC(sub_832A9198);
PPC_FUNC_IMPL(__imp__sub_832A9198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A91A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicr r30,r4,0,50
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u64, 0) & 0xFFFFFFFFFFFFE000;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rldicr r28,r9,0,50
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFE000;
	// bl 0x832a9028
	ctx.lr = 0x832A91D8;
	sub_832A9028(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a91f0
	if (!cr6.lt) goto loc_832A91F0;
loc_832A91E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A91F0:
	// cmpd cr6,r30,r28
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r28.s64, xer);
	// beq cr6,0x832a91e4
	if (cr6.eq) goto loc_832A91E4;
	// addi r4,r30,8192
	ctx.r4.s64 = ctx.r30.s64 + 8192;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// add r30,r31,r27
	ctx.r30.u64 = ctx.r31.u64 + ctx.r27.u64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpd cr6,r4,r28
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r28.s64, xer);
	// beq cr6,0x832a9238
	if (cr6.eq) goto loc_832A9238;
	// subf r6,r4,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r4.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a8f18
	ctx.lr = 0x832A9220;
	sub_832A8F18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a925c
	if (cr6.lt) goto loc_832A925C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_832A9238:
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a9028
	ctx.lr = 0x832A9250;
	sub_832A9028(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a925c
	if (cr6.lt) goto loc_832A925C;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_832A925C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9264"))) PPC_WEAK_FUNC(sub_832A9264);
PPC_FUNC_IMPL(__imp__sub_832A9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A9268"))) PPC_WEAK_FUNC(sub_832A9268);
PPC_FUNC_IMPL(__imp__sub_832A9268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A9270;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rldicr r28,r11,0,50
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFE000;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r11,r28,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r28.s64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x832a92c8
	if (!cr6.lt) goto loc_832A92C8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// bl 0x832a8fa0
	ctx.lr = 0x832A92AC;
	sub_832A8FA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a92ec
	if (cr6.lt) goto loc_832A92EC;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832A92C8:
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a90b8
	ctx.lr = 0x832A92E0;
	sub_832A90B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a92ec
	if (cr6.lt) goto loc_832A92EC;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_832A92EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

