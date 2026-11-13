#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A4C710"))) PPC_WEAK_FUNC(sub_82A4C710);
PPC_FUNC_IMPL(__imp__sub_82A4C710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
loc_82A4C72C:
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// sthx r11,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u16);
	// blt cr6,0x82a4c72c
	if (cr6.lt) goto loc_82A4C72C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A4C74C:
	// addi r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 + 6;
	// addi r8,r10,10
	ctx.r8.s64 = ctx.r10.s64 + 10;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// sthx r11,r6,r3
	PPC_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u16);
	// sthx r11,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u16);
	// blt cr6,0x82a4c74c
	if (cr6.lt) goto loc_82A4C74C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A4C778:
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// addi r7,r10,26
	ctx.r7.s64 = ctx.r10.s64 + 26;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,31
	ctx.r6.s64 = ctx.r10.s64 + 31;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// sthx r11,r4,r3
	PPC_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u16);
	// sth r11,34(r9)
	PPC_STORE_U16(ctx.r9.u32 + 34, ctx.r11.u16);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// sthx r11,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u16);
	// sthx r11,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u16);
	// blt cr6,0x82a4c778
	if (cr6.lt) goto loc_82A4C778;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A4C7BC:
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// stb r11,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// stb r11,91(r9)
	PPC_STORE_U8(ctx.r9.u32 + 91, ctx.r11.u8);
	// blt cr6,0x82a4c7bc
	if (cr6.lt) goto loc_82A4C7BC;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r8,r3,104
	ctx.r8.s64 = ctx.r3.s64 + 104;
	// stb r10,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r10.u8);
	// li r7,4
	ctx.r7.s64 = 4;
loc_82A4C7EC:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4C7F8:
	// stw r11,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a4c7f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4C7F8;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// bne 0x82a4c7ec
	if (!cr0.eq) goto loc_82A4C7EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C814"))) PPC_WEAK_FUNC(sub_82A4C814);
PPC_FUNC_IMPL(__imp__sub_82A4C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C818"))) PPC_WEAK_FUNC(sub_82A4C818);
PPC_FUNC_IMPL(__imp__sub_82A4C818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C840"))) PPC_WEAK_FUNC(sub_82A4C840);
PPC_FUNC_IMPL(__imp__sub_82A4C840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C868"))) PPC_WEAK_FUNC(sub_82A4C868);
PPC_FUNC_IMPL(__imp__sub_82A4C868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C890"))) PPC_WEAK_FUNC(sub_82A4C890);
PPC_FUNC_IMPL(__imp__sub_82A4C890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C8C8"))) PPC_WEAK_FUNC(sub_82A4C8C8);
PPC_FUNC_IMPL(__imp__sub_82A4C8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,26
	ctx.r11.s64 = ctx.r4.s64 + 26;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C8EC"))) PPC_WEAK_FUNC(sub_82A4C8EC);
PPC_FUNC_IMPL(__imp__sub_82A4C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C8F0"))) PPC_WEAK_FUNC(sub_82A4C8F0);
PPC_FUNC_IMPL(__imp__sub_82A4C8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C914"))) PPC_WEAK_FUNC(sub_82A4C914);
PPC_FUNC_IMPL(__imp__sub_82A4C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C918"))) PPC_WEAK_FUNC(sub_82A4C918);
PPC_FUNC_IMPL(__imp__sub_82A4C918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4c938
	if (!cr6.lt) goto loc_82A4C938;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4C938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4C93C:
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lhzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// blt cr6,0x82a4c93c
	if (cr6.lt) goto loc_82A4C93C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C96C"))) PPC_WEAK_FUNC(sub_82A4C96C);
PPC_FUNC_IMPL(__imp__sub_82A4C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C970"))) PPC_WEAK_FUNC(sub_82A4C970);
PPC_FUNC_IMPL(__imp__sub_82A4C970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4c990
	if (!cr6.lt) goto loc_82A4C990;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4C990:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4C994:
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lhzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// blt cr6,0x82a4c994
	if (cr6.lt) goto loc_82A4C994;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C9C4"))) PPC_WEAK_FUNC(sub_82A4C9C4);
PPC_FUNC_IMPL(__imp__sub_82A4C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4C9C8"))) PPC_WEAK_FUNC(sub_82A4C9C8);
PPC_FUNC_IMPL(__imp__sub_82A4C9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a4ca1c
	if (!cr6.lt) goto loc_82A4CA1C;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82a4c9f8
	if (!cr6.lt) goto loc_82A4C9F8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r7,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4C9F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4C9FC:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lhzx r3,r6,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// blt cr6,0x82a4c9fc
	if (cr6.lt) goto loc_82A4C9FC;
	// blr 
	return;
loc_82A4CA1C:
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82A4CA24:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x82a4ca44
	if (!cr6.lt) goto loc_82A4CA44;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82a4ca6c
	goto loc_82A4CA6C;
loc_82A4CA44:
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A4CA50:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lhzx r9,r4,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// blt cr6,0x82a4ca50
	if (cr6.lt) goto loc_82A4CA50;
loc_82A4CA6C:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82a4ca24
	if (cr6.lt) goto loc_82A4CA24;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CA88"))) PPC_WEAK_FUNC(sub_82A4CA88);
PPC_FUNC_IMPL(__imp__sub_82A4CA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a4caa4
	if (!cr6.lt) goto loc_82A4CAA4;
	// addi r11,r4,26
	ctx.r11.s64 = ctx.r4.s64 + 26;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4CAA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4CAA8:
	// addi r9,r11,26
	ctx.r9.s64 = ctx.r11.s64 + 26;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// lhzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// blt cr6,0x82a4caa8
	if (cr6.lt) goto loc_82A4CAA8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CAD8"))) PPC_WEAK_FUNC(sub_82A4CAD8);
PPC_FUNC_IMPL(__imp__sub_82A4CAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bge cr6,0x82a4caf4
	if (!cr6.lt) goto loc_82A4CAF4;
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4CAF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4CAF8:
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// lhzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// blt cr6,0x82a4caf8
	if (cr6.lt) goto loc_82A4CAF8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CB28"))) PPC_WEAK_FUNC(sub_82A4CB28);
PPC_FUNC_IMPL(__imp__sub_82A4CB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a4cb40
	if (!cr6.lt) goto loc_82A4CB40;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// blr 
	return;
loc_82A4CB40:
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4CB50:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bdnz 0x82a4cb50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4CB50;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CB70"))) PPC_WEAK_FUNC(sub_82A4CB70);
PPC_FUNC_IMPL(__imp__sub_82A4CB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82a4cb88
	if (!cr6.lt) goto loc_82A4CB88;
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,91(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// blr 
	return;
loc_82A4CB88:
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,91
	ctx.r8.s64 = ctx.r3.s64 + 91;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4CB98:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bdnz 0x82a4cb98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4CB98;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CBB8"))) PPC_WEAK_FUNC(sub_82A4CBB8);
PPC_FUNC_IMPL(__imp__sub_82A4CBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CBDC"))) PPC_WEAK_FUNC(sub_82A4CBDC);
PPC_FUNC_IMPL(__imp__sub_82A4CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4CBE0"))) PPC_WEAK_FUNC(sub_82A4CBE0);
PPC_FUNC_IMPL(__imp__sub_82A4CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82a4cbfc
	if (!cr6.lt) goto loc_82A4CBFC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A4CBFC:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A4CC04:
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a4cc04
	if (cr6.lt) goto loc_82A4CC04;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CC30"))) PPC_WEAK_FUNC(sub_82A4CC30);
PPC_FUNC_IMPL(__imp__sub_82A4CC30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a4cc6c
	if (!cr6.lt) goto loc_82A4CC6C;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bge cr6,0x82a4cc6c
	if (!cr6.lt) goto loc_82A4CC6C;
	// cmpwi cr6,r6,11
	cr6.compare<int32_t>(ctx.r6.s32, 11, xer);
	// bge cr6,0x82a4cc6c
	if (!cr6.lt) goto loc_82A4CC6C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// srw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
loc_82A4CC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CC74"))) PPC_WEAK_FUNC(sub_82A4CC74);
PPC_FUNC_IMPL(__imp__sub_82A4CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4CC78"))) PPC_WEAK_FUNC(sub_82A4CC78);
PPC_FUNC_IMPL(__imp__sub_82A4CC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CCA8"))) PPC_WEAK_FUNC(sub_82A4CCA8);
PPC_FUNC_IMPL(__imp__sub_82A4CCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// mulli r11,r6,264
	ctx.r11.s64 = ctx.r6.s64 * 264;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CCD0"))) PPC_WEAK_FUNC(sub_82A4CCD0);
PPC_FUNC_IMPL(__imp__sub_82A4CCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CCF8"))) PPC_WEAK_FUNC(sub_82A4CCF8);
PPC_FUNC_IMPL(__imp__sub_82A4CCF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a4cd18
	if (!cr6.lt) goto loc_82A4CD18;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
loc_82A4CD18:
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CD20"))) PPC_WEAK_FUNC(sub_82A4CD20);
PPC_FUNC_IMPL(__imp__sub_82A4CD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a4cd38
	if (!cr6.lt) goto loc_82A4CD38;
	// mulli r11,r4,264
	ctx.r11.s64 = ctx.r4.s64 * 264;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// blr 
	return;
loc_82A4CD38:
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CD40"))) PPC_WEAK_FUNC(sub_82A4CD40);
PPC_FUNC_IMPL(__imp__sub_82A4CD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82a4cd58
	if (!cr6.lt) goto loc_82A4CD58;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,708
	ctx.r3.s64 = ctx.r11.s64 + 708;
	// blr 
	return;
loc_82A4CD58:
	// addi r3,r3,708
	ctx.r3.s64 = ctx.r3.s64 + 708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CD60"))) PPC_WEAK_FUNC(sub_82A4CD60);
PPC_FUNC_IMPL(__imp__sub_82A4CD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r6,11
	cr6.compare<int32_t>(ctx.r6.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r7,r9,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x82a4cdb4
	if (cr6.eq) goto loc_82A4CDB4;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// sthx r11,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// blr 
	return;
loc_82A4CDB4:
	// andc r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// sthx r11,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CDC0"))) PPC_WEAK_FUNC(sub_82A4CDC0);
PPC_FUNC_IMPL(__imp__sub_82A4CDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82a4cdd8
	if (!cr6.eq) goto loc_82A4CDD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A4CDD8:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// mulli r9,r7,44
	ctx.r9.s64 = ctx.r7.s64 * 44;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,2(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CE10"))) PPC_WEAK_FUNC(sub_82A4CE10);
PPC_FUNC_IMPL(__imp__sub_82A4CE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// bge cr6,0x82a4ce24
	if (!cr6.lt) goto loc_82A4CE24;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r7,r11,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
loc_82A4CE24:
	// rlwinm r11,r5,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82a4ce68
	if (cr6.eq) goto loc_82A4CE68;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a4ce70
	if (cr6.lt) goto loc_82A4CE70;
loc_82A4CE68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4CE70:
	// mulli r10,r6,44
	ctx.r10.s64 = ctx.r6.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// and r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a4ce94
	if (!cr6.eq) goto loc_82A4CE94;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82A4CE94:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CE9C"))) PPC_WEAK_FUNC(sub_82A4CE9C);
PPC_FUNC_IMPL(__imp__sub_82A4CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4CEA0"))) PPC_WEAK_FUNC(sub_82A4CEA0);
PPC_FUNC_IMPL(__imp__sub_82A4CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82a4cee4
	if (cr6.eq) goto loc_82A4CEE4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// blt cr6,0x82a4ceec
	if (cr6.lt) goto loc_82A4CEEC;
loc_82A4CEE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4CEEC:
	// mulli r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CEFC"))) PPC_WEAK_FUNC(sub_82A4CEFC);
PPC_FUNC_IMPL(__imp__sub_82A4CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4CF00"))) PPC_WEAK_FUNC(sub_82A4CF00);
PPC_FUNC_IMPL(__imp__sub_82A4CF00) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r9,184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// mulli r8,r7,56
	ctx.r8.s64 = ctx.r7.s64 * 56;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,2(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CF38"))) PPC_WEAK_FUNC(sub_82A4CF38);
PPC_FUNC_IMPL(__imp__sub_82A4CF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,12456
	ctx.r9.s64 = ctx.r11.s64 + 12456;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CF4C"))) PPC_WEAK_FUNC(sub_82A4CF4C);
PPC_FUNC_IMPL(__imp__sub_82A4CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4CF50"))) PPC_WEAK_FUNC(sub_82A4CF50);
PPC_FUNC_IMPL(__imp__sub_82A4CF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11912
	ctx.r5.s64 = ctx.r11.s64 + 11912;
loc_82A4CF60:
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82a4cfbc
	if (cr6.eq) goto loc_82A4CFBC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82A4CF78:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A4CF80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x82a4cfa4
	if (cr6.eq) goto loc_82A4CFA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a4cf80
	if (cr6.eq) goto loc_82A4CF80;
loc_82A4CFA4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a4cfd8
	if (cr6.eq) goto loc_82A4CFD8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82a4cf78
	if (cr6.lt) goto loc_82A4CF78;
loc_82A4CFBC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplwi cr6,r4,34
	cr6.compare<uint32_t>(ctx.r4.u32, 34, xer);
	// blt cr6,0x82a4cf60
	if (cr6.lt) goto loc_82A4CF60;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4CFD8:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CFF0"))) PPC_WEAK_FUNC(sub_82A4CFF0);
PPC_FUNC_IMPL(__imp__sub_82A4CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,12332
	ctx.r8.s64 = ctx.r11.s64 + 12332;
loc_82A4D000:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82A4D008:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82a4d02c
	if (cr6.eq) goto loc_82A4D02C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a4d008
	if (cr6.eq) goto loc_82A4D008;
loc_82A4D02C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x82a4d000
	if (cr6.lt) goto loc_82A4D000;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D04C"))) PPC_WEAK_FUNC(sub_82A4D04C);
PPC_FUNC_IMPL(__imp__sub_82A4D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D050"))) PPC_WEAK_FUNC(sub_82A4D050);
PPC_FUNC_IMPL(__imp__sub_82A4D050) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4d0cc
	if (cr6.eq) goto loc_82A4D0CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82A4D084;
	sub_82595150(ctx, base);
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a4d0a4
	if (cr6.eq) goto loc_82A4D0A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4D0A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82A4D0A4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82A4D0AC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
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
loc_82A4D0CC:
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
}

__attribute__((alias("__imp__sub_82A4D0E4"))) PPC_WEAK_FUNC(sub_82A4D0E4);
PPC_FUNC_IMPL(__imp__sub_82A4D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D0E8"))) PPC_WEAK_FUNC(sub_82A4D0E8);
PPC_FUNC_IMPL(__imp__sub_82A4D0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4D104:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a4d104
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4D104;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4D124:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a4d124
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4D124;
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D144"))) PPC_WEAK_FUNC(sub_82A4D144);
PPC_FUNC_IMPL(__imp__sub_82A4D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D148"))) PPC_WEAK_FUNC(sub_82A4D148);
PPC_FUNC_IMPL(__imp__sub_82A4D148) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4d1bc
	if (!cr6.eq) goto loc_82A4D1BC;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,364
	ctx.r4.s64 = 364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A4D180;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a4d1b0
	if (cr6.eq) goto loc_82A4D1B0;
	// bl 0x82a4d0e8
	ctx.lr = 0x82A4D18C;
	sub_82A4D0E8(ctx, base);
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a4d1bc
	if (!cr6.eq) goto loc_82A4D1BC;
loc_82A4D198:
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
loc_82A4D1B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// b 0x82a4d198
	goto loc_82A4D198;
loc_82A4D1BC:
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

__attribute__((alias("__imp__sub_82A4D1D4"))) PPC_WEAK_FUNC(sub_82A4D1D4);
PPC_FUNC_IMPL(__imp__sub_82A4D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D1D8"))) PPC_WEAK_FUNC(sub_82A4D1D8);
PPC_FUNC_IMPL(__imp__sub_82A4D1D8) {
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
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82a4d228
	if (!cr6.eq) goto loc_82A4D228;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,364
	ctx.r4.s64 = 364;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82A4D210;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a4d220
	if (cr6.eq) goto loc_82A4D220;
	// bl 0x82a4d0e8
	ctx.lr = 0x82A4D21C;
	sub_82A4D0E8(ctx, base);
	// b 0x82a4d224
	goto loc_82A4D224;
loc_82A4D220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4D224:
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
loc_82A4D228:
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

__attribute__((alias("__imp__sub_82A4D23C"))) PPC_WEAK_FUNC(sub_82A4D23C);
PPC_FUNC_IMPL(__imp__sub_82A4D23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D240"))) PPC_WEAK_FUNC(sub_82A4D240);
PPC_FUNC_IMPL(__imp__sub_82A4D240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A4D248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82A4D274;
	sub_831CE420(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D290"))) PPC_WEAK_FUNC(sub_82A4D290);
PPC_FUNC_IMPL(__imp__sub_82A4D290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A4D298;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r5,17
	cr6.compare<int32_t>(ctx.r5.s32, 17, xer);
	// bge cr6,0x82a4d2b8
	if (!cr6.lt) goto loc_82A4D2B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r27,r11,r5
	ctx.r27.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
loc_82A4D2B8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a4d358
	if (cr6.eq) goto loc_82A4D358;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
loc_82A4D2CC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a4d300
	if (cr6.eq) goto loc_82A4D300;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A4D300:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a4d344
	if (!cr6.eq) goto loc_82A4D344;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a4d344
	if (cr6.eq) goto loc_82A4D344;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82A4D334;
	sub_831CE420(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// b 0x82a4d34c
	goto loc_82A4D34C;
loc_82A4D344:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82A4D34C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82a4d2cc
	if (!cr6.eq) goto loc_82A4D2CC;
loc_82A4D358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D360"))) PPC_WEAK_FUNC(sub_82A4D360);
PPC_FUNC_IMPL(__imp__sub_82A4D360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A4D368;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82a4d3ac
	if (cr6.eq) goto loc_82A4D3AC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82A4D3A4;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82A4D3AC:
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpwi cr6,r29,17
	cr6.compare<int32_t>(ctx.r29.s32, 17, xer);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bge cr6,0x82a4d3cc
	if (!cr6.lt) goto loc_82A4D3CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r25,r11,r29
	ctx.r25.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_82A4D3CC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82a4d44c
	if (cr6.eq) goto loc_82A4D44C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A4D3DC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x82a4d43c
	if (cr6.eq) goto loc_82A4D43C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82a4d43c
	if (cr6.eq) goto loc_82A4D43C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a4d420
	if (!cr6.eq) goto loc_82A4D420;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82a4d43c
	if (!cr6.eq) goto loc_82A4D43C;
loc_82A4D420:
	// rlwinm r11,r26,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x82A4D43C;
	sub_835977D8(ctx, base);
loc_82A4D43C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x82a4d3dc
	if (cr6.lt) goto loc_82A4D3DC;
loc_82A4D44C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D454"))) PPC_WEAK_FUNC(sub_82A4D454);
PPC_FUNC_IMPL(__imp__sub_82A4D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D458"))) PPC_WEAK_FUNC(sub_82A4D458);
PPC_FUNC_IMPL(__imp__sub_82A4D458) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82a4d484
	if (!cr6.eq) goto loc_82A4D484;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4d4a4
	goto loc_82A4D4A4;
loc_82A4D484:
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x82A4D48C;
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
	ctx.lr = 0x82A4D4A4;
	sub_82919698(ctx, base);
loc_82A4D4A4:
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

__attribute__((alias("__imp__sub_82A4D4BC"))) PPC_WEAK_FUNC(sub_82A4D4BC);
PPC_FUNC_IMPL(__imp__sub_82A4D4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D4C0"))) PPC_WEAK_FUNC(sub_82A4D4C0);
PPC_FUNC_IMPL(__imp__sub_82A4D4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A4D4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82a4d4e4
	if (!cr6.eq) goto loc_82A4D4E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A4D4E4:
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x82A4D4EC;
	sub_82A225D0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r10,r11,36400
	ctx.r10.u64 = ctx.r11.u64 | 36400;
	// mullw r11,r29,r10
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x82A4D504;
	sub_82919698(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a269f8
	ctx.lr = 0x82A4D518;
	sub_82A269F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4d53c
	if (cr6.eq) goto loc_82A4D53C;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a287a8
	ctx.lr = 0x82A4D534;
	sub_82A287A8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
loc_82A4D53C:
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D548"))) PPC_WEAK_FUNC(sub_82A4D548);
PPC_FUNC_IMPL(__imp__sub_82A4D548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4D550;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82a4d578
	if (!cr6.eq) goto loc_82A4D578;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4D578:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bl 0x82a225d0
	ctx.lr = 0x82A4D58C;
	sub_82A225D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82919698
	ctx.lr = 0x82A4D594;
	sub_82919698(ctx, base);
	// lwz r9,132(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82a225d0
	ctx.lr = 0x82A4D5A8;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x82A4D5B8;
	sub_82919698(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq cr6,0x82a4d5dc
	if (cr6.eq) goto loc_82A4D5DC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82A4D5DC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// xori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 ^ 4;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D604"))) PPC_WEAK_FUNC(sub_82A4D604);
PPC_FUNC_IMPL(__imp__sub_82A4D604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D608"))) PPC_WEAK_FUNC(sub_82A4D608);
PPC_FUNC_IMPL(__imp__sub_82A4D608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82A4D610;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82a4d638
	if (!cr6.eq) goto loc_82A4D638;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82A4D638:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// std r23,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r23.u64);
	// lwz r25,6132(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a269f8
	ctx.lr = 0x82A4D660;
	sub_82A269F8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// ori r27,r11,36400
	ctx.r27.u64 = ctx.r11.u64 | 36400;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(ctx.r23.s32, 2, xer);
	// bne cr6,0x82a4d680
	if (!cr6.eq) goto loc_82A4D680;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82a4d698
	goto loc_82A4D698;
loc_82A4D680:
	// lwz r3,132(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x82A4D688;
	sub_82A225D0(ctx, base);
	// mullw r11,r31,r27
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r27.s32);
	// li r4,5
	ctx.r4.s64 = 5;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82919698
	ctx.lr = 0x82A4D698;
	sub_82919698(ctx, base);
loc_82A4D698:
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// beq cr6,0x82a4d6c8
	if (cr6.eq) goto loc_82A4D6C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a287a8
	ctx.lr = 0x82A4D6BC;
	sub_82A287A8(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82A4D6C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82a4d680
	if (cr6.lt) goto loc_82A4D680;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82a4d6f0
	if (cr6.eq) goto loc_82A4D6F0;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82A4D6F0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// xori r28,r11,4
	ctx.r28.u64 = ctx.r11.u64 ^ 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// lwzx r6,r28,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r5,r29,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r4,r28,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82a4d804
	if (cr6.eq) goto loc_82A4D804;
	// lwz r11,24356(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24356);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// srawi r9,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// beq cr6,0x82a4d804
	if (cr6.eq) goto loc_82A4D804;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x82a4d804
	if (!cr6.eq) goto loc_82A4D804;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4d804
	if (cr6.eq) goto loc_82A4D804;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r23,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r23.u64);
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bne cr6,0x82a4d7ec
	if (!cr6.eq) goto loc_82A4D7EC;
	// lwz r3,132(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x82A4D7A8;
	sub_82A225D0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// bl 0x82919698
	ctx.lr = 0x82A4D7B4;
	sub_82919698(ctx, base);
	// lwz r11,132(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 132);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82A4D7C4;
	sub_82A225D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// bl 0x82919698
	ctx.lr = 0x82A4D7D0;
	sub_82919698(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_82A4D7EC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwzx r8,r29,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r7.u32);
loc_82A4D804:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D810"))) PPC_WEAK_FUNC(sub_82A4D810);
PPC_FUNC_IMPL(__imp__sub_82A4D810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4D818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lfs f1,4464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a290c8
	ctx.lr = 0x82A4D844;
	sub_82A290C8(ctx, base);
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r3,4456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// bl 0x82a474e0
	ctx.lr = 0x82A4D854;
	sub_82A474E0(ctx, base);
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// beq cr6,0x82a4d864
	if (cr6.eq) goto loc_82A4D864;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82a4d87c
	if (!cr6.eq) goto loc_82A4D87C;
loc_82A4D864:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82a4d87c
	if (cr6.gt) goto loc_82A4D87C;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82a4d880
	if (!cr6.gt) goto loc_82A4D880;
loc_82A4D87C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4D880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D888"))) PPC_WEAK_FUNC(sub_82A4D888);
PPC_FUNC_IMPL(__imp__sub_82A4D888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D89C"))) PPC_WEAK_FUNC(sub_82A4D89C);
PPC_FUNC_IMPL(__imp__sub_82A4D89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D8A0"))) PPC_WEAK_FUNC(sub_82A4D8A0);
PPC_FUNC_IMPL(__imp__sub_82A4D8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4d8b4
	if (!cr6.lt) goto loc_82A4D8B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4d8bc
	if (cr6.eq) goto loc_82A4D8BC;
loc_82A4D8B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4D8BC:
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4d8d8
	if (cr6.eq) goto loc_82A4D8D8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82A4D8D8:
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D8EC"))) PPC_WEAK_FUNC(sub_82A4D8EC);
PPC_FUNC_IMPL(__imp__sub_82A4D8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D8F0"))) PPC_WEAK_FUNC(sub_82A4D8F0);
PPC_FUNC_IMPL(__imp__sub_82A4D8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4d904
	if (!cr6.lt) goto loc_82A4D904;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4d90c
	if (cr6.eq) goto loc_82A4D90C;
loc_82A4D904:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4D90C:
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4d928
	if (cr6.eq) goto loc_82A4D928;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82A4D928:
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D93C"))) PPC_WEAK_FUNC(sub_82A4D93C);
PPC_FUNC_IMPL(__imp__sub_82A4D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4D940"))) PPC_WEAK_FUNC(sub_82A4D940);
PPC_FUNC_IMPL(__imp__sub_82A4D940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4d954
	if (!cr6.lt) goto loc_82A4D954;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4d95c
	if (cr6.eq) goto loc_82A4D95C;
loc_82A4D954:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4D95C:
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D970"))) PPC_WEAK_FUNC(sub_82A4D970);
PPC_FUNC_IMPL(__imp__sub_82A4D970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4d984
	if (!cr6.lt) goto loc_82A4D984;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4d98c
	if (cr6.eq) goto loc_82A4D98C;
loc_82A4D984:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4D98C:
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D9A0"))) PPC_WEAK_FUNC(sub_82A4D9A0);
PPC_FUNC_IMPL(__imp__sub_82A4D9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4d9b4
	if (!cr6.lt) goto loc_82A4D9B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4d9bc
	if (cr6.eq) goto loc_82A4D9BC;
loc_82A4D9B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4D9BC:
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D9D0"))) PPC_WEAK_FUNC(sub_82A4D9D0);
PPC_FUNC_IMPL(__imp__sub_82A4D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4d9e4
	if (!cr6.lt) goto loc_82A4D9E4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4d9ec
	if (cr6.eq) goto loc_82A4D9EC;
loc_82A4D9E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4D9EC:
	// lbz r11,43(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DA00"))) PPC_WEAK_FUNC(sub_82A4DA00);
PPC_FUNC_IMPL(__imp__sub_82A4DA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4da14
	if (!cr6.lt) goto loc_82A4DA14;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4da1c
	if (cr6.eq) goto loc_82A4DA1C;
loc_82A4DA14:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a4da44
	goto loc_82A4DA44;
loc_82A4DA1C:
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4da38
	if (cr6.eq) goto loc_82A4DA38;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a4da44
	goto loc_82A4DA44;
loc_82A4DA38:
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A4DA44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// bne cr6,0x82a4da68
	if (!cr6.eq) goto loc_82A4DA68;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82A4DA68:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DA80"))) PPC_WEAK_FUNC(sub_82A4DA80);
PPC_FUNC_IMPL(__imp__sub_82A4DA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4da94
	if (!cr6.lt) goto loc_82A4DA94;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4da9c
	if (cr6.eq) goto loc_82A4DA9C;
loc_82A4DA94:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a4dac4
	goto loc_82A4DAC4;
loc_82A4DA9C:
	// lbz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4dab8
	if (cr6.eq) goto loc_82A4DAB8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a4dac4
	goto loc_82A4DAC4;
loc_82A4DAB8:
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A4DAC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// bne cr6,0x82a4dae8
	if (!cr6.eq) goto loc_82A4DAE8;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82A4DAE8:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DB00"))) PPC_WEAK_FUNC(sub_82A4DB00);
PPC_FUNC_IMPL(__imp__sub_82A4DB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r11.u8);
	// stb r11,43(r3)
	PPC_STORE_U8(ctx.r3.u32 + 43, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DB50"))) PPC_WEAK_FUNC(sub_82A4DB50);
PPC_FUNC_IMPL(__imp__sub_82A4DB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DB6C"))) PPC_WEAK_FUNC(sub_82A4DB6C);
PPC_FUNC_IMPL(__imp__sub_82A4DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4DB70"))) PPC_WEAK_FUNC(sub_82A4DB70);
PPC_FUNC_IMPL(__imp__sub_82A4DB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r4,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DB8C"))) PPC_WEAK_FUNC(sub_82A4DB8C);
PPC_FUNC_IMPL(__imp__sub_82A4DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4DB90"))) PPC_WEAK_FUNC(sub_82A4DB90);
PPC_FUNC_IMPL(__imp__sub_82A4DB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DBBC"))) PPC_WEAK_FUNC(sub_82A4DBBC);
PPC_FUNC_IMPL(__imp__sub_82A4DBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4DBC0"))) PPC_WEAK_FUNC(sub_82A4DBC0);
PPC_FUNC_IMPL(__imp__sub_82A4DBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DBEC"))) PPC_WEAK_FUNC(sub_82A4DBEC);
PPC_FUNC_IMPL(__imp__sub_82A4DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4DBF0"))) PPC_WEAK_FUNC(sub_82A4DBF0);
PPC_FUNC_IMPL(__imp__sub_82A4DBF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DC18"))) PPC_WEAK_FUNC(sub_82A4DC18);
PPC_FUNC_IMPL(__imp__sub_82A4DC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DC40"))) PPC_WEAK_FUNC(sub_82A4DC40);
PPC_FUNC_IMPL(__imp__sub_82A4DC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DC68"))) PPC_WEAK_FUNC(sub_82A4DC68);
PPC_FUNC_IMPL(__imp__sub_82A4DC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r4,43(r3)
	PPC_STORE_U8(ctx.r3.u32 + 43, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DC90"))) PPC_WEAK_FUNC(sub_82A4DC90);
PPC_FUNC_IMPL(__imp__sub_82A4DC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A4DC98;
	__savegprlr_25(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// addi r29,r10,3
	ctx.r29.s64 = ctx.r10.s64 + 3;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r11,r30,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwzx r11,r29,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r11,r28,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwzx r11,r27,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwzx r11,r26,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r11,r25,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a4dd9c
	if (!cr6.lt) goto loc_82A4DD9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A4DD9C:
	// ble cr6,0x82a4dda8
	if (!cr6.gt) goto loc_82A4DDA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A4DDA8:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82a4ddec
	if (cr6.eq) goto loc_82A4DDEC;
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r8,20
	ctx.r11.s64 = ctx.r8.s64 * 20;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// subfc r3,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r5.s64 - ctx.r7.s64;
	// adde r3,r6,r4
	temp.u8 = (ctx.r6.u32 + ctx.r4.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A4DDEC:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4DDF4"))) PPC_WEAK_FUNC(sub_82A4DDF4);
PPC_FUNC_IMPL(__imp__sub_82A4DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4DDF8"))) PPC_WEAK_FUNC(sub_82A4DDF8);
PPC_FUNC_IMPL(__imp__sub_82A4DDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A4DE00;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A4DE20:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a287a8
	ctx.lr = 0x82A4DE2C;
	sub_82A287A8(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r11,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r25,r1,88
	ctx.r25.s64 = ctx.r1.s64 + 88;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r9,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r9.u32);
	// stwx r11,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x82a4de20
	if (cr6.lt) goto loc_82A4DE20;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82a4deb8
	if (cr6.eq) goto loc_82A4DEB8;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// subfc r11,r5,r6
	xer.ca = ctx.r6.u32 >= ctx.r5.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subfze r3,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A4DEB8:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4df0c
	if (!cr6.eq) goto loc_82A4DF0C;
	// lwz r11,24356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24356);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a4df0c
	if (cr6.eq) goto loc_82A4DF0C;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_82A4DF0C:
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a4df40
	if (cr6.eq) goto loc_82A4DF40;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A4DF40:
	// lwz r11,24356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24356);
	// srawi r10,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a4df60
	if (cr6.eq) goto loc_82A4DF60;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82A4DF60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a4df94
	if (cr6.eq) goto loc_82A4DF94;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// subfc r11,r6,r5
	xer.ca = ctx.r5.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subfze r3,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A4DF94:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4DFA0"))) PPC_WEAK_FUNC(sub_82A4DFA0);
PPC_FUNC_IMPL(__imp__sub_82A4DFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x82a4dfe8
	if (!cr6.lt) goto loc_82A4DFE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4DFE8:
	// ble cr6,0x82a4dff4
	if (!cr6.gt) goto loc_82A4DFF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A4DFF4:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a4e018
	if (cr6.eq) goto loc_82A4E018;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A4E018:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E020"))) PPC_WEAK_FUNC(sub_82A4E020);
PPC_FUNC_IMPL(__imp__sub_82A4E020) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
	// stb r11,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r11.u8);
	// stb r11,43(r3)
	PPC_STORE_U8(ctx.r3.u32 + 43, ctx.r11.u8);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stb r11,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E08C"))) PPC_WEAK_FUNC(sub_82A4E08C);
PPC_FUNC_IMPL(__imp__sub_82A4E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4E090"))) PPC_WEAK_FUNC(sub_82A4E090);
PPC_FUNC_IMPL(__imp__sub_82A4E090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A4E098;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4e0bc
	if (!cr6.lt) goto loc_82A4E0BC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4e0c4
	if (cr6.eq) goto loc_82A4E0C4;
loc_82A4E0BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a4e0ec
	goto loc_82A4E0EC;
loc_82A4E0C4:
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e0e0
	if (cr6.eq) goto loc_82A4E0E0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a4e0ec
	goto loc_82A4E0EC;
loc_82A4E0E0:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A4E0EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e1f4
	if (cr6.eq) goto loc_82A4E1F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4e1f4
	if (!cr6.lt) goto loc_82A4E1F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a269d0
	ctx.lr = 0x82A4E10C;
	sub_82A269D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e12c
	if (cr6.eq) goto loc_82A4E12C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a269e0
	ctx.lr = 0x82A4E120;
	sub_82A269E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4e1f4
	if (!cr6.eq) goto loc_82A4E1F4;
loc_82A4E12C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4dc90
	ctx.lr = 0x82A4E144;
	sub_82A4DC90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a4e170
	if (!cr6.eq) goto loc_82A4E170;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4e164
	if (!cr6.eq) goto loc_82A4E164;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e190
	if (cr6.eq) goto loc_82A4E190;
loc_82A4E164:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A4E170:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a4e190
	if (!cr6.eq) goto loc_82A4E190;
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e190
	if (cr6.eq) goto loc_82A4E190;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A4E190:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a269f8
	ctx.lr = 0x82A4E198;
	sub_82A269F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e1f4
	if (cr6.eq) goto loc_82A4E1F4;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e1f4
	if (cr6.eq) goto loc_82A4E1F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ddf8
	ctx.lr = 0x82A4E1C0;
	sub_82A4DDF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82a4e164
	if (cr6.eq) goto loc_82A4E164;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a4e1f4
	if (!cr6.eq) goto loc_82A4E1F4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4e1f4
	if (!cr6.lt) goto loc_82A4E1F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82A4E1F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4E200"))) PPC_WEAK_FUNC(sub_82A4E200);
PPC_FUNC_IMPL(__imp__sub_82A4E200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82A4E208;
	__savegprlr_16(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a4e688
	if (cr6.eq) goto loc_82A4E688;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82a4e688
	if (cr6.eq) goto loc_82A4E688;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4e688
	if (!cr6.lt) goto loc_82A4E688;
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// addi r25,r5,560
	ctx.r25.s64 = ctx.r5.s64 + 560;
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a273a0
	ctx.lr = 0x82A4E250;
	sub_82A273A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4dfa0
	ctx.lr = 0x82A4E25C;
	sub_82A4DFA0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31778
	ctx.r9.s64 = -2082603008;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r22,r30,24
	ctx.r22.u64 = ctx.r30.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r24,12812(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12812);
	// lwzx r30,r8,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r23,r24,14,18,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 14) & 0x3FFF;
loc_82A4E280:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r25,24560
	ctx.r10.s64 = ctx.r25.s64 + 24560;
	// bne cr6,0x82a4e298
	if (!cr6.eq) goto loc_82A4E298;
	// addi r10,r25,760
	ctx.r10.s64 = ctx.r25.s64 + 760;
loc_82A4E298:
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e2a8
	if (cr6.lt) goto loc_82A4E2A8;
	// addi r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 + 720;
	// b 0x82a4e2b8
	goto loc_82A4E2B8;
loc_82A4E2A8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A4E2B8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r23
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, xer);
	// bne cr6,0x82a4e2dc
	if (!cr6.eq) goto loc_82A4E2DC;
	// xor r9,r24,r8
	ctx.r9.u64 = ctx.r24.u64 ^ ctx.r8.u64;
	// clrlwi r7,r9,14
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a4e2e0
	if (cr6.eq) goto loc_82A4E2E0;
loc_82A4E2DC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A4E2E0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a4e508
	if (!cr6.eq) goto loc_82A4E508;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e2fc
	if (cr6.lt) goto loc_82A4E2FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a4e310
	goto loc_82A4E310;
loc_82A4E2FC:
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A4E310:
	// clrlwi r5,r8,14
	ctx.r5.u64 = ctx.r8.u32 & 0x3FFFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r8,r8,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// lbz r20,4(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// or r19,r8,r5
	ctx.r19.u64 = ctx.r8.u64 | ctx.r5.u64;
	// lbz r6,6(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lwz r18,8(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r17,12(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r16,16(r10)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// rlwinm r19,r10,14,18,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// stb r20,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r20.u8);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// cmplw cr6,r4,r19
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r19.u32, xer);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// stw r18,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r18.u32);
	// stw r17,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r17.u32);
	// stb r16,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r16.u8);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// bne cr6,0x82a4e384
	if (!cr6.eq) goto loc_82A4E384;
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82a4e388
	if (cr6.eq) goto loc_82A4E388;
loc_82A4E384:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E388:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a4e3c4
	if (!cr6.eq) goto loc_82A4E3C4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a4e3b4
	if (!cr6.eq) goto loc_82A4E3B4;
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82a4e3b8
	if (cr6.eq) goto loc_82A4E3B8;
loc_82A4E3B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E3B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e4e4
	if (cr6.eq) goto loc_82A4E4E4;
loc_82A4E3C4:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82a4e3dc
	if (cr6.lt) goto loc_82A4E3DC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// b 0x82a4e42c
	goto loc_82A4E42C;
loc_82A4E3DC:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82a4e400
	if (!cr6.eq) goto loc_82A4E400;
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82a4e404
	if (cr6.eq) goto loc_82A4E404;
loc_82A4E400:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E404:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e420
	if (cr6.eq) goto loc_82A4E420;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// b 0x82a4e42c
	goto loc_82A4E42C;
loc_82A4E420:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
loc_82A4E42C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82a4e438
	if (cr6.lt) goto loc_82A4E438;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82A4E438:
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e48c
	if (cr6.eq) goto loc_82A4E48C;
	// rlwinm r10,r30,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4e460
	if (!cr6.eq) goto loc_82A4E460;
	// clrlwi r10,r30,14
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82a4e464
	if (cr6.eq) goto loc_82A4E464;
loc_82A4E460:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E464:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e48c
	if (cr6.eq) goto loc_82A4E48C;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82a4e4fc
	goto loc_82A4E4FC;
loc_82A4E48C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82a4e4e4
	if (cr6.eq) goto loc_82A4E4E4;
	// rlwinm r10,r30,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4e4b0
	if (!cr6.eq) goto loc_82A4E4B0;
	// clrlwi r10,r30,14
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82a4e4b4
	if (cr6.eq) goto loc_82A4E4B4;
loc_82A4E4B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E4B4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e4e4
	if (cr6.eq) goto loc_82A4E4E4;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r10,1,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FE;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r26,r9,24
	ctx.r26.u64 = ctx.r9.u32 & 0xFF;
loc_82A4E4E4:
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e4fc
	if (cr6.eq) goto loc_82A4E4FC;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
loc_82A4E4FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,30
	cr6.compare<uint32_t>(ctx.r28.u32, 30, xer);
	// blt cr6,0x82a4e280
	if (cr6.lt) goto loc_82A4E280;
loc_82A4E508:
	// li r3,1
	ctx.r3.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A4E510:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r25,24560
	ctx.r10.s64 = ctx.r25.s64 + 24560;
	// bne cr6,0x82a4e528
	if (!cr6.eq) goto loc_82A4E528;
	// addi r10,r25,760
	ctx.r10.s64 = ctx.r25.s64 + 760;
loc_82A4E528:
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e538
	if (cr6.lt) goto loc_82A4E538;
	// addi r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 + 720;
	// b 0x82a4e548
	goto loc_82A4E548;
loc_82A4E538:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A4E548:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r23
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, xer);
	// bne cr6,0x82a4e56c
	if (!cr6.eq) goto loc_82A4E56C;
	// xor r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r24.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4e570
	if (cr6.eq) goto loc_82A4E570;
loc_82A4E56C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E570:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a4e68c
	if (!cr6.eq) goto loc_82A4E68C;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e58c
	if (cr6.lt) goto loc_82A4E58C;
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// b 0x82a4e5a0
	goto loc_82A4E5A0;
loc_82A4E58C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82A4E5A0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// rlwinm r7,r9,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82a4e5c8
	if (!cr6.eq) goto loc_82A4E5C8;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4e5cc
	if (cr6.eq) goto loc_82A4E5CC;
loc_82A4E5C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E5CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a4e674
	if (!cr6.eq) goto loc_82A4E674;
	// clrlwi r10,r21,24
	ctx.r10.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e62c
	if (cr6.eq) goto loc_82A4E62C;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e5f4
	if (cr6.lt) goto loc_82A4E5F4;
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// b 0x82a4e608
	goto loc_82A4E608;
loc_82A4E5F4:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A4E608:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82a4e674
	if (cr6.gt) goto loc_82A4E674;
	// b 0x82a4e670
	goto loc_82A4E670;
loc_82A4E62C:
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e63c
	if (cr6.lt) goto loc_82A4E63C;
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// b 0x82a4e650
	goto loc_82A4E650;
loc_82A4E63C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A4E650:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a4e674
	if (!cr6.lt) goto loc_82A4E674;
loc_82A4E670:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A4E674:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,30
	cr6.compare<uint32_t>(ctx.r8.u32, 30, xer);
	// blt cr6,0x82a4e510
	if (cr6.lt) goto loc_82A4E510;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82A4E688:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A4E68C:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4E694"))) PPC_WEAK_FUNC(sub_82A4E694);
PPC_FUNC_IMPL(__imp__sub_82A4E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4E698"))) PPC_WEAK_FUNC(sub_82A4E698);
PPC_FUNC_IMPL(__imp__sub_82A4E698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4E6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82a4e6c8
	if (!cr6.lt) goto loc_82A4E6C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4e6d0
	if (cr6.eq) goto loc_82A4E6D0;
loc_82A4E6C8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82a4e6f8
	goto loc_82A4E6F8;
loc_82A4E6D0:
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e6ec
	if (cr6.eq) goto loc_82A4E6EC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82a4e6f8
	goto loc_82A4E6F8;
loc_82A4E6EC:
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A4E6F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e80c
	if (cr6.eq) goto loc_82A4E80C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4e80c
	if (!cr6.lt) goto loc_82A4E80C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a269d0
	ctx.lr = 0x82A4E718;
	sub_82A269D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e738
	if (cr6.eq) goto loc_82A4E738;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a269e0
	ctx.lr = 0x82A4E72C;
	sub_82A269E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4e80c
	if (!cr6.eq) goto loc_82A4E80C;
loc_82A4E738:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4dc90
	ctx.lr = 0x82A4E75C;
	sub_82A4DC90(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82a4e788
	if (!cr6.eq) goto loc_82A4E788;
	// lbz r11,41(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4e77c
	if (!cr6.eq) goto loc_82A4E77C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4e7a8
	if (cr6.eq) goto loc_82A4E7A8;
loc_82A4E77C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4E788:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a4e7a8
	if (!cr6.eq) goto loc_82A4E7A8;
	// lbz r11,43(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e7a8
	if (cr6.eq) goto loc_82A4E7A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4E7A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a269f8
	ctx.lr = 0x82A4E7B0;
	sub_82A269F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e80c
	if (cr6.eq) goto loc_82A4E80C;
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4e80c
	if (cr6.eq) goto loc_82A4E80C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ddf8
	ctx.lr = 0x82A4E7D8;
	sub_82A4DDF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82a4e77c
	if (cr6.eq) goto loc_82A4E77C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82a4e80c
	if (!cr6.eq) goto loc_82A4E80C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4e80c
	if (!cr6.lt) goto loc_82A4E80C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4E80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4E818"))) PPC_WEAK_FUNC(sub_82A4E818);
PPC_FUNC_IMPL(__imp__sub_82A4E818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A4E820;
	__savegprlr_27(ctx, base);
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
	// bl 0x82a53e08
	ctx.lr = 0x82A4E838;
	sub_82A53E08(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwzx r28,r6,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lwzx r6,r27,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x82a532b0
	ctx.lr = 0x82A4E8A4;
	sub_82A532B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a54d10
	ctx.lr = 0x82A4E8AC;
	sub_82A54D10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a53b60
	ctx.lr = 0x82A4E8B8;
	sub_82A53B60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a4e8cc
	if (cr6.eq) goto loc_82A4E8CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82A4E8CC;
	sub_82416268(ctx, base);
loc_82A4E8CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4E8D8"))) PPC_WEAK_FUNC(sub_82A4E8D8);
PPC_FUNC_IMPL(__imp__sub_82A4E8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82A4E8E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82a53e08
	ctx.lr = 0x82A4E8FC;
	sub_82A53E08(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwzx r27,r6,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r28,8(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r8,r6,r28
	ctx.r8.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lwzx r6,r26,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x82a532b0
	ctx.lr = 0x82A4E968;
	sub_82A532B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54d10
	ctx.lr = 0x82A4E970;
	sub_82A54D10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a53ab0
	ctx.lr = 0x82A4E97C;
	sub_82A53AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82a4e998
	if (cr6.eq) goto loc_82A4E998;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a53be8
	ctx.lr = 0x82A4E994;
	sub_82A53BE8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82A4E998:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a4e9a8
	if (cr6.eq) goto loc_82A4E9A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82A4E9A8;
	sub_82416268(ctx, base);
loc_82A4E9A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4E9B4"))) PPC_WEAK_FUNC(sub_82A4E9B4);
PPC_FUNC_IMPL(__imp__sub_82A4E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4E9B8"))) PPC_WEAK_FUNC(sub_82A4E9B8);
PPC_FUNC_IMPL(__imp__sub_82A4E9B8) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a4eab0
	if (cr6.eq) goto loc_82A4EAB0;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x82a4eab0
	if (cr6.eq) goto loc_82A4EAB0;
	// addi r11,r5,560
	ctx.r11.s64 = ctx.r5.s64 + 560;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4E9F8:
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4ea08
	if (cr6.lt) goto loc_82A4EA08;
	// addi r10,r9,720
	ctx.r10.s64 = ctx.r9.s64 + 720;
	// b 0x82a4ea18
	goto loc_82A4EA18;
loc_82A4EA08:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82A4EA18:
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82a4ea30
	if (cr6.eq) goto loc_82A4EA30;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82a4ea44
	if (cr6.gt) goto loc_82A4EA44;
loc_82A4EA30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4e9f8
	if (cr6.lt) goto loc_82A4E9F8;
	// b 0x82a4ea48
	goto loc_82A4EA48;
loc_82A4EA44:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82A4EA48:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ea58
	if (cr6.eq) goto loc_82A4EA58;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
loc_82A4EA58:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ea94
	if (!cr6.eq) goto loc_82A4EA94;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a4e8d8
	ctx.lr = 0x82A4EA78;
	sub_82A4E8D8(ctx, base);
	// lbz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82a4ea98
	if (cr6.eq) goto loc_82A4EA98;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x82a4ea98
	goto loc_82A4EA98;
loc_82A4EA94:
	// bl 0x82a4e818
	ctx.lr = 0x82A4EA98;
	sub_82A4E818(ctx, base);
loc_82A4EA98:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a4eab0
	if (cr6.eq) goto loc_82A4EAB0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r3,r31
	xer.ca = ctx.r31.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82a4eab4
	goto loc_82A4EAB4;
loc_82A4EAB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4EAB4:
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

__attribute__((alias("__imp__sub_82A4EACC"))) PPC_WEAK_FUNC(sub_82A4EACC);
PPC_FUNC_IMPL(__imp__sub_82A4EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4EAD0"))) PPC_WEAK_FUNC(sub_82A4EAD0);
PPC_FUNC_IMPL(__imp__sub_82A4EAD0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a4eb40
	if (cr6.eq) goto loc_82A4EB40;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82a4eb40
	if (cr6.eq) goto loc_82A4EB40;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4eb40
	if (!cr6.lt) goto loc_82A4EB40;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82a4e8d8
	ctx.lr = 0x82A4EB14;
	sub_82A4E8D8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4eb28
	if (!cr6.eq) goto loc_82A4EB28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82a4eb2c
	goto loc_82A4EB2C;
loc_82A4EB28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82A4EB2C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82a4eb40
	if (cr6.eq) goto loc_82A4EB40;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82a4eb44
	if (cr6.gt) goto loc_82A4EB44;
loc_82A4EB40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4EB44:
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

__attribute__((alias("__imp__sub_82A4EB5C"))) PPC_WEAK_FUNC(sub_82A4EB5C);
PPC_FUNC_IMPL(__imp__sub_82A4EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4EB60"))) PPC_WEAK_FUNC(sub_82A4EB60);
PPC_FUNC_IMPL(__imp__sub_82A4EB60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a4ec08
	if (cr6.eq) goto loc_82A4EC08;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82a4ec08
	if (cr6.eq) goto loc_82A4EC08;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4ec08
	if (!cr6.lt) goto loc_82A4EC08;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r5,560
	ctx.r11.s64 = ctx.r5.s64 + 560;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4ebb0
	if (cr6.eq) goto loc_82A4EBB0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-21768
	ctx.r11.s64 = ctx.r11.s64 + -21768;
	// b 0x82a4ebb4
	goto loc_82A4EBB4;
loc_82A4EBB0:
	// addi r11,r11,19968
	ctx.r11.s64 = ctx.r11.s64 + 19968;
loc_82A4EBB4:
	// lbz r11,3492(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ebdc
	if (cr6.eq) goto loc_82A4EBDC;
	// bl 0x82a4e9b8
	ctx.lr = 0x82A4EBC8;
	sub_82A4E9B8(ctx, base);
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
loc_82A4EBDC:
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82a4e200
	ctx.lr = 0x82A4EBE4;
	sub_82A4E200(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
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
loc_82A4EC08:
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

__attribute__((alias("__imp__sub_82A4EC20"))) PPC_WEAK_FUNC(sub_82A4EC20);
PPC_FUNC_IMPL(__imp__sub_82A4EC20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82a4ecc8
	if (cr6.eq) goto loc_82A4ECC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82a4ecc8
	if (cr6.eq) goto loc_82A4ECC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82a4ecc8
	if (!cr6.lt) goto loc_82A4ECC8;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r5,560
	ctx.r11.s64 = ctx.r5.s64 + 560;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4ec70
	if (cr6.eq) goto loc_82A4EC70;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-21768
	ctx.r11.s64 = ctx.r11.s64 + -21768;
	// b 0x82a4ec74
	goto loc_82A4EC74;
loc_82A4EC70:
	// addi r11,r11,19968
	ctx.r11.s64 = ctx.r11.s64 + 19968;
loc_82A4EC74:
	// lbz r11,3492(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ec9c
	if (cr6.eq) goto loc_82A4EC9C;
	// bl 0x82a4ead0
	ctx.lr = 0x82A4EC88;
	sub_82A4EAD0(ctx, base);
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
loc_82A4EC9C:
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82a4e200
	ctx.lr = 0x82A4ECA4;
	sub_82A4E200(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subfc r10,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
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
loc_82A4ECC8:
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

__attribute__((alias("__imp__sub_82A4ECE0"))) PPC_WEAK_FUNC(sub_82A4ECE0);
PPC_FUNC_IMPL(__imp__sub_82A4ECE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4ECE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82a26930
	ctx.lr = 0x82A4ED08;
	sub_82A26930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ed5c
	if (!cr6.eq) goto loc_82A4ED5C;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26898
	ctx.lr = 0x82A4ED20;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ed74
	if (!cr6.eq) goto loc_82A4ED74;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a268c8
	ctx.lr = 0x82A4ED38;
	sub_82A268C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ed74
	if (!cr6.eq) goto loc_82A4ED74;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26960
	ctx.lr = 0x82A4ED50;
	sub_82A26960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ede8
	if (cr6.eq) goto loc_82A4EDE8;
loc_82A4ED5C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4e090
	ctx.lr = 0x82A4ED6C;
	sub_82A4E090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4ED74:
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4edcc
	if (cr6.eq) goto loc_82A4EDCC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82a4edcc
	if (cr6.eq) goto loc_82A4EDCC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a4ede8
	if (!cr6.eq) goto loc_82A4EDE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4eb60
	ctx.lr = 0x82A4EDA4;
	sub_82A4EB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4edec
	if (!cr6.eq) goto loc_82A4EDEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4eb60
	ctx.lr = 0x82A4EDC4;
	sub_82A4EB60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4EDCC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4eb60
	ctx.lr = 0x82A4EDE0;
	sub_82A4EB60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4EDE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82A4EDEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4EDF4"))) PPC_WEAK_FUNC(sub_82A4EDF4);
PPC_FUNC_IMPL(__imp__sub_82A4EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4EDF8"))) PPC_WEAK_FUNC(sub_82A4EDF8);
PPC_FUNC_IMPL(__imp__sub_82A4EDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4EE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82a26930
	ctx.lr = 0x82A4EE20;
	sub_82A26930(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ee44
	if (cr6.eq) goto loc_82A4EE44;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4e698
	ctx.lr = 0x82A4EE3C;
	sub_82A4E698(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4EE44:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26898
	ctx.lr = 0x82A4EE50;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4eea8
	if (!cr6.eq) goto loc_82A4EEA8;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a268c8
	ctx.lr = 0x82A4EE68;
	sub_82A268C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4eea8
	if (!cr6.eq) goto loc_82A4EEA8;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26960
	ctx.lr = 0x82A4EE80;
	sub_82A26960(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ef08
	if (cr6.eq) goto loc_82A4EF08;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4e698
	ctx.lr = 0x82A4EE9C;
	sub_82A4E698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4EEA8:
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4eef0
	if (cr6.eq) goto loc_82A4EEF0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82a4eef0
	if (cr6.eq) goto loc_82A4EEF0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82a4ef08
	if (!cr6.eq) goto loc_82A4EF08;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4eb60
	ctx.lr = 0x82A4EED8;
	sub_82A4EB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4ef08
	if (!cr6.eq) goto loc_82A4EF08;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82a4eef4
	goto loc_82A4EEF4;
loc_82A4EEF0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82A4EEF4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ec20
	ctx.lr = 0x82A4EF04;
	sub_82A4EC20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A4EF08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4EF14"))) PPC_WEAK_FUNC(sub_82A4EF14);
PPC_FUNC_IMPL(__imp__sub_82A4EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4EF18"))) PPC_WEAK_FUNC(sub_82A4EF18);
PPC_FUNC_IMPL(__imp__sub_82A4EF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ef34
	if (cr6.eq) goto loc_82A4EF34;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A4EF34:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4ef44
	if (cr6.eq) goto loc_82A4EF44;
	// b 0x82a4ece0
	sub_82A4ECE0(ctx, base);
	return;
loc_82A4EF44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4EF4C"))) PPC_WEAK_FUNC(sub_82A4EF4C);
PPC_FUNC_IMPL(__imp__sub_82A4EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4EF50"))) PPC_WEAK_FUNC(sub_82A4EF50);
PPC_FUNC_IMPL(__imp__sub_82A4EF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ef6c
	if (cr6.eq) goto loc_82A4EF6C;
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A4EF6C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82a4ef7c
	if (cr6.eq) goto loc_82A4EF7C;
	// b 0x82a4edf8
	sub_82A4EDF8(ctx, base);
	return;
loc_82A4EF7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4EF84"))) PPC_WEAK_FUNC(sub_82A4EF84);
PPC_FUNC_IMPL(__imp__sub_82A4EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4EF88"))) PPC_WEAK_FUNC(sub_82A4EF88);
PPC_FUNC_IMPL(__imp__sub_82A4EF88) {
	PPC_FUNC_PROLOGUE();
	// sth r4,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4EF90"))) PPC_WEAK_FUNC(sub_82A4EF90);
PPC_FUNC_IMPL(__imp__sub_82A4EF90) {
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
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A4EFB0;
	sub_831CDCF0(ctx, base);
	// li r9,406
	ctx.r9.s64 = 406;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A4EFC0:
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// bdnz 0x82a4efc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4EFC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82A4EFFC"))) PPC_WEAK_FUNC(sub_82A4EFFC);
PPC_FUNC_IMPL(__imp__sub_82A4EFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4F000"))) PPC_WEAK_FUNC(sub_82A4F000);
PPC_FUNC_IMPL(__imp__sub_82A4F000) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82a4f0f4
	if (cr6.eq) goto loc_82A4F0F4;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x82a4f0f4
	if (cr6.eq) goto loc_82A4F0F4;
	// li r31,3
	ctx.r31.s64 = 3;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82a4f078
	if (!cr6.eq) goto loc_82A4F078;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82a4d608
	ctx.lr = 0x82A4F044;
	sub_82A4D608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82a4f094
	if (cr6.gt) goto loc_82A4F094;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82a4f094
	if (cr6.gt) goto loc_82A4F094;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a4f0b4
	if (cr6.lt) goto loc_82A4F0B4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82a4f0b4
	if (cr6.lt) goto loc_82A4F0B4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82a4f0dc
	if (!cr6.eq) goto loc_82A4F0DC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// b 0x82a4f0d4
	goto loc_82A4F0D4;
loc_82A4F078:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82a4f0dc
	if (!cr6.eq) goto loc_82A4F0DC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82a4d548
	ctx.lr = 0x82A4F08C;
	sub_82A4D548(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82a4f0b0
	if (!cr6.gt) goto loc_82A4F0B0;
loc_82A4F094:
	// li r31,0
	ctx.r31.s64 = 0;
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
loc_82A4F0B0:
	// bge cr6,0x82a4f0d0
	if (!cr6.lt) goto loc_82A4F0D0;
loc_82A4F0B4:
	// li r31,1
	ctx.r31.s64 = 1;
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
loc_82A4F0D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_82A4F0D4:
	// bne cr6,0x82a4f0dc
	if (!cr6.eq) goto loc_82A4F0DC;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82A4F0DC:
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
loc_82A4F0F4:
	// li r3,3
	ctx.r3.s64 = 3;
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

__attribute__((alias("__imp__sub_82A4F10C"))) PPC_WEAK_FUNC(sub_82A4F10C);
PPC_FUNC_IMPL(__imp__sub_82A4F10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4F110"))) PPC_WEAK_FUNC(sub_82A4F110);
PPC_FUNC_IMPL(__imp__sub_82A4F110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82A4F118;
	__savegprlr_22(ctx, base);
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31763
	ctx.r24.s64 = -2081619968;
	// lwz r25,132(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r22,r11,31
	ctx.r22.u64 = ctx.r11.u64 | 31;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// lwz r26,292(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r30,6112(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82a4f210
	if (cr6.eq) goto loc_82A4F210;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82a4f210
	if (cr6.eq) goto loc_82A4F210;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82a4f210
	if (cr6.eq) goto loc_82A4F210;
	// lwz r31,5420(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5420);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4f170
	if (cr6.lt) goto loc_82A4F170;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4f174
	if (cr6.lt) goto loc_82A4F174;
loc_82A4F170:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4F174:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f210
	if (cr6.eq) goto loc_82A4F210;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a4f190
	if (!cr6.lt) goto loc_82A4F190;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f1b8
	goto loc_82A4F1B8;
loc_82A4F190:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a4f1a0
	if (!cr6.lt) goto loc_82A4F1A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f1b8
	goto loc_82A4F1B8;
loc_82A4F1A0:
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
loc_82A4F1B8:
	// bl 0x82a0c738
	ctx.lr = 0x82A4F1BC;
	sub_82A0C738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82a4f210
	if (cr6.eq) goto loc_82A4F210;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4F1CC;
	sub_82A164C8(ctx, base);
	// bl 0x82a16c18
	ctx.lr = 0x82A4F1D0;
	sub_82A16C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f210
	if (cr6.eq) goto loc_82A4F210;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A4F1EC;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82A4F1FC;
	sub_831CE980(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a4f21c
	if (!cr6.eq) goto loc_82A4F21C;
loc_82A4F208:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82A4F210;
	sub_83102DB0(ctx, base);
loc_82A4F210:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A4F21C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5364(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a4f23c
	if (cr6.gt) goto loc_82A4F23C;
	// lfs f0,5372(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4f248
	if (!cr6.gt) goto loc_82A4F248;
loc_82A4F23C:
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82a4f208
	if (!cr6.eq) goto loc_82A4F208;
loc_82A4F248:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4f260
	if (cr6.lt) goto loc_82A4F260;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4f264
	if (cr6.lt) goto loc_82A4F264;
loc_82A4F260:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4F264:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f30c
	if (cr6.eq) goto loc_82A4F30C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a4f280
	if (!cr6.lt) goto loc_82A4F280;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f2a8
	goto loc_82A4F2A8;
loc_82A4F280:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a4f290
	if (!cr6.lt) goto loc_82A4F290;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f2a8
	goto loc_82A4F2A8;
loc_82A4F290:
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
loc_82A4F2A8:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4F2B0;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4F2B8;
	sub_82A164C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83767d18
	ctx.lr = 0x82A4F2C0;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82a4f310
	if (!cr6.eq) goto loc_82A4F310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x82A4F2D4;
	sub_83767D18(ctx, base);
	// lbz r11,25(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4f2e4
	if (!cr6.eq) goto loc_82A4F2E4;
	// li r30,255
	ctx.r30.s64 = 255;
loc_82A4F2E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a229e8
	ctx.lr = 0x82A4F2F4;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82a4f310
	if (cr6.eq) goto loc_82A4F310;
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f310
	if (cr6.eq) goto loc_82A4F310;
loc_82A4F30C:
	// li r30,255
	ctx.r30.s64 = 255;
loc_82A4F310:
	// lwz r10,5416(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a4f328
	if (cr6.lt) goto loc_82A4F328;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4f32c
	if (cr6.lt) goto loc_82A4F32C;
loc_82A4F328:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4F32C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f208
	if (cr6.eq) goto loc_82A4F208;
	// lwz r11,5412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5412);
	// li r28,255
	ctx.r28.s64 = 255;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82a4f350
	if (cr6.eq) goto loc_82A4F350;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82a4f354
	if (!cr6.eq) goto loc_82A4F354;
loc_82A4F350:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82A4F354:
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x82a4f4e8
	if (!cr6.eq) goto loc_82A4F4E8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x82a4f370
	if (!cr6.lt) goto loc_82A4F370;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f398
	goto loc_82A4F398;
loc_82A4F370:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x82a4f380
	if (!cr6.lt) goto loc_82A4F380;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f398
	goto loc_82A4F398;
loc_82A4F380:
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
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A4F398:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4F3A0;
	sub_82A0C738(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A4F3B4;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82A4F3C4;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// lwz r31,1548(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// beq cr6,0x82a4f434
	if (cr6.eq) goto loc_82A4F434;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4F3DC;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4F3E0;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x82a4f40c
	if (!cr6.eq) goto loc_82A4F40C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4f404
	if (!cr6.eq) goto loc_82A4F404;
	// ori r23,r23,19
	ctx.r23.u64 = ctx.r23.u64 | 19;
	// b 0x82a4f4cc
	goto loc_82A4F4CC;
loc_82A4F404:
	// ori r23,r23,16
	ctx.r23.u64 = ctx.r23.u64 | 16;
	// b 0x82a4f4cc
	goto loc_82A4F4CC;
loc_82A4F40C:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82a4f4cc
	if (!cr6.eq) goto loc_82A4F4CC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a4f42c
	if (cr6.lt) goto loc_82A4F42C;
	// ori r23,r23,18
	ctx.r23.u64 = ctx.r23.u64 | 18;
	// b 0x82a4f4cc
	goto loc_82A4F4CC;
loc_82A4F42C:
	// ori r23,r23,15
	ctx.r23.u64 = ctx.r23.u64 | 15;
	// b 0x82a4f4cc
	goto loc_82A4F4CC;
loc_82A4F434:
	// lwz r31,5416(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4f44c
	if (cr6.lt) goto loc_82A4F44C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4f450
	if (cr6.lt) goto loc_82A4F450;
loc_82A4F44C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4F450:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4f464
	if (!cr6.eq) goto loc_82A4F464;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// b 0x82a4f4cc
	goto loc_82A4F4CC;
loc_82A4F464:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a4f474
	if (!cr6.lt) goto loc_82A4F474;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f49c
	goto loc_82A4F49C;
loc_82A4F474:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a4f484
	if (!cr6.lt) goto loc_82A4F484;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f49c
	goto loc_82A4F49C;
loc_82A4F484:
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
loc_82A4F49C:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4F4A4;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4F4AC;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4F4B0;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4f4c8
	if (!cr6.eq) goto loc_82A4F4C8;
	// ori r23,r23,20
	ctx.r23.u64 = ctx.r23.u64 | 20;
	// b 0x82a4f4cc
	goto loc_82A4F4CC;
loc_82A4F4C8:
	// ori r23,r23,17
	ctx.r23.u64 = ctx.r23.u64 | 17;
loc_82A4F4CC:
	// addi r3,r1,1520
	ctx.r3.s64 = ctx.r1.s64 + 1520;
	// bl 0x83102db0
	ctx.lr = 0x82A4F4D4;
	sub_83102DB0(ctx, base);
loc_82A4F4D4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82A4F4DC;
	sub_83102DB0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A4F4E8:
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// beq cr6,0x82a4f670
	if (cr6.eq) goto loc_82A4F670;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A4F500;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82A4F510;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// lwz r31,492(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// beq cr6,0x82a4f5bc
	if (cr6.eq) goto loc_82A4F5BC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x82a4f52c
	if (!cr6.lt) goto loc_82A4F52C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f554
	goto loc_82A4F554;
loc_82A4F52C:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x82a4f53c
	if (!cr6.lt) goto loc_82A4F53C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f554
	goto loc_82A4F554;
loc_82A4F53C:
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
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A4F554:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4F55C;
	sub_82A0C738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4F564;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4F568;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x82a4f594
	if (!cr6.eq) goto loc_82A4F594;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4f58c
	if (!cr6.eq) goto loc_82A4F58C;
	// ori r23,r23,29
	ctx.r23.u64 = ctx.r23.u64 | 29;
	// b 0x82a4f654
	goto loc_82A4F654;
loc_82A4F58C:
	// ori r23,r23,26
	ctx.r23.u64 = ctx.r23.u64 | 26;
	// b 0x82a4f654
	goto loc_82A4F654;
loc_82A4F594:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82a4f654
	if (!cr6.eq) goto loc_82A4F654;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a4f5b4
	if (cr6.lt) goto loc_82A4F5B4;
	// ori r23,r23,28
	ctx.r23.u64 = ctx.r23.u64 | 28;
	// b 0x82a4f654
	goto loc_82A4F654;
loc_82A4F5B4:
	// ori r23,r23,25
	ctx.r23.u64 = ctx.r23.u64 | 25;
	// b 0x82a4f654
	goto loc_82A4F654;
loc_82A4F5BC:
	// lwz r31,5416(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4f5d4
	if (cr6.lt) goto loc_82A4F5D4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4f5d8
	if (cr6.lt) goto loc_82A4F5D8;
loc_82A4F5D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4F5D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4f5ec
	if (!cr6.eq) goto loc_82A4F5EC;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// b 0x82a4f654
	goto loc_82A4F654;
loc_82A4F5EC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a4f5fc
	if (!cr6.lt) goto loc_82A4F5FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f624
	goto loc_82A4F624;
loc_82A4F5FC:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a4f60c
	if (!cr6.lt) goto loc_82A4F60C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f624
	goto loc_82A4F624;
loc_82A4F60C:
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
loc_82A4F624:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4F62C;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4F634;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4F638;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4f650
	if (!cr6.eq) goto loc_82A4F650;
	// ori r23,r23,30
	ctx.r23.u64 = ctx.r23.u64 | 30;
	// b 0x82a4f654
	goto loc_82A4F654;
loc_82A4F650:
	// ori r23,r23,27
	ctx.r23.u64 = ctx.r23.u64 | 27;
loc_82A4F654:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x83102db0
	ctx.lr = 0x82A4F65C;
	sub_83102DB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82A4F664;
	sub_83102DB0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A4F670:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82a4f684
	if (!cr6.lt) goto loc_82A4F684;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a4f6ac
	goto loc_82A4F6AC;
loc_82A4F684:
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// bge cr6,0x82a4f694
	if (!cr6.lt) goto loc_82A4F694;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a4f6ac
	goto loc_82A4F6AC;
loc_82A4F694:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r31,r6,31
	ctx.r31.u64 = ctx.r6.u32 & 0x1;
loc_82A4F6AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x82A4F6B8;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// lfs f13,20056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a4f6f4
	if (!cr6.eq) goto loc_82A4F6F4;
	// lfs f11,5364(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5364);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82a4f70c
	if (cr6.lt) goto loc_82A4F70C;
loc_82A4F6F4:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82a4f710
	if (!cr6.eq) goto loc_82A4F710;
	// lfs f11,5364(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5364);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82a4f710
	if (cr6.lt) goto loc_82A4F710;
loc_82A4F70C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A4F710:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f7b4
	if (cr6.eq) goto loc_82A4F7B4;
	// lfs f0,5364(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5364);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,4764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4764);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a4f7b0
	if (cr6.gt) goto loc_82A4F7B0;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82a4f750
	if (cr6.eq) goto loc_82A4F750;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82a4f750
	if (cr6.eq) goto loc_82A4F750;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a4f758
	goto loc_82A4F758;
loc_82A4F750:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82A4F758:
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r10,5
	ctx.r10.s64 = 5;
	// subfe r5,r9,r6
	temp.u8 = (~ctx.r9.u32 + ctx.r6.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r1,76
	ctx.r8.s64 = ctx.r1.s64 + 76;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,20856
	ctx.r11.s64 = ctx.r11.s64 + 20856;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82A4F798:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82a4f798
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A4F798;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82a4f7b4
	if (!cr6.eq) goto loc_82A4F7B4;
loc_82A4F7B0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A4F7B4:
	// lwz r11,5416(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a4f7cc
	if (!cr6.lt) goto loc_82A4F7CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f7f4
	goto loc_82A4F7F4;
loc_82A4F7CC:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a4f7dc
	if (!cr6.lt) goto loc_82A4F7DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f7f4
	goto loc_82A4F7F4;
loc_82A4F7DC:
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
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_82A4F7F4:
	// lbz r11,5087(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5087);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82a4f808
	if (cr6.lt) goto loc_82A4F808;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A4F808:
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82a4f818
	if (!cr6.eq) goto loc_82A4F818;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A4F818:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4f000
	ctx.lr = 0x82A4F828;
	sub_82A4F000(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82a4f834
	if (cr6.eq) goto loc_82A4F834;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A4F834:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4f884
	if (!cr6.eq) goto loc_82A4F884;
	// lwz r31,4456(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a474e0
	ctx.lr = 0x82A4F84C;
	sub_82A474E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82a4f878
	if (!cr6.eq) goto loc_82A4F878;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4d810
	ctx.lr = 0x82A4F868;
	sub_82A4D810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f880
	if (cr6.eq) goto loc_82A4F880;
	// b 0x82a4f884
	goto loc_82A4F884;
loc_82A4F878:
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// bne cr6,0x82a4f884
	if (!cr6.eq) goto loc_82A4F884;
loc_82A4F880:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A4F884:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4f984
	if (cr6.eq) goto loc_82A4F984;
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// bne cr6,0x82a4f8b0
	if (!cr6.eq) goto loc_82A4F8B0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82A4F8A0;
	sub_83102DB0(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A4F8B0:
	// lwz r11,5416(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a4f8c4
	if (!cr6.lt) goto loc_82A4F8C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f8ec
	goto loc_82A4F8EC;
loc_82A4F8C4:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a4f8d4
	if (!cr6.lt) goto loc_82A4F8D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f8ec
	goto loc_82A4F8EC;
loc_82A4F8D4:
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
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_82A4F8EC:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4F8F4;
	sub_82A0C738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A4F908;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82A4F918;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r31,844(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// bl 0x82a164c8
	ctx.lr = 0x82A4F928;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4F92C;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x82a4f944
	if (!cr6.eq) goto loc_82A4F944;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r23,r23,22
	ctx.r23.u64 = ctx.r23.u64 | 22;
	// b 0x82a4f968
	goto loc_82A4F968;
loc_82A4F944:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82a4f968
	if (!cr6.eq) goto loc_82A4F968;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a4f964
	if (cr6.lt) goto loc_82A4F964;
	// ori r23,r23,24
	ctx.r23.u64 = ctx.r23.u64 | 24;
	// b 0x82a4f968
	goto loc_82A4F968;
loc_82A4F964:
	// ori r23,r23,21
	ctx.r23.u64 = ctx.r23.u64 | 21;
loc_82A4F968:
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x83102db0
	ctx.lr = 0x82A4F970;
	sub_83102DB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82A4F978;
	sub_83102DB0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82A4F984:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a229e8
	ctx.lr = 0x82A4F998;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82A4F9A8;
	sub_831CE980(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwz r30,1196(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1196);
	// blt cr6,0x82a4f9c4
	if (cr6.lt) goto loc_82A4F9C4;
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4f9c8
	if (cr6.lt) goto loc_82A4F9C8;
loc_82A4F9C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4F9C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fa24
	if (cr6.eq) goto loc_82A4FA24;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x82a4f9e4
	if (!cr6.lt) goto loc_82A4F9E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fa0c
	goto loc_82A4FA0C;
loc_82A4F9E4:
	// cmpwi cr6,r28,11
	cr6.compare<int32_t>(ctx.r28.s32, 11, xer);
	// bge cr6,0x82a4f9f4
	if (!cr6.lt) goto loc_82A4F9F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fa0c
	goto loc_82A4FA0C;
loc_82A4F9F4:
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
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
loc_82A4FA0C:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4FA14;
	sub_82A0C738(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4FA1C;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4FA20;
	sub_83102DB0(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
loc_82A4FA24:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// bne cr6,0x82a4fa50
	if (!cr6.eq) goto loc_82A4FA50;
	// lbz r11,5456(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fa64
	if (cr6.eq) goto loc_82A4FA64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4fa64
	if (!cr6.eq) goto loc_82A4FA64;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r23,r23,7
	ctx.r23.u64 = ctx.r23.u64 | 7;
	// b 0x82a4fa60
	goto loc_82A4FA60;
loc_82A4FA50:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x82a4fa64
	if (!cr6.eq) goto loc_82A4FA64;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r23,r23,8
	ctx.r23.u64 = ctx.r23.u64 | 8;
loc_82A4FA60:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A4FA64:
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// bl 0x83102db0
	ctx.lr = 0x82A4FA6C;
	sub_83102DB0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4f4d4
	if (!cr6.eq) goto loc_82A4F4D4;
	// lwz r11,5416(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82a4fa8c
	if (!cr6.lt) goto loc_82A4FA8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fab4
	goto loc_82A4FAB4;
loc_82A4FA8C:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82a4fa9c
	if (!cr6.lt) goto loc_82A4FA9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fab4
	goto loc_82A4FAB4;
loc_82A4FA9C:
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
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
loc_82A4FAB4:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4FABC;
	sub_82A0C738(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a229e8
	ctx.lr = 0x82A4FAD0;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82A4FAE0;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lwz r31,1900(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1900);
	// beq cr6,0x82a4fbec
	if (cr6.eq) goto loc_82A4FBEC;
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// beq cr6,0x82a4fb58
	if (cr6.eq) goto loc_82A4FB58;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4FB00;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4FB04;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x82a4fb30
	if (!cr6.eq) goto loc_82A4FB30;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4fb28
	if (!cr6.eq) goto loc_82A4FB28;
	// ori r23,r23,13
	ctx.r23.u64 = ctx.r23.u64 | 13;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FB28:
	// ori r23,r23,10
	ctx.r23.u64 = ctx.r23.u64 | 10;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FB30:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82a4fce8
	if (!cr6.eq) goto loc_82A4FCE8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a4fb50
	if (cr6.lt) goto loc_82A4FB50;
	// ori r23,r23,12
	ctx.r23.u64 = ctx.r23.u64 | 12;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FB50:
	// ori r23,r23,9
	ctx.r23.u64 = ctx.r23.u64 | 9;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FB58:
	// lwz r31,5416(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4fb70
	if (cr6.lt) goto loc_82A4FB70;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4fb74
	if (cr6.lt) goto loc_82A4FB74;
loc_82A4FB70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FB74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fce4
	if (cr6.eq) goto loc_82A4FCE4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a4fb90
	if (!cr6.lt) goto loc_82A4FB90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fbb8
	goto loc_82A4FBB8;
loc_82A4FB90:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a4fba0
	if (!cr6.lt) goto loc_82A4FBA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fbb8
	goto loc_82A4FBB8;
loc_82A4FBA0:
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
loc_82A4FBB8:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4FBC0;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4FBC8;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4FBCC;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4fbe4
	if (!cr6.eq) goto loc_82A4FBE4;
	// ori r23,r23,14
	ctx.r23.u64 = ctx.r23.u64 | 14;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FBE4:
	// ori r23,r23,11
	ctx.r23.u64 = ctx.r23.u64 | 11;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FBEC:
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// beq cr6,0x82a4fc58
	if (cr6.eq) goto loc_82A4FC58;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4FC00;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4FC04;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x82a4fc30
	if (!cr6.eq) goto loc_82A4FC30;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4fc28
	if (!cr6.eq) goto loc_82A4FC28;
	// ori r23,r23,5
	ctx.r23.u64 = ctx.r23.u64 | 5;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FC28:
	// ori r23,r23,3
	ctx.r23.u64 = ctx.r23.u64 | 3;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FC30:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// bne cr6,0x82a4fce8
	if (!cr6.eq) goto loc_82A4FCE8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82a4fc50
	if (cr6.lt) goto loc_82A4FC50;
	// ori r23,r23,4
	ctx.r23.u64 = ctx.r23.u64 | 4;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FC50:
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FC58:
	// lwz r31,5416(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5416);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82a4fc70
	if (cr6.lt) goto loc_82A4FC70;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a4fc74
	if (cr6.lt) goto loc_82A4FC74;
loc_82A4FC70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FC74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fce4
	if (cr6.eq) goto loc_82A4FCE4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x82a4fc90
	if (!cr6.lt) goto loc_82A4FC90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fcb8
	goto loc_82A4FCB8;
loc_82A4FC90:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82a4fca0
	if (!cr6.lt) goto loc_82A4FCA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4fcb8
	goto loc_82A4FCB8;
loc_82A4FCA0:
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
loc_82A4FCB8:
	// lwz r3,-3564(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x82A4FCC0;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a164c8
	ctx.lr = 0x82A4FCC8;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82A4FCCC;
	sub_83102DB0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a4fce4
	if (!cr6.eq) goto loc_82A4FCE4;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r23,r23,6
	ctx.r23.u64 = ctx.r23.u64 | 6;
	// b 0x82a4fce8
	goto loc_82A4FCE8;
loc_82A4FCE4:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_82A4FCE8:
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x83102db0
	ctx.lr = 0x82A4FCF0;
	sub_83102DB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83102db0
	ctx.lr = 0x82A4FCF8;
	sub_83102DB0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FD04"))) PPC_WEAK_FUNC(sub_82A4FD04);
PPC_FUNC_IMPL(__imp__sub_82A4FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4FD08"))) PPC_WEAK_FUNC(sub_82A4FD08);
PPC_FUNC_IMPL(__imp__sub_82A4FD08) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a4f110
	ctx.lr = 0x82A4FD24;
	sub_82A4F110(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a4fd74
	if (cr6.eq) goto loc_82A4FD74;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a4fd74
	if (cr6.eq) goto loc_82A4FD74;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a4fd74
	if (cr6.eq) goto loc_82A4FD74;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,25
	ctx.r10.u64 = ctx.r11.u64 | 25;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x82a4fd74
	if (cr6.eq) goto loc_82A4FD74;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 | 26;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4fd8c
	if (!cr6.eq) goto loc_82A4FD8C;
loc_82A4FD74:
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
loc_82A4FD8C:
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

__attribute__((alias("__imp__sub_82A4FDA4"))) PPC_WEAK_FUNC(sub_82A4FDA4);
PPC_FUNC_IMPL(__imp__sub_82A4FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A4FDA8"))) PPC_WEAK_FUNC(sub_82A4FDA8);
PPC_FUNC_IMPL(__imp__sub_82A4FDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4FDB0;
	__savegprlr_28(ctx, base);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82a4fdc0
	if (!cr6.eq) goto loc_82A4FDC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A4FDC0:
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r11,r6,560
	ctx.r11.s64 = ctx.r6.s64 + 560;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,760
	ctx.r31.s64 = ctx.r11.s64 + 760;
	// lwz r29,13240(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13240);
	// rlwinm r28,r29,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
loc_82A4FDDC:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4fdf0
	if (cr6.lt) goto loc_82A4FDF0;
	// addi r10,r31,720
	ctx.r10.s64 = ctx.r31.s64 + 720;
	// b 0x82a4fe00
	goto loc_82A4FE00;
loc_82A4FDF0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A4FE00:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r6,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a4fe24
	if (!cr6.eq) goto loc_82A4FE24;
	// xor r11,r29,r6
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4fe28
	if (cr6.eq) goto loc_82A4FE28;
loc_82A4FE24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FE28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a4fedc
	if (!cr6.eq) goto loc_82A4FEDC;
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x82a4fe70
	if (!cr6.eq) goto loc_82A4FE70;
	// xor r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4fe74
	if (cr6.eq) goto loc_82A4FE74;
loc_82A4FE70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FE74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fe88
	if (cr6.eq) goto loc_82A4FE88;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x82a4fec0
	goto loc_82A4FEC0;
loc_82A4FE88:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4feac
	if (!cr6.eq) goto loc_82A4FEAC;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4feb0
	if (cr6.eq) goto loc_82A4FEB0;
loc_82A4FEAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FEB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fec4
	if (cr6.eq) goto loc_82A4FEC4;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
loc_82A4FEC0:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A4FEC4:
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// bge cr6,0x82a4fed0
	if (!cr6.lt) goto loc_82A4FED0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A4FED0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,30
	cr6.compare<uint32_t>(ctx.r30.u32, 30, xer);
	// blt cr6,0x82a4fddc
	if (cr6.lt) goto loc_82A4FDDC;
loc_82A4FEDC:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FEE0"))) PPC_WEAK_FUNC(sub_82A4FEE0);
PPC_FUNC_IMPL(__imp__sub_82A4FEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A4FEE8;
	__savegprlr_28(ctx, base);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82a50014
	if (cr6.eq) goto loc_82A50014;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r11,r6,560
	ctx.r11.s64 = ctx.r6.s64 + 560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,760
	ctx.r31.s64 = ctx.r11.s64 + 760;
	// lwz r29,13240(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13240);
	// rlwinm r28,r29,14,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
loc_82A4FF0C:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// blt cr6,0x82a4ff20
	if (cr6.lt) goto loc_82A4FF20;
	// addi r10,r31,720
	ctx.r10.s64 = ctx.r31.s64 + 720;
	// b 0x82a4ff30
	goto loc_82A4FF30;
loc_82A4FF20:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A4FF30:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r6,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bne cr6,0x82a4ff54
	if (!cr6.eq) goto loc_82A4FF54;
	// xor r11,r29,r6
	ctx.r11.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a4ff58
	if (cr6.eq) goto loc_82A4FF58;
loc_82A4FF54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FF58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a50010
	if (!cr6.eq) goto loc_82A50010;
	// lbz r11,5(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x82a4ffa0
	if (!cr6.eq) goto loc_82A4FFA0;
	// xor r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4ffa4
	if (cr6.eq) goto loc_82A4FFA4;
loc_82A4FFA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FFA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4ffb8
	if (cr6.eq) goto loc_82A4FFB8;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x82a4fff0
	goto loc_82A4FFF0;
loc_82A4FFB8:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x82a4ffdc
	if (!cr6.eq) goto loc_82A4FFDC;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a4ffe0
	if (cr6.eq) goto loc_82A4FFE0;
loc_82A4FFDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FFE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a4fff4
	if (cr6.eq) goto loc_82A4FFF4;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
loc_82A4FFF0:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A4FFF4:
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// bne cr6,0x82a50000
	if (!cr6.eq) goto loc_82A50000;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82A50000:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,30
	cr6.compare<uint32_t>(ctx.r30.u32, 30, xer);
	// blt cr6,0x82a4ff0c
	if (cr6.lt) goto loc_82A4FF0C;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82A50010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A50014:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50018"))) PPC_WEAK_FUNC(sub_82A50018);
PPC_FUNC_IMPL(__imp__sub_82A50018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// beq cr6,0x82a5002c
	if (cr6.eq) goto loc_82A5002C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A5002C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A50034:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// cmpwi cr6,r7,21
	cr6.compare<int32_t>(ctx.r7.s32, 21, xer);
	// beq cr6,0x82a5006c
	if (cr6.eq) goto loc_82A5006C;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82a50034
	if (cr6.lt) goto loc_82A50034;
loc_82A5006C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50074"))) PPC_WEAK_FUNC(sub_82A50074);
PPC_FUNC_IMPL(__imp__sub_82A50074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50078"))) PPC_WEAK_FUNC(sub_82A50078);
PPC_FUNC_IMPL(__imp__sub_82A50078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a50164
	if (!cr6.eq) goto loc_82A50164;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lhz r7,32(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 32);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r11,r11,13192
	ctx.r11.s64 = ctx.r11.s64 + 13192;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a500b0
	if (!cr6.eq) goto loc_82A500B0;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a500d4
	goto loc_82A500D4;
loc_82A500B0:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82a500cc
	if (!cr6.eq) goto loc_82A500CC;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a500d0
	if (cr6.eq) goto loc_82A500D0;
loc_82A500CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A500D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A500D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a50164
	if (!cr6.eq) goto loc_82A50164;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A500E4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r6,21
	cr6.compare<int32_t>(ctx.r6.s32, 21, xer);
	// beq cr6,0x82a50164
	if (cr6.eq) goto loc_82A50164;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a5011c
	if (!cr6.eq) goto loc_82A5011C;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a50144
	goto loc_82A50144;
loc_82A5011C:
	// lhz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 92);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a5013c
	if (!cr6.eq) goto loc_82A5013C;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a50140
	if (cr6.eq) goto loc_82A50140;
loc_82A5013C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A50140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A50144:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5016c
	if (!cr6.eq) goto loc_82A5016C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x82a500e4
	if (cr6.lt) goto loc_82A500E4;
loc_82A50164:
	// addi r3,r3,472
	ctx.r3.s64 = ctx.r3.s64 + 472;
	// blr 
	return;
loc_82A5016C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50174"))) PPC_WEAK_FUNC(sub_82A50174);
PPC_FUNC_IMPL(__imp__sub_82A50174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50178"))) PPC_WEAK_FUNC(sub_82A50178);
PPC_FUNC_IMPL(__imp__sub_82A50178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a50264
	if (!cr6.eq) goto loc_82A50264;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lhz r7,32(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 32);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r11,r11,13192
	ctx.r11.s64 = ctx.r11.s64 + 13192;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82a501b0
	if (!cr6.eq) goto loc_82A501B0;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82a501d4
	goto loc_82A501D4;
loc_82A501B0:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82a501cc
	if (!cr6.eq) goto loc_82A501CC;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a501d0
	if (cr6.eq) goto loc_82A501D0;
loc_82A501CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A501D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A501D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a50264
	if (!cr6.eq) goto loc_82A50264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A501E8:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r6,21
	cr6.compare<int32_t>(ctx.r6.s32, 21, xer);
	// beq cr6,0x82a50264
	if (cr6.eq) goto loc_82A50264;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82a5021c
	if (!cr6.eq) goto loc_82A5021C;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82a50244
	goto loc_82A50244;
loc_82A5021C:
	// lhz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 92);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82a5023c
	if (!cr6.eq) goto loc_82A5023C;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a50240
	if (cr6.eq) goto loc_82A50240;
loc_82A5023C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A50240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82A50244:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a5026c
	if (!cr6.eq) goto loc_82A5026C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82a501e8
	if (cr6.lt) goto loc_82A501E8;
loc_82A50264:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A5026C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50274"))) PPC_WEAK_FUNC(sub_82A50274);
PPC_FUNC_IMPL(__imp__sub_82A50274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50278"))) PPC_WEAK_FUNC(sub_82A50278);
PPC_FUNC_IMPL(__imp__sub_82A50278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x82a502a8
	if (!cr6.eq) goto loc_82A502A8;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82a502a8
	if (!cr6.lt) goto loc_82A502A8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// blr 
	return;
loc_82A502A8:
	// addi r3,r3,472
	ctx.r3.s64 = ctx.r3.s64 + 472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A502B0"))) PPC_WEAK_FUNC(sub_82A502B0);
PPC_FUNC_IMPL(__imp__sub_82A502B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A502B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// bl 0x82a53e08
	ctx.lr = 0x82A502D8;
	sub_82A53E08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a532b0
	ctx.lr = 0x82A502FC;
	sub_82A532B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a54d10
	ctx.lr = 0x82A50304;
	sub_82A54D10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a53ab0
	ctx.lr = 0x82A50310;
	sub_82A53AB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82a50324
	if (cr6.eq) goto loc_82A50324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82A50324;
	sub_82416268(ctx, base);
loc_82A50324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50330"))) PPC_WEAK_FUNC(sub_82A50330);
PPC_FUNC_IMPL(__imp__sub_82A50330) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50350"))) PPC_WEAK_FUNC(sub_82A50350);
PPC_FUNC_IMPL(__imp__sub_82A50350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,255
	ctx.r7.s64 = 255;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r9,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r9.u8);
	// stb r9,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r9.u8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r9,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r9.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r9,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r9.u8);
loc_82A50374:
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// stb r9,80(r4)
	PPC_STORE_U8(ctx.r4.u32 + 80, ctx.r9.u8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a50374
	if (cr6.lt) goto loc_82A50374;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A503A4"))) PPC_WEAK_FUNC(sub_82A503A4);
PPC_FUNC_IMPL(__imp__sub_82A503A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A503A8"))) PPC_WEAK_FUNC(sub_82A503A8);
PPC_FUNC_IMPL(__imp__sub_82A503A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,91(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A503B0"))) PPC_WEAK_FUNC(sub_82A503B0);
PPC_FUNC_IMPL(__imp__sub_82A503B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,91(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a503cc
	if (!cr6.lt) goto loc_82A503CC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A503CC:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A503D4"))) PPC_WEAK_FUNC(sub_82A503D4);
PPC_FUNC_IMPL(__imp__sub_82A503D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A503D8"))) PPC_WEAK_FUNC(sub_82A503D8);
PPC_FUNC_IMPL(__imp__sub_82A503D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,91(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a503f8
	if (!cr6.lt) goto loc_82A503F8;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82A503F8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50400"))) PPC_WEAK_FUNC(sub_82A50400);
PPC_FUNC_IMPL(__imp__sub_82A50400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r10,91(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82a50424
	if (!cr6.lt) goto loc_82A50424;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A50424:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5042C"))) PPC_WEAK_FUNC(sub_82A5042C);
PPC_FUNC_IMPL(__imp__sub_82A5042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50430"))) PPC_WEAK_FUNC(sub_82A50430);
PPC_FUNC_IMPL(__imp__sub_82A50430) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50450"))) PPC_WEAK_FUNC(sub_82A50450);
PPC_FUNC_IMPL(__imp__sub_82A50450) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50460"))) PPC_WEAK_FUNC(sub_82A50460);
PPC_FUNC_IMPL(__imp__sub_82A50460) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5046C"))) PPC_WEAK_FUNC(sub_82A5046C);
PPC_FUNC_IMPL(__imp__sub_82A5046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50470"))) PPC_WEAK_FUNC(sub_82A50470);
PPC_FUNC_IMPL(__imp__sub_82A50470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5048C"))) PPC_WEAK_FUNC(sub_82A5048C);
PPC_FUNC_IMPL(__imp__sub_82A5048C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50490"))) PPC_WEAK_FUNC(sub_82A50490);
PPC_FUNC_IMPL(__imp__sub_82A50490) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A504A0"))) PPC_WEAK_FUNC(sub_82A504A0);
PPC_FUNC_IMPL(__imp__sub_82A504A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A504AC"))) PPC_WEAK_FUNC(sub_82A504AC);
PPC_FUNC_IMPL(__imp__sub_82A504AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A504B0"))) PPC_WEAK_FUNC(sub_82A504B0);
PPC_FUNC_IMPL(__imp__sub_82A504B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A504BC"))) PPC_WEAK_FUNC(sub_82A504BC);
PPC_FUNC_IMPL(__imp__sub_82A504BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A504C0"))) PPC_WEAK_FUNC(sub_82A504C0);
PPC_FUNC_IMPL(__imp__sub_82A504C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82a504e4
	if (!cr6.eq) goto loc_82A504E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
loc_82A504E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A504EC"))) PPC_WEAK_FUNC(sub_82A504EC);
PPC_FUNC_IMPL(__imp__sub_82A504EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A504F0"))) PPC_WEAK_FUNC(sub_82A504F0);
PPC_FUNC_IMPL(__imp__sub_82A504F0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A504F8"))) PPC_WEAK_FUNC(sub_82A504F8);
PPC_FUNC_IMPL(__imp__sub_82A504F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50500"))) PPC_WEAK_FUNC(sub_82A50500);
PPC_FUNC_IMPL(__imp__sub_82A50500) {
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
	// bl 0x82a50350
	ctx.lr = 0x82A50510;
	sub_82A50350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lfs f0,20056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stb r8,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50554"))) PPC_WEAK_FUNC(sub_82A50554);
PPC_FUNC_IMPL(__imp__sub_82A50554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50558"))) PPC_WEAK_FUNC(sub_82A50558);
PPC_FUNC_IMPL(__imp__sub_82A50558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,11
	cr6.compare<int32_t>(ctx.r5.s32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r5,120
	ctx.r11.s64 = ctx.r5.s64 * 120;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50570"))) PPC_WEAK_FUNC(sub_82A50570);
PPC_FUNC_IMPL(__imp__sub_82A50570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50574"))) PPC_WEAK_FUNC(sub_82A50574);
PPC_FUNC_IMPL(__imp__sub_82A50574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50578"))) PPC_WEAK_FUNC(sub_82A50578);
PPC_FUNC_IMPL(__imp__sub_82A50578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// blt cr6,0x82a5058c
	if (cr6.lt) goto loc_82A5058C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// blr 
	return;
loc_82A5058C:
	// mulli r11,r4,120
	ctx.r11.s64 = ctx.r4.s64 * 120;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50598"))) PPC_WEAK_FUNC(sub_82A50598);
PPC_FUNC_IMPL(__imp__sub_82A50598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82A505A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r27,7
	ctx.r27.s64 = 7;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A505C8:
	// cmpwi cr6,r26,255
	cr6.compare<int32_t>(ctx.r26.s32, 255, xer);
	// bne cr6,0x82a505f8
	if (!cr6.eq) goto loc_82A505F8;
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// bl 0x82a50350
	ctx.lr = 0x82A505D8;
	sub_82A50350(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// b 0x82a50608
	goto loc_82A50608;
loc_82A505F8:
	// cmpwi cr6,r26,11
	cr6.compare<int32_t>(ctx.r26.s32, 11, xer);
	// bge cr6,0x82a50608
	if (!cr6.lt) goto loc_82A50608;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// beq cr6,0x82a50620
	if (cr6.eq) goto loc_82A50620;
loc_82A50608:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x82a505c8
	if (cr6.lt) goto loc_82A505C8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82A50620:
	// mulli r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 * 120;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82a50350
	ctx.lr = 0x82A5062C;
	sub_82A50350(ctx, base);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// stw r30,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r30.u32);
	// stw r27,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r27.u32);
	// stfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stb r28,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50654"))) PPC_WEAK_FUNC(sub_82A50654);
PPC_FUNC_IMPL(__imp__sub_82A50654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50658"))) PPC_WEAK_FUNC(sub_82A50658);
PPC_FUNC_IMPL(__imp__sub_82A50658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82a5067c
	if (!cr6.eq) goto loc_82A5067C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// blt cr6,0x82a50698
	if (cr6.lt) goto loc_82A50698;
loc_82A5067C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82A50698:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A506A0"))) PPC_WEAK_FUNC(sub_82A506A0);
PPC_FUNC_IMPL(__imp__sub_82A506A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// ble cr6,0x82a506b4
	if (!cr6.gt) goto loc_82A506B4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A506B4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A506CC"))) PPC_WEAK_FUNC(sub_82A506CC);
PPC_FUNC_IMPL(__imp__sub_82A506CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A506D0"))) PPC_WEAK_FUNC(sub_82A506D0);
PPC_FUNC_IMPL(__imp__sub_82A506D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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

__attribute__((alias("__imp__sub_82A506E0"))) PPC_WEAK_FUNC(sub_82A506E0);
PPC_FUNC_IMPL(__imp__sub_82A506E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// ble cr6,0x82a506f4
	if (!cr6.gt) goto loc_82A506F4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a506fc
	goto loc_82A506FC;
loc_82A506F4:
	// bge cr6,0x82a50700
	if (!cr6.lt) goto loc_82A50700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A506FC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A50700:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// ble cr6,0x82a50714
	if (!cr6.gt) goto loc_82A50714;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a5071c
	goto loc_82A5071C;
loc_82A50714:
	// bge cr6,0x82a50720
	if (!cr6.lt) goto loc_82A50720;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A5071C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82A50720:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50738"))) PPC_WEAK_FUNC(sub_82A50738);
PPC_FUNC_IMPL(__imp__sub_82A50738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,30
	ctx.r11.s64 = 30;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// ble cr6,0x82a5074c
	if (!cr6.gt) goto loc_82A5074C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A5074C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// ble cr6,0x82a50768
	if (!cr6.gt) goto loc_82A50768;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_82A50768:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50774"))) PPC_WEAK_FUNC(sub_82A50774);
PPC_FUNC_IMPL(__imp__sub_82A50774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50778"))) PPC_WEAK_FUNC(sub_82A50778);
PPC_FUNC_IMPL(__imp__sub_82A50778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82a507a0
	if (!cr6.eq) goto loc_82A507A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A507A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A507C8"))) PPC_WEAK_FUNC(sub_82A507C8);
PPC_FUNC_IMPL(__imp__sub_82A507C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,600
	ctx.r11.s64 = 600;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// bgt cr6,0x82a507dc
	if (cr6.gt) goto loc_82A507DC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A507DC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A507F0"))) PPC_WEAK_FUNC(sub_82A507F0);
PPC_FUNC_IMPL(__imp__sub_82A507F0) {
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
	// bl 0x83740858
	ctx.lr = 0x82A50808;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A5082C"))) PPC_WEAK_FUNC(sub_82A5082C);
PPC_FUNC_IMPL(__imp__sub_82A5082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50830"))) PPC_WEAK_FUNC(sub_82A50830);
PPC_FUNC_IMPL(__imp__sub_82A50830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// stb r11,88(r8)
	PPC_STORE_U8(ctx.r8.u32 + 88, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5085C"))) PPC_WEAK_FUNC(sub_82A5085C);
PPC_FUNC_IMPL(__imp__sub_82A5085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50860"))) PPC_WEAK_FUNC(sub_82A50860);
PPC_FUNC_IMPL(__imp__sub_82A50860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a50870
	if (cr6.lt) goto loc_82A50870;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50870:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// bge cr6,0x82a50898
	if (!cr6.lt) goto loc_82A50898;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r9,20
	cr6.compare<int32_t>(ctx.r9.s32, 20, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82A50898:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A508A0"))) PPC_WEAK_FUNC(sub_82A508A0);
PPC_FUNC_IMPL(__imp__sub_82A508A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a508b0
	if (cr6.lt) goto loc_82A508B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A508B0:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82a508d8
	if (cr6.lt) goto loc_82A508D8;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_82A508D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A508E0"))) PPC_WEAK_FUNC(sub_82A508E0);
PPC_FUNC_IMPL(__imp__sub_82A508E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a508f0
	if (cr6.lt) goto loc_82A508F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A508F0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// adde r3,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50910"))) PPC_WEAK_FUNC(sub_82A50910);
PPC_FUNC_IMPL(__imp__sub_82A50910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a50920
	if (cr6.lt) goto loc_82A50920;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50920:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50930"))) PPC_WEAK_FUNC(sub_82A50930);
PPC_FUNC_IMPL(__imp__sub_82A50930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a50940
	if (cr6.lt) goto loc_82A50940;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50940:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// subfc r5,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// adde r3,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50964"))) PPC_WEAK_FUNC(sub_82A50964);
PPC_FUNC_IMPL(__imp__sub_82A50964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50968"))) PPC_WEAK_FUNC(sub_82A50968);
PPC_FUNC_IMPL(__imp__sub_82A50968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a50978
	if (cr6.lt) goto loc_82A50978;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50978:
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5098C"))) PPC_WEAK_FUNC(sub_82A5098C);
PPC_FUNC_IMPL(__imp__sub_82A5098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50990"))) PPC_WEAK_FUNC(sub_82A50990);
PPC_FUNC_IMPL(__imp__sub_82A50990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a509a0
	if (cr6.lt) goto loc_82A509A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a509bc
	goto loc_82A509BC;
loc_82A509A0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// adde r11,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A509BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a50a38
	if (cr6.eq) goto loc_82A50A38;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a509d8
	if (cr6.lt) goto loc_82A509D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a509f8
	goto loc_82A509F8;
loc_82A509D8:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// subfc r5,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// adde r11,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A509F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a50a30
	if (cr6.eq) goto loc_82A50A30;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// subfc r6,r8,r7
	xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// eqv r5,r8,r7
	ctx.r5.u64 = ~(ctx.r8.u64 ^ ctx.r7.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
loc_82A50A30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A50A38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50A40"))) PPC_WEAK_FUNC(sub_82A50A40);
PPC_FUNC_IMPL(__imp__sub_82A50A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a50a50
	if (cr6.lt) goto loc_82A50A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a50a70
	goto loc_82A50A70;
loc_82A50A50:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// subfc r5,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// adde r11,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A50A70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a50ae4
	if (cr6.eq) goto loc_82A50AE4;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// blt cr6,0x82a50a8c
	if (cr6.lt) goto loc_82A50A8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a50aa8
	goto loc_82A50AA8;
loc_82A50A8C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,20
	ctx.r11.s64 = 20;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r11,r8
	xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// adde r11,r9,r7
	temp.u8 = (ctx.r9.u32 + ctx.r7.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A50AA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82a50adc
	if (cr6.eq) goto loc_82A50ADC;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subfc r4,r8,r7
	xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r4.s64 = ctx.r7.s64 - ctx.r8.s64;
	// adde r3,r6,r5
	temp.u8 = (ctx.r6.u32 + ctx.r5.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82A50ADC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A50AE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50AEC"))) PPC_WEAK_FUNC(sub_82A50AEC);
PPC_FUNC_IMPL(__imp__sub_82A50AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50AF0"))) PPC_WEAK_FUNC(sub_82A50AF0);
PPC_FUNC_IMPL(__imp__sub_82A50AF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50AFC"))) PPC_WEAK_FUNC(sub_82A50AFC);
PPC_FUNC_IMPL(__imp__sub_82A50AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50B00"))) PPC_WEAK_FUNC(sub_82A50B00);
PPC_FUNC_IMPL(__imp__sub_82A50B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r6,r3,44
	ctx.r6.s64 = ctx.r3.s64 + 44;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_82A50B20:
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A50B2C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r8.u32);
	// bdnz 0x82a50b2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A50B2C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82a50b20
	if (cr6.lt) goto loc_82A50B20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50B54"))) PPC_WEAK_FUNC(sub_82A50B54);
PPC_FUNC_IMPL(__imp__sub_82A50B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50B58"))) PPC_WEAK_FUNC(sub_82A50B58);
PPC_FUNC_IMPL(__imp__sub_82A50B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,600
	cr6.compare<uint32_t>(ctx.r11.u32, 600, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50B7C"))) PPC_WEAK_FUNC(sub_82A50B7C);
PPC_FUNC_IMPL(__imp__sub_82A50B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50B80"))) PPC_WEAK_FUNC(sub_82A50B80);
PPC_FUNC_IMPL(__imp__sub_82A50B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A50B94:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bge cr6,0x82a50bb8
	if (!cr6.lt) goto loc_82A50BB8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// bge cr6,0x82a50bb0
	if (!cr6.lt) goto loc_82A50BB0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82a50bb8
	goto loc_82A50BB8;
loc_82A50BB0:
	// addi r10,r10,-100
	ctx.r10.s64 = ctx.r10.s64 + -100;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A50BB8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a50b94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A50B94;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50BC8"))) PPC_WEAK_FUNC(sub_82A50BC8);
PPC_FUNC_IMPL(__imp__sub_82A50BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,300
	cr6.compare<uint32_t>(ctx.r10.u32, 300, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r10,300
	ctx.r10.s64 = 300;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50BEC"))) PPC_WEAK_FUNC(sub_82A50BEC);
PPC_FUNC_IMPL(__imp__sub_82A50BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50BF0"))) PPC_WEAK_FUNC(sub_82A50BF0);
PPC_FUNC_IMPL(__imp__sub_82A50BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82a50c00
	if (cr6.lt) goto loc_82A50C00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50C00:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,300
	ctx.r10.s64 = 300;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// subfc r11,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50C1C"))) PPC_WEAK_FUNC(sub_82A50C1C);
PPC_FUNC_IMPL(__imp__sub_82A50C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50C20"))) PPC_WEAK_FUNC(sub_82A50C20);
PPC_FUNC_IMPL(__imp__sub_82A50C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r8,-1
	ctx.r8.s64 = -1;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// blt cr6,0x82a50c40
	if (cr6.lt) goto loc_82A50C40;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a50c4c
	goto loc_82A50C4C;
loc_82A50C40:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfc r11,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfze r11,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82A50C4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a50c70
	if (!cr6.eq) goto loc_82A50C70;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// blt cr6,0x82a50c40
	if (cr6.lt) goto loc_82A50C40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50C70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50C78"))) PPC_WEAK_FUNC(sub_82A50C78);
PPC_FUNC_IMPL(__imp__sub_82A50C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82a50ca8
	if (!cr6.eq) goto loc_82A50CA8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
loc_82A50CA8:
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50CCC"))) PPC_WEAK_FUNC(sub_82A50CCC);
PPC_FUNC_IMPL(__imp__sub_82A50CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50CD0"))) PPC_WEAK_FUNC(sub_82A50CD0);
PPC_FUNC_IMPL(__imp__sub_82A50CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50CFC"))) PPC_WEAK_FUNC(sub_82A50CFC);
PPC_FUNC_IMPL(__imp__sub_82A50CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50D00"))) PPC_WEAK_FUNC(sub_82A50D00);
PPC_FUNC_IMPL(__imp__sub_82A50D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A50D20:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x82a50d38
	if (!cr6.eq) goto loc_82A50D38;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82A50D38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a50d20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A50D20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50D44"))) PPC_WEAK_FUNC(sub_82A50D44);
PPC_FUNC_IMPL(__imp__sub_82A50D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50D48"))) PPC_WEAK_FUNC(sub_82A50D48);
PPC_FUNC_IMPL(__imp__sub_82A50D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82A50D54:
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// bge cr6,0x82a50d84
	if (!cr6.lt) goto loc_82A50D84;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A50D68:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82a50d7c
	if (!cr6.lt) goto loc_82A50D7C;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82A50D7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a50d68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A50D68;
loc_82A50D84:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x82a50d54
	if (cr6.lt) goto loc_82A50D54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50D98"))) PPC_WEAK_FUNC(sub_82A50D98);
PPC_FUNC_IMPL(__imp__sub_82A50D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82a50da8
	if (cr6.lt) goto loc_82A50DA8;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A50DA8:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
loc_82A50DC4:
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_82A50DD8:
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x82a50dfc
	if (cr6.eq) goto loc_82A50DFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82a50e1c
	if (!cr6.lt) goto loc_82A50E1C;
loc_82A50DFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x82a50dd8
	if (cr6.lt) goto loc_82A50DD8;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x82a50e1c
	if (!cr6.lt) goto loc_82A50E1C;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmplwi cr6,r7,12
	cr6.compare<uint32_t>(ctx.r7.u32, 12, xer);
	// blt cr6,0x82a50dc4
	if (cr6.lt) goto loc_82A50DC4;
loc_82A50E1C:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50E2C"))) PPC_WEAK_FUNC(sub_82A50E2C);
PPC_FUNC_IMPL(__imp__sub_82A50E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50E30"))) PPC_WEAK_FUNC(sub_82A50E30);
PPC_FUNC_IMPL(__imp__sub_82A50E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82a50e40
	if (cr6.lt) goto loc_82A50E40;
loc_82A50E38:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_82A50E40:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x82a50e38
	if (!cr6.lt) goto loc_82A50E38;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50E60"))) PPC_WEAK_FUNC(sub_82A50E60);
PPC_FUNC_IMPL(__imp__sub_82A50E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50E84"))) PPC_WEAK_FUNC(sub_82A50E84);
PPC_FUNC_IMPL(__imp__sub_82A50E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50E88"))) PPC_WEAK_FUNC(sub_82A50E88);
PPC_FUNC_IMPL(__imp__sub_82A50E88) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82a50ec0
	if (cr6.lt) goto loc_82A50EC0;
loc_82A50EA8:
	// li r3,255
	ctx.r3.s64 = 255;
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
loc_82A50EC0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,300
	ctx.r10.s64 = 300;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// subfc r11,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82a50ea8
	if (cr6.eq) goto loc_82A50EA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a50d98
	ctx.lr = 0x82A50EF0;
	sub_82A50D98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82a50f04
	if (cr6.lt) goto loc_82A50F04;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a50f08
	if (cr6.lt) goto loc_82A50F08;
loc_82A50F04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A50F08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82a50ea8
	if (!cr6.eq) goto loc_82A50EA8;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82A50F34"))) PPC_WEAK_FUNC(sub_82A50F34);
PPC_FUNC_IMPL(__imp__sub_82A50F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50F38"))) PPC_WEAK_FUNC(sub_82A50F38);
PPC_FUNC_IMPL(__imp__sub_82A50F38) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50F4C"))) PPC_WEAK_FUNC(sub_82A50F4C);
PPC_FUNC_IMPL(__imp__sub_82A50F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A50F50"))) PPC_WEAK_FUNC(sub_82A50F50);
PPC_FUNC_IMPL(__imp__sub_82A50F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// blt cr6,0x82a50f60
	if (cr6.lt) goto loc_82A50F60;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A50F60:
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// sraw r10,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50F70"))) PPC_WEAK_FUNC(sub_82A50F70);
PPC_FUNC_IMPL(__imp__sub_82A50F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82a50f84
	if (cr6.lt) goto loc_82A50F84;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a50f88
	if (cr6.lt) goto loc_82A50F88;
loc_82A50F84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A50F88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r9,91(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82a50fd0
	if (cr6.eq) goto loc_82A50FD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A50FA8:
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x82a51020
	if (cr6.eq) goto loc_82A51020;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r8,91(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a50fa8
	if (cr6.lt) goto loc_82A50FA8;
loc_82A50FD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A50FD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r11,91(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// lbz r11,91(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r8,80(r5)
	PPC_STORE_U8(ctx.r5.u32 + 80, ctx.r8.u8);
	// lbz r11,91(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r4,91(r3)
	PPC_STORE_U8(ctx.r3.u32 + 91, ctx.r4.u8);
	// blr 
	return;
loc_82A51020:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a50fd4
	goto loc_82A50FD4;
}

__attribute__((alias("__imp__sub_82A51028"))) PPC_WEAK_FUNC(sub_82A51028);
PPC_FUNC_IMPL(__imp__sub_82A51028) {
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
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,32324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32324);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82a51054
	if (!cr6.lt) goto loc_82A51054;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82A51054:
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

__attribute__((alias("__imp__sub_82A51068"))) PPC_WEAK_FUNC(sub_82A51068);
PPC_FUNC_IMPL(__imp__sub_82A51068) {
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
	// bl 0x82a50350
	ctx.lr = 0x82A51080;
	sub_82A50350(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,7
	ctx.r30.s64 = 7;
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r31.u32);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// bl 0x82a50350
	ctx.lr = 0x82A510A4;
	sub_82A50350(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r31.u32);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r10.u8);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
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

__attribute__((alias("__imp__sub_82A510E4"))) PPC_WEAK_FUNC(sub_82A510E4);
PPC_FUNC_IMPL(__imp__sub_82A510E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A510E8"))) PPC_WEAK_FUNC(sub_82A510E8);
PPC_FUNC_IMPL(__imp__sub_82A510E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A510F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// li r29,11
	ctx.r29.s64 = 11;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,7
	ctx.r27.s64 = 7;
	// lfs f0,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A51110:
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// bl 0x82a50350
	ctx.lr = 0x82A51118;
	sub_82A50350(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// bne 0x82a51110
	if (!cr0.eq) goto loc_82A51110;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51148"))) PPC_WEAK_FUNC(sub_82A51148);
PPC_FUNC_IMPL(__imp__sub_82A51148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82a51168
	if (cr6.eq) goto loc_82A51168;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82A51168:
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,300
	cr6.compare<uint32_t>(ctx.r11.u32, 300, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82A51184:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bge cr6,0x82a511a0
	if (!cr6.lt) goto loc_82A511A0;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82A511A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a51184
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A51184;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A511B8"))) PPC_WEAK_FUNC(sub_82A511B8);
PPC_FUNC_IMPL(__imp__sub_82A511B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,255
	ctx.r7.s64 = 255;
loc_82A511CC:
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// bge cr6,0x82a51204
	if (!cr6.lt) goto loc_82A51204;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82A511E4:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82a511f8
	if (!cr6.lt) goto loc_82A511F8;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82A511F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a511e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A511E4;
	// stw r7,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r7.u32);
loc_82A51204:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x82a511cc
	if (cr6.lt) goto loc_82A511CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5121C"))) PPC_WEAK_FUNC(sub_82A5121C);
PPC_FUNC_IMPL(__imp__sub_82A5121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A51220"))) PPC_WEAK_FUNC(sub_82A51220);
PPC_FUNC_IMPL(__imp__sub_82A51220) {
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
	// li r11,11
	ctx.r11.s64 = 11;
	// li r30,255
	ctx.r30.s64 = 255;
	// li r10,30
	ctx.r10.s64 = 30;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82A5126C:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x82a51284
	if (!cr6.lt) goto loc_82A51284;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// stb r31,88(r8)
	PPC_STORE_U8(ctx.r8.u32 + 88, ctx.r31.u8);
loc_82A51284:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a5126c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5126C;
	// stw r30,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r30.u32);
	// addi r3,r4,144
	ctx.r3.s64 = ctx.r4.s64 + 144;
	// stw r31,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r31.u32);
	// stw r30,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r30.u32);
	// stb r31,132(r4)
	PPC_STORE_U8(ctx.r4.u32 + 132, ctx.r31.u8);
	// stb r31,133(r4)
	PPC_STORE_U8(ctx.r4.u32 + 133, ctx.r31.u8);
	// stb r31,136(r4)
	PPC_STORE_U8(ctx.r4.u32 + 136, ctx.r31.u8);
	// stw r30,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r30.u32);
	// bl 0x82a50b00
	ctx.lr = 0x82A512B4;
	sub_82A50B00(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 212, ctx.r30.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,208(r4)
	PPC_STORE_U32(ctx.r4.u32 + 208, ctx.r11.u32);
	// stw r31,216(r4)
	PPC_STORE_U32(ctx.r4.u32 + 216, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A512E0"))) PPC_WEAK_FUNC(sub_82A512E0);
PPC_FUNC_IMPL(__imp__sub_82A512E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82A512E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r11,r30,91
	ctx.r11.s64 = ctx.r30.s64 + 91;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,20056(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A51314:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82A5132C:
	// addi r29,r8,10
	ctx.r29.s64 = ctx.r8.s64 + 10;
	// addi r9,r11,-91
	ctx.r9.s64 = ctx.r11.s64 + -91;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// stwx r5,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r6,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r6.u32);
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// stb r10,80(r27)
	PPC_STORE_U8(ctx.r27.u32 + 80, ctx.r10.u8);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82a5132c
	if (cr6.lt) goto loc_82A5132C;
	// stw r10,5(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5, ctx.r10.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r10.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r10.u32);
	// stw r10,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r10.u32);
	// stw r4,5(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5, ctx.r4.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82A51388:
	// addi r29,r8,10
	ctx.r29.s64 = ctx.r8.s64 + 10;
	// stwx r5,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// stwx r6,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r6.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r10,80(r28)
	PPC_STORE_U8(ctx.r28.u32 + 80, ctx.r10.u8);
	// blt cr6,0x82a51388
	if (cr6.lt) goto loc_82A51388;
	// stw r10,5(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5, ctx.r10.u32);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r10.u32);
	// stw r10,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r10.u32);
	// stw r10,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r10.u32);
	// stw r4,5(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5, ctx.r4.u32);
	// stfs f0,25(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 25, temp.u32);
	// stb r31,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r31.u8);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bge 0x82a51314
	if (!cr0.lt) goto loc_82A51314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a510e8
	ctx.lr = 0x82A513E4;
	sub_82A510E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A513F0"))) PPC_WEAK_FUNC(sub_82A513F0);
PPC_FUNC_IMPL(__imp__sub_82A513F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82A51400:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a51400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A51400;
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// bgt cr6,0x82a514bc
	if (cr6.gt) goto loc_82A514BC;
	// beq cr6,0x82a514a4
	if (cr6.eq) goto loc_82A514A4;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x82a5146c
	if (cr6.eq) goto loc_82A5146C;
	// cmpwi cr6,r4,25
	cr6.compare<int32_t>(ctx.r4.s32, 25, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r4,29
	cr6.compare<int32_t>(ctx.r4.s32, 29, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// stb r10,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82A5146C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// stb r10,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r10.u8);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
loc_82A514A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// blr 
	return;
loc_82A514BC:
	// cmpwi cr6,r4,38
	cr6.compare<int32_t>(ctx.r4.s32, 38, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A514D4"))) PPC_WEAK_FUNC(sub_82A514D4);
PPC_FUNC_IMPL(__imp__sub_82A514D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A514D8"))) PPC_WEAK_FUNC(sub_82A514D8);
PPC_FUNC_IMPL(__imp__sub_82A514D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stfs f0,1316(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1316, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stfs f0,1304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1304, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f13,1308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1308, temp.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stfs f13,1312(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1312, temp.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stb r8,1296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1296, ctx.r8.u8);
	// stb r30,1297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1297, ctx.r30.u8);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stb r30,1298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1298, ctx.r30.u8);
	// stb r30,1299(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1299, ctx.r30.u8);
	// stb r30,1300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1300, ctx.r30.u8);
	// stb r30,1301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1301, ctx.r30.u8);
	// bl 0x82a3b8b0
	ctx.lr = 0x82A51554;
	sub_82A3B8B0(ctx, base);
	// stb r30,1320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1320, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82A51570"))) PPC_WEAK_FUNC(sub_82A51570);
PPC_FUNC_IMPL(__imp__sub_82A51570) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A51598;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// bl 0x82a3e330
	ctx.lr = 0x82A515C8;
	sub_82A3E330(ctx, base);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51608"))) PPC_WEAK_FUNC(sub_82A51608);
PPC_FUNC_IMPL(__imp__sub_82A51608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A51610;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// stb r30,1996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1996, ctx.r30.u8);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stb r30,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r30.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// bl 0x82a514d8
	ctx.lr = 0x82A51658;
	sub_82A514D8(ctx, base);
	// addi r28,r31,1404
	ctx.r28.s64 = ctx.r31.s64 + 1404;
	// li r5,284
	ctx.r5.s64 = 284;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82A5166C;
	sub_831CDCF0(ctx, base);
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x826c3d80
	ctx.lr = 0x82A51674;
	sub_826C3D80(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r7,1681(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1681, ctx.r7.u8);
	// addi r11,r31,1720
	ctx.r11.s64 = ctx.r31.s64 + 1720;
	// addi r9,r31,1692
	ctx.r9.s64 = ctx.r31.s64 + 1692;
	// lfs f31,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f31,1668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// stfs f31,1672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1672, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f31,1676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1676, temp.u32);
	// stb r30,1688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1688, ctx.r30.u8);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// stb r30,1696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1696, ctx.r30.u8);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stb r30,1704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1704, ctx.r30.u8);
	// stb r30,1705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1705, ctx.r30.u8);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// stb r30,1716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1716, ctx.r30.u8);
	// stb r30,1717(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1717, ctx.r30.u8);
loc_82A516D8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a516d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A516D8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stb r9,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// li r7,11
	ctx.r7.s64 = 11;
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// addi r11,r31,1748
	ctx.r11.s64 = ctx.r31.s64 + 1748;
	// stb r30,1752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1752, ctx.r30.u8);
	// stb r30,1753(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1753, ctx.r30.u8);
	// stb r30,1754(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1754, ctx.r30.u8);
	// stb r30,1756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1756, ctx.r30.u8);
	// stb r30,1755(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1755, ctx.r30.u8);
	// stfs f31,1760(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// stfs f31,1768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stfs f31,1772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// stfs f31,1776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stfs f31,1764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// stw r7,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r7.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// stw r29,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r29.u32);
	// bl 0x82a51570
	ctx.lr = 0x82A51750;
	sub_82A51570(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,94
	ctx.r5.s64 = 94;
	// stw r30,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r30.u32);
	// stw r29,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r29.u32);
	// li r4,115
	ctx.r4.s64 = 115;
	// stw r6,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r6.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r5,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,1952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1952, ctx.r30.u8);
	// stfs f31,1956(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// stfs f31,1960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stfs f31,1964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1964, temp.u32);
	// stw r4,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r4.u32);
	// stb r30,1972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1972, ctx.r30.u8);
	// lfs f0,20056(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,1973(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1973, ctx.r30.u8);
	// stfs f31,1976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// stfs f31,1984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1984, temp.u32);
	// stw r29,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r29.u32);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// addi r11,r31,1936
	ctx.r11.s64 = ctx.r31.s64 + 1936;
	// stb r10,1992(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1992, ctx.r10.u8);
	// stb r10,1993(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1993, ctx.r10.u8);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r11,r31,1968
	ctx.r11.s64 = ctx.r31.s64 + 1968;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51804"))) PPC_WEAK_FUNC(sub_82A51804);
PPC_FUNC_IMPL(__imp__sub_82A51804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A51808"))) PPC_WEAK_FUNC(sub_82A51808);
PPC_FUNC_IMPL(__imp__sub_82A51808) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// li r5,88
	ctx.r5.s64 = 88;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// bl 0x831ce980
	ctx.lr = 0x82A5188C;
	sub_831CE980(ctx, base);
	// lfs f8,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,128(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f7,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,132(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f6,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,136(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82A518C8"))) PPC_WEAK_FUNC(sub_82A518C8);
PPC_FUNC_IMPL(__imp__sub_82A518C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A518D0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x82a3b9a8
	ctx.lr = 0x82A51920;
	sub_82A3B9A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a514d8
	ctx.lr = 0x82A51928;
	sub_82A514D8(ctx, base);
	// addi r3,r31,1404
	ctx.r3.s64 = ctx.r31.s64 + 1404;
	// bl 0x826c79a0
	ctx.lr = 0x82A51930;
	sub_826C79A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r30,1688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1688, ctx.r30.u8);
	// addi r10,r31,1692
	ctx.r10.s64 = ctx.r31.s64 + 1692;
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stb r30,1696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1696, ctx.r30.u8);
	// addi r11,r31,1720
	ctx.r11.s64 = ctx.r31.s64 + 1720;
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stb r30,1704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1704, ctx.r30.u8);
	// stb r30,1705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1705, ctx.r30.u8);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// stb r30,1716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1716, ctx.r30.u8);
	// stb r30,1717(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1717, ctx.r30.u8);
loc_82A5197C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a5197c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A5197C;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// li r29,255
	ctx.r29.s64 = 255;
	// stb r30,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r30.u8);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stb r9,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// li r7,11
	ctx.r7.s64 = 11;
	// stb r8,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r8.u8);
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// stfs f31,1760(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// stfs f31,1764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// addi r11,r31,1748
	ctx.r11.s64 = ctx.r31.s64 + 1748;
	// stfs f31,1768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stfs f31,1772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stfs f31,1776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stb r30,1752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1752, ctx.r30.u8);
	// stb r30,1753(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1753, ctx.r30.u8);
	// stb r30,1754(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1754, ctx.r30.u8);
	// stb r30,1756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1756, ctx.r30.u8);
	// stb r30,1755(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1755, ctx.r30.u8);
	// stfs f31,1760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// stfs f31,1768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stfs f31,1772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// stfs f31,1776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stfs f31,1764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// stw r7,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r7.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// stw r29,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r29.u32);
	// stfs f31,1800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// stfs f31,1804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1804, temp.u32);
	// stfs f31,1808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1808, temp.u32);
	// stfs f31,1812(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1812, temp.u32);
	// stfs f31,1816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1816, temp.u32);
	// stfs f31,1820(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// stfs f31,1920(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1920, temp.u32);
	// stfs f31,1924(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1924, temp.u32);
	// stfs f31,1928(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1928, temp.u32);
	// bl 0x82a51570
	ctx.lr = 0x82A51A38;
	sub_82A51570(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r9,94
	ctx.r9.s64 = 94;
	// stw r29,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r29.u32);
	// stw r8,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r8.u32);
	// addi r11,r31,1936
	ctx.r11.s64 = ctx.r31.s64 + 1936;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// stfs f31,1956(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// stfs f31,1960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stfs f31,1964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1964, temp.u32);
	// stb r30,1952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1952, ctx.r30.u8);
	// stfs f31,1956(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// li r6,115
	ctx.r6.s64 = 115;
	// stfs f31,1960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f31,1964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1964, temp.u32);
	// stw r30,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r30.u32);
	// stw r29,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r29.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r8,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r30,1952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1952, ctx.r30.u8);
	// stfs f31,1956(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// stfs f31,1960(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,1964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1964, temp.u32);
	// stfs f31,1976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// stw r6,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r6.u32);
	// stb r30,1972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1972, ctx.r30.u8);
	// stb r30,1973(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1973, ctx.r30.u8);
	// stfs f31,1976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// stfs f31,1984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1984, temp.u32);
	// stw r29,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r29.u32);
	// stb r11,1992(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1992, ctx.r11.u8);
	// stb r11,1993(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1993, ctx.r11.u8);
	// addi r11,r31,1968
	ctx.r11.s64 = ctx.r31.s64 + 1968;
	// stw r5,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r5.u32);
	// bl 0x82a51608
	ctx.lr = 0x82A51AD8;
	sub_82A51608(ctx, base);
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

__attribute__((alias("__imp__sub_82A51AE8"))) PPC_WEAK_FUNC(sub_82A51AE8);
PPC_FUNC_IMPL(__imp__sub_82A51AE8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// bl 0x825a5200
	ctx.lr = 0x82A51B40;
	sub_825A5200(ctx, base);
	// lbz r5,1296(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1296);
	// stb r5,1296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1296, ctx.r5.u8);
	// lbz r4,1297(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1297);
	// stb r4,1297(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1297, ctx.r4.u8);
	// lbz r3,1298(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1298);
	// stb r3,1298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1298, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,1299(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1299);
	// stb r11,1299(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1299, ctx.r11.u8);
	// lbz r10,1300(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1300);
	// stb r10,1300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1300, ctx.r10.u8);
	// lbz r9,1301(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1301);
	// stb r9,1301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1301, ctx.r9.u8);
	// lfs f0,1304(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1304, temp.u32);
	// lfs f13,1308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1308);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1308(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1308, temp.u32);
	// lfs f12,1312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1312(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// lfs f11,1316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1316);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// lbz r8,1320(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1320);
	// stb r8,1320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1320, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82A51BB4"))) PPC_WEAK_FUNC(sub_82A51BB4);
PPC_FUNC_IMPL(__imp__sub_82A51BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A51BB8"))) PPC_WEAK_FUNC(sub_82A51BB8);
PPC_FUNC_IMPL(__imp__sub_82A51BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,80
	ctx.r4.s64 = ctx.r4.s64 + 80;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lbz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r8,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r8.u8);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f12,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f9,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f8,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f7,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f6,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r6,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r6.u8);
	// lbz r5,57(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// stb r5,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r5.u8);
	// lfs f5,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,60(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f4,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f3,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,68(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lbz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// bl 0x82a51ae8
	ctx.lr = 0x82A51C88;
	sub_82A51AE8(ctx, base);
	// addi r4,r30,1404
	ctx.r4.s64 = ctx.r30.s64 + 1404;
	// addi r3,r31,1404
	ctx.r3.s64 = ctx.r31.s64 + 1404;
	// bl 0x827e1420
	ctx.lr = 0x82A51C94;
	sub_827E1420(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r30,1716
	ctx.r11.s64 = ctx.r30.s64 + 1716;
	// addi r10,r31,1716
	ctx.r10.s64 = ctx.r31.s64 + 1716;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r9,1688(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1688);
	// stb r9,1688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1688, ctx.r9.u8);
	// lwz r8,1692(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// stw r8,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r8.u32);
	// lwz r7,1696(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// stw r7,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r7.u32);
	// lwz r6,1700(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// stw r6,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r6.u32);
	// lwz r5,1704(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// stw r5,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r5.u32);
	// lwz r4,1708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// stw r4,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r4.u32);
	// lwz r3,1712(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r3,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r3.u32);
	// lwz r9,1716(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r9,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r9.u32);
loc_82A51CE4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a51ce4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82A51CE4;
	// lwz r10,1748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// addi r11,r30,1748
	ctx.r11.s64 = ctx.r30.s64 + 1748;
	// addi r11,r31,1748
	ctx.r11.s64 = ctx.r31.s64 + 1748;
	// addi r4,r30,1792
	ctx.r4.s64 = ctx.r30.s64 + 1792;
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// lbz r9,1752(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1752);
	// stb r9,1752(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1752, ctx.r9.u8);
	// lbz r8,1753(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1753);
	// stb r8,1753(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1753, ctx.r8.u8);
	// lbz r7,1754(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1754);
	// stb r7,1754(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1754, ctx.r7.u8);
	// lbz r6,1755(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1755);
	// stb r6,1755(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1755, ctx.r6.u8);
	// lbz r5,1756(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1756);
	// stb r5,1756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1756, ctx.r5.u8);
	// lfs f0,1760(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// lfs f13,1764(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1764(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// lfs f12,1768(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1768(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// lfs f11,1772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1772(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// lfs f10,1776(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1776(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// lwz r11,1780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// lwz r10,1784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1784);
	// stw r10,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r10.u32);
	// lwz r9,1788(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1788);
	// stw r9,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r9.u32);
	// bl 0x82a51808
	ctx.lr = 0x82A51D74;
	sub_82A51808(ctx, base);
	// lwz r8,1936(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// addi r11,r30,1936
	ctx.r11.s64 = ctx.r30.s64 + 1936;
	// addi r10,r31,1936
	ctx.r10.s64 = ctx.r31.s64 + 1936;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r8,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,1940(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r7,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r7.u32);
	// lwz r6,1944(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r6,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r6.u32);
	// lwz r5,1948(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// stw r5,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r5.u32);
	// lbz r4,1952(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1952);
	// stb r4,1952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1952, ctx.r4.u8);
	// lfs f9,1956(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1956(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// lfs f8,1960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1960(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// lfs f7,1964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1964(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1964, temp.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// lbz r10,1972(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1972);
	// stb r10,1972(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1972, ctx.r10.u8);
	// lbz r9,1973(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1973);
	// stb r9,1973(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1973, ctx.r9.u8);
	// lfs f6,1976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1976(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// lwz r8,1980(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	// stw r8,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r8.u32);
	// lfs f5,1984(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1984(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1984, temp.u32);
	// lwz r7,1988(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1988);
	// stw r7,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r7.u32);
	// lwz r6,1992(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// stw r6,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r6.u32);
	// lbz r5,1996(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1996);
	// stb r5,1996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1996, ctx.r5.u8);
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

__attribute__((alias("__imp__sub_82A51E28"))) PPC_WEAK_FUNC(sub_82A51E28);
PPC_FUNC_IMPL(__imp__sub_82A51E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82A51E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82a518c8
	ctx.lr = 0x82A51E48;
	sub_82A518C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r29.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r28,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r28.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,2008(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2008, ctx.r11.u8);
	// stb r11,2009(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2009, ctx.r11.u8);
	// stb r11,2010(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2010, ctx.r11.u8);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// beq cr6,0x82a51e80
	if (cr6.eq) goto loc_82A51E80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a51bb8
	ctx.lr = 0x82A51E7C;
	sub_82A51BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A51E80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2016, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51E94"))) PPC_WEAK_FUNC(sub_82A51E94);
PPC_FUNC_IMPL(__imp__sub_82A51E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A51E98"))) PPC_WEAK_FUNC(sub_82A51E98);
PPC_FUNC_IMPL(__imp__sub_82A51E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A51EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A51EAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82a521e0
	ctx.lr = 0x82A51EB8;
	sub_82A521E0(ctx, base);
loc_82A51EB8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82a51edc
	if (cr6.eq) goto loc_82A51EDC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a51eb8
	if (cr6.eq) goto loc_82A51EB8;
loc_82A51EDC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a51ef0
	if (cr6.eq) goto loc_82A51EF0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82a51eac
	if (cr6.lt) goto loc_82A51EAC;
loc_82A51EF0:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// beq cr6,0x82a51f00
	if (cr6.eq) goto loc_82A51F00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A51F00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51F08"))) PPC_WEAK_FUNC(sub_82A51F08);
PPC_FUNC_IMPL(__imp__sub_82A51F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A51F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A51F1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82a52210
	ctx.lr = 0x82A51F28;
	sub_82A52210(ctx, base);
loc_82A51F28:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82a51f4c
	if (cr6.eq) goto loc_82A51F4C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a51f28
	if (cr6.eq) goto loc_82A51F28;
loc_82A51F4C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a51f60
	if (cr6.eq) goto loc_82A51F60;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,122
	cr6.compare<int32_t>(ctx.r30.s32, 122, xer);
	// blt cr6,0x82a51f1c
	if (cr6.lt) goto loc_82A51F1C;
loc_82A51F60:
	// addi r11,r30,-122
	ctx.r11.s64 = ctx.r30.s64 + -122;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51F78"))) PPC_WEAK_FUNC(sub_82A51F78);
PPC_FUNC_IMPL(__imp__sub_82A51F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,13592
	ctx.r8.s64 = ctx.r11.s64 + 13592;
loc_82A51F84:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82A51F8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82a51fb0
	if (cr6.eq) goto loc_82A51FB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a51f8c
	if (cr6.eq) goto loc_82A51F8C;
loc_82A51FB0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a51fc8
	if (cr6.eq) goto loc_82A51FC8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x82a51f84
	if (cr6.lt) goto loc_82A51F84;
loc_82A51FC8:
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 & ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51FDC"))) PPC_WEAK_FUNC(sub_82A51FDC);
PPC_FUNC_IMPL(__imp__sub_82A51FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A51FE0"))) PPC_WEAK_FUNC(sub_82A51FE0);
PPC_FUNC_IMPL(__imp__sub_82A51FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,13624
	ctx.r8.s64 = ctx.r11.s64 + 13624;
loc_82A51FF0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82A51FF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82a5201c
	if (cr6.eq) goto loc_82A5201C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a51ff8
	if (cr6.eq) goto loc_82A51FF8;
loc_82A5201C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a52034
	if (cr6.eq) goto loc_82A52034;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// blt cr6,0x82a51ff0
	if (cr6.lt) goto loc_82A51FF0;
loc_82A52034:
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52040"))) PPC_WEAK_FUNC(sub_82A52040);
PPC_FUNC_IMPL(__imp__sub_82A52040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,13652
	ctx.r8.s64 = ctx.r11.s64 + 13652;
loc_82A52050:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82A52058:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82a5207c
	if (cr6.eq) goto loc_82A5207C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a52058
	if (cr6.eq) goto loc_82A52058;
loc_82A5207C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a52094
	if (cr6.eq) goto loc_82A52094;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82a52050
	if (cr6.lt) goto loc_82A52050;
loc_82A52094:
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A520A0"))) PPC_WEAK_FUNC(sub_82A520A0);
PPC_FUNC_IMPL(__imp__sub_82A520A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,13668
	ctx.r8.s64 = ctx.r11.s64 + 13668;
loc_82A520B0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82A520B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x82a520dc
	if (cr6.eq) goto loc_82A520DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a520b8
	if (cr6.eq) goto loc_82A520B8;
loc_82A520DC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82a520f4
	if (cr6.eq) goto loc_82A520F4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82a520b0
	if (cr6.lt) goto loc_82A520B0;
loc_82A520F4:
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52100"))) PPC_WEAK_FUNC(sub_82A52100);
PPC_FUNC_IMPL(__imp__sub_82A52100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A52108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A52114:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82a522b8
	ctx.lr = 0x82A52120;
	sub_82A522B8(ctx, base);
loc_82A52120:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82a52144
	if (cr6.eq) goto loc_82A52144;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a52120
	if (cr6.eq) goto loc_82A52120;
loc_82A52144:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a52158
	if (cr6.eq) goto loc_82A52158;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,94
	cr6.compare<int32_t>(ctx.r30.s32, 94, xer);
	// blt cr6,0x82a52114
	if (cr6.lt) goto loc_82A52114;
loc_82A52158:
	// addi r11,r30,-94
	ctx.r11.s64 = ctx.r30.s64 + -94;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A52170"))) PPC_WEAK_FUNC(sub_82A52170);
PPC_FUNC_IMPL(__imp__sub_82A52170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82A52178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A52184:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82a52360
	ctx.lr = 0x82A52190;
	sub_82A52360(ctx, base);
loc_82A52190:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82a521b4
	if (cr6.eq) goto loc_82A521B4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a52190
	if (cr6.eq) goto loc_82A52190;
loc_82A521B4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82a521c8
	if (cr6.eq) goto loc_82A521C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,111
	cr6.compare<int32_t>(ctx.r30.s32, 111, xer);
	// blt cr6,0x82a52184
	if (cr6.lt) goto loc_82A52184;
loc_82A521C8:
	// addi r11,r30,-111
	ctx.r11.s64 = ctx.r30.s64 + -111;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A521E0"))) PPC_WEAK_FUNC(sub_82A521E0);
PPC_FUNC_IMPL(__imp__sub_82A521E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13788
	ctx.r9.s64 = ctx.r11.s64 + 13788;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A521F4"))) PPC_WEAK_FUNC(sub_82A521F4);
PPC_FUNC_IMPL(__imp__sub_82A521F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A521F8"))) PPC_WEAK_FUNC(sub_82A521F8);
PPC_FUNC_IMPL(__imp__sub_82A521F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13796
	ctx.r9.s64 = ctx.r11.s64 + 13796;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A5220C"))) PPC_WEAK_FUNC(sub_82A5220C);
PPC_FUNC_IMPL(__imp__sub_82A5220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52210"))) PPC_WEAK_FUNC(sub_82A52210);
PPC_FUNC_IMPL(__imp__sub_82A52210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,13808
	ctx.r9.s64 = ctx.r11.s64 + 13808;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A52224"))) PPC_WEAK_FUNC(sub_82A52224);
PPC_FUNC_IMPL(__imp__sub_82A52224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A52228"))) PPC_WEAK_FUNC(sub_82A52228);
PPC_FUNC_IMPL(__imp__sub_82A52228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14296
	ctx.r9.s64 = ctx.r11.s64 + 14296;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

