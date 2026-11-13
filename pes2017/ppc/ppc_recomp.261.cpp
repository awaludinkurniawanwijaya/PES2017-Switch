#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8306FA38"))) PPC_WEAK_FUNC(sub_8306FA38);
PPC_FUNC_IMPL(__imp__sub_8306FA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,10,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FA4C"))) PPC_WEAK_FUNC(sub_8306FA4C);
PPC_FUNC_IMPL(__imp__sub_8306FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FA50"))) PPC_WEAK_FUNC(sub_8306FA50);
PPC_FUNC_IMPL(__imp__sub_8306FA50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,22,8,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0xC00000) | (ctx.r9.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FA6C"))) PPC_WEAK_FUNC(sub_8306FA6C);
PPC_FUNC_IMPL(__imp__sub_8306FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FA70"))) PPC_WEAK_FUNC(sub_8306FA70);
PPC_FUNC_IMPL(__imp__sub_8306FA70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FA84"))) PPC_WEAK_FUNC(sub_8306FA84);
PPC_FUNC_IMPL(__imp__sub_8306FA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FA88"))) PPC_WEAK_FUNC(sub_8306FA88);
PPC_FUNC_IMPL(__imp__sub_8306FA88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,20,10,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x300000) | (ctx.r9.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FAA4"))) PPC_WEAK_FUNC(sub_8306FAA4);
PPC_FUNC_IMPL(__imp__sub_8306FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FAA8"))) PPC_WEAK_FUNC(sub_8306FAA8);
PPC_FUNC_IMPL(__imp__sub_8306FAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FABC"))) PPC_WEAK_FUNC(sub_8306FABC);
PPC_FUNC_IMPL(__imp__sub_8306FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FAC0"))) PPC_WEAK_FUNC(sub_8306FAC0);
PPC_FUNC_IMPL(__imp__sub_8306FAC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,18,12,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xC0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FADC"))) PPC_WEAK_FUNC(sub_8306FADC);
PPC_FUNC_IMPL(__imp__sub_8306FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FAE0"))) PPC_WEAK_FUNC(sub_8306FAE0);
PPC_FUNC_IMPL(__imp__sub_8306FAE0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FAF4"))) PPC_WEAK_FUNC(sub_8306FAF4);
PPC_FUNC_IMPL(__imp__sub_8306FAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FAF8"))) PPC_WEAK_FUNC(sub_8306FAF8);
PPC_FUNC_IMPL(__imp__sub_8306FAF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB14"))) PPC_WEAK_FUNC(sub_8306FB14);
PPC_FUNC_IMPL(__imp__sub_8306FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB18"))) PPC_WEAK_FUNC(sub_8306FB18);
PPC_FUNC_IMPL(__imp__sub_8306FB18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB34"))) PPC_WEAK_FUNC(sub_8306FB34);
PPC_FUNC_IMPL(__imp__sub_8306FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB38"))) PPC_WEAK_FUNC(sub_8306FB38);
PPC_FUNC_IMPL(__imp__sub_8306FB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB4C"))) PPC_WEAK_FUNC(sub_8306FB4C);
PPC_FUNC_IMPL(__imp__sub_8306FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB50"))) PPC_WEAK_FUNC(sub_8306FB50);
PPC_FUNC_IMPL(__imp__sub_8306FB50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB6C"))) PPC_WEAK_FUNC(sub_8306FB6C);
PPC_FUNC_IMPL(__imp__sub_8306FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB70"))) PPC_WEAK_FUNC(sub_8306FB70);
PPC_FUNC_IMPL(__imp__sub_8306FB70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB84"))) PPC_WEAK_FUNC(sub_8306FB84);
PPC_FUNC_IMPL(__imp__sub_8306FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FB88"))) PPC_WEAK_FUNC(sub_8306FB88);
PPC_FUNC_IMPL(__imp__sub_8306FB88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,9,22,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x200) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFDFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FBA4"))) PPC_WEAK_FUNC(sub_8306FBA4);
PPC_FUNC_IMPL(__imp__sub_8306FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FBA8"))) PPC_WEAK_FUNC(sub_8306FBA8);
PPC_FUNC_IMPL(__imp__sub_8306FBA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FBBC"))) PPC_WEAK_FUNC(sub_8306FBBC);
PPC_FUNC_IMPL(__imp__sub_8306FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FBC0"))) PPC_WEAK_FUNC(sub_8306FBC0);
PPC_FUNC_IMPL(__imp__sub_8306FBC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FBDC"))) PPC_WEAK_FUNC(sub_8306FBDC);
PPC_FUNC_IMPL(__imp__sub_8306FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FBE0"))) PPC_WEAK_FUNC(sub_8306FBE0);
PPC_FUNC_IMPL(__imp__sub_8306FBE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FBF4"))) PPC_WEAK_FUNC(sub_8306FBF4);
PPC_FUNC_IMPL(__imp__sub_8306FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FBF8"))) PPC_WEAK_FUNC(sub_8306FBF8);
PPC_FUNC_IMPL(__imp__sub_8306FBF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,7,24,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC14"))) PPC_WEAK_FUNC(sub_8306FC14);
PPC_FUNC_IMPL(__imp__sub_8306FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FC18"))) PPC_WEAK_FUNC(sub_8306FC18);
PPC_FUNC_IMPL(__imp__sub_8306FC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC2C"))) PPC_WEAK_FUNC(sub_8306FC2C);
PPC_FUNC_IMPL(__imp__sub_8306FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FC30"))) PPC_WEAK_FUNC(sub_8306FC30);
PPC_FUNC_IMPL(__imp__sub_8306FC30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,6,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC4C"))) PPC_WEAK_FUNC(sub_8306FC4C);
PPC_FUNC_IMPL(__imp__sub_8306FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FC50"))) PPC_WEAK_FUNC(sub_8306FC50);
PPC_FUNC_IMPL(__imp__sub_8306FC50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC64"))) PPC_WEAK_FUNC(sub_8306FC64);
PPC_FUNC_IMPL(__imp__sub_8306FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FC68"))) PPC_WEAK_FUNC(sub_8306FC68);
PPC_FUNC_IMPL(__imp__sub_8306FC68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC84"))) PPC_WEAK_FUNC(sub_8306FC84);
PPC_FUNC_IMPL(__imp__sub_8306FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FC88"))) PPC_WEAK_FUNC(sub_8306FC88);
PPC_FUNC_IMPL(__imp__sub_8306FC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC9C"))) PPC_WEAK_FUNC(sub_8306FC9C);
PPC_FUNC_IMPL(__imp__sub_8306FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FCA0"))) PPC_WEAK_FUNC(sub_8306FCA0);
PPC_FUNC_IMPL(__imp__sub_8306FCA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,4,27,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FCBC"))) PPC_WEAK_FUNC(sub_8306FCBC);
PPC_FUNC_IMPL(__imp__sub_8306FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FCC0"))) PPC_WEAK_FUNC(sub_8306FCC0);
PPC_FUNC_IMPL(__imp__sub_8306FCC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FCD4"))) PPC_WEAK_FUNC(sub_8306FCD4);
PPC_FUNC_IMPL(__imp__sub_8306FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FCD8"))) PPC_WEAK_FUNC(sub_8306FCD8);
PPC_FUNC_IMPL(__imp__sub_8306FCD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,3,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FCF4"))) PPC_WEAK_FUNC(sub_8306FCF4);
PPC_FUNC_IMPL(__imp__sub_8306FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FCF8"))) PPC_WEAK_FUNC(sub_8306FCF8);
PPC_FUNC_IMPL(__imp__sub_8306FCF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD0C"))) PPC_WEAK_FUNC(sub_8306FD0C);
PPC_FUNC_IMPL(__imp__sub_8306FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FD10"))) PPC_WEAK_FUNC(sub_8306FD10);
PPC_FUNC_IMPL(__imp__sub_8306FD10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD2C"))) PPC_WEAK_FUNC(sub_8306FD2C);
PPC_FUNC_IMPL(__imp__sub_8306FD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FD30"))) PPC_WEAK_FUNC(sub_8306FD30);
PPC_FUNC_IMPL(__imp__sub_8306FD30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD44"))) PPC_WEAK_FUNC(sub_8306FD44);
PPC_FUNC_IMPL(__imp__sub_8306FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FD48"))) PPC_WEAK_FUNC(sub_8306FD48);
PPC_FUNC_IMPL(__imp__sub_8306FD48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD64"))) PPC_WEAK_FUNC(sub_8306FD64);
PPC_FUNC_IMPL(__imp__sub_8306FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FD68"))) PPC_WEAK_FUNC(sub_8306FD68);
PPC_FUNC_IMPL(__imp__sub_8306FD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD7C"))) PPC_WEAK_FUNC(sub_8306FD7C);
PPC_FUNC_IMPL(__imp__sub_8306FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FD80"))) PPC_WEAK_FUNC(sub_8306FD80);
PPC_FUNC_IMPL(__imp__sub_8306FD80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r10,r9,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD9C"))) PPC_WEAK_FUNC(sub_8306FD9C);
PPC_FUNC_IMPL(__imp__sub_8306FD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDA0"))) PPC_WEAK_FUNC(sub_8306FDA0);
PPC_FUNC_IMPL(__imp__sub_8306FDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDB4"))) PPC_WEAK_FUNC(sub_8306FDB4);
PPC_FUNC_IMPL(__imp__sub_8306FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDB8"))) PPC_WEAK_FUNC(sub_8306FDB8);
PPC_FUNC_IMPL(__imp__sub_8306FDB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDD4"))) PPC_WEAK_FUNC(sub_8306FDD4);
PPC_FUNC_IMPL(__imp__sub_8306FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDD8"))) PPC_WEAK_FUNC(sub_8306FDD8);
PPC_FUNC_IMPL(__imp__sub_8306FDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDEC"))) PPC_WEAK_FUNC(sub_8306FDEC);
PPC_FUNC_IMPL(__imp__sub_8306FDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FDF0"))) PPC_WEAK_FUNC(sub_8306FDF0);
PPC_FUNC_IMPL(__imp__sub_8306FDF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE0C"))) PPC_WEAK_FUNC(sub_8306FE0C);
PPC_FUNC_IMPL(__imp__sub_8306FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE10"))) PPC_WEAK_FUNC(sub_8306FE10);
PPC_FUNC_IMPL(__imp__sub_8306FE10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE24"))) PPC_WEAK_FUNC(sub_8306FE24);
PPC_FUNC_IMPL(__imp__sub_8306FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE28"))) PPC_WEAK_FUNC(sub_8306FE28);
PPC_FUNC_IMPL(__imp__sub_8306FE28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,29,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE44"))) PPC_WEAK_FUNC(sub_8306FE44);
PPC_FUNC_IMPL(__imp__sub_8306FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE48"))) PPC_WEAK_FUNC(sub_8306FE48);
PPC_FUNC_IMPL(__imp__sub_8306FE48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE5C"))) PPC_WEAK_FUNC(sub_8306FE5C);
PPC_FUNC_IMPL(__imp__sub_8306FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE60"))) PPC_WEAK_FUNC(sub_8306FE60);
PPC_FUNC_IMPL(__imp__sub_8306FE60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,28,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE7C"))) PPC_WEAK_FUNC(sub_8306FE7C);
PPC_FUNC_IMPL(__imp__sub_8306FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE80"))) PPC_WEAK_FUNC(sub_8306FE80);
PPC_FUNC_IMPL(__imp__sub_8306FE80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE94"))) PPC_WEAK_FUNC(sub_8306FE94);
PPC_FUNC_IMPL(__imp__sub_8306FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FE98"))) PPC_WEAK_FUNC(sub_8306FE98);
PPC_FUNC_IMPL(__imp__sub_8306FE98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,27,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FEB4"))) PPC_WEAK_FUNC(sub_8306FEB4);
PPC_FUNC_IMPL(__imp__sub_8306FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FEB8"))) PPC_WEAK_FUNC(sub_8306FEB8);
PPC_FUNC_IMPL(__imp__sub_8306FEB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FECC"))) PPC_WEAK_FUNC(sub_8306FECC);
PPC_FUNC_IMPL(__imp__sub_8306FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FED0"))) PPC_WEAK_FUNC(sub_8306FED0);
PPC_FUNC_IMPL(__imp__sub_8306FED0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,26,5,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x4000000) | (ctx.r9.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FEEC"))) PPC_WEAK_FUNC(sub_8306FEEC);
PPC_FUNC_IMPL(__imp__sub_8306FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FEF0"))) PPC_WEAK_FUNC(sub_8306FEF0);
PPC_FUNC_IMPL(__imp__sub_8306FEF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF04"))) PPC_WEAK_FUNC(sub_8306FF04);
PPC_FUNC_IMPL(__imp__sub_8306FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF08"))) PPC_WEAK_FUNC(sub_8306FF08);
PPC_FUNC_IMPL(__imp__sub_8306FF08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,25,6,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x2000000) | (ctx.r9.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF24"))) PPC_WEAK_FUNC(sub_8306FF24);
PPC_FUNC_IMPL(__imp__sub_8306FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF28"))) PPC_WEAK_FUNC(sub_8306FF28);
PPC_FUNC_IMPL(__imp__sub_8306FF28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF3C"))) PPC_WEAK_FUNC(sub_8306FF3C);
PPC_FUNC_IMPL(__imp__sub_8306FF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF40"))) PPC_WEAK_FUNC(sub_8306FF40);
PPC_FUNC_IMPL(__imp__sub_8306FF40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,24,7,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x1000000) | (ctx.r9.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF5C"))) PPC_WEAK_FUNC(sub_8306FF5C);
PPC_FUNC_IMPL(__imp__sub_8306FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF60"))) PPC_WEAK_FUNC(sub_8306FF60);
PPC_FUNC_IMPL(__imp__sub_8306FF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF74"))) PPC_WEAK_FUNC(sub_8306FF74);
PPC_FUNC_IMPL(__imp__sub_8306FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF78"))) PPC_WEAK_FUNC(sub_8306FF78);
PPC_FUNC_IMPL(__imp__sub_8306FF78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,23,8,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF94"))) PPC_WEAK_FUNC(sub_8306FF94);
PPC_FUNC_IMPL(__imp__sub_8306FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FF98"))) PPC_WEAK_FUNC(sub_8306FF98);
PPC_FUNC_IMPL(__imp__sub_8306FF98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFAC"))) PPC_WEAK_FUNC(sub_8306FFAC);
PPC_FUNC_IMPL(__imp__sub_8306FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FFB0"))) PPC_WEAK_FUNC(sub_8306FFB0);
PPC_FUNC_IMPL(__imp__sub_8306FFB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,22,9,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0x400000) | (ctx.r9.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFCC"))) PPC_WEAK_FUNC(sub_8306FFCC);
PPC_FUNC_IMPL(__imp__sub_8306FFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FFD0"))) PPC_WEAK_FUNC(sub_8306FFD0);
PPC_FUNC_IMPL(__imp__sub_8306FFD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFE4"))) PPC_WEAK_FUNC(sub_8306FFE4);
PPC_FUNC_IMPL(__imp__sub_8306FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8306FFE8"))) PPC_WEAK_FUNC(sub_8306FFE8);
PPC_FUNC_IMPL(__imp__sub_8306FFE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,21,10,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x200000) | (ctx.r9.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070004"))) PPC_WEAK_FUNC(sub_83070004);
PPC_FUNC_IMPL(__imp__sub_83070004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070008"))) PPC_WEAK_FUNC(sub_83070008);
PPC_FUNC_IMPL(__imp__sub_83070008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307001C"))) PPC_WEAK_FUNC(sub_8307001C);
PPC_FUNC_IMPL(__imp__sub_8307001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070020"))) PPC_WEAK_FUNC(sub_83070020);
PPC_FUNC_IMPL(__imp__sub_83070020) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,20,11,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x100000) | (ctx.r9.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307003C"))) PPC_WEAK_FUNC(sub_8307003C);
PPC_FUNC_IMPL(__imp__sub_8307003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070040"))) PPC_WEAK_FUNC(sub_83070040);
PPC_FUNC_IMPL(__imp__sub_83070040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070054"))) PPC_WEAK_FUNC(sub_83070054);
PPC_FUNC_IMPL(__imp__sub_83070054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070058"))) PPC_WEAK_FUNC(sub_83070058);
PPC_FUNC_IMPL(__imp__sub_83070058) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,19,12,12
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x80000) | (ctx.r9.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070074"))) PPC_WEAK_FUNC(sub_83070074);
PPC_FUNC_IMPL(__imp__sub_83070074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070078"))) PPC_WEAK_FUNC(sub_83070078);
PPC_FUNC_IMPL(__imp__sub_83070078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307008C"))) PPC_WEAK_FUNC(sub_8307008C);
PPC_FUNC_IMPL(__imp__sub_8307008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070090"))) PPC_WEAK_FUNC(sub_83070090);
PPC_FUNC_IMPL(__imp__sub_83070090) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,18,13,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x40000) | (ctx.r9.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700AC"))) PPC_WEAK_FUNC(sub_830700AC);
PPC_FUNC_IMPL(__imp__sub_830700AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830700B0"))) PPC_WEAK_FUNC(sub_830700B0);
PPC_FUNC_IMPL(__imp__sub_830700B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700C4"))) PPC_WEAK_FUNC(sub_830700C4);
PPC_FUNC_IMPL(__imp__sub_830700C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830700C8"))) PPC_WEAK_FUNC(sub_830700C8);
PPC_FUNC_IMPL(__imp__sub_830700C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,17,14,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700E4"))) PPC_WEAK_FUNC(sub_830700E4);
PPC_FUNC_IMPL(__imp__sub_830700E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830700E8"))) PPC_WEAK_FUNC(sub_830700E8);
PPC_FUNC_IMPL(__imp__sub_830700E8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700FC"))) PPC_WEAK_FUNC(sub_830700FC);
PPC_FUNC_IMPL(__imp__sub_830700FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070100"))) PPC_WEAK_FUNC(sub_83070100);
PPC_FUNC_IMPL(__imp__sub_83070100) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,16,15,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x10000) | (ctx.r9.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307011C"))) PPC_WEAK_FUNC(sub_8307011C);
PPC_FUNC_IMPL(__imp__sub_8307011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070120"))) PPC_WEAK_FUNC(sub_83070120);
PPC_FUNC_IMPL(__imp__sub_83070120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070134"))) PPC_WEAK_FUNC(sub_83070134);
PPC_FUNC_IMPL(__imp__sub_83070134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070138"))) PPC_WEAK_FUNC(sub_83070138);
PPC_FUNC_IMPL(__imp__sub_83070138) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,15,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 15) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070154"))) PPC_WEAK_FUNC(sub_83070154);
PPC_FUNC_IMPL(__imp__sub_83070154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070158"))) PPC_WEAK_FUNC(sub_83070158);
PPC_FUNC_IMPL(__imp__sub_83070158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307016C"))) PPC_WEAK_FUNC(sub_8307016C);
PPC_FUNC_IMPL(__imp__sub_8307016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070170"))) PPC_WEAK_FUNC(sub_83070170);
PPC_FUNC_IMPL(__imp__sub_83070170) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,14,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307018C"))) PPC_WEAK_FUNC(sub_8307018C);
PPC_FUNC_IMPL(__imp__sub_8307018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070190"))) PPC_WEAK_FUNC(sub_83070190);
PPC_FUNC_IMPL(__imp__sub_83070190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830701A4"))) PPC_WEAK_FUNC(sub_830701A4);
PPC_FUNC_IMPL(__imp__sub_830701A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830701A8"))) PPC_WEAK_FUNC(sub_830701A8);
PPC_FUNC_IMPL(__imp__sub_830701A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,13,18,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830701C4"))) PPC_WEAK_FUNC(sub_830701C4);
PPC_FUNC_IMPL(__imp__sub_830701C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830701C8"))) PPC_WEAK_FUNC(sub_830701C8);
PPC_FUNC_IMPL(__imp__sub_830701C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830701DC"))) PPC_WEAK_FUNC(sub_830701DC);
PPC_FUNC_IMPL(__imp__sub_830701DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830701E0"))) PPC_WEAK_FUNC(sub_830701E0);
PPC_FUNC_IMPL(__imp__sub_830701E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,12,19,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830701FC"))) PPC_WEAK_FUNC(sub_830701FC);
PPC_FUNC_IMPL(__imp__sub_830701FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070200"))) PPC_WEAK_FUNC(sub_83070200);
PPC_FUNC_IMPL(__imp__sub_83070200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070214"))) PPC_WEAK_FUNC(sub_83070214);
PPC_FUNC_IMPL(__imp__sub_83070214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070218"))) PPC_WEAK_FUNC(sub_83070218);
PPC_FUNC_IMPL(__imp__sub_83070218) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070234"))) PPC_WEAK_FUNC(sub_83070234);
PPC_FUNC_IMPL(__imp__sub_83070234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070238"))) PPC_WEAK_FUNC(sub_83070238);
PPC_FUNC_IMPL(__imp__sub_83070238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307024C"))) PPC_WEAK_FUNC(sub_8307024C);
PPC_FUNC_IMPL(__imp__sub_8307024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070250"))) PPC_WEAK_FUNC(sub_83070250);
PPC_FUNC_IMPL(__imp__sub_83070250) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307026C"))) PPC_WEAK_FUNC(sub_8307026C);
PPC_FUNC_IMPL(__imp__sub_8307026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070270"))) PPC_WEAK_FUNC(sub_83070270);
PPC_FUNC_IMPL(__imp__sub_83070270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070284"))) PPC_WEAK_FUNC(sub_83070284);
PPC_FUNC_IMPL(__imp__sub_83070284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070288"))) PPC_WEAK_FUNC(sub_83070288);
PPC_FUNC_IMPL(__imp__sub_83070288) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,9,22,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x200) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFDFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830702A4"))) PPC_WEAK_FUNC(sub_830702A4);
PPC_FUNC_IMPL(__imp__sub_830702A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830702A8"))) PPC_WEAK_FUNC(sub_830702A8);
PPC_FUNC_IMPL(__imp__sub_830702A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830702BC"))) PPC_WEAK_FUNC(sub_830702BC);
PPC_FUNC_IMPL(__imp__sub_830702BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830702C0"))) PPC_WEAK_FUNC(sub_830702C0);
PPC_FUNC_IMPL(__imp__sub_830702C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830702DC"))) PPC_WEAK_FUNC(sub_830702DC);
PPC_FUNC_IMPL(__imp__sub_830702DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830702E0"))) PPC_WEAK_FUNC(sub_830702E0);
PPC_FUNC_IMPL(__imp__sub_830702E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830702F4"))) PPC_WEAK_FUNC(sub_830702F4);
PPC_FUNC_IMPL(__imp__sub_830702F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830702F8"))) PPC_WEAK_FUNC(sub_830702F8);
PPC_FUNC_IMPL(__imp__sub_830702F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,14,16,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070314"))) PPC_WEAK_FUNC(sub_83070314);
PPC_FUNC_IMPL(__imp__sub_83070314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070318"))) PPC_WEAK_FUNC(sub_83070318);
PPC_FUNC_IMPL(__imp__sub_83070318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307032C"))) PPC_WEAK_FUNC(sub_8307032C);
PPC_FUNC_IMPL(__imp__sub_8307032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070330"))) PPC_WEAK_FUNC(sub_83070330);
PPC_FUNC_IMPL(__imp__sub_83070330) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,1,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307034C"))) PPC_WEAK_FUNC(sub_8307034C);
PPC_FUNC_IMPL(__imp__sub_8307034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070350"))) PPC_WEAK_FUNC(sub_83070350);
PPC_FUNC_IMPL(__imp__sub_83070350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070364"))) PPC_WEAK_FUNC(sub_83070364);
PPC_FUNC_IMPL(__imp__sub_83070364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070368"))) PPC_WEAK_FUNC(sub_83070368);
PPC_FUNC_IMPL(__imp__sub_83070368) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,12,18,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070384"))) PPC_WEAK_FUNC(sub_83070384);
PPC_FUNC_IMPL(__imp__sub_83070384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070388"))) PPC_WEAK_FUNC(sub_83070388);
PPC_FUNC_IMPL(__imp__sub_83070388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,10,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307039C"))) PPC_WEAK_FUNC(sub_8307039C);
PPC_FUNC_IMPL(__imp__sub_8307039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830703A0"))) PPC_WEAK_FUNC(sub_830703A0);
PPC_FUNC_IMPL(__imp__sub_830703A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,22,7,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0x1C00000) | (ctx.r9.u64 & 0xFFFFFFFFFE3FFFFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830703BC"))) PPC_WEAK_FUNC(sub_830703BC);
PPC_FUNC_IMPL(__imp__sub_830703BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830703C0"))) PPC_WEAK_FUNC(sub_830703C0);
PPC_FUNC_IMPL(__imp__sub_830703C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830703D4"))) PPC_WEAK_FUNC(sub_830703D4);
PPC_FUNC_IMPL(__imp__sub_830703D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830703D8"))) PPC_WEAK_FUNC(sub_830703D8);
PPC_FUNC_IMPL(__imp__sub_830703D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830703EC"))) PPC_WEAK_FUNC(sub_830703EC);
PPC_FUNC_IMPL(__imp__sub_830703EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830703F0"))) PPC_WEAK_FUNC(sub_830703F0);
PPC_FUNC_IMPL(__imp__sub_830703F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,10,20,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0xC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF3FF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307040C"))) PPC_WEAK_FUNC(sub_8307040C);
PPC_FUNC_IMPL(__imp__sub_8307040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070410"))) PPC_WEAK_FUNC(sub_83070410);
PPC_FUNC_IMPL(__imp__sub_83070410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070424"))) PPC_WEAK_FUNC(sub_83070424);
PPC_FUNC_IMPL(__imp__sub_83070424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070428"))) PPC_WEAK_FUNC(sub_83070428);
PPC_FUNC_IMPL(__imp__sub_83070428) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,19,10,12
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x380000) | (ctx.r9.u64 & 0xFFFFFFFFFFC7FFFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070444"))) PPC_WEAK_FUNC(sub_83070444);
PPC_FUNC_IMPL(__imp__sub_83070444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070448"))) PPC_WEAK_FUNC(sub_83070448);
PPC_FUNC_IMPL(__imp__sub_83070448) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070458"))) PPC_WEAK_FUNC(sub_83070458);
PPC_FUNC_IMPL(__imp__sub_83070458) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,15(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070468"))) PPC_WEAK_FUNC(sub_83070468);
PPC_FUNC_IMPL(__imp__sub_83070468) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830704d0
	if (cr6.eq) goto loc_830704D0;
	// cmplwi cr6,r5,46
	cr6.compare<uint32_t>(ctx.r5.u32, 46, xer);
	// bgt cr6,0x830704d0
	if (cr6.gt) goto loc_830704D0;
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830704b4
	if (cr6.eq) goto loc_830704B4;
	// bl 0x831ce980
	ctx.lr = 0x830704A0;
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
loc_830704B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x830704BC;
	sub_831CDCF0(ctx, base);
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
loc_830704D0:
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

__attribute__((alias("__imp__sub_830704E4"))) PPC_WEAK_FUNC(sub_830704E4);
PPC_FUNC_IMPL(__imp__sub_830704E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830704E8"))) PPC_WEAK_FUNC(sub_830704E8);
PPC_FUNC_IMPL(__imp__sub_830704E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830704F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,46
	cr6.compare<uint32_t>(ctx.r5.u32, 46, xer);
	// blt cr6,0x83070508
	if (cr6.lt) goto loc_83070508;
	// li r30,46
	ctx.r30.s64 = 46;
loc_83070508:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83070540
	if (cr6.eq) goto loc_83070540;
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83070524;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83070534;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83070540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307054C"))) PPC_WEAK_FUNC(sub_8307054C);
PPC_FUNC_IMPL(__imp__sub_8307054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070550"))) PPC_WEAK_FUNC(sub_83070550);
PPC_FUNC_IMPL(__imp__sub_83070550) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830705b8
	if (cr6.eq) goto loc_830705B8;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bgt cr6,0x830705b8
	if (cr6.gt) goto loc_830705B8;
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// addi r4,r11,98
	ctx.r4.s64 = ctx.r11.s64 + 98;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8307059c
	if (cr6.eq) goto loc_8307059C;
	// bl 0x831ce980
	ctx.lr = 0x83070588;
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
loc_8307059C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x830705A4;
	sub_831CDCF0(ctx, base);
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
loc_830705B8:
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

__attribute__((alias("__imp__sub_830705CC"))) PPC_WEAK_FUNC(sub_830705CC);
PPC_FUNC_IMPL(__imp__sub_830705CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830705D0"))) PPC_WEAK_FUNC(sub_830705D0);
PPC_FUNC_IMPL(__imp__sub_830705D0) {
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
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x830705e8
	if (cr6.lt) goto loc_830705E8;
	// li r5,16
	ctx.r5.s64 = 16;
loc_830705E8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83070624
	if (cr6.eq) goto loc_83070624;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r3,r3,98
	ctx.r3.s64 = ctx.r3.s64 + 98;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83070604:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83070604
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83070604;
	// bl 0x831ce980
	ctx.lr = 0x83070610;
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
loc_83070624:
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

__attribute__((alias("__imp__sub_83070638"))) PPC_WEAK_FUNC(sub_83070638);
PPC_FUNC_IMPL(__imp__sub_83070638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83070674
	if (cr6.lt) goto loc_83070674;
	// cmpwi cr6,r5,105
	cr6.compare<int32_t>(ctx.r5.s32, 105, xer);
	// bgt cr6,0x83070674
	if (cr6.gt) goto loc_83070674;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,672
	ctx.r8.s64 = ctx.r10.s64 + 672;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83070658:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x8307067c
	if (cr6.eq) goto loc_8307067C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,106
	cr6.compare<uint32_t>(ctx.r11.u32, 106, xer);
	// blt cr6,0x83070658
	if (cr6.lt) goto loc_83070658;
loc_83070674:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8307067C:
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
loc_83070694:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83070694
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83070694;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830706A8"))) PPC_WEAK_FUNC(sub_830706A8);
PPC_FUNC_IMPL(__imp__sub_830706A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,106
	cr6.compare<int32_t>(ctx.r5.s32, 106, xer);
	// blt cr6,0x830706ec
	if (cr6.lt) goto loc_830706EC;
	// cmpwi cr6,r5,107
	cr6.compare<int32_t>(ctx.r5.s32, 107, xer);
	// bgt cr6,0x830706ec
	if (cr6.gt) goto loc_830706EC;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,4064
	ctx.r8.s64 = ctx.r10.s64 + 4064;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830706CC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x830706f4
	if (cr6.eq) goto loc_830706F4;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,56
	cr6.compare<uint32_t>(ctx.r9.u32, 56, xer);
	// blt cr6,0x830706cc
	if (cr6.lt) goto loc_830706CC;
loc_830706EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830706F4:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8307070C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8307070c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8307070C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070720"))) PPC_WEAK_FUNC(sub_83070720);
PPC_FUNC_IMPL(__imp__sub_83070720) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070730"))) PPC_WEAK_FUNC(sub_83070730);
PPC_FUNC_IMPL(__imp__sub_83070730) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070744"))) PPC_WEAK_FUNC(sub_83070744);
PPC_FUNC_IMPL(__imp__sub_83070744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070748"))) PPC_WEAK_FUNC(sub_83070748);
PPC_FUNC_IMPL(__imp__sub_83070748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307075C"))) PPC_WEAK_FUNC(sub_8307075C);
PPC_FUNC_IMPL(__imp__sub_8307075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070760"))) PPC_WEAK_FUNC(sub_83070760);
PPC_FUNC_IMPL(__imp__sub_83070760) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,15,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 15) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307077C"))) PPC_WEAK_FUNC(sub_8307077C);
PPC_FUNC_IMPL(__imp__sub_8307077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070780"))) PPC_WEAK_FUNC(sub_83070780);
PPC_FUNC_IMPL(__imp__sub_83070780) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830707e8
	if (cr6.eq) goto loc_830707E8;
	// cmplwi cr6,r5,121
	cr6.compare<uint32_t>(ctx.r5.u32, 121, xer);
	// bgt cr6,0x830707e8
	if (cr6.gt) goto loc_830707E8;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830707cc
	if (cr6.eq) goto loc_830707CC;
	// bl 0x831ce980
	ctx.lr = 0x830707B8;
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
loc_830707CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x830707D4;
	sub_831CDCF0(ctx, base);
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
loc_830707E8:
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

__attribute__((alias("__imp__sub_830707FC"))) PPC_WEAK_FUNC(sub_830707FC);
PPC_FUNC_IMPL(__imp__sub_830707FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070800"))) PPC_WEAK_FUNC(sub_83070800);
PPC_FUNC_IMPL(__imp__sub_83070800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83070808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,121
	cr6.compare<uint32_t>(ctx.r5.u32, 121, xer);
	// blt cr6,0x83070820
	if (cr6.lt) goto loc_83070820;
	// li r30,121
	ctx.r30.s64 = 121;
loc_83070820:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83070858
	if (cr6.eq) goto loc_83070858;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r5,121
	ctx.r5.s64 = 121;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8307083C;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8307084C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83070858:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83070864"))) PPC_WEAK_FUNC(sub_83070864);
PPC_FUNC_IMPL(__imp__sub_83070864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070868"))) PPC_WEAK_FUNC(sub_83070868);
PPC_FUNC_IMPL(__imp__sub_83070868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x830708a4
	if (cr6.lt) goto loc_830708A4;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bgt cr6,0x830708a4
	if (cr6.gt) goto loc_830708A4;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,4224
	ctx.r8.s64 = ctx.r10.s64 + 4224;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83070888:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x830708ac
	if (cr6.eq) goto loc_830708AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83070888
	if (cr6.lt) goto loc_83070888;
loc_830708A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830708AC:
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
loc_830708C4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830708c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830708C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830708D8"))) PPC_WEAK_FUNC(sub_830708D8);
PPC_FUNC_IMPL(__imp__sub_830708D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x83070918
	if (cr6.lt) goto loc_83070918;
	// bgt cr6,0x83070918
	if (cr6.gt) goto loc_83070918;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,4288
	ctx.r8.s64 = ctx.r10.s64 + 4288;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_830708F8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x83070920
	if (cr6.eq) goto loc_83070920;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,28
	cr6.compare<uint32_t>(ctx.r9.u32, 28, xer);
	// blt cr6,0x830708f8
	if (cr6.lt) goto loc_830708F8;
loc_83070918:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83070920:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83070938:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83070938
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83070938;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307094C"))) PPC_WEAK_FUNC(sub_8307094C);
PPC_FUNC_IMPL(__imp__sub_8307094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070950"))) PPC_WEAK_FUNC(sub_83070950);
PPC_FUNC_IMPL(__imp__sub_83070950) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070964"))) PPC_WEAK_FUNC(sub_83070964);
PPC_FUNC_IMPL(__imp__sub_83070964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070968"))) PPC_WEAK_FUNC(sub_83070968);
PPC_FUNC_IMPL(__imp__sub_83070968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070978"))) PPC_WEAK_FUNC(sub_83070978);
PPC_FUNC_IMPL(__imp__sub_83070978) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307098C"))) PPC_WEAK_FUNC(sub_8307098C);
PPC_FUNC_IMPL(__imp__sub_8307098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070990"))) PPC_WEAK_FUNC(sub_83070990);
PPC_FUNC_IMPL(__imp__sub_83070990) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830709AC"))) PPC_WEAK_FUNC(sub_830709AC);
PPC_FUNC_IMPL(__imp__sub_830709AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830709B0"))) PPC_WEAK_FUNC(sub_830709B0);
PPC_FUNC_IMPL(__imp__sub_830709B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830709C4"))) PPC_WEAK_FUNC(sub_830709C4);
PPC_FUNC_IMPL(__imp__sub_830709C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830709C8"))) PPC_WEAK_FUNC(sub_830709C8);
PPC_FUNC_IMPL(__imp__sub_830709C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// rlwimi r9,r10,6,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830709E4"))) PPC_WEAK_FUNC(sub_830709E4);
PPC_FUNC_IMPL(__imp__sub_830709E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830709E8"))) PPC_WEAK_FUNC(sub_830709E8);
PPC_FUNC_IMPL(__imp__sub_830709E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830709FC"))) PPC_WEAK_FUNC(sub_830709FC);
PPC_FUNC_IMPL(__imp__sub_830709FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070A00"))) PPC_WEAK_FUNC(sub_83070A00);
PPC_FUNC_IMPL(__imp__sub_83070A00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// rlwimi r9,r10,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A1C"))) PPC_WEAK_FUNC(sub_83070A1C);
PPC_FUNC_IMPL(__imp__sub_83070A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070A20"))) PPC_WEAK_FUNC(sub_83070A20);
PPC_FUNC_IMPL(__imp__sub_83070A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A34"))) PPC_WEAK_FUNC(sub_83070A34);
PPC_FUNC_IMPL(__imp__sub_83070A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070A38"))) PPC_WEAK_FUNC(sub_83070A38);
PPC_FUNC_IMPL(__imp__sub_83070A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A4C"))) PPC_WEAK_FUNC(sub_83070A4C);
PPC_FUNC_IMPL(__imp__sub_83070A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070A50"))) PPC_WEAK_FUNC(sub_83070A50);
PPC_FUNC_IMPL(__imp__sub_83070A50) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A60"))) PPC_WEAK_FUNC(sub_83070A60);
PPC_FUNC_IMPL(__imp__sub_83070A60) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A70"))) PPC_WEAK_FUNC(sub_83070A70);
PPC_FUNC_IMPL(__imp__sub_83070A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A84"))) PPC_WEAK_FUNC(sub_83070A84);
PPC_FUNC_IMPL(__imp__sub_83070A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070A88"))) PPC_WEAK_FUNC(sub_83070A88);
PPC_FUNC_IMPL(__imp__sub_83070A88) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A98"))) PPC_WEAK_FUNC(sub_83070A98);
PPC_FUNC_IMPL(__imp__sub_83070A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070AAC"))) PPC_WEAK_FUNC(sub_83070AAC);
PPC_FUNC_IMPL(__imp__sub_83070AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070AB0"))) PPC_WEAK_FUNC(sub_83070AB0);
PPC_FUNC_IMPL(__imp__sub_83070AB0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070AC0"))) PPC_WEAK_FUNC(sub_83070AC0);
PPC_FUNC_IMPL(__imp__sub_83070AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070AD4"))) PPC_WEAK_FUNC(sub_83070AD4);
PPC_FUNC_IMPL(__imp__sub_83070AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070AD8"))) PPC_WEAK_FUNC(sub_83070AD8);
PPC_FUNC_IMPL(__imp__sub_83070AD8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070AE8"))) PPC_WEAK_FUNC(sub_83070AE8);
PPC_FUNC_IMPL(__imp__sub_83070AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070AFC"))) PPC_WEAK_FUNC(sub_83070AFC);
PPC_FUNC_IMPL(__imp__sub_83070AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070B00"))) PPC_WEAK_FUNC(sub_83070B00);
PPC_FUNC_IMPL(__imp__sub_83070B00) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B10"))) PPC_WEAK_FUNC(sub_83070B10);
PPC_FUNC_IMPL(__imp__sub_83070B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B24"))) PPC_WEAK_FUNC(sub_83070B24);
PPC_FUNC_IMPL(__imp__sub_83070B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070B28"))) PPC_WEAK_FUNC(sub_83070B28);
PPC_FUNC_IMPL(__imp__sub_83070B28) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B38"))) PPC_WEAK_FUNC(sub_83070B38);
PPC_FUNC_IMPL(__imp__sub_83070B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B4C"))) PPC_WEAK_FUNC(sub_83070B4C);
PPC_FUNC_IMPL(__imp__sub_83070B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070B50"))) PPC_WEAK_FUNC(sub_83070B50);
PPC_FUNC_IMPL(__imp__sub_83070B50) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B60"))) PPC_WEAK_FUNC(sub_83070B60);
PPC_FUNC_IMPL(__imp__sub_83070B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B74"))) PPC_WEAK_FUNC(sub_83070B74);
PPC_FUNC_IMPL(__imp__sub_83070B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070B78"))) PPC_WEAK_FUNC(sub_83070B78);
PPC_FUNC_IMPL(__imp__sub_83070B78) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B88"))) PPC_WEAK_FUNC(sub_83070B88);
PPC_FUNC_IMPL(__imp__sub_83070B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B9C"))) PPC_WEAK_FUNC(sub_83070B9C);
PPC_FUNC_IMPL(__imp__sub_83070B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83070BA0"))) PPC_WEAK_FUNC(sub_83070BA0);
PPC_FUNC_IMPL(__imp__sub_83070BA0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070BB0"))) PPC_WEAK_FUNC(sub_83070BB0);
PPC_FUNC_IMPL(__imp__sub_83070BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070BC4"))) PPC_WEAK_FUNC(sub_83070BC4);
PPC_FUNC_IMPL(__imp__sub_83070BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

