#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830D63D4"))) PPC_WEAK_FUNC(sub_830D63D4);
PPC_FUNC_IMPL(__imp__sub_830D63D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D63D8"))) PPC_WEAK_FUNC(sub_830D63D8);
PPC_FUNC_IMPL(__imp__sub_830D63D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30576
	ctx.r9.s64 = ctx.r11.s64 + 30576;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D63EC"))) PPC_WEAK_FUNC(sub_830D63EC);
PPC_FUNC_IMPL(__imp__sub_830D63EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D63F0"))) PPC_WEAK_FUNC(sub_830D63F0);
PPC_FUNC_IMPL(__imp__sub_830D63F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30704
	ctx.r9.s64 = ctx.r11.s64 + 30704;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6404"))) PPC_WEAK_FUNC(sub_830D6404);
PPC_FUNC_IMPL(__imp__sub_830D6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6408"))) PPC_WEAK_FUNC(sub_830D6408);
PPC_FUNC_IMPL(__imp__sub_830D6408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30760
	ctx.r9.s64 = ctx.r11.s64 + 30760;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D641C"))) PPC_WEAK_FUNC(sub_830D641C);
PPC_FUNC_IMPL(__imp__sub_830D641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6420"))) PPC_WEAK_FUNC(sub_830D6420);
PPC_FUNC_IMPL(__imp__sub_830D6420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30828
	ctx.r9.s64 = ctx.r11.s64 + 30828;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6434"))) PPC_WEAK_FUNC(sub_830D6434);
PPC_FUNC_IMPL(__imp__sub_830D6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6438"))) PPC_WEAK_FUNC(sub_830D6438);
PPC_FUNC_IMPL(__imp__sub_830D6438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,30880
	ctx.r9.s64 = ctx.r11.s64 + 30880;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D644C"))) PPC_WEAK_FUNC(sub_830D644C);
PPC_FUNC_IMPL(__imp__sub_830D644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6450"))) PPC_WEAK_FUNC(sub_830D6450);
PPC_FUNC_IMPL(__imp__sub_830D6450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31032
	ctx.r9.s64 = ctx.r11.s64 + 31032;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6464"))) PPC_WEAK_FUNC(sub_830D6464);
PPC_FUNC_IMPL(__imp__sub_830D6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6468"))) PPC_WEAK_FUNC(sub_830D6468);
PPC_FUNC_IMPL(__imp__sub_830D6468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31124
	ctx.r9.s64 = ctx.r11.s64 + 31124;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D647C"))) PPC_WEAK_FUNC(sub_830D647C);
PPC_FUNC_IMPL(__imp__sub_830D647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6480"))) PPC_WEAK_FUNC(sub_830D6480);
PPC_FUNC_IMPL(__imp__sub_830D6480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31140
	ctx.r9.s64 = ctx.r11.s64 + 31140;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6494"))) PPC_WEAK_FUNC(sub_830D6494);
PPC_FUNC_IMPL(__imp__sub_830D6494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6498"))) PPC_WEAK_FUNC(sub_830D6498);
PPC_FUNC_IMPL(__imp__sub_830D6498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31180
	ctx.r9.s64 = ctx.r11.s64 + 31180;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D64AC"))) PPC_WEAK_FUNC(sub_830D64AC);
PPC_FUNC_IMPL(__imp__sub_830D64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D64B0"))) PPC_WEAK_FUNC(sub_830D64B0);
PPC_FUNC_IMPL(__imp__sub_830D64B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31200
	ctx.r9.s64 = ctx.r11.s64 + 31200;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D64C4"))) PPC_WEAK_FUNC(sub_830D64C4);
PPC_FUNC_IMPL(__imp__sub_830D64C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D64C8"))) PPC_WEAK_FUNC(sub_830D64C8);
PPC_FUNC_IMPL(__imp__sub_830D64C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31228
	ctx.r9.s64 = ctx.r11.s64 + 31228;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D64DC"))) PPC_WEAK_FUNC(sub_830D64DC);
PPC_FUNC_IMPL(__imp__sub_830D64DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D64E0"))) PPC_WEAK_FUNC(sub_830D64E0);
PPC_FUNC_IMPL(__imp__sub_830D64E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31276
	ctx.r9.s64 = ctx.r11.s64 + 31276;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D64F4"))) PPC_WEAK_FUNC(sub_830D64F4);
PPC_FUNC_IMPL(__imp__sub_830D64F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D64F8"))) PPC_WEAK_FUNC(sub_830D64F8);
PPC_FUNC_IMPL(__imp__sub_830D64F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31328
	ctx.r9.s64 = ctx.r11.s64 + 31328;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D650C"))) PPC_WEAK_FUNC(sub_830D650C);
PPC_FUNC_IMPL(__imp__sub_830D650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6510"))) PPC_WEAK_FUNC(sub_830D6510);
PPC_FUNC_IMPL(__imp__sub_830D6510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31380
	ctx.r9.s64 = ctx.r11.s64 + 31380;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6524"))) PPC_WEAK_FUNC(sub_830D6524);
PPC_FUNC_IMPL(__imp__sub_830D6524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6528"))) PPC_WEAK_FUNC(sub_830D6528);
PPC_FUNC_IMPL(__imp__sub_830D6528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31416
	ctx.r9.s64 = ctx.r11.s64 + 31416;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D653C"))) PPC_WEAK_FUNC(sub_830D653C);
PPC_FUNC_IMPL(__imp__sub_830D653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6540"))) PPC_WEAK_FUNC(sub_830D6540);
PPC_FUNC_IMPL(__imp__sub_830D6540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31428
	ctx.r9.s64 = ctx.r11.s64 + 31428;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6554"))) PPC_WEAK_FUNC(sub_830D6554);
PPC_FUNC_IMPL(__imp__sub_830D6554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6558"))) PPC_WEAK_FUNC(sub_830D6558);
PPC_FUNC_IMPL(__imp__sub_830D6558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31440
	ctx.r9.s64 = ctx.r11.s64 + 31440;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D656C"))) PPC_WEAK_FUNC(sub_830D656C);
PPC_FUNC_IMPL(__imp__sub_830D656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6570"))) PPC_WEAK_FUNC(sub_830D6570);
PPC_FUNC_IMPL(__imp__sub_830D6570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31476
	ctx.r9.s64 = ctx.r11.s64 + 31476;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6584"))) PPC_WEAK_FUNC(sub_830D6584);
PPC_FUNC_IMPL(__imp__sub_830D6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6588"))) PPC_WEAK_FUNC(sub_830D6588);
PPC_FUNC_IMPL(__imp__sub_830D6588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31496
	ctx.r9.s64 = ctx.r11.s64 + 31496;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D659C"))) PPC_WEAK_FUNC(sub_830D659C);
PPC_FUNC_IMPL(__imp__sub_830D659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D65A0"))) PPC_WEAK_FUNC(sub_830D65A0);
PPC_FUNC_IMPL(__imp__sub_830D65A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31520
	ctx.r9.s64 = ctx.r11.s64 + 31520;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D65B4"))) PPC_WEAK_FUNC(sub_830D65B4);
PPC_FUNC_IMPL(__imp__sub_830D65B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D65B8"))) PPC_WEAK_FUNC(sub_830D65B8);
PPC_FUNC_IMPL(__imp__sub_830D65B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31556
	ctx.r9.s64 = ctx.r11.s64 + 31556;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D65CC"))) PPC_WEAK_FUNC(sub_830D65CC);
PPC_FUNC_IMPL(__imp__sub_830D65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D65D0"))) PPC_WEAK_FUNC(sub_830D65D0);
PPC_FUNC_IMPL(__imp__sub_830D65D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31572
	ctx.r9.s64 = ctx.r11.s64 + 31572;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D65E4"))) PPC_WEAK_FUNC(sub_830D65E4);
PPC_FUNC_IMPL(__imp__sub_830D65E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D65E8"))) PPC_WEAK_FUNC(sub_830D65E8);
PPC_FUNC_IMPL(__imp__sub_830D65E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31592
	ctx.r9.s64 = ctx.r11.s64 + 31592;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D65FC"))) PPC_WEAK_FUNC(sub_830D65FC);
PPC_FUNC_IMPL(__imp__sub_830D65FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6600"))) PPC_WEAK_FUNC(sub_830D6600);
PPC_FUNC_IMPL(__imp__sub_830D6600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31676
	ctx.r9.s64 = ctx.r11.s64 + 31676;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6614"))) PPC_WEAK_FUNC(sub_830D6614);
PPC_FUNC_IMPL(__imp__sub_830D6614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6618"))) PPC_WEAK_FUNC(sub_830D6618);
PPC_FUNC_IMPL(__imp__sub_830D6618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31720
	ctx.r9.s64 = ctx.r11.s64 + 31720;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D662C"))) PPC_WEAK_FUNC(sub_830D662C);
PPC_FUNC_IMPL(__imp__sub_830D662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6630"))) PPC_WEAK_FUNC(sub_830D6630);
PPC_FUNC_IMPL(__imp__sub_830D6630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31796
	ctx.r9.s64 = ctx.r11.s64 + 31796;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6644"))) PPC_WEAK_FUNC(sub_830D6644);
PPC_FUNC_IMPL(__imp__sub_830D6644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6648"))) PPC_WEAK_FUNC(sub_830D6648);
PPC_FUNC_IMPL(__imp__sub_830D6648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31848
	ctx.r9.s64 = ctx.r11.s64 + 31848;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D665C"))) PPC_WEAK_FUNC(sub_830D665C);
PPC_FUNC_IMPL(__imp__sub_830D665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6660"))) PPC_WEAK_FUNC(sub_830D6660);
PPC_FUNC_IMPL(__imp__sub_830D6660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31920
	ctx.r9.s64 = ctx.r11.s64 + 31920;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6674"))) PPC_WEAK_FUNC(sub_830D6674);
PPC_FUNC_IMPL(__imp__sub_830D6674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6678"))) PPC_WEAK_FUNC(sub_830D6678);
PPC_FUNC_IMPL(__imp__sub_830D6678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31964
	ctx.r9.s64 = ctx.r11.s64 + 31964;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D668C"))) PPC_WEAK_FUNC(sub_830D668C);
PPC_FUNC_IMPL(__imp__sub_830D668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6690"))) PPC_WEAK_FUNC(sub_830D6690);
PPC_FUNC_IMPL(__imp__sub_830D6690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31988
	ctx.r9.s64 = ctx.r11.s64 + 31988;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D66A4"))) PPC_WEAK_FUNC(sub_830D66A4);
PPC_FUNC_IMPL(__imp__sub_830D66A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D66A8"))) PPC_WEAK_FUNC(sub_830D66A8);
PPC_FUNC_IMPL(__imp__sub_830D66A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32008
	ctx.r9.s64 = ctx.r11.s64 + 32008;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D66BC"))) PPC_WEAK_FUNC(sub_830D66BC);
PPC_FUNC_IMPL(__imp__sub_830D66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D66C0"))) PPC_WEAK_FUNC(sub_830D66C0);
PPC_FUNC_IMPL(__imp__sub_830D66C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32028
	ctx.r9.s64 = ctx.r11.s64 + 32028;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D66D4"))) PPC_WEAK_FUNC(sub_830D66D4);
PPC_FUNC_IMPL(__imp__sub_830D66D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D66D8"))) PPC_WEAK_FUNC(sub_830D66D8);
PPC_FUNC_IMPL(__imp__sub_830D66D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32056
	ctx.r9.s64 = ctx.r11.s64 + 32056;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D66EC"))) PPC_WEAK_FUNC(sub_830D66EC);
PPC_FUNC_IMPL(__imp__sub_830D66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D66F0"))) PPC_WEAK_FUNC(sub_830D66F0);
PPC_FUNC_IMPL(__imp__sub_830D66F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32120
	ctx.r9.s64 = ctx.r11.s64 + 32120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6704"))) PPC_WEAK_FUNC(sub_830D6704);
PPC_FUNC_IMPL(__imp__sub_830D6704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6708"))) PPC_WEAK_FUNC(sub_830D6708);
PPC_FUNC_IMPL(__imp__sub_830D6708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32176
	ctx.r9.s64 = ctx.r11.s64 + 32176;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D671C"))) PPC_WEAK_FUNC(sub_830D671C);
PPC_FUNC_IMPL(__imp__sub_830D671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6720"))) PPC_WEAK_FUNC(sub_830D6720);
PPC_FUNC_IMPL(__imp__sub_830D6720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32316
	ctx.r9.s64 = ctx.r11.s64 + 32316;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6734"))) PPC_WEAK_FUNC(sub_830D6734);
PPC_FUNC_IMPL(__imp__sub_830D6734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6738"))) PPC_WEAK_FUNC(sub_830D6738);
PPC_FUNC_IMPL(__imp__sub_830D6738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32324
	ctx.r9.s64 = ctx.r11.s64 + 32324;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D674C"))) PPC_WEAK_FUNC(sub_830D674C);
PPC_FUNC_IMPL(__imp__sub_830D674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6750"))) PPC_WEAK_FUNC(sub_830D6750);
PPC_FUNC_IMPL(__imp__sub_830D6750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32348
	ctx.r9.s64 = ctx.r11.s64 + 32348;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6764"))) PPC_WEAK_FUNC(sub_830D6764);
PPC_FUNC_IMPL(__imp__sub_830D6764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6768"))) PPC_WEAK_FUNC(sub_830D6768);
PPC_FUNC_IMPL(__imp__sub_830D6768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32400
	ctx.r9.s64 = ctx.r11.s64 + 32400;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D677C"))) PPC_WEAK_FUNC(sub_830D677C);
PPC_FUNC_IMPL(__imp__sub_830D677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6780"))) PPC_WEAK_FUNC(sub_830D6780);
PPC_FUNC_IMPL(__imp__sub_830D6780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32468
	ctx.r9.s64 = ctx.r11.s64 + 32468;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6794"))) PPC_WEAK_FUNC(sub_830D6794);
PPC_FUNC_IMPL(__imp__sub_830D6794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6798"))) PPC_WEAK_FUNC(sub_830D6798);
PPC_FUNC_IMPL(__imp__sub_830D6798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32500
	ctx.r9.s64 = ctx.r11.s64 + 32500;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D67AC"))) PPC_WEAK_FUNC(sub_830D67AC);
PPC_FUNC_IMPL(__imp__sub_830D67AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D67B0"))) PPC_WEAK_FUNC(sub_830D67B0);
PPC_FUNC_IMPL(__imp__sub_830D67B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32560
	ctx.r9.s64 = ctx.r11.s64 + 32560;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D67C4"))) PPC_WEAK_FUNC(sub_830D67C4);
PPC_FUNC_IMPL(__imp__sub_830D67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D67C8"))) PPC_WEAK_FUNC(sub_830D67C8);
PPC_FUNC_IMPL(__imp__sub_830D67C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32608
	ctx.r9.s64 = ctx.r11.s64 + 32608;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D67DC"))) PPC_WEAK_FUNC(sub_830D67DC);
PPC_FUNC_IMPL(__imp__sub_830D67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D67E0"))) PPC_WEAK_FUNC(sub_830D67E0);
PPC_FUNC_IMPL(__imp__sub_830D67E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32648
	ctx.r9.s64 = ctx.r11.s64 + 32648;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D67F4"))) PPC_WEAK_FUNC(sub_830D67F4);
PPC_FUNC_IMPL(__imp__sub_830D67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D67F8"))) PPC_WEAK_FUNC(sub_830D67F8);
PPC_FUNC_IMPL(__imp__sub_830D67F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,32704
	ctx.r9.s64 = ctx.r11.s64 + 32704;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D680C"))) PPC_WEAK_FUNC(sub_830D680C);
PPC_FUNC_IMPL(__imp__sub_830D680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6810"))) PPC_WEAK_FUNC(sub_830D6810);
PPC_FUNC_IMPL(__imp__sub_830D6810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32716
	ctx.r9.s64 = ctx.r11.s64 + -32716;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6824"))) PPC_WEAK_FUNC(sub_830D6824);
PPC_FUNC_IMPL(__imp__sub_830D6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6828"))) PPC_WEAK_FUNC(sub_830D6828);
PPC_FUNC_IMPL(__imp__sub_830D6828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32696
	ctx.r9.s64 = ctx.r11.s64 + -32696;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D683C"))) PPC_WEAK_FUNC(sub_830D683C);
PPC_FUNC_IMPL(__imp__sub_830D683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6840"))) PPC_WEAK_FUNC(sub_830D6840);
PPC_FUNC_IMPL(__imp__sub_830D6840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32596
	ctx.r9.s64 = ctx.r11.s64 + -32596;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6854"))) PPC_WEAK_FUNC(sub_830D6854);
PPC_FUNC_IMPL(__imp__sub_830D6854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6858"))) PPC_WEAK_FUNC(sub_830D6858);
PPC_FUNC_IMPL(__imp__sub_830D6858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32588
	ctx.r9.s64 = ctx.r11.s64 + -32588;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D686C"))) PPC_WEAK_FUNC(sub_830D686C);
PPC_FUNC_IMPL(__imp__sub_830D686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6870"))) PPC_WEAK_FUNC(sub_830D6870);
PPC_FUNC_IMPL(__imp__sub_830D6870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32528
	ctx.r9.s64 = ctx.r11.s64 + -32528;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6884"))) PPC_WEAK_FUNC(sub_830D6884);
PPC_FUNC_IMPL(__imp__sub_830D6884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6888"))) PPC_WEAK_FUNC(sub_830D6888);
PPC_FUNC_IMPL(__imp__sub_830D6888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32476
	ctx.r9.s64 = ctx.r11.s64 + -32476;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D689C"))) PPC_WEAK_FUNC(sub_830D689C);
PPC_FUNC_IMPL(__imp__sub_830D689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D68A0"))) PPC_WEAK_FUNC(sub_830D68A0);
PPC_FUNC_IMPL(__imp__sub_830D68A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32456
	ctx.r9.s64 = ctx.r11.s64 + -32456;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D68B4"))) PPC_WEAK_FUNC(sub_830D68B4);
PPC_FUNC_IMPL(__imp__sub_830D68B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D68B8"))) PPC_WEAK_FUNC(sub_830D68B8);
PPC_FUNC_IMPL(__imp__sub_830D68B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32364
	ctx.r9.s64 = ctx.r11.s64 + -32364;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D68CC"))) PPC_WEAK_FUNC(sub_830D68CC);
PPC_FUNC_IMPL(__imp__sub_830D68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D68D0"))) PPC_WEAK_FUNC(sub_830D68D0);
PPC_FUNC_IMPL(__imp__sub_830D68D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32352
	ctx.r9.s64 = ctx.r11.s64 + -32352;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D68E4"))) PPC_WEAK_FUNC(sub_830D68E4);
PPC_FUNC_IMPL(__imp__sub_830D68E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D68E8"))) PPC_WEAK_FUNC(sub_830D68E8);
PPC_FUNC_IMPL(__imp__sub_830D68E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32312
	ctx.r9.s64 = ctx.r11.s64 + -32312;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D68FC"))) PPC_WEAK_FUNC(sub_830D68FC);
PPC_FUNC_IMPL(__imp__sub_830D68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6900"))) PPC_WEAK_FUNC(sub_830D6900);
PPC_FUNC_IMPL(__imp__sub_830D6900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32268
	ctx.r9.s64 = ctx.r11.s64 + -32268;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6914"))) PPC_WEAK_FUNC(sub_830D6914);
PPC_FUNC_IMPL(__imp__sub_830D6914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6918"))) PPC_WEAK_FUNC(sub_830D6918);
PPC_FUNC_IMPL(__imp__sub_830D6918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32208
	ctx.r9.s64 = ctx.r11.s64 + -32208;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D692C"))) PPC_WEAK_FUNC(sub_830D692C);
PPC_FUNC_IMPL(__imp__sub_830D692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6930"))) PPC_WEAK_FUNC(sub_830D6930);
PPC_FUNC_IMPL(__imp__sub_830D6930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32192
	ctx.r9.s64 = ctx.r11.s64 + -32192;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6944"))) PPC_WEAK_FUNC(sub_830D6944);
PPC_FUNC_IMPL(__imp__sub_830D6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6948"))) PPC_WEAK_FUNC(sub_830D6948);
PPC_FUNC_IMPL(__imp__sub_830D6948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32184
	ctx.r9.s64 = ctx.r11.s64 + -32184;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D695C"))) PPC_WEAK_FUNC(sub_830D695C);
PPC_FUNC_IMPL(__imp__sub_830D695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6960"))) PPC_WEAK_FUNC(sub_830D6960);
PPC_FUNC_IMPL(__imp__sub_830D6960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32092
	ctx.r9.s64 = ctx.r11.s64 + -32092;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6974"))) PPC_WEAK_FUNC(sub_830D6974);
PPC_FUNC_IMPL(__imp__sub_830D6974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6978"))) PPC_WEAK_FUNC(sub_830D6978);
PPC_FUNC_IMPL(__imp__sub_830D6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32080
	ctx.r9.s64 = ctx.r11.s64 + -32080;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D698C"))) PPC_WEAK_FUNC(sub_830D698C);
PPC_FUNC_IMPL(__imp__sub_830D698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6990"))) PPC_WEAK_FUNC(sub_830D6990);
PPC_FUNC_IMPL(__imp__sub_830D6990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32044
	ctx.r9.s64 = ctx.r11.s64 + -32044;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D69A4"))) PPC_WEAK_FUNC(sub_830D69A4);
PPC_FUNC_IMPL(__imp__sub_830D69A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D69A8"))) PPC_WEAK_FUNC(sub_830D69A8);
PPC_FUNC_IMPL(__imp__sub_830D69A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31984
	ctx.r9.s64 = ctx.r11.s64 + -31984;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D69BC"))) PPC_WEAK_FUNC(sub_830D69BC);
PPC_FUNC_IMPL(__imp__sub_830D69BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D69C0"))) PPC_WEAK_FUNC(sub_830D69C0);
PPC_FUNC_IMPL(__imp__sub_830D69C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31916
	ctx.r9.s64 = ctx.r11.s64 + -31916;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D69D4"))) PPC_WEAK_FUNC(sub_830D69D4);
PPC_FUNC_IMPL(__imp__sub_830D69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D69D8"))) PPC_WEAK_FUNC(sub_830D69D8);
PPC_FUNC_IMPL(__imp__sub_830D69D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31888
	ctx.r9.s64 = ctx.r11.s64 + -31888;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D69EC"))) PPC_WEAK_FUNC(sub_830D69EC);
PPC_FUNC_IMPL(__imp__sub_830D69EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D69F0"))) PPC_WEAK_FUNC(sub_830D69F0);
PPC_FUNC_IMPL(__imp__sub_830D69F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31816
	ctx.r9.s64 = ctx.r11.s64 + -31816;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A04"))) PPC_WEAK_FUNC(sub_830D6A04);
PPC_FUNC_IMPL(__imp__sub_830D6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A08"))) PPC_WEAK_FUNC(sub_830D6A08);
PPC_FUNC_IMPL(__imp__sub_830D6A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31784
	ctx.r9.s64 = ctx.r11.s64 + -31784;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A1C"))) PPC_WEAK_FUNC(sub_830D6A1C);
PPC_FUNC_IMPL(__imp__sub_830D6A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A20"))) PPC_WEAK_FUNC(sub_830D6A20);
PPC_FUNC_IMPL(__imp__sub_830D6A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31648
	ctx.r9.s64 = ctx.r11.s64 + -31648;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A34"))) PPC_WEAK_FUNC(sub_830D6A34);
PPC_FUNC_IMPL(__imp__sub_830D6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A38"))) PPC_WEAK_FUNC(sub_830D6A38);
PPC_FUNC_IMPL(__imp__sub_830D6A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31572
	ctx.r9.s64 = ctx.r11.s64 + -31572;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A4C"))) PPC_WEAK_FUNC(sub_830D6A4C);
PPC_FUNC_IMPL(__imp__sub_830D6A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A50"))) PPC_WEAK_FUNC(sub_830D6A50);
PPC_FUNC_IMPL(__imp__sub_830D6A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31564
	ctx.r9.s64 = ctx.r11.s64 + -31564;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A64"))) PPC_WEAK_FUNC(sub_830D6A64);
PPC_FUNC_IMPL(__imp__sub_830D6A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A68"))) PPC_WEAK_FUNC(sub_830D6A68);
PPC_FUNC_IMPL(__imp__sub_830D6A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31540
	ctx.r9.s64 = ctx.r11.s64 + -31540;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A7C"))) PPC_WEAK_FUNC(sub_830D6A7C);
PPC_FUNC_IMPL(__imp__sub_830D6A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A80"))) PPC_WEAK_FUNC(sub_830D6A80);
PPC_FUNC_IMPL(__imp__sub_830D6A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31504
	ctx.r9.s64 = ctx.r11.s64 + -31504;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6A94"))) PPC_WEAK_FUNC(sub_830D6A94);
PPC_FUNC_IMPL(__imp__sub_830D6A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6A98"))) PPC_WEAK_FUNC(sub_830D6A98);
PPC_FUNC_IMPL(__imp__sub_830D6A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31484
	ctx.r9.s64 = ctx.r11.s64 + -31484;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6AAC"))) PPC_WEAK_FUNC(sub_830D6AAC);
PPC_FUNC_IMPL(__imp__sub_830D6AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6AB0"))) PPC_WEAK_FUNC(sub_830D6AB0);
PPC_FUNC_IMPL(__imp__sub_830D6AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31480
	ctx.r9.s64 = ctx.r11.s64 + -31480;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6AC4"))) PPC_WEAK_FUNC(sub_830D6AC4);
PPC_FUNC_IMPL(__imp__sub_830D6AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6AC8"))) PPC_WEAK_FUNC(sub_830D6AC8);
PPC_FUNC_IMPL(__imp__sub_830D6AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31468
	ctx.r9.s64 = ctx.r11.s64 + -31468;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6ADC"))) PPC_WEAK_FUNC(sub_830D6ADC);
PPC_FUNC_IMPL(__imp__sub_830D6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6AE0"))) PPC_WEAK_FUNC(sub_830D6AE0);
PPC_FUNC_IMPL(__imp__sub_830D6AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31412
	ctx.r9.s64 = ctx.r11.s64 + -31412;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6AF4"))) PPC_WEAK_FUNC(sub_830D6AF4);
PPC_FUNC_IMPL(__imp__sub_830D6AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6AF8"))) PPC_WEAK_FUNC(sub_830D6AF8);
PPC_FUNC_IMPL(__imp__sub_830D6AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31384
	ctx.r9.s64 = ctx.r11.s64 + -31384;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B0C"))) PPC_WEAK_FUNC(sub_830D6B0C);
PPC_FUNC_IMPL(__imp__sub_830D6B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6B10"))) PPC_WEAK_FUNC(sub_830D6B10);
PPC_FUNC_IMPL(__imp__sub_830D6B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31372
	ctx.r9.s64 = ctx.r11.s64 + -31372;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B24"))) PPC_WEAK_FUNC(sub_830D6B24);
PPC_FUNC_IMPL(__imp__sub_830D6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6B28"))) PPC_WEAK_FUNC(sub_830D6B28);
PPC_FUNC_IMPL(__imp__sub_830D6B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31364
	ctx.r9.s64 = ctx.r11.s64 + -31364;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B3C"))) PPC_WEAK_FUNC(sub_830D6B3C);
PPC_FUNC_IMPL(__imp__sub_830D6B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6B40"))) PPC_WEAK_FUNC(sub_830D6B40);
PPC_FUNC_IMPL(__imp__sub_830D6B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31336
	ctx.r9.s64 = ctx.r11.s64 + -31336;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B54"))) PPC_WEAK_FUNC(sub_830D6B54);
PPC_FUNC_IMPL(__imp__sub_830D6B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6B58"))) PPC_WEAK_FUNC(sub_830D6B58);
PPC_FUNC_IMPL(__imp__sub_830D6B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31276
	ctx.r9.s64 = ctx.r11.s64 + -31276;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B6C"))) PPC_WEAK_FUNC(sub_830D6B6C);
PPC_FUNC_IMPL(__imp__sub_830D6B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6B70"))) PPC_WEAK_FUNC(sub_830D6B70);
PPC_FUNC_IMPL(__imp__sub_830D6B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31268
	ctx.r9.s64 = ctx.r11.s64 + -31268;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B84"))) PPC_WEAK_FUNC(sub_830D6B84);
PPC_FUNC_IMPL(__imp__sub_830D6B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6B88"))) PPC_WEAK_FUNC(sub_830D6B88);
PPC_FUNC_IMPL(__imp__sub_830D6B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31244
	ctx.r9.s64 = ctx.r11.s64 + -31244;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6B9C"))) PPC_WEAK_FUNC(sub_830D6B9C);
PPC_FUNC_IMPL(__imp__sub_830D6B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6BA0"))) PPC_WEAK_FUNC(sub_830D6BA0);
PPC_FUNC_IMPL(__imp__sub_830D6BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,37
	cr6.compare<int32_t>(ctx.r3.s32, 37, xer);
	// blt cr6,0x830d6bb0
	if (cr6.lt) goto loc_830D6BB0;
	// li r3,58
	ctx.r3.s64 = 58;
	// blr 
	return;
loc_830D6BB0:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19808
	ctx.r9.s64 = ctx.r11.s64 + 19808;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6BC4"))) PPC_WEAK_FUNC(sub_830D6BC4);
PPC_FUNC_IMPL(__imp__sub_830D6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6BC8"))) PPC_WEAK_FUNC(sub_830D6BC8);
PPC_FUNC_IMPL(__imp__sub_830D6BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830D6BD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x830d6ddc
	if (!cr6.lt) goto loc_830D6DDC;
	// cmpwi cr6,r6,37
	cr6.compare<int32_t>(ctx.r6.s32, 37, xer);
	// bge cr6,0x830d6ddc
	if (!cr6.lt) goto loc_830D6DDC;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bge cr6,0x830d6ddc
	if (!cr6.lt) goto loc_830D6DDC;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19808
	ctx.r9.s64 = ctx.r11.s64 + 19808;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r6,26
	cr6.compare<int32_t>(ctx.r6.s32, 26, xer);
	// lwzx r26,r10,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r26,r4
	ctx.r8.u64 = ctx.r26.u64 + ctx.r4.u64;
	// lbz r27,8(r8)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// bne cr6,0x830d6c20
	if (!cr6.eq) goto loc_830D6C20;
	// li r29,1
	ctx.r29.s64 = 1;
loc_830D6C20:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x8291b578
	ctx.lr = 0x830D6C30;
	sub_8291B578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d6de0
	if (cr6.eq) goto loc_830D6DE0;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x830d6d3c
	if (cr6.eq) goto loc_830D6D3C;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x830d6d3c
	if (cr6.eq) goto loc_830D6D3C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d6c78
	if (cr6.eq) goto loc_830D6C78;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// bne cr6,0x830d6de0
	if (!cr6.eq) goto loc_830D6DE0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D6C78:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x830d6ce4
	if (!cr6.eq) goto loc_830D6CE4;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(ctx.r31.s32, 28, xer);
	// bne cr6,0x830d6ca8
	if (!cr6.eq) goto loc_830D6CA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-28132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28132);
	ctx.f0.f64 = double(temp.f32);
	// b 0x830d6cc8
	goto loc_830D6CC8;
loc_830D6CA8:
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,21712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_830D6CC8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x830d6cd8
	if (!cr6.lt) goto loc_830D6CD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D6CD8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D6CE4:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830d6de0
	if (!cr6.eq) goto loc_830D6DE0;
	// cmpwi cr6,r31,28
	cr6.compare<int32_t>(ctx.r31.s32, 28, xer);
	// bne cr6,0x830d6d00
	if (!cr6.eq) goto loc_830D6D00;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lfs f0,19956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19956);
	ctx.f0.f64 = double(temp.f32);
	// b 0x830d6d20
	goto loc_830D6D20;
loc_830D6D00:
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f0,-11352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11352);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_830D6D20:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x830d6cd8
	if (!cr6.lt) goto loc_830D6CD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D6D3C:
	// addi r10,r30,-3
	ctx.r10.s64 = ctx.r30.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mulli r28,r28,11
	ctx.r28.s64 = ctx.r28.s64 * 11;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_830D6D58:
	// add. r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x830d6d6c
	if (cr0.lt) goto loc_830D6D6C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d6d70
	if (cr6.lt) goto loc_830D6D70;
loc_830D6D6C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D6D70:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d6dbc
	if (cr6.eq) goto loc_830D6DBC;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x830D6D84;
	sub_82A0C7B0(ctx, base);
	// bl 0x8355a178
	ctx.lr = 0x830D6D88;
	sub_8355A178(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lbzx r11,r3,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x830d6da8
	if (!cr6.eq) goto loc_830D6DA8;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_830D6DA8:
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d6dc8
	if (!cr6.eq) goto loc_830D6DC8;
loc_830D6DBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x830d6d58
	if (cr6.lt) goto loc_830D6D58;
loc_830D6DC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D6DDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D6DE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D6DE8"))) PPC_WEAK_FUNC(sub_830D6DE8);
PPC_FUNC_IMPL(__imp__sub_830D6DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D6DF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830d6e18
	if (cr6.lt) goto loc_830D6E18;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d6e1c
	if (cr6.lt) goto loc_830D6E1C;
loc_830D6E18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D6E1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d6ea4
	if (cr6.eq) goto loc_830D6EA4;
	// cmpwi cr6,r29,37
	cr6.compare<int32_t>(ctx.r29.s32, 37, xer);
	// bge cr6,0x830d6ea4
	if (!cr6.lt) goto loc_830D6EA4;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// bge cr6,0x830d6ea4
	if (!cr6.lt) goto loc_830D6EA4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x830d6e48
	if (!cr6.lt) goto loc_830D6E48;
loc_830D6E40:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830d6e68
	goto loc_830D6E68;
loc_830D6E48:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x830d6e40
	if (cr6.lt) goto loc_830D6E40;
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
loc_830D6E68:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D6E78;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830D6E80;
	sub_82A164C8(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830D6E84;
	sub_83530640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830d6bc8
	ctx.lr = 0x830D6E9C;
	sub_830D6BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D6EA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D6EB0"))) PPC_WEAK_FUNC(sub_830D6EB0);
PPC_FUNC_IMPL(__imp__sub_830D6EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// blt cr6,0x830d6ec0
	if (cr6.lt) goto loc_830D6EC0;
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_830D6EC0:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19960
	ctx.r9.s64 = ctx.r11.s64 + 19960;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D6ED4"))) PPC_WEAK_FUNC(sub_830D6ED4);
PPC_FUNC_IMPL(__imp__sub_830D6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6ED8"))) PPC_WEAK_FUNC(sub_830D6ED8);
PPC_FUNC_IMPL(__imp__sub_830D6ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D6EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x830D6EF8;
	sub_82A2B4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830d6f10
	if (cr6.lt) goto loc_830D6F10;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d6f14
	if (cr6.lt) goto loc_830D6F14;
loc_830D6F10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D6F14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d6f2c
	if (!cr6.eq) goto loc_830D6F2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D6F2C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830D6F3C;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bge cr6,0x830d6f74
	if (!cr6.lt) goto loc_830D6F74;
loc_830D6F60:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D6F74:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x830d6f60
	if (cr6.lt) goto loc_830D6F60;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
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
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D6FA4"))) PPC_WEAK_FUNC(sub_830D6FA4);
PPC_FUNC_IMPL(__imp__sub_830D6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D6FA8"))) PPC_WEAK_FUNC(sub_830D6FA8);
PPC_FUNC_IMPL(__imp__sub_830D6FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D6FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830d6fd4
	if (cr6.lt) goto loc_830D6FD4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d6fd8
	if (cr6.lt) goto loc_830D6FD8;
loc_830D6FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D6FD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d6ff0
	if (!cr6.eq) goto loc_830D6FF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D6FF0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830D7000;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bge cr6,0x830d7038
	if (!cr6.lt) goto loc_830D7038;
loc_830D7024:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D7038:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x830d7024
	if (cr6.lt) goto loc_830D7024;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
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
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7068"))) PPC_WEAK_FUNC(sub_830D7068);
PPC_FUNC_IMPL(__imp__sub_830D7068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830a9ff0
	sub_830A9FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7074"))) PPC_WEAK_FUNC(sub_830D7074);
PPC_FUNC_IMPL(__imp__sub_830D7074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D7078"))) PPC_WEAK_FUNC(sub_830D7078);
PPC_FUNC_IMPL(__imp__sub_830D7078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7098"))) PPC_WEAK_FUNC(sub_830D7098);
PPC_FUNC_IMPL(__imp__sub_830D7098) {
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
	// lbz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a23e98
	ctx.lr = 0x830D70B8;
	sub_82A23E98(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x830d70f0
	if (cr6.gt) goto loc_830D70F0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830d70d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D70D4;
	// bdzf 4*cr6+eq,0x830d70e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D70E0;
	// bne cr6,0x830d70e0
	if (!cr6.eq) goto loc_830D70E0;
loc_830D70D4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// b 0x830d70e8
	goto loc_830D70E8;
loc_830D70E0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
loc_830D70E8:
	// blt cr6,0x830d70f0
	if (cr6.lt) goto loc_830D70F0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830D70F0:
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

__attribute__((alias("__imp__sub_830D710C"))) PPC_WEAK_FUNC(sub_830D710C);
PPC_FUNC_IMPL(__imp__sub_830D710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D7110"))) PPC_WEAK_FUNC(sub_830D7110);
PPC_FUNC_IMPL(__imp__sub_830D7110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x830d7188
	if (cr6.gt) goto loc_830D7188;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830d7148
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D7148;
	// bdzf 4*cr6+eq,0x830d7160
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830D7160;
	// bne cr6,0x830d7178
	if (!cr6.eq) goto loc_830D7178;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,45
	cr6.compare<uint32_t>(ctx.r4.u32, 45, xer);
	// blt cr6,0x830d7188
	if (cr6.lt) goto loc_830D7188;
	// li r11,44
	ctx.r11.s64 = 44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830D7148:
	// addi r11,r4,45
	ctx.r11.s64 = ctx.r4.s64 + 45;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x830d7188
	if (cr6.lt) goto loc_830D7188;
	// li r11,89
	ctx.r11.s64 = 89;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830D7160:
	// addi r11,r4,90
	ctx.r11.s64 = ctx.r4.s64 + 90;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(ctx.r11.u32, 105, xer);
	// blt cr6,0x830d7188
	if (cr6.lt) goto loc_830D7188;
	// li r11,104
	ctx.r11.s64 = 104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830D7178:
	// addi r11,r4,105
	ctx.r11.s64 = ctx.r4.s64 + 105;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// blt cr6,0x830d7188
	if (cr6.lt) goto loc_830D7188;
	// li r11,119
	ctx.r11.s64 = 119;
loc_830D7188:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7190"))) PPC_WEAK_FUNC(sub_830D7190);
PPC_FUNC_IMPL(__imp__sub_830D7190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830d7390
	if (cr6.eq) goto loc_830D7390;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830d7390
	if (cr6.eq) goto loc_830D7390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bge cr6,0x830d7390
	if (!cr6.lt) goto loc_830D7390;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bge cr6,0x830d7390
	if (!cr6.lt) goto loc_830D7390;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// lfs f12,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f11,19176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// beq cr6,0x830d7214
	if (cr6.eq) goto loc_830D7214;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830d721c
	if (cr6.eq) goto loc_830D721C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830d7200
	if (cr6.eq) goto loc_830D7200;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830d7224
	if (!cr6.eq) goto loc_830D7224;
loc_830D7200:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,7472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23860);
	ctx.f13.f64 = double(temp.f32);
	// b 0x830d7224
	goto loc_830D7224;
loc_830D7214:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x830d7220
	goto loc_830D7220;
loc_830D721C:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_830D7220:
	// fmr f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64;
loc_830D7224:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830d7248
	if (!cr6.eq) goto loc_830D7248;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f12,-14292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14292);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D7248:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830d726c
	if (!cr6.eq) goto loc_830D726C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f12,-14292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14292);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,31584(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31584);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f12,f13,f10,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D726C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830d7288
	if (!cr6.eq) goto loc_830D7288;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,31584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31584);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D7288:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830d72a4
	if (!cr6.eq) goto loc_830D72A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f12,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D72A4:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830d72c0
	if (!cr6.eq) goto loc_830D72C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D72C0:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830d72e4
	if (!cr6.eq) goto loc_830D72E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-11352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11352);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f12,f13,f10,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D72E4:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x830d7300
	if (!cr6.eq) goto loc_830D7300;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f13,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D7300:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x830d731c
	if (!cr6.eq) goto loc_830D731C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f13,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x830d7368
	goto loc_830D7368;
loc_830D731C:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x830d7334
	if (!cr6.eq) goto loc_830D7334;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// b 0x830d7364
	goto loc_830D7364;
loc_830D7334:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x830d7358
	if (cr6.eq) goto loc_830D7358;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x830d7358
	if (cr6.eq) goto loc_830D7358;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x830d7368
	if (!cr6.eq) goto loc_830D7368;
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x830d7368
	goto loc_830D7368;
loc_830D7358:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
loc_830D7364:
	// fsubs f11,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_830D7368:
	// fctidz f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r10,-9(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_830D7390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7398"))) PPC_WEAK_FUNC(sub_830D7398);
PPC_FUNC_IMPL(__imp__sub_830D7398) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3fb88
	ctx.lr = 0x830D73C0;
	sub_82A3FB88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bge cr6,0x830d73f4
	if (!cr6.lt) goto loc_830D73F4;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_830D73F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fb88
	ctx.lr = 0x830D7400;
	sub_82A3FB88(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x830d7418
	if (!cr6.lt) goto loc_830D7418;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_830D7418:
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f0
	cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x830d744c
	if (!cr6.gt) goto loc_830D744C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D744C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_830D7468"))) PPC_WEAK_FUNC(sub_830D7468);
PPC_FUNC_IMPL(__imp__sub_830D7468) {
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
	// ld r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// blt cr6,0x830d74ac
	if (cr6.lt) goto loc_830D74AC;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830d74ac
	if (!cr6.lt) goto loc_830D74AC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830d74ac
	if (cr6.lt) goto loc_830D74AC;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d74b0
	if (cr6.lt) goto loc_830D74B0;
loc_830D74AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D74B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d74d4
	if (!cr6.eq) goto loc_830D74D4;
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
loc_830D74D4:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D74E0;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16248
	ctx.lr = 0x830D74E8;
	sub_82A16248(ctx, base);
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

__attribute__((alias("__imp__sub_830D74FC"))) PPC_WEAK_FUNC(sub_830D74FC);
PPC_FUNC_IMPL(__imp__sub_830D74FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D7500"))) PPC_WEAK_FUNC(sub_830D7500);
PPC_FUNC_IMPL(__imp__sub_830D7500) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830d7468
	ctx.lr = 0x830D751C;
	sub_830D7468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x830d754c
	if (!cr6.eq) goto loc_830D754C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ld r11,-31052(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -31052);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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
loc_830D754C:
	// bl 0x82be4eb8
	ctx.lr = 0x830D7550;
	sub_82BE4EB8(ctx, base);
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

__attribute__((alias("__imp__sub_830D7568"))) PPC_WEAK_FUNC(sub_830D7568);
PPC_FUNC_IMPL(__imp__sub_830D7568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D7570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830D758C;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830d75a0
	if (!cr6.eq) goto loc_830D75A0;
loc_830D7594:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D75A0:
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x830d75b8
	if (cr0.lt) goto loc_830D75B8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d75bc
	if (cr6.lt) goto loc_830D75BC;
loc_830D75B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D75BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7594
	if (cr6.eq) goto loc_830D7594;
	// addi r11,r3,3612
	ctx.r11.s64 = ctx.r3.s64 + 3612;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x830d75e4
	if (!cr6.lt) goto loc_830D75E4;
	// addi r10,r30,3826
	ctx.r10.s64 = ctx.r30.s64 + 3826;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x830d75e8
	goto loc_830D75E8;
loc_830D75E4:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_830D75E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830d7604
	if (cr6.eq) goto loc_830D7604;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x830d7604
	if (cr6.eq) goto loc_830D7604;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x830d763c
	if (!cr6.eq) goto loc_830D763C;
loc_830D7604:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// ori r8,r10,33220
	ctx.r8.u64 = ctx.r10.u64 | 33220;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r11,r7,11
	ctx.r11.s64 = ctx.r7.s64 * 11;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// subfic r3,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_830D763C:
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7648"))) PPC_WEAK_FUNC(sub_830D7648);
PPC_FUNC_IMPL(__imp__sub_830D7648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7680"))) PPC_WEAK_FUNC(sub_830D7680);
PPC_FUNC_IMPL(__imp__sub_830D7680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D7688;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// blt cr6,0x830d76c0
	if (cr6.lt) goto loc_830D76C0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830d76c0
	if (!cr6.lt) goto loc_830D76C0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830d76c0
	if (cr6.lt) goto loc_830D76C0;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d76c4
	if (cr6.lt) goto loc_830D76C4;
loc_830D76C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D76C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d771c
	if (cr6.eq) goto loc_830D771C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D76DC;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16248
	ctx.lr = 0x830D76E4;
	sub_82A16248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83530640
	ctx.lr = 0x830D76EC;
	sub_83530640(ctx, base);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830D76F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8291b6b8
	ctx.lr = 0x830D7700;
	sub_8291B6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d7728
	if (!cr6.eq) goto loc_830D7728;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// blt cr6,0x830d76f4
	if (cr6.lt) goto loc_830D76F4;
loc_830D771C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D7728:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83530640
	ctx.lr = 0x830D7730;
	sub_83530640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8291a4c0
	ctx.lr = 0x830D7738;
	sub_8291A4C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7740"))) PPC_WEAK_FUNC(sub_830D7740);
PPC_FUNC_IMPL(__imp__sub_830D7740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D7748;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830d7770
	if (cr6.lt) goto loc_830D7770;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d7774
	if (cr6.lt) goto loc_830D7774;
loc_830D7770:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D7774:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7888
	if (cr6.eq) goto loc_830D7888;
	// cmpwi cr6,r29,37
	cr6.compare<int32_t>(ctx.r29.s32, 37, xer);
	// bge cr6,0x830d7888
	if (!cr6.lt) goto loc_830D7888;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x830d7798
	if (!cr6.lt) goto loc_830D7798;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830d77c0
	goto loc_830D77C0;
loc_830D7798:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830d77a8
	if (!cr6.lt) goto loc_830D77A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830d77c0
	goto loc_830D77C0;
loc_830D77A8:
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
loc_830D77C0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D77CC;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830D77D4;
	sub_82A164C8(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830D77D8;
	sub_83530640(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,19808
	ctx.r8.s64 = ctx.r10.s64 + 19808;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,35
	cr6.compare<int32_t>(ctx.r29.s32, 35, xer);
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// bne cr6,0x830d7814
	if (!cr6.eq) goto loc_830D7814;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D7814:
	// cmpwi cr6,r29,36
	cr6.compare<int32_t>(ctx.r29.s32, 36, xer);
	// bne cr6,0x830d7838
	if (!cr6.eq) goto loc_830D7838;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D7838:
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8291b578
	ctx.lr = 0x830D7844;
	sub_8291B578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d787c
	if (cr6.eq) goto loc_830D787C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bgt cr6,0x830d787c
	if (cr6.gt) goto loc_830D787C;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830d787c
	if (cr6.gt) goto loc_830D787C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x827b4418
	ctx.lr = 0x830D7878;
	sub_827B4418(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830D787C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D7888:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7894"))) PPC_WEAK_FUNC(sub_830D7894);
PPC_FUNC_IMPL(__imp__sub_830D7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D7898"))) PPC_WEAK_FUNC(sub_830D7898);
PPC_FUNC_IMPL(__imp__sub_830D7898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830D78A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a2a310
	ctx.lr = 0x830D78C8;
	sub_82A2A310(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r28,r28,11
	ctx.r28.s64 = ctx.r28.s64 * 11;
	// lis r25,-31763
	ctx.r25.s64 = -2081619968;
loc_830D78D8:
	// lwz r11,-3564(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -3564);
	// add. r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt 0x830d78f4
	if (cr0.lt) goto loc_830D78F4;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d78f8
	if (cr6.lt) goto loc_830D78F8;
loc_830D78F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D78F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7918
	if (cr6.eq) goto loc_830D7918;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d791c
	goto loc_830D791C;
loc_830D7918:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D791C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7970
	if (cr6.eq) goto loc_830D7970;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d793c
	if (!cr6.eq) goto loc_830D793C;
	// cmpw cr6,r4,r23
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r23.s32, xer);
	// beq cr6,0x830d7970
	if (cr6.eq) goto loc_830D7970;
loc_830D793C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d6de8
	ctx.lr = 0x830D794C;
	sub_830D6DE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7970
	if (cr6.eq) goto loc_830D7970;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x830d797c
	if (!cr6.gt) goto loc_830D797C;
loc_830D7970:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x830d78d8
	if (cr6.lt) goto loc_830D78D8;
loc_830D797C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7988"))) PPC_WEAK_FUNC(sub_830D7988);
PPC_FUNC_IMPL(__imp__sub_830D7988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830D7990;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a2a310
	ctx.lr = 0x830D79BC;
	sub_82A2A310(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r25,r25,11
	ctx.r25.s64 = ctx.r25.s64 * 11;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
loc_830D79CC:
	// lwz r11,-3564(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// add. r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt 0x830d79e8
	if (cr0.lt) goto loc_830D79E8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d79ec
	if (cr6.lt) goto loc_830D79EC;
loc_830D79E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D79EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7a0c
	if (cr6.eq) goto loc_830D7A0C;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830d7a10
	goto loc_830D7A10;
loc_830D7A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D7A10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7a68
	if (cr6.eq) goto loc_830D7A68;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d7a30
	if (!cr6.eq) goto loc_830D7A30;
	// cmpw cr6,r4,r22
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r22.s32, xer);
	// beq cr6,0x830d7a68
	if (cr6.eq) goto loc_830D7A68;
loc_830D7A30:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7740
	ctx.lr = 0x830D7A44;
	sub_830D7740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7a68
	if (cr6.eq) goto loc_830D7A68;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// ble cr6,0x830d7a74
	if (!cr6.gt) goto loc_830D7A74;
loc_830D7A68:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x830d79cc
	if (cr6.lt) goto loc_830D79CC;
loc_830D7A74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7A80"))) PPC_WEAK_FUNC(sub_830D7A80);
PPC_FUNC_IMPL(__imp__sub_830D7A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D7A88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,35
	cr6.compare<uint32_t>(ctx.r4.u32, 35, xer);
	// blt cr6,0x830d7ab0
	if (cr6.lt) goto loc_830D7AB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D7AB0:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r27,32
	cr6.compare<int32_t>(ctx.r27.s32, 32, xer);
	// bge cr6,0x830d7ac0
	if (!cr6.lt) goto loc_830D7AC0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_830D7AC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830D7ACC;
	sub_82A225D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,34
	cr6.compare<uint32_t>(ctx.r28.u32, 34, xer);
	// bne cr6,0x830d7bac
	if (!cr6.eq) goto loc_830D7BAC;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d7b5c
	if (!cr6.eq) goto loc_830D7B5C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_830D7AEC:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x830d7afc
	if (cr6.eq) goto loc_830D7AFC;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bne cr6,0x830d7b40
	if (!cr6.eq) goto loc_830D7B40;
loc_830D7AFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291ad98
	ctx.lr = 0x830D7B08;
	sub_8291AD98(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x829194e8
	ctx.lr = 0x830D7B14;
	sub_829194E8(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8291ad98
	ctx.lr = 0x830D7B2C;
	sub_8291AD98(ctx, base);
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x829194e8
	ctx.lr = 0x830D7B38;
	sub_829194E8(ctx, base);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
loc_830D7B40:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x830d7aec
	if (cr6.lt) goto loc_830D7AEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D7B5C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830D7B6C;
	sub_8291ADC0(ctx, base);
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291a868
	ctx.lr = 0x830D7B78;
	sub_8291A868(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830D7B8C;
	sub_8291ADC0(ctx, base);
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291a868
	ctx.lr = 0x830D7B98;
	sub_8291A868(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D7BAC:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x830d7c1c
	if (!cr6.lt) goto loc_830D7C1C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r9,r11,19976
	ctx.r9.s64 = ctx.r11.s64 + 19976;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bne cr6,0x830d7bf8
	if (!cr6.eq) goto loc_830D7BF8;
	// bl 0x8291ad98
	ctx.lr = 0x830D7BDC;
	sub_8291AD98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x829194e8
	ctx.lr = 0x830D7BE8;
	sub_829194E8(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D7BF8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830D7C00;
	sub_8291ADC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8291a868
	ctx.lr = 0x830D7C0C;
	sub_8291A868(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D7C1C:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,19976
	ctx.r30.s64 = ctx.r11.s64 + 19976;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r27,r28,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// bl 0x8291ad98
	ctx.lr = 0x830D7C34;
	sub_8291AD98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x829194e8
	ctx.lr = 0x830D7C40;
	sub_829194E8(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r30,r28,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291ad98
	ctx.lr = 0x830D7C54;
	sub_8291AD98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x829194e8
	ctx.lr = 0x830D7C60;
	sub_829194E8(ctx, base);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + ctx.r27.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7C74"))) PPC_WEAK_FUNC(sub_830D7C74);
PPC_FUNC_IMPL(__imp__sub_830D7C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D7C78"))) PPC_WEAK_FUNC(sub_830D7C78);
PPC_FUNC_IMPL(__imp__sub_830D7C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D7C80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830d7cb0
	if (cr6.lt) goto loc_830D7CB0;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d7cb4
	if (cr6.lt) goto loc_830D7CB4;
loc_830D7CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D7CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d7d28
	if (cr6.eq) goto loc_830D7D28;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x830d7cd0
	if (!cr6.lt) goto loc_830D7CD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830d7cf8
	goto loc_830D7CF8;
loc_830D7CD0:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x830d7ce0
	if (!cr6.lt) goto loc_830D7CE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830d7cf8
	goto loc_830D7CF8;
loc_830D7CE0:
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
loc_830D7CF8:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// beq cr6,0x830d7d0c
	if (cr6.eq) goto loc_830D7D0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D7D0C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D7D1C;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a161a8
	ctx.lr = 0x830D7D24;
	sub_82A161A8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_830D7D28:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7a80
	ctx.lr = 0x830D7D3C;
	sub_830D7A80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7D44"))) PPC_WEAK_FUNC(sub_830D7D44);
PPC_FUNC_IMPL(__imp__sub_830D7D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D7D48"))) PPC_WEAK_FUNC(sub_830D7D48);
PPC_FUNC_IMPL(__imp__sub_830D7D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830D7D50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// beq cr6,0x830d7d88
	if (cr6.eq) goto loc_830D7D88;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// ble cr6,0x830d7d88
	if (!cr6.gt) goto loc_830D7D88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830D7D88:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(ctx.r24.s32, 5, xer);
	// bne cr6,0x830d7db8
	if (!cr6.eq) goto loc_830D7DB8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7c78
	ctx.lr = 0x830D7DAC;
	sub_830D7C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830D7DB8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830D7DBC:
	// cmpw cr6,r24,r31
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r31.s32, xer);
	// blt cr6,0x830d7df4
	if (cr6.lt) goto loc_830D7DF4;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d7c78
	ctx.lr = 0x830D7DDC;
	sub_830D7C78(ctx, base);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r25,r31
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r31.s32, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x830d7e04
	if (cr6.eq) goto loc_830D7E04;
loc_830D7DF4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x830d7dbc
	if (cr6.lt) goto loc_830D7DBC;
loc_830D7E04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D7E10"))) PPC_WEAK_FUNC(sub_830D7E10);
PPC_FUNC_IMPL(__imp__sub_830D7E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// blt cr6,0x830d7e2c
	if (cr6.lt) goto loc_830D7E2C;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x830d7e3c
	goto loc_830D7E3C;
loc_830D7E2C:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,19960
	ctx.r8.s64 = ctx.r10.s64 + 19960;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_830D7E3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830d7e4c
	if (!cr6.eq) goto loc_830D7E4C;
	// b 0x82a22ac0
	sub_82A22AC0(ctx, base);
	return;
loc_830D7E4C:
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// beq cr6,0x830d7e58
	if (cr6.eq) goto loc_830D7E58;
	// b 0x82a22a30
	sub_82A22A30(ctx, base);
	return;
loc_830D7E58:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D7E60"))) PPC_WEAK_FUNC(sub_830D7E60);
PPC_FUNC_IMPL(__imp__sub_830D7E60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// blt cr6,0x830d7e90
	if (cr6.lt) goto loc_830D7E90;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x830d7ea0
	goto loc_830D7EA0;
loc_830D7E90:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,19960
	ctx.r8.s64 = ctx.r11.s64 + 19960;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_830D7EA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d7eb4
	if (!cr6.eq) goto loc_830D7EB4;
	// bl 0x82a22ac0
	ctx.lr = 0x830D7EB0;
	sub_82A22AC0(ctx, base);
	// b 0x830d7ec0
	goto loc_830D7EC0;
loc_830D7EB4:
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// beq cr6,0x830d7ec4
	if (cr6.eq) goto loc_830D7EC4;
	// bl 0x82a22a30
	ctx.lr = 0x830D7EC0;
	sub_82A22A30(ctx, base);
loc_830D7EC0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830D7EC4:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addc r7,r8,r9
	temp.u8 = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	xer.ca = temp.u8;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
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

__attribute__((alias("__imp__sub_830D7EF0"))) PPC_WEAK_FUNC(sub_830D7EF0);
PPC_FUNC_IMPL(__imp__sub_830D7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D7EF8;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d8030
	if (cr6.eq) goto loc_830D8030;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830d8030
	if (cr6.eq) goto loc_830D8030;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830d8030
	if (cr6.eq) goto loc_830D8030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// bl 0x82a22a30
	ctx.lr = 0x830D7F58;
	sub_82A22A30(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blt cr6,0x830d8030
	if (cr6.lt) goto loc_830D8030;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D7F74;
	sub_82A229E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x830d7fe0
	if (cr6.eq) goto loc_830D7FE0;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x830d7fb8
	if (cr6.eq) goto loc_830D7FB8;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// beq cr6,0x830d7f98
	if (cr6.eq) goto loc_830D7F98;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x830d7ffc
	goto loc_830D7FFC;
loc_830D7F98:
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a3fb88
	ctx.lr = 0x830D7FA4;
	sub_82A3FB88(ctx, base);
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// b 0x830d7ffc
	goto loc_830D7FFC;
loc_830D7FB8:
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fb88
	ctx.lr = 0x830D7FC4;
	sub_82A3FB88(ctx, base);
	// ld r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// b 0x830d7ffc
	goto loc_830D7FFC;
loc_830D7FE0:
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a3fb88
	ctx.lr = 0x830D7FEC;
	sub_82A3FB88(ctx, base);
	// lwz r28,28(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
loc_830D7FFC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d8018
	if (cr6.eq) goto loc_830D8018;
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f30,4(r27)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f29,8(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
loc_830D8018:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D8030:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D8048"))) PPC_WEAK_FUNC(sub_830D8048);
PPC_FUNC_IMPL(__imp__sub_830D8048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x830d8058
	if (cr6.lt) goto loc_830D8058;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830D8058:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bgt cr6,0x830d8144
	if (cr6.gt) goto loc_830D8144;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x830d8148
	if (cr6.eq) goto loc_830D8148;
	// bdz 0x830d8094
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830D8094;
	// bdz 0x830d80b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830D80B0;
	// bdz 0x830d80cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830D80CC;
	// bdz 0x830d80e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830D80E8;
	// b 0x830d8128
	goto loc_830D8128;
loc_830D8094:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,68(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_830D80B0:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_830D80CC:
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_830D80E8:
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_830D8128:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_830D8144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830D8148:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8150"))) PPC_WEAK_FUNC(sub_830D8150);
PPC_FUNC_IMPL(__imp__sub_830D8150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D8158;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blt cr6,0x830d818c
	if (cr6.lt) goto loc_830D818C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d8190
	if (cr6.lt) goto loc_830D8190;
loc_830D818C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D8190:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d81d8
	if (cr6.eq) goto loc_830D81D8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830d81ac
	if (!cr6.lt) goto loc_830D81AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x830d8218
	goto loc_830D8218;
loc_830D81AC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830d81bc
	if (!cr6.lt) goto loc_830D81BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x830d8218
	goto loc_830D8218;
loc_830D81BC:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
	// b 0x830d8218
	goto loc_830D8218;
loc_830D81D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a0c710
	ctx.lr = 0x830D81E0;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x830d8218
	if (cr6.gt) goto loc_830D8218;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830D8218:
	// lwz r11,8144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lwz r10,8148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	// lwz r9,8152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x830d827c
	if (cr6.eq) goto loc_830D827C;
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x830d8244
	if (cr6.lt) goto loc_830D8244;
	// li r29,199
	ctx.r29.s64 = 199;
loc_830D8244:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x830D8250;
	sub_82A44AC0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830D8260:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830d8260
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830D8260;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// b 0x830d8288
	goto loc_830D8288;
loc_830D827C:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_830D8288:
	// stfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D82A4"))) PPC_WEAK_FUNC(sub_830D82A4);
PPC_FUNC_IMPL(__imp__sub_830D82A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D82A8"))) PPC_WEAK_FUNC(sub_830D82A8);
PPC_FUNC_IMPL(__imp__sub_830D82A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D82B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830D82D0;
	sub_82A22B40(ctx, base);
	// ld r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x830d8304
	if (cr6.lt) goto loc_830D8304;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830d8304
	if (!cr6.lt) goto loc_830D8304;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d8304
	if (cr6.lt) goto loc_830D8304;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8308
	if (cr6.lt) goto loc_830D8308;
loc_830D8304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8320
	if (!cr6.eq) goto loc_830D8320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D8320:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830D8330;
	sub_82A22B40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x82a3fca8
	ctx.lr = 0x830D8340;
	sub_82A3FCA8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D8368"))) PPC_WEAK_FUNC(sub_830D8368);
PPC_FUNC_IMPL(__imp__sub_830D8368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,22272
	ctx.r11.s64 = ctx.r11.s64 + 22272;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d83e8
	if (cr6.eq) goto loc_830D83E8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d83b0
	if (cr6.lt) goto loc_830D83B0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830d83b0
	if (!cr6.lt) goto loc_830D83B0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d83b0
	if (cr6.lt) goto loc_830D83B0;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d83b4
	if (cr6.lt) goto loc_830D83B4;
loc_830D83B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D83B4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d83e8
	if (cr6.eq) goto loc_830D83E8;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830D83E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D83F0"))) PPC_WEAK_FUNC(sub_830D83F0);
PPC_FUNC_IMPL(__imp__sub_830D83F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D83F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 65536;
	// addi r4,r4,21976
	ctx.r4.s64 = ctx.r4.s64 + 21976;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d842c
	if (cr6.lt) goto loc_830D842C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d8430
	if (cr6.lt) goto loc_830D8430;
loc_830D842C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D8430:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d8448
	if (!cr6.eq) goto loc_830D8448;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8448:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830d8458
	if (!cr6.lt) goto loc_830D8458;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830d8480
	goto loc_830D8480;
loc_830D8458:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830d8468
	if (!cr6.lt) goto loc_830D8468;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830d8480
	goto loc_830D8480;
loc_830D8468:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_830D8480:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d84ac
	if (cr6.lt) goto loc_830D84AC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x830d84ac
	if (!cr6.lt) goto loc_830D84AC;
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// ori r9,r10,35747
	ctx.r9.u64 = ctx.r10.u64 | 35747;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r7,11
	ctx.r6.s64 = ctx.r7.s64 * 11;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x830d84b0
	goto loc_830D84B0;
loc_830D84AC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_830D84B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a456e8
	ctx.lr = 0x830D84BC;
	sub_82A456E8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D84E4"))) PPC_WEAK_FUNC(sub_830D84E4);
PPC_FUNC_IMPL(__imp__sub_830D84E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D84E8"))) PPC_WEAK_FUNC(sub_830D84E8);
PPC_FUNC_IMPL(__imp__sub_830D84E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D84F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// bl 0x82a22ba8
	ctx.lr = 0x830D8510;
	sub_82A22BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x830D8520;
	sub_82A2B388(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r8,r9,22492
	ctx.r8.u64 = ctx.r9.u64 | 22492;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830d854c
	if (cr6.eq) goto loc_830D854C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,20424
	ctx.r9.u64 = ctx.r10.u64 | 20424;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_830D854C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830d8560
	if (cr6.lt) goto loc_830D8560;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8564
	if (cr6.lt) goto loc_830D8564;
loc_830D8560:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8564:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d857c
	if (!cr6.eq) goto loc_830D857C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D857C:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830D858C;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bge cr6,0x830d85c4
	if (!cr6.lt) goto loc_830D85C4;
loc_830D85B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D85C4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x830d85b0
	if (cr6.lt) goto loc_830D85B0;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
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
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D85F4"))) PPC_WEAK_FUNC(sub_830D85F4);
PPC_FUNC_IMPL(__imp__sub_830D85F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D85F8"))) PPC_WEAK_FUNC(sub_830D85F8);
PPC_FUNC_IMPL(__imp__sub_830D85F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D8600;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a22ba8
	ctx.lr = 0x830D8624;
	sub_82A22BA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830D8630;
	sub_82A22B40(ctx, base);
	// ld r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// blt cr6,0x830d8664
	if (cr6.lt) goto loc_830D8664;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830d8664
	if (!cr6.lt) goto loc_830D8664;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d8664
	if (cr6.lt) goto loc_830D8664;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8668
	if (cr6.lt) goto loc_830D8668;
loc_830D8664:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d8698
	if (cr6.eq) goto loc_830D8698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830d8698
	if (cr6.eq) goto loc_830D8698;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d84e8
	ctx.lr = 0x830D8690;
	sub_830D84E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D8698:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// ori r7,r9,22508
	ctx.r7.u64 = ctx.r9.u64 | 22508;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lfs f0,-26260(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830d86e0
	if (!cr6.gt) goto loc_830D86E0;
	// lfs f0,8144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// b 0x830d872c
	goto loc_830D872C;
loc_830D86E0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830d8718
	if (!cr6.eq) goto loc_830D8718;
	// lfs f13,8212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x830d8718
	if (!cr6.eq) goto loc_830D8718;
	// lfs f0,8196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8200);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8204);
	ctx.f12.f64 = double(temp.f32);
	// b 0x830d872c
	goto loc_830D872C;
loc_830D8718:
	// lfs f0,8208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8216);
	ctx.f12.f64 = double(temp.f32);
loc_830D872C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D8744"))) PPC_WEAK_FUNC(sub_830D8744);
PPC_FUNC_IMPL(__imp__sub_830D8744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D8748"))) PPC_WEAK_FUNC(sub_830D8748);
PPC_FUNC_IMPL(__imp__sub_830D8748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,26124
	ctx.r11.s64 = ctx.r11.s64 + 26124;
	// lbz r9,13(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830d8774
	if (!cr6.eq) goto loc_830D8774;
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x830d8778
	if (cr6.eq) goto loc_830D8778;
loc_830D8774:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830D8778:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d880c
	if (cr6.eq) goto loc_830D880C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d879c
	if (cr6.lt) goto loc_830D879C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d87a0
	if (cr6.lt) goto loc_830D87A0;
loc_830D879C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D87A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830d880c
	if (cr6.eq) goto loc_830D880C;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830d87e0
	if (!cr6.lt) goto loc_830D87E0;
loc_830D87D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830D87E0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x830d87d0
	if (cr6.lt) goto loc_830D87D0;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830D880C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8814"))) PPC_WEAK_FUNC(sub_830D8814);
PPC_FUNC_IMPL(__imp__sub_830D8814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D8818"))) PPC_WEAK_FUNC(sub_830D8818);
PPC_FUNC_IMPL(__imp__sub_830D8818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D8820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8848
	if (!cr6.eq) goto loc_830D8848;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8848:
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r29,26208
	ctx.r29.s64 = ctx.r29.s64 + 26208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a45490
	ctx.lr = 0x830D885C;
	sub_82A45490(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D888C"))) PPC_WEAK_FUNC(sub_830D888C);
PPC_FUNC_IMPL(__imp__sub_830D888C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D8890"))) PPC_WEAK_FUNC(sub_830D8890);
PPC_FUNC_IMPL(__imp__sub_830D8890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D8898;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830d8960
	if (cr6.eq) goto loc_830D8960;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830D88C0;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d8960
	if (cr6.eq) goto loc_830D8960;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D88D8;
	sub_82A229E8(ctx, base);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830d890c
	if (cr6.lt) goto loc_830D890C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830d890c
	if (!cr6.lt) goto loc_830D890C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d890c
	if (cr6.lt) goto loc_830D890C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8910
	if (cr6.lt) goto loc_830D8910;
loc_830D890C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8910:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d8960
	if (cr6.eq) goto loc_830D8960;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830d8960
	if (!cr6.lt) goto loc_830D8960;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a3fb88
	ctx.lr = 0x830D8930;
	sub_82A3FB88(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D896C"))) PPC_WEAK_FUNC(sub_830D896C);
PPC_FUNC_IMPL(__imp__sub_830D896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D8970"))) PPC_WEAK_FUNC(sub_830D8970);
PPC_FUNC_IMPL(__imp__sub_830D8970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830d8988
	if (!cr6.eq) goto loc_830D8988;
loc_830D8980:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830D8988:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,23412
	ctx.r11.s64 = ctx.r11.s64 + 23412;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830d8980
	if (!cr6.lt) goto loc_830D8980;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D89C4"))) PPC_WEAK_FUNC(sub_830D89C4);
PPC_FUNC_IMPL(__imp__sub_830D89C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D89C8"))) PPC_WEAK_FUNC(sub_830D89C8);
PPC_FUNC_IMPL(__imp__sub_830D89C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d89e0
	if (!cr6.eq) goto loc_830D89E0;
loc_830D89D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830D89E0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,20424
	ctx.r9.u64 = ctx.r11.u64 | 20424;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d8a00
	if (cr6.lt) goto loc_830D8A00;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x830d8a04
	if (cr6.lt) goto loc_830D8A04;
loc_830D8A00:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830D8A04:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d89d8
	if (cr6.eq) goto loc_830D89D8;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,22524
	ctx.r10.s64 = ctx.r10.s64 + 22524;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// bge cr6,0x830d8a48
	if (!cr6.lt) goto loc_830D8A48;
loc_830D8A38:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830D8A48:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x830d8a38
	if (cr6.lt) goto loc_830D8A38;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8A74"))) PPC_WEAK_FUNC(sub_830D8A74);
PPC_FUNC_IMPL(__imp__sub_830D8A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D8A78"))) PPC_WEAK_FUNC(sub_830D8A78);
PPC_FUNC_IMPL(__imp__sub_830D8A78) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22c10
	ctx.lr = 0x830D8A98;
	sub_82A22C10(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830d8ac4
	if (cr6.lt) goto loc_830D8AC4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830d8ac4
	if (!cr6.lt) goto loc_830D8AC4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d8ac4
	if (cr6.lt) goto loc_830D8AC4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8ac8
	if (cr6.lt) goto loc_830D8AC8;
loc_830D8AC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8AC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8ad8
	if (!cr6.eq) goto loc_830D8AD8;
	// li r3,2
	ctx.r3.s64 = 2;
loc_830D8AD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8AE8"))) PPC_WEAK_FUNC(sub_830D8AE8);
PPC_FUNC_IMPL(__imp__sub_830D8AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D8AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8b14
	if (!cr6.eq) goto loc_830D8B14;
loc_830D8B08:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8B14:
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830d8b28
	if (cr6.eq) goto loc_830D8B28;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d8b08
	if (!cr6.eq) goto loc_830D8B08;
loc_830D8B28:
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x830d8bbc
	if (!cr6.eq) goto loc_830D8BBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
loc_830D8B44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x830D8B50;
	sub_82A22B40(ctx, base);
	// ld r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d8b84
	if (cr6.lt) goto loc_830D8B84;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830d8b84
	if (!cr6.lt) goto loc_830D8B84;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d8b84
	if (cr6.lt) goto loc_830D8B84;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8b88
	if (cr6.lt) goto loc_830D8B88;
loc_830D8B84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8B88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8bac
	if (!cr6.eq) goto loc_830D8BAC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x830d8b44
	if (cr6.lt) goto loc_830D8B44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8BAC:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8BBC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8bd4
	if (!cr6.eq) goto loc_830D8BD4;
loc_830D8BC4:
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D8BD4:
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830d8be8
	if (cr6.eq) goto loc_830D8BE8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d8bc4
	if (!cr6.eq) goto loc_830D8BC4;
loc_830D8BE8:
	// lwz r29,5360(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5360);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x830d8bfc
	if (cr6.eq) goto loc_830D8BFC;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830D8BFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D8C08"))) PPC_WEAK_FUNC(sub_830D8C08);
PPC_FUNC_IMPL(__imp__sub_830D8C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D8C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d8c3c
	if (!cr6.eq) goto loc_830D8C3C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D8C3C:
	// clrlwi r29,r5,24
	ctx.r29.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x830d8c78
	if (!cr6.eq) goto loc_830D8C78;
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830d8c78
	if (!cr6.eq) goto loc_830D8C78;
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x830d8c78
	if (!cr6.eq) goto loc_830D8C78;
	// lwz r11,5360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5360);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D8C78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830D8C88;
	sub_82A22AC0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d8ccc
	if (cr6.eq) goto loc_830D8CCC;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// ble cr6,0x830d8ccc
	if (!cr6.gt) goto loc_830D8CCC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x830d8cc4
	if (!cr6.eq) goto loc_830D8CC4;
	// bl 0x82a22a50
	ctx.lr = 0x830D8CB4;
	sub_82A22A50(ctx, base);
	// lwz r30,296(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D8CC4:
	// bl 0x82a22a50
	ctx.lr = 0x830D8CC8;
	sub_82A22A50(ctx, base);
	// lwz r30,324(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
loc_830D8CCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D8CD8"))) PPC_WEAK_FUNC(sub_830D8CD8);
PPC_FUNC_IMPL(__imp__sub_830D8CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,22272
	ctx.r11.s64 = ctx.r11.s64 + 22272;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d8d30
	if (cr6.eq) goto loc_830D8D30;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830d8d20
	if (cr6.lt) goto loc_830D8D20;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830d8d20
	if (!cr6.lt) goto loc_830D8D20;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d8d20
	if (cr6.lt) goto loc_830D8D20;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d8d24
	if (cr6.lt) goto loc_830D8D24;
loc_830D8D20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D8D24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830D8D30:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D8D38"))) PPC_WEAK_FUNC(sub_830D8D38);
PPC_FUNC_IMPL(__imp__sub_830D8D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D8D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,132(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r28,6132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bge cr6,0x830d8de8
	if (!cr6.lt) goto loc_830D8DE8;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x830d8de8
	if (cr6.eq) goto loc_830D8DE8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830d8de8
	if (cr6.eq) goto loc_830D8DE8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d8de8
	if (cr6.eq) goto loc_830D8DE8;
	// bl 0x82a225d0
	ctx.lr = 0x830D8D88;
	sub_82A225D0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r10,r11,36400
	ctx.r10.u64 = ctx.r11.u64 | 36400;
	// mullw r11,r31,r10
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x830D8DA0;
	sub_82919698(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x830d8db4
	if (cr6.eq) goto loc_830D8DB4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x830d8ddc
	if (!cr6.eq) goto loc_830D8DDC;
loc_830D8DB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a269f8
	ctx.lr = 0x830D8DBC;
	sub_82A269F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d8ddc
	if (cr6.eq) goto loc_830D8DDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a287a8
	ctx.lr = 0x830D8DD4;
	sub_82A287A8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
loc_830D8DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D8DE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D8DF4"))) PPC_WEAK_FUNC(sub_830D8DF4);
PPC_FUNC_IMPL(__imp__sub_830D8DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D8DF8"))) PPC_WEAK_FUNC(sub_830D8DF8);
PPC_FUNC_IMPL(__imp__sub_830D8DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830D8E00;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r25,132(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r22,6132(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x830d8ff8
	if (cr6.eq) goto loc_830D8FF8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830d8ff8
	if (cr6.eq) goto loc_830D8FF8;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x82a269f8
	ctx.lr = 0x830D8E54;
	sub_82A269F8(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x830d8ff8
	if (cr6.eq) goto loc_830D8FF8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// ori r29,r11,36400
	ctx.r29.u64 = ctx.r11.u64 | 36400;
loc_830D8E6C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D8E74;
	sub_82A225D0(ctx, base);
	// mullw r11,r31,r29
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82919698
	ctx.lr = 0x830D8E88;
	sub_82919698(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq cr6,0x830d8eb4
	if (cr6.eq) goto loc_830D8EB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a287a8
	ctx.lr = 0x830D8EA8;
	sub_82A287A8(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_830D8EB4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830d8e6c
	if (cr6.lt) goto loc_830D8E6C;
	// extsb r8,r27
	ctx.r8.s64 = ctx.r27.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830d8ee4
	if (cr6.eq) goto loc_830D8EE4;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_830D8EE4:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// xori r27,r11,4
	ctx.r27.u64 = ctx.r11.u64 ^ 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// lwzx r6,r27,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r5,r28,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwzx r4,r27,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x830d8fec
	if (cr6.eq) goto loc_830D8FEC;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(ctx.r24.s32, 5, xer);
	// bne cr6,0x830d8fec
	if (!cr6.eq) goto loc_830D8FEC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// sth r21,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r21.u16);
	// beq cr6,0x830d8fec
	if (cr6.eq) goto loc_830D8FEC;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x830d8fec
	if (!cr6.eq) goto loc_830D8FEC;
	// lwz r11,24356(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24356);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d8fec
	if (cr6.eq) goto loc_830D8FEC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// srawi r9,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bne cr6,0x830d8fd4
	if (!cr6.eq) goto loc_830D8FD4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D8F94;
	sub_82A225D0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bl 0x82919698
	ctx.lr = 0x830D8FA0;
	sub_82919698(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D8FAC;
	sub_82A225D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bl 0x82919698
	ctx.lr = 0x830D8FB8;
	sub_82919698(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_830D8FD4:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwzx r8,r28,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// sth r7,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r7.u16);
loc_830D8FEC:
	// extsh r3,r23
	ctx.r3.s64 = ctx.r23.s16;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830D8FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9004"))) PPC_WEAK_FUNC(sub_830D9004);
PPC_FUNC_IMPL(__imp__sub_830D9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9008"))) PPC_WEAK_FUNC(sub_830D9008);
PPC_FUNC_IMPL(__imp__sub_830D9008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830D9010;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r28,132(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x830d9048
	if (!cr6.eq) goto loc_830D9048;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D9048:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x830d9100
	if (cr6.eq) goto loc_830D9100;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// beq cr6,0x830d9100
	if (cr6.eq) goto loc_830D9100;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x830d9100
	if (cr6.eq) goto loc_830D9100;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x830d9138
	if (!cr6.eq) goto loc_830D9138;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// ori r30,r11,36400
	ctx.r30.u64 = ctx.r11.u64 | 36400;
loc_830D907C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830D9084;
	sub_82A225D0(ctx, base);
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x830D9094;
	sub_82919698(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// blt cr6,0x830d907c
	if (cr6.lt) goto loc_830D907C;
	// extsb r8,r26
	ctx.r8.s64 = ctx.r26.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x830d90d4
	if (cr6.eq) goto loc_830D90D4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r8,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
loc_830D90D4:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// xori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 ^ 2;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D9100:
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830d8df8
	ctx.lr = 0x830D911C;
	sub_830D8DF8(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x830d912c
	if (!cr6.eq) goto loc_830D912C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_830D912C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830d9138
	if (cr6.eq) goto loc_830D9138;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_830D9138:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9140"))) PPC_WEAK_FUNC(sub_830D9140);
PPC_FUNC_IMPL(__imp__sub_830D9140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D9148;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x830d9174
	if (!cr6.eq) goto loc_830D9174;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D9174:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x830d918c
	if (cr6.eq) goto loc_830D918C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x830d918c
	if (cr6.eq) goto loc_830D918C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x830d9224
	if (!cr6.eq) goto loc_830D9224;
loc_830D918C:
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r8,r28
	ctx.r8.s64 = ctx.r28.s8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d9008
	ctx.lr = 0x830D91B0;
	sub_830D9008(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x830d91fc
	if (cr6.gt) goto loc_830D91FC;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x830d91fc
	if (cr6.gt) goto loc_830D91FC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d91f4
	if (cr6.lt) goto loc_830D91F4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d91f4
	if (cr6.lt) goto loc_830D91F4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830d9200
	if (!cr6.eq) goto loc_830D9200;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830d9200
	if (!cr6.eq) goto loc_830D9200;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x830d9200
	goto loc_830D9200;
loc_830D91F4:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x830d9200
	goto loc_830D9200;
loc_830D91FC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_830D9200:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x830d9224
	if (!cr6.eq) goto loc_830D9224;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830d92f8
	if (!cr6.eq) goto loc_830D92F8;
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D9224:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x830d9234
	if (cr6.eq) goto loc_830D9234;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x830d92f8
	if (!cr6.eq) goto loc_830D92F8;
loc_830D9234:
	// extsb r8,r28
	ctx.r8.s64 = ctx.r28.s8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830d9008
	ctx.lr = 0x830D9250;
	sub_830D9008(ctx, base);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x830d92bc
	if (!cr6.eq) goto loc_830D92BC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x830d9278
	if (!cr6.eq) goto loc_830D9278;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830d92ac
	if (!cr6.gt) goto loc_830D92AC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D9278:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x830d9298
	if (!cr6.eq) goto loc_830D9298;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830d92ac
	if (!cr6.lt) goto loc_830D92AC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D9298:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bne cr6,0x830d92f8
	if (!cr6.eq) goto loc_830D92F8;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830d92f8
	if (cr6.eq) goto loc_830D92F8;
loc_830D92AC:
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D92BC:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830d92d8
	if (!cr6.gt) goto loc_830D92D8;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D92D8:
	// bge cr6,0x830d92ec
	if (!cr6.lt) goto loc_830D92EC;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D92EC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830d92f8
	if (!cr6.eq) goto loc_830D92F8;
	// li r27,2
	ctx.r27.s64 = 2;
loc_830D92F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9304"))) PPC_WEAK_FUNC(sub_830D9304);
PPC_FUNC_IMPL(__imp__sub_830D9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9308"))) PPC_WEAK_FUNC(sub_830D9308);
PPC_FUNC_IMPL(__imp__sub_830D9308) {
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
	// beq cr6,0x830d933c
	if (cr6.eq) goto loc_830D933C;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x830d933c
	if (cr6.eq) goto loc_830D933C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x830d9388
	if (!cr6.eq) goto loc_830D9388;
loc_830D933C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d9008
	ctx.lr = 0x830D9358;
	sub_830D9008(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// ble cr6,0x830d9388
	if (!cr6.gt) goto loc_830D9388;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d93e4
	goto loc_830D93E4;
loc_830D9388:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x830d9398
	if (cr6.eq) goto loc_830D9398;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bne cr6,0x830d93e0
	if (!cr6.eq) goto loc_830D93E0;
loc_830D9398:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d9008
	ctx.lr = 0x830D93B4;
	sub_830D9008(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bgt cr6,0x830d93e4
	if (cr6.gt) goto loc_830D93E4;
loc_830D93E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830D93E4:
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

__attribute__((alias("__imp__sub_830D93FC"))) PPC_WEAK_FUNC(sub_830D93FC);
PPC_FUNC_IMPL(__imp__sub_830D93FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9400"))) PPC_WEAK_FUNC(sub_830D9400);
PPC_FUNC_IMPL(__imp__sub_830D9400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830D9408;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830d9484
	if (cr6.eq) goto loc_830D9484;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830D9434;
	sub_82A22A30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830d9484
	if (!cr6.gt) goto loc_830D9484;
loc_830D9444:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D9454;
	sub_82A229E8(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x830d9478
	if (!cr6.eq) goto loc_830D9478;
	// lbz r11,95(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 95);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d9478
	if (cr6.eq) goto loc_830D9478;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// beq cr6,0x830d9490
	if (cr6.eq) goto loc_830D9490;
loc_830D9478:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x830d9444
	if (cr6.lt) goto loc_830D9444;
loc_830D9484:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830D9490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D949C"))) PPC_WEAK_FUNC(sub_830D949C);
PPC_FUNC_IMPL(__imp__sub_830D949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D94A0"))) PPC_WEAK_FUNC(sub_830D94A0);
PPC_FUNC_IMPL(__imp__sub_830D94A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,6132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x830d7468
	ctx.lr = 0x830D94C8;
	sub_830D7468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830d94e4
	if (!cr6.eq) goto loc_830D94E4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r5,-31052(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -31052);
	// b 0x830d94fc
	goto loc_830D94FC;
loc_830D94E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82be4eb8
	ctx.lr = 0x830D94F0;
	sub_82BE4EB8(ctx, base);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_830D94FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26da0
	ctx.lr = 0x830D9504;
	sub_82A26DA0(ctx, base);
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

__attribute__((alias("__imp__sub_830D951C"))) PPC_WEAK_FUNC(sub_830D951C);
PPC_FUNC_IMPL(__imp__sub_830D951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9520"))) PPC_WEAK_FUNC(sub_830D9520);
PPC_FUNC_IMPL(__imp__sub_830D9520) {
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
	// ld r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// blt cr6,0x830d9568
	if (cr6.lt) goto loc_830D9568;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830d9568
	if (!cr6.lt) goto loc_830D9568;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830d9568
	if (cr6.lt) goto loc_830D9568;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d956c
	if (cr6.lt) goto loc_830D956C;
loc_830D9568:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D956C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d9580
	if (!cr6.eq) goto loc_830D9580;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d9598
	goto loc_830D9598;
loc_830D9580:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830D958C;
	sub_82A225D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8291adc0
	ctx.lr = 0x830D9598;
	sub_8291ADC0(ctx, base);
loc_830D9598:
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

__attribute__((alias("__imp__sub_830D95B0"))) PPC_WEAK_FUNC(sub_830D95B0);
PPC_FUNC_IMPL(__imp__sub_830D95B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r10,r10,24608
	ctx.r10.s64 = ctx.r10.s64 + 24608;
	// lwz r8,4460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x830d9674
	if (!cr6.eq) goto loc_830D9674;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830d9674
	if (cr6.eq) goto loc_830D9674;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830d9620
	if (!cr6.eq) goto loc_830D9620;
	// srawi r9,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830d9620
	if (!cr6.eq) goto loc_830D9620;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830d9624
	if (cr6.eq) goto loc_830D9624;
loc_830D9620:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830D9624:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d9674
	if (cr6.eq) goto loc_830D9674;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830d965c
	if (cr6.lt) goto loc_830D965C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830d965c
	if (!cr6.lt) goto loc_830D965C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d965c
	if (cr6.lt) goto loc_830D965C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d9660
	if (cr6.lt) goto loc_830D9660;
loc_830D965C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D9660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d9674
	if (cr6.eq) goto loc_830D9674;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82a2a400
	sub_82A2A400(ctx, base);
	return;
loc_830D9674:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830D967C"))) PPC_WEAK_FUNC(sub_830D967C);
PPC_FUNC_IMPL(__imp__sub_830D967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9680"))) PPC_WEAK_FUNC(sub_830D9680);
PPC_FUNC_IMPL(__imp__sub_830D9680) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830d96ac
	if (cr6.lt) goto loc_830D96AC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d96b0
	if (cr6.lt) goto loc_830D96B0;
loc_830D96AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D96B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d96c4
	if (!cr6.eq) goto loc_830D96C4;
	// bl 0x830d7680
	ctx.lr = 0x830D96C0;
	sub_830D7680(ctx, base);
	// b 0x830d9734
	goto loc_830D9734;
loc_830D96C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a29688
	ctx.lr = 0x830D96D0;
	sub_82A29688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// blt cr6,0x830d96e4
	if (cr6.lt) goto loc_830D96E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d9734
	goto loc_830D9734;
loc_830D96E4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x830d96f4
	if (!cr6.lt) goto loc_830D96F4;
loc_830D96EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830d9714
	goto loc_830D9714;
loc_830D96F4:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x830d96ec
	if (cr6.lt) goto loc_830D96EC;
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
loc_830D9714:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830D9720;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x830D9728;
	sub_82A164C8(ctx, base);
	// bl 0x83530640
	ctx.lr = 0x830D972C;
	sub_83530640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8291a4c0
	ctx.lr = 0x830D9734;
	sub_8291A4C0(ctx, base);
loc_830D9734:
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

__attribute__((alias("__imp__sub_830D974C"))) PPC_WEAK_FUNC(sub_830D974C);
PPC_FUNC_IMPL(__imp__sub_830D974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9750"))) PPC_WEAK_FUNC(sub_830D9750);
PPC_FUNC_IMPL(__imp__sub_830D9750) {
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
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r31,6132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// beq cr6,0x830d97a0
	if (cr6.eq) goto loc_830D97A0;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26868
	ctx.lr = 0x830D978C;
	sub_82A26868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d97a0
	if (!cr6.eq) goto loc_830D97A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830d97b8
	goto loc_830D97B8;
loc_830D97A0:
	// cmpwi cr6,r30,160
	cr6.compare<int32_t>(ctx.r30.s32, 160, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x830d97b4
	if (!cr6.eq) goto loc_830D97B4;
	// li r4,160
	ctx.r4.s64 = 160;
loc_830D97B4:
	// bl 0x82a26930
	ctx.lr = 0x830D97B8;
	sub_82A26930(ctx, base);
loc_830D97B8:
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

__attribute__((alias("__imp__sub_830D97D0"))) PPC_WEAK_FUNC(sub_830D97D0);
PPC_FUNC_IMPL(__imp__sub_830D97D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D97D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,-3564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// beq cr6,0x830d9834
	if (cr6.eq) goto loc_830D9834;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x830d980c
	if (cr6.lt) goto loc_830D980C;
loc_830D9800:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D980C:
	// mulli r10,r10,8248
	ctx.r10.s64 = ctx.r10.s64 * 8248;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-8604
	ctx.r9.s64 = ctx.r9.s64 + -8604;
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// lwz r4,120(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// lbz r31,129(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 129);
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// b 0x830d9848
	goto loc_830D9848;
loc_830D9834:
	// lwz r10,24356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24356);
	// lwz r4,560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// lbz r31,569(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 569);
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
loc_830D9848:
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830d9800
	if (cr6.eq) goto loc_830D9800;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a26930
	ctx.lr = 0x830D985C;
	sub_82A26930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d987c
	if (cr6.eq) goto loc_830D987C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d987c
	if (cr6.eq) goto loc_830D987C;
	// addi r11,r29,255
	ctx.r11.s64 = ctx.r29.s64 + 255;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_830D987C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9888"))) PPC_WEAK_FUNC(sub_830D9888);
PPC_FUNC_IMPL(__imp__sub_830D9888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D9890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bge cr6,0x830d9914
	if (!cr6.lt) goto loc_830D9914;
	// bl 0x830d7e60
	ctx.lr = 0x830D98B0;
	sub_830D7E60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d9914
	if (cr6.eq) goto loc_830D9914;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19960
	ctx.r9.s64 = ctx.r11.s64 + 19960;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// beq cr6,0x830d98e4
	if (cr6.eq) goto loc_830D98E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D98DC;
	sub_82A229E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D98E4:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x830d9900
	if (!cr6.eq) goto loc_830D9900;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830D98F8;
	sub_82A22A50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9900:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82a229e8
	ctx.lr = 0x830D990C;
	sub_82A229E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9914:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830D9924;
	sub_82A229E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D992C"))) PPC_WEAK_FUNC(sub_830D992C);
PPC_FUNC_IMPL(__imp__sub_830D992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9930"))) PPC_WEAK_FUNC(sub_830D9930);
PPC_FUNC_IMPL(__imp__sub_830D9930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830D9938;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,255
	ctx.r28.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830d7e60
	ctx.lr = 0x830D995C;
	sub_830D7E60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d99dc
	if (cr6.eq) goto loc_830D99DC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d9888
	ctx.lr = 0x830D9974;
	sub_830D9888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d99dc
	if (cr6.eq) goto loc_830D99DC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bne cr6,0x830d99ac
	if (!cr6.eq) goto loc_830D99AC;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x830d99dc
	if (!cr6.eq) goto loc_830D99DC;
	// ld r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D99AC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x830d99c0
	if (!cr6.eq) goto loc_830D99C0;
	// ld r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 28);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D99C0:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x830d99d4
	if (!cr6.eq) goto loc_830D99D4;
loc_830D99C8:
	// ld r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830D99D4:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x830d99c8
	if (cr6.eq) goto loc_830D99C8;
loc_830D99DC:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D99E8"))) PPC_WEAK_FUNC(sub_830D99E8);
PPC_FUNC_IMPL(__imp__sub_830D99E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830D99F0;
	__savegprlr_28(ctx, base);
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
	// bl 0x830d7e60
	ctx.lr = 0x830D9A04;
	sub_830D7E60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830d9a18
	if (!cr6.eq) goto loc_830D9A18;
loc_830D9A0C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D9A18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d9888
	ctx.lr = 0x830D9A28;
	sub_830D9888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830d9a0c
	if (cr6.eq) goto loc_830D9A0C;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x830d9a44
	if (cr6.lt) goto loc_830D9A44;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x830d9a54
	goto loc_830D9A54;
loc_830D9A44:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19960
	ctx.r9.s64 = ctx.r11.s64 + 19960;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830D9A54:
	// li r28,2
	ctx.r28.s64 = 2;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x830d9a70
	if (!cr6.eq) goto loc_830D9A70;
	// lwz r28,324(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830D9A70:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x830d9acc
	if (cr6.eq) goto loc_830D9ACC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d9930
	ctx.lr = 0x830D9A88;
	sub_830D9930(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830d9ab8
	if (cr6.lt) goto loc_830D9AB8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830d9ab8
	if (!cr6.lt) goto loc_830D9AB8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d9ab8
	if (cr6.lt) goto loc_830D9AB8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d9abc
	if (cr6.lt) goto loc_830D9ABC;
loc_830D9AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D9ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d9acc
	if (cr6.eq) goto loc_830D9ACC;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_830D9ACC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9AD8"))) PPC_WEAK_FUNC(sub_830D9AD8);
PPC_FUNC_IMPL(__imp__sub_830D9AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830D9AE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830d9b10
	if (!cr6.eq) goto loc_830D9B10;
loc_830D9B04:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830D9B10:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d7e60
	ctx.lr = 0x830D9B20;
	sub_830D7E60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d9b04
	if (cr6.eq) goto loc_830D9B04;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// ble cr6,0x830d9b84
	if (!cr6.gt) goto loc_830D9B84;
loc_830D9B3C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830d99e8
	ctx.lr = 0x830D9B4C;
	sub_830D99E8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830d9b84
	if (!cr6.lt) goto loc_830D9B84;
	// cmpw cr6,r3,r24
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, xer);
	// bne cr6,0x830d9b68
	if (!cr6.eq) goto loc_830D9B68;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, xer);
	// beq cr6,0x830d9b80
	if (cr6.eq) goto loc_830D9B80;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830D9B68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x830d9b3c
	if (cr6.lt) goto loc_830D9B3C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830D9B80:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_830D9B84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9B90"))) PPC_WEAK_FUNC(sub_830D9B90);
PPC_FUNC_IMPL(__imp__sub_830D9B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830D9B98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830d9c4c
	if (cr6.eq) goto loc_830D9C4C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830d9c4c
	if (cr6.eq) goto loc_830D9C4C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830d9c4c
	if (cr6.eq) goto loc_830D9C4C;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x830d9be4
	if (cr6.lt) goto loc_830D9BE4;
	// li r28,9
	ctx.r28.s64 = 9;
	// b 0x830d9bf4
	goto loc_830D9BF4;
loc_830D9BE4:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19960
	ctx.r9.s64 = ctx.r11.s64 + 19960;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830D9BF4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830D9BFC;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830d9c4c
	if (cr6.eq) goto loc_830D9C4C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x830d9c4c
	if (cr6.lt) goto loc_830D9C4C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d9ad8
	ctx.lr = 0x830D9C24;
	sub_830D9AD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830d9c4c
	if (cr6.lt) goto loc_830D9C4C;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d7ef0
	ctx.lr = 0x830D9C44;
	sub_830D7EF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830D9C4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9C58"))) PPC_WEAK_FUNC(sub_830D9C58);
PPC_FUNC_IMPL(__imp__sub_830D9C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D9C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22c10
	ctx.lr = 0x830D9C84;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d9cb0
	if (cr6.lt) goto loc_830D9CB0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830d9cb0
	if (!cr6.lt) goto loc_830D9CB0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d9cb0
	if (cr6.lt) goto loc_830D9CB0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d9cb4
	if (cr6.lt) goto loc_830D9CB4;
loc_830D9CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D9CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830d9cd8
	if (cr6.eq) goto loc_830D9CD8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d82a8
	ctx.lr = 0x830D9CD0;
	sub_830D82A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9CD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830D9CE8;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830d9d0c
	if (!cr6.gt) goto loc_830D9D0C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830d9d04
	if (!cr6.gt) goto loc_830D9D04;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830d9d0c
	if (!cr6.eq) goto loc_830D9D0C;
loc_830D9D04:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830d9d10
	goto loc_830D9D10;
loc_830D9D0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D9D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x830d9d7c
	if (cr6.eq) goto loc_830D9D7C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r9,r10,22488
	ctx.r9.u64 = ctx.r10.u64 | 22488;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830d9d64
	if (!cr6.eq) goto loc_830D9D64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22496
	ctx.r9.u64 = ctx.r10.u64 | 22496;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830d9d64
	if (!cr6.eq) goto loc_830D9D64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d84e8
	ctx.lr = 0x830D9D5C;
	sub_830D84E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9D64:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830d89c8
	ctx.lr = 0x830D9D74;
	sub_830D89C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9D7C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r8,r10,24368
	ctx.r8.u64 = ctx.r10.u64 | 24368;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830d9d9c
	if (cr6.lt) goto loc_830D9D9C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830d9da0
	if (cr6.lt) goto loc_830D9DA0;
loc_830D9D9C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830D9DA0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830d9db8
	if (!cr6.eq) goto loc_830D9DB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9DB8:
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,24372
	ctx.r10.s64 = ctx.r10.s64 + 24372;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bge cr6,0x830d9df4
	if (!cr6.lt) goto loc_830D9DF4;
loc_830D9DE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9DF4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x830d9de0
	if (cr6.lt) goto loc_830D9DE0;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830D9E24"))) PPC_WEAK_FUNC(sub_830D9E24);
PPC_FUNC_IMPL(__imp__sub_830D9E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830D9E28"))) PPC_WEAK_FUNC(sub_830D9E28);
PPC_FUNC_IMPL(__imp__sub_830D9E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830D9E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830d95b0
	ctx.lr = 0x830D9E44;
	sub_830D95B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830d9e5c
	if (cr6.lt) goto loc_830D9E5C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830d9e60
	if (cr6.lt) goto loc_830D9E60;
loc_830D9E5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830D9E60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830d9e78
	if (!cr6.eq) goto loc_830D9E78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9E78:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830D9E88;
	sub_82A0C788(ctx, base);
	// addi r10,r3,1280
	ctx.r10.s64 = ctx.r3.s64 + 1280;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bge cr6,0x830d9ec0
	if (!cr6.lt) goto loc_830D9EC0;
loc_830D9EAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830D9EC0:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x830d9eac
	if (cr6.lt) goto loc_830D9EAC;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r3,1
	ctx.r3.s64 = 1;
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
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

