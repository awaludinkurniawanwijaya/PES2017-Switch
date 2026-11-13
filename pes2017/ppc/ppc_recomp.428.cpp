#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837442AC"))) PPC_WEAK_FUNC(sub_837442AC);
PPC_FUNC_IMPL(__imp__sub_837442AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837442B0"))) PPC_WEAK_FUNC(sub_837442B0);
PPC_FUNC_IMPL(__imp__sub_837442B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837442C0"))) PPC_WEAK_FUNC(sub_837442C0);
PPC_FUNC_IMPL(__imp__sub_837442C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837442D4"))) PPC_WEAK_FUNC(sub_837442D4);
PPC_FUNC_IMPL(__imp__sub_837442D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837442D8"))) PPC_WEAK_FUNC(sub_837442D8);
PPC_FUNC_IMPL(__imp__sub_837442D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837442E8"))) PPC_WEAK_FUNC(sub_837442E8);
PPC_FUNC_IMPL(__imp__sub_837442E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837442FC"))) PPC_WEAK_FUNC(sub_837442FC);
PPC_FUNC_IMPL(__imp__sub_837442FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744300"))) PPC_WEAK_FUNC(sub_83744300);
PPC_FUNC_IMPL(__imp__sub_83744300) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744310"))) PPC_WEAK_FUNC(sub_83744310);
PPC_FUNC_IMPL(__imp__sub_83744310) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744324"))) PPC_WEAK_FUNC(sub_83744324);
PPC_FUNC_IMPL(__imp__sub_83744324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744328"))) PPC_WEAK_FUNC(sub_83744328);
PPC_FUNC_IMPL(__imp__sub_83744328) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744338"))) PPC_WEAK_FUNC(sub_83744338);
PPC_FUNC_IMPL(__imp__sub_83744338) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374434C"))) PPC_WEAK_FUNC(sub_8374434C);
PPC_FUNC_IMPL(__imp__sub_8374434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744350"))) PPC_WEAK_FUNC(sub_83744350);
PPC_FUNC_IMPL(__imp__sub_83744350) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744360"))) PPC_WEAK_FUNC(sub_83744360);
PPC_FUNC_IMPL(__imp__sub_83744360) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744374"))) PPC_WEAK_FUNC(sub_83744374);
PPC_FUNC_IMPL(__imp__sub_83744374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744378"))) PPC_WEAK_FUNC(sub_83744378);
PPC_FUNC_IMPL(__imp__sub_83744378) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374438C"))) PPC_WEAK_FUNC(sub_8374438C);
PPC_FUNC_IMPL(__imp__sub_8374438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744390"))) PPC_WEAK_FUNC(sub_83744390);
PPC_FUNC_IMPL(__imp__sub_83744390) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837443A4"))) PPC_WEAK_FUNC(sub_837443A4);
PPC_FUNC_IMPL(__imp__sub_837443A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837443A8"))) PPC_WEAK_FUNC(sub_837443A8);
PPC_FUNC_IMPL(__imp__sub_837443A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837443B8"))) PPC_WEAK_FUNC(sub_837443B8);
PPC_FUNC_IMPL(__imp__sub_837443B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837443CC"))) PPC_WEAK_FUNC(sub_837443CC);
PPC_FUNC_IMPL(__imp__sub_837443CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837443D0"))) PPC_WEAK_FUNC(sub_837443D0);
PPC_FUNC_IMPL(__imp__sub_837443D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837443E4"))) PPC_WEAK_FUNC(sub_837443E4);
PPC_FUNC_IMPL(__imp__sub_837443E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837443E8"))) PPC_WEAK_FUNC(sub_837443E8);
PPC_FUNC_IMPL(__imp__sub_837443E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r9,r10,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744404"))) PPC_WEAK_FUNC(sub_83744404);
PPC_FUNC_IMPL(__imp__sub_83744404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744408"))) PPC_WEAK_FUNC(sub_83744408);
PPC_FUNC_IMPL(__imp__sub_83744408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374441C"))) PPC_WEAK_FUNC(sub_8374441C);
PPC_FUNC_IMPL(__imp__sub_8374441C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744420"))) PPC_WEAK_FUNC(sub_83744420);
PPC_FUNC_IMPL(__imp__sub_83744420) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r9,r10,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374443C"))) PPC_WEAK_FUNC(sub_8374443C);
PPC_FUNC_IMPL(__imp__sub_8374443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744440"))) PPC_WEAK_FUNC(sub_83744440);
PPC_FUNC_IMPL(__imp__sub_83744440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744454"))) PPC_WEAK_FUNC(sub_83744454);
PPC_FUNC_IMPL(__imp__sub_83744454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744458"))) PPC_WEAK_FUNC(sub_83744458);
PPC_FUNC_IMPL(__imp__sub_83744458) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744474"))) PPC_WEAK_FUNC(sub_83744474);
PPC_FUNC_IMPL(__imp__sub_83744474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744478"))) PPC_WEAK_FUNC(sub_83744478);
PPC_FUNC_IMPL(__imp__sub_83744478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374448C"))) PPC_WEAK_FUNC(sub_8374448C);
PPC_FUNC_IMPL(__imp__sub_8374448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744490"))) PPC_WEAK_FUNC(sub_83744490);
PPC_FUNC_IMPL(__imp__sub_83744490) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837444AC"))) PPC_WEAK_FUNC(sub_837444AC);
PPC_FUNC_IMPL(__imp__sub_837444AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837444B0"))) PPC_WEAK_FUNC(sub_837444B0);
PPC_FUNC_IMPL(__imp__sub_837444B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837444C4"))) PPC_WEAK_FUNC(sub_837444C4);
PPC_FUNC_IMPL(__imp__sub_837444C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837444C8"))) PPC_WEAK_FUNC(sub_837444C8);
PPC_FUNC_IMPL(__imp__sub_837444C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r9,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837444E4"))) PPC_WEAK_FUNC(sub_837444E4);
PPC_FUNC_IMPL(__imp__sub_837444E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837444E8"))) PPC_WEAK_FUNC(sub_837444E8);
PPC_FUNC_IMPL(__imp__sub_837444E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,13,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837444FC"))) PPC_WEAK_FUNC(sub_837444FC);
PPC_FUNC_IMPL(__imp__sub_837444FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744500"))) PPC_WEAK_FUNC(sub_83744500);
PPC_FUNC_IMPL(__imp__sub_83744500) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwimi r9,r10,19,8,12
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0xF80000) | (ctx.r9.u64 & 0xFFFFFFFFFF07FFFF);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374451C"))) PPC_WEAK_FUNC(sub_8374451C);
PPC_FUNC_IMPL(__imp__sub_8374451C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744520"))) PPC_WEAK_FUNC(sub_83744520);
PPC_FUNC_IMPL(__imp__sub_83744520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744534"))) PPC_WEAK_FUNC(sub_83744534);
PPC_FUNC_IMPL(__imp__sub_83744534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744538"))) PPC_WEAK_FUNC(sub_83744538);
PPC_FUNC_IMPL(__imp__sub_83744538) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwimi r9,r10,1,28,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744554"))) PPC_WEAK_FUNC(sub_83744554);
PPC_FUNC_IMPL(__imp__sub_83744554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744558"))) PPC_WEAK_FUNC(sub_83744558);
PPC_FUNC_IMPL(__imp__sub_83744558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374456C"))) PPC_WEAK_FUNC(sub_8374456C);
PPC_FUNC_IMPL(__imp__sub_8374456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744570"))) PPC_WEAK_FUNC(sub_83744570);
PPC_FUNC_IMPL(__imp__sub_83744570) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwimi r9,r10,14,13,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0x7C000) | (ctx.r9.u64 & 0xFFFFFFFFFFF83FFF);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374458C"))) PPC_WEAK_FUNC(sub_8374458C);
PPC_FUNC_IMPL(__imp__sub_8374458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744590"))) PPC_WEAK_FUNC(sub_83744590);
PPC_FUNC_IMPL(__imp__sub_83744590) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,23,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837445A4"))) PPC_WEAK_FUNC(sub_837445A4);
PPC_FUNC_IMPL(__imp__sub_837445A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837445A8"))) PPC_WEAK_FUNC(sub_837445A8);
PPC_FUNC_IMPL(__imp__sub_837445A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwimi r9,r10,9,18,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x3E00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC1FF);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837445C4"))) PPC_WEAK_FUNC(sub_837445C4);
PPC_FUNC_IMPL(__imp__sub_837445C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837445C8"))) PPC_WEAK_FUNC(sub_837445C8);
PPC_FUNC_IMPL(__imp__sub_837445C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,28,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837445DC"))) PPC_WEAK_FUNC(sub_837445DC);
PPC_FUNC_IMPL(__imp__sub_837445DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837445E0"))) PPC_WEAK_FUNC(sub_837445E0);
PPC_FUNC_IMPL(__imp__sub_837445E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwimi r9,r10,4,23,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x1F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFE0F);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837445FC"))) PPC_WEAK_FUNC(sub_837445FC);
PPC_FUNC_IMPL(__imp__sub_837445FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744600"))) PPC_WEAK_FUNC(sub_83744600);
PPC_FUNC_IMPL(__imp__sub_83744600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744614"))) PPC_WEAK_FUNC(sub_83744614);
PPC_FUNC_IMPL(__imp__sub_83744614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744618"))) PPC_WEAK_FUNC(sub_83744618);
PPC_FUNC_IMPL(__imp__sub_83744618) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r10,r9,0,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744634"))) PPC_WEAK_FUNC(sub_83744634);
PPC_FUNC_IMPL(__imp__sub_83744634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744638"))) PPC_WEAK_FUNC(sub_83744638);
PPC_FUNC_IMPL(__imp__sub_83744638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374464C"))) PPC_WEAK_FUNC(sub_8374464C);
PPC_FUNC_IMPL(__imp__sub_8374464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744650"))) PPC_WEAK_FUNC(sub_83744650);
PPC_FUNC_IMPL(__imp__sub_83744650) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374466C"))) PPC_WEAK_FUNC(sub_8374466C);
PPC_FUNC_IMPL(__imp__sub_8374466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744670"))) PPC_WEAK_FUNC(sub_83744670);
PPC_FUNC_IMPL(__imp__sub_83744670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744684"))) PPC_WEAK_FUNC(sub_83744684);
PPC_FUNC_IMPL(__imp__sub_83744684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744688"))) PPC_WEAK_FUNC(sub_83744688);
PPC_FUNC_IMPL(__imp__sub_83744688) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837446A4"))) PPC_WEAK_FUNC(sub_837446A4);
PPC_FUNC_IMPL(__imp__sub_837446A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837446A8"))) PPC_WEAK_FUNC(sub_837446A8);
PPC_FUNC_IMPL(__imp__sub_837446A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,10,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837446BC"))) PPC_WEAK_FUNC(sub_837446BC);
PPC_FUNC_IMPL(__imp__sub_837446BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837446C0"))) PPC_WEAK_FUNC(sub_837446C0);
PPC_FUNC_IMPL(__imp__sub_837446C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwimi r9,r10,22,5,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0x7C00000) | (ctx.r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837446DC"))) PPC_WEAK_FUNC(sub_837446DC);
PPC_FUNC_IMPL(__imp__sub_837446DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837446E0"))) PPC_WEAK_FUNC(sub_837446E0);
PPC_FUNC_IMPL(__imp__sub_837446E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837446F4"))) PPC_WEAK_FUNC(sub_837446F4);
PPC_FUNC_IMPL(__imp__sub_837446F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837446F8"))) PPC_WEAK_FUNC(sub_837446F8);
PPC_FUNC_IMPL(__imp__sub_837446F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r9,r10,24,5,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x7000000) | (ctx.r9.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744714"))) PPC_WEAK_FUNC(sub_83744714);
PPC_FUNC_IMPL(__imp__sub_83744714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744718"))) PPC_WEAK_FUNC(sub_83744718);
PPC_FUNC_IMPL(__imp__sub_83744718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,15,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374472C"))) PPC_WEAK_FUNC(sub_8374472C);
PPC_FUNC_IMPL(__imp__sub_8374472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744730"))) PPC_WEAK_FUNC(sub_83744730);
PPC_FUNC_IMPL(__imp__sub_83744730) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwimi r9,r10,17,10,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0x3E0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC1FFFF);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374474C"))) PPC_WEAK_FUNC(sub_8374474C);
PPC_FUNC_IMPL(__imp__sub_8374474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744750"))) PPC_WEAK_FUNC(sub_83744750);
PPC_FUNC_IMPL(__imp__sub_83744750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,20,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744764"))) PPC_WEAK_FUNC(sub_83744764);
PPC_FUNC_IMPL(__imp__sub_83744764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744768"))) PPC_WEAK_FUNC(sub_83744768);
PPC_FUNC_IMPL(__imp__sub_83744768) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwimi r9,r10,12,15,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1F000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE0FFF);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744784"))) PPC_WEAK_FUNC(sub_83744784);
PPC_FUNC_IMPL(__imp__sub_83744784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744788"))) PPC_WEAK_FUNC(sub_83744788);
PPC_FUNC_IMPL(__imp__sub_83744788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,25,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374479C"))) PPC_WEAK_FUNC(sub_8374479C);
PPC_FUNC_IMPL(__imp__sub_8374479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837447A0"))) PPC_WEAK_FUNC(sub_837447A0);
PPC_FUNC_IMPL(__imp__sub_837447A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwimi r9,r10,7,20,24
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xF80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF07F);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837447BC"))) PPC_WEAK_FUNC(sub_837447BC);
PPC_FUNC_IMPL(__imp__sub_837447BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837447C0"))) PPC_WEAK_FUNC(sub_837447C0);
PPC_FUNC_IMPL(__imp__sub_837447C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837447D4"))) PPC_WEAK_FUNC(sub_837447D4);
PPC_FUNC_IMPL(__imp__sub_837447D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837447D8"))) PPC_WEAK_FUNC(sub_837447D8);
PPC_FUNC_IMPL(__imp__sub_837447D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837447F4"))) PPC_WEAK_FUNC(sub_837447F4);
PPC_FUNC_IMPL(__imp__sub_837447F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837447F8"))) PPC_WEAK_FUNC(sub_837447F8);
PPC_FUNC_IMPL(__imp__sub_837447F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r9,21,0,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xFFE00000) | (ctx.r10.u64 & 0xFFFFFFFF001FFFFF);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744814"))) PPC_WEAK_FUNC(sub_83744814);
PPC_FUNC_IMPL(__imp__sub_83744814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744818"))) PPC_WEAK_FUNC(sub_83744818);
PPC_FUNC_IMPL(__imp__sub_83744818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374482C"))) PPC_WEAK_FUNC(sub_8374482C);
PPC_FUNC_IMPL(__imp__sub_8374482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744830"))) PPC_WEAK_FUNC(sub_83744830);
PPC_FUNC_IMPL(__imp__sub_83744830) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwimi r9,r10,2,25,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x7C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF83);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374484C"))) PPC_WEAK_FUNC(sub_8374484C);
PPC_FUNC_IMPL(__imp__sub_8374484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744850"))) PPC_WEAK_FUNC(sub_83744850);
PPC_FUNC_IMPL(__imp__sub_83744850) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744860"))) PPC_WEAK_FUNC(sub_83744860);
PPC_FUNC_IMPL(__imp__sub_83744860) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744874"))) PPC_WEAK_FUNC(sub_83744874);
PPC_FUNC_IMPL(__imp__sub_83744874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744878"))) PPC_WEAK_FUNC(sub_83744878);
PPC_FUNC_IMPL(__imp__sub_83744878) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744888"))) PPC_WEAK_FUNC(sub_83744888);
PPC_FUNC_IMPL(__imp__sub_83744888) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374489C"))) PPC_WEAK_FUNC(sub_8374489C);
PPC_FUNC_IMPL(__imp__sub_8374489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837448A0"))) PPC_WEAK_FUNC(sub_837448A0);
PPC_FUNC_IMPL(__imp__sub_837448A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837448B0"))) PPC_WEAK_FUNC(sub_837448B0);
PPC_FUNC_IMPL(__imp__sub_837448B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837448C4"))) PPC_WEAK_FUNC(sub_837448C4);
PPC_FUNC_IMPL(__imp__sub_837448C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837448C8"))) PPC_WEAK_FUNC(sub_837448C8);
PPC_FUNC_IMPL(__imp__sub_837448C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837448D8"))) PPC_WEAK_FUNC(sub_837448D8);
PPC_FUNC_IMPL(__imp__sub_837448D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837448EC"))) PPC_WEAK_FUNC(sub_837448EC);
PPC_FUNC_IMPL(__imp__sub_837448EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837448F0"))) PPC_WEAK_FUNC(sub_837448F0);
PPC_FUNC_IMPL(__imp__sub_837448F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744900"))) PPC_WEAK_FUNC(sub_83744900);
PPC_FUNC_IMPL(__imp__sub_83744900) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744914"))) PPC_WEAK_FUNC(sub_83744914);
PPC_FUNC_IMPL(__imp__sub_83744914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744918"))) PPC_WEAK_FUNC(sub_83744918);
PPC_FUNC_IMPL(__imp__sub_83744918) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744928"))) PPC_WEAK_FUNC(sub_83744928);
PPC_FUNC_IMPL(__imp__sub_83744928) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374493C"))) PPC_WEAK_FUNC(sub_8374493C);
PPC_FUNC_IMPL(__imp__sub_8374493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744940"))) PPC_WEAK_FUNC(sub_83744940);
PPC_FUNC_IMPL(__imp__sub_83744940) {
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
	// beq cr6,0x837449a8
	if (cr6.eq) goto loc_837449A8;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bgt cr6,0x837449a8
	if (cr6.gt) goto loc_837449A8;
	// lbz r10,98(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 98);
	// addi r4,r11,98
	ctx.r4.s64 = ctx.r11.s64 + 98;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8374498c
	if (cr6.eq) goto loc_8374498C;
	// bl 0x831ce980
	ctx.lr = 0x83744978;
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
loc_8374498C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83744994;
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
loc_837449A8:
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

__attribute__((alias("__imp__sub_837449BC"))) PPC_WEAK_FUNC(sub_837449BC);
PPC_FUNC_IMPL(__imp__sub_837449BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837449C0"))) PPC_WEAK_FUNC(sub_837449C0);
PPC_FUNC_IMPL(__imp__sub_837449C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837449C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// blt cr6,0x837449e0
	if (cr6.lt) goto loc_837449E0;
	// li r30,33
	ctx.r30.s64 = 33;
loc_837449E0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83744a18
	if (cr6.eq) goto loc_83744A18;
	// addi r31,r3,98
	ctx.r31.s64 = ctx.r3.s64 + 98;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837449FC;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83744A0C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83744A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83744A24"))) PPC_WEAK_FUNC(sub_83744A24);
PPC_FUNC_IMPL(__imp__sub_83744A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744A28"))) PPC_WEAK_FUNC(sub_83744A28);
PPC_FUNC_IMPL(__imp__sub_83744A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83744a64
	if (cr6.lt) goto loc_83744A64;
	// cmpwi cr6,r5,126
	cr6.compare<int32_t>(ctx.r5.s32, 126, xer);
	// bgt cr6,0x83744a64
	if (cr6.gt) goto loc_83744A64;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,16512
	ctx.r8.s64 = ctx.r10.s64 + 16512;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83744A48:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x83744a6c
	if (cr6.eq) goto loc_83744A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// blt cr6,0x83744a48
	if (cr6.lt) goto loc_83744A48;
loc_83744A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83744A6C:
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
loc_83744A84:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83744a84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83744A84;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744A98"))) PPC_WEAK_FUNC(sub_83744A98);
PPC_FUNC_IMPL(__imp__sub_83744A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,127
	cr6.compare<int32_t>(ctx.r5.s32, 127, xer);
	// blt cr6,0x83744ad8
	if (cr6.lt) goto loc_83744AD8;
	// bgt cr6,0x83744ad8
	if (cr6.gt) goto loc_83744AD8;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,20576
	ctx.r8.s64 = ctx.r10.s64 + 20576;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83744AB8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// beq cr6,0x83744ae0
	if (cr6.eq) goto loc_83744AE0;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,28
	cr6.compare<uint32_t>(ctx.r9.u32, 28, xer);
	// blt cr6,0x83744ab8
	if (cr6.lt) goto loc_83744AB8;
loc_83744AD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83744AE0:
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
loc_83744AF8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83744af8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83744AF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744B0C"))) PPC_WEAK_FUNC(sub_83744B0C);
PPC_FUNC_IMPL(__imp__sub_83744B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744B10"))) PPC_WEAK_FUNC(sub_83744B10);
PPC_FUNC_IMPL(__imp__sub_83744B10) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83b42d20
	ctx.lr = 0x83744B30;
	sub_83B42D20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744B44"))) PPC_WEAK_FUNC(sub_83744B44);
PPC_FUNC_IMPL(__imp__sub_83744B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744B48"))) PPC_WEAK_FUNC(sub_83744B48);
PPC_FUNC_IMPL(__imp__sub_83744B48) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b42d20
	ctx.lr = 0x83744B78;
	sub_83B42D20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83744b8c
	if (cr6.eq) goto loc_83744B8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83744bc4
	goto loc_83744BC4;
loc_83744B8C:
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x83744BA4;
	sub_82BEE188(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83744bb4
	if (cr6.eq) goto loc_83744BB4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83744BB4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83744bc0
	if (cr6.eq) goto loc_83744BC0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83744BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83744BC4:
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

__attribute__((alias("__imp__sub_83744BDC"))) PPC_WEAK_FUNC(sub_83744BDC);
PPC_FUNC_IMPL(__imp__sub_83744BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744BE0"))) PPC_WEAK_FUNC(sub_83744BE0);
PPC_FUNC_IMPL(__imp__sub_83744BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x83744bf0
	if (cr6.lt) goto loc_83744BF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83744BF0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83744c0c
	if (cr6.eq) goto loc_83744C0C;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-22172
	ctx.r9.s64 = ctx.r11.s64 + -22172;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_83744C0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744C14"))) PPC_WEAK_FUNC(sub_83744C14);
PPC_FUNC_IMPL(__imp__sub_83744C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744C18"))) PPC_WEAK_FUNC(sub_83744C18);
PPC_FUNC_IMPL(__imp__sub_83744C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-80
	ctx.r11.s64 = ctx.r3.s64 + -80;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bgt cr6,0x83744cf4
	if (cr6.gt) goto loc_83744CF4;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19516
	ctx.r12.s64 = ctx.r12.s64 + 19516;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83744CD4;
	case 1:
		goto loc_83744CD4;
	case 2:
		goto loc_83744CDC;
	case 3:
		goto loc_83744CDC;
	case 4:
		goto loc_83744CD4;
	case 5:
		goto loc_83744CD4;
	case 6:
		goto loc_83744CD4;
	case 7:
		goto loc_83744CE4;
	case 8:
		goto loc_83744CE4;
	case 9:
		goto loc_83744CE4;
	case 10:
		goto loc_83744CDC;
	case 11:
		goto loc_83744CD4;
	case 12:
		goto loc_83744CF4;
	case 13:
		goto loc_83744CF4;
	case 14:
		goto loc_83744CF4;
	case 15:
		goto loc_83744CF4;
	case 16:
		goto loc_83744CF4;
	case 17:
		goto loc_83744CF4;
	case 18:
		goto loc_83744CF4;
	case 19:
		goto loc_83744CF4;
	case 20:
		goto loc_83744CF4;
	case 21:
		goto loc_83744CF4;
	case 22:
		goto loc_83744CF4;
	case 23:
		goto loc_83744CDC;
	case 24:
		goto loc_83744CDC;
	case 25:
		goto loc_83744CDC;
	case 26:
		goto loc_83744CDC;
	case 27:
		goto loc_83744CDC;
	case 28:
		goto loc_83744CDC;
	case 29:
		goto loc_83744CF4;
	case 30:
		goto loc_83744CF4;
	case 31:
		goto loc_83744CEC;
	case 32:
		goto loc_83744CF4;
	case 33:
		goto loc_83744CF4;
	case 34:
		goto loc_83744CDC;
	case 35:
		goto loc_83744CDC;
	case 36:
		goto loc_83744CDC;
	case 37:
		goto loc_83744CDC;
	default:
		return;
	}
	// lwz r27,19668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19668);
	// lwz r27,19668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19668);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19668);
	// lwz r27,19668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19668);
	// lwz r27,19668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19668);
	// lwz r27,19684(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19684);
	// lwz r27,19684(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19684);
	// lwz r27,19684(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19684);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19668(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19668);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19692(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19692);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19700(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19700);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
	// lwz r27,19676(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19676);
loc_83744CD4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83744CDC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83744CE4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83744CEC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83744CF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83744CFC"))) PPC_WEAK_FUNC(sub_83744CFC);
PPC_FUNC_IMPL(__imp__sub_83744CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744D00"))) PPC_WEAK_FUNC(sub_83744D00);
PPC_FUNC_IMPL(__imp__sub_83744D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-25080
	ctx.r5.s64 = ctx.r11.s64 + -25080;
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x8373fbb0
	sub_8373FBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83744D14"))) PPC_WEAK_FUNC(sub_83744D14);
PPC_FUNC_IMPL(__imp__sub_83744D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744D18"))) PPC_WEAK_FUNC(sub_83744D18);
PPC_FUNC_IMPL(__imp__sub_83744D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,-25080
	ctx.r5.s64 = ctx.r11.s64 + -25080;
	// li r6,72
	ctx.r6.s64 = 72;
	// b 0x8373fbb0
	sub_8373FBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83744D2C"))) PPC_WEAK_FUNC(sub_83744D2C);
PPC_FUNC_IMPL(__imp__sub_83744D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744D30"))) PPC_WEAK_FUNC(sub_83744D30);
PPC_FUNC_IMPL(__imp__sub_83744D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83744D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x83744D50;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83744e40
	if (cr6.eq) goto loc_83744E40;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83744e40
	if (cr6.eq) goto loc_83744E40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83744D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83744e40
	if (cr6.eq) goto loc_83744E40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83744e40
	if (cr6.lt) goto loc_83744E40;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83744e40
	if (cr6.gt) goto loc_83744E40;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lfs f11,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f11.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x83744df8
	if (cr6.gt) goto loc_83744DF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83744e14
	goto loc_83744E14;
loc_83744DF8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x83744e08
	if (cr6.lt) goto loc_83744E08;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x83744e14
	goto loc_83744E14;
loc_83744E08:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_83744E14:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83744e34
	if (!cr6.eq) goto loc_83744E34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-10804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_83744E34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83744E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83744E4C"))) PPC_WEAK_FUNC(sub_83744E4C);
PPC_FUNC_IMPL(__imp__sub_83744E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83744E50"))) PPC_WEAK_FUNC(sub_83744E50);
PPC_FUNC_IMPL(__imp__sub_83744E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83744E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744E78;
	sub_82A76558(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83744e90
	if (!cr6.eq) goto loc_83744E90;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83744E90:
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744EA0;
	sub_82A76558(ctx, base);
	// li r5,81
	ctx.r5.s64 = 81;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744EB0;
	sub_82A76558(ctx, base);
	// li r5,85
	ctx.r5.s64 = 85;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744EC0;
	sub_82A76558(ctx, base);
	// li r5,86
	ctx.r5.s64 = 86;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744ED0;
	sub_82A76558(ctx, base);
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744EE0;
	sub_82A76558(ctx, base);
	// li r5,94
	ctx.r5.s64 = 94;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744EF0;
	sub_82A76558(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F00;
	sub_82A76558(ctx, base);
	// li r5,97
	ctx.r5.s64 = 97;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F10;
	sub_82A76558(ctx, base);
	// li r5,82
	ctx.r5.s64 = 82;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F20;
	sub_82A76558(ctx, base);
	// li r5,91
	ctx.r5.s64 = 91;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F30;
	sub_82A76558(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,90
	ctx.r5.s64 = 90;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F4C;
	sub_82A76558(ctx, base);
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F5C;
	sub_82A76558(ctx, base);
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744F6C;
	sub_82A76558(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,103
	ctx.r5.s64 = 103;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// bl 0x83740288
	ctx.lr = 0x83744FA4;
	sub_83740288(ctx, base);
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744FB4;
	sub_82A76558(ctx, base);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r8,127
	ctx.r8.s64 = 127;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,191
	ctx.r7.s64 = 191;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bge cr6,0x83744fe8
	if (!cr6.lt) goto loc_83744FE8;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
loc_83744FE8:
	// stb r11,71(r30)
	PPC_STORE_U8(ctx.r30.u32 + 71, ctx.r11.u8);
	// li r5,111
	ctx.r5.s64 = 111;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x83744FFC;
	sub_82A76558(ctx, base);
	// li r5,83
	ctx.r5.s64 = 83;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8374500C;
	sub_82A76558(ctx, base);
	// li r5,114
	ctx.r5.s64 = 114;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83740288
	ctx.lr = 0x8374501C;
	sub_83740288(ctx, base);
	// li r5,117
	ctx.r5.s64 = 117;
	// addi r4,r30,84
	ctx.r4.s64 = ctx.r30.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x8374502C;
	sub_82A76558(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744d30
	ctx.lr = 0x83745040;
	sub_83744D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,87
	ctx.r5.s64 = 87;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744d30
	ctx.lr = 0x83745054;
	sub_83744D30(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,89
	ctx.r5.s64 = 89;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744d30
	ctx.lr = 0x83745068;
	sub_83744D30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83745074"))) PPC_WEAK_FUNC(sub_83745074);
PPC_FUNC_IMPL(__imp__sub_83745074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745078"))) PPC_WEAK_FUNC(sub_83745078);
PPC_FUNC_IMPL(__imp__sub_83745078) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837450a4
	if (!cr6.eq) goto loc_837450A4;
loc_8374509C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837450ec
	goto loc_837450EC;
loc_837450A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a76558
	ctx.lr = 0x837450BC;
	sub_82A76558(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8374509c
	if (cr6.eq) goto loc_8374509C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8373f668
	ctx.lr = 0x837450D0;
	sub_8373F668(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373f7a0
	ctx.lr = 0x837450DC;
	sub_8373F7A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b42128
	ctx.lr = 0x837450E8;
	sub_83B42128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_837450EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_83745104"))) PPC_WEAK_FUNC(sub_83745104);
PPC_FUNC_IMPL(__imp__sub_83745104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745108"))) PPC_WEAK_FUNC(sub_83745108);
PPC_FUNC_IMPL(__imp__sub_83745108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,200
	cr6.compare<uint32_t>(ctx.r11.u32, 200, xer);
	// blt cr6,0x83745124
	if (cr6.lt) goto loc_83745124;
	// li r10,200
	ctx.r10.s64 = 200;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
loc_83745124:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-24416
	ctx.r9.s64 = ctx.r11.s64 + -24416;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83745138:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x8374515c
	if (cr6.eq) goto loc_8374515C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// blt cr6,0x83745138
	if (cr6.lt) goto loc_83745138;
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8374515C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374516C"))) PPC_WEAK_FUNC(sub_8374516C);
PPC_FUNC_IMPL(__imp__sub_8374516C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745170"))) PPC_WEAK_FUNC(sub_83745170);
PPC_FUNC_IMPL(__imp__sub_83745170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// blt cr6,0x83745184
	if (cr6.lt) goto loc_83745184;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83745184:
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,20812
	ctx.r8.s64 = ctx.r10.s64 + 20812;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745198"))) PPC_WEAK_FUNC(sub_83745198);
PPC_FUNC_IMPL(__imp__sub_83745198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837451A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,62
	ctx.r28.s64 = 62;
	// addi r29,r11,-24416
	ctx.r29.s64 = ctx.r11.s64 + -24416;
loc_837451B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83745270
	if (!cr6.eq) goto loc_83745270;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x837451e4
	if (!cr6.lt) goto loc_837451E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x837451e8
	if (!cr6.gt) goto loc_837451E8;
loc_837451E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837451E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83745238
	if (cr6.eq) goto loc_83745238;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// srawi r30,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 1;
	// bne cr6,0x83745218
	if (!cr6.eq) goto loc_83745218;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa3dd0
	ctx.lr = 0x83745218;
	sub_82AA3DD0(ctx, base);
loc_83745218:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83745264
	if (cr6.eq) goto loc_83745264;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x83745264
	goto loc_83745264;
loc_83745238:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83745250
	if (!cr6.eq) goto loc_83745250;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa3dd0
	ctx.lr = 0x83745250;
	sub_82AA3DD0(ctx, base);
loc_83745250:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83745264
	if (cr6.eq) goto loc_83745264;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_83745264:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83745270:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x837451b8
	if (!cr0.eq) goto loc_837451B8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83745284"))) PPC_WEAK_FUNC(sub_83745284);
PPC_FUNC_IMPL(__imp__sub_83745284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745288"))) PPC_WEAK_FUNC(sub_83745288);
PPC_FUNC_IMPL(__imp__sub_83745288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x837452a0
	if (!cr6.lt) goto loc_837452A0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_837452A0:
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x837452b8
	if (!cr6.lt) goto loc_837452B8;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_837452B8:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83745334
	if (cr6.eq) goto loc_83745334;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// blt cr6,0x83745334
	if (cr6.lt) goto loc_83745334;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// ble cr6,0x837452ec
	if (!cr6.gt) goto loc_837452EC;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_837452EC:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_83745334:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745340"))) PPC_WEAK_FUNC(sub_83745340);
PPC_FUNC_IMPL(__imp__sub_83745340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x83745428
	if (cr6.gt) goto loc_83745428;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83745388
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83745388;
	// bdzf 4*cr6+eq,0x837453b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837453B0;
	// bdzf 4*cr6+eq,0x837453ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837453EC;
	// bne cr6,0x837453ec
	if (!cr6.eq) goto loc_837453EC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,34
	ctx.r9.s64 = 34;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// bgt cr6,0x83745374
	if (cr6.gt) goto loc_83745374;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83745374:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// ble cr6,0x83745430
	if (!cr6.gt) goto loc_83745430;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x83745430
	goto loc_83745430;
loc_83745388:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,29
	ctx.r9.s64 = 29;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bgt cr6,0x8374539c
	if (cr6.gt) goto loc_8374539C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8374539C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// ble cr6,0x83745430
	if (!cr6.gt) goto loc_83745430;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x83745430
	goto loc_83745430;
loc_837453B0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,29
	ctx.r9.s64 = 29;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bgt cr6,0x837453c4
	if (cr6.gt) goto loc_837453C4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_837453C4:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,29
	ctx.r10.s64 = 29;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bgt cr6,0x837453d8
	if (cr6.gt) goto loc_837453D8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837453D8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// ble cr6,0x83745434
	if (!cr6.gt) goto loc_83745434;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x83745434
	goto loc_83745434;
loc_837453EC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,29
	ctx.r9.s64 = 29;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bgt cr6,0x83745400
	if (cr6.gt) goto loc_83745400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_83745400:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,29
	ctx.r10.s64 = 29;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(ctx.r11.u32, 29, xer);
	// bgt cr6,0x83745414
	if (cr6.gt) goto loc_83745414;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83745414:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(ctx.r11.u32, 28, xer);
	// ble cr6,0x83745434
	if (!cr6.gt) goto loc_83745434;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x83745434
	goto loc_83745434;
loc_83745428:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83745430:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83745434:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83745440
	if (cr6.eq) goto loc_83745440;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_83745440:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8374544c
	if (cr6.eq) goto loc_8374544C;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_8374544C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745460"))) PPC_WEAK_FUNC(sub_83745460);
PPC_FUNC_IMPL(__imp__sub_83745460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,22
	cr6.compare<uint32_t>(ctx.r4.u32, 22, xer);
	// blt cr6,0x83745490
	if (cr6.lt) goto loc_83745490;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
loc_83745490:
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-23520
	ctx.r10.s64 = ctx.r10.s64 + -23520;
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r9,r7,-23696
	ctx.r9.s64 = ctx.r7.s64 + -23696;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f13,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837454D4"))) PPC_WEAK_FUNC(sub_837454D4);
PPC_FUNC_IMPL(__imp__sub_837454D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837454D8"))) PPC_WEAK_FUNC(sub_837454D8);
PPC_FUNC_IMPL(__imp__sub_837454D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837454E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8374550c
	if (cr6.eq) goto loc_8374550C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8374550C:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r11,-23696
	ctx.r6.s64 = ctx.r11.s64 + -23696;
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,80(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,84(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x83745544;
	sub_83745288(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83745560
	if (!cr6.eq) goto loc_83745560;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83745578
	goto loc_83745578;
loc_83745560:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_83745578:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83745588
	if (cr6.eq) goto loc_83745588;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_83745588:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,88(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x837455B4;
	sub_83745288(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837455d0
	if (!cr6.eq) goto loc_837455D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x837455dc
	goto loc_837455DC;
loc_837455D0:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_837455DC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x837455ec
	if (cr6.eq) goto loc_837455EC;
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_837455EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837455F4"))) PPC_WEAK_FUNC(sub_837455F4);
PPC_FUNC_IMPL(__imp__sub_837455F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837455F8"))) PPC_WEAK_FUNC(sub_837455F8);
PPC_FUNC_IMPL(__imp__sub_837455F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83745600;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83745630
	if (cr6.eq) goto loc_83745630;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_83745630:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-23696
	ctx.r30.s64 = ctx.r11.s64 + -23696;
	// li r9,29
	ctx.r9.s64 = 29;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f5,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f5.f64 = double(temp.f32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x8374566C;
	sub_83745288(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83745684
	if (!cr6.eq) goto loc_83745684;
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x83745690
	goto loc_83745690;
loc_83745684:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_83745690:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x837456a0
	if (cr6.eq) goto loc_837456A0;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_837456A0:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x837456CC;
	sub_83745288(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837456e8
	if (!cr6.eq) goto loc_837456E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x837456f4
	goto loc_837456F4;
loc_837456E8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_837456F4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83745704
	if (cr6.eq) goto loc_83745704;
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_83745704:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x83745730;
	sub_83745288(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83745748
	if (!cr6.eq) goto loc_83745748;
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x83745754
	goto loc_83745754;
loc_83745748:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83745754:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x83745764
	if (cr6.eq) goto loc_83745764;
	// stfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_83745764:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8374576C"))) PPC_WEAK_FUNC(sub_8374576C);
PPC_FUNC_IMPL(__imp__sub_8374576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745770"))) PPC_WEAK_FUNC(sub_83745770);
PPC_FUNC_IMPL(__imp__sub_83745770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83745778;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-23696
	ctx.r30.s64 = ctx.r11.s64 + -23696;
	// li r27,29
	ctx.r27.s64 = 29;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x83745288
	ctx.lr = 0x837457C8;
	sub_83745288(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f5,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f5.f64 = double(temp.f32);
	// bne cr6,0x837457e8
	if (!cr6.eq) goto loc_837457E8;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x837457f4
	goto loc_837457F4;
loc_837457E8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_837457F4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83745804
	if (cr6.eq) goto loc_83745804;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_83745804:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x8374582C;
	sub_83745288(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83745844
	if (!cr6.eq) goto loc_83745844;
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x8374585c
	goto loc_8374585C;
loc_83745844:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_8374585C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8374586c
	if (cr6.eq) goto loc_8374586C;
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_8374586C:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x83745898;
	sub_83745288(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837458b4
	if (!cr6.eq) goto loc_837458B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x837458c0
	goto loc_837458C0;
loc_837458B4:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_837458C0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x837458d0
	if (cr6.eq) goto loc_837458D0;
	// stfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_837458D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837458D8"))) PPC_WEAK_FUNC(sub_837458D8);
PPC_FUNC_IMPL(__imp__sub_837458D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837458E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r4,r11,7
	ctx.r4.s64 = ctx.r11.s64 + 7;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x83745460
	ctx.lr = 0x83745918;
	sub_83745460(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83745288
	ctx.lr = 0x83745928;
	sub_83745288(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f5,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f5.f64 = double(temp.f32);
	// bne cr6,0x8374594c
	if (!cr6.eq) goto loc_8374594C;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x8374596c
	goto loc_8374596C;
loc_8374594C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83745964
	if (cr6.eq) goto loc_83745964;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8374596c
	goto loc_8374596C;
loc_83745964:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8374596C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8374597c
	if (cr6.eq) goto loc_8374597C;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_8374597C:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// addi r6,r11,-23696
	ctx.r6.s64 = ctx.r11.s64 + -23696;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,48(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x837459B0;
	sub_83745288(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837459c8
	if (!cr6.eq) goto loc_837459C8;
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x837459e0
	goto loc_837459E0;
loc_837459C8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_837459E0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x837459f0
	if (cr6.eq) goto loc_837459F0;
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_837459F0:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,72(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,76(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x83745288
	ctx.lr = 0x83745A1C;
	sub_83745288(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83745a38
	if (!cr6.eq) goto loc_83745A38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lfs f0,8976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x83745a44
	goto loc_83745A44;
loc_83745A38:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83745A44:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x83745a54
	if (cr6.eq) goto loc_83745A54;
	// stfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_83745A54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83745A5C"))) PPC_WEAK_FUNC(sub_83745A5C);
PPC_FUNC_IMPL(__imp__sub_83745A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745A60"))) PPC_WEAK_FUNC(sub_83745A60);
PPC_FUNC_IMPL(__imp__sub_83745A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83745A68;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x83745460
	ctx.lr = 0x83745A9C;
	sub_83745460(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83745288
	ctx.lr = 0x83745AAC;
	sub_83745288(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f5,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f5.f64 = double(temp.f32);
	// bne cr6,0x83745acc
	if (!cr6.eq) goto loc_83745ACC;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83745af4
	goto loc_83745AF4;
loc_83745ACC:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x83745af0
	if (cr6.eq) goto loc_83745AF0;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x83745af4
	goto loc_83745AF4;
loc_83745AF0:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_83745AF4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83745b04
	if (cr6.eq) goto loc_83745B04;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_83745B04:
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// bl 0x83745460
	ctx.lr = 0x83745B1C;
	sub_83745460(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83745288
	ctx.lr = 0x83745B2C;
	sub_83745288(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83745b44
	if (!cr6.eq) goto loc_83745B44;
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83745b50
	goto loc_83745B50;
loc_83745B44:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83745B50:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x83745b60
	if (cr6.eq) goto loc_83745B60;
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_83745B60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83745B68"))) PPC_WEAK_FUNC(sub_83745B68);
PPC_FUNC_IMPL(__imp__sub_83745B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83745B70;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r4,r11,18
	ctx.r4.s64 = ctx.r11.s64 + 18;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x83745460
	ctx.lr = 0x83745BA4;
	sub_83745460(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83745288
	ctx.lr = 0x83745BB4;
	sub_83745288(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f5,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f5.f64 = double(temp.f32);
	// bne cr6,0x83745bd4
	if (!cr6.eq) goto loc_83745BD4;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83745bfc
	goto loc_83745BFC;
loc_83745BD4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x83745bf8
	if (cr6.eq) goto loc_83745BF8;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x83745bfc
	goto loc_83745BFC;
loc_83745BF8:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_83745BFC:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83745c0c
	if (cr6.eq) goto loc_83745C0C;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_83745C0C:
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,19
	ctx.r4.s64 = ctx.r11.s64 + 19;
	// bl 0x83745460
	ctx.lr = 0x83745C24;
	sub_83745460(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83745288
	ctx.lr = 0x83745C34;
	sub_83745288(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83745c4c
	if (!cr6.eq) goto loc_83745C4C;
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83745c58
	goto loc_83745C58;
loc_83745C4C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83745C58:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x83745c68
	if (cr6.eq) goto loc_83745C68;
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_83745C68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83745C70"))) PPC_WEAK_FUNC(sub_83745C70);
PPC_FUNC_IMPL(__imp__sub_83745C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83745c94
	if (cr6.lt) goto loc_83745C94;
	// cmpwi cr6,r3,406
	cr6.compare<int32_t>(ctx.r3.s32, 406, xer);
	// bge cr6,0x83745c94
	if (!cr6.lt) goto loc_83745C94;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,-23296
	ctx.r9.s64 = ctx.r11.s64 + -23296;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_83745C94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745C9C"))) PPC_WEAK_FUNC(sub_83745C9C);
PPC_FUNC_IMPL(__imp__sub_83745C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745CA0"))) PPC_WEAK_FUNC(sub_83745CA0);
PPC_FUNC_IMPL(__imp__sub_83745CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83745cc8
	if (cr6.lt) goto loc_83745CC8;
	// cmpwi cr6,r3,406
	cr6.compare<int32_t>(ctx.r3.s32, 406, xer);
	// bge cr6,0x83745cc8
	if (!cr6.lt) goto loc_83745CC8;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-23296
	ctx.r11.s64 = ctx.r11.s64 + -23296;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_83745CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745CD0"))) PPC_WEAK_FUNC(sub_83745CD0);
PPC_FUNC_IMPL(__imp__sub_83745CD0) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2010
	cr6.compare<uint32_t>(ctx.r11.u32, 2010, xer);
	// bge cr6,0x83745cfc
	if (!cr6.lt) goto loc_83745CFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83745d04
	goto loc_83745D04;
loc_83745CFC:
	// bl 0x83b4b010
	ctx.lr = 0x83745D00;
	sub_83B4B010(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83745D04:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2010
	cr6.compare<uint32_t>(ctx.r11.u32, 2010, xer);
	// bge cr6,0x83745d18
	if (!cr6.lt) goto loc_83745D18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83745d20
	goto loc_83745D20;
loc_83745D18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4b010
	ctx.lr = 0x83745D20;
	sub_83B4B010(ctx, base);
loc_83745D20:
	// cmpld cr6,r31,r3
	cr6.compare<uint64_t>(ctx.r31.u64, ctx.r3.u64, xer);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// bgt cr6,0x83745d30
	if (cr6.gt) goto loc_83745D30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83745D30:
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

__attribute__((alias("__imp__sub_83745D48"))) PPC_WEAK_FUNC(sub_83745D48);
PPC_FUNC_IMPL(__imp__sub_83745D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,39
	ctx.r11.s64 = 39;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x83745e34
	if (cr6.gt) goto loc_83745E34;
	// lis r12,-31884
	ctx.r12.s64 = -2089549824;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23916
	ctx.r12.s64 = ctx.r12.s64 + 23916;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83745DA0;
	case 1:
		goto loc_83745DAC;
	case 2:
		goto loc_83745DB8;
	case 3:
		goto loc_83745DC4;
	case 4:
		goto loc_83745DD0;
	case 5:
		goto loc_83745DDC;
	case 6:
		goto loc_83745DE8;
	case 7:
		goto loc_83745DF4;
	case 8:
		goto loc_83745E00;
	case 9:
		goto loc_83745E0C;
	case 10:
		goto loc_83745E18;
	case 11:
		goto loc_83745E24;
	case 12:
		goto loc_83745E30;
	default:
		return;
	}
	// lwz r27,23968(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 23968);
	// lwz r27,23980(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 23980);
	// lwz r27,23992(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 23992);
	// lwz r27,24004(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24004);
	// lwz r27,24016(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24016);
	// lwz r27,24028(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// lwz r27,24040(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24040);
	// lwz r27,24052(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24052);
	// lwz r27,24064(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24064);
	// lwz r27,24076(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24076);
	// lwz r27,24088(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24088);
	// lwz r27,24100(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24100);
	// lwz r27,24112(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24112);
loc_83745DA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DAC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DD0:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DDC:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DE8:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745DF4:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745E00:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745E0C:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745E18:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745E24:
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83745E30:
	// li r11,13
	ctx.r11.s64 = 13;
loc_83745E34:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745E3C"))) PPC_WEAK_FUNC(sub_83745E3C);
PPC_FUNC_IMPL(__imp__sub_83745E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83745E40"))) PPC_WEAK_FUNC(sub_83745E40);
PPC_FUNC_IMPL(__imp__sub_83745E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,19
	ctx.r10.s64 = 19;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r9,-18120
	ctx.r5.s64 = ctx.r9.s64 + -18120;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r5,-80
	ctx.r6.s64 = ctx.r5.s64 + -80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_83745E60:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// bne cr6,0x83745e80
	if (!cr6.eq) goto loc_83745E80;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x83745ed8
	goto loc_83745ED8;
loc_83745E80:
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// bne cr6,0x83745e9c
	if (!cr6.eq) goto loc_83745E9C;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r9,124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x83745ed8
	goto loc_83745ED8;
loc_83745E9C:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bne cr6,0x83745ec0
	if (!cr6.eq) goto loc_83745EC0;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// divwu r10,r10,r7
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r7.u32);
	// b 0x83745ed8
	goto loc_83745ED8;
loc_83745EC0:
	// cmpwi cr6,r10,39
	cr6.compare<int32_t>(ctx.r10.s32, 39, xer);
	// blt cr6,0x83745ed0
	if (cr6.lt) goto loc_83745ED0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x83745ed8
	goto loc_83745ED8;
loc_83745ED0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_83745ED8:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x83745e60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83745E60;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,100
	ctx.r9.s64 = 100;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// addi r8,r11,50
	ctx.r8.s64 = ctx.r11.s64 + 50;
	// divwu r11,r8,r9
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r9.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x83745f0c
	if (cr6.lt) goto loc_83745F0C;
	// li r3,70
	ctx.r3.s64 = 70;
	// blr 
	return;
loc_83745F0C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83745F18"))) PPC_WEAK_FUNC(sub_83745F18);
PPC_FUNC_IMPL(__imp__sub_83745F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83745F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r29,r11,-18256
	ctx.r29.s64 = ctx.r11.s64 + -18256;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r29,-1280
	ctx.r9.s64 = ctx.r29.s64 + -1280;
loc_83745F3C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x83745f64
	if (cr6.eq) goto loc_83745F64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// blt cr6,0x83745f3c
	if (cr6.lt) goto loc_83745F3C;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83745F64:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// blt cr6,0x83745f78
	if (cr6.lt) goto loc_83745F78;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83745F78:
	// addi r9,r29,-1144
	ctx.r9.s64 = ctx.r29.s64 + -1144;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,52
	ctx.r9.s64 = ctx.r9.s64 + 52;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r8,r29,-1224
	ctx.r8.s64 = ctx.r29.s64 + -1224;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// addi r6,r9,-104
	ctx.r6.s64 = ctx.r9.s64 + -104;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83745FA8:
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bne cr6,0x83745fc8
	if (!cr6.eq) goto loc_83745FC8;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x83746024
	goto loc_83746024;
loc_83745FC8:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// bne cr6,0x83745fe4
	if (!cr6.eq) goto loc_83745FE4;
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x83746024
	goto loc_83746024;
loc_83745FE4:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x83746008
	if (!cr6.eq) goto loc_83746008;
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// lwz r8,148(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divwu r11,r11,r5
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r5.u32);
	// b 0x83746024
	goto loc_83746024;
loc_83746008:
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// blt cr6,0x8374601c
	if (cr6.lt) goto loc_8374601C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,-25
	ctx.r9.s64 = ctx.r30.s64 + -25;
	// b 0x83746038
	goto loc_83746038;
loc_8374601C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_83746024:
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// blt cr6,0x83746034
	if (cr6.lt) goto loc_83746034;
	// addi r9,r11,-25
	ctx.r9.s64 = ctx.r11.s64 + -25;
	// b 0x83746038
	goto loc_83746038;
loc_83746034:
	// li r9,1
	ctx.r9.s64 = 1;
loc_83746038:
	// lwz r8,52(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bne cr6,0x83746064
	if (!cr6.eq) goto loc_83746064;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x837460c0
	goto loc_837460C0;
loc_83746064:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// bne cr6,0x83746080
	if (!cr6.eq) goto loc_83746080;
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x837460c0
	goto loc_837460C0;
loc_83746080:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bne cr6,0x837460a4
	if (!cr6.eq) goto loc_837460A4;
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// lwz r8,148(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divwu r11,r11,r5
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r5.u32);
	// b 0x837460c0
	goto loc_837460C0;
loc_837460A4:
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// blt cr6,0x837460b8
	if (cr6.lt) goto loc_837460B8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r30,-25
	ctx.r9.s64 = ctx.r30.s64 + -25;
	// b 0x837460d4
	goto loc_837460D4;
loc_837460B8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_837460C0:
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// blt cr6,0x837460d0
	if (cr6.lt) goto loc_837460D0;
	// addi r9,r11,-25
	ctx.r9.s64 = ctx.r11.s64 + -25;
	// b 0x837460d4
	goto loc_837460D4;
loc_837460D0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_837460D4:
	// lwzu r11,104(r6)
	ea = 104 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bdnz 0x83745fa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83745FA8;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r30,100
	ctx.r30.s64 = 100;
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// divwu r31,r11,r30
	ctx.r31.u32 = PPCDivide(ctx.r11.u32, ctx.r30.u32);
	// bne cr6,0x83746110
	if (!cr6.eq) goto loc_83746110;
	// addi r11,r29,-104
	ctx.r11.s64 = ctx.r29.s64 + -104;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// b 0x83746148
	goto loc_83746148;
loc_83746110:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83745d48
	ctx.lr = 0x83746118;
	sub_83745D48(ctx, base);
	// cmpwi cr6,r3,39
	cr6.compare<int32_t>(ctx.r3.s32, 39, xer);
	// bge cr6,0x83746130
	if (!cr6.lt) goto loc_83746130;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8374613c
	if (cr6.lt) goto loc_8374613C;
loc_83746130:
	// addi r11,r29,-52
	ctx.r11.s64 = ctx.r29.s64 + -52;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// b 0x83746148
	goto loc_83746148;
loc_8374613C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8374614c
	if (!cr6.eq) goto loc_8374614C;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
loc_83746148:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8374614C:
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x83746180
	if (!cr6.eq) goto loc_83746180;
	// cmpwi cr6,r4,12
	cr6.compare<int32_t>(ctx.r4.s32, 12, xer);
	// beq cr6,0x83746180
	if (cr6.eq) goto loc_83746180;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83745e40
	ctx.lr = 0x83746164;
	sub_83745E40(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 * 60;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// divwu r31,r10,r30
	ctx.r31.u32 = PPCDivide(ctx.r10.u32, ctx.r30.u32);
loc_83746180:
	// cmplwi cr6,r31,109
	cr6.compare<uint32_t>(ctx.r31.u32, 109, xer);
	// ble cr6,0x83746198
	if (!cr6.gt) goto loc_83746198;
	// li r31,109
	ctx.r31.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83746198:
	// cmplwi cr6,r31,40
	cr6.compare<uint32_t>(ctx.r31.u32, 40, xer);
	// bge cr6,0x837461a4
	if (!cr6.lt) goto loc_837461A4;
	// li r31,40
	ctx.r31.s64 = 40;
loc_837461A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837461B0"))) PPC_WEAK_FUNC(sub_837461B0);
PPC_FUNC_IMPL(__imp__sub_837461B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-20040
	ctx.r6.s64 = ctx.r11.s64 + -20040;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d88b0
	ctx.lr = 0x837461E0;
	sub_831D88B0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_837461EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837461fc
	if (cr6.eq) goto loc_837461FC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_837461FC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x837461ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837461EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x83746238
	if (!cr6.eq) goto loc_83746238;
	// li r11,11
	ctx.r11.s64 = 11;
	// divw r3,r10,r11
	ctx.r3.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// cmplwi cr6,r3,99
	cr6.compare<uint32_t>(ctx.r3.u32, 99, xer);
	// blt cr6,0x83746228
	if (cr6.lt) goto loc_83746228;
	// li r3,99
	ctx.r3.s64 = 99;
	// b 0x83746304
	goto loc_83746304;
loc_83746228:
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bge cr6,0x83746304
	if (!cr6.lt) goto loc_83746304;
	// li r3,40
	ctx.r3.s64 = 40;
	// b 0x83746304
	goto loc_83746304;
loc_83746238:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837462a8
	if (cr6.lt) goto loc_837462A8;
	// beq cr6,0x8374627c
	if (cr6.eq) goto loc_8374627C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// blt cr6,0x83746260
	if (cr6.lt) goto loc_83746260;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x837462b8
	goto loc_837462B8;
loc_83746260:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x837462d0
	goto loc_837462D0;
loc_8374627C:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,-27168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x831d18f0
	ctx.lr = 0x837462A0;
	sub_831D18F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x837462d0
	goto loc_837462D0;
loc_837462A8:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_837462B8:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-27168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_837462D0:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// ble cr6,0x837462ec
	if (!cr6.gt) goto loc_837462EC;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x837462f8
	goto loc_837462F8;
loc_837462EC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x837462f8
	if (!cr6.lt) goto loc_837462F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837462F8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83746304:
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

__attribute__((alias("__imp__sub_8374631C"))) PPC_WEAK_FUNC(sub_8374631C);
PPC_FUNC_IMPL(__imp__sub_8374631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746320"))) PPC_WEAK_FUNC(sub_83746320);
PPC_FUNC_IMPL(__imp__sub_83746320) {
	PPC_FUNC_PROLOGUE();
	// b 0x83489c40
	sub_83489C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746324"))) PPC_WEAK_FUNC(sub_83746324);
PPC_FUNC_IMPL(__imp__sub_83746324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746328"))) PPC_WEAK_FUNC(sub_83746328);
PPC_FUNC_IMPL(__imp__sub_83746328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-17360
	ctx.r5.s64 = ctx.r11.s64 + -17360;
	// li r6,17
	ctx.r6.s64 = 17;
	// b 0x8373fbb0
	sub_8373FBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8374633C"))) PPC_WEAK_FUNC(sub_8374633C);
PPC_FUNC_IMPL(__imp__sub_8374633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746340"))) PPC_WEAK_FUNC(sub_83746340);
PPC_FUNC_IMPL(__imp__sub_83746340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,-17360
	ctx.r5.s64 = ctx.r11.s64 + -17360;
	// li r6,17
	ctx.r6.s64 = 17;
	// b 0x8373fbb0
	sub_8373FBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746354"))) PPC_WEAK_FUNC(sub_83746354);
PPC_FUNC_IMPL(__imp__sub_83746354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746358"))) PPC_WEAK_FUNC(sub_83746358);
PPC_FUNC_IMPL(__imp__sub_83746358) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r4,r10,30464
	ctx.r4.u64 = ctx.r10.u64 | 30464;
	// ori r11,r11,30583
	ctx.r11.u64 = ctx.r11.u64 | 30583;
	// li r10,6007
	ctx.r10.s64 = 6007;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// ori r9,r9,119
	ctx.r9.u64 = ctx.r9.u64 | 119;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r8,r8,57991
	ctx.r8.u64 = ctx.r8.u64 | 57991;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ori r7,r7,11036
	ctx.r7.u64 = ctx.r7.u64 | 11036;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r6,r6,35359
	ctx.r6.u64 = ctx.r6.u64 | 35359;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r5,r5,9752
	ctx.r5.u64 = ctx.r5.u64 | 9752;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r30,30496
	ctx.r30.s64 = 1998585856;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// bl 0x8373f7a0
	ctx.lr = 0x837463F0;
	sub_8373F7A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b42e38
	ctx.lr = 0x837463FC;
	sub_83B42E38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83746418"))) PPC_WEAK_FUNC(sub_83746418);
PPC_FUNC_IMPL(__imp__sub_83746418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83746420;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x83746438;
	sub_8257FAD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8374651c
	if (cr0.eq) goto loc_8374651C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_83746458:
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837464fc
	if (cr6.eq) goto loc_837464FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747788
	ctx.lr = 0x8374646C;
	sub_83747788(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83746488
	if (cr6.lt) goto loc_83746488;
	// bne cr6,0x83746540
	if (!cr6.eq) goto loc_83746540;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83747d08
	ctx.lr = 0x83746484;
	sub_83747D08(ctx, base);
	// b 0x83746494
	goto loc_83746494;
loc_83746488:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x837479c8
	ctx.lr = 0x83746494;
	sub_837479C8(ctx, base);
loc_83746494:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83746540
	if (cr6.eq) goto loc_83746540;
	// bl 0x827aac08
	ctx.lr = 0x837464A4;
	sub_827AAC08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827aac20
	ctx.lr = 0x837464AC;
	sub_827AAC20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x837464cc
	if (!cr6.gt) goto loc_837464CC;
loc_837464B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827aac08
	ctx.lr = 0x837464BC;
	sub_827AAC08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827aac20
	ctx.lr = 0x837464C4;
	sub_827AAC20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837464b4
	if (cr6.gt) goto loc_837464B4;
loc_837464CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stwx r30,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82595150
	ctx.lr = 0x837464E4;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747980
	ctx.lr = 0x837464EC;
	sub_83747980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x837464F4;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837464FC;
	sub_82595170(ctx, base);
loc_837464FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// blt cr6,0x83746458
	if (cr6.lt) goto loc_83746458;
loc_8374651C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746534
	if (cr6.lt) goto loc_83746534;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746534;
	sub_8257FB60(ctx, base);
loc_83746534:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83746540:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746558
	if (cr6.lt) goto loc_83746558;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746558;
	sub_8257FB60(ctx, base);
loc_83746558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746564"))) PPC_WEAK_FUNC(sub_83746564);
PPC_FUNC_IMPL(__imp__sub_83746564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746568"))) PPC_WEAK_FUNC(sub_83746568);
PPC_FUNC_IMPL(__imp__sub_83746568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83746570;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837465f0
	if (cr0.eq) goto loc_837465F0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_83746598:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837465d0
	if (cr6.eq) goto loc_837465D0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837465B8;
	sub_82595150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83747980
	ctx.lr = 0x837465C0;
	sub_83747980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x837465C8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837465D0;
	sub_82595170(ctx, base);
loc_837465D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x83746598
	if (cr6.lt) goto loc_83746598;
loc_837465F0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83746620
	if (cr6.eq) goto loc_83746620;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83746618;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83746620:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83b3f898
	ctx.lr = 0x83746628;
	sub_83B3F898(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83746644
	if (cr6.eq) goto loc_83746644;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83746644;
	sub_825952B8(ctx, base);
loc_83746644:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746658"))) PPC_WEAK_FUNC(sub_83746658);
PPC_FUNC_IMPL(__imp__sub_83746658) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-21744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x837466b8
	if (cr6.eq) goto loc_837466B8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83746690;
	sub_82595150(ctx, base);
	// lwz r30,-21744(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21744);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837466ac
	if (cr6.eq) goto loc_837466AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83746568
	ctx.lr = 0x837466A4;
	sub_83746568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x837466AC;
	sub_82416268(ctx, base);
loc_837466AC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837466B4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_837466B8:
	// stw r11,-21744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21744, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837466D4"))) PPC_WEAK_FUNC(sub_837466D4);
PPC_FUNC_IMPL(__imp__sub_837466D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837466D8"))) PPC_WEAK_FUNC(sub_837466D8);
PPC_FUNC_IMPL(__imp__sub_837466D8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8257fa88
	ctx.lr = 0x83746704;
	sub_8257FA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,161
	ctx.r4.s64 = 161;
	// bl 0x82ad5e38
	ctx.lr = 0x83746710;
	sub_82AD5E38(ctx, base);
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

__attribute__((alias("__imp__sub_83746728"))) PPC_WEAK_FUNC(sub_83746728);
PPC_FUNC_IMPL(__imp__sub_83746728) {
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
	// lwz r11,-21744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83746760
	if (cr6.eq) goto loc_83746760;
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
loc_83746760:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83746778;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8374678c
	if (cr6.eq) goto loc_8374678C;
	// bl 0x837466d8
	ctx.lr = 0x83746784;
	sub_837466D8(ctx, base);
	// stw r3,-21744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21744, ctx.r3.u32);
	// b 0x83746794
	goto loc_83746794;
loc_8374678C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21744, ctx.r11.u32);
loc_83746794:
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

__attribute__((alias("__imp__sub_837467AC"))) PPC_WEAK_FUNC(sub_837467AC);
PPC_FUNC_IMPL(__imp__sub_837467AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837467B0"))) PPC_WEAK_FUNC(sub_837467B0);
PPC_FUNC_IMPL(__imp__sub_837467B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837467B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837467D4;
	sub_8257FAD0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83746858
	if (cr6.eq) goto loc_83746858;
	// li r6,0
	ctx.r6.s64 = 0;
loc_837467F8:
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83746814
	if (!cr6.eq) goto loc_83746814;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x83746848
	if (!cr6.eq) goto loc_83746848;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// b 0x83746848
	goto loc_83746848;
loc_83746814:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_8374681C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x83746840
	if (cr6.eq) goto loc_83746840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8374681c
	if (cr6.eq) goto loc_8374681C;
loc_83746840:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x837468c8
	if (cr6.eq) goto loc_837468C8;
loc_83746848:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// blt cr6,0x837467f8
	if (cr6.lt) goto loc_837467F8;
loc_83746858:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837479c8
	ctx.lr = 0x83746864;
	sub_837479C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83746894
	if (!cr6.eq) goto loc_83746894;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746888
	if (cr6.lt) goto loc_83746888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746888;
	sub_8257FB60(ctx, base);
loc_83746888:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83746894:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x837468c0
	if (!cr6.eq) goto loc_837468C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x837468B8;
	sub_835977D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x837468c8
	goto loc_837468C8;
loc_837468C0:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_837468C8:
	// bl 0x827aac08
	ctx.lr = 0x837468CC;
	sub_827AAC08(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837468e4
	if (cr6.lt) goto loc_837468E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837468E4;
	sub_8257FB60(ctx, base);
loc_837468E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837468F0"))) PPC_WEAK_FUNC(sub_837468F0);
PPC_FUNC_IMPL(__imp__sub_837468F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837468F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x83746914;
	sub_8257FAD0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83746998
	if (cr6.eq) goto loc_83746998;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83746938:
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83746954
	if (!cr6.eq) goto loc_83746954;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x83746988
	if (!cr6.eq) goto loc_83746988;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// b 0x83746988
	goto loc_83746988;
loc_83746954:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_8374695C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x83746980
	if (cr6.eq) goto loc_83746980;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8374695c
	if (cr6.eq) goto loc_8374695C;
loc_83746980:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83746a04
	if (cr6.eq) goto loc_83746A04;
loc_83746988:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// blt cr6,0x83746938
	if (cr6.lt) goto loc_83746938;
loc_83746998:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83747d08
	ctx.lr = 0x837469A0;
	sub_83747D08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837469d0
	if (!cr6.eq) goto loc_837469D0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837469c4
	if (cr6.lt) goto loc_837469C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837469C4;
	sub_8257FB60(ctx, base);
loc_837469C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837469D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x837469fc
	if (!cr6.eq) goto loc_837469FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x837469F4;
	sub_835977D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x83746a04
	goto loc_83746A04;
loc_837469FC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_83746A04:
	// bl 0x827aac08
	ctx.lr = 0x83746A08;
	sub_827AAC08(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746a20
	if (cr6.lt) goto loc_83746A20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746A20;
	sub_8257FB60(ctx, base);
loc_83746A20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746A2C"))) PPC_WEAK_FUNC(sub_83746A2C);
PPC_FUNC_IMPL(__imp__sub_83746A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746A30"))) PPC_WEAK_FUNC(sub_83746A30);
PPC_FUNC_IMPL(__imp__sub_83746A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83746A38;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8257fad0
	ctx.lr = 0x83746A54;
	sub_8257FAD0(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,15
	ctx.r22.s64 = 15;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
loc_83746A6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83746a6c
	if (!cr6.eq) goto loc_83746A6C;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83746A94;
	sub_8259CC28(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-17168
	ctx.r31.s64 = ctx.r11.s64 + -17168;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x83523fd8
	ctx.lr = 0x83746AA8;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83746af4
	if (cr6.eq) goto loc_83746AF4;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a7eb0
	ctx.lr = 0x83746AC8;
	sub_827A7EB0(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a84c0
	ctx.lr = 0x83746AE0;
	sub_827A84C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x83746AF4;
	sub_8259CB28(ctx, base);
loc_83746AF4:
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// srawi. r25,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x83746b9c
	if (cr0.eq) goto loc_83746B9C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_83746B10:
	// lwzx r30,r29,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83746b8c
	if (cr6.eq) goto loc_83746B8C;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83746B28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83746b4c
	if (cr6.eq) goto loc_83746B4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83746b28
	if (cr6.eq) goto loc_83746B28;
loc_83746B4C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83746bb8
	if (cr6.eq) goto loc_83746BB8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241c348
	ctx.lr = 0x83746B5C;
	sub_8241C348(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83746B60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x83746b84
	if (cr6.eq) goto loc_83746B84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83746b60
	if (cr6.eq) goto loc_83746B60;
loc_83746B84:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83746bb8
	if (cr6.eq) goto loc_83746BB8;
loc_83746B8C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// blt cr6,0x83746b10
	if (cr6.lt) goto loc_83746B10;
loc_83746B9C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83746c1c
	if (cr6.lt) goto loc_83746C1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x83746c14
	goto loc_83746C14;
loc_83746BB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827aac20
	ctx.lr = 0x83746BC0;
	sub_827AAC20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83746bfc
	if (cr6.gt) goto loc_83746BFC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82595150
	ctx.lr = 0x83746BE4;
	sub_82595150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83747980
	ctx.lr = 0x83746BEC;
	sub_83747980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x83746BF4;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83746BFC;
	sub_82595170(ctx, base);
loc_83746BFC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83746c1c
	if (cr6.lt) goto loc_83746C1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_83746C14:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83746C1C;
	sub_825952B8(ctx, base);
loc_83746C1C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// blt cr6,0x83746c40
	if (cr6.lt) goto loc_83746C40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x83746C40;
	sub_8257FB60(ctx, base);
loc_83746C40:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746C48"))) PPC_WEAK_FUNC(sub_83746C48);
PPC_FUNC_IMPL(__imp__sub_83746C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83746C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83746c70
	if (!cr6.eq) goto loc_83746C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83746C70:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-17208
	ctx.r31.s64 = ctx.r11.s64 + -17208;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x83523fd8
	ctx.lr = 0x83746C84;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x83746d58
	if (cr6.eq) goto loc_83746D58;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x83746C98;
	sub_837B0C10(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a7eb0
	ctx.lr = 0x83746CB0;
	sub_827A7EB0(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a84c0
	ctx.lr = 0x83746CC8;
	sub_827A84C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x83746CDC;
	sub_8259CB28(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83746cf0
	if (!cr6.lt) goto loc_83746CF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_83746CF0:
	// bl 0x83104018
	ctx.lr = 0x83746CF4;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83746d34
	if (cr6.eq) goto loc_83746D34;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83746d14
	if (!cr6.lt) goto loc_83746D14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_83746D14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837468f0
	ctx.lr = 0x83746D1C;
	sub_837468F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83746D28;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83746D34:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837467b0
	ctx.lr = 0x83746D40;
	sub_837467B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x83746D4C;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83746D58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837467b0
	ctx.lr = 0x83746D60;
	sub_837467B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746D68"))) PPC_WEAK_FUNC(sub_83746D68);
PPC_FUNC_IMPL(__imp__sub_83746D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83746D70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83748270
	ctx.lr = 0x83746D84;
	sub_83748270(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83746ddc
	if (cr6.eq) goto loc_83746DDC;
loc_83746D94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83748278
	ctx.lr = 0x83746D9C;
	sub_83748278(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_83746DA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83746dc8
	if (cr6.eq) goto loc_83746DC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83746da4
	if (cr6.eq) goto loc_83746DA4;
loc_83746DC8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83746ddc
	if (cr6.eq) goto loc_83746DDC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83746d94
	if (cr6.lt) goto loc_83746D94;
loc_83746DDC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x83746df0
	if (!cr6.eq) goto loc_83746DF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83746DF0:
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x83746E04;
	sub_8257FAD0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83746e54
	if (!cr6.eq) goto loc_83746E54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747f88
	ctx.lr = 0x83746E20;
	sub_83747F88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83746e4c
	if (!cr6.eq) goto loc_83746E4C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746e40
	if (cr6.lt) goto loc_83746E40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746E40;
	sub_8257FB60(ctx, base);
loc_83746E40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83746E4C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
loc_83746E54:
	// bl 0x83747ef8
	ctx.lr = 0x83746E58;
	sub_83747EF8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746e70
	if (cr6.lt) goto loc_83746E70;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746E70;
	sub_8257FB60(ctx, base);
loc_83746E70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746E7C"))) PPC_WEAK_FUNC(sub_83746E7C);
PPC_FUNC_IMPL(__imp__sub_83746E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83746E80"))) PPC_WEAK_FUNC(sub_83746E80);
PPC_FUNC_IMPL(__imp__sub_83746E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83746E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83748270
	ctx.lr = 0x83746E98;
	sub_83748270(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// ble cr6,0x83746f20
	if (!cr6.gt) goto loc_83746F20;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x83746EB0;
	sub_8257FAD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83746f08
	if (cr6.eq) goto loc_83746F08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747f10
	ctx.lr = 0x83746ECC;
	sub_83747F10(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x83746f08
	if (cr6.gt) goto loc_83746F08;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82595150
	ctx.lr = 0x83746EF0;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83748018
	ctx.lr = 0x83746EF8;
	sub_83748018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83746F00;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83746F08;
	sub_82595170(ctx, base);
loc_83746F08:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746f20
	if (cr6.lt) goto loc_83746F20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746F20;
	sub_8257FB60(ctx, base);
loc_83746F20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746F28"))) PPC_WEAK_FUNC(sub_83746F28);
PPC_FUNC_IMPL(__imp__sub_83746F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83746F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x83746F48;
	sub_8257FAD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83746fdc
	if (cr0.eq) goto loc_83746FDC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83746F68:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83746fb4
	if (cr6.eq) goto loc_83746FB4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83746F84;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83746fa4
	if (cr6.eq) goto loc_83746FA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83748018
	ctx.lr = 0x83746F9C;
	sub_83748018(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x83746FA4;
	sub_82416268(ctx, base);
loc_83746FA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83746FAC;
	sub_82595170(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_83746FB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// blt cr6,0x83746f68
	if (cr6.lt) goto loc_83746F68;
loc_83746FDC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83746ff4
	if (cr6.lt) goto loc_83746FF4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x83746FF4;
	sub_8257FB60(ctx, base);
loc_83746FF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83746FFC"))) PPC_WEAK_FUNC(sub_83746FFC);
PPC_FUNC_IMPL(__imp__sub_83746FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747000"))) PPC_WEAK_FUNC(sub_83747000);
PPC_FUNC_IMPL(__imp__sub_83747000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83747008;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8257fad0
	ctx.lr = 0x83747028;
	sub_8257FAD0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747044
	if (cr6.eq) goto loc_83747044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827aabc0
	ctx.lr = 0x83747044;
	sub_827AABC0(ctx, base);
loc_83747044:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8374705c
	if (cr6.lt) goto loc_8374705C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8374705C;
	sub_8257FB60(ctx, base);
loc_8374705C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747064"))) PPC_WEAK_FUNC(sub_83747064);
PPC_FUNC_IMPL(__imp__sub_83747064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747068"))) PPC_WEAK_FUNC(sub_83747068);
PPC_FUNC_IMPL(__imp__sub_83747068) {
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
	// bl 0x83748270
	ctx.lr = 0x83747088;
	sub_83748270(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x837470ac
	if (!cr6.gt) goto loc_837470AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837470ac
	if (cr6.eq) goto loc_837470AC;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_837470AC:
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

__attribute__((alias("__imp__sub_837470C4"))) PPC_WEAK_FUNC(sub_837470C4);
PPC_FUNC_IMPL(__imp__sub_837470C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837470C8"))) PPC_WEAK_FUNC(sub_837470C8);
PPC_FUNC_IMPL(__imp__sub_837470C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837470D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r11,-21736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8374715c
	if (cr6.eq) goto loc_8374715C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837470F8;
	sub_82595150(ctx, base);
	// lwz r31,-21736(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21736);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83747144
	if (cr6.eq) goto loc_83747144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83746f28
	ctx.lr = 0x8374710C;
	sub_83746F28(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83b3f898
	ctx.lr = 0x83747114;
	sub_83B3F898(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83747130
	if (cr6.eq) goto loc_83747130;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83747130;
	sub_825952B8(ctx, base);
loc_83747130:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82416268
	ctx.lr = 0x83747144;
	sub_82416268(ctx, base);
loc_83747144:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8374714C;
	sub_82595170(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-21736(r30)
	PPC_STORE_U32(ctx.r30.u32 + -21736, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8374715C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21736(r30)
	PPC_STORE_U32(ctx.r30.u32 + -21736, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8374716C"))) PPC_WEAK_FUNC(sub_8374716C);
PPC_FUNC_IMPL(__imp__sub_8374716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747170"))) PPC_WEAK_FUNC(sub_83747170);
PPC_FUNC_IMPL(__imp__sub_83747170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83747178;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8257fad0
	ctx.lr = 0x837471A0;
	sub_8257FAD0(ctx, base);
	// bl 0x83748270
	ctx.lr = 0x837471A4;
	sub_83748270(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_837471C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837471c0
	if (!cr6.eq) goto loc_837471C0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837471E8;
	sub_8259CC28(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r27,r11,-17016
	ctx.r27.s64 = ctx.r11.s64 + -17016;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a7eb0
	ctx.lr = 0x83747208;
	sub_827A7EB0(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x83747228;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8374723C;
	sub_8259CB28(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r24,2
	ctx.r24.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8374725c
	if (cr6.lt) goto loc_8374725C;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x8374725C;
	sub_825952B8(ctx, base);
loc_8374725C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// beq cr6,0x83747420
	if (cr6.eq) goto loc_83747420;
loc_83747274:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83748278
	ctx.lr = 0x8374727C;
	sub_83748278(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83747290:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83747290
	if (!cr6.eq) goto loc_83747290;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837472B4;
	sub_8259CC28(ctx, base);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a7eb0
	ctx.lr = 0x837472C8;
	sub_827A7EB0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x837472E8;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x837472FC;
	sub_8259CB28(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83747318
	if (cr6.lt) goto loc_83747318;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x83747318;
	sub_825952B8(ctx, base);
loc_83747318:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a7eb0
	ctx.lr = 0x83747338;
	sub_827A7EB0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x83747358;
	sub_8259CB28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x8374736C;
	sub_8259CB28(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83747388
	if (cr6.lt) goto loc_83747388;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x83747388;
	sub_825952B8(ctx, base);
loc_83747388:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bge cr6,0x837473a8
	if (!cr6.lt) goto loc_837473A8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_837473A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x827a8810
	ctx.lr = 0x837473BC;
	sub_827A8810(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x837473fc
	if (cr6.eq) goto loc_837473FC;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837473e0
	if (cr6.lt) goto loc_837473E0;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837473E0;
	sub_825952B8(ctx, base);
loc_837473E0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83747274
	if (cr6.lt) goto loc_83747274;
	// b 0x83747420
	goto loc_83747420;
loc_837473FC:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83747414
	if (cr6.lt) goto loc_83747414;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83747414;
	sub_825952B8(ctx, base);
loc_83747414:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83747420:
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bne cr6,0x83747474
	if (!cr6.eq) goto loc_83747474;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83747444
	if (cr6.lt) goto loc_83747444;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83747444;
	sub_825952B8(ctx, base);
loc_83747444:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83747468
	if (cr6.lt) goto loc_83747468;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x83747468;
	sub_8257FB60(ctx, base);
loc_83747468:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83747474:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837474f4
	if (!cr6.eq) goto loc_837474F4;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837480b0
	ctx.lr = 0x83747498;
	sub_837480B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837474ec
	if (!cr6.eq) goto loc_837474EC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837474bc
	if (cr6.lt) goto loc_837474BC;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837474BC;
	sub_825952B8(ctx, base);
loc_837474BC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83747468
	if (cr6.lt) goto loc_83747468;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x837474E0;
	sub_8257FB60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837474EC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
loc_837474F4:
	// bl 0x83747ef8
	ctx.lr = 0x837474F8;
	sub_83747EF8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83747518
	if (cr6.lt) goto loc_83747518;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83747518;
	sub_825952B8(ctx, base);
loc_83747518:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8374753c
	if (cr6.lt) goto loc_8374753C;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x8374753C;
	sub_8257FB60(ctx, base);
loc_8374753C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747548"))) PPC_WEAK_FUNC(sub_83747548);
PPC_FUNC_IMPL(__imp__sub_83747548) {
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
	// lwz r11,-21736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747574
	if (cr6.eq) goto loc_83747574;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837475c8
	goto loc_837475C8;
loc_83747574:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8374758C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837475e0
	if (cr6.eq) goto loc_837475E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8257fa88
	ctx.lr = 0x837475B0;
	sub_8257FA88(ctx, base);
	// bl 0x83748270
	ctx.lr = 0x837475B4;
	sub_83748270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83587720
	ctx.lr = 0x837475C0;
	sub_83587720(ctx, base);
loc_837475C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,-21736(r30)
	PPC_STORE_U32(ctx.r30.u32 + -21736, ctx.r31.u32);
loc_837475C8:
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
loc_837475E0:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x837475c0
	goto loc_837475C0;
}

__attribute__((alias("__imp__sub_837475E8"))) PPC_WEAK_FUNC(sub_837475E8);
PPC_FUNC_IMPL(__imp__sub_837475E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837475fc
	if (!cr6.eq) goto loc_837475FC;
	// blr 
	return;
loc_837475FC:
	// b 0x83747068
	sub_83747068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747600"))) PPC_WEAK_FUNC(sub_83747600);
PPC_FUNC_IMPL(__imp__sub_83747600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83747608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-21736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8374766c
	if (cr6.eq) goto loc_8374766C;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// ble cr6,0x83747634
	if (!cr6.gt) goto loc_83747634;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
loc_83747634:
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83747664
	if (!cr6.gt) goto loc_83747664;
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
loc_83747648:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,-21736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21736);
	// bl 0x83746e80
	ctx.lr = 0x83747654;
	sub_83746E80(ctx, base);
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x83747648
	if (cr6.lt) goto loc_83747648;
loc_83747664:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r11.u32);
loc_8374766C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747674"))) PPC_WEAK_FUNC(sub_83747674);
PPC_FUNC_IMPL(__imp__sub_83747674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747678"))) PPC_WEAK_FUNC(sub_83747678);
PPC_FUNC_IMPL(__imp__sub_83747678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83747680;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,32
	ctx.r29.s64 = 32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837476A8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837476dc
	if (cr6.eq) goto loc_837476DC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83104868
	ctx.lr = 0x837476C4;
	sub_83104868(ctx, base);
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-16644
	ctx.r9.s64 = ctx.r10.s64 + -16644;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x837476e0
	goto loc_837476E0;
loc_837476DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837476E0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837476f8
	if (!cr6.eq) goto loc_837476F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837476F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x831ce7d8
	ctx.lr = 0x83747708;
	sub_831CE7D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// bl 0x83103b18
	ctx.lr = 0x83747718;
	sub_83103B18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747724"))) PPC_WEAK_FUNC(sub_83747724);
PPC_FUNC_IMPL(__imp__sub_83747724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747728"))) PPC_WEAK_FUNC(sub_83747728);
PPC_FUNC_IMPL(__imp__sub_83747728) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-16644
	ctx.r10.s64 = ctx.r11.s64 + -16644;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83103f60
	ctx.lr = 0x83747754;
	sub_83103F60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8374776c
	if (cr6.eq) goto loc_8374776C;
	// bl 0x82416268
	ctx.lr = 0x83747768;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8374776C:
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

__attribute__((alias("__imp__sub_83747784"))) PPC_WEAK_FUNC(sub_83747784);
PPC_FUNC_IMPL(__imp__sub_83747784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747788"))) PPC_WEAK_FUNC(sub_83747788);
PPC_FUNC_IMPL(__imp__sub_83747788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83747790;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837477ec
	if (cr6.eq) goto loc_837477EC;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837477B8;
	sub_82595150(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837477d4
	if (cr6.eq) goto loc_837477D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83747600
	ctx.lr = 0x837477CC;
	sub_83747600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x837477D4;
	sub_82416268(ctx, base);
loc_837477D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837477DC;
	sub_82595170(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837477EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837477FC"))) PPC_WEAK_FUNC(sub_837477FC);
PPC_FUNC_IMPL(__imp__sub_837477FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747800"))) PPC_WEAK_FUNC(sub_83747800);
PPC_FUNC_IMPL(__imp__sub_83747800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83747808;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31743
	ctx.r27.s64 = -2080309248;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-21736(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -21736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747940
	if (cr6.eq) goto loc_83747940;
	// lis r24,-31743
	ctx.r24.s64 = -2080309248;
	// lwz r11,-21744(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -21744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747940
	if (cr6.eq) goto loc_83747940;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,196
	ctx.r4.s64 = 196;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8374784C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747940
	if (cr6.eq) goto loc_83747940;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8374786C;
	sub_831CDCF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831049a8
	ctx.lr = 0x83747878;
	sub_831049A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832e8
	ctx.lr = 0x83747880;
	sub_825832E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83747920
	if (!cr6.gt) goto loc_83747920;
loc_83747890:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104b18
	ctx.lr = 0x8374789C;
	sub_83104B18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104ab8
	ctx.lr = 0x837478AC;
	sub_83104AB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83104a50
	ctx.lr = 0x837478BC;
	sub_83104A50(ctx, base);
	// lwz r11,-21736(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -21736);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837478d4
	if (!cr6.eq) goto loc_837478D4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x83747908
	goto loc_83747908;
loc_837478D4:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x837478e8
	if (cr6.lt) goto loc_837478E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x83747908
	goto loc_83747908;
loc_837478E8:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,-21736(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -21736);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83747170
	ctx.lr = 0x83747908;
	sub_83747170(ctx, base);
loc_83747908:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747948
	if (cr6.eq) goto loc_83747948;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, xer);
	// blt cr6,0x83747890
	if (cr6.lt) goto loc_83747890;
loc_83747920:
	// lwz r3,-21744(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -21744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747938
	if (cr6.eq) goto loc_83747938;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,120(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 120);
	// bl 0x83747000
	ctx.lr = 0x83747938;
	sub_83747000(ctx, base);
loc_83747938:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c688
	ctx.lr = 0x83747940;
	sub_82A5C688(ctx, base);
loc_83747940:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83747948:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83747958;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747600
	ctx.lr = 0x83747960;
	sub_83747600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83747968;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83747970;
	sub_82595170(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c688
	ctx.lr = 0x83747978;
	sub_82A5C688(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747980"))) PPC_WEAK_FUNC(sub_83747980);
PPC_FUNC_IMPL(__imp__sub_83747980) {
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
	// bl 0x83747788
	ctx.lr = 0x83747998;
	sub_83747788(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837479b0
	if (cr6.eq) goto loc_837479B0;
	// bl 0x83103e98
	ctx.lr = 0x837479A8;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_837479B0:
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

__attribute__((alias("__imp__sub_837479C4"))) PPC_WEAK_FUNC(sub_837479C4);
PPC_FUNC_IMPL(__imp__sub_837479C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837479C8"))) PPC_WEAK_FUNC(sub_837479C8);
PPC_FUNC_IMPL(__imp__sub_837479C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837479D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837479E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837479e0
	if (!cr6.eq) goto loc_837479E0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bgt cr6,0x83747aa8
	if (cr6.gt) goto loc_83747AA8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83747A20;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747aa8
	if (cr6.eq) goto loc_83747AA8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83747A50;
	sub_831CDCF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747678
	ctx.lr = 0x83747A60;
	sub_83747678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83747ab4
	if (!cr6.eq) goto loc_83747AB4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83747A7C;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747788
	ctx.lr = 0x83747A84;
	sub_83747788(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747a98
	if (cr6.eq) goto loc_83747A98;
	// bl 0x83103e98
	ctx.lr = 0x83747A94;
	sub_83103E98(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83747A98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83747AA0;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83747AA8;
	sub_82595170(ctx, base);
loc_83747AA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83747AB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747AC0"))) PPC_WEAK_FUNC(sub_83747AC0);
PPC_FUNC_IMPL(__imp__sub_83747AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83747AC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31743
	ctx.r28.s64 = -2080309248;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,-21736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747cfc
	if (cr6.eq) goto loc_83747CFC;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83747AFC;
	sub_82595718(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747b20
	if (cr6.eq) goto loc_83747B20;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83104868
	ctx.lr = 0x83747B18;
	sub_83104868(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x83747b24
	goto loc_83747B24;
loc_83747B20:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_83747B24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103b18
	ctx.lr = 0x83747B2C;
	sub_83103B18(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103bb8
	ctx.lr = 0x83747B34;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747b5c
	if (cr6.eq) goto loc_83747B5C;
loc_83747B40:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d22b8
	ctx.lr = 0x83747B48;
	sub_832D22B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103bb8
	ctx.lr = 0x83747B50;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83747b40
	if (!cr6.eq) goto loc_83747B40;
loc_83747B5C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103d60
	ctx.lr = 0x83747B64;
	sub_83103D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103d20
	ctx.lr = 0x83747B70;
	sub_83103D20(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82539ae8
	ctx.lr = 0x83747B80;
	sub_82539AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x83747B8C;
	sub_825359D8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253a610
	ctx.lr = 0x83747BA4;
	sub_8253A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747ce4
	if (cr6.eq) goto loc_83747CE4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,196
	ctx.r4.s64 = 196;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x83747BC4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747ce4
	if (cr6.eq) goto loc_83747CE4;
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r25,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83747BE0;
	sub_831CDCF0(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-16736
	ctx.r29.s64 = ctx.r11.s64 + -16736;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x83747BF4;
	sub_82536D88(ctx, base);
	// bl 0x825355c0
	ctx.lr = 0x83747BF8;
	sub_825355C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83747c7c
	if (!cr6.gt) goto loc_83747C7C;
loc_83747C08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x83747C14;
	sub_82536D88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82536bb8
	ctx.lr = 0x83747C1C;
	sub_82536BB8(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83747C20;
	sub_825832E0(ctx, base);
	// lwz r11,-21736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21736);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83747c38
	if (!cr6.eq) goto loc_83747C38;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x83747c64
	goto loc_83747C64;
loc_83747C38:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x83747c4c
	if (cr6.lt) goto loc_83747C4C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x83747c64
	goto loc_83747C64;
loc_83747C4C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-21736(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21736);
	// bl 0x83746d68
	ctx.lr = 0x83747C64;
	sub_83746D68(ctx, base);
loc_83747C64:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83747cbc
	if (cr6.eq) goto loc_83747CBC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x83747c08
	if (cr6.lt) goto loc_83747C08;
loc_83747C7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103e98
	ctx.lr = 0x83747C84;
	sub_83103E98(ctx, base);
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// bl 0x831ce7d8
	ctx.lr = 0x83747C98;
	sub_831CE7D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r11.u32);
	// bl 0x82535aa0
	ctx.lr = 0x83747CA8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82450e18
	ctx.lr = 0x83747CB0;
	sub_82450E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83747CBC:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83747CCC;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747600
	ctx.lr = 0x83747CD4;
	sub_83747600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83747CDC;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83747CE4;
	sub_82595170(ctx, base);
loc_83747CE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83103e98
	ctx.lr = 0x83747CEC;
	sub_83103E98(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x83747CF4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82450e18
	ctx.lr = 0x83747CFC;
	sub_82450E18(ctx, base);
loc_83747CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747D08"))) PPC_WEAK_FUNC(sub_83747D08);
PPC_FUNC_IMPL(__imp__sub_83747D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83747D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83747D30;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747db4
	if (cr6.eq) goto loc_83747DB4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83747D60;
	sub_831CDCF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747ac0
	ctx.lr = 0x83747D6C;
	sub_83747AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83747dc0
	if (!cr6.eq) goto loc_83747DC0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83747D88;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83747788
	ctx.lr = 0x83747D90;
	sub_83747788(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747da4
	if (cr6.eq) goto loc_83747DA4;
	// bl 0x83103e98
	ctx.lr = 0x83747DA0;
	sub_83103E98(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83747DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83747DAC;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83747DB4;
	sub_82595170(ctx, base);
loc_83747DB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83747DC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747DCC"))) PPC_WEAK_FUNC(sub_83747DCC);
PPC_FUNC_IMPL(__imp__sub_83747DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747DD0"))) PPC_WEAK_FUNC(sub_83747DD0);
PPC_FUNC_IMPL(__imp__sub_83747DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83747DD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83748278
	ctx.lr = 0x83747DEC;
	sub_83748278(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83747E08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747e40
	if (cr6.eq) goto loc_83747E40;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83104868
	ctx.lr = 0x83747E28;
	sub_83104868(ctx, base);
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-16500
	ctx.r9.s64 = ctx.r10.s64 + -16500;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x83747e44
	goto loc_83747E44;
loc_83747E40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83747E44:
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83747e58
	if (!cr6.eq) goto loc_83747E58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83747E58:
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// bl 0x83103b18
	ctx.lr = 0x83747E60;
	sub_83103B18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747E6C"))) PPC_WEAK_FUNC(sub_83747E6C);
PPC_FUNC_IMPL(__imp__sub_83747E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747E70"))) PPC_WEAK_FUNC(sub_83747E70);
PPC_FUNC_IMPL(__imp__sub_83747E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83747E78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x83748278
	ctx.lr = 0x83747E94;
	sub_83748278(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83747eac
	if (!cr6.eq) goto loc_83747EAC;
loc_83747EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83747EAC:
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83747EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83747ea0
	if (cr6.eq) goto loc_83747EA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83747ED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83747ea0
	if (cr6.eq) goto loc_83747EA0;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83747EF8"))) PPC_WEAK_FUNC(sub_83747EF8);
PPC_FUNC_IMPL(__imp__sub_83747EF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83747F0C"))) PPC_WEAK_FUNC(sub_83747F0C);
PPC_FUNC_IMPL(__imp__sub_83747F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747F10"))) PPC_WEAK_FUNC(sub_83747F10);
PPC_FUNC_IMPL(__imp__sub_83747F10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83747F24"))) PPC_WEAK_FUNC(sub_83747F24);
PPC_FUNC_IMPL(__imp__sub_83747F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747F28"))) PPC_WEAK_FUNC(sub_83747F28);
PPC_FUNC_IMPL(__imp__sub_83747F28) {
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
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-16500
	ctx.r10.s64 = ctx.r11.s64 + -16500;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83103f60
	ctx.lr = 0x83747F54;
	sub_83103F60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83747f6c
	if (cr6.eq) goto loc_83747F6C;
	// bl 0x82416268
	ctx.lr = 0x83747F68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83747F6C:
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

__attribute__((alias("__imp__sub_83747F84"))) PPC_WEAK_FUNC(sub_83747F84);
PPC_FUNC_IMPL(__imp__sub_83747F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83747F88"))) PPC_WEAK_FUNC(sub_83747F88);
PPC_FUNC_IMPL(__imp__sub_83747F88) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83747FB8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8374800c
	if (cr6.eq) goto loc_8374800C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,161
	ctx.r10.s64 = 161;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x83747dd0
	ctx.lr = 0x83747FE4;
	sub_83747DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_83747FF4:
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
loc_8374800C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83747ff4
	goto loc_83747FF4;
}

__attribute__((alias("__imp__sub_83748014"))) PPC_WEAK_FUNC(sub_83748014);
PPC_FUNC_IMPL(__imp__sub_83748014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83748018"))) PPC_WEAK_FUNC(sub_83748018);
PPC_FUNC_IMPL(__imp__sub_83748018) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8374807c
	if (cr6.eq) goto loc_8374807C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83748050;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83748070
	if (cr6.eq) goto loc_83748070;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83748070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83748070:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83748078;
	sub_82595170(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8374807C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83748094
	if (cr6.eq) goto loc_83748094;
	// bl 0x83103e98
	ctx.lr = 0x83748090;
	sub_83103E98(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_83748094:
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

__attribute__((alias("__imp__sub_837480AC"))) PPC_WEAK_FUNC(sub_837480AC);
PPC_FUNC_IMPL(__imp__sub_837480AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837480B0"))) PPC_WEAK_FUNC(sub_837480B0);
PPC_FUNC_IMPL(__imp__sub_837480B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837480B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83748150
	if (cr6.eq) goto loc_83748150;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837480E8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83748150
	if (cr6.eq) goto loc_83748150;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,161
	ctx.r11.s64 = 161;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// bl 0x83747e70
	ctx.lr = 0x8374811C;
	sub_83747E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8374815c
	if (!cr6.eq) goto loc_8374815C;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83748138;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83748018
	ctx.lr = 0x83748140;
	sub_83748018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83748148;
	sub_82416268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83748150;
	sub_82595170(ctx, base);
loc_83748150:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8374815C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83748168"))) PPC_WEAK_FUNC(sub_83748168);
PPC_FUNC_IMPL(__imp__sub_83748168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83748170;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82539ae8
	ctx.lr = 0x83748188;
	sub_82539AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x83748194;
	sub_825359D8(ctx, base);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253a610
	ctx.lr = 0x837481B0;
	sub_8253A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837481f4
	if (!cr6.eq) goto loc_837481F4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82538c70
	ctx.lr = 0x837481C8;
	sub_82538C70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837481dc
	if (cr6.lt) goto loc_837481DC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x837481DC;
	sub_8386D088(ctx, base);
loc_837481DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// b 0x83748258
	goto loc_83748258;
loc_837481F4:
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x83748278
	ctx.lr = 0x837481FC;
	sub_83748278(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83748258
	if (cr6.eq) goto loc_83748258;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83748210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83748258
	if (cr6.eq) goto loc_83748258;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83748230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83748258
	if (cr6.eq) goto loc_83748258;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,-21736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83748258
	if (cr6.eq) goto loc_83748258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x83747000
	ctx.lr = 0x83748258;
	sub_83747000(ctx, base);
loc_83748258:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x83748260;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82450e18
	ctx.lr = 0x83748268;
	sub_82450E18(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83748270"))) PPC_WEAK_FUNC(sub_83748270);
PPC_FUNC_IMPL(__imp__sub_83748270) {
	PPC_FUNC_PROLOGUE();
	// li r3,161
	ctx.r3.s64 = 161;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83748278"))) PPC_WEAK_FUNC(sub_83748278);
PPC_FUNC_IMPL(__imp__sub_83748278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,161
	cr6.compare<int32_t>(ctx.r3.s32, 161, xer);
	// blt cr6,0x83748288
	if (cr6.lt) goto loc_83748288;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83748288:
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-6752
	ctx.r10.s64 = ctx.r10.s64 + -6752;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8374829C"))) PPC_WEAK_FUNC(sub_8374829C);
PPC_FUNC_IMPL(__imp__sub_8374829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837482A0"))) PPC_WEAK_FUNC(sub_837482A0);
PPC_FUNC_IMPL(__imp__sub_837482A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837482A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r3,844
	ctx.r31.s64 = ctx.r3.s64 + 844;
	// li r30,28
	ctx.r30.s64 = 28;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837482C4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837482e4
	if (cr6.lt) goto loc_837482E4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x837482E4;
	sub_825952B8(ctx, base);
loc_837482E4:
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
	// bge 0x837482c4
	if (!cr0.lt) goto loc_837482C4;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r31,r26,4
	ctx.r31.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83748318
	if (cr6.lt) goto loc_83748318;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83748318;
	sub_825952B8(ctx, base);
loc_83748318:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8374832C"))) PPC_WEAK_FUNC(sub_8374832C);
PPC_FUNC_IMPL(__imp__sub_8374832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83748330"))) PPC_WEAK_FUNC(sub_83748330);
PPC_FUNC_IMPL(__imp__sub_83748330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r8,29
	ctx.r8.s64 = 29;
	// addi r10,r11,-5184
	ctx.r10.s64 = ctx.r11.s64 + -5184;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
loc_83748360:
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stbu r9,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83748360
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83748360;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r11,-5172
	ctx.r10.s64 = ctx.r11.s64 + -5172;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83748384"))) PPC_WEAK_FUNC(sub_83748384);
PPC_FUNC_IMPL(__imp__sub_83748384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83748388"))) PPC_WEAK_FUNC(sub_83748388);
PPC_FUNC_IMPL(__imp__sub_83748388) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837482a0
	ctx.lr = 0x837483AC;
	sub_837482A0(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x837483d0
	if (cr6.eq) goto loc_837483D0;
	// bl 0x82416268
	ctx.lr = 0x837483CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837483D0:
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

__attribute__((alias("__imp__sub_837483E8"))) PPC_WEAK_FUNC(sub_837483E8);
PPC_FUNC_IMPL(__imp__sub_837483E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837483F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-5276
	ctx.r29.s64 = ctx.r11.s64 + -5276;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// bl 0x82535898
	ctx.lr = 0x83748410;
	sub_82535898(ctx, base);
	// bl 0x82534b10
	ctx.lr = 0x83748414;
	sub_82534B10(ctx, base);
	// stb r3,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r3.u8);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83748424;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x83748428;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83748430:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83748430
	if (!cr6.eq) goto loc_83748430;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83748454;
	sub_8259CC28(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
loc_8374845C:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82535898
	ctx.lr = 0x83748468;
	sub_82535898(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82535890
	ctx.lr = 0x83748470;
	sub_82535890(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82535898
	ctx.lr = 0x83748478;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x8374847C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83748484:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83748484
	if (!cr6.eq) goto loc_83748484;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837484A8;
	sub_8259CC28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpwi cr6,r31,29
	cr6.compare<int32_t>(ctx.r31.s32, 29, xer);
	// blt cr6,0x8374845c
	if (cr6.lt) goto loc_8374845C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837484C4"))) PPC_WEAK_FUNC(sub_837484C4);
PPC_FUNC_IMPL(__imp__sub_837484C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837484C8"))) PPC_WEAK_FUNC(sub_837484C8);
PPC_FUNC_IMPL(__imp__sub_837484C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837484D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837484f0
	if (!cr6.eq) goto loc_837484F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837484F0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83763830
	ctx.lr = 0x83748504;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8374850C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8374850c
	if (!cr6.eq) goto loc_8374850C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83748530;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83763830
	ctx.lr = 0x8374853C;
	sub_83763830(ctx, base);
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// li r30,29
	ctx.r30.s64 = 29;
loc_83748548:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x83763830
	ctx.lr = 0x83748554;
	sub_83763830(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8374855C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8374855c
	if (!cr6.eq) goto loc_8374855C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83748580;
	sub_8259CC28(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x83748548
	if (!cr0.eq) goto loc_83748548;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83748598"))) PPC_WEAK_FUNC(sub_83748598);
PPC_FUNC_IMPL(__imp__sub_83748598) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,848
	ctx.r4.s64 = 848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837485BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837485d8
	if (cr6.eq) goto loc_837485D8;
	// bl 0x83748330
	ctx.lr = 0x837485C8;
	sub_83748330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_837485D8:
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

__attribute__((alias("__imp__sub_837485EC"))) PPC_WEAK_FUNC(sub_837485EC);
PPC_FUNC_IMPL(__imp__sub_837485EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837485F0"))) PPC_WEAK_FUNC(sub_837485F0);
PPC_FUNC_IMPL(__imp__sub_837485F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837485F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,5108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5108);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r3,5088
	ctx.r30.s64 = ctx.r3.s64 + 5088;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83748624
	if (cr6.lt) goto loc_83748624;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83748624;
	sub_825952B8(ctx, base);
loc_83748624:
	// li r28,15
	ctx.r28.s64 = 15;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r27,4136
	ctx.r11.s64 = ctx.r27.s64 + 4136;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r30,r11,64
	ctx.r30.s64 = ctx.r11.s64 + 64;
loc_83748644:
	// lwzu r11,-72(r30)
	ea = -72 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83748660
	if (cr6.lt) goto loc_83748660;
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83748660;
	sub_825952B8(ctx, base);
loc_83748660:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// stb r31,-20(r30)
	PPC_STORE_U8(ctx.r30.u32 + -20, ctx.r31.u8);
	// lwz r11,-40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -40);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83748688
	if (cr6.lt) goto loc_83748688;
	// lwz r4,-60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83748688;
	sub_825952B8(ctx, base);
loc_83748688:
	// stw r28,-40(r30)
	PPC_STORE_U32(ctx.r30.u32 + -40, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,-44(r30)
	PPC_STORE_U32(ctx.r30.u32 + -44, ctx.r31.u32);
	// stb r31,-60(r30)
	PPC_STORE_U8(ctx.r30.u32 + -60, ctx.r31.u8);
	// bge 0x83748644
	if (!cr0.lt) goto loc_83748644;
	// lwz r11,2964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2964);
	// addi r30,r27,2944
	ctx.r30.s64 = ctx.r27.s64 + 2944;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837486bc
	if (cr6.lt) goto loc_837486BC;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837486BC;
	sub_825952B8(ctx, base);
loc_837486BC:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r27,2916
	ctx.r29.s64 = ctx.r27.s64 + 2916;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,2936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2936);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837486e8
	if (cr6.lt) goto loc_837486E8;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837486E8;
	sub_825952B8(ctx, base);
loc_837486E8:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r30,r27,2792
	ctx.r30.s64 = ctx.r27.s64 + 2792;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// li r29,59
	ctx.r29.s64 = 59;
loc_837486FC:
	// addi r30,r30,-40
	ctx.r30.s64 = ctx.r30.s64 + -40;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8374871c
	if (cr6.lt) goto loc_8374871C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8374871C;
	sub_825952B8(ctx, base);
loc_8374871C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x837486fc
	if (!cr0.lt) goto loc_837486FC;
	// addi r30,r27,392
	ctx.r30.s64 = ctx.r27.s64 + 392;
	// li r29,5
	ctx.r29.s64 = 5;
loc_83748738:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83748758
	if (cr6.lt) goto loc_83748758;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83748758;
	sub_825952B8(ctx, base);
loc_83748758:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x83748738
	if (!cr0.lt) goto loc_83748738;
	// addi r30,r27,224
	ctx.r30.s64 = ctx.r27.s64 + 224;
	// li r29,5
	ctx.r29.s64 = 5;
loc_83748774:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83748794
	if (cr6.lt) goto loc_83748794;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x83748794;
	sub_825952B8(ctx, base);
loc_83748794:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x83748774
	if (!cr0.lt) goto loc_83748774;
	// addi r30,r27,56
	ctx.r30.s64 = ctx.r27.s64 + 56;
	// li r29,1
	ctx.r29.s64 = 1;
loc_837487B0:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837487d0
	if (cr6.lt) goto loc_837487D0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x837487D0;
	sub_825952B8(ctx, base);
loc_837487D0:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x837487b0
	if (!cr0.lt) goto loc_837487B0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837487EC"))) PPC_WEAK_FUNC(sub_837487EC);
PPC_FUNC_IMPL(__imp__sub_837487EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837487F0"))) PPC_WEAK_FUNC(sub_837487F0);
PPC_FUNC_IMPL(__imp__sub_837487F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stb r11,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stb r11,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r11.u8);
	// stw r9,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r11.u8);
	// stw r9,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stb r11,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r11.u8);
	// stw r9,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r9.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stb r11,224(r3)
	PPC_STORE_U8(ctx.r3.u32 + 224, ctx.r11.u8);
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stb r11,252(r3)
	PPC_STORE_U8(ctx.r3.u32 + 252, ctx.r11.u8);
	// stw r9,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r9.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stb r11,280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 280, ctx.r11.u8);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stb r11,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// stw r9,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// stb r11,336(r3)
	PPC_STORE_U8(ctx.r3.u32 + 336, ctx.r11.u8);
	// stw r9,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r9.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stb r11,364(r3)
	PPC_STORE_U8(ctx.r3.u32 + 364, ctx.r11.u8);
loc_837488B4:
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// stb r11,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r11.u8);
	// stw r9,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r9.u32);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// stb r11,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r11.u8);
	// stw r9,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r9.u32);
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r11.u32);
	// stb r11,120(r10)
	PPC_STORE_U8(ctx.r10.u32 + 120, ctx.r11.u8);
	// stw r9,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r9.u32);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// stb r11,160(r10)
	PPC_STORE_U8(ctx.r10.u32 + 160, ctx.r11.u8);
	// stw r9,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r9.u32);
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// stb r11,200(r10)
	PPC_STORE_U8(ctx.r10.u32 + 200, ctx.r11.u8);
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
	// bdnz 0x837488b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837488B4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,2936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2936, ctx.r9.u32);
	// stw r11,2932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2932, ctx.r11.u32);
	// addi r8,r3,2984
	ctx.r8.s64 = ctx.r3.s64 + 2984;
	// stb r11,2916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2916, ctx.r11.u8);
	// stw r9,2964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2964, ctx.r9.u32);
	// stw r11,2960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2960, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r11,2944(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2944, ctx.r11.u8);
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
loc_8374892C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stb r11,-20(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20, ctx.r11.u8);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stb r11,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// stw r9,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83748960
	if (cr6.lt) goto loc_83748960;
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x83748964
	goto loc_83748964;
loc_83748960:
	// addi r8,r10,52
	ctx.r8.s64 = ctx.r10.s64 + 52;
loc_83748964:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83748984
	if (cr6.lt) goto loc_83748984;
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x83748988
	goto loc_83748988;
loc_83748984:
	// addi r8,r10,92
	ctx.r8.s64 = ctx.r10.s64 + 92;
loc_83748988:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// stw r11,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// lwz r8,144(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837489a8
	if (cr6.lt) goto loc_837489A8;
	// lwz r8,124(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// b 0x837489ac
	goto loc_837489AC;
loc_837489A8:
	// addi r8,r10,124
	ctx.r8.s64 = ctx.r10.s64 + 124;
loc_837489AC:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stw r9,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r9.u32);
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// lwz r8,184(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837489cc
	if (cr6.lt) goto loc_837489CC;
	// lwz r8,164(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// b 0x837489d0
	goto loc_837489D0;
loc_837489CC:
	// addi r8,r10,164
	ctx.r8.s64 = ctx.r10.s64 + 164;
loc_837489D0:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stw r9,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r9.u32);
	// stw r11,212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
	// lwz r8,216(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837489f0
	if (cr6.lt) goto loc_837489F0;
	// lwz r8,196(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// b 0x837489f4
	goto loc_837489F4;
loc_837489F0:
	// addi r8,r10,196
	ctx.r8.s64 = ctx.r10.s64 + 196;
loc_837489F4:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stw r9,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r9.u32);
	// stw r11,252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 252, ctx.r11.u32);
	// lwz r8,256(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x83748a14
	if (cr6.lt) goto loc_83748A14;
	// lwz r8,236(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// b 0x83748a18
	goto loc_83748A18;
loc_83748A14:
	// addi r8,r10,236
	ctx.r8.s64 = ctx.r10.s64 + 236;
loc_83748A18:
	// addi r10,r10,288
	ctx.r10.s64 = ctx.r10.s64 + 288;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// bdnz 0x8374892c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8374892C;
	// stw r9,5108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5108, ctx.r9.u32);
	// stw r11,5104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5104, ctx.r11.u32);
	// stb r11,5088(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5088, ctx.r11.u8);
	// blr 
	return;
}

