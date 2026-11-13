#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8373E518"))) PPC_WEAK_FUNC(sub_8373E518);
PPC_FUNC_IMPL(__imp__sub_8373E518) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E534"))) PPC_WEAK_FUNC(sub_8373E534);
PPC_FUNC_IMPL(__imp__sub_8373E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E538"))) PPC_WEAK_FUNC(sub_8373E538);
PPC_FUNC_IMPL(__imp__sub_8373E538) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E54C"))) PPC_WEAK_FUNC(sub_8373E54C);
PPC_FUNC_IMPL(__imp__sub_8373E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E550"))) PPC_WEAK_FUNC(sub_8373E550);
PPC_FUNC_IMPL(__imp__sub_8373E550) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E56C"))) PPC_WEAK_FUNC(sub_8373E56C);
PPC_FUNC_IMPL(__imp__sub_8373E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E570"))) PPC_WEAK_FUNC(sub_8373E570);
PPC_FUNC_IMPL(__imp__sub_8373E570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E584"))) PPC_WEAK_FUNC(sub_8373E584);
PPC_FUNC_IMPL(__imp__sub_8373E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E588"))) PPC_WEAK_FUNC(sub_8373E588);
PPC_FUNC_IMPL(__imp__sub_8373E588) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,20,8,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r9.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E5A4"))) PPC_WEAK_FUNC(sub_8373E5A4);
PPC_FUNC_IMPL(__imp__sub_8373E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E5A8"))) PPC_WEAK_FUNC(sub_8373E5A8);
PPC_FUNC_IMPL(__imp__sub_8373E5A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E5BC"))) PPC_WEAK_FUNC(sub_8373E5BC);
PPC_FUNC_IMPL(__imp__sub_8373E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E5C0"))) PPC_WEAK_FUNC(sub_8373E5C0);
PPC_FUNC_IMPL(__imp__sub_8373E5C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E5DC"))) PPC_WEAK_FUNC(sub_8373E5DC);
PPC_FUNC_IMPL(__imp__sub_8373E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E5E0"))) PPC_WEAK_FUNC(sub_8373E5E0);
PPC_FUNC_IMPL(__imp__sub_8373E5E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E5F4"))) PPC_WEAK_FUNC(sub_8373E5F4);
PPC_FUNC_IMPL(__imp__sub_8373E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E5F8"))) PPC_WEAK_FUNC(sub_8373E5F8);
PPC_FUNC_IMPL(__imp__sub_8373E5F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E614"))) PPC_WEAK_FUNC(sub_8373E614);
PPC_FUNC_IMPL(__imp__sub_8373E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E618"))) PPC_WEAK_FUNC(sub_8373E618);
PPC_FUNC_IMPL(__imp__sub_8373E618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E62C"))) PPC_WEAK_FUNC(sub_8373E62C);
PPC_FUNC_IMPL(__imp__sub_8373E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E630"))) PPC_WEAK_FUNC(sub_8373E630);
PPC_FUNC_IMPL(__imp__sub_8373E630) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E64C"))) PPC_WEAK_FUNC(sub_8373E64C);
PPC_FUNC_IMPL(__imp__sub_8373E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E650"))) PPC_WEAK_FUNC(sub_8373E650);
PPC_FUNC_IMPL(__imp__sub_8373E650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E664"))) PPC_WEAK_FUNC(sub_8373E664);
PPC_FUNC_IMPL(__imp__sub_8373E664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E668"))) PPC_WEAK_FUNC(sub_8373E668);
PPC_FUNC_IMPL(__imp__sub_8373E668) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E684"))) PPC_WEAK_FUNC(sub_8373E684);
PPC_FUNC_IMPL(__imp__sub_8373E684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E688"))) PPC_WEAK_FUNC(sub_8373E688);
PPC_FUNC_IMPL(__imp__sub_8373E688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E69C"))) PPC_WEAK_FUNC(sub_8373E69C);
PPC_FUNC_IMPL(__imp__sub_8373E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E6A0"))) PPC_WEAK_FUNC(sub_8373E6A0);
PPC_FUNC_IMPL(__imp__sub_8373E6A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r10,r9,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E6BC"))) PPC_WEAK_FUNC(sub_8373E6BC);
PPC_FUNC_IMPL(__imp__sub_8373E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E6C0"))) PPC_WEAK_FUNC(sub_8373E6C0);
PPC_FUNC_IMPL(__imp__sub_8373E6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E6D4"))) PPC_WEAK_FUNC(sub_8373E6D4);
PPC_FUNC_IMPL(__imp__sub_8373E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E6D8"))) PPC_WEAK_FUNC(sub_8373E6D8);
PPC_FUNC_IMPL(__imp__sub_8373E6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E6F4"))) PPC_WEAK_FUNC(sub_8373E6F4);
PPC_FUNC_IMPL(__imp__sub_8373E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E6F8"))) PPC_WEAK_FUNC(sub_8373E6F8);
PPC_FUNC_IMPL(__imp__sub_8373E6F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E70C"))) PPC_WEAK_FUNC(sub_8373E70C);
PPC_FUNC_IMPL(__imp__sub_8373E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E710"))) PPC_WEAK_FUNC(sub_8373E710);
PPC_FUNC_IMPL(__imp__sub_8373E710) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E72C"))) PPC_WEAK_FUNC(sub_8373E72C);
PPC_FUNC_IMPL(__imp__sub_8373E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E730"))) PPC_WEAK_FUNC(sub_8373E730);
PPC_FUNC_IMPL(__imp__sub_8373E730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E744"))) PPC_WEAK_FUNC(sub_8373E744);
PPC_FUNC_IMPL(__imp__sub_8373E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E748"))) PPC_WEAK_FUNC(sub_8373E748);
PPC_FUNC_IMPL(__imp__sub_8373E748) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,20,8,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r9.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E764"))) PPC_WEAK_FUNC(sub_8373E764);
PPC_FUNC_IMPL(__imp__sub_8373E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E768"))) PPC_WEAK_FUNC(sub_8373E768);
PPC_FUNC_IMPL(__imp__sub_8373E768) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E77C"))) PPC_WEAK_FUNC(sub_8373E77C);
PPC_FUNC_IMPL(__imp__sub_8373E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E780"))) PPC_WEAK_FUNC(sub_8373E780);
PPC_FUNC_IMPL(__imp__sub_8373E780) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E79C"))) PPC_WEAK_FUNC(sub_8373E79C);
PPC_FUNC_IMPL(__imp__sub_8373E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E7A0"))) PPC_WEAK_FUNC(sub_8373E7A0);
PPC_FUNC_IMPL(__imp__sub_8373E7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E7B4"))) PPC_WEAK_FUNC(sub_8373E7B4);
PPC_FUNC_IMPL(__imp__sub_8373E7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E7B8"))) PPC_WEAK_FUNC(sub_8373E7B8);
PPC_FUNC_IMPL(__imp__sub_8373E7B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E7D4"))) PPC_WEAK_FUNC(sub_8373E7D4);
PPC_FUNC_IMPL(__imp__sub_8373E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E7D8"))) PPC_WEAK_FUNC(sub_8373E7D8);
PPC_FUNC_IMPL(__imp__sub_8373E7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E7EC"))) PPC_WEAK_FUNC(sub_8373E7EC);
PPC_FUNC_IMPL(__imp__sub_8373E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E7F0"))) PPC_WEAK_FUNC(sub_8373E7F0);
PPC_FUNC_IMPL(__imp__sub_8373E7F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E80C"))) PPC_WEAK_FUNC(sub_8373E80C);
PPC_FUNC_IMPL(__imp__sub_8373E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E810"))) PPC_WEAK_FUNC(sub_8373E810);
PPC_FUNC_IMPL(__imp__sub_8373E810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E824"))) PPC_WEAK_FUNC(sub_8373E824);
PPC_FUNC_IMPL(__imp__sub_8373E824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E828"))) PPC_WEAK_FUNC(sub_8373E828);
PPC_FUNC_IMPL(__imp__sub_8373E828) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r9,r10,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E844"))) PPC_WEAK_FUNC(sub_8373E844);
PPC_FUNC_IMPL(__imp__sub_8373E844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E848"))) PPC_WEAK_FUNC(sub_8373E848);
PPC_FUNC_IMPL(__imp__sub_8373E848) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E85C"))) PPC_WEAK_FUNC(sub_8373E85C);
PPC_FUNC_IMPL(__imp__sub_8373E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E860"))) PPC_WEAK_FUNC(sub_8373E860);
PPC_FUNC_IMPL(__imp__sub_8373E860) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwimi r10,r9,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E87C"))) PPC_WEAK_FUNC(sub_8373E87C);
PPC_FUNC_IMPL(__imp__sub_8373E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E880"))) PPC_WEAK_FUNC(sub_8373E880);
PPC_FUNC_IMPL(__imp__sub_8373E880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E894"))) PPC_WEAK_FUNC(sub_8373E894);
PPC_FUNC_IMPL(__imp__sub_8373E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E898"))) PPC_WEAK_FUNC(sub_8373E898);
PPC_FUNC_IMPL(__imp__sub_8373E898) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E8B4"))) PPC_WEAK_FUNC(sub_8373E8B4);
PPC_FUNC_IMPL(__imp__sub_8373E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E8B8"))) PPC_WEAK_FUNC(sub_8373E8B8);
PPC_FUNC_IMPL(__imp__sub_8373E8B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E8CC"))) PPC_WEAK_FUNC(sub_8373E8CC);
PPC_FUNC_IMPL(__imp__sub_8373E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E8D0"))) PPC_WEAK_FUNC(sub_8373E8D0);
PPC_FUNC_IMPL(__imp__sub_8373E8D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E8EC"))) PPC_WEAK_FUNC(sub_8373E8EC);
PPC_FUNC_IMPL(__imp__sub_8373E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E8F0"))) PPC_WEAK_FUNC(sub_8373E8F0);
PPC_FUNC_IMPL(__imp__sub_8373E8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E904"))) PPC_WEAK_FUNC(sub_8373E904);
PPC_FUNC_IMPL(__imp__sub_8373E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E908"))) PPC_WEAK_FUNC(sub_8373E908);
PPC_FUNC_IMPL(__imp__sub_8373E908) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,20,8,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r9.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E924"))) PPC_WEAK_FUNC(sub_8373E924);
PPC_FUNC_IMPL(__imp__sub_8373E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E928"))) PPC_WEAK_FUNC(sub_8373E928);
PPC_FUNC_IMPL(__imp__sub_8373E928) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E93C"))) PPC_WEAK_FUNC(sub_8373E93C);
PPC_FUNC_IMPL(__imp__sub_8373E93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E940"))) PPC_WEAK_FUNC(sub_8373E940);
PPC_FUNC_IMPL(__imp__sub_8373E940) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E95C"))) PPC_WEAK_FUNC(sub_8373E95C);
PPC_FUNC_IMPL(__imp__sub_8373E95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E960"))) PPC_WEAK_FUNC(sub_8373E960);
PPC_FUNC_IMPL(__imp__sub_8373E960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E974"))) PPC_WEAK_FUNC(sub_8373E974);
PPC_FUNC_IMPL(__imp__sub_8373E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E978"))) PPC_WEAK_FUNC(sub_8373E978);
PPC_FUNC_IMPL(__imp__sub_8373E978) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E994"))) PPC_WEAK_FUNC(sub_8373E994);
PPC_FUNC_IMPL(__imp__sub_8373E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E998"))) PPC_WEAK_FUNC(sub_8373E998);
PPC_FUNC_IMPL(__imp__sub_8373E998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E9AC"))) PPC_WEAK_FUNC(sub_8373E9AC);
PPC_FUNC_IMPL(__imp__sub_8373E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E9B0"))) PPC_WEAK_FUNC(sub_8373E9B0);
PPC_FUNC_IMPL(__imp__sub_8373E9B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E9CC"))) PPC_WEAK_FUNC(sub_8373E9CC);
PPC_FUNC_IMPL(__imp__sub_8373E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E9D0"))) PPC_WEAK_FUNC(sub_8373E9D0);
PPC_FUNC_IMPL(__imp__sub_8373E9D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373E9E4"))) PPC_WEAK_FUNC(sub_8373E9E4);
PPC_FUNC_IMPL(__imp__sub_8373E9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373E9E8"))) PPC_WEAK_FUNC(sub_8373E9E8);
PPC_FUNC_IMPL(__imp__sub_8373E9E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EA04"))) PPC_WEAK_FUNC(sub_8373EA04);
PPC_FUNC_IMPL(__imp__sub_8373EA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EA08"))) PPC_WEAK_FUNC(sub_8373EA08);
PPC_FUNC_IMPL(__imp__sub_8373EA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EA1C"))) PPC_WEAK_FUNC(sub_8373EA1C);
PPC_FUNC_IMPL(__imp__sub_8373EA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EA20"))) PPC_WEAK_FUNC(sub_8373EA20);
PPC_FUNC_IMPL(__imp__sub_8373EA20) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r10,r9,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EA3C"))) PPC_WEAK_FUNC(sub_8373EA3C);
PPC_FUNC_IMPL(__imp__sub_8373EA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EA40"))) PPC_WEAK_FUNC(sub_8373EA40);
PPC_FUNC_IMPL(__imp__sub_8373EA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EA54"))) PPC_WEAK_FUNC(sub_8373EA54);
PPC_FUNC_IMPL(__imp__sub_8373EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EA58"))) PPC_WEAK_FUNC(sub_8373EA58);
PPC_FUNC_IMPL(__imp__sub_8373EA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EA74"))) PPC_WEAK_FUNC(sub_8373EA74);
PPC_FUNC_IMPL(__imp__sub_8373EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EA78"))) PPC_WEAK_FUNC(sub_8373EA78);
PPC_FUNC_IMPL(__imp__sub_8373EA78) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EA8C"))) PPC_WEAK_FUNC(sub_8373EA8C);
PPC_FUNC_IMPL(__imp__sub_8373EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EA90"))) PPC_WEAK_FUNC(sub_8373EA90);
PPC_FUNC_IMPL(__imp__sub_8373EA90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EAAC"))) PPC_WEAK_FUNC(sub_8373EAAC);
PPC_FUNC_IMPL(__imp__sub_8373EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EAB0"))) PPC_WEAK_FUNC(sub_8373EAB0);
PPC_FUNC_IMPL(__imp__sub_8373EAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EAC4"))) PPC_WEAK_FUNC(sub_8373EAC4);
PPC_FUNC_IMPL(__imp__sub_8373EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EAC8"))) PPC_WEAK_FUNC(sub_8373EAC8);
PPC_FUNC_IMPL(__imp__sub_8373EAC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,20,8,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r9.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EAE4"))) PPC_WEAK_FUNC(sub_8373EAE4);
PPC_FUNC_IMPL(__imp__sub_8373EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EAE8"))) PPC_WEAK_FUNC(sub_8373EAE8);
PPC_FUNC_IMPL(__imp__sub_8373EAE8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EAFC"))) PPC_WEAK_FUNC(sub_8373EAFC);
PPC_FUNC_IMPL(__imp__sub_8373EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EB00"))) PPC_WEAK_FUNC(sub_8373EB00);
PPC_FUNC_IMPL(__imp__sub_8373EB00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EB1C"))) PPC_WEAK_FUNC(sub_8373EB1C);
PPC_FUNC_IMPL(__imp__sub_8373EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EB20"))) PPC_WEAK_FUNC(sub_8373EB20);
PPC_FUNC_IMPL(__imp__sub_8373EB20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EB34"))) PPC_WEAK_FUNC(sub_8373EB34);
PPC_FUNC_IMPL(__imp__sub_8373EB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EB38"))) PPC_WEAK_FUNC(sub_8373EB38);
PPC_FUNC_IMPL(__imp__sub_8373EB38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EB54"))) PPC_WEAK_FUNC(sub_8373EB54);
PPC_FUNC_IMPL(__imp__sub_8373EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EB58"))) PPC_WEAK_FUNC(sub_8373EB58);
PPC_FUNC_IMPL(__imp__sub_8373EB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EB6C"))) PPC_WEAK_FUNC(sub_8373EB6C);
PPC_FUNC_IMPL(__imp__sub_8373EB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EB70"))) PPC_WEAK_FUNC(sub_8373EB70);
PPC_FUNC_IMPL(__imp__sub_8373EB70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EB8C"))) PPC_WEAK_FUNC(sub_8373EB8C);
PPC_FUNC_IMPL(__imp__sub_8373EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EB90"))) PPC_WEAK_FUNC(sub_8373EB90);
PPC_FUNC_IMPL(__imp__sub_8373EB90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EBA4"))) PPC_WEAK_FUNC(sub_8373EBA4);
PPC_FUNC_IMPL(__imp__sub_8373EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EBA8"))) PPC_WEAK_FUNC(sub_8373EBA8);
PPC_FUNC_IMPL(__imp__sub_8373EBA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EBC4"))) PPC_WEAK_FUNC(sub_8373EBC4);
PPC_FUNC_IMPL(__imp__sub_8373EBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EBC8"))) PPC_WEAK_FUNC(sub_8373EBC8);
PPC_FUNC_IMPL(__imp__sub_8373EBC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EBDC"))) PPC_WEAK_FUNC(sub_8373EBDC);
PPC_FUNC_IMPL(__imp__sub_8373EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EBE0"))) PPC_WEAK_FUNC(sub_8373EBE0);
PPC_FUNC_IMPL(__imp__sub_8373EBE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r10,r9,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EBFC"))) PPC_WEAK_FUNC(sub_8373EBFC);
PPC_FUNC_IMPL(__imp__sub_8373EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EC00"))) PPC_WEAK_FUNC(sub_8373EC00);
PPC_FUNC_IMPL(__imp__sub_8373EC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EC14"))) PPC_WEAK_FUNC(sub_8373EC14);
PPC_FUNC_IMPL(__imp__sub_8373EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EC18"))) PPC_WEAK_FUNC(sub_8373EC18);
PPC_FUNC_IMPL(__imp__sub_8373EC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EC34"))) PPC_WEAK_FUNC(sub_8373EC34);
PPC_FUNC_IMPL(__imp__sub_8373EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EC38"))) PPC_WEAK_FUNC(sub_8373EC38);
PPC_FUNC_IMPL(__imp__sub_8373EC38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EC4C"))) PPC_WEAK_FUNC(sub_8373EC4C);
PPC_FUNC_IMPL(__imp__sub_8373EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EC50"))) PPC_WEAK_FUNC(sub_8373EC50);
PPC_FUNC_IMPL(__imp__sub_8373EC50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EC6C"))) PPC_WEAK_FUNC(sub_8373EC6C);
PPC_FUNC_IMPL(__imp__sub_8373EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EC70"))) PPC_WEAK_FUNC(sub_8373EC70);
PPC_FUNC_IMPL(__imp__sub_8373EC70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EC84"))) PPC_WEAK_FUNC(sub_8373EC84);
PPC_FUNC_IMPL(__imp__sub_8373EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EC88"))) PPC_WEAK_FUNC(sub_8373EC88);
PPC_FUNC_IMPL(__imp__sub_8373EC88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,21,8,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE00000) | (ctx.r9.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ECA4"))) PPC_WEAK_FUNC(sub_8373ECA4);
PPC_FUNC_IMPL(__imp__sub_8373ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ECA8"))) PPC_WEAK_FUNC(sub_8373ECA8);
PPC_FUNC_IMPL(__imp__sub_8373ECA8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ECBC"))) PPC_WEAK_FUNC(sub_8373ECBC);
PPC_FUNC_IMPL(__imp__sub_8373ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ECC0"))) PPC_WEAK_FUNC(sub_8373ECC0);
PPC_FUNC_IMPL(__imp__sub_8373ECC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ECDC"))) PPC_WEAK_FUNC(sub_8373ECDC);
PPC_FUNC_IMPL(__imp__sub_8373ECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ECE0"))) PPC_WEAK_FUNC(sub_8373ECE0);
PPC_FUNC_IMPL(__imp__sub_8373ECE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,19,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ECF4"))) PPC_WEAK_FUNC(sub_8373ECF4);
PPC_FUNC_IMPL(__imp__sub_8373ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ECF8"))) PPC_WEAK_FUNC(sub_8373ECF8);
PPC_FUNC_IMPL(__imp__sub_8373ECF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ED14"))) PPC_WEAK_FUNC(sub_8373ED14);
PPC_FUNC_IMPL(__imp__sub_8373ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ED18"))) PPC_WEAK_FUNC(sub_8373ED18);
PPC_FUNC_IMPL(__imp__sub_8373ED18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ED2C"))) PPC_WEAK_FUNC(sub_8373ED2C);
PPC_FUNC_IMPL(__imp__sub_8373ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ED30"))) PPC_WEAK_FUNC(sub_8373ED30);
PPC_FUNC_IMPL(__imp__sub_8373ED30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,8,19,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x1F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE0FF);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ED4C"))) PPC_WEAK_FUNC(sub_8373ED4C);
PPC_FUNC_IMPL(__imp__sub_8373ED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ED50"))) PPC_WEAK_FUNC(sub_8373ED50);
PPC_FUNC_IMPL(__imp__sub_8373ED50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ED64"))) PPC_WEAK_FUNC(sub_8373ED64);
PPC_FUNC_IMPL(__imp__sub_8373ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ED68"))) PPC_WEAK_FUNC(sub_8373ED68);
PPC_FUNC_IMPL(__imp__sub_8373ED68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r9,r10,5,24,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0xE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ED84"))) PPC_WEAK_FUNC(sub_8373ED84);
PPC_FUNC_IMPL(__imp__sub_8373ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373ED88"))) PPC_WEAK_FUNC(sub_8373ED88);
PPC_FUNC_IMPL(__imp__sub_8373ED88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373ED9C"))) PPC_WEAK_FUNC(sub_8373ED9C);
PPC_FUNC_IMPL(__imp__sub_8373ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EDA0"))) PPC_WEAK_FUNC(sub_8373EDA0);
PPC_FUNC_IMPL(__imp__sub_8373EDA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r10,r9,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EDBC"))) PPC_WEAK_FUNC(sub_8373EDBC);
PPC_FUNC_IMPL(__imp__sub_8373EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EDC0"))) PPC_WEAK_FUNC(sub_8373EDC0);
PPC_FUNC_IMPL(__imp__sub_8373EDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EDD4"))) PPC_WEAK_FUNC(sub_8373EDD4);
PPC_FUNC_IMPL(__imp__sub_8373EDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EDD8"))) PPC_WEAK_FUNC(sub_8373EDD8);
PPC_FUNC_IMPL(__imp__sub_8373EDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EDF4"))) PPC_WEAK_FUNC(sub_8373EDF4);
PPC_FUNC_IMPL(__imp__sub_8373EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EDF8"))) PPC_WEAK_FUNC(sub_8373EDF8);
PPC_FUNC_IMPL(__imp__sub_8373EDF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EE0C"))) PPC_WEAK_FUNC(sub_8373EE0C);
PPC_FUNC_IMPL(__imp__sub_8373EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EE10"))) PPC_WEAK_FUNC(sub_8373EE10);
PPC_FUNC_IMPL(__imp__sub_8373EE10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EE2C"))) PPC_WEAK_FUNC(sub_8373EE2C);
PPC_FUNC_IMPL(__imp__sub_8373EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EE30"))) PPC_WEAK_FUNC(sub_8373EE30);
PPC_FUNC_IMPL(__imp__sub_8373EE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EE44"))) PPC_WEAK_FUNC(sub_8373EE44);
PPC_FUNC_IMPL(__imp__sub_8373EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EE48"))) PPC_WEAK_FUNC(sub_8373EE48);
PPC_FUNC_IMPL(__imp__sub_8373EE48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,20,8,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r9.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EE64"))) PPC_WEAK_FUNC(sub_8373EE64);
PPC_FUNC_IMPL(__imp__sub_8373EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EE68"))) PPC_WEAK_FUNC(sub_8373EE68);
PPC_FUNC_IMPL(__imp__sub_8373EE68) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EE7C"))) PPC_WEAK_FUNC(sub_8373EE7C);
PPC_FUNC_IMPL(__imp__sub_8373EE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EE80"))) PPC_WEAK_FUNC(sub_8373EE80);
PPC_FUNC_IMPL(__imp__sub_8373EE80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EE9C"))) PPC_WEAK_FUNC(sub_8373EE9C);
PPC_FUNC_IMPL(__imp__sub_8373EE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EEA0"))) PPC_WEAK_FUNC(sub_8373EEA0);
PPC_FUNC_IMPL(__imp__sub_8373EEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EEB4"))) PPC_WEAK_FUNC(sub_8373EEB4);
PPC_FUNC_IMPL(__imp__sub_8373EEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EEB8"))) PPC_WEAK_FUNC(sub_8373EEB8);
PPC_FUNC_IMPL(__imp__sub_8373EEB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,11,16,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0xF800) | (ctx.r9.u64 & 0xFFFFFFFFFFFF07FF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EED4"))) PPC_WEAK_FUNC(sub_8373EED4);
PPC_FUNC_IMPL(__imp__sub_8373EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EED8"))) PPC_WEAK_FUNC(sub_8373EED8);
PPC_FUNC_IMPL(__imp__sub_8373EED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EEEC"))) PPC_WEAK_FUNC(sub_8373EEEC);
PPC_FUNC_IMPL(__imp__sub_8373EEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EEF0"))) PPC_WEAK_FUNC(sub_8373EEF0);
PPC_FUNC_IMPL(__imp__sub_8373EEF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,8,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EF0C"))) PPC_WEAK_FUNC(sub_8373EF0C);
PPC_FUNC_IMPL(__imp__sub_8373EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EF10"))) PPC_WEAK_FUNC(sub_8373EF10);
PPC_FUNC_IMPL(__imp__sub_8373EF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EF24"))) PPC_WEAK_FUNC(sub_8373EF24);
PPC_FUNC_IMPL(__imp__sub_8373EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EF28"))) PPC_WEAK_FUNC(sub_8373EF28);
PPC_FUNC_IMPL(__imp__sub_8373EF28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r9,r10,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EF44"))) PPC_WEAK_FUNC(sub_8373EF44);
PPC_FUNC_IMPL(__imp__sub_8373EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EF48"))) PPC_WEAK_FUNC(sub_8373EF48);
PPC_FUNC_IMPL(__imp__sub_8373EF48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EF5C"))) PPC_WEAK_FUNC(sub_8373EF5C);
PPC_FUNC_IMPL(__imp__sub_8373EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EF60"))) PPC_WEAK_FUNC(sub_8373EF60);
PPC_FUNC_IMPL(__imp__sub_8373EF60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r10,r9,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EF7C"))) PPC_WEAK_FUNC(sub_8373EF7C);
PPC_FUNC_IMPL(__imp__sub_8373EF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EF80"))) PPC_WEAK_FUNC(sub_8373EF80);
PPC_FUNC_IMPL(__imp__sub_8373EF80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EF94"))) PPC_WEAK_FUNC(sub_8373EF94);
PPC_FUNC_IMPL(__imp__sub_8373EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EF98"))) PPC_WEAK_FUNC(sub_8373EF98);
PPC_FUNC_IMPL(__imp__sub_8373EF98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EFAC"))) PPC_WEAK_FUNC(sub_8373EFAC);
PPC_FUNC_IMPL(__imp__sub_8373EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EFB0"))) PPC_WEAK_FUNC(sub_8373EFB0);
PPC_FUNC_IMPL(__imp__sub_8373EFB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,24,6,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x3000000) | (ctx.r9.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EFCC"))) PPC_WEAK_FUNC(sub_8373EFCC);
PPC_FUNC_IMPL(__imp__sub_8373EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EFD0"))) PPC_WEAK_FUNC(sub_8373EFD0);
PPC_FUNC_IMPL(__imp__sub_8373EFD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373EFE4"))) PPC_WEAK_FUNC(sub_8373EFE4);
PPC_FUNC_IMPL(__imp__sub_8373EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373EFE8"))) PPC_WEAK_FUNC(sub_8373EFE8);
PPC_FUNC_IMPL(__imp__sub_8373EFE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,21,8,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE00000) | (ctx.r9.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F004"))) PPC_WEAK_FUNC(sub_8373F004);
PPC_FUNC_IMPL(__imp__sub_8373F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F008"))) PPC_WEAK_FUNC(sub_8373F008);
PPC_FUNC_IMPL(__imp__sub_8373F008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F01C"))) PPC_WEAK_FUNC(sub_8373F01C);
PPC_FUNC_IMPL(__imp__sub_8373F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F020"))) PPC_WEAK_FUNC(sub_8373F020);
PPC_FUNC_IMPL(__imp__sub_8373F020) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,18,11,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0x1C0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE3FFFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F03C"))) PPC_WEAK_FUNC(sub_8373F03C);
PPC_FUNC_IMPL(__imp__sub_8373F03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F040"))) PPC_WEAK_FUNC(sub_8373F040);
PPC_FUNC_IMPL(__imp__sub_8373F040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F054"))) PPC_WEAK_FUNC(sub_8373F054);
PPC_FUNC_IMPL(__imp__sub_8373F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F058"))) PPC_WEAK_FUNC(sub_8373F058);
PPC_FUNC_IMPL(__imp__sub_8373F058) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,12,14,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F074"))) PPC_WEAK_FUNC(sub_8373F074);
PPC_FUNC_IMPL(__imp__sub_8373F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F078"))) PPC_WEAK_FUNC(sub_8373F078);
PPC_FUNC_IMPL(__imp__sub_8373F078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,26,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F08C"))) PPC_WEAK_FUNC(sub_8373F08C);
PPC_FUNC_IMPL(__imp__sub_8373F08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F090"))) PPC_WEAK_FUNC(sub_8373F090);
PPC_FUNC_IMPL(__imp__sub_8373F090) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r9,r10,6,20,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF03F);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F0AC"))) PPC_WEAK_FUNC(sub_8373F0AC);
PPC_FUNC_IMPL(__imp__sub_8373F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F0B0"))) PPC_WEAK_FUNC(sub_8373F0B0);
PPC_FUNC_IMPL(__imp__sub_8373F0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F0C4"))) PPC_WEAK_FUNC(sub_8373F0C4);
PPC_FUNC_IMPL(__imp__sub_8373F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F0C8"))) PPC_WEAK_FUNC(sub_8373F0C8);
PPC_FUNC_IMPL(__imp__sub_8373F0C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwimi r10,r9,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F0E4"))) PPC_WEAK_FUNC(sub_8373F0E4);
PPC_FUNC_IMPL(__imp__sub_8373F0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F0E8"))) PPC_WEAK_FUNC(sub_8373F0E8);
PPC_FUNC_IMPL(__imp__sub_8373F0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F0FC"))) PPC_WEAK_FUNC(sub_8373F0FC);
PPC_FUNC_IMPL(__imp__sub_8373F0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F100"))) PPC_WEAK_FUNC(sub_8373F100);
PPC_FUNC_IMPL(__imp__sub_8373F100) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F11C"))) PPC_WEAK_FUNC(sub_8373F11C);
PPC_FUNC_IMPL(__imp__sub_8373F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F120"))) PPC_WEAK_FUNC(sub_8373F120);
PPC_FUNC_IMPL(__imp__sub_8373F120) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F134"))) PPC_WEAK_FUNC(sub_8373F134);
PPC_FUNC_IMPL(__imp__sub_8373F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F138"))) PPC_WEAK_FUNC(sub_8373F138);
PPC_FUNC_IMPL(__imp__sub_8373F138) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,24,4,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xF000000) | (ctx.r9.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F154"))) PPC_WEAK_FUNC(sub_8373F154);
PPC_FUNC_IMPL(__imp__sub_8373F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F158"))) PPC_WEAK_FUNC(sub_8373F158);
PPC_FUNC_IMPL(__imp__sub_8373F158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F16C"))) PPC_WEAK_FUNC(sub_8373F16C);
PPC_FUNC_IMPL(__imp__sub_8373F16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F170"))) PPC_WEAK_FUNC(sub_8373F170);
PPC_FUNC_IMPL(__imp__sub_8373F170) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,18,8,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFC0000) | (ctx.r9.u64 & 0xFFFFFFFFFF03FFFF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F18C"))) PPC_WEAK_FUNC(sub_8373F18C);
PPC_FUNC_IMPL(__imp__sub_8373F18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F190"))) PPC_WEAK_FUNC(sub_8373F190);
PPC_FUNC_IMPL(__imp__sub_8373F190) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F1A4"))) PPC_WEAK_FUNC(sub_8373F1A4);
PPC_FUNC_IMPL(__imp__sub_8373F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F1A8"))) PPC_WEAK_FUNC(sub_8373F1A8);
PPC_FUNC_IMPL(__imp__sub_8373F1A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F1C4"))) PPC_WEAK_FUNC(sub_8373F1C4);
PPC_FUNC_IMPL(__imp__sub_8373F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F1C8"))) PPC_WEAK_FUNC(sub_8373F1C8);
PPC_FUNC_IMPL(__imp__sub_8373F1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,22,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F1DC"))) PPC_WEAK_FUNC(sub_8373F1DC);
PPC_FUNC_IMPL(__imp__sub_8373F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F1E0"))) PPC_WEAK_FUNC(sub_8373F1E0);
PPC_FUNC_IMPL(__imp__sub_8373F1E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,10,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F1FC"))) PPC_WEAK_FUNC(sub_8373F1FC);
PPC_FUNC_IMPL(__imp__sub_8373F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F200"))) PPC_WEAK_FUNC(sub_8373F200);
PPC_FUNC_IMPL(__imp__sub_8373F200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F214"))) PPC_WEAK_FUNC(sub_8373F214);
PPC_FUNC_IMPL(__imp__sub_8373F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F218"))) PPC_WEAK_FUNC(sub_8373F218);
PPC_FUNC_IMPL(__imp__sub_8373F218) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r9,r10,8,22,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x300) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F234"))) PPC_WEAK_FUNC(sub_8373F234);
PPC_FUNC_IMPL(__imp__sub_8373F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F238"))) PPC_WEAK_FUNC(sub_8373F238);
PPC_FUNC_IMPL(__imp__sub_8373F238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F24C"))) PPC_WEAK_FUNC(sub_8373F24C);
PPC_FUNC_IMPL(__imp__sub_8373F24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F250"))) PPC_WEAK_FUNC(sub_8373F250);
PPC_FUNC_IMPL(__imp__sub_8373F250) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F26C"))) PPC_WEAK_FUNC(sub_8373F26C);
PPC_FUNC_IMPL(__imp__sub_8373F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F270"))) PPC_WEAK_FUNC(sub_8373F270);
PPC_FUNC_IMPL(__imp__sub_8373F270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F284"))) PPC_WEAK_FUNC(sub_8373F284);
PPC_FUNC_IMPL(__imp__sub_8373F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F288"))) PPC_WEAK_FUNC(sub_8373F288);
PPC_FUNC_IMPL(__imp__sub_8373F288) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,29,0,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0xE0000000) | (ctx.r10.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F2A4"))) PPC_WEAK_FUNC(sub_8373F2A4);
PPC_FUNC_IMPL(__imp__sub_8373F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F2A8"))) PPC_WEAK_FUNC(sub_8373F2A8);
PPC_FUNC_IMPL(__imp__sub_8373F2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,6,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F2BC"))) PPC_WEAK_FUNC(sub_8373F2BC);
PPC_FUNC_IMPL(__imp__sub_8373F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F2C0"))) PPC_WEAK_FUNC(sub_8373F2C0);
PPC_FUNC_IMPL(__imp__sub_8373F2C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,26,3,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x1C000000) | (ctx.r9.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F2DC"))) PPC_WEAK_FUNC(sub_8373F2DC);
PPC_FUNC_IMPL(__imp__sub_8373F2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F2E0"))) PPC_WEAK_FUNC(sub_8373F2E0);
PPC_FUNC_IMPL(__imp__sub_8373F2E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F2F4"))) PPC_WEAK_FUNC(sub_8373F2F4);
PPC_FUNC_IMPL(__imp__sub_8373F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8373F2F8"))) PPC_WEAK_FUNC(sub_8373F2F8);
PPC_FUNC_IMPL(__imp__sub_8373F2F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwimi r9,r10,24,6,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x3000000) | (ctx.r9.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8373F314"))) PPC_WEAK_FUNC(sub_8373F314);
PPC_FUNC_IMPL(__imp__sub_8373F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

