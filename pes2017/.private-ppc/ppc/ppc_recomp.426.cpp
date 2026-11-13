#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8373F318"))) PPC_WEAK_FUNC(sub_8373F318);
PPC_FUNC_IMPL(__imp__sub_8373F318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F32C"))) PPC_WEAK_FUNC(sub_8373F32C);
PPC_FUNC_IMPL(__imp__sub_8373F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F330"))) PPC_WEAK_FUNC(sub_8373F330);
PPC_FUNC_IMPL(__imp__sub_8373F330) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,23,8,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F34C"))) PPC_WEAK_FUNC(sub_8373F34C);
PPC_FUNC_IMPL(__imp__sub_8373F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F350"))) PPC_WEAK_FUNC(sub_8373F350);
PPC_FUNC_IMPL(__imp__sub_8373F350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F364"))) PPC_WEAK_FUNC(sub_8373F364);
PPC_FUNC_IMPL(__imp__sub_8373F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F368"))) PPC_WEAK_FUNC(sub_8373F368);
PPC_FUNC_IMPL(__imp__sub_8373F368) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F384"))) PPC_WEAK_FUNC(sub_8373F384);
PPC_FUNC_IMPL(__imp__sub_8373F384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F388"))) PPC_WEAK_FUNC(sub_8373F388);
PPC_FUNC_IMPL(__imp__sub_8373F388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F39C"))) PPC_WEAK_FUNC(sub_8373F39C);
PPC_FUNC_IMPL(__imp__sub_8373F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F3A0"))) PPC_WEAK_FUNC(sub_8373F3A0);
PPC_FUNC_IMPL(__imp__sub_8373F3A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F3BC"))) PPC_WEAK_FUNC(sub_8373F3BC);
PPC_FUNC_IMPL(__imp__sub_8373F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F3C0"))) PPC_WEAK_FUNC(sub_8373F3C0);
PPC_FUNC_IMPL(__imp__sub_8373F3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F3D4"))) PPC_WEAK_FUNC(sub_8373F3D4);
PPC_FUNC_IMPL(__imp__sub_8373F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F3D8"))) PPC_WEAK_FUNC(sub_8373F3D8);
PPC_FUNC_IMPL(__imp__sub_8373F3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F3F4"))) PPC_WEAK_FUNC(sub_8373F3F4);
PPC_FUNC_IMPL(__imp__sub_8373F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F3F8"))) PPC_WEAK_FUNC(sub_8373F3F8);
PPC_FUNC_IMPL(__imp__sub_8373F3F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F40C"))) PPC_WEAK_FUNC(sub_8373F40C);
PPC_FUNC_IMPL(__imp__sub_8373F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F410"))) PPC_WEAK_FUNC(sub_8373F410);
PPC_FUNC_IMPL(__imp__sub_8373F410) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// li r3,1
	ctx.r3.s64 = 1;
	// rotlwi r8,r10,20
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 20);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r7,r9,0,12,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF00FFFFF;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F434"))) PPC_WEAK_FUNC(sub_8373F434);
PPC_FUNC_IMPL(__imp__sub_8373F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F438"))) PPC_WEAK_FUNC(sub_8373F438);
PPC_FUNC_IMPL(__imp__sub_8373F438) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F44C"))) PPC_WEAK_FUNC(sub_8373F44C);
PPC_FUNC_IMPL(__imp__sub_8373F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F450"))) PPC_WEAK_FUNC(sub_8373F450);
PPC_FUNC_IMPL(__imp__sub_8373F450) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F46C"))) PPC_WEAK_FUNC(sub_8373F46C);
PPC_FUNC_IMPL(__imp__sub_8373F46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F470"))) PPC_WEAK_FUNC(sub_8373F470);
PPC_FUNC_IMPL(__imp__sub_8373F470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,19,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F484"))) PPC_WEAK_FUNC(sub_8373F484);
PPC_FUNC_IMPL(__imp__sub_8373F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F488"))) PPC_WEAK_FUNC(sub_8373F488);
PPC_FUNC_IMPL(__imp__sub_8373F488) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F4A4"))) PPC_WEAK_FUNC(sub_8373F4A4);
PPC_FUNC_IMPL(__imp__sub_8373F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F4A8"))) PPC_WEAK_FUNC(sub_8373F4A8);
PPC_FUNC_IMPL(__imp__sub_8373F4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F4BC"))) PPC_WEAK_FUNC(sub_8373F4BC);
PPC_FUNC_IMPL(__imp__sub_8373F4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F4C0"))) PPC_WEAK_FUNC(sub_8373F4C0);
PPC_FUNC_IMPL(__imp__sub_8373F4C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F4DC"))) PPC_WEAK_FUNC(sub_8373F4DC);
PPC_FUNC_IMPL(__imp__sub_8373F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F4E0"))) PPC_WEAK_FUNC(sub_8373F4E0);
PPC_FUNC_IMPL(__imp__sub_8373F4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F4F4"))) PPC_WEAK_FUNC(sub_8373F4F4);
PPC_FUNC_IMPL(__imp__sub_8373F4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F4F8"))) PPC_WEAK_FUNC(sub_8373F4F8);
PPC_FUNC_IMPL(__imp__sub_8373F4F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,7,22,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x380) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC7F);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F514"))) PPC_WEAK_FUNC(sub_8373F514);
PPC_FUNC_IMPL(__imp__sub_8373F514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F518"))) PPC_WEAK_FUNC(sub_8373F518);
PPC_FUNC_IMPL(__imp__sub_8373F518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F52C"))) PPC_WEAK_FUNC(sub_8373F52C);
PPC_FUNC_IMPL(__imp__sub_8373F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F530"))) PPC_WEAK_FUNC(sub_8373F530);
PPC_FUNC_IMPL(__imp__sub_8373F530) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F54C"))) PPC_WEAK_FUNC(sub_8373F54C);
PPC_FUNC_IMPL(__imp__sub_8373F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F550"))) PPC_WEAK_FUNC(sub_8373F550);
PPC_FUNC_IMPL(__imp__sub_8373F550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F564"))) PPC_WEAK_FUNC(sub_8373F564);
PPC_FUNC_IMPL(__imp__sub_8373F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F568"))) PPC_WEAK_FUNC(sub_8373F568);
PPC_FUNC_IMPL(__imp__sub_8373F568) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F584"))) PPC_WEAK_FUNC(sub_8373F584);
PPC_FUNC_IMPL(__imp__sub_8373F584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F588"))) PPC_WEAK_FUNC(sub_8373F588);
PPC_FUNC_IMPL(__imp__sub_8373F588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F59C"))) PPC_WEAK_FUNC(sub_8373F59C);
PPC_FUNC_IMPL(__imp__sub_8373F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F5A0"))) PPC_WEAK_FUNC(sub_8373F5A0);
PPC_FUNC_IMPL(__imp__sub_8373F5A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,20,0,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xFFF00000) | (ctx.r9.u64 & 0xFFFFFFFF000FFFFF);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F5BC"))) PPC_WEAK_FUNC(sub_8373F5BC);
PPC_FUNC_IMPL(__imp__sub_8373F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F5C0"))) PPC_WEAK_FUNC(sub_8373F5C0);
PPC_FUNC_IMPL(__imp__sub_8373F5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F5D4"))) PPC_WEAK_FUNC(sub_8373F5D4);
PPC_FUNC_IMPL(__imp__sub_8373F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F5D8"))) PPC_WEAK_FUNC(sub_8373F5D8);
PPC_FUNC_IMPL(__imp__sub_8373F5D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r9,r10,19,12,12
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x80000) | (ctx.r9.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F5F4"))) PPC_WEAK_FUNC(sub_8373F5F4);
PPC_FUNC_IMPL(__imp__sub_8373F5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F5F8"))) PPC_WEAK_FUNC(sub_8373F5F8);
PPC_FUNC_IMPL(__imp__sub_8373F5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8373f634
	if (cr6.lt) goto loc_8373F634;
	// cmpwi cr6,r5,127
	cr6.compare<int32_t>(ctx.r5.s32, 127, xer);
	// bgt cr6,0x8373f634
	if (cr6.gt) goto loc_8373F634;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,11320
	ctx.r8.s64 = ctx.r10.s64 + 11320;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8373F618:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x8373f63c
	if (cr6.eq) goto loc_8373F63C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x8373f618
	if (cr6.lt) goto loc_8373F618;
loc_8373F634:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8373F63C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8373F654:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8373f654
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8373F654;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F668"))) PPC_WEAK_FUNC(sub_8373F668);
PPC_FUNC_IMPL(__imp__sub_8373F668) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,30583
	ctx.r10.s64 = 2004287488;
	// lis r11,30583
	ctx.r11.s64 = 2004287488;
	// lis r9,1911
	ctx.r9.s64 = 125239296;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lis r7,4408
	ctx.r7.s64 = 288882688;
	// lis r6,17411
	ctx.r6.s64 = 1141047296;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r10,30464
	ctx.r4.u64 = ctx.r10.u64 | 30464;
	// ori r11,r11,30583
	ctx.r11.u64 = ctx.r11.u64 | 30583;
	// li r10,6007
	ctx.r10.s64 = 6007;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r31,30496
	ctx.r31.s64 = 1998585856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ori r9,r9,119
	ctx.r9.u64 = ctx.r9.u64 | 119;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// ori r8,r8,57991
	ctx.r8.u64 = ctx.r8.u64 | 57991;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ori r7,r7,11036
	ctx.r7.u64 = ctx.r7.u64 | 11036;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// ori r6,r6,35359
	ctx.r6.u64 = ctx.r6.u64 | 35359;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// ori r5,r5,9752
	ctx.r5.u64 = ctx.r5.u64 | 9752;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F6EC"))) PPC_WEAK_FUNC(sub_8373F6EC);
PPC_FUNC_IMPL(__imp__sub_8373F6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F6F0"))) PPC_WEAK_FUNC(sub_8373F6F0);
PPC_FUNC_IMPL(__imp__sub_8373F6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8373f700
	if (!cr6.eq) goto loc_8373F700;
loc_8373F6F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8373F700:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-616
	ctx.r11.s64 = ctx.r11.s64 + -616;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8373f798
	if (cr6.eq) goto loc_8373F798;
	// rlwinm r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373f74c
	if (cr6.eq) goto loc_8373F74C;
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373f74c
	if (cr6.eq) goto loc_8373F74C;
	// clrlwi r11,r5,28
	ctx.r11.u64 = ctx.r5.u32 & 0xF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373f6f8
	if (cr6.eq) goto loc_8373F6F8;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8373f6f8
	if (cr6.eq) goto loc_8373F6F8;
loc_8373F74C:
	// rlwinm r11,r5,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373f764
	if (cr6.eq) goto loc_8373F764;
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8373f6f8
	if (!cr6.eq) goto loc_8373F6F8;
loc_8373F764:
	// rlwinm r11,r5,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373f77c
	if (cr6.eq) goto loc_8373F77C;
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8373f6f8
	if (!cr6.eq) goto loc_8373F6F8;
loc_8373F77C:
	// rlwinm r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373f798
	if (cr6.eq) goto loc_8373F798;
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8373F798:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F7A0"))) PPC_WEAK_FUNC(sub_8373F7A0);
PPC_FUNC_IMPL(__imp__sub_8373F7A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x831d0080
	ctx.lr = 0x8373F7C4;
	sub_831D0080(ctx, base);
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

__attribute__((alias("__imp__sub_8373F7D8"))) PPC_WEAK_FUNC(sub_8373F7D8);
PPC_FUNC_IMPL(__imp__sub_8373F7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8373F7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,30583
	ctx.r10.s64 = 2004287488;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r4,r10,30464
	ctx.r4.u64 = ctx.r10.u64 | 30464;
	// li r10,6007
	ctx.r10.s64 = 6007;
	// lis r6,17411
	ctx.r6.s64 = 1141047296;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r11,30583
	ctx.r11.s64 = 2004287488;
	// lis r9,1911
	ctx.r9.s64 = 125239296;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lis r7,4408
	ctx.r7.s64 = 288882688;
	// ori r11,r11,30583
	ctx.r11.u64 = ctx.r11.u64 | 30583;
	// ori r10,r6,35359
	ctx.r10.u64 = ctx.r6.u64 | 35359;
	// ori r29,r5,9752
	ctx.r29.u64 = ctx.r5.u64 | 9752;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r9,r9,119
	ctx.r9.u64 = ctx.r9.u64 | 119;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r8,r8,57991
	ctx.r8.u64 = ctx.r8.u64 | 57991;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r7,r7,11036
	ctx.r7.u64 = ctx.r7.u64 | 11036;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r30,30496
	ctx.r30.s64 = 1998585856;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// bl 0x831d0080
	ctx.lr = 0x8373F874;
	sub_831D0080(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b428e8
	ctx.lr = 0x8373F880;
	sub_83B428E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373F888"))) PPC_WEAK_FUNC(sub_8373F888);
PPC_FUNC_IMPL(__imp__sub_8373F888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x8373f8e4
	if (cr6.gt) goto loc_8373F8E4;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1880
	ctx.r12.s64 = ctx.r12.s64 + -1880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8373F8D4;
	case 1:
		goto loc_8373F8D4;
	case 2:
		goto loc_8373F8D4;
	case 3:
		goto loc_8373F8D4;
	case 4:
		goto loc_8373F8DC;
	case 5:
		goto loc_8373F8DC;
	case 6:
		goto loc_8373F8D4;
	case 7:
		goto loc_8373F8E4;
	case 8:
		goto loc_8373F8E4;
	case 9:
		goto loc_8373F8D4;
	case 10:
		goto loc_8373F8D4;
	default:
		return;
	}
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
	// lwz r27,-1828(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1828);
	// lwz r27,-1828(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1828);
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
	// lwz r27,-1820(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1820);
	// lwz r27,-1820(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1820);
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
	// lwz r27,-1836(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1836);
loc_8373F8D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8373F8DC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8373F8E4:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F8EC"))) PPC_WEAK_FUNC(sub_8373F8EC);
PPC_FUNC_IMPL(__imp__sub_8373F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F8F0"))) PPC_WEAK_FUNC(sub_8373F8F0);
PPC_FUNC_IMPL(__imp__sub_8373F8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8373F8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x8373F920;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,19
	cr6.compare<int32_t>(ctx.r31.s32, 19, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8373f93c
	if (cr6.lt) goto loc_8373F93C;
loc_8373F930:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8373F93C:
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bgt cr6,0x8373f9d4
	if (cr6.gt) goto loc_8373F9D4;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1700
	ctx.r12.s64 = ctx.r12.s64 + -1700;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_8373F988;
	case 1:
		goto loc_8373F988;
	case 2:
		goto loc_8373F988;
	case 3:
		goto loc_8373F988;
	case 4:
		goto loc_8373F994;
	case 5:
		goto loc_8373F994;
	case 6:
		goto loc_8373F9BC;
	case 7:
		goto loc_8373F9DC;
	case 8:
		goto loc_8373F9DC;
	case 9:
		goto loc_8373F9C8;
	case 10:
		goto loc_8373F9C8;
	default:
		return;
	}
	// lwz r27,-1656(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1656);
	// lwz r27,-1656(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1656);
	// lwz r27,-1656(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1656);
	// lwz r27,-1656(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1656);
	// lwz r27,-1644(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1644);
	// lwz r27,-1644(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1644);
	// lwz r27,-1604(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1604);
	// lwz r27,-1572(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1572);
	// lwz r27,-1572(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1572);
	// lwz r27,-1592(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1592);
	// lwz r27,-1592(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -1592);
loc_8373F988:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8373F994:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b42c50
	ctx.lr = 0x8373F9A4;
	sub_83B42C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8373F9BC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8373F9C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8373F9D4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x8373f930
	if (cr6.lt) goto loc_8373F930;
loc_8373F9DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b42c50
	ctx.lr = 0x8373F9EC;
	sub_83B42C50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FA00"))) PPC_WEAK_FUNC(sub_8373FA00);
PPC_FUNC_IMPL(__imp__sub_8373FA00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8373FA24;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373fa74
	if (cr6.eq) goto loc_8373FA74;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8373fa74
	if (cr6.eq) goto loc_8373FA74;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8373fa74
	if (cr6.lt) goto loc_8373FA74;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8373fa74
	if (cr6.gt) goto loc_8373FA74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8373FA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8373fa78
	goto loc_8373FA78;
loc_8373FA74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8373FA78:
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

__attribute__((alias("__imp__sub_8373FA90"))) PPC_WEAK_FUNC(sub_8373FA90);
PPC_FUNC_IMPL(__imp__sub_8373FA90) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a76558
	ctx.lr = 0x8373FAA8;
	sub_82A76558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8373fac8
	if (!cr6.eq) goto loc_8373FAC8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8373FAC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373FAE4"))) PPC_WEAK_FUNC(sub_8373FAE4);
PPC_FUNC_IMPL(__imp__sub_8373FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373FAE8"))) PPC_WEAK_FUNC(sub_8373FAE8);
PPC_FUNC_IMPL(__imp__sub_8373FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8373FAF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8373FB08;
	sub_831CDCF0(ctx, base);
	// li r31,5
	ctx.r31.s64 = 5;
loc_8373FB0C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373f6f0
	ctx.lr = 0x8373FB1C;
	sub_8373F6F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8373fb38
	if (cr6.eq) goto loc_8373FB38;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa00
	ctx.lr = 0x8373FB38;
	sub_8373FA00(ctx, base);
loc_8373FB38:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,127
	cr6.compare<uint32_t>(ctx.r31.u32, 127, xer);
	// blt cr6,0x8373fb0c
	if (cr6.lt) goto loc_8373FB0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FB50"))) PPC_WEAK_FUNC(sub_8373FB50);
PPC_FUNC_IMPL(__imp__sub_8373FB50) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x831d0080
	ctx.lr = 0x8373FB78;
	sub_831D0080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,126
	ctx.r5.s64 = 126;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a10c0
	ctx.lr = 0x8373FB88;
	sub_825A10C0(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x8373FB98;
	sub_825A10C0(ctx, base);
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

__attribute__((alias("__imp__sub_8373FBB0"))) PPC_WEAK_FUNC(sub_8373FBB0);
PPC_FUNC_IMPL(__imp__sub_8373FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8373FBB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x8373fc48
	if (cr6.eq) goto loc_8373FC48;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x8373fc88
	if (cr6.eq) goto loc_8373FC88;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_8373FBE4:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FC00;
	sub_82A76558(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FC10;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8373fc3c
	if (!cr6.eq) goto loc_8373FC3C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// blt cr6,0x8373fbe4
	if (cr6.lt) goto loc_8373FBE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8373FC3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8373FC48:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8373fc88
	if (cr6.eq) goto loc_8373FC88;
	// addi r29,r5,-4
	ctx.r29.s64 = ctx.r5.s64 + -4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8373FC58:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FC70;
	sub_82A76558(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8373FC80;
	sub_825A10C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8373fc58
	if (!cr0.eq) goto loc_8373FC58;
loc_8373FC88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FC94"))) PPC_WEAK_FUNC(sub_8373FC94);
PPC_FUNC_IMPL(__imp__sub_8373FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373FC98"))) PPC_WEAK_FUNC(sub_8373FC98);
PPC_FUNC_IMPL(__imp__sub_8373FC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8373FCA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,408
	ctx.r31.s64 = ctx.r11.s64 + 408;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8373FCBC:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FCD8;
	sub_82A76558(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FCE8;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8373fd14
	if (!cr6.eq) goto loc_8373FD14;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,56
	cr6.compare<uint32_t>(ctx.r29.u32, 56, xer);
	// blt cr6,0x8373fcbc
	if (cr6.lt) goto loc_8373FCBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8373FD14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FD20"))) PPC_WEAK_FUNC(sub_8373FD20);
PPC_FUNC_IMPL(__imp__sub_8373FD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8373FD28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,408
	ctx.r11.s64 = ctx.r11.s64 + 408;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,14
	ctx.r31.s64 = 14;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8373FD48:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FD60;
	sub_82A76558(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8373FD70;
	sub_825A10C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8373fd48
	if (!cr0.eq) goto loc_8373FD48;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FD80"))) PPC_WEAK_FUNC(sub_8373FD80);
PPC_FUNC_IMPL(__imp__sub_8373FD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,480
	ctx.r5.s64 = ctx.r11.s64 + 480;
	// li r6,9
	ctx.r6.s64 = 9;
	// b 0x8373fbb0
	sub_8373FBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FD94"))) PPC_WEAK_FUNC(sub_8373FD94);
PPC_FUNC_IMPL(__imp__sub_8373FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373FD98"))) PPC_WEAK_FUNC(sub_8373FD98);
PPC_FUNC_IMPL(__imp__sub_8373FD98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8373FDA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,480
	ctx.r11.s64 = ctx.r11.s64 + 480;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,9
	ctx.r31.s64 = 9;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8373FDC0:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FDD8;
	sub_82A76558(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8373FDE8;
	sub_825A10C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8373fdc0
	if (!cr0.eq) goto loc_8373FDC0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FDF8"))) PPC_WEAK_FUNC(sub_8373FDF8);
PPC_FUNC_IMPL(__imp__sub_8373FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,464
	ctx.r5.s64 = ctx.r11.s64 + 464;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x8373fbb0
	sub_8373FBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FE0C"))) PPC_WEAK_FUNC(sub_8373FE0C);
PPC_FUNC_IMPL(__imp__sub_8373FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373FE10"))) PPC_WEAK_FUNC(sub_8373FE10);
PPC_FUNC_IMPL(__imp__sub_8373FE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8373FE18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,464
	ctx.r11.s64 = ctx.r11.s64 + 464;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8373FE38:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FE50;
	sub_82A76558(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8373FE60;
	sub_825A10C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8373fe38
	if (!cr0.eq) goto loc_8373FE38;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FE70"))) PPC_WEAK_FUNC(sub_8373FE70);
PPC_FUNC_IMPL(__imp__sub_8373FE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8373FE78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8373FE98:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r30,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FEB0;
	sub_82A76558(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8373FEC0;
	sub_825A10C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8373fe98
	if (!cr0.eq) goto loc_8373FE98;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8373FED0"))) PPC_WEAK_FUNC(sub_8373FED0);
PPC_FUNC_IMPL(__imp__sub_8373FED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8373FED8;
	__savegprlr_29(ctx, base);
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
	// cmpwi cr6,r4,19
	cr6.compare<int32_t>(ctx.r4.s32, 19, xer);
	// bge cr6,0x83740194
	if (!cr6.lt) goto loc_83740194;
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bgt cr6,0x83740164
	if (cr6.gt) goto loc_83740164;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-240
	ctx.r12.s64 = ctx.r12.s64 + -240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_8373FF3C;
	case 1:
		goto loc_8373FF78;
	case 2:
		goto loc_8373FF78;
	case 3:
		goto loc_8373FF78;
	case 4:
		goto loc_8373FFA8;
	case 5:
		goto loc_83740008;
	case 6:
		goto loc_83740068;
	case 7:
		goto loc_83740090;
	case 8:
		goto loc_83740090;
	case 9:
		goto loc_837400AC;
	case 10:
		goto loc_8374010C;
	default:
		return;
	}
	// lwz r27,-196(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -196);
	// lwz r27,-136(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -136);
	// lwz r27,-136(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -136);
	// lwz r27,-136(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -136);
	// lwz r27,-88(r19)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r19.u32 + -88);
	// lwz r27,8(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r27,104(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// lwz r27,144(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 144);
	// lwz r27,144(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 144);
	// lwz r27,172(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 172);
	// lwz r27,268(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 268);
loc_8373FF3C:
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FF4C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8373ff6c
	if (cr6.eq) goto loc_8373FF6C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
loc_8373FF6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8373FF78:
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FF88;
	sub_82A76558(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83740194
	if (cr6.eq) goto loc_83740194;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83740100
	if (cr6.eq) goto loc_83740100;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// b 0x83740190
	goto loc_83740190;
loc_8373FFA8:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FFB8;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x8373ffcc
	if (cr6.eq) goto loc_8373FFCC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
loc_8373FFCC:
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8373FFDC;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8373ff6c
	if (cr6.eq) goto loc_8373FF6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740008:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83740018;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x8374002c
	if (cr6.eq) goto loc_8374002C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
loc_8374002C:
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8374003C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8373ff6c
	if (cr6.eq) goto loc_8373FF6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740068:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83740078;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740090:
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x837400A0;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// b 0x837400f0
	goto loc_837400F0;
loc_837400AC:
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x837400BC;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837400d0
	if (cr6.eq) goto loc_837400D0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
loc_837400D0:
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x837400E0;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83740100
	if (cr6.eq) goto loc_83740100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_837400F0:
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83740194
	if (cr6.eq) goto loc_83740194;
loc_83740100:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8374010C:
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8374011C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83740138;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83740100
	if (cr6.eq) goto loc_83740100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83740194
	if (!cr6.eq) goto loc_83740194;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83740194
	if (cr6.eq) goto loc_83740194;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740164:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x83740194
	if (cr6.lt) goto loc_83740194;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8374017C;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83740194
	if (cr6.eq) goto loc_83740194;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
loc_83740190:
	// beq cr6,0x83740100
	if (cr6.eq) goto loc_83740100;
loc_83740194:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837401A0"))) PPC_WEAK_FUNC(sub_837401A0);
PPC_FUNC_IMPL(__imp__sub_837401A0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// bgt cr6,0x83740250
	if (cr6.gt) goto loc_83740250;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,476
	ctx.r12.s64 = ctx.r12.s64 + 476;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_83740208;
	case 1:
		goto loc_83740208;
	case 2:
		goto loc_83740208;
	case 3:
		goto loc_83740208;
	case 4:
		goto loc_83740210;
	case 5:
		goto loc_83740224;
	case 6:
		goto loc_83740238;
	case 7:
		goto loc_83740240;
	case 8:
		goto loc_83740240;
	case 9:
		goto loc_83740248;
	case 10:
		goto loc_83740248;
	default:
		return;
	}
	// lwz r27,520(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 520);
	// lwz r27,520(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 520);
	// lwz r27,520(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 520);
	// lwz r27,520(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 520);
	// lwz r27,528(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 528);
	// lwz r27,548(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 548);
	// lwz r27,568(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 568);
	// lwz r27,576(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 576);
	// lwz r27,576(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 576);
	// lwz r27,584(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 584);
	// lwz r27,584(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 584);
loc_83740208:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8374026c
	goto loc_8374026C;
loc_83740210:
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a76558
	ctx.lr = 0x8374021C;
	sub_82A76558(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x83740260
	goto loc_83740260;
loc_83740224:
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a76558
	ctx.lr = 0x83740230;
	sub_82A76558(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x83740260
	goto loc_83740260;
loc_83740238:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8374026c
	goto loc_8374026C;
loc_83740240:
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x83740254
	goto loc_83740254;
loc_83740248:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8374026c
	goto loc_8374026C;
loc_83740250:
	// li r5,25
	ctx.r5.s64 = 25;
loc_83740254:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a76558
	ctx.lr = 0x8374025C;
	sub_82A76558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83740260:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8373f8f0
	ctx.lr = 0x8374026C;
	sub_8373F8F0(ctx, base);
loc_8374026C:
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

__attribute__((alias("__imp__sub_83740284"))) PPC_WEAK_FUNC(sub_83740284);
PPC_FUNC_IMPL(__imp__sub_83740284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740288"))) PPC_WEAK_FUNC(sub_83740288);
PPC_FUNC_IMPL(__imp__sub_83740288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83740290;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x837402B8;
	sub_82BEE188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r29,-98
	ctx.r11.s64 = ctx.r29.s64 + -98;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x83740438
	if (cr6.gt) goto loc_83740438;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,740
	ctx.r12.s64 = ctx.r12.s64 + 740;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837403F4;
	case 1:
		goto loc_837403F4;
	case 2:
		goto loc_837403F4;
	case 3:
		goto loc_83740438;
	case 4:
		goto loc_83740438;
	case 5:
		goto loc_8374036C;
	case 6:
		goto loc_83740438;
	case 7:
		goto loc_8374036C;
	case 8:
		goto loc_83740438;
	case 9:
		goto loc_8374036C;
	case 10:
		goto loc_83740438;
	case 11:
		goto loc_83740438;
	case 12:
		goto loc_83740438;
	case 13:
		goto loc_83740438;
	case 14:
		goto loc_83740438;
	case 15:
		goto loc_83740438;
	case 16:
		goto loc_837403B0;
	case 17:
		goto loc_837403B0;
	case 18:
		goto loc_837403B0;
	case 19:
		goto loc_83740438;
	case 20:
		goto loc_83740438;
	case 21:
		goto loc_83740438;
	case 22:
		goto loc_83740438;
	case 23:
		goto loc_83740438;
	case 24:
		goto loc_83740438;
	case 25:
		goto loc_83740438;
	case 26:
		goto loc_83740438;
	case 27:
		goto loc_83740438;
	case 28:
		goto loc_83740438;
	case 29:
		goto loc_83740438;
	case 30:
		goto loc_83740360;
	default:
		return;
	}
	// lwz r27,1012(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1012);
	// lwz r27,1012(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1012);
	// lwz r27,1012(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1012);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,876(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 876);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,876(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 876);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,876(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 876);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,944(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 944);
	// lwz r27,944(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 944);
	// lwz r27,944(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 944);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,1080(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1080);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
loc_83740360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8374036C:
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x83740378;
	sub_8373FA90(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// li r4,105
	ctx.r4.s64 = 105;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x83740388;
	sub_8373FA90(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x83740398;
	sub_8373FA90(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837403B0:
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x837403BC;
	sub_8373FA90(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x837403CC;
	sub_8373FA90(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x837403DC;
	sub_8373FA90(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837403F4:
	// li r4,98
	ctx.r4.s64 = 98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x83740400;
	sub_8373FA90(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x83740410;
	sub_8373FA90(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373fa90
	ctx.lr = 0x83740420;
	sub_8373FA90(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740438:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a76558
	ctx.lr = 0x83740450;
	sub_82A76558(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83740360
	if (cr6.eq) goto loc_83740360;
	// cmpwi cr6,r29,80
	cr6.compare<int32_t>(ctx.r29.s32, 80, xer);
	// bgt cr6,0x8374059c
	if (cr6.gt) goto loc_8374059C;
	// beq cr6,0x83740578
	if (cr6.eq) goto loc_83740578;
	// addi r11,r29,-22
	ctx.r11.s64 = ctx.r29.s64 + -22;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x83740360
	if (cr6.gt) goto loc_83740360;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1164
	ctx.r12.s64 = ctx.r12.s64 + 1164;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837404C0;
	case 1:
		goto loc_8374050C;
	case 2:
		goto loc_83740360;
	case 3:
		goto loc_83740618;
	case 4:
		goto loc_83740360;
	case 5:
		goto loc_83740360;
	case 6:
		goto loc_83740360;
	case 7:
		goto loc_83740360;
	case 8:
		goto loc_83740360;
	case 9:
		goto loc_83740360;
	case 10:
		goto loc_83740360;
	case 11:
		goto loc_83740360;
	case 12:
		goto loc_83740558;
	default:
		return;
	}
	// lwz r27,1216(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1216);
	// lwz r27,1292(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1292);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,1560(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1560);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,864(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 864);
	// lwz r27,1368(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1368);
loc_837404C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bee188
	ctx.lr = 0x837404D8;
	sub_82BEE188(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83b42c50
	ctx.lr = 0x837404F4;
	sub_83B42C50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8374050C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bee188
	ctx.lr = 0x83740524;
	sub_82BEE188(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83b42c50
	ctx.lr = 0x83740540;
	sub_83B42C50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740558:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bee188
	ctx.lr = 0x83740570;
	sub_82BEE188(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x83740634
	goto loc_83740634;
loc_83740578:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x83744be0
	ctx.lr = 0x83740588;
	sub_83744BE0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8374059C:
	// cmpwi cr6,r29,113
	cr6.compare<int32_t>(ctx.r29.s32, 113, xer);
	// beq cr6,0x83740618
	if (cr6.eq) goto loc_83740618;
	// cmpwi cr6,r29,118
	cr6.compare<int32_t>(ctx.r29.s32, 118, xer);
	// beq cr6,0x837405f4
	if (cr6.eq) goto loc_837405F4;
	// cmpwi cr6,r29,120
	cr6.compare<int32_t>(ctx.r29.s32, 120, xer);
	// bne cr6,0x83740360
	if (!cr6.eq) goto loc_83740360;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837405d8
	if (!cr6.eq) goto loc_837405D8;
	// li r5,98
	ctx.r5.s64 = 98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83740288
	ctx.lr = 0x837405D0;
	sub_83740288(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837405D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83746320
	ctx.lr = 0x837405E0;
	sub_83746320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837405F4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83744b48
	ctx.lr = 0x83740604;
	sub_83744B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740618:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bee188
	ctx.lr = 0x83740630;
	sub_82BEE188(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
loc_83740634:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83b42c50
	ctx.lr = 0x8374064C;
	sub_83B42C50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83740660"))) PPC_WEAK_FUNC(sub_83740660);
PPC_FUNC_IMPL(__imp__sub_83740660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83740668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,113
	cr6.compare<int32_t>(ctx.r6.s32, 113, xer);
	// bgt cr6,0x837406d4
	if (cr6.gt) goto loc_837406D4;
	// beq cr6,0x837406a8
	if (cr6.eq) goto loc_837406A8;
	// cmpwi cr6,r6,34
	cr6.compare<int32_t>(ctx.r6.s32, 34, xer);
	// bgt cr6,0x837406c8
	if (cr6.gt) goto loc_837406C8;
	// beq cr6,0x837406a8
	if (cr6.eq) goto loc_837406A8;
	// cmpwi cr6,r6,22
	cr6.compare<int32_t>(ctx.r6.s32, 22, xer);
	// blt cr6,0x837406ec
	if (cr6.lt) goto loc_837406EC;
	// cmpwi cr6,r6,23
	cr6.compare<int32_t>(ctx.r6.s32, 23, xer);
	// ble cr6,0x837406a8
	if (!cr6.gt) goto loc_837406A8;
	// cmpwi cr6,r6,25
	cr6.compare<int32_t>(ctx.r6.s32, 25, xer);
	// bne cr6,0x837406ec
	if (!cr6.eq) goto loc_837406EC;
loc_837406A8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x837406B4;
	sub_825A10C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837406C8:
	// cmpwi cr6,r6,80
	cr6.compare<int32_t>(ctx.r6.s32, 80, xer);
	// beq cr6,0x837406a8
	if (cr6.eq) goto loc_837406A8;
	// b 0x837406ec
	goto loc_837406EC;
loc_837406D4:
	// cmpwi cr6,r6,118
	cr6.compare<int32_t>(ctx.r6.s32, 118, xer);
	// beq cr6,0x837406a8
	if (cr6.eq) goto loc_837406A8;
	// cmpwi cr6,r6,120
	cr6.compare<int32_t>(ctx.r6.s32, 120, xer);
	// beq cr6,0x837406a8
	if (cr6.eq) goto loc_837406A8;
	// cmpwi cr6,r6,128
	cr6.compare<int32_t>(ctx.r6.s32, 128, xer);
	// beq cr6,0x83740824
	if (cr6.eq) goto loc_83740824;
loc_837406EC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83740824
	if (cr6.eq) goto loc_83740824;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r6,-98
	ctx.r11.s64 = ctx.r6.s64 + -98;
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r8,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r29,r7,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x83740824
	if (cr6.gt) goto loc_83740824;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1840
	ctx.r12.s64 = ctx.r12.s64 + 1840;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837407EC;
	case 1:
		goto loc_837407EC;
	case 2:
		goto loc_837407EC;
	case 3:
		goto loc_83740824;
	case 4:
		goto loc_83740824;
	case 5:
		goto loc_8374077C;
	case 6:
		goto loc_83740824;
	case 7:
		goto loc_8374077C;
	case 8:
		goto loc_83740824;
	case 9:
		goto loc_8374077C;
	case 10:
		goto loc_83740824;
	case 11:
		goto loc_83740824;
	case 12:
		goto loc_83740824;
	case 13:
		goto loc_83740824;
	case 14:
		goto loc_83740824;
	case 15:
		goto loc_83740824;
	case 16:
		goto loc_837407B4;
	case 17:
		goto loc_837407B4;
	case 18:
		goto loc_837407B4;
	default:
		return;
	}
	// lwz r27,2028(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2028);
	// lwz r27,2028(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2028);
	// lwz r27,2028(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2028);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,1916(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1916);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,1916(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1916);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,1916(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1916);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,2084(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2084);
	// lwz r27,1972(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1972);
	// lwz r27,1972(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1972);
	// lwz r27,1972(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1972);
loc_8374077C:
	// li r5,103
	ctx.r5.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83740788;
	sub_825A10C0(ctx, base);
	// li r5,105
	ctx.r5.s64 = 105;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83740798;
	sub_825A10C0(ctx, base);
	// li r5,107
	ctx.r5.s64 = 107;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x837407A8;
	sub_825A10C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837407B4:
	// li r5,114
	ctx.r5.s64 = 114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x837407C0;
	sub_825A10C0(ctx, base);
	// li r5,115
	ctx.r5.s64 = 115;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x837407D0;
	sub_825A10C0(ctx, base);
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x837407E0;
	sub_825A10C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837407EC:
	// li r5,98
	ctx.r5.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x837407F8;
	sub_825A10C0(ctx, base);
	// li r5,99
	ctx.r5.s64 = 99;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83740808;
	sub_825A10C0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a10c0
	ctx.lr = 0x83740818;
	sub_825A10C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83740824:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83740830"))) PPC_WEAK_FUNC(sub_83740830);
PPC_FUNC_IMPL(__imp__sub_83740830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-31770
	ctx.r9.s64 = -2082078720;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,15732(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 15732, temp.u32);
	// stw r3,15624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15624, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740858"))) PPC_WEAK_FUNC(sub_83740858);
PPC_FUNC_IMPL(__imp__sub_83740858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r3,15624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740864"))) PPC_WEAK_FUNC(sub_83740864);
PPC_FUNC_IMPL(__imp__sub_83740864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740868"))) PPC_WEAK_FUNC(sub_83740868);
PPC_FUNC_IMPL(__imp__sub_83740868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lfs f1,15732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15732);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740874"))) PPC_WEAK_FUNC(sub_83740874);
PPC_FUNC_IMPL(__imp__sub_83740874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740878"))) PPC_WEAK_FUNC(sub_83740878);
PPC_FUNC_IMPL(__imp__sub_83740878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31770
	ctx.r9.s64 = -2082078720;
	// lis r8,-31770
	ctx.r8.s64 = -2082078720;
	// li r11,48
	ctx.r11.s64 = 48;
	// lfs f0,20052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20052);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,15624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15624, ctx.r11.u32);
	// stfs f0,15732(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 15732, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740898"))) PPC_WEAK_FUNC(sub_83740898);
PPC_FUNC_IMPL(__imp__sub_83740898) {
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
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r11,-22208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837408c4
	if (cr6.eq) goto loc_837408C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83740918
	goto loc_83740918;
loc_837408C4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837408DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83740910
	if (cr6.eq) goto loc_83740910;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r9,r11,14480
	ctx.r9.s64 = ctx.r11.s64 + 14480;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r3,-22208(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22208, ctx.r3.u32);
	// b 0x83740914
	goto loc_83740914;
loc_83740910:
	// stw r31,-22208(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22208, ctx.r31.u32);
loc_83740914:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83740918:
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

__attribute__((alias("__imp__sub_83740930"))) PPC_WEAK_FUNC(sub_83740930);
PPC_FUNC_IMPL(__imp__sub_83740930) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-22208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8374098c
	if (cr6.eq) goto loc_8374098C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83740964;
	sub_82595150(ctx, base);
	// lwz r3,-22208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83740984
	if (cr6.eq) goto loc_83740984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83740984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83740984:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8374098C;
	sub_82595170(ctx, base);
loc_8374098C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-22208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22208, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837409A8"))) PPC_WEAK_FUNC(sub_837409A8);
PPC_FUNC_IMPL(__imp__sub_837409A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// stb r6,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r6.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// ori r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 | 18;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837409DC"))) PPC_WEAK_FUNC(sub_837409DC);
PPC_FUNC_IMPL(__imp__sub_837409DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837409E0"))) PPC_WEAK_FUNC(sub_837409E0);
PPC_FUNC_IMPL(__imp__sub_837409E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83740a08
	if (!cr6.eq) goto loc_83740A08;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r11,11
	ctx.r11.s64 = 11;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
loc_83740A08:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83740a28
	if (!cr6.eq) goto loc_83740A28;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,11
	ctx.r3.s64 = ctx.r11.s64 + 11;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_83740A28:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83740a48
	if (!cr6.eq) goto loc_83740A48;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r11,22
	ctx.r3.s64 = ctx.r11.s64 + 22;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_83740A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740A50"))) PPC_WEAK_FUNC(sub_83740A50);
PPC_FUNC_IMPL(__imp__sub_83740A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83740a60
	if (!cr6.lt) goto loc_83740A60;
loc_83740A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83740A60:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x83740a58
	if (cr6.lt) goto loc_83740A58;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x83740a78
	if (!cr6.lt) goto loc_83740A78;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83740A78:
	// li r11,25
	ctx.r11.s64 = 25;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r7,2
	ctx.r7.s64 = 2;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740A98"))) PPC_WEAK_FUNC(sub_83740A98);
PPC_FUNC_IMPL(__imp__sub_83740A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// blt cr6,0x83740aac
	if (cr6.lt) goto loc_83740AAC;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// addi r3,r3,-22
	ctx.r3.s64 = ctx.r3.s64 + -22;
	// bltlr cr6
	if (cr6.lt) return;
loc_83740AAC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740AB4"))) PPC_WEAK_FUNC(sub_83740AB4);
PPC_FUNC_IMPL(__imp__sub_83740AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740AB8"))) PPC_WEAK_FUNC(sub_83740AB8);
PPC_FUNC_IMPL(__imp__sub_83740AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15944
	ctx.r9.s64 = ctx.r11.s64 + 15944;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740ACC"))) PPC_WEAK_FUNC(sub_83740ACC);
PPC_FUNC_IMPL(__imp__sub_83740ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740AD0"))) PPC_WEAK_FUNC(sub_83740AD0);
PPC_FUNC_IMPL(__imp__sub_83740AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15972
	ctx.r9.s64 = ctx.r11.s64 + 15972;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740AE4"))) PPC_WEAK_FUNC(sub_83740AE4);
PPC_FUNC_IMPL(__imp__sub_83740AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740AE8"))) PPC_WEAK_FUNC(sub_83740AE8);
PPC_FUNC_IMPL(__imp__sub_83740AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,15984
	ctx.r9.s64 = ctx.r11.s64 + 15984;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740AFC"))) PPC_WEAK_FUNC(sub_83740AFC);
PPC_FUNC_IMPL(__imp__sub_83740AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740B00"))) PPC_WEAK_FUNC(sub_83740B00);
PPC_FUNC_IMPL(__imp__sub_83740B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16044
	ctx.r9.s64 = ctx.r11.s64 + 16044;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740B14"))) PPC_WEAK_FUNC(sub_83740B14);
PPC_FUNC_IMPL(__imp__sub_83740B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740B18"))) PPC_WEAK_FUNC(sub_83740B18);
PPC_FUNC_IMPL(__imp__sub_83740B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16052
	ctx.r9.s64 = ctx.r11.s64 + 16052;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740B2C"))) PPC_WEAK_FUNC(sub_83740B2C);
PPC_FUNC_IMPL(__imp__sub_83740B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740B30"))) PPC_WEAK_FUNC(sub_83740B30);
PPC_FUNC_IMPL(__imp__sub_83740B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16072
	ctx.r9.s64 = ctx.r11.s64 + 16072;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740B44"))) PPC_WEAK_FUNC(sub_83740B44);
PPC_FUNC_IMPL(__imp__sub_83740B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740B48"))) PPC_WEAK_FUNC(sub_83740B48);
PPC_FUNC_IMPL(__imp__sub_83740B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16096
	ctx.r9.s64 = ctx.r11.s64 + 16096;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740B5C"))) PPC_WEAK_FUNC(sub_83740B5C);
PPC_FUNC_IMPL(__imp__sub_83740B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740B60"))) PPC_WEAK_FUNC(sub_83740B60);
PPC_FUNC_IMPL(__imp__sub_83740B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,16168
	ctx.r9.s64 = ctx.r11.s64 + 16168;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740B74"))) PPC_WEAK_FUNC(sub_83740B74);
PPC_FUNC_IMPL(__imp__sub_83740B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740B78"))) PPC_WEAK_FUNC(sub_83740B78);
PPC_FUNC_IMPL(__imp__sub_83740B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83740b9c
	if (cr6.lt) goto loc_83740B9C;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bge cr6,0x83740b9c
	if (!cr6.lt) goto loc_83740B9C;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-25632
	ctx.r9.s64 = ctx.r11.s64 + -25632;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_83740B9C:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740BA4"))) PPC_WEAK_FUNC(sub_83740BA4);
PPC_FUNC_IMPL(__imp__sub_83740BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740BA8"))) PPC_WEAK_FUNC(sub_83740BA8);
PPC_FUNC_IMPL(__imp__sub_83740BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83740bcc
	if (cr6.lt) goto loc_83740BCC;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// bge cr6,0x83740bcc
	if (!cr6.lt) goto loc_83740BCC;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-25568
	ctx.r9.s64 = ctx.r11.s64 + -25568;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_83740BCC:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83740BD4"))) PPC_WEAK_FUNC(sub_83740BD4);
PPC_FUNC_IMPL(__imp__sub_83740BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83740BD8"))) PPC_WEAK_FUNC(sub_83740BD8);
PPC_FUNC_IMPL(__imp__sub_83740BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83740BE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2512(r1)
	ea = -2512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,402
	ctx.r5.s64 = 402;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// li r9,400
	ctx.r9.s64 = 400;
	// li r4,403
	ctx.r4.s64 = 403;
	// sth r5,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r5.u16);
	// li r10,404
	ctx.r10.s64 = 404;
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// li r8,401
	ctx.r8.s64 = 401;
	// sth r4,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r4.u16);
	// li r5,601
	ctx.r5.s64 = 601;
	// sth r10,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r10.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// li r4,602
	ctx.r4.s64 = 602;
	// sth r5,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r5.u16);
	// li r30,603
	ctx.r30.s64 = 603;
	// sth r9,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r9.u16);
	// li r10,604
	ctx.r10.s64 = 604;
	// sth r4,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r4.u16);
	// li r29,605
	ctx.r29.s64 = 605;
	// sth r30,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r30.u16);
	// li r8,600
	ctx.r8.s64 = 600;
	// sth r10,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r10.u16);
	// li r28,607
	ctx.r28.s64 = 607;
	// sth r29,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r29.u16);
	// li r5,4
	ctx.r5.s64 = 4;
	// sth r8,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r8.u16);
	// li r6,12
	ctx.r6.s64 = 12;
	// sth r28,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r28.u16);
	// li r7,19
	ctx.r7.s64 = 19;
	// sth r5,216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 216, ctx.r5.u16);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r31,13
	ctx.r31.s64 = 13;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r9,606
	ctx.r9.s64 = 606;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r26,5
	ctx.r26.s64 = 5;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r25,1001
	ctx.r25.s64 = 1001;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r30,159
	ctx.r30.s64 = 159;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r24,1002
	ctx.r24.s64 = 1002;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r10,1003
	ctx.r10.s64 = 1003;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r23,1004
	ctx.r23.s64 = 1004;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// li r29,1005
	ctx.r29.s64 = 1005;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// li r22,1006
	ctx.r22.s64 = 1006;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// sth r9,200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 200, ctx.r9.u16);
	// li r27,20
	ctx.r27.s64 = 20;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// li r28,21
	ctx.r28.s64 = 21;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// li r5,1007
	ctx.r5.s64 = 1007;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// sth r26,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r26.u16);
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// sth r4,232(r1)
	PPC_STORE_U16(ctx.r1.u32 + 232, ctx.r4.u16);
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// stw r30,32(r1)
	PPC_STORE_U32(ctx.r1.u32 + 32, ctx.r30.u32);
	// sth r25,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, ctx.r25.u16);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// sth r24,248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 248, ctx.r24.u16);
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// sth r23,264(r1)
	PPC_STORE_U16(ctx.r1.u32 + 264, ctx.r23.u16);
	// stw r7,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// sth r29,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r29.u16);
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// sth r22,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r22.u16);
	// sth r5,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r5.u16);
	// li r4,1008
	ctx.r4.s64 = 1008;
	// li r10,1009
	ctx.r10.s64 = 1009;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// li r5,1010
	ctx.r5.s64 = 1010;
	// sth r4,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, ctx.r4.u16);
	// li r4,1011
	ctx.r4.s64 = 1011;
	// sth r10,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r10.u16);
	// li r30,6
	ctx.r30.s64 = 6;
	// sth r5,312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 312, ctx.r5.u16);
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r4,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r4.u16);
	// li r29,8
	ctx.r29.s64 = 8;
	// sth r30,328(r1)
	PPC_STORE_U16(ctx.r1.u32 + 328, ctx.r30.u16);
	// li r5,1600
	ctx.r5.s64 = 1600;
	// sth r10,336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 336, ctx.r10.u16);
	// li r26,1601
	ctx.r26.s64 = 1601;
	// sth r29,344(r1)
	PPC_STORE_U16(ctx.r1.u32 + 344, ctx.r29.u16);
	// li r25,1603
	ctx.r25.s64 = 1603;
	// sth r5,352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 352, ctx.r5.u16);
	// li r4,1602
	ctx.r4.s64 = 1602;
	// sth r26,360(r1)
	PPC_STORE_U16(ctx.r1.u32 + 360, ctx.r26.u16);
	// li r30,1604
	ctx.r30.s64 = 1604;
	// sth r25,376(r1)
	PPC_STORE_U16(ctx.r1.u32 + 376, ctx.r25.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// sth r4,368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 368, ctx.r4.u16);
	// li r24,1605
	ctx.r24.s64 = 1605;
	// sth r30,384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 384, ctx.r30.u16);
	// li r10,76
	ctx.r10.s64 = 76;
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// li r23,15200
	ctx.r23.s64 = 15200;
	// stw r7,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r7.u32);
	// li r29,15201
	ctx.r29.s64 = 15201;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// li r22,15202
	ctx.r22.s64 = 15202;
	// stw r7,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// li r5,15203
	ctx.r5.s64 = 15203;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// li r21,15204
	ctx.r21.s64 = 15204;
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// li r26,15205
	ctx.r26.s64 = 15205;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// li r20,9
	ctx.r20.s64 = 9;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// li r19,1800
	ctx.r19.s64 = 1800;
	// stw r8,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r8.u32);
	// li r18,1801
	ctx.r18.s64 = 1801;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// li r25,1802
	ctx.r25.s64 = 1802;
	// stw r8,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// li r17,1803
	ctx.r17.s64 = 1803;
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// stw r8,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r8.u32);
	// li r4,25
	ctx.r4.s64 = 25;
	// sth r24,392(r1)
	PPC_STORE_U16(ctx.r1.u32 + 392, ctx.r24.u16);
	// li r30,1804
	ctx.r30.s64 = 1804;
	// stw r8,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// sth r10,400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 400, ctx.r10.u16);
	// stw r8,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r8.u32);
	// sth r23,408(r1)
	PPC_STORE_U16(ctx.r1.u32 + 408, ctx.r23.u16);
	// stw r8,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// sth r29,416(r1)
	PPC_STORE_U16(ctx.r1.u32 + 416, ctx.r29.u16);
	// stw r8,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r8.u32);
	// sth r22,424(r1)
	PPC_STORE_U16(ctx.r1.u32 + 424, ctx.r22.u16);
	// stw r8,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// sth r5,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, ctx.r5.u16);
	// stw r8,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r8.u32);
	// sth r21,440(r1)
	PPC_STORE_U16(ctx.r1.u32 + 440, ctx.r21.u16);
	// stw r8,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r8.u32);
	// sth r26,448(r1)
	PPC_STORE_U16(ctx.r1.u32 + 448, ctx.r26.u16);
	// stw r8,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r8.u32);
	// sth r20,456(r1)
	PPC_STORE_U16(ctx.r1.u32 + 456, ctx.r20.u16);
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// sth r19,464(r1)
	PPC_STORE_U16(ctx.r1.u32 + 464, ctx.r19.u16);
	// stw r9,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// sth r18,472(r1)
	PPC_STORE_U16(ctx.r1.u32 + 472, ctx.r18.u16);
	// stw r9,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// sth r25,480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 480, ctx.r25.u16);
	// stw r9,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// sth r17,488(r1)
	PPC_STORE_U16(ctx.r1.u32 + 488, ctx.r17.u16);
	// stw r9,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r9.u32);
	// li r5,1805
	ctx.r5.s64 = 1805;
	// sth r30,496(r1)
	PPC_STORE_U16(ctx.r1.u32 + 496, ctx.r30.u16);
	// li r30,1806
	ctx.r30.s64 = 1806;
	// stw r9,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r9.u32);
	// sth r5,504(r1)
	PPC_STORE_U16(ctx.r1.u32 + 504, ctx.r5.u16);
	// li r29,1807
	ctx.r29.s64 = 1807;
	// li r5,10
	ctx.r5.s64 = 10;
	// sth r30,512(r1)
	PPC_STORE_U16(ctx.r1.u32 + 512, ctx.r30.u16);
	// li r26,77
	ctx.r26.s64 = 77;
	// sth r29,520(r1)
	PPC_STORE_U16(ctx.r1.u32 + 520, ctx.r29.u16);
	// li r30,15400
	ctx.r30.s64 = 15400;
	// sth r5,528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 528, ctx.r5.u16);
	// sth r26,536(r1)
	PPC_STORE_U16(ctx.r1.u32 + 536, ctx.r26.u16);
	// li r29,15401
	ctx.r29.s64 = 15401;
	// li r25,15402
	ctx.r25.s64 = 15402;
	// sth r30,544(r1)
	PPC_STORE_U16(ctx.r1.u32 + 544, ctx.r30.u16);
	// li r5,15403
	ctx.r5.s64 = 15403;
	// sth r29,552(r1)
	PPC_STORE_U16(ctx.r1.u32 + 552, ctx.r29.u16);
	// li r24,15404
	ctx.r24.s64 = 15404;
	// sth r25,560(r1)
	PPC_STORE_U16(ctx.r1.u32 + 560, ctx.r25.u16);
	// li r26,15405
	ctx.r26.s64 = 15405;
	// sth r5,568(r1)
	PPC_STORE_U16(ctx.r1.u32 + 568, ctx.r5.u16);
	// li r23,15406
	ctx.r23.s64 = 15406;
	// sth r24,576(r1)
	PPC_STORE_U16(ctx.r1.u32 + 576, ctx.r24.u16);
	// li r30,15407
	ctx.r30.s64 = 15407;
	// sth r26,584(r1)
	PPC_STORE_U16(ctx.r1.u32 + 584, ctx.r26.u16);
	// sth r23,592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 592, ctx.r23.u16);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r22,78
	ctx.r22.s64 = 78;
	// sth r30,600(r1)
	PPC_STORE_U16(ctx.r1.u32 + 600, ctx.r30.u16);
	// li r29,2200
	ctx.r29.s64 = 2200;
	// stw r9,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r9.u32);
	// li r21,2201
	ctx.r21.s64 = 2201;
	// stw r9,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r9.u32);
	// li r25,2202
	ctx.r25.s64 = 2202;
	// stw r9,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r9.u32);
	// li r20,2203
	ctx.r20.s64 = 2203;
	// stw r4,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r4.u32);
	// li r5,2204
	ctx.r5.s64 = 2204;
	// stw r9,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r9.u32);
	// li r19,2205
	ctx.r19.s64 = 2205;
	// stw r9,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r9.u32);
	// li r24,2206
	ctx.r24.s64 = 2206;
	// stw r9,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r9.u32);
	// li r18,2207
	ctx.r18.s64 = 2207;
	// stw r9,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r9.u32);
	// li r26,2208
	ctx.r26.s64 = 2208;
	// stw r9,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r9.u32);
	// li r17,2209
	ctx.r17.s64 = 2209;
	// stw r9,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r9.u32);
	// li r23,2210
	ctx.r23.s64 = 2210;
	// stw r9,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r9.u32);
	// stw r9,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r9.u32);
	// li r30,2211
	ctx.r30.s64 = 2211;
	// stw r9,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r9.u32);
	// sth r22,608(r1)
	PPC_STORE_U16(ctx.r1.u32 + 608, ctx.r22.u16);
	// stw r4,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r4.u32);
	// sth r11,616(r1)
	PPC_STORE_U16(ctx.r1.u32 + 616, ctx.r11.u16);
	// stw r10,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r10.u32);
	// sth r29,624(r1)
	PPC_STORE_U16(ctx.r1.u32 + 624, ctx.r29.u16);
	// stw r10,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// sth r21,632(r1)
	PPC_STORE_U16(ctx.r1.u32 + 632, ctx.r21.u16);
	// stw r10,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r10.u32);
	// sth r25,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r25.u16);
	// stw r10,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r10.u32);
	// sth r20,648(r1)
	PPC_STORE_U16(ctx.r1.u32 + 648, ctx.r20.u16);
	// stw r10,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// sth r5,656(r1)
	PPC_STORE_U16(ctx.r1.u32 + 656, ctx.r5.u16);
	// stw r10,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r10.u32);
	// sth r19,664(r1)
	PPC_STORE_U16(ctx.r1.u32 + 664, ctx.r19.u16);
	// stw r10,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r10.u32);
	// sth r24,672(r1)
	PPC_STORE_U16(ctx.r1.u32 + 672, ctx.r24.u16);
	// stw r10,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r10.u32);
	// sth r18,680(r1)
	PPC_STORE_U16(ctx.r1.u32 + 680, ctx.r18.u16);
	// stw r10,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r10.u32);
	// sth r26,688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 688, ctx.r26.u16);
	// stw r10,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// sth r17,696(r1)
	PPC_STORE_U16(ctx.r1.u32 + 696, ctx.r17.u16);
	// stw r10,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r10.u32);
	// sth r23,704(r1)
	PPC_STORE_U16(ctx.r1.u32 + 704, ctx.r23.u16);
	// stw r10,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r10.u32);
	// li r5,2212
	ctx.r5.s64 = 2212;
	// sth r30,712(r1)
	PPC_STORE_U16(ctx.r1.u32 + 712, ctx.r30.u16);
	// li r30,2213
	ctx.r30.s64 = 2213;
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// sth r5,720(r1)
	PPC_STORE_U16(ctx.r1.u32 + 720, ctx.r5.u16);
	// li r29,2214
	ctx.r29.s64 = 2214;
	// li r5,2215
	ctx.r5.s64 = 2215;
	// sth r30,728(r1)
	PPC_STORE_U16(ctx.r1.u32 + 728, ctx.r30.u16);
	// li r26,100
	ctx.r26.s64 = 100;
	// sth r29,736(r1)
	PPC_STORE_U16(ctx.r1.u32 + 736, ctx.r29.u16);
	// li r30,20000
	ctx.r30.s64 = 20000;
	// sth r5,744(r1)
	PPC_STORE_U16(ctx.r1.u32 + 744, ctx.r5.u16);
	// sth r26,752(r1)
	PPC_STORE_U16(ctx.r1.u32 + 752, ctx.r26.u16);
	// li r29,20001
	ctx.r29.s64 = 20001;
	// li r25,20002
	ctx.r25.s64 = 20002;
	// sth r30,760(r1)
	PPC_STORE_U16(ctx.r1.u32 + 760, ctx.r30.u16);
	// li r5,20003
	ctx.r5.s64 = 20003;
	// sth r29,768(r1)
	PPC_STORE_U16(ctx.r1.u32 + 768, ctx.r29.u16);
	// li r24,20004
	ctx.r24.s64 = 20004;
	// sth r25,776(r1)
	PPC_STORE_U16(ctx.r1.u32 + 776, ctx.r25.u16);
	// li r26,20005
	ctx.r26.s64 = 20005;
	// sth r5,784(r1)
	PPC_STORE_U16(ctx.r1.u32 + 784, ctx.r5.u16);
	// li r23,20006
	ctx.r23.s64 = 20006;
	// sth r24,792(r1)
	PPC_STORE_U16(ctx.r1.u32 + 792, ctx.r24.u16);
	// li r30,20007
	ctx.r30.s64 = 20007;
	// sth r26,800(r1)
	PPC_STORE_U16(ctx.r1.u32 + 800, ctx.r26.u16);
	// sth r23,808(r1)
	PPC_STORE_U16(ctx.r1.u32 + 808, ctx.r23.u16);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r22,20008
	ctx.r22.s64 = 20008;
	// sth r30,816(r1)
	PPC_STORE_U16(ctx.r1.u32 + 816, ctx.r30.u16);
	// li r29,20009
	ctx.r29.s64 = 20009;
	// stw r10,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r10.u32);
	// li r21,20010
	ctx.r21.s64 = 20010;
	// stw r10,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r10.u32);
	// li r25,20011
	ctx.r25.s64 = 20011;
	// stw r10,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r10.u32);
	// li r20,20012
	ctx.r20.s64 = 20012;
	// stw r10,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// li r5,20013
	ctx.r5.s64 = 20013;
	// stw r10,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r10.u32);
	// li r19,20014
	ctx.r19.s64 = 20014;
	// stw r10,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r10.u32);
	// li r24,20015
	ctx.r24.s64 = 20015;
	// stw r10,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r10.u32);
	// li r18,2400
	ctx.r18.s64 = 2400;
	// stw r10,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r10.u32);
	// li r26,2401
	ctx.r26.s64 = 2401;
	// stw r10,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r10.u32);
	// li r17,2402
	ctx.r17.s64 = 2402;
	// stw r10,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r10.u32);
	// li r23,2403
	ctx.r23.s64 = 2403;
	// stw r10,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r10.u32);
	// stw r10,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r10.u32);
	// li r30,2404
	ctx.r30.s64 = 2404;
	// stw r10,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r10.u32);
	// sth r22,824(r1)
	PPC_STORE_U16(ctx.r1.u32 + 824, ctx.r22.u16);
	// stw r10,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r10.u32);
	// sth r29,832(r1)
	PPC_STORE_U16(ctx.r1.u32 + 832, ctx.r29.u16);
	// stw r10,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r10.u32);
	// sth r21,840(r1)
	PPC_STORE_U16(ctx.r1.u32 + 840, ctx.r21.u16);
	// stw r10,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r10.u32);
	// sth r25,848(r1)
	PPC_STORE_U16(ctx.r1.u32 + 848, ctx.r25.u16);
	// stw r10,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r10.u32);
	// sth r20,856(r1)
	PPC_STORE_U16(ctx.r1.u32 + 856, ctx.r20.u16);
	// stw r10,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r10.u32);
	// sth r5,864(r1)
	PPC_STORE_U16(ctx.r1.u32 + 864, ctx.r5.u16);
	// stw r10,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r10.u32);
	// sth r19,872(r1)
	PPC_STORE_U16(ctx.r1.u32 + 872, ctx.r19.u16);
	// stw r10,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r10.u32);
	// sth r24,880(r1)
	PPC_STORE_U16(ctx.r1.u32 + 880, ctx.r24.u16);
	// stw r10,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r10.u32);
	// sth r6,888(r1)
	PPC_STORE_U16(ctx.r1.u32 + 888, ctx.r6.u16);
	// stw r11,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r11.u32);
	// sth r18,896(r1)
	PPC_STORE_U16(ctx.r1.u32 + 896, ctx.r18.u16);
	// stw r11,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r11.u32);
	// sth r26,904(r1)
	PPC_STORE_U16(ctx.r1.u32 + 904, ctx.r26.u16);
	// stw r11,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r11.u32);
	// sth r17,912(r1)
	PPC_STORE_U16(ctx.r1.u32 + 912, ctx.r17.u16);
	// stw r11,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r11.u32);
	// sth r23,920(r1)
	PPC_STORE_U16(ctx.r1.u32 + 920, ctx.r23.u16);
	// stw r11,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r11.u32);
	// sth r30,928(r1)
	PPC_STORE_U16(ctx.r1.u32 + 928, ctx.r30.u16);
	// li r6,2405
	ctx.r6.s64 = 2405;
	// li r30,2407
	ctx.r30.s64 = 2407;
	// stw r11,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r11.u32);
	// sth r6,936(r1)
	PPC_STORE_U16(ctx.r1.u32 + 936, ctx.r6.u16);
	// li r5,2406
	ctx.r5.s64 = 2406;
	// li r6,2408
	ctx.r6.s64 = 2408;
	// sth r30,952(r1)
	PPC_STORE_U16(ctx.r1.u32 + 952, ctx.r30.u16);
	// li r29,2409
	ctx.r29.s64 = 2409;
	// sth r5,944(r1)
	PPC_STORE_U16(ctx.r1.u32 + 944, ctx.r5.u16);
	// li r26,2411
	ctx.r26.s64 = 2411;
	// sth r6,960(r1)
	PPC_STORE_U16(ctx.r1.u32 + 960, ctx.r6.u16);
	// li r30,2412
	ctx.r30.s64 = 2412;
	// sth r29,968(r1)
	PPC_STORE_U16(ctx.r1.u32 + 968, ctx.r29.u16);
	// li r25,2413
	ctx.r25.s64 = 2413;
	// sth r26,984(r1)
	PPC_STORE_U16(ctx.r1.u32 + 984, ctx.r26.u16);
	// li r24,2415
	ctx.r24.s64 = 2415;
	// sth r30,992(r1)
	PPC_STORE_U16(ctx.r1.u32 + 992, ctx.r30.u16);
	// li r5,2410
	ctx.r5.s64 = 2410;
	// sth r25,1000(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1000, ctx.r25.u16);
	// li r6,2414
	ctx.r6.s64 = 2414;
	// sth r24,1016(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1016, ctx.r24.u16);
	// li r29,20200
	ctx.r29.s64 = 20200;
	// sth r5,976(r1)
	PPC_STORE_U16(ctx.r1.u32 + 976, ctx.r5.u16);
	// li r23,101
	ctx.r23.s64 = 101;
	// sth r6,1008(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1008, ctx.r6.u16);
	// li r22,20201
	ctx.r22.s64 = 20201;
	// sth r29,1032(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1032, ctx.r29.u16);
	// li r21,20202
	ctx.r21.s64 = 20202;
	// sth r23,1024(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1024, ctx.r23.u16);
	// li r26,20203
	ctx.r26.s64 = 20203;
	// stw r11,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r11.u32);
	// li r20,20204
	ctx.r20.s64 = 20204;
	// stw r11,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r11.u32);
	// li r30,20205
	ctx.r30.s64 = 20205;
	// stw r11,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r11.u32);
	// li r19,20206
	ctx.r19.s64 = 20206;
	// stw r11,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r11.u32);
	// li r25,20207
	ctx.r25.s64 = 20207;
	// stw r11,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r11.u32);
	// li r18,20208
	ctx.r18.s64 = 20208;
	// stw r11,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r11.u32);
	// li r17,20209
	ctx.r17.s64 = 20209;
	// stw r11,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r11.u32);
	// li r16,20210
	ctx.r16.s64 = 20210;
	// stw r11,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r11.u32);
	// li r24,20211
	ctx.r24.s64 = 20211;
	// stw r11,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r11.u32);
	// li r15,20212
	ctx.r15.s64 = 20212;
	// stw r11,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r11.u32);
	// stw r11,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r11.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r11,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r11.u32);
	// li r29,30
	ctx.r29.s64 = 30;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r11.u32);
	// sth r22,1040(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1040, ctx.r22.u16);
	// li r23,20213
	ctx.r23.s64 = 20213;
	// stw r11,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r11.u32);
	// sth r21,1048(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1048, ctx.r21.u16);
	// stw r11,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r11.u32);
	// sth r26,1056(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1056, ctx.r26.u16);
	// stw r11,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r11.u32);
	// sth r20,1064(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1064, ctx.r20.u16);
	// stw r11,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r11.u32);
	// sth r30,1072(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1072, ctx.r30.u16);
	// stw r11,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r11.u32);
	// sth r19,1080(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1080, ctx.r19.u16);
	// stw r11,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r11.u32);
	// sth r25,1088(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1088, ctx.r25.u16);
	// stw r11,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r11.u32);
	// sth r18,1096(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1096, ctx.r18.u16);
	// stw r11,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r11.u32);
	// sth r17,1104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1104, ctx.r17.u16);
	// stw r11,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r11.u32);
	// sth r16,1112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1112, ctx.r16.u16);
	// stw r11,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r11.u32);
	// sth r24,1120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1120, ctx.r24.u16);
	// stw r11,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r11.u32);
	// sth r15,1128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1128, ctx.r15.u16);
	// stw r11,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r11.u32);
	// sth r31,1160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1160, ctx.r31.u16);
	// li r31,20215
	ctx.r31.s64 = 20215;
	// li r25,15
	ctx.r25.s64 = 15;
	// sth r7,1312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1312, ctx.r7.u16);
	// sth r31,1152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1152, ctx.r31.u16);
	// li r31,3002
	ctx.r31.s64 = 3002;
	// li r30,20214
	ctx.r30.s64 = 20214;
	// sth r25,1184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1184, ctx.r25.u16);
	// sth r31,1208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1208, ctx.r31.u16);
	// li r31,47
	ctx.r31.s64 = 47;
	// li r25,17
	ctx.r25.s64 = 17;
	// sth r30,1144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1144, ctx.r30.u16);
	// stw r31,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r31.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// sth r23,1136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1136, ctx.r23.u16);
	// li r26,102
	ctx.r26.s64 = 102;
	// li r30,3000
	ctx.r30.s64 = 3000;
	// sth r25,1264(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1264, ctx.r25.u16);
	// li r24,3001
	ctx.r24.s64 = 3001;
	// sth r26,1168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1168, ctx.r26.u16);
	// li r23,3003
	ctx.r23.s64 = 3003;
	// sth r7,1176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1176, ctx.r7.u16);
	// li r22,3004
	ctx.r22.s64 = 3004;
	// sth r30,1192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1192, ctx.r30.u16);
	// li r26,3005
	ctx.r26.s64 = 3005;
	// sth r24,1200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1200, ctx.r24.u16);
	// li r21,3006
	ctx.r21.s64 = 3006;
	// sth r23,1216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1216, ctx.r23.u16);
	// li r7,3007
	ctx.r7.s64 = 3007;
	// sth r22,1224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1224, ctx.r22.u16);
	// li r30,85
	ctx.r30.s64 = 85;
	// stw r11,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r11.u32);
	// li r20,16
	ctx.r20.s64 = 16;
	// stw r11,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, ctx.r11.u32);
	// li r19,33
	ctx.r19.s64 = 33;
	// stw r11,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r11.u32);
	// li r18,79
	ctx.r18.s64 = 79;
	// sth r26,1232(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1232, ctx.r26.u16);
	// li r17,39
	ctx.r17.s64 = 39;
	// sth r3,28(r1)
	PPC_STORE_U16(ctx.r1.u32 + 28, ctx.r3.u16);
	// li r24,40
	ctx.r24.s64 = 40;
	// sth r21,1240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1240, ctx.r21.u16);
	// li r16,18
	ctx.r16.s64 = 18;
	// std r11,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r11.u64);
	// li r15,83
	ctx.r15.s64 = 83;
	// sth r7,1248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1248, ctx.r7.u16);
	// li r14,41
	ctx.r14.s64 = 41;
	// sth r30,18(r1)
	PPC_STORE_U16(ctx.r1.u32 + 18, ctx.r30.u16);
	// li r23,82
	ctx.r23.s64 = 82;
	// stw r5,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r5.u32);
	// li r22,48
	ctx.r22.s64 = 48;
	// stw r5,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r5.u32);
	// lwz r25,20(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r26,49
	ctx.r26.s64 = 49;
	// stw r29,1180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1180, ctx.r29.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r6,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r6.u32);
	// li r21,43
	ctx.r21.s64 = 43;
	// stw r6,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r6.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r6,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r6.u32);
	// li r30,60
	ctx.r30.s64 = 60;
	// stw r6,1212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1212, ctx.r6.u32);
	// li r31,67
	ctx.r31.s64 = 67;
	// stw r6,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r6.u32);
	// li r7,65
	ctx.r7.s64 = 65;
	// stw r6,1228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1228, ctx.r6.u32);
	// stw r6,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r6.u32);
	// stw r6,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r6.u32);
	// stw r6,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r6.u32);
	// sth r20,1256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1256, ctx.r20.u16);
	// stw r19,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r19.u32);
	// stw r17,1268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1268, ctx.r17.u32);
	// sth r18,1272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1272, ctx.r18.u16);
	// stw r24,1276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1276, ctx.r24.u32);
	// sth r15,1280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1280, ctx.r15.u16);
	// stw r14,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r14.u32);
	// sth r16,1288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1288, ctx.r16.u16);
	// stw r25,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r25.u32);
	// sth r23,1296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1296, ctx.r23.u16);
	// stw r22,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r22.u32);
	// sth r5,1368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1368, ctx.r5.u16);
	// li r5,45
	ctx.r5.s64 = 45;
	// sth r6,1448(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1448, ctx.r6.u16);
	// li r6,84
	ctx.r6.s64 = 84;
	// stw r7,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r7.u32);
	// li r14,52
	ctx.r14.s64 = 52;
	// sth r7,1424(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1424, ctx.r7.u16);
	// li r7,51
	ctx.r7.s64 = 51;
	// sth r6,1328(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1328, ctx.r6.u16);
	// li r6,81
	ctx.r6.s64 = 81;
	// stw r5,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r5.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// lhz r25,18(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 18);
	// li r15,53
	ctx.r15.s64 = 53;
	// stw r7,1340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1340, ctx.r7.u32);
	// li r7,13400
	ctx.r7.s64 = 13400;
	// sth r6,1344(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1344, ctx.r6.u16);
	// li r6,13401
	ctx.r6.s64 = 13401;
	// sth r5,1360(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1360, ctx.r5.u16);
	// li r5,61
	ctx.r5.s64 = 61;
	// sth r27,1336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1336, ctx.r27.u16);
	// li r27,66
	ctx.r27.s64 = 66;
	// sth r28,1352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1352, ctx.r28.u16);
	// li r28,62
	ctx.r28.s64 = 62;
	// sth r7,1392(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1392, ctx.r7.u16);
	// li r7,26
	ctx.r7.s64 = 26;
	// sth r6,1400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1400, ctx.r6.u16);
	// li r6,85
	ctx.r6.s64 = 85;
	// sth r5,1416(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1416, ctx.r5.u16);
	// li r5,31
	ctx.r5.s64 = 31;
	// sth r25,1304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1304, ctx.r25.u16);
	// li r16,54
	ctx.r16.s64 = 54;
	// stw r21,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r21.u32);
	// li r17,57
	ctx.r17.s64 = 57;
	// stw r11,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r11.u32);
	// li r18,63
	ctx.r18.s64 = 63;
	// li r19,64
	ctx.r19.s64 = 64;
	// stw r26,1308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1308, ctx.r26.u32);
	// li r20,68
	ctx.r20.s64 = 68;
	// sth r29,1376(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1376, ctx.r29.u16);
	// li r21,69
	ctx.r21.s64 = 69;
	// stw r30,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r30.u32);
	// li r22,70
	ctx.r22.s64 = 70;
	// sth r31,1384(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1384, ctx.r31.u16);
	// li r23,71
	ctx.r23.s64 = 71;
	// sth r30,1408(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1408, ctx.r30.u16);
	// li r24,59
	ctx.r24.s64 = 59;
	// stw r31,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r31.u32);
	// li r25,86
	ctx.r25.s64 = 86;
	// sth r28,1432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1432, ctx.r28.u16);
	// li r11,84
	ctx.r11.s64 = 84;
	// sth r27,1440(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1440, ctx.r27.u16);
	// sth r7,18(r1)
	PPC_STORE_U16(ctx.r1.u32 + 18, ctx.r7.u16);
	// li r26,87
	ctx.r26.s64 = 87;
	// stw r6,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r6.u32);
	// li r29,88
	ctx.r29.s64 = 88;
	// sth r5,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r5.u16);
	// li r30,89
	ctx.r30.s64 = 89;
	// sth r3,1320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1320, ctx.r3.u16);
	// li r31,92
	ctx.r31.s64 = 92;
	// stw r14,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r14.u32);
	// li r7,98
	ctx.r7.s64 = 98;
	// stw r15,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r15.u32);
	// li r6,95
	ctx.r6.s64 = 95;
	// stw r16,1364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1364, ctx.r16.u32);
	// li r5,94
	ctx.r5.s64 = 94;
	// stw r17,1372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1372, ctx.r17.u32);
	// li r27,99
	ctx.r27.s64 = 99;
	// stw r18,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r18.u32);
	// li r28,103
	ctx.r28.s64 = 103;
	// stw r19,1396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1396, ctx.r19.u32);
	// stw r20,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r20.u32);
	// stw r21,1428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1428, ctx.r21.u32);
	// stw r22,1436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1436, ctx.r22.u32);
	// stw r23,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r23.u32);
	// stw r24,1452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1452, ctx.r24.u32);
	// sth r8,1456(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1456, ctx.r8.u16);
	// stw r11,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r11.u32);
	// sth r9,1464(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1464, ctx.r9.u16);
	// stw r25,1468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1468, ctx.r25.u32);
	// sth r4,1472(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1472, ctx.r4.u16);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r4,96
	ctx.r4.s64 = 96;
	// sth r7,1520(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1520, ctx.r7.u16);
	// li r9,12600
	ctx.r9.s64 = 12600;
	// stw r7,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, ctx.r7.u32);
	// li r8,12601
	ctx.r8.s64 = 12601;
	// stw r7,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r7.u32);
	// li r3,91
	ctx.r3.s64 = 91;
	// stw r7,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r7.u32);
	// li r7,101
	ctx.r7.s64 = 101;
	// stw r11,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r11.u32);
	// lhz r11,18(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 18);
	// stw r7,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r7.u32);
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r6,1516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1516, ctx.r6.u32);
	// stw r6,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r6.u32);
	// std r6,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r6.u64);
	// sth r11,1480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1480, ctx.r11.u16);
	// ld r11,40(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// sth r24,1512(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1512, ctx.r24.u16);
	// li r24,102
	ctx.r24.s64 = 102;
	// sth r20,1528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1528, ctx.r20.u16);
	// li r20,104
	ctx.r20.s64 = 104;
	// stw r4,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r4.u32);
	// li r4,90
	ctx.r4.s64 = 90;
	// sth r18,1544(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1544, ctx.r18.u16);
	// li r18,106
	ctx.r18.s64 = 106;
	// sth r11,1496(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1496, ctx.r11.u16);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// sth r9,1552(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1552, ctx.r9.u16);
	// li r9,107
	ctx.r9.s64 = 107;
	// sth r8,1560(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1560, ctx.r8.u16);
	// li r8,93
	ctx.r8.s64 = 93;
	// sth r19,1568(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1568, ctx.r19.u16);
	// li r19,108
	ctx.r19.s64 = 108;
	// stw r26,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r26.u32);
	// sth r11,1504(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1504, ctx.r11.u16);
	// li r11,33
	ctx.r11.s64 = 33;
	// sth r10,1488(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1488, ctx.r10.u16);
	// li r10,134
	ctx.r10.s64 = 134;
	// sth r11,1536(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1536, ctx.r11.u16);
	// li r11,105
	ctx.r11.s64 = 105;
	// stw r29,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r29.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r11,1612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1612, ctx.r11.u32);
	// li r11,6803
	ctx.r11.s64 = 6803;
	// stw r30,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r30.u32);
	// stw r31,1508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1508, ctx.r31.u32);
	// sth r29,1592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1592, ctx.r29.u16);
	// li r29,75
	ctx.r29.s64 = 75;
	// std r17,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r17.u64);
	// li r17,109
	ctx.r17.s64 = 109;
	// sth r25,1576(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1576, ctx.r25.u16);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r6,1580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1580, ctx.r6.u32);
	// li r6,120
	ctx.r6.s64 = 120;
	// sth r26,1584(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1584, ctx.r26.u16);
	// li r26,100
	ctx.r26.s64 = 100;
	// stw r24,1588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1588, ctx.r24.u32);
	// li r24,35
	ctx.r24.s64 = 35;
	// stw r28,1596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1596, ctx.r28.u32);
	// std r28,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r28.u64);
	// li r28,135
	ctx.r28.s64 = 135;
	// sth r30,1600(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1600, ctx.r30.u16);
	// li r30,6800
	ctx.r30.s64 = 6800;
	// stw r20,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r20.u32);
	// li r20,6801
	ctx.r20.s64 = 6801;
	// sth r4,1608(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1608, ctx.r4.u16);
	// li r4,6802
	ctx.r4.s64 = 6802;
	// sth r3,1616(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1616, ctx.r3.u16);
	// li r3,6804
	ctx.r3.s64 = 6804;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// li r11,122
	ctx.r11.s64 = 122;
	// sth r31,1624(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1624, ctx.r31.u16);
	// li r31,6805
	ctx.r31.s64 = 6805;
	// stw r5,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r5.u32);
	// stw r27,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r27.u32);
	// stw r18,1620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1620, ctx.r18.u32);
	// stw r9,1628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1628, ctx.r9.u32);
	// sth r8,1632(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1632, ctx.r8.u16);
	// stw r19,1636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1636, ctx.r19.u32);
	// stw r10,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r10.u32);
	// li r8,129
	ctx.r8.s64 = 129;
	// stw r10,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r10.u32);
	// li r19,7201
	ctx.r19.s64 = 7201;
	// stw r10,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r10.u32);
	// li r18,7202
	ctx.r18.s64 = 7202;
	// stw r10,1700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1700, ctx.r10.u32);
	// stw r10,1708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1708, ctx.r10.u32);
	// stw r10,1716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1716, ctx.r10.u32);
	// stw r10,1724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1724, ctx.r10.u32);
	// stw r10,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r10.u32);
	// stw r10,1740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1740, ctx.r10.u32);
	// li r10,123
	ctx.r10.s64 = 123;
	// lhz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// sth r5,1640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1640, ctx.r5.u16);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r26,1652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1652, ctx.r26.u32);
	// li r26,6806
	ctx.r26.s64 = 6806;
	// sth r4,1696(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1696, ctx.r4.u16);
	// li r4,125
	ctx.r4.s64 = 125;
	// stw r11,1748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1748, ctx.r11.u32);
	// stw r11,1756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1756, ctx.r11.u32);
	// stw r11,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r11.u32);
	// stw r11,1772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1772, ctx.r11.u32);
	// stw r11,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, ctx.r11.u32);
	// stw r11,1788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1788, ctx.r11.u32);
	// stw r11,1796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1796, ctx.r11.u32);
	// stw r11,1804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1804, ctx.r11.u32);
	// stw r11,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r11.u32);
	// li r11,7204
	ctx.r11.s64 = 7204;
	// stw r10,1876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1876, ctx.r10.u32);
	// stw r10,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r10.u32);
	// stw r10,1892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1892, ctx.r10.u32);
	// li r10,8000
	ctx.r10.s64 = 8000;
	// sth r25,1656(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1656, ctx.r25.u16);
	// li r25,6807
	ctx.r25.s64 = 6807;
	// sth r24,1664(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1664, ctx.r24.u16);
	// li r24,36
	ctx.r24.s64 = 36;
	// sth r20,1688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1688, ctx.r20.u16);
	// li r20,7200
	ctx.r20.s64 = 7200;
	// stw r17,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, ctx.r17.u32);
	// li r17,38
	ctx.r17.s64 = 38;
	// stw r6,1660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1660, ctx.r6.u32);
	// li r6,7203
	ctx.r6.s64 = 7203;
	// stw r28,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r28.u32);
	// li r28,7207
	ctx.r28.s64 = 7207;
	// sth r7,1672(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1672, ctx.r7.u16);
	// sth r30,1680(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1680, ctx.r30.u16);
	// li r30,37
	ctx.r30.s64 = 37;
	// sth r9,1704(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1704, ctx.r9.u16);
	// li r9,130
	ctx.r9.s64 = 130;
	// sth r3,1712(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1712, ctx.r3.u16);
	// li r3,7205
	ctx.r3.s64 = 7205;
	// stw r4,1820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1820, ctx.r4.u32);
	// stw r4,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r4.u32);
	// li r4,7206
	ctx.r4.s64 = 7206;
	// stw r5,1836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1836, ctx.r5.u32);
	// stw r5,1844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1844, ctx.r5.u32);
	// li r5,7400
	ctx.r5.s64 = 7400;
	// stw r8,1852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1852, ctx.r8.u32);
	// stw r8,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r8.u32);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// li r7,7600
	ctx.r7.s64 = 7600;
	// stw r8,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r8.u32);
	// li r8,7800
	ctx.r8.s64 = 7800;
	// std r16,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r16.u64);
	// li r16,39
	ctx.r16.s64 = 39;
	// std r15,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r15.u64);
	// li r15,7801
	ctx.r15.s64 = 7801;
	// sth r31,1720(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1720, ctx.r31.u16);
	// li r31,40
	ctx.r31.s64 = 40;
	// sth r26,1728(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1728, ctx.r26.u16);
	// li r26,8001
	ctx.r26.s64 = 8001;
	// sth r10,20(r1)
	PPC_STORE_U16(ctx.r1.u32 + 20, ctx.r10.u16);
	// li r10,138
	ctx.r10.s64 = 138;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// li r11,133
	ctx.r11.s64 = 133;
	// sth r29,1648(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1648, ctx.r29.u16);
	// sth r25,1736(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1736, ctx.r25.u16);
	// sth r24,1744(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1744, ctx.r24.u16);
	// sth r20,1752(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1752, ctx.r20.u16);
	// sth r5,24(r1)
	PPC_STORE_U16(ctx.r1.u32 + 24, ctx.r5.u16);
	// li r5,72
	ctx.r5.s64 = 72;
	// lhz r25,16(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// sth r8,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r8.u16);
	// li r8,73
	ctx.r8.s64 = 73;
	// sth r31,26(r1)
	PPC_STORE_U16(ctx.r1.u32 + 26, ctx.r31.u16);
	// li r31,131
	ctx.r31.s64 = 131;
	// sth r4,18(r1)
	PPC_STORE_U16(ctx.r1.u32 + 18, ctx.r4.u16);
	// li r4,132
	ctx.r4.s64 = 132;
	// sth r19,1760(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1760, ctx.r19.u16);
	// li r19,14000
	ctx.r19.s64 = 14000;
	// sth r18,1768(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1768, ctx.r18.u16);
	// li r18,14200
	ctx.r18.s64 = 14200;
	// sth r25,1784(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1784, ctx.r25.u16);
	// li r25,13800
	ctx.r25.s64 = 13800;
	// sth r26,1888(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1888, ctx.r26.u16);
	// li r26,13802
	ctx.r26.s64 = 13802;
	// sth r21,1896(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1896, ctx.r21.u16);
	// li r21,13803
	ctx.r21.s64 = 13803;
	// sth r6,1776(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1776, ctx.r6.u16);
	// li r6,14600
	ctx.r6.s64 = 14600;
	// sth r3,1792(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1792, ctx.r3.u16);
	// li r3,8200
	ctx.r3.s64 = 8200;
	// sth r28,1808(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1808, ctx.r28.u16);
	// li r28,139
	ctx.r28.s64 = 139;
	// sth r17,1832(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1832, ctx.r17.u16);
	// li r17,44
	ctx.r17.s64 = 44;
	// sth r7,1840(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1840, ctx.r7.u16);
	// li r7,14400
	ctx.r7.s64 = 14400;
	// stw r9,1900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1900, ctx.r9.u32);
	// stw r9,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r9.u32);
	// stw r9,1916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1916, ctx.r9.u32);
	// stw r9,1924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1924, ctx.r9.u32);
	// stw r9,1932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1932, ctx.r9.u32);
	// lhz r20,24(r1)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// stw r9,1940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1940, ctx.r9.u32);
	// li r9,142
	ctx.r9.s64 = 142;
	// stw r11,1980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1980, ctx.r11.u32);
	// stw r11,1988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1988, ctx.r11.u32);
	// lhz r24,18(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 18);
	// sth r20,1824(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1824, ctx.r20.u16);
	// lhz r20,16(r1)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stw r11,1996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1996, ctx.r11.u32);
	// stw r11,2004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2004, ctx.r11.u32);
	// li r11,41
	ctx.r11.s64 = 41;
	// sth r24,1800(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1800, ctx.r24.u16);
	// li r24,13801
	ctx.r24.s64 = 13801;
	// sth r25,1904(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1904, ctx.r25.u16);
	// li r25,8201
	ctx.r25.s64 = 8201;
	// sth r20,1856(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1856, ctx.r20.u16);
	// lhz r20,26(r1)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r1.u32 + 26);
	// sth r24,1912(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1912, ctx.r24.u16);
	// li r24,8202
	ctx.r24.s64 = 8202;
	// sth r26,1920(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1920, ctx.r26.u16);
	// li r26,8203
	ctx.r26.s64 = 8203;
	// sth r21,1928(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1928, ctx.r21.u16);
	// li r21,8204
	ctx.r21.s64 = 8204;
	// sth r22,1944(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1944, ctx.r22.u16);
	// li r22,42
	ctx.r22.s64 = 42;
	// sth r20,1872(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1872, ctx.r20.u16);
	// lhz r20,20(r1)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r1.u32 + 20);
	// stw r31,1948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1948, ctx.r31.u32);
	// sth r19,1952(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1952, ctx.r19.u16);
	// li r19,145
	ctx.r19.s64 = 145;
	// stw r31,1956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1956, ctx.r31.u32);
	// li r31,43
	ctx.r31.s64 = 43;
	// sth r23,1960(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1960, ctx.r23.u16);
	// li r23,8800
	ctx.r23.s64 = 8800;
	// sth r20,1880(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1880, ctx.r20.u16);
	// li r20,13804
	ctx.r20.s64 = 13804;
	// stw r4,1964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1964, ctx.r4.u32);
	// sth r20,1936(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1936, ctx.r20.u16);
	// li r20,8205
	ctx.r20.s64 = 8205;
	// sth r18,1968(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1968, ctx.r18.u16);
	// li r18,8801
	ctx.r18.s64 = 8801;
	// stw r4,1972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1972, ctx.r4.u32);
	// li r4,8802
	ctx.r4.s64 = 8802;
	// sth r30,1816(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1816, ctx.r30.u16);
	// sth r16,1848(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1848, ctx.r16.u16);
	// sth r15,1864(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1864, ctx.r15.u16);
	// sth r5,1976(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1976, ctx.r5.u16);
	// sth r11,20(r1)
	PPC_STORE_U16(ctx.r1.u32 + 20, ctx.r11.u16);
	// li r11,154
	ctx.r11.s64 = 154;
	// sth r6,2000(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2000, ctx.r6.u16);
	// li r16,8803
	ctx.r16.s64 = 8803;
	// stw r10,2012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2012, ctx.r10.u32);
	// stw r10,2020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2020, ctx.r10.u32);
	// stw r10,2028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2028, ctx.r10.u32);
	// stw r10,2036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2036, ctx.r10.u32);
	// stw r10,2044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2044, ctx.r10.u32);
	// stw r10,2052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2052, ctx.r10.u32);
	// stw r10,2060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2060, ctx.r10.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// sth r25,2024(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2024, ctx.r25.u16);
	// li r25,9402
	ctx.r25.s64 = 9402;
	// sth r24,2032(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2032, ctx.r24.u16);
	// li r24,9403
	ctx.r24.s64 = 9403;
	// sth r26,2040(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2040, ctx.r26.u16);
	// li r26,9401
	ctx.r26.s64 = 9401;
	// sth r21,2048(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2048, ctx.r21.u16);
	// li r21,9406
	ctx.r21.s64 = 9406;
	// sth r22,2064(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2064, ctx.r22.u16);
	// li r22,9405
	ctx.r22.s64 = 9405;
	// sth r31,2072(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2072, ctx.r31.u16);
	// li r31,47
	ctx.r31.s64 = 47;
	// stw r9,2084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2084, ctx.r9.u32);
	// sth r23,2088(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2088, ctx.r23.u16);
	// li r23,9404
	ctx.r23.s64 = 9404;
	// stw r9,2092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2092, ctx.r9.u32);
	// stw r9,2100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2100, ctx.r9.u32);
	// sth r4,2104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2104, ctx.r4.u16);
	// li r4,9400
	ctx.r4.s64 = 9400;
	// lhz r6,20(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 20);
	// stw r9,2108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2108, ctx.r9.u32);
	// stw r9,2116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2116, ctx.r9.u32);
	// li r9,144
	ctx.r9.s64 = 144;
	// sth r7,1984(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1984, ctx.r7.u16);
	// li r7,143
	ctx.r7.s64 = 143;
	// sth r10,2120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2120, ctx.r10.u16);
	// li r10,9407
	ctx.r10.s64 = 9407;
	// sth r6,2008(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2008, ctx.r6.u16);
	// li r6,46
	ctx.r6.s64 = 46;
	// sth r20,2056(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2056, ctx.r20.u16);
	// li r20,48
	ctx.r20.s64 = 48;
	// stw r11,2140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2140, ctx.r11.u32);
	// stw r11,2148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2148, ctx.r11.u32);
	// stw r11,2156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2156, ctx.r11.u32);
	// stw r11,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r11.u32);
	// stw r11,2172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2172, ctx.r11.u32);
	// stw r11,2180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2180, ctx.r11.u32);
	// stw r11,2188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2188, ctx.r11.u32);
	// stw r11,2196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2196, ctx.r11.u32);
	// stw r11,2204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2204, ctx.r11.u32);
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r9,2132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2132, ctx.r9.u32);
	// li r9,155
	ctx.r9.s64 = 155;
	// sth r31,2136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2136, ctx.r31.u16);
	// li r31,50
	ctx.r31.s64 = 50;
	// sth r4,2144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2144, ctx.r4.u16);
	// li r4,49
	ctx.r4.s64 = 49;
	// sth r26,2152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2152, ctx.r26.u16);
	// li r26,81
	ctx.r26.s64 = 81;
	// sth r25,2160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2160, ctx.r25.u16);
	// li r25,10200
	ctx.r25.s64 = 10200;
	// sth r24,2168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2168, ctx.r24.u16);
	// li r24,51
	ctx.r24.s64 = 51;
	// sth r23,2176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2176, ctx.r23.u16);
	// li r23,10201
	ctx.r23.s64 = 10201;
	// sth r22,2184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2184, ctx.r22.u16);
	// li r22,77
	ctx.r22.s64 = 77;
	// sth r21,2192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2192, ctx.r21.u16);
	// li r21,111
	ctx.r21.s64 = 111;
	// sth r8,1992(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1992, ctx.r8.u16);
	// sth r3,2016(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2016, ctx.r3.u16);
	// stw r28,2068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2068, ctx.r28.u32);
	// stw r19,2076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2076, ctx.r19.u32);
	// sth r17,2080(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2080, ctx.r17.u16);
	// sth r18,2096(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2096, ctx.r18.u16);
	// sth r16,2112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2112, ctx.r16.u16);
	// stw r7,2124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2124, ctx.r7.u32);
	// sth r6,2128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2128, ctx.r6.u16);
	// sth r10,2200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2200, ctx.r10.u16);
	// ld r6,64(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// li r10,83
	ctx.r10.s64 = 83;
	// stw r5,2228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2228, ctx.r5.u32);
	// li r5,119
	ctx.r5.s64 = 119;
	// ld r7,56(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r15,40(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r17,48(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r28,72(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stw r9,2212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2212, ctx.r9.u32);
	// li r9,55
	ctx.r9.s64 = 55;
	// sth r20,2208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2208, ctx.r20.u16);
	// li r20,112
	ctx.r20.s64 = 112;
	// sth r4,2216(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2216, ctx.r4.u16);
	// li r4,114
	ctx.r4.s64 = 114;
	// stw r26,2220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2220, ctx.r26.u32);
	// li r26,117
	ctx.r26.s64 = 117;
	// sth r31,2224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2224, ctx.r31.u16);
	// li r31,97
	ctx.r31.s64 = 97;
	// sth r24,2232(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2232, ctx.r24.u16);
	// li r24,56
	ctx.r24.s64 = 56;
	// stw r8,2236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2236, ctx.r8.u32);
	// li r8,148
	ctx.r8.s64 = 148;
	// sth r6,2296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2296, ctx.r6.u16);
	// li r6,58
	ctx.r6.s64 = 58;
	// stw r5,2308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2308, ctx.r5.u32);
	// li r5,149
	ctx.r5.s64 = 149;
	// stw r11,2244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2244, ctx.r11.u32);
	// stw r10,2268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2268, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,2288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2288, ctx.r9.u16);
	// sth r11,2336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2336, ctx.r11.u16);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lhz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 28);
	// sth r25,2240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2240, ctx.r25.u16);
	// sth r23,2248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2248, ctx.r23.u16);
	// stw r29,2252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2252, ctx.r29.u32);
	// sth r14,2256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2256, ctx.r14.u16);
	// stw r22,2260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2260, ctx.r22.u32);
	// sth r27,2264(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2264, ctx.r27.u16);
	// sth r15,2272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2272, ctx.r15.u16);
	// stw r21,2276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2276, ctx.r21.u32);
	// sth r16,2280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2280, ctx.r16.u16);
	// stw r20,2284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2284, ctx.r20.u32);
	// stw r4,2292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2292, ctx.r4.u32);
	// stw r26,2300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2300, ctx.r26.u32);
	// sth r31,2304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2304, ctx.r31.u16);
	// sth r24,2312(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2312, ctx.r24.u16);
	// stw r8,2316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2316, ctx.r8.u32);
	// sth r17,2320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2320, ctx.r17.u16);
	// stw r7,2324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2324, ctx.r7.u32);
	// sth r6,2328(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2328, ctx.r6.u16);
	// stw r7,2332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2332, ctx.r7.u32);
	// stw r5,2340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2340, ctx.r5.u32);
	// sth r28,2344(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2344, ctx.r28.u16);
	// stw r30,2348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2348, ctx.r30.u32);
loc_83741AB0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x83741ad8
	if (cr6.eq) goto loc_83741AD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,282
	cr6.compare<uint32_t>(ctx.r10.u32, 282, xer);
	// blt cr6,0x83741ab0
	if (cr6.lt) goto loc_83741AB0;
	// lwz r3,32(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83741AD8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,2512
	ctx.r1.s64 = ctx.r1.s64 + 2512;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83741AEC"))) PPC_WEAK_FUNC(sub_83741AEC);
PPC_FUNC_IMPL(__imp__sub_83741AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83741AF0"))) PPC_WEAK_FUNC(sub_83741AF0);
PPC_FUNC_IMPL(__imp__sub_83741AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,157
	cr6.compare<uint32_t>(ctx.r11.u32, 157, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6932
	ctx.r12.s64 = ctx.r12.s64 + 6932;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83741DD4;
	case 1:
		goto loc_83741DDC;
	case 2:
		goto loc_83741DE4;
	case 3:
		goto loc_83741DEC;
	case 4:
		goto loc_83741DF4;
	case 5:
		goto loc_83741DAC;
	case 6:
		goto loc_83741E20;
	case 7:
		goto loc_83741DD4;
	case 8:
		goto loc_83741DD4;
	case 9:
		goto loc_83741DD4;
	case 10:
		goto loc_83741DD4;
	case 11:
		goto loc_83741DD4;
	case 12:
		goto loc_83741DD4;
	case 13:
		goto loc_83741E20;
	case 14:
		goto loc_83741DDC;
	case 15:
		goto loc_83741DDC;
	case 16:
		goto loc_83741DDC;
	case 17:
		goto loc_83741DDC;
	case 18:
		goto loc_83741DDC;
	case 19:
		goto loc_83741DDC;
	case 20:
		goto loc_83741E20;
	case 21:
		goto loc_83741E20;
	case 22:
		goto loc_83741DE4;
	case 23:
		goto loc_83741DE4;
	case 24:
		goto loc_83741DE4;
	case 25:
		goto loc_83741E20;
	case 26:
		goto loc_83741DEC;
	case 27:
		goto loc_83741DEC;
	case 28:
		goto loc_83741DEC;
	case 29:
		goto loc_83741E20;
	case 30:
		goto loc_83741E20;
	case 31:
		goto loc_83741DF4;
	case 32:
		goto loc_83741DF4;
	case 33:
		goto loc_83741E20;
	case 34:
		goto loc_83741E20;
	case 35:
		goto loc_83741E20;
	case 36:
		goto loc_83741E20;
	case 37:
		goto loc_83741E20;
	case 38:
		goto loc_83741D8C;
	case 39:
		goto loc_83741D8C;
	case 40:
		goto loc_83741E20;
	case 41:
		goto loc_83741E20;
	case 42:
		goto loc_83741D94;
	case 43:
		goto loc_83741D94;
	case 44:
		goto loc_83741E20;
	case 45:
		goto loc_83741E20;
	case 46:
		goto loc_83741D9C;
	case 47:
		goto loc_83741D9C;
	case 48:
		goto loc_83741E20;
	case 49:
		goto loc_83741E20;
	case 50:
		goto loc_83741DA4;
	case 51:
		goto loc_83741DA4;
	case 52:
		goto loc_83741E20;
	case 53:
		goto loc_83741E20;
	case 54:
		goto loc_83741E20;
	case 55:
		goto loc_83741E20;
	case 56:
		goto loc_83741E20;
	case 57:
		goto loc_83741E20;
	case 58:
		goto loc_83741E20;
	case 59:
		goto loc_83741E20;
	case 60:
		goto loc_83741DB4;
	case 61:
		goto loc_83741DB4;
	case 62:
		goto loc_83741E20;
	case 63:
		goto loc_83741DBC;
	case 64:
		goto loc_83741DBC;
	case 65:
		goto loc_83741E20;
	case 66:
		goto loc_83741DAC;
	case 67:
		goto loc_83741DAC;
	case 68:
		goto loc_83741E20;
	case 69:
		goto loc_83741DAC;
	case 70:
		goto loc_83741E20;
	case 71:
		goto loc_83741E20;
	case 72:
		goto loc_83741E20;
	case 73:
		goto loc_83741DC4;
	case 74:
		goto loc_83741DC4;
	case 75:
		goto loc_83741E20;
	case 76:
		goto loc_83741E20;
	case 77:
		goto loc_83741E20;
	case 78:
		goto loc_83741E20;
	case 79:
		goto loc_83741E20;
	case 80:
		goto loc_83741E20;
	case 81:
		goto loc_83741E20;
	case 82:
		goto loc_83741E20;
	case 83:
		goto loc_83741E20;
	case 84:
		goto loc_83741E20;
	case 85:
		goto loc_83741E20;
	case 86:
		goto loc_83741E20;
	case 87:
		goto loc_83741E20;
	case 88:
		goto loc_83741E20;
	case 89:
		goto loc_83741E20;
	case 90:
		goto loc_83741E20;
	case 91:
		goto loc_83741E20;
	case 92:
		goto loc_83741E20;
	case 93:
		goto loc_83741E20;
	case 94:
		goto loc_83741E20;
	case 95:
		goto loc_83741E20;
	case 96:
		goto loc_83741E20;
	case 97:
		goto loc_83741DCC;
	case 98:
		goto loc_83741DCC;
	case 99:
		goto loc_83741E20;
	case 100:
		goto loc_83741E20;
	case 101:
		goto loc_83741E20;
	case 102:
		goto loc_83741E20;
	case 103:
		goto loc_83741E20;
	case 104:
		goto loc_83741E20;
	case 105:
		goto loc_83741E20;
	case 106:
		goto loc_83741E20;
	case 107:
		goto loc_83741E20;
	case 108:
		goto loc_83741E20;
	case 109:
		goto loc_83741E20;
	case 110:
		goto loc_83741E20;
	case 111:
		goto loc_83741E20;
	case 112:
		goto loc_83741E20;
	case 113:
		goto loc_83741E20;
	case 114:
		goto loc_83741E20;
	case 115:
		goto loc_83741E20;
	case 116:
		goto loc_83741E20;
	case 117:
		goto loc_83741E20;
	case 118:
		goto loc_83741E20;
	case 119:
		goto loc_83741E20;
	case 120:
		goto loc_83741E20;
	case 121:
		goto loc_83741E0C;
	case 122:
		goto loc_83741E0C;
	case 123:
		goto loc_83741E0C;
	case 124:
		goto loc_83741E0C;
	case 125:
		goto loc_83741E0C;
	case 126:
		goto loc_83741E0C;
	case 127:
		goto loc_83741E0C;
	case 128:
		goto loc_83741E0C;
	case 129:
		goto loc_83741E0C;
	case 130:
		goto loc_83741E0C;
	case 131:
		goto loc_83741E0C;
	case 132:
		goto loc_83741E0C;
	case 133:
		goto loc_83741E0C;
	case 134:
		goto loc_83741E0C;
	case 135:
		goto loc_83741E20;
	case 136:
		goto loc_83741DFC;
	case 137:
		goto loc_83741DFC;
	case 138:
		goto loc_83741DFC;
	case 139:
		goto loc_83741E20;
	case 140:
		goto loc_83741E04;
	case 141:
		goto loc_83741E04;
	case 142:
		goto loc_83741E04;
	case 143:
		goto loc_83741E20;
	case 144:
		goto loc_83741E20;
	case 145:
		goto loc_83741E20;
	case 146:
		goto loc_83741E20;
	case 147:
		goto loc_83741E20;
	case 148:
		goto loc_83741E20;
	case 149:
		goto loc_83741E20;
	case 150:
		goto loc_83741E20;
	case 151:
		goto loc_83741E20;
	case 152:
		goto loc_83741E20;
	case 153:
		goto loc_83741E14;
	case 154:
		goto loc_83741E14;
	case 155:
		goto loc_83741E20;
	case 156:
		goto loc_83741E1C;
	case 157:
		goto loc_83741E1C;
	default:
		return;
	}
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7652(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7652);
	// lwz r27,7660(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7660);
	// lwz r27,7668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7668);
	// lwz r27,7596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7596);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7636(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7636);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7644(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7644);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7652(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7652);
	// lwz r27,7652(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7652);
	// lwz r27,7652(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7652);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7660(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7660);
	// lwz r27,7660(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7660);
	// lwz r27,7660(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7660);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7668);
	// lwz r27,7668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7668);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7564(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7564);
	// lwz r27,7564(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7564);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7572(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7572);
	// lwz r27,7572(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7572);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7580(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7580);
	// lwz r27,7580(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7580);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7588(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7588);
	// lwz r27,7588(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7588);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7604);
	// lwz r27,7604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7604);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7612);
	// lwz r27,7612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7612);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7596);
	// lwz r27,7596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7596);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7596);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7620);
	// lwz r27,7620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7620);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7628(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7628);
	// lwz r27,7628(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7628);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7692);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7676);
	// lwz r27,7676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7676);
	// lwz r27,7676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7676);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7684(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7684);
	// lwz r27,7684(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7684);
	// lwz r27,7684(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7684);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7700);
	// lwz r27,7700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7700);
	// lwz r27,7712(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7712);
	// lwz r27,7708(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7708);
	// lwz r27,7708(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 7708);
loc_83741D8C:
	// li r3,38
	ctx.r3.s64 = 38;
	// blr 
	return;
loc_83741D94:
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
loc_83741D9C:
	// li r3,46
	ctx.r3.s64 = 46;
	// blr 
	return;
loc_83741DA4:
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
loc_83741DAC:
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_83741DB4:
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
loc_83741DBC:
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
loc_83741DC4:
	// li r3,73
	ctx.r3.s64 = 73;
	// blr 
	return;
loc_83741DCC:
	// li r3,97
	ctx.r3.s64 = 97;
	// blr 
	return;
loc_83741DD4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83741DDC:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_83741DE4:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_83741DEC:
	// li r3,26
	ctx.r3.s64 = 26;
	// blr 
	return;
loc_83741DF4:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83741DFC:
	// li r3,136
	ctx.r3.s64 = 136;
	// blr 
	return;
loc_83741E04:
	// li r3,140
	ctx.r3.s64 = 140;
	// blr 
	return;
loc_83741E0C:
	// li r3,121
	ctx.r3.s64 = 121;
	// blr 
	return;
loc_83741E14:
	// li r3,153
	ctx.r3.s64 = 153;
	// blr 
	return;
loc_83741E1C:
	// li r3,156
	ctx.r3.s64 = 156;
loc_83741E20:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83741E24"))) PPC_WEAK_FUNC(sub_83741E24);
PPC_FUNC_IMPL(__imp__sub_83741E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83741E28"))) PPC_WEAK_FUNC(sub_83741E28);
PPC_FUNC_IMPL(__imp__sub_83741E28) {
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
	// bl 0x83741af0
	ctx.lr = 0x83741E38;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x83741e54
	if (!cr6.eq) goto loc_83741E54;
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
loc_83741E54:
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// bne cr6,0x83741e70
	if (!cr6.eq) goto loc_83741E70;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83741E70:
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bne cr6,0x83741e8c
	if (!cr6.eq) goto loc_83741E8C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83741E8C:
	// cmpwi cr6,r3,26
	cr6.compare<int32_t>(ctx.r3.s32, 26, xer);
	// bne cr6,0x83741ea8
	if (!cr6.eq) goto loc_83741EA8;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83741EA8:
	// cmpwi cr6,r3,31
	cr6.compare<int32_t>(ctx.r3.s32, 31, xer);
	// bne cr6,0x83741ec4
	if (!cr6.eq) goto loc_83741EC4;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83741EC4:
	// addi r11,r3,-66
	ctx.r11.s64 = ctx.r3.s64 + -66;
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_83741EE8"))) PPC_WEAK_FUNC(sub_83741EE8);
PPC_FUNC_IMPL(__imp__sub_83741EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r3,11
	ctx.r3.s64 = 11;
	// cmplwi cr6,r11,150
	cr6.compare<uint32_t>(ctx.r11.u32, 150, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,7952
	ctx.r12.s64 = ctx.r12.s64 + 7952;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8374217C;
	case 1:
		goto loc_83742184;
	case 2:
		goto loc_8374218C;
	case 3:
		goto loc_83742194;
	case 4:
		goto loc_837421A4;
	case 5:
		goto loc_837421AC;
	case 6:
		goto loc_837421B0;
	case 7:
		goto loc_8374217C;
	case 8:
		goto loc_83742184;
	case 9:
		goto loc_8374218C;
	case 10:
		goto loc_83742194;
	case 11:
		goto loc_837421A4;
	case 12:
		goto loc_837421AC;
	case 13:
		goto loc_837421B0;
	case 14:
		goto loc_837421B0;
	case 15:
		goto loc_83742194;
	case 16:
		goto loc_837421A4;
	case 17:
		goto loc_837421AC;
	case 18:
		goto loc_837421B0;
	case 19:
		goto loc_8374217C;
	case 20:
		goto loc_83742184;
	case 21:
		goto loc_837421AC;
	case 22:
		goto loc_837421B0;
	case 23:
		goto loc_837421B0;
	case 24:
		goto loc_837421A4;
	case 25:
		goto loc_837421AC;
	case 26:
		goto loc_837421B0;
	case 27:
		goto loc_837421B0;
	case 28:
		goto loc_837421B0;
	case 29:
		goto loc_837421B0;
	case 30:
		goto loc_837421B0;
	case 31:
		goto loc_837421B0;
	case 32:
		goto loc_837421B0;
	case 33:
		goto loc_837421B0;
	case 34:
		goto loc_837421B0;
	case 35:
		goto loc_837421B0;
	case 36:
		goto loc_837421B0;
	case 37:
		goto loc_837421B0;
	case 38:
		goto loc_837421B0;
	case 39:
		goto loc_837421B0;
	case 40:
		goto loc_837421B0;
	case 41:
		goto loc_837421B0;
	case 42:
		goto loc_837421B0;
	case 43:
		goto loc_837421B0;
	case 44:
		goto loc_837421B0;
	case 45:
		goto loc_837421B0;
	case 46:
		goto loc_837421B0;
	case 47:
		goto loc_837421B0;
	case 48:
		goto loc_837421B0;
	case 49:
		goto loc_837421B0;
	case 50:
		goto loc_837421B0;
	case 51:
		goto loc_837421B0;
	case 52:
		goto loc_837421B0;
	case 53:
		goto loc_837421B0;
	case 54:
		goto loc_837421B0;
	case 55:
		goto loc_837421B0;
	case 56:
		goto loc_837421B0;
	case 57:
		goto loc_837421B0;
	case 58:
		goto loc_837421B0;
	case 59:
		goto loc_837421B0;
	case 60:
		goto loc_837421B0;
	case 61:
		goto loc_837421B0;
	case 62:
		goto loc_837421B0;
	case 63:
		goto loc_837421B0;
	case 64:
		goto loc_837421B0;
	case 65:
		goto loc_837421B0;
	case 66:
		goto loc_837421B0;
	case 67:
		goto loc_837421B0;
	case 68:
		goto loc_837421B0;
	case 69:
		goto loc_837421B0;
	case 70:
		goto loc_837421B0;
	case 71:
		goto loc_837421B0;
	case 72:
		goto loc_837421B0;
	case 73:
		goto loc_837421B0;
	case 74:
		goto loc_837421B0;
	case 75:
		goto loc_837421B0;
	case 76:
		goto loc_837421AC;
	case 77:
		goto loc_837421AC;
	case 78:
		goto loc_837421AC;
	case 79:
		goto loc_837421AC;
	case 80:
		goto loc_837421AC;
	case 81:
		goto loc_837421AC;
	case 82:
		goto loc_837421AC;
	case 83:
		goto loc_837421AC;
	case 84:
		goto loc_837421AC;
	case 85:
		goto loc_837421AC;
	case 86:
		goto loc_837421AC;
	case 87:
		goto loc_837421AC;
	case 88:
		goto loc_837421AC;
	case 89:
		goto loc_837421B0;
	case 90:
		goto loc_837421A4;
	case 91:
		goto loc_837421AC;
	case 92:
		goto loc_837421AC;
	case 93:
		goto loc_837421B0;
	case 94:
		goto loc_837421B0;
	case 95:
		goto loc_837421B0;
	case 96:
		goto loc_837421B0;
	case 97:
		goto loc_837421B0;
	case 98:
		goto loc_837421B0;
	case 99:
		goto loc_837421B0;
	case 100:
		goto loc_837421B0;
	case 101:
		goto loc_837421B0;
	case 102:
		goto loc_837421AC;
	case 103:
		goto loc_837421AC;
	case 104:
		goto loc_837421AC;
	case 105:
		goto loc_837421AC;
	case 106:
		goto loc_837421AC;
	case 107:
		goto loc_837421AC;
	case 108:
		goto loc_837421AC;
	case 109:
		goto loc_837421B0;
	case 110:
		goto loc_837421B0;
	case 111:
		goto loc_837421B0;
	case 112:
		goto loc_837421AC;
	case 113:
		goto loc_837421B0;
	case 114:
		goto loc_8374219C;
	case 115:
		goto loc_8374219C;
	case 116:
		goto loc_8374219C;
	case 117:
		goto loc_8374219C;
	case 118:
		goto loc_8374219C;
	case 119:
		goto loc_8374216C;
	case 120:
		goto loc_83742174;
	case 121:
		goto loc_8374219C;
	case 122:
		goto loc_83742194;
	case 123:
		goto loc_83742194;
	case 124:
		goto loc_83742194;
	case 125:
		goto loc_83742194;
	case 126:
		goto loc_837421A4;
	case 127:
		goto loc_837421AC;
	case 128:
		goto loc_837421B0;
	case 129:
		goto loc_8374219C;
	case 130:
		goto loc_837421A4;
	case 131:
		goto loc_837421AC;
	case 132:
		goto loc_837421B0;
	case 133:
		goto loc_8374219C;
	case 134:
		goto loc_837421A4;
	case 135:
		goto loc_837421AC;
	case 136:
		goto loc_837421AC;
	case 137:
		goto loc_837421AC;
	case 138:
		goto loc_837421AC;
	case 139:
		goto loc_837421AC;
	case 140:
		goto loc_837421B0;
	case 141:
		goto loc_837421B0;
	case 142:
		goto loc_837421AC;
	case 143:
		goto loc_837421AC;
	case 144:
		goto loc_837421B0;
	case 145:
		goto loc_837421AC;
	case 146:
		goto loc_837421A4;
	case 147:
		goto loc_837421AC;
	case 148:
		goto loc_837421B0;
	case 149:
		goto loc_8374219C;
	case 150:
		goto loc_837421AC;
	default:
		return;
	}
	// lwz r27,8572(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8572);
	// lwz r27,8580(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8580);
	// lwz r27,8588(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8588);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8572(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8572);
	// lwz r27,8580(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8580);
	// lwz r27,8588(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8588);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8572(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8572);
	// lwz r27,8580(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8580);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8556(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8556);
	// lwz r27,8564(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8564);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8596(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8596);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8612(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8612);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
	// lwz r27,8624(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8624);
	// lwz r27,8604(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8604);
	// lwz r27,8620(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8620);
loc_8374216C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83742174:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8374217C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83742184:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8374218C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83742194:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8374219C:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_837421A4:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_837421AC:
	// li r3,10
	ctx.r3.s64 = 10;
loc_837421B0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837421B4"))) PPC_WEAK_FUNC(sub_837421B4);
PPC_FUNC_IMPL(__imp__sub_837421B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837421B8"))) PPC_WEAK_FUNC(sub_837421B8);
PPC_FUNC_IMPL(__imp__sub_837421B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837421C8"))) PPC_WEAK_FUNC(sub_837421C8);
PPC_FUNC_IMPL(__imp__sub_837421C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x837421f4
	if (cr6.eq) goto loc_837421F4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x837421f4
	if (cr6.eq) goto loc_837421F4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x837421f4
	if (cr6.eq) goto loc_837421F4;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x837421f4
	if (cr6.eq) goto loc_837421F4;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_837421F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837421FC"))) PPC_WEAK_FUNC(sub_837421FC);
PPC_FUNC_IMPL(__imp__sub_837421FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742200"))) PPC_WEAK_FUNC(sub_83742200);
PPC_FUNC_IMPL(__imp__sub_83742200) {
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
	// bl 0x83741af0
	ctx.lr = 0x83742210;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,102
	cr6.compare<int32_t>(ctx.r3.s32, 102, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,103
	cr6.compare<int32_t>(ctx.r3.s32, 103, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,104
	cr6.compare<int32_t>(ctx.r3.s32, 104, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,105
	cr6.compare<int32_t>(ctx.r3.s32, 105, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,106
	cr6.compare<int32_t>(ctx.r3.s32, 106, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,107
	cr6.compare<int32_t>(ctx.r3.s32, 107, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,108
	cr6.compare<int32_t>(ctx.r3.s32, 108, xer);
	// beq cr6,0x8374225c
	if (cr6.eq) goto loc_8374225C;
	// cmpwi cr6,r3,109
	cr6.compare<int32_t>(ctx.r3.s32, 109, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83742260
	if (!cr6.eq) goto loc_83742260;
loc_8374225C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742260:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742270"))) PPC_WEAK_FUNC(sub_83742270);
PPC_FUNC_IMPL(__imp__sub_83742270) {
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
	// bl 0x83741ee8
	ctx.lr = 0x83742280;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x837422cc
	if (cr6.eq) goto loc_837422CC;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x837422d0
	if (!cr6.eq) goto loc_837422D0;
loc_837422CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837422D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837422E0"))) PPC_WEAK_FUNC(sub_837422E0);
PPC_FUNC_IMPL(__imp__sub_837422E0) {
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
	// bl 0x83741ee8
	ctx.lr = 0x837422F0;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8374230c
	if (cr6.eq) goto loc_8374230C;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8374230c
	if (cr6.eq) goto loc_8374230C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83742310
	if (!cr6.eq) goto loc_83742310;
loc_8374230C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742310:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742320"))) PPC_WEAK_FUNC(sub_83742320);
PPC_FUNC_IMPL(__imp__sub_83742320) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x83741af0
	ctx.lr = 0x83742334;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,136
	cr6.compare<int32_t>(ctx.r3.s32, 136, xer);
	// beq cr6,0x83742360
	if (cr6.eq) goto loc_83742360;
	// cmpwi cr6,r3,140
	cr6.compare<int32_t>(ctx.r3.s32, 140, xer);
	// beq cr6,0x83742360
	if (cr6.eq) goto loc_83742360;
	// cmpwi cr6,r3,121
	cr6.compare<int32_t>(ctx.r3.s32, 121, xer);
	// beq cr6,0x83742360
	if (cr6.eq) goto loc_83742360;
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
loc_83742360:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83742270
	ctx.lr = 0x83742368;
	sub_83742270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83742384"))) PPC_WEAK_FUNC(sub_83742384);
PPC_FUNC_IMPL(__imp__sub_83742384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742388"))) PPC_WEAK_FUNC(sub_83742388);
PPC_FUNC_IMPL(__imp__sub_83742388) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x8374239C;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,31
	cr6.compare<int32_t>(ctx.r3.s32, 31, xer);
	// bgt cr6,0x837423e0
	if (cr6.gt) goto loc_837423E0;
	// beq cr6,0x83742404
	if (cr6.eq) goto loc_83742404;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bgt cr6,0x837423d8
	if (cr6.gt) goto loc_837423D8;
	// beq cr6,0x83742404
	if (cr6.eq) goto loc_83742404;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x83742404
	if (cr6.eq) goto loc_83742404;
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
loc_837423C0:
	// beq cr6,0x83742404
	if (cr6.eq) goto loc_83742404;
loc_837423C4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837423D8:
	// cmpwi cr6,r3,26
	cr6.compare<int32_t>(ctx.r3.s32, 26, xer);
	// b 0x837423c0
	goto loc_837423C0;
loc_837423E0:
	// cmpwi cr6,r3,136
	cr6.compare<int32_t>(ctx.r3.s32, 136, xer);
	// bgt cr6,0x837423fc
	if (cr6.gt) goto loc_837423FC;
	// beq cr6,0x83742404
	if (cr6.eq) goto loc_83742404;
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// beq cr6,0x83742404
	if (cr6.eq) goto loc_83742404;
	// cmpwi cr6,r3,121
	cr6.compare<int32_t>(ctx.r3.s32, 121, xer);
	// b 0x837423c0
	goto loc_837423C0;
loc_837423FC:
	// cmpwi cr6,r3,140
	cr6.compare<int32_t>(ctx.r3.s32, 140, xer);
	// bne cr6,0x837423c4
	if (!cr6.eq) goto loc_837423C4;
loc_83742404:
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

__attribute__((alias("__imp__sub_83742418"))) PPC_WEAK_FUNC(sub_83742418);
PPC_FUNC_IMPL(__imp__sub_83742418) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x8374242C;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,46
	cr6.compare<int32_t>(ctx.r3.s32, 46, xer);
	// bgt cr6,0x8374245c
	if (cr6.gt) goto loc_8374245C;
	// beq cr6,0x8374246c
	if (cr6.eq) goto loc_8374246C;
	// cmpwi cr6,r3,38
	cr6.compare<int32_t>(ctx.r3.s32, 38, xer);
	// beq cr6,0x8374246c
	if (cr6.eq) goto loc_8374246C;
	// cmpwi cr6,r3,42
	cr6.compare<int32_t>(ctx.r3.s32, 42, xer);
	// beq cr6,0x8374246c
	if (cr6.eq) goto loc_8374246C;
loc_83742448:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8374245C:
	// cmpwi cr6,r3,50
	cr6.compare<int32_t>(ctx.r3.s32, 50, xer);
	// beq cr6,0x8374246c
	if (cr6.eq) goto loc_8374246C;
	// cmpwi cr6,r3,66
	cr6.compare<int32_t>(ctx.r3.s32, 66, xer);
	// bne cr6,0x83742448
	if (!cr6.eq) goto loc_83742448;
loc_8374246C:
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

__attribute__((alias("__imp__sub_83742480"))) PPC_WEAK_FUNC(sub_83742480);
PPC_FUNC_IMPL(__imp__sub_83742480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(ctx.r11.s32, 52, xer);
	// bgt cr6,0x837424e0
	if (cr6.gt) goto loc_837424E0;
	// beq cr6,0x837424f8
	if (cr6.eq) goto loc_837424F8;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9400
	ctx.r12.s64 = ctx.r12.s64 + 9400;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_837424F8;
	case 1:
		goto loc_837424F8;
	case 2:
		goto loc_837424FC;
	case 3:
		goto loc_837424FC;
	case 4:
		goto loc_837424F8;
	case 5:
		goto loc_837424F8;
	case 6:
		goto loc_837424FC;
	case 7:
		goto loc_837424FC;
	case 8:
		goto loc_837424F8;
	case 9:
		goto loc_837424F8;
	default:
		return;
	}
	// lwz r27,9464(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9464);
	// lwz r27,9464(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9464);
	// lwz r27,9468(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9468);
	// lwz r27,9468(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9468);
	// lwz r27,9464(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9464);
	// lwz r27,9464(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9464);
	// lwz r27,9468(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9468);
	// lwz r27,9468(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9468);
	// lwz r27,9464(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9464);
	// lwz r27,9464(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 9464);
loc_837424E0:
	// cmpwi cr6,r11,68
	cr6.compare<int32_t>(ctx.r11.s32, 68, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// ble cr6,0x837424f8
	if (!cr6.gt) goto loc_837424F8;
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(ctx.r11.s32, 82, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_837424F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837424FC:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742500"))) PPC_WEAK_FUNC(sub_83742500);
PPC_FUNC_IMPL(__imp__sub_83742500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,41
	cr6.compare<int32_t>(ctx.r3.s32, 41, xer);
	// beq cr6,0x83742524
	if (cr6.eq) goto loc_83742524;
	// cmpwi cr6,r3,45
	cr6.compare<int32_t>(ctx.r3.s32, 45, xer);
	// beq cr6,0x83742524
	if (cr6.eq) goto loc_83742524;
	// cmpwi cr6,r3,49
	cr6.compare<int32_t>(ctx.r3.s32, 49, xer);
	// beq cr6,0x83742524
	if (cr6.eq) goto loc_83742524;
	// cmpwi cr6,r3,69
	cr6.compare<int32_t>(ctx.r3.s32, 69, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83742524:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374252C"))) PPC_WEAK_FUNC(sub_8374252C);
PPC_FUNC_IMPL(__imp__sub_8374252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742530"))) PPC_WEAK_FUNC(sub_83742530);
PPC_FUNC_IMPL(__imp__sub_83742530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,40
	cr6.compare<int32_t>(ctx.r3.s32, 40, xer);
	// beq cr6,0x83742554
	if (cr6.eq) goto loc_83742554;
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// beq cr6,0x83742554
	if (cr6.eq) goto loc_83742554;
	// cmpwi cr6,r3,48
	cr6.compare<int32_t>(ctx.r3.s32, 48, xer);
	// beq cr6,0x83742554
	if (cr6.eq) goto loc_83742554;
	// cmpwi cr6,r3,68
	cr6.compare<int32_t>(ctx.r3.s32, 68, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83742554:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374255C"))) PPC_WEAK_FUNC(sub_8374255C);
PPC_FUNC_IMPL(__imp__sub_8374255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742560"))) PPC_WEAK_FUNC(sub_83742560);
PPC_FUNC_IMPL(__imp__sub_83742560) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x83742574;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,63
	cr6.compare<int32_t>(ctx.r3.s32, 63, xer);
	// beq cr6,0x83742584
	if (cr6.eq) goto loc_83742584;
	// cmpwi cr6,r3,73
	cr6.compare<int32_t>(ctx.r3.s32, 73, xer);
	// bne cr6,0x83742598
	if (!cr6.eq) goto loc_83742598;
loc_83742584:
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
loc_83742598:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837425AC"))) PPC_WEAK_FUNC(sub_837425AC);
PPC_FUNC_IMPL(__imp__sub_837425AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837425B0"))) PPC_WEAK_FUNC(sub_837425B0);
PPC_FUNC_IMPL(__imp__sub_837425B0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x837425C8;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,63
	cr6.compare<int32_t>(ctx.r3.s32, 63, xer);
	// beq cr6,0x837425d8
	if (cr6.eq) goto loc_837425D8;
	// cmpwi cr6,r3,73
	cr6.compare<int32_t>(ctx.r3.s32, 73, xer);
	// bne cr6,0x837425dc
	if (!cr6.eq) goto loc_837425DC;
loc_837425D8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_837425DC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837425fc
	if (!cr6.eq) goto loc_837425FC;
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
loc_837425FC:
	// cmpwi cr6,r10,62
	cr6.compare<int32_t>(ctx.r10.s32, 62, xer);
	// beq cr6,0x83742618
	if (cr6.eq) goto loc_83742618;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// beq cr6,0x83742618
	if (cr6.eq) goto loc_83742618;
	// cmpwi cr6,r10,75
	cr6.compare<int32_t>(ctx.r10.s32, 75, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8374261c
	if (!cr6.eq) goto loc_8374261C;
loc_83742618:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8374261C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374262C"))) PPC_WEAK_FUNC(sub_8374262C);
PPC_FUNC_IMPL(__imp__sub_8374262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742630"))) PPC_WEAK_FUNC(sub_83742630);
PPC_FUNC_IMPL(__imp__sub_83742630) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x83742648;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,63
	cr6.compare<int32_t>(ctx.r3.s32, 63, xer);
	// beq cr6,0x83742658
	if (cr6.eq) goto loc_83742658;
	// cmpwi cr6,r3,73
	cr6.compare<int32_t>(ctx.r3.s32, 73, xer);
	// bne cr6,0x8374265c
	if (!cr6.eq) goto loc_8374265C;
loc_83742658:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8374265C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742680
	if (cr6.eq) goto loc_83742680;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x837425b0
	ctx.lr = 0x83742670;
	sub_837425B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742684
	if (cr6.eq) goto loc_83742684;
loc_83742680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83742684:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742694"))) PPC_WEAK_FUNC(sub_83742694);
PPC_FUNC_IMPL(__imp__sub_83742694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742698"))) PPC_WEAK_FUNC(sub_83742698);
PPC_FUNC_IMPL(__imp__sub_83742698) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x83741ee8
	ctx.lr = 0x837426AC;
	sub_83741EE8(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837426d0
	if (!cr6.eq) goto loc_837426D0;
	// li r11,1
	ctx.r11.s64 = 1;
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
loc_837426D0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x837426f0
	if (!cr6.eq) goto loc_837426F0;
	// li r11,2
	ctx.r11.s64 = 2;
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
loc_837426F0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83742710
	if (!cr6.eq) goto loc_83742710;
	// li r11,8
	ctx.r11.s64 = 8;
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
loc_83742710:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83742730
	if (!cr6.eq) goto loc_83742730;
	// li r11,5
	ctx.r11.s64 = 5;
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
loc_83742730:
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83742744
	if (!cr6.eq) goto loc_83742744;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmpwi cr6,r9,28
	cr6.compare<int32_t>(ctx.r9.s32, 28, xer);
	// b 0x837427d4
	goto loc_837427D4;
loc_83742744:
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8374277c
	if (cr6.eq) goto loc_8374277C;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x83742794
	if (!cr6.eq) goto loc_83742794;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83742388
	ctx.lr = 0x8374275C;
	sub_83742388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r9,132
	cr6.compare<int32_t>(ctx.r9.s32, 132, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// bne cr6,0x837427dc
	if (!cr6.eq) goto loc_837427DC;
loc_8374277C:
	// li r11,7
	ctx.r11.s64 = 7;
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
loc_83742794:
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x837427d0
	if (!cr6.eq) goto loc_837427D0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83742388
	ctx.lr = 0x837427A4;
	sub_83742388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
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
loc_837427D0:
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
loc_837427D4:
	// bne cr6,0x837427dc
	if (!cr6.eq) goto loc_837427DC;
	// li r11,10
	ctx.r11.s64 = 10;
loc_837427DC:
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

__attribute__((alias("__imp__sub_837427F0"))) PPC_WEAK_FUNC(sub_837427F0);
PPC_FUNC_IMPL(__imp__sub_837427F0) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8374285c
	if (cr6.eq) goto loc_8374285C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83742834
	if (cr6.eq) goto loc_83742834;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83742834
	if (cr6.eq) goto loc_83742834;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83742834
	if (cr6.eq) goto loc_83742834;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83742834
	if (cr6.eq) goto loc_83742834;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83742838
	if (!cr6.eq) goto loc_83742838;
loc_83742834:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742838:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8374285c
	if (!cr6.eq) goto loc_8374285C;
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83742860
	if (cr6.eq) goto loc_83742860;
loc_8374285C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742860:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742880
	if (cr6.eq) goto loc_83742880;
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
loc_83742880:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83741af0
	ctx.lr = 0x83742888;
	sub_83741AF0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83742200
	ctx.lr = 0x83742894;
	sub_83742200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837428dc
	if (!cr6.eq) goto loc_837428DC;
	// cmpwi cr6,r9,117
	cr6.compare<int32_t>(ctx.r9.s32, 117, xer);
	// beq cr6,0x837428b8
	if (cr6.eq) goto loc_837428B8;
	// cmpwi cr6,r9,118
	cr6.compare<int32_t>(ctx.r9.s32, 118, xer);
	// beq cr6,0x837428b8
	if (cr6.eq) goto loc_837428B8;
	// cmpwi cr6,r9,119
	cr6.compare<int32_t>(ctx.r9.s32, 119, xer);
	// bne cr6,0x837428bc
	if (!cr6.eq) goto loc_837428BC;
loc_837428B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837428BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837428dc
	if (!cr6.eq) goto loc_837428DC;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// beq cr6,0x837428dc
	if (cr6.eq) goto loc_837428DC;
	// cmpwi cr6,r9,30
	cr6.compare<int32_t>(ctx.r9.s32, 30, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x837428e0
	if (!cr6.eq) goto loc_837428E0;
loc_837428DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837428E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837428F0"))) PPC_WEAK_FUNC(sub_837428F0);
PPC_FUNC_IMPL(__imp__sub_837428F0) {
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
	// bl 0x83741af0
	ctx.lr = 0x83742904;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,84
	cr6.compare<int32_t>(ctx.r3.s32, 84, xer);
	// blt cr6,0x83742918
	if (cr6.lt) goto loc_83742918;
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8374291c
	if (!cr6.gt) goto loc_8374291C;
loc_83742918:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8374291C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742940
	if (!cr6.eq) goto loc_83742940;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83742200
	ctx.lr = 0x83742930;
	sub_83742200(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742944
	if (cr6.eq) goto loc_83742944;
loc_83742940:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742954"))) PPC_WEAK_FUNC(sub_83742954);
PPC_FUNC_IMPL(__imp__sub_83742954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742958"))) PPC_WEAK_FUNC(sub_83742958);
PPC_FUNC_IMPL(__imp__sub_83742958) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x83741ee8
	ctx.lr = 0x8374296C;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x837429bc
	if (cr6.eq) goto loc_837429BC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x837427f0
	ctx.lr = 0x8374297C;
	sub_837427F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837429bc
	if (!cr6.eq) goto loc_837429BC;
	// cmpwi cr6,r7,41
	cr6.compare<int32_t>(ctx.r7.s32, 41, xer);
	// beq cr6,0x837429a8
	if (cr6.eq) goto loc_837429A8;
	// cmpwi cr6,r7,45
	cr6.compare<int32_t>(ctx.r7.s32, 45, xer);
	// beq cr6,0x837429a8
	if (cr6.eq) goto loc_837429A8;
	// cmpwi cr6,r7,49
	cr6.compare<int32_t>(ctx.r7.s32, 49, xer);
	// beq cr6,0x837429a8
	if (cr6.eq) goto loc_837429A8;
	// cmpwi cr6,r7,69
	cr6.compare<int32_t>(ctx.r7.s32, 69, xer);
	// bne cr6,0x837429ac
	if (!cr6.eq) goto loc_837429AC;
loc_837429A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837429AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837429c0
	if (cr6.eq) goto loc_837429C0;
loc_837429BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837429C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837429D0"))) PPC_WEAK_FUNC(sub_837429D0);
PPC_FUNC_IMPL(__imp__sub_837429D0) {
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
	// bl 0x83741ee8
	ctx.lr = 0x837429E4;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x83742a24
	if (cr6.eq) goto loc_83742A24;
	// cmpwi cr6,r10,41
	cr6.compare<int32_t>(ctx.r10.s32, 41, xer);
	// beq cr6,0x83742a10
	if (cr6.eq) goto loc_83742A10;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// beq cr6,0x83742a10
	if (cr6.eq) goto loc_83742A10;
	// cmpwi cr6,r10,49
	cr6.compare<int32_t>(ctx.r10.s32, 49, xer);
	// beq cr6,0x83742a10
	if (cr6.eq) goto loc_83742A10;
	// cmpwi cr6,r10,69
	cr6.compare<int32_t>(ctx.r10.s32, 69, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83742a14
	if (!cr6.eq) goto loc_83742A14;
loc_83742A10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742a28
	if (cr6.eq) goto loc_83742A28;
loc_83742A24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742A28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742A38"))) PPC_WEAK_FUNC(sub_83742A38);
PPC_FUNC_IMPL(__imp__sub_83742A38) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x83742A50;
	sub_83741AF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,46
	cr6.compare<int32_t>(ctx.r3.s32, 46, xer);
	// bgt cr6,0x83742a74
	if (cr6.gt) goto loc_83742A74;
	// beq cr6,0x83742a84
	if (cr6.eq) goto loc_83742A84;
	// cmpwi cr6,r3,38
	cr6.compare<int32_t>(ctx.r3.s32, 38, xer);
	// beq cr6,0x83742a84
	if (cr6.eq) goto loc_83742A84;
	// cmpwi cr6,r3,42
	cr6.compare<int32_t>(ctx.r3.s32, 42, xer);
	// beq cr6,0x83742a84
	if (cr6.eq) goto loc_83742A84;
	// b 0x83742a88
	goto loc_83742A88;
loc_83742A74:
	// cmpwi cr6,r10,50
	cr6.compare<int32_t>(ctx.r10.s32, 50, xer);
	// beq cr6,0x83742a84
	if (cr6.eq) goto loc_83742A84;
	// cmpwi cr6,r10,66
	cr6.compare<int32_t>(ctx.r10.s32, 66, xer);
	// bne cr6,0x83742a88
	if (!cr6.eq) goto loc_83742A88;
loc_83742A84:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83742A88:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742aa8
	if (cr6.eq) goto loc_83742AA8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83742480
	ctx.lr = 0x83742A9C;
	sub_83742480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742aec
	if (cr6.eq) goto loc_83742AEC;
loc_83742AA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,81
	cr6.compare<int32_t>(ctx.r10.s32, 81, xer);
	// bgt cr6,0x83742ae4
	if (cr6.gt) goto loc_83742AE4;
	// cmpwi cr6,r10,72
	cr6.compare<int32_t>(ctx.r10.s32, 72, xer);
	// bge cr6,0x83742aec
	if (!cr6.lt) goto loc_83742AEC;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// blt cr6,0x83742af0
	if (cr6.lt) goto loc_83742AF0;
	// cmpwi cr6,r10,60
	cr6.compare<int32_t>(ctx.r10.s32, 60, xer);
	// ble cr6,0x83742aec
	if (!cr6.gt) goto loc_83742AEC;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// beq cr6,0x83742aec
	if (cr6.eq) goto loc_83742AEC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83742AE4:
	// cmpwi cr6,r10,83
	cr6.compare<int32_t>(ctx.r10.s32, 83, xer);
	// bne cr6,0x83742af0
	if (!cr6.eq) goto loc_83742AF0;
loc_83742AEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742AF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742B00"))) PPC_WEAK_FUNC(sub_83742B00);
PPC_FUNC_IMPL(__imp__sub_83742B00) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83742b6c
	if (cr6.eq) goto loc_83742B6C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83742b44
	if (cr6.eq) goto loc_83742B44;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83742b44
	if (cr6.eq) goto loc_83742B44;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83742b44
	if (cr6.eq) goto loc_83742B44;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83742b44
	if (cr6.eq) goto loc_83742B44;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83742b48
	if (!cr6.eq) goto loc_83742B48;
loc_83742B44:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742B48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742b6c
	if (!cr6.eq) goto loc_83742B6C;
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83742b70
	if (cr6.eq) goto loc_83742B70;
loc_83742B6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742B70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742b90
	if (cr6.eq) goto loc_83742B90;
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
loc_83742B90:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83741ee8
	ctx.lr = 0x83742B98;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bne cr6,0x83742bb8
	if (!cr6.eq) goto loc_83742BB8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x837427f0
	ctx.lr = 0x83742BA8;
	sub_837427F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742bbc
	if (cr6.eq) goto loc_83742BBC;
loc_83742BB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742BBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742BCC"))) PPC_WEAK_FUNC(sub_83742BCC);
PPC_FUNC_IMPL(__imp__sub_83742BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742BD0"))) PPC_WEAK_FUNC(sub_83742BD0);
PPC_FUNC_IMPL(__imp__sub_83742BD0) {
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
	// bl 0x83742270
	ctx.lr = 0x83742BE4;
	sub_83742270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742c14
	if (!cr6.eq) goto loc_83742C14;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83741ee8
	ctx.lr = 0x83742BF8;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83742c14
	if (cr6.eq) goto loc_83742C14;
loc_83742C00:
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
loc_83742C14:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83741ee8
	ctx.lr = 0x83742C1C;
	sub_83741EE8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83742c38
	if (cr6.eq) goto loc_83742C38;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83742c38
	if (cr6.eq) goto loc_83742C38;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83742c3c
	if (!cr6.eq) goto loc_83742C3C;
loc_83742C38:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742C3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742c00
	if (!cr6.eq) goto loc_83742C00;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742c6c
	if (!cr6.eq) goto loc_83742C6C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x837429d0
	ctx.lr = 0x83742C5C;
	sub_837429D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742c70
	if (!cr6.eq) goto loc_83742C70;
loc_83742C6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742C70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742C80"))) PPC_WEAK_FUNC(sub_83742C80);
PPC_FUNC_IMPL(__imp__sub_83742C80) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x83742a38
	ctx.lr = 0x83742C94;
	sub_83742A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742cb8
	if (!cr6.eq) goto loc_83742CB8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83742480
	ctx.lr = 0x83742CA8;
	sub_83742480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742cbc
	if (cr6.eq) goto loc_83742CBC;
loc_83742CB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742CBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742CCC"))) PPC_WEAK_FUNC(sub_83742CCC);
PPC_FUNC_IMPL(__imp__sub_83742CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742CD0"))) PPC_WEAK_FUNC(sub_83742CD0);
PPC_FUNC_IMPL(__imp__sub_83742CD0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x83742CE8;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,46
	cr6.compare<int32_t>(ctx.r3.s32, 46, xer);
	// bgt cr6,0x83742d08
	if (cr6.gt) goto loc_83742D08;
	// beq cr6,0x83742d18
	if (cr6.eq) goto loc_83742D18;
	// cmpwi cr6,r3,38
	cr6.compare<int32_t>(ctx.r3.s32, 38, xer);
	// beq cr6,0x83742d18
	if (cr6.eq) goto loc_83742D18;
	// cmpwi cr6,r3,42
	cr6.compare<int32_t>(ctx.r3.s32, 42, xer);
	// beq cr6,0x83742d18
	if (cr6.eq) goto loc_83742D18;
	// b 0x83742d1c
	goto loc_83742D1C;
loc_83742D08:
	// cmpwi cr6,r3,50
	cr6.compare<int32_t>(ctx.r3.s32, 50, xer);
	// beq cr6,0x83742d18
	if (cr6.eq) goto loc_83742D18;
	// cmpwi cr6,r3,66
	cr6.compare<int32_t>(ctx.r3.s32, 66, xer);
	// bne cr6,0x83742d1c
	if (!cr6.eq) goto loc_83742D1C;
loc_83742D18:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83742D1C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742d3c
	if (!cr6.eq) goto loc_83742D3C;
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
loc_83742D3C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83742a38
	ctx.lr = 0x83742D44;
	sub_83742A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742D60"))) PPC_WEAK_FUNC(sub_83742D60);
PPC_FUNC_IMPL(__imp__sub_83742D60) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x83741af0
	ctx.lr = 0x83742D78;
	sub_83741AF0(ctx, base);
	// cmpwi cr6,r3,46
	cr6.compare<int32_t>(ctx.r3.s32, 46, xer);
	// bgt cr6,0x83742d98
	if (cr6.gt) goto loc_83742D98;
	// beq cr6,0x83742da8
	if (cr6.eq) goto loc_83742DA8;
	// cmpwi cr6,r3,38
	cr6.compare<int32_t>(ctx.r3.s32, 38, xer);
	// beq cr6,0x83742da8
	if (cr6.eq) goto loc_83742DA8;
	// cmpwi cr6,r3,42
	cr6.compare<int32_t>(ctx.r3.s32, 42, xer);
	// beq cr6,0x83742da8
	if (cr6.eq) goto loc_83742DA8;
	// b 0x83742dac
	goto loc_83742DAC;
loc_83742D98:
	// cmpwi cr6,r3,50
	cr6.compare<int32_t>(ctx.r3.s32, 50, xer);
	// beq cr6,0x83742da8
	if (cr6.eq) goto loc_83742DA8;
	// cmpwi cr6,r3,66
	cr6.compare<int32_t>(ctx.r3.s32, 66, xer);
	// bne cr6,0x83742dac
	if (!cr6.eq) goto loc_83742DAC;
loc_83742DA8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83742DAC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742dcc
	if (!cr6.eq) goto loc_83742DCC;
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
loc_83742DCC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83742a38
	ctx.lr = 0x83742DD4;
	sub_83742A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83742DF0"))) PPC_WEAK_FUNC(sub_83742DF0);
PPC_FUNC_IMPL(__imp__sub_83742DF0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83742e5c
	if (cr6.eq) goto loc_83742E5C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83742e34
	if (cr6.eq) goto loc_83742E34;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83742e34
	if (cr6.eq) goto loc_83742E34;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83742e34
	if (cr6.eq) goto loc_83742E34;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83742e34
	if (cr6.eq) goto loc_83742E34;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83742e38
	if (!cr6.eq) goto loc_83742E38;
loc_83742E34:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742E38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742e5c
	if (!cr6.eq) goto loc_83742E5C;
	// addi r11,r7,-6
	ctx.r11.s64 = ctx.r7.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83742e60
	if (cr6.eq) goto loc_83742E60;
loc_83742E5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742E60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742ee8
	if (!cr6.eq) goto loc_83742EE8;
	// cmpwi cr6,r7,41
	cr6.compare<int32_t>(ctx.r7.s32, 41, xer);
	// beq cr6,0x83742e8c
	if (cr6.eq) goto loc_83742E8C;
	// cmpwi cr6,r7,45
	cr6.compare<int32_t>(ctx.r7.s32, 45, xer);
	// beq cr6,0x83742e8c
	if (cr6.eq) goto loc_83742E8C;
	// cmpwi cr6,r7,49
	cr6.compare<int32_t>(ctx.r7.s32, 49, xer);
	// beq cr6,0x83742e8c
	if (cr6.eq) goto loc_83742E8C;
	// cmpwi cr6,r7,69
	cr6.compare<int32_t>(ctx.r7.s32, 69, xer);
	// bne cr6,0x83742e90
	if (!cr6.eq) goto loc_83742E90;
loc_83742E8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742E90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742ee8
	if (!cr6.eq) goto loc_83742EE8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83742a38
	ctx.lr = 0x83742EA4;
	sub_83742A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742ec8
	if (!cr6.eq) goto loc_83742EC8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83742480
	ctx.lr = 0x83742EB8;
	sub_83742480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83742ecc
	if (cr6.eq) goto loc_83742ECC;
loc_83742EC8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83742ECC:
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
loc_83742EE8:
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

__attribute__((alias("__imp__sub_83742EFC"))) PPC_WEAK_FUNC(sub_83742EFC);
PPC_FUNC_IMPL(__imp__sub_83742EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742F00"))) PPC_WEAK_FUNC(sub_83742F00);
PPC_FUNC_IMPL(__imp__sub_83742F00) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x83742df0
	ctx.lr = 0x83742F14;
	sub_83742DF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83742f3c
	if (!cr6.eq) goto loc_83742F3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83742bd0
	ctx.lr = 0x83742F2C;
	sub_83742BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83742f40
	if (cr6.eq) goto loc_83742F40;
loc_83742F3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83742F40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742F50"))) PPC_WEAK_FUNC(sub_83742F50);
PPC_FUNC_IMPL(__imp__sub_83742F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742F64"))) PPC_WEAK_FUNC(sub_83742F64);
PPC_FUNC_IMPL(__imp__sub_83742F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742F68"))) PPC_WEAK_FUNC(sub_83742F68);
PPC_FUNC_IMPL(__imp__sub_83742F68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742F84"))) PPC_WEAK_FUNC(sub_83742F84);
PPC_FUNC_IMPL(__imp__sub_83742F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742F88"))) PPC_WEAK_FUNC(sub_83742F88);
PPC_FUNC_IMPL(__imp__sub_83742F88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r10,r9,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742FA4"))) PPC_WEAK_FUNC(sub_83742FA4);
PPC_FUNC_IMPL(__imp__sub_83742FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742FA8"))) PPC_WEAK_FUNC(sub_83742FA8);
PPC_FUNC_IMPL(__imp__sub_83742FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742FBC"))) PPC_WEAK_FUNC(sub_83742FBC);
PPC_FUNC_IMPL(__imp__sub_83742FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742FC0"))) PPC_WEAK_FUNC(sub_83742FC0);
PPC_FUNC_IMPL(__imp__sub_83742FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742FDC"))) PPC_WEAK_FUNC(sub_83742FDC);
PPC_FUNC_IMPL(__imp__sub_83742FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83742FE0"))) PPC_WEAK_FUNC(sub_83742FE0);
PPC_FUNC_IMPL(__imp__sub_83742FE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r10,r9,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83742FFC"))) PPC_WEAK_FUNC(sub_83742FFC);
PPC_FUNC_IMPL(__imp__sub_83742FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743000"))) PPC_WEAK_FUNC(sub_83743000);
PPC_FUNC_IMPL(__imp__sub_83743000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743014"))) PPC_WEAK_FUNC(sub_83743014);
PPC_FUNC_IMPL(__imp__sub_83743014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743018"))) PPC_WEAK_FUNC(sub_83743018);
PPC_FUNC_IMPL(__imp__sub_83743018) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743034"))) PPC_WEAK_FUNC(sub_83743034);
PPC_FUNC_IMPL(__imp__sub_83743034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743038"))) PPC_WEAK_FUNC(sub_83743038);
PPC_FUNC_IMPL(__imp__sub_83743038) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r10,r9,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743054"))) PPC_WEAK_FUNC(sub_83743054);
PPC_FUNC_IMPL(__imp__sub_83743054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743058"))) PPC_WEAK_FUNC(sub_83743058);
PPC_FUNC_IMPL(__imp__sub_83743058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374306C"))) PPC_WEAK_FUNC(sub_8374306C);
PPC_FUNC_IMPL(__imp__sub_8374306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743070"))) PPC_WEAK_FUNC(sub_83743070);
PPC_FUNC_IMPL(__imp__sub_83743070) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374308C"))) PPC_WEAK_FUNC(sub_8374308C);
PPC_FUNC_IMPL(__imp__sub_8374308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743090"))) PPC_WEAK_FUNC(sub_83743090);
PPC_FUNC_IMPL(__imp__sub_83743090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837430A4"))) PPC_WEAK_FUNC(sub_837430A4);
PPC_FUNC_IMPL(__imp__sub_837430A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837430A8"))) PPC_WEAK_FUNC(sub_837430A8);
PPC_FUNC_IMPL(__imp__sub_837430A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r10,r9,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837430C4"))) PPC_WEAK_FUNC(sub_837430C4);
PPC_FUNC_IMPL(__imp__sub_837430C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837430C8"))) PPC_WEAK_FUNC(sub_837430C8);
PPC_FUNC_IMPL(__imp__sub_837430C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837430DC"))) PPC_WEAK_FUNC(sub_837430DC);
PPC_FUNC_IMPL(__imp__sub_837430DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837430E0"))) PPC_WEAK_FUNC(sub_837430E0);
PPC_FUNC_IMPL(__imp__sub_837430E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837430FC"))) PPC_WEAK_FUNC(sub_837430FC);
PPC_FUNC_IMPL(__imp__sub_837430FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743100"))) PPC_WEAK_FUNC(sub_83743100);
PPC_FUNC_IMPL(__imp__sub_83743100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743114"))) PPC_WEAK_FUNC(sub_83743114);
PPC_FUNC_IMPL(__imp__sub_83743114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743118"))) PPC_WEAK_FUNC(sub_83743118);
PPC_FUNC_IMPL(__imp__sub_83743118) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r9,r10,18,8,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFC0000) | (ctx.r9.u64 & 0xFFFFFFFFFF03FFFF);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743134"))) PPC_WEAK_FUNC(sub_83743134);
PPC_FUNC_IMPL(__imp__sub_83743134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743138"))) PPC_WEAK_FUNC(sub_83743138);
PPC_FUNC_IMPL(__imp__sub_83743138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374314C"))) PPC_WEAK_FUNC(sub_8374314C);
PPC_FUNC_IMPL(__imp__sub_8374314C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743150"))) PPC_WEAK_FUNC(sub_83743150);
PPC_FUNC_IMPL(__imp__sub_83743150) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r9,r10,12,14,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374316C"))) PPC_WEAK_FUNC(sub_8374316C);
PPC_FUNC_IMPL(__imp__sub_8374316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743170"))) PPC_WEAK_FUNC(sub_83743170);
PPC_FUNC_IMPL(__imp__sub_83743170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743184"))) PPC_WEAK_FUNC(sub_83743184);
PPC_FUNC_IMPL(__imp__sub_83743184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743188"))) PPC_WEAK_FUNC(sub_83743188);
PPC_FUNC_IMPL(__imp__sub_83743188) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837431A4"))) PPC_WEAK_FUNC(sub_837431A4);
PPC_FUNC_IMPL(__imp__sub_837431A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837431A8"))) PPC_WEAK_FUNC(sub_837431A8);
PPC_FUNC_IMPL(__imp__sub_837431A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837431BC"))) PPC_WEAK_FUNC(sub_837431BC);
PPC_FUNC_IMPL(__imp__sub_837431BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837431C0"))) PPC_WEAK_FUNC(sub_837431C0);
PPC_FUNC_IMPL(__imp__sub_837431C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837431DC"))) PPC_WEAK_FUNC(sub_837431DC);
PPC_FUNC_IMPL(__imp__sub_837431DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837431E0"))) PPC_WEAK_FUNC(sub_837431E0);
PPC_FUNC_IMPL(__imp__sub_837431E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837431F4"))) PPC_WEAK_FUNC(sub_837431F4);
PPC_FUNC_IMPL(__imp__sub_837431F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837431F8"))) PPC_WEAK_FUNC(sub_837431F8);
PPC_FUNC_IMPL(__imp__sub_837431F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743214"))) PPC_WEAK_FUNC(sub_83743214);
PPC_FUNC_IMPL(__imp__sub_83743214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743218"))) PPC_WEAK_FUNC(sub_83743218);
PPC_FUNC_IMPL(__imp__sub_83743218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374322C"))) PPC_WEAK_FUNC(sub_8374322C);
PPC_FUNC_IMPL(__imp__sub_8374322C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743230"))) PPC_WEAK_FUNC(sub_83743230);
PPC_FUNC_IMPL(__imp__sub_83743230) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374324C"))) PPC_WEAK_FUNC(sub_8374324C);
PPC_FUNC_IMPL(__imp__sub_8374324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743250"))) PPC_WEAK_FUNC(sub_83743250);
PPC_FUNC_IMPL(__imp__sub_83743250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743264"))) PPC_WEAK_FUNC(sub_83743264);
PPC_FUNC_IMPL(__imp__sub_83743264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743268"))) PPC_WEAK_FUNC(sub_83743268);
PPC_FUNC_IMPL(__imp__sub_83743268) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743284"))) PPC_WEAK_FUNC(sub_83743284);
PPC_FUNC_IMPL(__imp__sub_83743284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743288"))) PPC_WEAK_FUNC(sub_83743288);
PPC_FUNC_IMPL(__imp__sub_83743288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374329C"))) PPC_WEAK_FUNC(sub_8374329C);
PPC_FUNC_IMPL(__imp__sub_8374329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837432A0"))) PPC_WEAK_FUNC(sub_837432A0);
PPC_FUNC_IMPL(__imp__sub_837432A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r9,r10,6,20,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF03F);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837432BC"))) PPC_WEAK_FUNC(sub_837432BC);
PPC_FUNC_IMPL(__imp__sub_837432BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837432C0"))) PPC_WEAK_FUNC(sub_837432C0);
PPC_FUNC_IMPL(__imp__sub_837432C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837432D4"))) PPC_WEAK_FUNC(sub_837432D4);
PPC_FUNC_IMPL(__imp__sub_837432D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837432D8"))) PPC_WEAK_FUNC(sub_837432D8);
PPC_FUNC_IMPL(__imp__sub_837432D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r10,r9,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837432F4"))) PPC_WEAK_FUNC(sub_837432F4);
PPC_FUNC_IMPL(__imp__sub_837432F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837432F8"))) PPC_WEAK_FUNC(sub_837432F8);
PPC_FUNC_IMPL(__imp__sub_837432F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374330C"))) PPC_WEAK_FUNC(sub_8374330C);
PPC_FUNC_IMPL(__imp__sub_8374330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743310"))) PPC_WEAK_FUNC(sub_83743310);
PPC_FUNC_IMPL(__imp__sub_83743310) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374332C"))) PPC_WEAK_FUNC(sub_8374332C);
PPC_FUNC_IMPL(__imp__sub_8374332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743330"))) PPC_WEAK_FUNC(sub_83743330);
PPC_FUNC_IMPL(__imp__sub_83743330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743344"))) PPC_WEAK_FUNC(sub_83743344);
PPC_FUNC_IMPL(__imp__sub_83743344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743348"))) PPC_WEAK_FUNC(sub_83743348);
PPC_FUNC_IMPL(__imp__sub_83743348) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743364"))) PPC_WEAK_FUNC(sub_83743364);
PPC_FUNC_IMPL(__imp__sub_83743364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743368"))) PPC_WEAK_FUNC(sub_83743368);
PPC_FUNC_IMPL(__imp__sub_83743368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374337C"))) PPC_WEAK_FUNC(sub_8374337C);
PPC_FUNC_IMPL(__imp__sub_8374337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743380"))) PPC_WEAK_FUNC(sub_83743380);
PPC_FUNC_IMPL(__imp__sub_83743380) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374339C"))) PPC_WEAK_FUNC(sub_8374339C);
PPC_FUNC_IMPL(__imp__sub_8374339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837433A0"))) PPC_WEAK_FUNC(sub_837433A0);
PPC_FUNC_IMPL(__imp__sub_837433A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837433B4"))) PPC_WEAK_FUNC(sub_837433B4);
PPC_FUNC_IMPL(__imp__sub_837433B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837433B8"))) PPC_WEAK_FUNC(sub_837433B8);
PPC_FUNC_IMPL(__imp__sub_837433B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837433D4"))) PPC_WEAK_FUNC(sub_837433D4);
PPC_FUNC_IMPL(__imp__sub_837433D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837433D8"))) PPC_WEAK_FUNC(sub_837433D8);
PPC_FUNC_IMPL(__imp__sub_837433D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837433EC"))) PPC_WEAK_FUNC(sub_837433EC);
PPC_FUNC_IMPL(__imp__sub_837433EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837433F0"))) PPC_WEAK_FUNC(sub_837433F0);
PPC_FUNC_IMPL(__imp__sub_837433F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374340C"))) PPC_WEAK_FUNC(sub_8374340C);
PPC_FUNC_IMPL(__imp__sub_8374340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743410"))) PPC_WEAK_FUNC(sub_83743410);
PPC_FUNC_IMPL(__imp__sub_83743410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743424"))) PPC_WEAK_FUNC(sub_83743424);
PPC_FUNC_IMPL(__imp__sub_83743424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743428"))) PPC_WEAK_FUNC(sub_83743428);
PPC_FUNC_IMPL(__imp__sub_83743428) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83743444"))) PPC_WEAK_FUNC(sub_83743444);
PPC_FUNC_IMPL(__imp__sub_83743444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743448"))) PPC_WEAK_FUNC(sub_83743448);
PPC_FUNC_IMPL(__imp__sub_83743448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374345C"))) PPC_WEAK_FUNC(sub_8374345C);
PPC_FUNC_IMPL(__imp__sub_8374345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743460"))) PPC_WEAK_FUNC(sub_83743460);
PPC_FUNC_IMPL(__imp__sub_83743460) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r9,r10,20,6,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374347C"))) PPC_WEAK_FUNC(sub_8374347C);
PPC_FUNC_IMPL(__imp__sub_8374347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83743480"))) PPC_WEAK_FUNC(sub_83743480);
PPC_FUNC_IMPL(__imp__sub_83743480) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

