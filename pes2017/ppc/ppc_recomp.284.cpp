#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83125CE0"))) PPC_WEAK_FUNC(sub_83125CE0);
PPC_FUNC_IMPL(__imp__sub_83125CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,-8080
	ctx.r10.s64 = ctx.r11.s64 + -8080;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r9.u32);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r8,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r8,588(r3)
	PPC_STORE_U8(ctx.r3.u32 + 588, ctx.r8.u8);
	// li r10,20
	ctx.r10.s64 = 20;
loc_83125D08:
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x83125d08
	if (!cr0.eq) goto loc_83125D08;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,580(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r9.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r6.u32);
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r5,584(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r5.u32);
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r4.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r11.u32);
	// stw r9,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r9.u32);
	// stw r10,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r10.u32);
	// stb r8,589(r3)
	PPC_STORE_U8(ctx.r3.u32 + 589, ctx.r8.u8);
	// stw r7,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125DA4"))) PPC_WEAK_FUNC(sub_83125DA4);
PPC_FUNC_IMPL(__imp__sub_83125DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125DA8"))) PPC_WEAK_FUNC(sub_83125DA8);
PPC_FUNC_IMPL(__imp__sub_83125DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// subfc r9,r10,r4
	xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 & ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83125DC8:
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83125dc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83125DC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125DD4"))) PPC_WEAK_FUNC(sub_83125DD4);
PPC_FUNC_IMPL(__imp__sub_83125DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83125DD8"))) PPC_WEAK_FUNC(sub_83125DD8);
PPC_FUNC_IMPL(__imp__sub_83125DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
loc_83125DF0:
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stb r9,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r9,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stb r9,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r7,-7680(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// stb r9,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r9.u8);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x83125df0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83125DF0;
	// stw r9,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125F88"))) PPC_WEAK_FUNC(sub_83125F88);
PPC_FUNC_IMPL(__imp__sub_83125F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,320
	ctx.r11.s64 = ctx.r3.s64 + 320;
loc_83125F90:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83125fb0
	if (cr6.eq) goto loc_83125FB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x83125f90
	if (cr6.lt) goto loc_83125F90;
	// blr 
	return;
loc_83125FB0:
	// stw r10,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125FB8"))) PPC_WEAK_FUNC(sub_83125FB8);
PPC_FUNC_IMPL(__imp__sub_83125FB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,140
	ctx.r11.s64 = ctx.r4.s64 + 140;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125FC8"))) PPC_WEAK_FUNC(sub_83125FC8);
PPC_FUNC_IMPL(__imp__sub_83125FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,560
	ctx.r11.s64 = ctx.r3.s64 + 560;
loc_83125FD0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83125ff4
	if (cr6.eq) goto loc_83125FF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83125fd0
	if (cr6.lt) goto loc_83125FD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83125FF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125FFC"))) PPC_WEAK_FUNC(sub_83125FFC);
PPC_FUNC_IMPL(__imp__sub_83125FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126000"))) PPC_WEAK_FUNC(sub_83126000);
PPC_FUNC_IMPL(__imp__sub_83126000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,589(r3)
	PPC_STORE_U8(ctx.r3.u32 + 589, ctx.r4.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312601C"))) PPC_WEAK_FUNC(sub_8312601C);
PPC_FUNC_IMPL(__imp__sub_8312601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126020"))) PPC_WEAK_FUNC(sub_83126020);
PPC_FUNC_IMPL(__imp__sub_83126020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// addi r5,r7,-8080
	ctx.r5.s64 = ctx.r7.s64 + -8080;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// subf r9,r3,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r3.s64;
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r11.u32);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stw r11,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r11.u32);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
	// stw r11,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r11.u32);
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, ctx.r11.u32);
	// stw r10,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r10.u32);
	// stw r8,576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 576, ctx.r8.u32);
	// stw r11,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r11.u32);
	// stw r11,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r11.u32);
	// addi r11,r3,320
	ctx.r11.s64 = ctx.r3.s64 + 320;
	// stb r10,588(r3)
	PPC_STORE_U8(ctx.r3.u32 + 588, ctx.r10.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,589(r3)
	PPC_STORE_U8(ctx.r3.u32 + 589, ctx.r10.u8);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r6,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r6.u32);
loc_831260B4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x831260b4
	if (!cr0.eq) goto loc_831260B4;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,580(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 580, ctx.r8.u32);
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// lwz r7,584(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r7.u32);
	// lwz r11,-7680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7680);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 584, ctx.r6.u32);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r5,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r5.u32);
	// stw r11,568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 568, ctx.r11.u32);
	// stw r4,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126144"))) PPC_WEAK_FUNC(sub_83126144);
PPC_FUNC_IMPL(__imp__sub_83126144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126148"))) PPC_WEAK_FUNC(sub_83126148);
PPC_FUNC_IMPL(__imp__sub_83126148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r10,r3,320
	ctx.r10.s64 = ctx.r3.s64 + 320;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_83126164:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83126194
	if (!cr6.eq) goto loc_83126194;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// bne cr6,0x83126184
	if (!cr6.eq) goto loc_83126184;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83126184:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x83126164
	if (cr6.lt) goto loc_83126164;
loc_83126194:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8312621c
	if (!cr6.gt) goto loc_8312621C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
loc_831261B4:
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,-20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,-16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r6,-16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwimi r8,r6,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r5,-12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwimi r8,r6,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lbz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// stb r5,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r5.u8);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// bdnz 0x831261b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831261B4;
loc_8312621C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwimi r11,r9,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r6,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// lbz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// stb r9,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r9.u8);
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x8312629c
	if (!cr6.lt) goto loc_8312629C;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312629c
	if (!cr6.eq) goto loc_8312629C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
loc_8312629C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831262A4"))) PPC_WEAK_FUNC(sub_831262A4);
PPC_FUNC_IMPL(__imp__sub_831262A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831262A8"))) PPC_WEAK_FUNC(sub_831262A8);
PPC_FUNC_IMPL(__imp__sub_831262A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831262B0;
	__savegprlr_25(ctx, base);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r8,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x831262f8
	if (cr0.eq) goto loc_831262F8;
loc_831262CC:
	// divw r7,r6,r11
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf. r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// twlgei r4,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x831262cc
	if (!cr0.eq) goto loc_831262CC;
loc_831262F8:
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x831263cc
	if (!cr6.lt) goto loc_831263CC;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x831263cc
	if (!cr6.gt) goto loc_831263CC;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83126314:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83126328
	if (!cr6.eq) goto loc_83126328;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83126328:
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r30,r1,-80
	ctx.r30.s64 = ctx.r1.s64 + -80;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r28,r1,-80
	ctx.r28.s64 = ctx.r1.s64 + -80;
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r26,12(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// bge cr6,0x831263ac
	if (!cr6.lt) goto loc_831263AC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// b 0x831263b8
	goto loc_831263B8;
loc_831263AC:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_831263B8:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x83126328
	if (!cr6.eq) goto loc_83126328;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// bgt 0x83126314
	if (cr0.gt) goto loc_83126314;
loc_831263CC:
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831263D0"))) PPC_WEAK_FUNC(sub_831263D0);
PPC_FUNC_IMPL(__imp__sub_831263D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x831263D8;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// li r18,2
	ctx.r18.s64 = 2;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x831263f8
	if (!cr6.gt) goto loc_831263F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_831263F8:
	// lbz r10,589(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 589);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126408
	if (cr6.eq) goto loc_83126408;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83126408:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83126418
	if (cr6.gt) goto loc_83126418;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126780
	if (cr6.eq) goto loc_83126780;
loc_83126418:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// bl 0x831ae380
	ctx.lr = 0x83126440;
	sub_831AE380(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// addi r20,r21,560
	ctx.r20.s64 = ctx.r21.s64 + 560;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// ori r23,r11,65534
	ctx.r23.u64 = ctx.r11.u64 | 65534;
	// ori r22,r10,65535
	ctx.r22.u64 = ctx.r10.u64 | 65535;
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83126468:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83126474:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831264b4
	if (!cr6.eq) goto loc_831264B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831264a4
	if (!cr6.eq) goto loc_831264A4;
	// stw r24,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831b0e08
	ctx.lr = 0x831264A0;
	sub_831B0E08(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_831264A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x83126474
	if (cr6.lt) goto loc_83126474;
loc_831264B4:
	// lwz r11,572(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 572);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83126524
	if (!cr6.gt) goto loc_83126524;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126524
	if (!cr6.eq) goto loc_83126524;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83126524
	if (cr6.eq) goto loc_83126524;
	// bl 0x830ff290
	ctx.lr = 0x831264DC;
	sub_830FF290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ff858
	ctx.lr = 0x831264E4;
	sub_830FF858(ctx, base);
	// lwz r30,320(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 320);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83126510
	if (cr6.eq) goto loc_83126510;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x83126524
	if (!cr6.eq) goto loc_83126524;
	// bl 0x830ff290
	ctx.lr = 0x83126500;
	sub_830FF290(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830ff858
	ctx.lr = 0x83126508;
	sub_830FF858(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bne cr6,0x83126524
	if (!cr6.eq) goto loc_83126524;
loc_83126510:
	// stw r24,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831b0e08
	ctx.lr = 0x83126520;
	sub_831B0E08(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83126524:
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// beq cr6,0x83126680
	if (cr6.eq) goto loc_83126680;
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
loc_83126530:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126680
	if (!cr6.eq) goto loc_83126680;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x8312658c
	if (!cr6.lt) goto loc_8312658C;
	// subf r11,r27,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r30,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 4;
	// bne cr6,0x83126610
	if (!cr6.eq) goto loc_83126610;
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// ble cr6,0x831265c4
	if (!cr6.gt) goto loc_831265C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8312658C;
	sub_831CC150(ctx, base);
loc_8312658C:
	// bne cr6,0x83126670
	if (!cr6.eq) goto loc_83126670;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83126670
	if (!cr6.lt) goto loc_83126670;
	// subf r11,r27,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r30,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 4;
	// bne cr6,0x83126610
	if (!cr6.eq) goto loc_83126610;
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bgt cr6,0x8312670c
	if (cr6.gt) goto loc_8312670C;
loc_831265C4:
	// subf r10,r27,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r27.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x83126610
	if (!cr6.gt) goto loc_83126610;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// subf r8,r10,r22
	ctx.r8.s64 = ctx.r22.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x831265f0
	if (cr6.lt) goto loc_831265F0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_831265F0:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x831265fc
	if (!cr6.lt) goto loc_831265FC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_831265FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ae380
	ctx.lr = 0x83126604;
	sub_831AE380(ctx, base);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_83126610:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83126638
	if (cr6.eq) goto loc_83126638;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_83126638:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8312666c
	if (cr6.eq) goto loc_8312666C;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// beq cr6,0x8312666c
	if (cr6.eq) goto loc_8312666C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831262a8
	ctx.lr = 0x8312666C;
	sub_831262A8(ctx, base);
loc_8312666C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_83126670:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x83126530
	if (!cr6.eq) goto loc_83126530;
loc_83126680:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831266a4
	if (!cr6.eq) goto loc_831266A4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831b0e08
	ctx.lr = 0x83126698;
	sub_831B0E08(ctx, base);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831266A4:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmplwi cr6,r19,20
	cr6.compare<uint32_t>(ctx.r19.u32, 20, xer);
	// blt cr6,0x83126468
	if (cr6.lt) goto loc_83126468;
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// srawi r8,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// subf r6,r21,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r21.s64;
	// li r7,20
	ctx.r7.s64 = 20;
loc_831266D0:
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x83126718
	if (!cr6.lt) goto loc_83126718;
	// lwzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x83126744
	goto loc_83126744;
loc_8312670C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x83126718;
	sub_831CC150(ctx, base);
loc_83126718:
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_83126744:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x831266d0
	if (!cr0.eq) goto loc_831266D0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83126768
	if (cr6.eq) goto loc_83126768;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83126768;
	sub_825952B8(ctx, base);
loc_83126768:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83126780
	if (cr6.eq) goto loc_83126780;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83126780;
	sub_825952B8(ctx, base);
loc_83126780:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126788"))) PPC_WEAK_FUNC(sub_83126788);
PPC_FUNC_IMPL(__imp__sub_83126788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83126790;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8312679C;
	sub_831156E8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,63108
	ctx.r10.u64 = ctx.r11.u64 | 63108;
	// lhzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,365
	cr6.compare<uint32_t>(ctx.r11.u32, 365, xer);
	// blt cr6,0x831267bc
	if (cr6.lt) goto loc_831267BC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x831267c4
	goto loc_831267C4;
loc_831267BC:
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_831267C4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83126884
	if (cr6.eq) goto loc_83126884;
	// lhz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 400);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83126884
	if (cr6.eq) goto loc_83126884;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_831267E0:
	// cmplwi cr6,r28,200
	cr6.compare<uint32_t>(ctx.r28.u32, 200, xer);
	// blt cr6,0x831267f0
	if (cr6.lt) goto loc_831267F0;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// b 0x831267f4
	goto loc_831267F4;
loc_831267F0:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
loc_831267F4:
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x83126870
	if (cr6.eq) goto loc_83126870;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311bf90
	ctx.lr = 0x8312680C;
	sub_8311BF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83126870
	if (cr6.eq) goto loc_83126870;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83126870
	if (!cr6.eq) goto loc_83126870;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8311bdf0
	ctx.lr = 0x83126834;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83126870
	if (cr6.eq) goto loc_83126870;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x83126894
	if (!cr6.eq) goto loc_83126894;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8311bdf0
	ctx.lr = 0x83126858;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83126870
	if (cr6.eq) goto loc_83126870;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x83126894
	if (!cr6.eq) goto loc_83126894;
loc_83126870:
	// lhz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 400);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x831267e0
	if (cr6.lt) goto loc_831267E0;
loc_83126884:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83126894:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831268A0"))) PPC_WEAK_FUNC(sub_831268A0);
PPC_FUNC_IMPL(__imp__sub_831268A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831268A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x831268BC;
	sub_831156E8(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,365
	cr6.compare<uint32_t>(ctx.r11.u32, 365, xer);
	// blt cr6,0x831268d8
	if (cr6.lt) goto loc_831268D8;
loc_831268CC:
	// li r3,55
	ctx.r3.s64 = 55;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_831268D8:
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add. r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x831268cc
	if (cr0.eq) goto loc_831268CC;
	// lhz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 400);
	// li r24,55
	ctx.r24.s64 = 55;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312699c
	if (cr6.eq) goto loc_8312699C;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_831268FC:
	// cmplwi cr6,r27,200
	cr6.compare<uint32_t>(ctx.r27.u32, 200, xer);
	// blt cr6,0x8312690c
	if (cr6.lt) goto loc_8312690C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// b 0x83126910
	goto loc_83126910;
loc_8312690C:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_83126910:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83126988
	if (cr6.eq) goto loc_83126988;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311bcc0
	ctx.lr = 0x83126928;
	sub_8311BCC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83126988
	if (cr6.eq) goto loc_83126988;
	// lhz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x83126944;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83126988
	if (cr6.eq) goto loc_83126988;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x8312695C;
	sub_8311C338(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83126978
	if (cr6.eq) goto loc_83126978;
	// lhz r10,78(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83126988
	if (!cr6.eq) goto loc_83126988;
loc_83126978:
	// cmpwi cr6,r24,55
	cr6.compare<int32_t>(ctx.r24.s32, 55, xer);
	// bne cr6,0x83126988
	if (!cr6.eq) goto loc_83126988;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r24,r11,28,20,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
loc_83126988:
	// lhz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 400);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x831268fc
	if (cr6.lt) goto loc_831268FC;
loc_8312699C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831269A8"))) PPC_WEAK_FUNC(sub_831269A8);
PPC_FUNC_IMPL(__imp__sub_831269A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x831269b8
	if (cr6.lt) goto loc_831269B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831269B8:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831269C4"))) PPC_WEAK_FUNC(sub_831269C4);
PPC_FUNC_IMPL(__imp__sub_831269C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831269C8"))) PPC_WEAK_FUNC(sub_831269C8);
PPC_FUNC_IMPL(__imp__sub_831269C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831269DC"))) PPC_WEAK_FUNC(sub_831269DC);
PPC_FUNC_IMPL(__imp__sub_831269DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831269E0"))) PPC_WEAK_FUNC(sub_831269E0);
PPC_FUNC_IMPL(__imp__sub_831269E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r8,21
	ctx.r8.s64 = 21;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831269F4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126a24
	if (cr6.eq) goto loc_83126A24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83126a30
	if (cr6.eq) goto loc_83126A30;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83126a30
	if (cr6.eq) goto loc_83126A30;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83126a30
	if (cr6.eq) goto loc_83126A30;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83126a30
	if (cr6.eq) goto loc_83126A30;
loc_83126A24:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// std r10,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r10.u64);
loc_83126A30:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126a60
	if (cr6.eq) goto loc_83126A60;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83126a6c
	if (cr6.eq) goto loc_83126A6C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83126a6c
	if (cr6.eq) goto loc_83126A6C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83126a6c
	if (cr6.eq) goto loc_83126A6C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83126a6c
	if (cr6.eq) goto loc_83126A6C;
loc_83126A60:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_83126A6C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126a9c
	if (cr6.eq) goto loc_83126A9C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83126aa8
	if (cr6.eq) goto loc_83126AA8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83126aa8
	if (cr6.eq) goto loc_83126AA8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83126aa8
	if (cr6.eq) goto loc_83126AA8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83126aa8
	if (cr6.eq) goto loc_83126AA8;
loc_83126A9C:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
loc_83126AA8:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83126ad8
	if (cr6.eq) goto loc_83126AD8;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83126ae4
	if (cr6.eq) goto loc_83126AE4;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83126ae4
	if (cr6.eq) goto loc_83126AE4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83126ae4
	if (cr6.eq) goto loc_83126AE4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x83126ae4
	if (cr6.eq) goto loc_83126AE4;
loc_83126AD8:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
loc_83126AE4:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x831269f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831269F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126AF0"))) PPC_WEAK_FUNC(sub_83126AF0);
PPC_FUNC_IMPL(__imp__sub_83126AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-7496
	ctx.r7.s64 = ctx.r11.s64 + -7496;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lhz r6,-7496(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7496);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_83126B10:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83126b28
	if (!cr6.eq) goto loc_83126B28;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83126b50
	goto loc_83126B50;
loc_83126B28:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x83126b48
	if (!cr6.eq) goto loc_83126B48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126b4c
	if (cr6.eq) goto loc_83126B4C;
loc_83126B48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126B4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126B50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126bc0
	if (!cr6.eq) goto loc_83126BC0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83126b74
	if (!cr6.eq) goto loc_83126B74;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83126b9c
	goto loc_83126B9C;
loc_83126B74:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x83126b94
	if (!cr6.eq) goto loc_83126B94;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126b98
	if (cr6.eq) goto loc_83126B98;
loc_83126B94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126B98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126B9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126be8
	if (!cr6.eq) goto loc_83126BE8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83126b10
	if (cr6.lt) goto loc_83126B10;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83126BC0:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x83126c0c
	if (!cr6.lt) goto loc_83126C0C;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83126BE8:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
loc_83126C0C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126C14"))) PPC_WEAK_FUNC(sub_83126C14);
PPC_FUNC_IMPL(__imp__sub_83126C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126C18"))) PPC_WEAK_FUNC(sub_83126C18);
PPC_FUNC_IMPL(__imp__sub_83126C18) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7496
	ctx.r30.s64 = ctx.r11.s64 + -7496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lhz r6,-7496(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7496);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83126C4C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83126c64
	if (!cr6.eq) goto loc_83126C64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x83126c8c
	goto loc_83126C8C;
loc_83126C64:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x83126c84
	if (!cr6.eq) goto loc_83126C84;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126c88
	if (cr6.eq) goto loc_83126C88;
loc_83126C84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126C88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126C8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83126d10
	if (cr6.eq) goto loc_83126D10;
	// cmpwi cr6,r5,21
	cr6.compare<int32_t>(ctx.r5.s32, 21, xer);
	// beq cr6,0x83126cac
	if (cr6.eq) goto loc_83126CAC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x83126d5c
	if (cr6.eq) goto loc_83126D5C;
loc_83126CAC:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x83126cf8
	if (cr6.eq) goto loc_83126CF8;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// bge cr6,0x83126ce8
	if (!cr6.lt) goto loc_83126CE8;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r11,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r9.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x831cee08
	ctx.lr = 0x83126CE8;
	sub_831CEE08(ctx, base);
loc_83126CE8:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// std r11,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r11.u64);
loc_83126CF8:
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
loc_83126D10:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83126d28
	if (!cr6.eq) goto loc_83126D28;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x83126d50
	goto loc_83126D50;
loc_83126D28:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x83126d48
	if (!cr6.eq) goto loc_83126D48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126d4c
	if (cr6.eq) goto loc_83126D4C;
loc_83126D48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126D4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126cf8
	if (!cr6.eq) goto loc_83126CF8;
loc_83126D5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83126c4c
	if (cr6.lt) goto loc_83126C4C;
	// b 0x83126cf8
	goto loc_83126CF8;
}

__attribute__((alias("__imp__sub_83126D70"))) PPC_WEAK_FUNC(sub_83126D70);
PPC_FUNC_IMPL(__imp__sub_83126D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83126D78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,21
	cr6.compare<int32_t>(ctx.r4.s32, 21, xer);
	// beq cr6,0x83126e34
	if (cr6.eq) goto loc_83126E34;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-7496
	ctx.r28.s64 = ctx.r11.s64 + -7496;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_83126DA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// bne cr6,0x83126dd4
	if (!cr6.eq) goto loc_83126DD4;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83126c18
	ctx.lr = 0x83126DC0;
	sub_83126C18(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// b 0x83126e20
	goto loc_83126E20;
loc_83126DD4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83126dec
	if (!cr6.eq) goto loc_83126DEC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x83126e14
	goto loc_83126E14;
loc_83126DEC:
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83126e0c
	if (!cr6.eq) goto loc_83126E0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126e10
	if (cr6.eq) goto loc_83126E10;
loc_83126E0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126E10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126E14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126e34
	if (!cr6.eq) goto loc_83126E34;
loc_83126E20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x83126da4
	if (cr6.lt) goto loc_83126DA4;
loc_83126E34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126E3C"))) PPC_WEAK_FUNC(sub_83126E3C);
PPC_FUNC_IMPL(__imp__sub_83126E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83126E40"))) PPC_WEAK_FUNC(sub_83126E40);
PPC_FUNC_IMPL(__imp__sub_83126E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,408
	ctx.r10.s64 = ctx.r3.s64 + 408;
loc_83126E50:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83126e68
	if (!cr6.eq) goto loc_83126E68;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83126e90
	goto loc_83126E90;
loc_83126E68:
	// lhz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bne cr6,0x83126e88
	if (!cr6.eq) goto loc_83126E88;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126e8c
	if (cr6.eq) goto loc_83126E8C;
loc_83126E88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126E8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126E90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126eb4
	if (!cr6.eq) goto loc_83126EB4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83126e50
	if (cr6.lt) goto loc_83126E50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83126EB4:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 + 404;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,408(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,412(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126EE8"))) PPC_WEAK_FUNC(sub_83126EE8);
PPC_FUNC_IMPL(__imp__sub_83126EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-7496
	ctx.r8.s64 = ctx.r11.s64 + -7496;
	// addi r10,r3,408
	ctx.r10.s64 = ctx.r3.s64 + 408;
	// lhz r6,-7496(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7496);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_83126F04:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83126f1c
	if (!cr6.eq) goto loc_83126F1C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83126f44
	goto loc_83126F44;
loc_83126F1C:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83126f3c
	if (!cr6.eq) goto loc_83126F3C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126f40
	if (cr6.eq) goto loc_83126F40;
loc_83126F3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126F40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126F44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83126f68
	if (!cr6.eq) goto loc_83126F68;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83126f90
	goto loc_83126F90;
loc_83126F68:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83126f88
	if (!cr6.eq) goto loc_83126F88;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83126f8c
	if (cr6.eq) goto loc_83126F8C;
loc_83126F88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83126F8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83126F90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83126fb0
	if (!cr6.eq) goto loc_83126FB0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83126f04
	if (cr6.lt) goto loc_83126F04;
	// blr 
	return;
loc_83126FB0:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 + 404;
	// stw r8,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r8.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126FE0"))) PPC_WEAK_FUNC(sub_83126FE0);
PPC_FUNC_IMPL(__imp__sub_83126FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-7496
	ctx.r9.s64 = ctx.r11.s64 + -7496;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127008
	if (!cr6.eq) goto loc_83127008;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83127030
	goto loc_83127030;
loc_83127008:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x83127028
	if (!cr6.eq) goto loc_83127028;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8312702c
	if (cr6.eq) goto loc_8312702C;
loc_83127028:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8312702C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83127030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,408
	ctx.r11.s64 = ctx.r3.s64 + 408;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83127048:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83127064
	if (!cr6.eq) goto loc_83127064;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8312708c
	goto loc_8312708C;
loc_83127064:
	// lhz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83127084
	if (!cr6.eq) goto loc_83127084;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x83127088
	if (cr6.eq) goto loc_83127088;
loc_83127084:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83127088:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8312708C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831270a4
	if (cr6.eq) goto loc_831270A4;
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// std r10,-4(r11)
	PPC_STORE_U64(ctx.r11.u32 + -4, ctx.r10.u64);
loc_831270A4:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831270c0
	if (!cr6.eq) goto loc_831270C0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x831270e8
	goto loc_831270E8;
loc_831270C0:
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x831270e0
	if (!cr6.eq) goto loc_831270E0;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x831270e4
	if (cr6.eq) goto loc_831270E4;
loc_831270E0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831270E4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_831270E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83127100
	if (cr6.eq) goto loc_83127100;
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
loc_83127100:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312711c
	if (!cr6.eq) goto loc_8312711C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x83127144
	goto loc_83127144;
loc_8312711C:
	// lhz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x8312713c
	if (!cr6.eq) goto loc_8312713C;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x83127140
	if (cr6.eq) goto loc_83127140;
loc_8312713C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83127140:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_83127144:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312715c
	if (cr6.eq) goto loc_8312715C;
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,20(r11)
	PPC_STORE_U64(ctx.r11.u32 + 20, ctx.r10.u64);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
loc_8312715C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83127178
	if (!cr6.eq) goto loc_83127178;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x831271a0
	goto loc_831271A0;
loc_83127178:
	// lhz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83127198
	if (!cr6.eq) goto loc_83127198;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8312719c
	if (cr6.eq) goto loc_8312719C;
loc_83127198:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8312719C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_831271A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831271b8
	if (cr6.eq) goto loc_831271B8;
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
loc_831271B8:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x83127048
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83127048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831271C4"))) PPC_WEAK_FUNC(sub_831271C4);
PPC_FUNC_IMPL(__imp__sub_831271C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831271C8"))) PPC_WEAK_FUNC(sub_831271C8);
PPC_FUNC_IMPL(__imp__sub_831271C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r3,788
	ctx.r11.s64 = ctx.r3.s64 + 788;
	// sth r9,788(r3)
	PPC_STORE_U16(ctx.r3.u32 + 788, ctx.r9.u16);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831271E4:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stbu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831271e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831271E4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831271F8"))) PPC_WEAK_FUNC(sub_831271F8);
PPC_FUNC_IMPL(__imp__sub_831271F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,788(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 788);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127200"))) PPC_WEAK_FUNC(sub_83127200);
PPC_FUNC_IMPL(__imp__sub_83127200) {
	PPC_FUNC_PROLOGUE();
	// sth r4,788(r3)
	PPC_STORE_U16(ctx.r3.u32 + 788, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127208"))) PPC_WEAK_FUNC(sub_83127208);
PPC_FUNC_IMPL(__imp__sub_83127208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,36(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,32(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 32);
	// addi r10,r3,796
	ctx.r10.s64 = ctx.r3.s64 + 796;
loc_83127220:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83127238
	if (!cr6.eq) goto loc_83127238;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83127260
	goto loc_83127260;
loc_83127238:
	// lhz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bne cr6,0x83127258
	if (!cr6.eq) goto loc_83127258;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8312725c
	if (cr6.eq) goto loc_8312725C;
loc_83127258:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312725C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83127260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127284
	if (!cr6.eq) goto loc_83127284;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83127220
	if (cr6.lt) goto loc_83127220;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83127284:
	// addi r11,r9,66
	ctx.r11.s64 = ctx.r9.s64 + 66;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831272B8"))) PPC_WEAK_FUNC(sub_831272B8);
PPC_FUNC_IMPL(__imp__sub_831272B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,66
	ctx.r11.s64 = ctx.r4.s64 + 66;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831272F0"))) PPC_WEAK_FUNC(sub_831272F0);
PPC_FUNC_IMPL(__imp__sub_831272F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831272F8;
	__savegprlr_26(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r3,1172
	ctx.r10.s64 = ctx.r3.s64 + 1172;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83127314:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r4.u32);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// sth r11,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r11.u16);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r5,r7,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// sth r11,40(r10)
	PPC_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r6.u32);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// sth r11,52(r10)
	PPC_STORE_U16(ctx.r10.u32 + 52, ctx.r11.u16);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r4.u32);
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r6.u32);
	// stwu r9,60(r10)
	ea = 60 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83127314
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83127314;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lis r7,-31750
	ctx.r7.s64 = -2080768000;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// std r10,1776(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1776, ctx.r10.u64);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// sth r26,1788(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1788, ctx.r26.u16);
	// stw r9,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r9.u32);
	// stw r11,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r11.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1796(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1796, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1804, ctx.r11.u32);
	// sth r26,1808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1808, ctx.r26.u16);
	// stw r9,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1816(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1816, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r11.u32);
	// sth r26,1828(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1828, ctx.r26.u16);
	// stw r9,1832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1832, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1836(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1836, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1844, ctx.r11.u32);
	// sth r26,1848(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1848, ctx.r26.u16);
	// stw r9,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1856(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1856, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1864, ctx.r11.u32);
	// sth r26,1868(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1868, ctx.r26.u16);
	// stw r9,1872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1872, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1876(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1876, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1884, ctx.r11.u32);
	// sth r26,1888(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1888, ctx.r26.u16);
	// stw r9,1892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1892, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1896(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1896, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r11.u32);
	// sth r26,1908(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1908, ctx.r26.u16);
	// stw r9,1912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1912, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1916(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1916, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
	// sth r26,1928(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1928, ctx.r26.u16);
	// stw r9,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1936(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1936, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1944, ctx.r11.u32);
	// sth r26,1948(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1948, ctx.r26.u16);
	// stw r9,1952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1952, ctx.r9.u32);
	// ld r11,-7496(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r11,1956(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1956, ctx.r11.u64);
	// lwz r11,-32640(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,1964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1964, ctx.r11.u32);
	// sth r26,1968(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1968, ctx.r26.u16);
	// stw r9,1972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1972, ctx.r9.u32);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83127504"))) PPC_WEAK_FUNC(sub_83127504);
PPC_FUNC_IMPL(__imp__sub_83127504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127508"))) PPC_WEAK_FUNC(sub_83127508);
PPC_FUNC_IMPL(__imp__sub_83127508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,1192
	ctx.r10.s64 = ctx.r11.s64 + 1192;
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwinm r9,r8,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
loc_83127524:
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127548
	if (!cr6.eq) goto loc_83127548;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8312754c
	if (cr6.eq) goto loc_8312754C;
loc_83127548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312754C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x8312757c
	if (!cr6.eq) goto loc_8312757C;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127580
	if (cr6.eq) goto loc_83127580;
loc_8312757C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127640
	if (!cr6.eq) goto loc_83127640;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x831275b0
	if (!cr6.eq) goto loc_831275B0;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831275b4
	if (cr6.eq) goto loc_831275B4;
loc_831275B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831275B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127648
	if (!cr6.eq) goto loc_83127648;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x831275e4
	if (!cr6.eq) goto loc_831275E4;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831275e8
	if (cr6.eq) goto loc_831275E8;
loc_831275E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831275E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127650
	if (!cr6.eq) goto loc_83127650;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127618
	if (!cr6.eq) goto loc_83127618;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8312761c
	if (cr6.eq) goto loc_8312761C;
loc_83127618:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312761C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127658
	if (!cr6.eq) goto loc_83127658;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r7,50
	cr6.compare<uint32_t>(ctx.r7.u32, 50, xer);
	// blt cr6,0x83127524
	if (cr6.lt) goto loc_83127524;
	// blr 
	return;
loc_83127640:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83127648:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83127650:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
loc_83127658:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127660"))) PPC_WEAK_FUNC(sub_83127660);
PPC_FUNC_IMPL(__imp__sub_83127660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,50
	cr6.compare<uint32_t>(ctx.r4.u32, 50, xer);
	// blt cr6,0x83127670
	if (cr6.lt) goto loc_83127670;
	// addi r3,r3,1176
	ctx.r3.s64 = ctx.r3.s64 + 1176;
	// blr 
	return;
loc_83127670:
	// addi r11,r4,98
	ctx.r11.s64 = ctx.r4.s64 + 98;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127688"))) PPC_WEAK_FUNC(sub_83127688);
PPC_FUNC_IMPL(__imp__sub_83127688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,49
	ctx.r10.s64 = 49;
	// addi r11,r3,1784
	ctx.r11.s64 = ctx.r3.s64 + 1784;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83127694:
	// lhz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -32);
	// sth r10,-20(r11)
	PPC_STORE_U16(ctx.r11.u32 + -20, ctx.r10.u16);
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r8,-16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// lwz r7,-28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// lwz r5,-24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stwu r5,-12(r11)
	ea = -12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83127694
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83127694;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r3,1176
	ctx.r11.s64 = ctx.r3.s64 + 1176;
	// sth r10,1176(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1176, ctx.r10.u16);
	// lwz r8,1180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,1180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1180, ctx.r9.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,1180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1180, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,1184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1184, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127700"))) PPC_WEAK_FUNC(sub_83127700);
PPC_FUNC_IMPL(__imp__sub_83127700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r10,r3,1780
	ctx.r10.s64 = ctx.r3.s64 + 1780;
	// lhz r7,32(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 32);
loc_83127714:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8312772c
	if (!cr6.eq) goto loc_8312772C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83127754
	goto loc_83127754;
loc_8312772C:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x8312774c
	if (!cr6.eq) goto loc_8312774C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83127750
	if (cr6.eq) goto loc_83127750;
loc_8312774C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127750:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83127754:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127778
	if (!cr6.eq) goto loc_83127778;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x83127714
	if (cr6.lt) goto loc_83127714;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83127778:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,1776
	ctx.r11.s64 = ctx.r10.s64 + 1776;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312779C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8312779c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312779C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831277B0"))) PPC_WEAK_FUNC(sub_831277B0);
PPC_FUNC_IMPL(__imp__sub_831277B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// addi r9,r3,1956
	ctx.r9.s64 = ctx.r3.s64 + 1956;
	// li r7,9
	ctx.r7.s64 = 9;
loc_831277B8:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r9,-24
	ctx.r11.s64 = ctx.r9.s64 + -24;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831277C8:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831277c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831277C8;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// bne 0x831277b8
	if (!cr0.eq) goto loc_831277B8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r3,1772
	ctx.r10.s64 = ctx.r3.s64 + 1772;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831277F0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831277f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831277F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127800"))) PPC_WEAK_FUNC(sub_83127800);
PPC_FUNC_IMPL(__imp__sub_83127800) {
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
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bge cr6,0x83127878
	if (!cr6.lt) goto loc_83127878;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// bge cr6,0x83127850
	if (!cr6.lt) goto loc_83127850;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r4,9
	xer.ca = ctx.r4.u32 <= 9;
	ctx.r11.s64 = 9 - ctx.r4.s64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// addi r4,r11,1796
	ctx.r4.s64 = ctx.r11.s64 + 1796;
	// bl 0x831cee08
	ctx.lr = 0x83127850;
	sub_831CEE08(ctx, base);
loc_83127850:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r11,-7496(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -7496);
	// std r11,1956(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1956, ctx.r11.u64);
	// lwz r11,-32640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32640);
	// sth r9,1968(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1968, ctx.r9.u16);
	// stw r8,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r8.u32);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
loc_83127878:
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

__attribute__((alias("__imp__sub_8312788C"))) PPC_WEAK_FUNC(sub_8312788C);
PPC_FUNC_IMPL(__imp__sub_8312788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127890"))) PPC_WEAK_FUNC(sub_83127890);
PPC_FUNC_IMPL(__imp__sub_83127890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r3,1976
	ctx.r11.s64 = ctx.r3.s64 + 1976;
	// li r4,58
	ctx.r4.s64 = 58;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
loc_831278A8:
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// rlwimi r5,r8,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,-7448(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r31,r5,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_831278D8:
	// stbx r10,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x831278d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831278D8;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x831278a8
	if (!cr0.eq) goto loc_831278A8;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// li r8,5
	ctx.r8.s64 = 5;
	// ld r11,-7496(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// stw r10,2448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2448, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r10,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r10.u32);
	// std r11,2440(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2440, ctx.r11.u64);
	// addi r11,r3,2518
	ctx.r11.s64 = ctx.r3.s64 + 2518;
	// ld r7,-7496(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r7,2456(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2456, ctx.r7.u64);
	// stw r10,2464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2464, ctx.r10.u32);
	// stw r10,2468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2468, ctx.r10.u32);
	// ld r8,-7496(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r8,2472(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2472, ctx.r8.u64);
	// stw r10,2480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2480, ctx.r10.u32);
	// stw r10,2484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2484, ctx.r10.u32);
	// ld r8,-7496(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r8,2488(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2488, ctx.r8.u64);
	// stw r10,2496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2496, ctx.r10.u32);
	// stw r10,2500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2500, ctx.r10.u32);
	// ld r8,-7496(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r8,2504(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2504, ctx.r8.u64);
	// stw r10,2512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2512, ctx.r10.u32);
	// stw r10,2516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2516, ctx.r10.u32);
loc_83127950:
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// lwz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r7.u32);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r7.u32);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// lwz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,14(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14, ctx.r6.u32);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,14(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14, ctx.r6.u32);
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// sth r10,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// lwz r5,26(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26);
	// rlwimi r5,r8,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r5.u32);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r4,r8,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,26(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26, ctx.r4.u32);
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// sth r10,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// lwz r3,38(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 38);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,38(r11)
	PPC_STORE_U32(ctx.r11.u32 + 38, ctx.r3.u32);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,38(r11)
	PPC_STORE_U32(ctx.r11.u32 + 38, ctx.r7.u32);
	// sth r10,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// lwz r6,50(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 50);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,50(r11)
	PPC_STORE_U32(ctx.r11.u32 + 50, ctx.r6.u32);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r5,r8,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,50(r11)
	PPC_STORE_U32(ctx.r11.u32 + 50, ctx.r5.u32);
	// sth r10,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r10.u16);
	// sth r10,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r10.u16);
	// sth r10,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// sth r10,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r10.u16);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// lwz r4,62(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 62);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,62(r11)
	PPC_STORE_U32(ctx.r11.u32 + 62, ctx.r4.u32);
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwimi r3,r8,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,62(r11)
	PPC_STORE_U32(ctx.r11.u32 + 62, ctx.r3.u32);
	// sth r10,66(r11)
	PPC_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// sth r10,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r10.u16);
	// sth r10,70(r11)
	PPC_STORE_U16(ctx.r11.u32 + 70, ctx.r10.u16);
	// sthu r10,72(r11)
	ea = 72 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83127950
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83127950;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127A74"))) PPC_WEAK_FUNC(sub_83127A74);
PPC_FUNC_IMPL(__imp__sub_83127A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127A78"))) PPC_WEAK_FUNC(sub_83127A78);
PPC_FUNC_IMPL(__imp__sub_83127A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,1984
	ctx.r10.s64 = ctx.r11.s64 + 1984;
	// lwz r7,-7448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwinm r8,r7,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
loc_83127A94:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x83127ab8
	if (!cr6.eq) goto loc_83127AB8;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127abc
	if (cr6.eq) goto loc_83127ABC;
loc_83127AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x83127aec
	if (!cr6.eq) goto loc_83127AEC;
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127af0
	if (cr6.eq) goto loc_83127AF0;
loc_83127AEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127AF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127b14
	if (!cr6.eq) goto loc_83127B14;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r9,58
	cr6.compare<uint32_t>(ctx.r9.u32, 58, xer);
	// blt cr6,0x83127a94
	if (cr6.lt) goto loc_83127A94;
	// blr 
	return;
loc_83127B14:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127B1C"))) PPC_WEAK_FUNC(sub_83127B1C);
PPC_FUNC_IMPL(__imp__sub_83127B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127B20"))) PPC_WEAK_FUNC(sub_83127B20);
PPC_FUNC_IMPL(__imp__sub_83127B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,58
	cr6.compare<uint32_t>(ctx.r4.u32, 58, xer);
	// blt cr6,0x83127b30
	if (cr6.lt) goto loc_83127B30;
	// addi r3,r3,1976
	ctx.r3.s64 = ctx.r3.s64 + 1976;
	// blr 
	return;
loc_83127B30:
	// addi r11,r4,247
	ctx.r11.s64 = ctx.r4.s64 + 247;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127B40"))) PPC_WEAK_FUNC(sub_83127B40);
PPC_FUNC_IMPL(__imp__sub_83127B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,58
	cr6.compare<uint32_t>(ctx.r5.u32, 58, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,247
	ctx.r11.s64 = ctx.r5.s64 + 247;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r7,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// lbz r6,5(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127B8C"))) PPC_WEAK_FUNC(sub_83127B8C);
PPC_FUNC_IMPL(__imp__sub_83127B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127B90"))) PPC_WEAK_FUNC(sub_83127B90);
PPC_FUNC_IMPL(__imp__sub_83127B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,2444
	ctx.r10.s64 = ctx.r11.s64 + 2444;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-7496
	ctx.r8.s64 = ctx.r11.s64 + -7496;
	// lhz r7,-7496(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7496);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_83127BB0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83127bc8
	if (!cr6.eq) goto loc_83127BC8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83127bf0
	goto loc_83127BF0;
loc_83127BC8:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83127be8
	if (!cr6.eq) goto loc_83127BE8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83127bec
	if (cr6.eq) goto loc_83127BEC;
loc_83127BE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127BEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83127BF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// blt cr6,0x83127bb0
	if (cr6.lt) goto loc_83127BB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127C14"))) PPC_WEAK_FUNC(sub_83127C14);
PPC_FUNC_IMPL(__imp__sub_83127C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127C18"))) PPC_WEAK_FUNC(sub_83127C18);
PPC_FUNC_IMPL(__imp__sub_83127C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// blt cr6,0x83127c28
	if (cr6.lt) goto loc_83127C28;
	// addi r3,r3,2440
	ctx.r3.s64 = ctx.r3.s64 + 2440;
	// blr 
	return;
loc_83127C28:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2440
	ctx.r3.s64 = ctx.r11.s64 + 2440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127C38"))) PPC_WEAK_FUNC(sub_83127C38);
PPC_FUNC_IMPL(__imp__sub_83127C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,2440
	ctx.r9.s64 = ctx.r11.s64 + 2440;
	// stw r10,2440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2440, ctx.r10.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,2444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2444, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,2448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2448, ctx.r7.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,2452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2452, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127C70"))) PPC_WEAK_FUNC(sub_83127C70);
PPC_FUNC_IMPL(__imp__sub_83127C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,2532
	ctx.r10.s64 = ctx.r11.s64 + 2532;
	// lwz r8,-7448(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwinm r9,r8,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
loc_83127C8C:
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127cb0
	if (!cr6.eq) goto loc_83127CB0;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127cb4
	if (cr6.eq) goto loc_83127CB4;
loc_83127CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127CB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127ce4
	if (!cr6.eq) goto loc_83127CE4;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127ce8
	if (cr6.eq) goto loc_83127CE8;
loc_83127CE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127CE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127ddc
	if (!cr6.eq) goto loc_83127DDC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127d18
	if (!cr6.eq) goto loc_83127D18;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127d1c
	if (cr6.eq) goto loc_83127D1C;
loc_83127D18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127D1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127de4
	if (!cr6.eq) goto loc_83127DE4;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127d4c
	if (!cr6.eq) goto loc_83127D4C;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127d50
	if (cr6.eq) goto loc_83127D50;
loc_83127D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127dec
	if (!cr6.eq) goto loc_83127DEC;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127d80
	if (!cr6.eq) goto loc_83127D80;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127d84
	if (cr6.eq) goto loc_83127D84;
loc_83127D80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127D84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127df4
	if (!cr6.eq) goto loc_83127DF4;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83127db4
	if (!cr6.eq) goto loc_83127DB4;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83127db8
	if (cr6.eq) goto loc_83127DB8;
loc_83127DB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83127DB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83127dfc
	if (!cr6.eq) goto loc_83127DFC;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// addi r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 6;
	// cmplwi cr6,r7,30
	cr6.compare<uint32_t>(ctx.r7.u32, 30, xer);
	// blt cr6,0x83127c8c
	if (cr6.lt) goto loc_83127C8C;
	// blr 
	return;
loc_83127DDC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83127DE4:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83127DEC:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
loc_83127DF4:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
loc_83127DFC:
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127E04"))) PPC_WEAK_FUNC(sub_83127E04);
PPC_FUNC_IMPL(__imp__sub_83127E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127E08"))) PPC_WEAK_FUNC(sub_83127E08);
PPC_FUNC_IMPL(__imp__sub_83127E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,30
	cr6.compare<uint32_t>(ctx.r4.u32, 30, xer);
	// blt cr6,0x83127e18
	if (cr6.lt) goto loc_83127E18;
	// addi r3,r3,2520
	ctx.r3.s64 = ctx.r3.s64 + 2520;
	// blr 
	return;
loc_83127E18:
	// addi r11,r4,210
	ctx.r11.s64 = ctx.r4.s64 + 210;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127E30"))) PPC_WEAK_FUNC(sub_83127E30);
PPC_FUNC_IMPL(__imp__sub_83127E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,30
	cr6.compare<uint32_t>(ctx.r5.u32, 30, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,210
	ctx.r11.s64 = ctx.r5.s64 + 210;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lhz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r3,6(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r3,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lhz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r9,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83127E8C"))) PPC_WEAK_FUNC(sub_83127E8C);
PPC_FUNC_IMPL(__imp__sub_83127E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83127E90"))) PPC_WEAK_FUNC(sub_83127E90);
PPC_FUNC_IMPL(__imp__sub_83127E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r3,2880
	ctx.r10.s64 = ctx.r3.s64 + 2880;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83127EA4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83127ea4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83127EA4;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,2932(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2932, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r11,2944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2944, ctx.r11.u32);
	// stw r11,2948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2948, ctx.r11.u32);
	// stw r10,2940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2940, ctx.r10.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,2952(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2952, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,2960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2960, ctx.r10.u32);
	// stw r11,2964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2964, ctx.r11.u32);
	// stw r11,2968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2968, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,2972(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2972, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,2980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2980, ctx.r10.u32);
	// stw r11,2984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2984, ctx.r11.u32);
	// stw r11,2988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2988, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,2992(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2992, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,3000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3000, ctx.r10.u32);
	// stw r11,3004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3004, ctx.r11.u32);
	// stw r11,3008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3008, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,3012(r3)
	PPC_STORE_U64(ctx.r3.u32 + 3012, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,3020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3020, ctx.r10.u32);
	// stw r11,3024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3024, ctx.r11.u32);
	// stw r11,3028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3028, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,3032(r3)
	PPC_STORE_U64(ctx.r3.u32 + 3032, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,3040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3040, ctx.r10.u32);
	// stw r11,3044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3044, ctx.r11.u32);
	// stw r11,3048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3048, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,3052(r3)
	PPC_STORE_U64(ctx.r3.u32 + 3052, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,3060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3060, ctx.r10.u32);
	// stw r11,3064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3064, ctx.r11.u32);
	// stw r11,3068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3068, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,3072(r3)
	PPC_STORE_U64(ctx.r3.u32 + 3072, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,3080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3080, ctx.r10.u32);
	// stw r11,3084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3084, ctx.r11.u32);
	// stw r11,3088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3088, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,3092(r3)
	PPC_STORE_U64(ctx.r3.u32 + 3092, ctx.r10.u64);
	// lwz r10,-32640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r10,3100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3100, ctx.r10.u32);
	// stw r11,3104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3104, ctx.r11.u32);
	// stw r11,3108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3108, ctx.r11.u32);
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,3112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 3112, ctx.r10.u64);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,-32640(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r9,3120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3120, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,3124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3124, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,3128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3128, ctx.r11.u32);
	// addi r11,r3,3136
	ctx.r11.s64 = ctx.r3.s64 + 3136;
	// lwz r7,3132(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3132);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r9,3132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3132, ctx.r9.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r6,r9,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,3132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3132, ctx.r6.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r5,3136(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3136);
	// rlwimi r9,r5,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,3136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3136, ctx.r9.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,3136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3136, ctx.r4.u32);
loc_83127FF4:
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r6,r9,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r6,r9,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r8,r9,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r7,r9,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r6,r9,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r5,r9,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r9,-7448(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7448);
	// rlwimi r4,r9,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stwu r4,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83127ff4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83127FF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128130"))) PPC_WEAK_FUNC(sub_83128130);
PPC_FUNC_IMPL(__imp__sub_83128130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// blt cr6,0x83128140
	if (cr6.lt) goto loc_83128140;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83128140:
	// addi r11,r4,720
	ctx.r11.s64 = ctx.r4.s64 + 720;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128150"))) PPC_WEAK_FUNC(sub_83128150);
PPC_FUNC_IMPL(__imp__sub_83128150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,720
	ctx.r11.s64 = ctx.r4.s64 + 720;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
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

__attribute__((alias("__imp__sub_8312817C"))) PPC_WEAK_FUNC(sub_8312817C);
PPC_FUNC_IMPL(__imp__sub_8312817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128180"))) PPC_WEAK_FUNC(sub_83128180);
PPC_FUNC_IMPL(__imp__sub_83128180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,2956
	ctx.r10.s64 = ctx.r11.s64 + 2956;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r11,-7496
	ctx.r9.s64 = ctx.r11.s64 + -7496;
	// lhz r8,-7496(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7496);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_831281A0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831281b8
	if (!cr6.eq) goto loc_831281B8;
	// lwz r11,-20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x831281e0
	goto loc_831281E0;
loc_831281B8:
	// lhz r5,-24(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -24);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x831281d8
	if (!cr6.eq) goto loc_831281D8;
	// lwz r11,-20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831281dc
	if (cr6.eq) goto loc_831281DC;
loc_831281D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831281DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831281E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83128204
	if (!cr6.eq) goto loc_83128204;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x8312822c
	goto loc_8312822C;
loc_83128204:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83128224
	if (!cr6.eq) goto loc_83128224;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83128228
	if (cr6.eq) goto loc_83128228;
loc_83128224:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8312822C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83128334
	if (!cr6.eq) goto loc_83128334;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83128250
	if (!cr6.eq) goto loc_83128250;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83128278
	goto loc_83128278;
loc_83128250:
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83128270
	if (!cr6.eq) goto loc_83128270;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83128274
	if (cr6.eq) goto loc_83128274;
loc_83128270:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128274:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83128278:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312833c
	if (!cr6.eq) goto loc_8312833C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8312829c
	if (!cr6.eq) goto loc_8312829C;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x831282c4
	goto loc_831282C4;
loc_8312829C:
	// lhz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x831282bc
	if (!cr6.eq) goto loc_831282BC;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831282c0
	if (cr6.eq) goto loc_831282C0;
loc_831282BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831282C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831282C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83128344
	if (!cr6.eq) goto loc_83128344;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831282e8
	if (!cr6.eq) goto loc_831282E8;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83128310
	goto loc_83128310;
loc_831282E8:
	// lhz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83128308
	if (!cr6.eq) goto loc_83128308;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8312830c
	if (cr6.eq) goto loc_8312830C;
loc_83128308:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312830C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83128310:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312834c
	if (!cr6.eq) goto loc_8312834C;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// blt cr6,0x831281a0
	if (cr6.lt) goto loc_831281A0;
	// blr 
	return;
loc_83128334:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_8312833C:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83128344:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
loc_8312834C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128354"))) PPC_WEAK_FUNC(sub_83128354);
PPC_FUNC_IMPL(__imp__sub_83128354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128358"))) PPC_WEAK_FUNC(sub_83128358);
PPC_FUNC_IMPL(__imp__sub_83128358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// blt cr6,0x83128368
	if (cr6.lt) goto loc_83128368;
	// addi r3,r3,2932
	ctx.r3.s64 = ctx.r3.s64 + 2932;
	// blr 
	return;
loc_83128368:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2932
	ctx.r3.s64 = ctx.r11.s64 + 2932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128380"))) PPC_WEAK_FUNC(sub_83128380);
PPC_FUNC_IMPL(__imp__sub_83128380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// addi r9,r3,3112
	ctx.r9.s64 = ctx.r3.s64 + 3112;
	// li r7,9
	ctx.r7.s64 = 9;
loc_83128388:
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r9,-24
	ctx.r11.s64 = ctx.r9.s64 + -24;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83128398:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83128398
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128398;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// bne 0x83128388
	if (!cr0.eq) goto loc_83128388;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r3,2928
	ctx.r10.s64 = ctx.r3.s64 + 2928;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831283C0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831283c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831283C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831283D0"))) PPC_WEAK_FUNC(sub_831283D0);
PPC_FUNC_IMPL(__imp__sub_831283D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x831283e4
	if (cr6.lt) goto loc_831283E4;
	// lwz r11,3132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3132);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831283E4:
	// addi r11,r5,783
	ctx.r11.s64 = ctx.r5.s64 + 783;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831283F8"))) PPC_WEAK_FUNC(sub_831283F8);
PPC_FUNC_IMPL(__imp__sub_831283F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,783
	ctx.r11.s64 = ctx.r5.s64 + 783;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128410"))) PPC_WEAK_FUNC(sub_83128410);
PPC_FUNC_IMPL(__imp__sub_83128410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x83128424
	if (cr6.lt) goto loc_83128424;
	// blr 
	return;
loc_83128424:
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r6,-7448(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7448);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
loc_83128440:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,785
	ctx.r11.s64 = ctx.r11.s64 + 785;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x83128470
	if (!cr6.eq) goto loc_83128470;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83128474
	if (cr6.eq) goto loc_83128474;
loc_83128470:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128474:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,786
	ctx.r11.s64 = ctx.r11.s64 + 786;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x831284b0
	if (!cr6.eq) goto loc_831284B0;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831284b4
	if (cr6.eq) goto loc_831284B4;
loc_831284B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831284B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83128594
	if (!cr6.eq) goto loc_83128594;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,787
	ctx.r11.s64 = ctx.r11.s64 + 787;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x831284f0
	if (!cr6.eq) goto loc_831284F0;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831284f4
	if (cr6.eq) goto loc_831284F4;
loc_831284F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831284F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312859c
	if (!cr6.eq) goto loc_8312859C;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,788
	ctx.r11.s64 = ctx.r11.s64 + 788;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x83128530
	if (!cr6.eq) goto loc_83128530;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83128534
	if (cr6.eq) goto loc_83128534;
loc_83128530:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128534:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831285a4
	if (!cr6.eq) goto loc_831285A4;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,789
	ctx.r11.s64 = ctx.r11.s64 + 789;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r11,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x83128570
	if (!cr6.eq) goto loc_83128570;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83128574
	if (cr6.eq) goto loc_83128574;
loc_83128570:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128574:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831285ac
	if (!cr6.eq) goto loc_831285AC;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x83128440
	if (cr6.lt) goto loc_83128440;
	// blr 
	return;
loc_83128594:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_8312859C:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_831285A4:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
loc_831285AC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831285B4"))) PPC_WEAK_FUNC(sub_831285B4);
PPC_FUNC_IMPL(__imp__sub_831285B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831285B8"))) PPC_WEAK_FUNC(sub_831285B8);
PPC_FUNC_IMPL(__imp__sub_831285B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x831285d0
	if (cr6.lt) goto loc_831285D0;
loc_831285C0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-7448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7448);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_831285D0:
	// cmplwi cr6,r5,10
	cr6.compare<uint32_t>(ctx.r5.u32, 10, xer);
	// bge cr6,0x831285c0
	if (!cr6.lt) goto loc_831285C0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,785
	ctx.r10.s64 = ctx.r11.s64 + 785;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831285FC"))) PPC_WEAK_FUNC(sub_831285FC);
PPC_FUNC_IMPL(__imp__sub_831285FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128600"))) PPC_WEAK_FUNC(sub_83128600);
PPC_FUNC_IMPL(__imp__sub_83128600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x831286cc
	if (!cr6.lt) goto loc_831286CC;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r9,r4,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r7,785
	ctx.r8.s64 = ctx.r7.s64 + 785;
loc_83128624:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83128650
	if (!cr6.eq) goto loc_83128650;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83128654
	if (cr6.eq) goto loc_83128654;
loc_83128650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128654:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831286cc
	if (!cr6.eq) goto loc_831286CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x83128624
	if (cr6.lt) goto loc_83128624;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,9
	ctx.r11.s64 = 9;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83128678:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r10,784
	ctx.r6.s64 = ctx.r10.s64 + 784;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwimi r6,r31,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwimi r31,r9,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// bdnz 0x83128678
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128678;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,3140
	ctx.r10.s64 = ctx.r11.s64 + 3140;
	// stw r4,3140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3140, ctx.r4.u32);
loc_831286CC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831286D4"))) PPC_WEAK_FUNC(sub_831286D4);
PPC_FUNC_IMPL(__imp__sub_831286D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831286D8"))) PPC_WEAK_FUNC(sub_831286D8);
PPC_FUNC_IMPL(__imp__sub_831286D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x831269e0
	ctx.lr = 0x83128710;
	sub_831269E0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,400
	ctx.r11.s64 = ctx.r3.s64 + 400;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83128720:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stwu r7,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83128720
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128720;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r31,788
	ctx.r11.s64 = ctx.r31.s64 + 788;
	// sth r8,788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 788, ctx.r8.u16);
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83128748:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stbu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83128748
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831272f0
	ctx.lr = 0x83128760;
	sub_831272F0(ctx, base);
	// bl 0x83127890
	ctx.lr = 0x83128764;
	sub_83127890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83127e90
	ctx.lr = 0x8312876C;
	sub_83127E90(ctx, base);
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

__attribute__((alias("__imp__sub_83128780"))) PPC_WEAK_FUNC(sub_83128780);
PPC_FUNC_IMPL(__imp__sub_83128780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x831269e0
	ctx.lr = 0x831287BC;
	sub_831269E0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,400
	ctx.r11.s64 = ctx.r3.s64 + 400;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831287CC:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stwu r7,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831287cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831287CC;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r31,788
	ctx.r11.s64 = ctx.r31.s64 + 788;
	// sth r8,788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 788, ctx.r8.u16);
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831287F4:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stbu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831287f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831287F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831272f0
	ctx.lr = 0x8312880C;
	sub_831272F0(ctx, base);
	// bl 0x83127890
	ctx.lr = 0x83128810;
	sub_83127890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83127e90
	ctx.lr = 0x83128818;
	sub_83127E90(ctx, base);
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

__attribute__((alias("__imp__sub_8312882C"))) PPC_WEAK_FUNC(sub_8312882C);
PPC_FUNC_IMPL(__imp__sub_8312882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128830"))) PPC_WEAK_FUNC(sub_83128830);
PPC_FUNC_IMPL(__imp__sub_83128830) {
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
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83126c18
	ctx.lr = 0x83128854;
	sub_83126C18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83126fe0
	ctx.lr = 0x83128860;
	sub_83126FE0(ctx, base);
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

__attribute__((alias("__imp__sub_83128878"))) PPC_WEAK_FUNC(sub_83128878);
PPC_FUNC_IMPL(__imp__sub_83128878) {
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
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// sth r9,788(r3)
	PPC_STORE_U16(ctx.r3.u32 + 788, ctx.r9.u16);
	// addi r11,r3,788
	ctx.r11.s64 = ctx.r3.s64 + 788;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
loc_831288C0:
	// ld r10,-7496(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -7496);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// stbu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831288c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831288C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83127890
	ctx.lr = 0x831288D8;
	sub_83127890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83127e90
	ctx.lr = 0x831288E0;
	sub_83127E90(ctx, base);
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

__attribute__((alias("__imp__sub_831288F4"))) PPC_WEAK_FUNC(sub_831288F4);
PPC_FUNC_IMPL(__imp__sub_831288F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831288F8"))) PPC_WEAK_FUNC(sub_831288F8);
PPC_FUNC_IMPL(__imp__sub_831288F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r5,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
	// addi r10,r3,1180
	ctx.r10.s64 = ctx.r3.s64 + 1180;
loc_83128908:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,14,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312892c
	if (!cr6.eq) goto loc_8312892C;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83128930
	if (cr6.eq) goto loc_83128930;
loc_8312892C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128930:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83128954
	if (cr6.eq) goto loc_83128954;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8312896c
	if (cr6.eq) goto loc_8312896C;
	// lhz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x8312896c
	if (cr6.eq) goto loc_8312896C;
loc_83128954:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// blt cr6,0x83128908
	if (cr6.lt) goto loc_83128908;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312896C:
	// addi r11,r9,98
	ctx.r11.s64 = ctx.r9.s64 + 98;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831289B8"))) PPC_WEAK_FUNC(sub_831289B8);
PPC_FUNC_IMPL(__imp__sub_831289B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831289C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lhz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-7496
	ctx.r29.s64 = ctx.r11.s64 + -7496;
	// lwz r27,172(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lhz r9,-7496(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7496);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831289fc
	if (!cr6.eq) goto loc_831289FC;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83128a20
	goto loc_83128A20;
loc_831289FC:
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r25,16
	ctx.r8.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x83128a18
	if (!cr6.eq) goto loc_83128A18;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83128a1c
	if (cr6.eq) goto loc_83128A1C;
loc_83128A18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128A1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83128A20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83128b08
	if (!cr6.eq) goto loc_83128B08;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,1780
	ctx.r31.s64 = ctx.r28.s64 + 1780;
loc_83128A34:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83128a4c
	if (!cr6.eq) goto loc_83128A4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x83128a74
	goto loc_83128A74;
loc_83128A4C:
	// lhz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83128a6c
	if (!cr6.eq) goto loc_83128A6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83128a70
	if (cr6.eq) goto loc_83128A70;
loc_83128A6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128A70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83128A74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83128b08
	if (!cr6.eq) goto loc_83128B08;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x83128a98
	if (!cr6.eq) goto loc_83128A98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x83128ac0
	goto loc_83128AC0;
loc_83128A98:
	// lhz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// clrlwi r8,r25,16
	ctx.r8.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83128ab8
	if (!cr6.eq) goto loc_83128AB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83128abc
	if (cr6.eq) goto loc_83128ABC;
loc_83128AB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128ABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83128AC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83128af8
	if (cr6.eq) goto loc_83128AF8;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83128ae4
	if (cr6.eq) goto loc_83128AE4;
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x83128af8
	if (!cr6.eq) goto loc_83128AF8;
loc_83128AE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83127800
	ctx.lr = 0x83128AF0;
	sub_83127800(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_83128AF8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// blt cr6,0x83128a34
	if (cr6.lt) goto loc_83128A34;
loc_83128B08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128B10"))) PPC_WEAK_FUNC(sub_83128B10);
PPC_FUNC_IMPL(__imp__sub_83128B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r5,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
	// addi r10,r3,2520
	ctx.r10.s64 = ctx.r3.s64 + 2520;
loc_83128B20:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83128b44
	if (!cr6.eq) goto loc_83128B44;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83128b48
	if (cr6.eq) goto loc_83128B48;
loc_83128B44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83128B48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83128b6c
	if (!cr6.eq) goto loc_83128B6C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// blt cr6,0x83128b20
	if (cr6.lt) goto loc_83128B20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83128B6C:
	// addi r11,r9,210
	ctx.r11.s64 = ctx.r9.s64 + 210;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r9,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r10,4(r4)
	PPC_STORE_U16(ctx.r4.u32 + 4, ctx.r10.u16);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r9,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r9.u16);
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// sth r8,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r8.u16);
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// sth r7,10(r4)
	PPC_STORE_U16(ctx.r4.u32 + 10, ctx.r7.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128BC4"))) PPC_WEAK_FUNC(sub_83128BC4);
PPC_FUNC_IMPL(__imp__sub_83128BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83128BC8"))) PPC_WEAK_FUNC(sub_83128BC8);
PPC_FUNC_IMPL(__imp__sub_83128BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83128BD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,21
	ctx.r7.s64 = 21;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_83128BFC:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// ld r8,-7496(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r8,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r8.u64);
	// stwu r7,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83128bfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128BFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r10,r3,400
	ctx.r10.s64 = ctx.r3.s64 + 400;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83128C20:
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// ld r8,-7496(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r8,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r8.u64);
	// stwu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83128c20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128C20;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r10,r3,788
	ctx.r10.s64 = ctx.r3.s64 + 788;
	// li r7,255
	ctx.r7.s64 = 255;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83128C48:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// ld r8,-7496(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r8,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r8.u64);
	// stbu r7,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83128c48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128C48;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r3,1172
	ctx.r10.s64 = ctx.r3.s64 + 1172;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_83128C78:
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r4.u32);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r31,r5,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// sth r11,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r11.u16);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r31,r5,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r31.u32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
	// sth r11,40(r10)
	PPC_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r4.u32);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r31,r5,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r31.u32);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r7,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r7.u32);
	// sth r11,52(r10)
	PPC_STORE_U16(ctx.r10.u32 + 52, ctx.r11.u16);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// lwz r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r4.u32);
	// lwz r5,-7448(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7448);
	// rlwimi r31,r5,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r31.u32);
	// stwu r9,60(r10)
	ea = 60 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83128c78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83128C78;
	// stw r9,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r9.u32);
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// sth r11,1776(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1776, ctx.r11.u16);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lwz r10,1784(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1784);
	// oris r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 4294901760;
	// stw r7,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r7.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r9,1786(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1786, ctx.r9.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stb r9,1787(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1787, ctx.r9.u8);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// ld r10,-7496(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// std r10,1776(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1776, ctx.r10.u64);
	// addi r10,r3,1776
	ctx.r10.s64 = ctx.r3.s64 + 1776;
	// lwz r5,-32640(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r9,1800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1800, ctx.r9.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// sth r11,1796(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1796, ctx.r11.u16);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// stw r9,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r9.u32);
	// addi r7,r10,68
	ctx.r7.s64 = ctx.r10.s64 + 68;
	// sth r11,1788(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1788, ctx.r11.u16);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r5,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r5.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r5,1804(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1804);
	// oris r7,r5,65535
	ctx.r7.u64 = ctx.r5.u64 | 4294901760;
	// stw r7,1804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1804, ctx.r7.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stb r9,1806(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1806, ctx.r9.u8);
	// li r27,57
	ctx.r27.s64 = 57;
	// stb r9,1807(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1807, ctx.r9.u8);
	// ld r7,-7496(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r7,1796(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1796, ctx.r7.u64);
	// lwz r7,-32640(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r7,1804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1804, ctx.r7.u32);
	// stw r9,1820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1820, ctx.r9.u32);
	// sth r11,1816(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1816, ctx.r11.u16);
	// stw r9,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r9.u32);
	// sth r11,1808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1808, ctx.r11.u16);
	// lwz r5,1824(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// oris r7,r5,65535
	ctx.r7.u64 = ctx.r5.u64 | 4294901760;
	// stw r7,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r7.u32);
	// stb r9,1826(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1826, ctx.r9.u8);
	// stb r9,1827(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1827, ctx.r9.u8);
	// lwz r31,212(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// ld r7,-7496(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// std r7,1816(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1816, ctx.r7.u64);
	// lwz r7,-32640(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// stw r7,1824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1824, ctx.r7.u32);
	// addi r7,r10,108
	ctx.r7.s64 = ctx.r10.s64 + 108;
	// stw r9,1840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1840, ctx.r9.u32);
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// stw r9,1832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1832, ctx.r9.u32);
	// sth r11,1836(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1836, ctx.r11.u16);
	// sth r11,1828(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1828, ctx.r11.u16);
	// lwz r5,1844(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
	// oris r7,r5,65535
	ctx.r7.u64 = ctx.r5.u64 | 4294901760;
	// stw r7,1844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1844, ctx.r7.u32);
	// stb r9,1846(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1846, ctx.r9.u8);
	// stb r9,1847(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1847, ctx.r9.u8);
	// addi r9,r10,88
	ctx.r9.s64 = ctx.r10.s64 + 88;
	// ld r9,-7496(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7496);
	// addi r10,r10,148
	ctx.r10.s64 = ctx.r10.s64 + 148;
	// std r9,1836(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1836, ctx.r9.u64);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r6,-32640(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32640);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// sth r11,1856(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1856, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ori r9,r3,65535
	ctx.r9.u64 = ctx.r3.u64 | 65535;
	// sth r23,1848(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1848, ctx.r23.u16);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// stw r11,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r11.u32);
	// stw r5,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r5.u32);
	// lwz r10,1864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// stw r8,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r8.u32);
	// stb r11,1866(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1866, ctx.r11.u8);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,1867(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1867, ctx.r11.u8);
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r10,1856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1856, ctx.r10.u64);
	// lwz r10,-32640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r10,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r10.u32);
	// sth r23,1876(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1876, ctx.r23.u16);
	// sth r23,1868(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1868, ctx.r23.u16);
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
	// lwz r6,1884(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r5.u32);
	// stb r11,1886(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1886, ctx.r11.u8);
	// stb r11,1887(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1887, ctx.r11.u8);
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r10,1876(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1876, ctx.r10.u64);
	// lwz r10,-32640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r10,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r10.u32);
	// sth r23,1896(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1896, ctx.r23.u16);
	// stw r11,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r11.u32);
	// sth r23,1888(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1888, ctx.r23.u16);
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r3.u32);
	// stb r11,1906(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1906, ctx.r11.u8);
	// stb r11,1907(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1907, ctx.r11.u8);
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r10,1896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1896, ctx.r10.u64);
	// lwz r10,-32640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r10,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r10.u32);
	// sth r23,1916(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1916, ctx.r23.u16);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// sth r23,1908(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1908, ctx.r23.u16);
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// lwz r10,1924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// oris r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 4294901760;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r6.u32);
	// stb r11,1926(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1926, ctx.r11.u8);
	// addi r6,r10,168
	ctx.r6.s64 = ctx.r10.s64 + 168;
	// stb r11,1927(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1927, ctx.r11.u8);
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// addi r10,r31,1976
	ctx.r10.s64 = ctx.r31.s64 + 1976;
	// std r6,1916(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1916, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r6,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r6.u32);
	// sth r9,1936(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1936, ctx.r9.u16);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// sth r23,1928(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1928, ctx.r23.u16);
	// lwz r5,1944(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// oris r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 4294901760;
	// stw r4,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r4.u32);
	// stb r11,1946(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1946, ctx.r11.u8);
	// stb r11,1947(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1947, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,1936(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1936, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r6,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r6.u32);
	// sth r9,1956(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1956, ctx.r9.u16);
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
	// sth r9,1948(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1948, ctx.r9.u16);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// oris r6,r3,65535
	ctx.r6.u64 = ctx.r3.u64 | 4294901760;
	// stw r6,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r6.u32);
	// stb r11,1966(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1966, ctx.r11.u8);
	// stb r11,1967(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1967, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,1956(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1956, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// sth r9,1968(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1968, ctx.r9.u16);
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// stw r6,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r6.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,-1
	ctx.r5.s64 = -1;
loc_83128FEC:
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r28,r10,5
	ctx.r28.s64 = ctx.r10.s64 + 5;
	// lwz r29,-7448(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r4,r29,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r29,r4,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r30.u8);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
loc_83129020:
	// stbx r11,r28,r3
	PPC_STORE_U8(ctx.r28.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x83129020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83129020;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x83128fec
	if (!cr0.lt) goto loc_83128FEC;
	// sth r9,2440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2440, ctx.r9.u16);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
	// addi r10,r31,2440
	ctx.r10.s64 = ctx.r31.s64 + 2440;
	// addi r10,r31,2520
	ctx.r10.s64 = ctx.r31.s64 + 2520;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// ld r3,-7496(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// sth r9,2456(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2456, ctx.r9.u16);
	// stw r11,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r11.u32);
	// std r3,2440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2440, ctx.r3.u64);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
	// ld r4,-7496(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r4,2456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2456, ctx.r4.u64);
	// stw r11,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r11.u32);
	// sth r9,2472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2472, ctx.r9.u16);
	// stw r11,2464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2464, ctx.r11.u32);
	// stw r11,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r11.u32);
	// ld r4,-7496(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// stw r11,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r11.u32);
	// std r4,2472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2472, ctx.r4.u64);
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// sth r9,2488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2488, ctx.r9.u16);
	// ld r4,-7496(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// sth r9,2504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2504, ctx.r9.u16);
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// std r4,2488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2488, ctx.r4.u64);
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// stw r11,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r11.u32);
	// ld r4,-7496(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// std r4,2504(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2504, ctx.r4.u64);
loc_831290C0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r28,-7448(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwimi r4,r28,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwimi r28,r4,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// sth r11,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// sth r11,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r27,r4,0,0,13
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r27.u64 & 0xFFFFFFFF0003FFFF);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r27,r4,0,14,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFC0000);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// sth r11,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// sth r11,22(r10)
	PPC_STORE_U16(ctx.r10.u32 + 22, ctx.r11.u16);
	// stw r5,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// sth r11,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r26,r4,0,0,13
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r26.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r26.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// sth r11,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r11.u16);
	// sth r11,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r11.u16);
	// sth r11,32(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32, ctx.r11.u16);
	// sth r11,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r11.u16);
	// stw r5,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r5.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r25,r4,0,0,13
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r25.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r25,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r25.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// sth r11,40(r10)
	PPC_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
	// sth r11,42(r10)
	PPC_STORE_U16(ctx.r10.u32 + 42, ctx.r11.u16);
	// stw r3,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r3.u32);
	// sth r11,44(r10)
	PPC_STORE_U16(ctx.r10.u32 + 44, ctx.r11.u16);
	// sth r11,46(r10)
	PPC_STORE_U16(ctx.r10.u32 + 46, ctx.r11.u16);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r24,r4,0,0,13
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r24.u64 & 0xFFFFFFFF0003FFFF);
	// stw r24,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r24.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r24,r4,0,14,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r5.u32);
	// sth r11,52(r10)
	PPC_STORE_U16(ctx.r10.u32 + 52, ctx.r11.u16);
	// sth r11,54(r10)
	PPC_STORE_U16(ctx.r10.u32 + 54, ctx.r11.u16);
	// stw r24,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r24.u32);
	// sth r11,56(r10)
	PPC_STORE_U16(ctx.r10.u32 + 56, ctx.r11.u16);
	// sth r11,58(r10)
	PPC_STORE_U16(ctx.r10.u32 + 58, ctx.r11.u16);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r23,r4,0,0,13
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r23.u64 & 0xFFFFFFFF0003FFFF);
	// stw r23,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r23.u32);
	// lwz r4,-7448(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -7448);
	// rlwimi r23,r4,0,14,31
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r23.u64 & 0xFFFFFFFFFFFC0000);
	// sth r11,64(r10)
	PPC_STORE_U16(ctx.r10.u32 + 64, ctx.r11.u16);
	// sth r11,66(r10)
	PPC_STORE_U16(ctx.r10.u32 + 66, ctx.r11.u16);
	// sth r11,68(r10)
	PPC_STORE_U16(ctx.r10.u32 + 68, ctx.r11.u16);
	// stw r23,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r23.u32);
	// sth r11,70(r10)
	PPC_STORE_U16(ctx.r10.u32 + 70, ctx.r11.u16);
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// bdnz 0x831290c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831290C0;
	// stw r11,2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2936, ctx.r11.u32);
	// addi r10,r31,2932
	ctx.r10.s64 = ctx.r31.s64 + 2932;
	// sth r9,2932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2932, ctx.r9.u16);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
	// addi r6,r10,68
	ctx.r6.s64 = ctx.r10.s64 + 68;
	// lwz r6,2940(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// oris r4,r6,65535
	ctx.r4.u64 = ctx.r6.u64 | 4294901760;
	// stw r4,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r4.u32);
	// stb r11,2942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2942, ctx.r11.u8);
	// stb r11,2943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2943, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,2932(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2932, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,2956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2956, ctx.r11.u32);
	// sth r9,2952(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2952, ctx.r9.u16);
	// stw r11,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r11.u32);
	// stw r11,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r11.u32);
	// stw r6,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r6.u32);
	// lwz r3,2960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2960);
	// oris r6,r3,65535
	ctx.r6.u64 = ctx.r3.u64 | 4294901760;
	// stw r6,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r6.u32);
	// stb r11,2962(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2962, ctx.r11.u8);
	// stb r11,2963(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2963, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,2952(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2952, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r6,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r6.u32);
	// sth r9,2972(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2972, ctx.r9.u16);
	// stw r11,2976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2976, ctx.r11.u32);
	// stw r11,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r11.u32);
	// stw r11,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r11.u32);
	// lwz r4,2980(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2980);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r3.u32);
	// stb r11,2982(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2982, ctx.r11.u8);
	// stb r11,2983(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2983, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,2972(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2972, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r6,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r6.u32);
	// sth r9,2992(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2992, ctx.r9.u16);
	// stw r11,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r11.u32);
	// stw r11,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// lwz r6,3000(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// oris r4,r6,65535
	ctx.r4.u64 = ctx.r6.u64 | 4294901760;
	// stw r4,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r4.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stb r11,3002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3002, ctx.r11.u8);
	// stb r11,3003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3003, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,2992(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2992, ctx.r6.u64);
	// addi r6,r10,88
	ctx.r6.s64 = ctx.r10.s64 + 88;
	// addi r6,r10,108
	ctx.r6.s64 = ctx.r10.s64 + 108;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r6,r10,148
	ctx.r6.s64 = ctx.r10.s64 + 148;
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r6,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r6.u32);
	// sth r9,3012(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3012, ctx.r9.u16);
	// stw r11,3016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3016, ctx.r11.u32);
	// stw r11,3004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3004, ctx.r11.u32);
	// stw r11,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r11.u32);
	// lwz r3,3020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3020);
	// oris r6,r3,65535
	ctx.r6.u64 = ctx.r3.u64 | 4294901760;
	// stw r6,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r6.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stb r11,3022(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3022, ctx.r11.u8);
	// stb r11,3023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3023, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,3012(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3012, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r6,3020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3020, ctx.r6.u32);
	// sth r9,3032(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3032, ctx.r9.u16);
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// stw r11,3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3028, ctx.r11.u32);
	// stw r11,3024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
	// lwz r6,3040(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3040);
	// oris r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 4294901760;
	// stw r6,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r6.u32);
	// stb r11,3042(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3042, ctx.r11.u8);
	// stb r11,3043(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3043, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,3032(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3032, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// sth r9,3052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3052, ctx.r9.u16);
	// stw r6,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r6.u32);
	// stw r11,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r11.u32);
	// stw r11,3044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3044, ctx.r11.u32);
	// stw r11,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r11.u32);
	// lwz r6,3060(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3060);
	// oris r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 4294901760;
	// stw r6,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r6.u32);
	// stb r11,3062(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3062, ctx.r11.u8);
	// stb r11,3063(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3063, ctx.r11.u8);
	// ld r6,-7496(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r6,3052(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3052, ctx.r6.u64);
	// lwz r6,-32640(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// sth r9,3072(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3072, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r6,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r6.u32);
	// addi r6,r10,168
	ctx.r6.s64 = ctx.r10.s64 + 168;
	// stw r11,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r11.u32);
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
	// addi r10,r31,3132
	ctx.r10.s64 = ctx.r31.s64 + 3132;
	// stw r11,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r9,r31,3136
	ctx.r9.s64 = ctx.r31.s64 + 3136;
	// lwz r10,3080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3080);
	// oris r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 4294901760;
	// stw r6,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r6.u32);
	// stb r11,3082(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3082, ctx.r11.u8);
	// stb r11,3083(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3083, ctx.r11.u8);
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r10,3072(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3072, ctx.r10.u64);
	// lwz r10,-32640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r10,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r10.u32);
	// sth r3,3092(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3092, ctx.r3.u16);
	// stw r11,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r11.u32);
	// stw r11,3084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3084, ctx.r11.u32);
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// lwz r4,3100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3100);
	// oris r10,r4,65535
	ctx.r10.u64 = ctx.r4.u64 | 4294901760;
	// stw r10,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r10.u32);
	// stb r11,3102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3102, ctx.r11.u8);
	// stb r11,3103(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3103, ctx.r11.u8);
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r10,3092(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3092, ctx.r10.u64);
	// lwz r10,-32640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r10,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r10.u32);
	// sth r3,3112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3112, ctx.r3.u16);
	// stw r11,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r11.u32);
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// stw r11,3108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3108, ctx.r11.u32);
	// lwz r6,3120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3120);
	// oris r4,r6,65535
	ctx.r4.u64 = ctx.r6.u64 | 4294901760;
	// stw r4,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r4.u32);
	// stb r11,3122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3122, ctx.r11.u8);
	// stb r11,3123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3123, ctx.r11.u8);
	// ld r10,-7496(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -7496);
	// std r10,3112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3112, ctx.r10.u64);
	// lwz r10,-32640(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32640);
	// stw r11,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r11.u32);
	// stw r11,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r11.u32);
	// stw r10,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r10.u32);
	// stw r5,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r5.u32);
	// stw r5,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r5.u32);
loc_83129454:
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83129454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83129454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831286d8
	ctx.lr = 0x83129464;
	sub_831286D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129470"))) PPC_WEAK_FUNC(sub_83129470);
PPC_FUNC_IMPL(__imp__sub_83129470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83129478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r30,32
	ctx.r30.s64 = 32;
loc_8312948C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831294a8
	if (!cr6.eq) goto loc_831294A8;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831294d0
	goto loc_831294D0;
loc_831294A8:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x831294c8
	if (!cr6.eq) goto loc_831294C8;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831294cc
	if (cr6.eq) goto loc_831294CC;
loc_831294C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831294CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831294D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831294fc
	if (cr6.eq) goto loc_831294FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// beq cr6,0x831294fc
	if (cr6.eq) goto loc_831294FC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// beq cr6,0x831294fc
	if (cr6.eq) goto loc_831294FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x831294FC;
	sub_835977D8(ctx, base);
loc_831294FC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8312948c
	if (!cr0.eq) goto loc_8312948C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129510"))) PPC_WEAK_FUNC(sub_83129510);
PPC_FUNC_IMPL(__imp__sub_83129510) {
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
	// lis r31,-31750
	ctx.r31.s64 = -2080768000;
	// lwz r3,-32632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32632);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831295a0
	if (!cr6.eq) goto loc_831295A0;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8312954C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83129580
	if (cr6.eq) goto loc_83129580;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,432
	ctx.r4.s64 = ctx.r11.s64 + 432;
	// bl 0x83103328
	ctx.lr = 0x83129564;
	sub_83103328(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,536
	ctx.r8.s64 = ctx.r10.s64 + 536;
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r30,-32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32632, ctx.r30.u32);
	// b 0x83129588
	goto loc_83129588;
loc_83129580:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32632, ctx.r11.u32);
loc_83129588:
	// bl 0x831021a0
	ctx.lr = 0x8312958C;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x83129594;
	sub_82DA45F8(ctx, base);
	// lwz r4,-32632(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32632);
	// bl 0x83103100
	ctx.lr = 0x8312959C;
	sub_83103100(ctx, base);
	// lwz r3,-32632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32632);
loc_831295A0:
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

__attribute__((alias("__imp__sub_831295B8"))) PPC_WEAK_FUNC(sub_831295B8);
PPC_FUNC_IMPL(__imp__sub_831295B8) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r9,r11,536
	ctx.r9.s64 = ctx.r11.s64 + 536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-32632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32632, ctx.r11.u32);
	// bl 0x831032a0
	ctx.lr = 0x831295F0;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83129608
	if (cr6.eq) goto loc_83129608;
	// bl 0x82416268
	ctx.lr = 0x83129604;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83129608:
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

__attribute__((alias("__imp__sub_83129620"))) PPC_WEAK_FUNC(sub_83129620);
PPC_FUNC_IMPL(__imp__sub_83129620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// blt cr6,0x83129634
	if (cr6.lt) goto loc_83129634;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
loc_83129634:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129644"))) PPC_WEAK_FUNC(sub_83129644);
PPC_FUNC_IMPL(__imp__sub_83129644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129648"))) PPC_WEAK_FUNC(sub_83129648);
PPC_FUNC_IMPL(__imp__sub_83129648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(ctx.r11.s32, 25, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129668"))) PPC_WEAK_FUNC(sub_83129668);
PPC_FUNC_IMPL(__imp__sub_83129668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312967C"))) PPC_WEAK_FUNC(sub_8312967C);
PPC_FUNC_IMPL(__imp__sub_8312967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129680"))) PPC_WEAK_FUNC(sub_83129680);
PPC_FUNC_IMPL(__imp__sub_83129680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,-7240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7240);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r11,-7240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7240);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,-7240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7240);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r11,-7240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7240);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r9,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r9.u8);
loc_831296D8:
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831296E4:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// bdnz 0x831296e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831296E4;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x831296d8
	if (cr6.lt) goto loc_831296D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129708"))) PPC_WEAK_FUNC(sub_83129708);
PPC_FUNC_IMPL(__imp__sub_83129708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83129724
	if (cr6.eq) goto loc_83129724;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83129724
	if (!cr6.eq) goto loc_83129724;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
loc_83129724:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312972C"))) PPC_WEAK_FUNC(sub_8312972C);
PPC_FUNC_IMPL(__imp__sub_8312972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129730"))) PPC_WEAK_FUNC(sub_83129730);
PPC_FUNC_IMPL(__imp__sub_83129730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8312975c
	if (!cr6.eq) goto loc_8312975C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_8312975C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129784"))) PPC_WEAK_FUNC(sub_83129784);
PPC_FUNC_IMPL(__imp__sub_83129784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129788"))) PPC_WEAK_FUNC(sub_83129788);
PPC_FUNC_IMPL(__imp__sub_83129788) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129790"))) PPC_WEAK_FUNC(sub_83129790);
PPC_FUNC_IMPL(__imp__sub_83129790) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312979C"))) PPC_WEAK_FUNC(sub_8312979C);
PPC_FUNC_IMPL(__imp__sub_8312979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831297A0"))) PPC_WEAK_FUNC(sub_831297A0);
PPC_FUNC_IMPL(__imp__sub_831297A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x831297b4
	if (cr6.lt) goto loc_831297B4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_831297B4:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bge cr6,0x831297dc
	if (!cr6.lt) goto loc_831297DC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_831297DC:
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x83129804
	if (!cr6.eq) goto loc_83129804;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_83129804:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312983C"))) PPC_WEAK_FUNC(sub_8312983C);
PPC_FUNC_IMPL(__imp__sub_8312983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129840"))) PPC_WEAK_FUNC(sub_83129840);
PPC_FUNC_IMPL(__imp__sub_83129840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129878"))) PPC_WEAK_FUNC(sub_83129878);
PPC_FUNC_IMPL(__imp__sub_83129878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83129880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,79
	ctx.r11.s64 = 79;
	// lis r5,-31750
	ctx.r5.s64 = -2080768000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r10,-7240(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwimi r6,r10,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r11,-7240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7240);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,-32624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32624);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,-32624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32624);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,-32624(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32624);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_831298E8:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831298e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831298E8;
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// li r30,20
	ctx.r30.s64 = 20;
loc_831298F8:
	// bl 0x83129680
	ctx.lr = 0x831298FC;
	sub_83129680(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bne 0x831298f8
	if (!cr0.eq) goto loc_831298F8;
	// addi r11,r31,1140
	ctx.r11.s64 = ctx.r31.s64 + 1140;
	// li r5,32
	ctx.r5.s64 = 32;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
loc_83129914:
	// ld r8,-7288(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7288);
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312992C:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312992c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312992C;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bne 0x83129914
	if (!cr0.eq) goto loc_83129914;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129948"))) PPC_WEAK_FUNC(sub_83129948);
PPC_FUNC_IMPL(__imp__sub_83129948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312996C"))) PPC_WEAK_FUNC(sub_8312996C);
PPC_FUNC_IMPL(__imp__sub_8312996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129970"))) PPC_WEAK_FUNC(sub_83129970);
PPC_FUNC_IMPL(__imp__sub_83129970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129978"))) PPC_WEAK_FUNC(sub_83129978);
PPC_FUNC_IMPL(__imp__sub_83129978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129984"))) PPC_WEAK_FUNC(sub_83129984);
PPC_FUNC_IMPL(__imp__sub_83129984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129988"))) PPC_WEAK_FUNC(sub_83129988);
PPC_FUNC_IMPL(__imp__sub_83129988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(ctx.r11.s32, 79, xer);
	// blt cr6,0x8312999c
	if (cr6.lt) goto loc_8312999C;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
loc_8312999C:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299AC"))) PPC_WEAK_FUNC(sub_831299AC);
PPC_FUNC_IMPL(__imp__sub_831299AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831299B0"))) PPC_WEAK_FUNC(sub_831299B0);
PPC_FUNC_IMPL(__imp__sub_831299B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(ctx.r11.s32, 79, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299D0"))) PPC_WEAK_FUNC(sub_831299D0);
PPC_FUNC_IMPL(__imp__sub_831299D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,384
	ctx.r10.s64 = ctx.r11.s64 + 384;
	// lwz r8,-7240(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7240);
	// rlwinm r9,r8,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
loc_831299EC:
	// lwz r11,-40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83129a10
	if (!cr6.eq) goto loc_83129A10;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83129a14
	if (cr6.eq) goto loc_83129A14;
loc_83129A10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83129a44
	if (!cr6.eq) goto loc_83129A44;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83129a48
	if (cr6.eq) goto loc_83129A48;
loc_83129A44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129A48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129b08
	if (!cr6.eq) goto loc_83129B08;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83129a78
	if (!cr6.eq) goto loc_83129A78;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83129a7c
	if (cr6.eq) goto loc_83129A7C;
loc_83129A78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129A7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129b10
	if (!cr6.eq) goto loc_83129B10;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83129aac
	if (!cr6.eq) goto loc_83129AAC;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83129ab0
	if (cr6.eq) goto loc_83129AB0;
loc_83129AAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129AB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129b18
	if (!cr6.eq) goto loc_83129B18;
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83129ae0
	if (!cr6.eq) goto loc_83129AE0;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83129ae4
	if (cr6.eq) goto loc_83129AE4;
loc_83129AE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129AE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129b20
	if (!cr6.eq) goto loc_83129B20;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r7,20
	cr6.compare<uint32_t>(ctx.r7.u32, 20, xer);
	// blt cr6,0x831299ec
	if (cr6.lt) goto loc_831299EC;
	// blr 
	return;
loc_83129B08:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83129B10:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83129B18:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
loc_83129B20:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B28"))) PPC_WEAK_FUNC(sub_83129B28);
PPC_FUNC_IMPL(__imp__sub_83129B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// blt cr6,0x83129b3c
	if (cr6.lt) goto loc_83129B3C;
	// addi r3,r3,340
	ctx.r3.s64 = ctx.r3.s64 + 340;
	// blr 
	return;
loc_83129B3C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,340
	ctx.r3.s64 = ctx.r11.s64 + 340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B54"))) PPC_WEAK_FUNC(sub_83129B54);
PPC_FUNC_IMPL(__imp__sub_83129B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129B58"))) PPC_WEAK_FUNC(sub_83129B58);
PPC_FUNC_IMPL(__imp__sub_83129B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1252
	ctx.r10.s64 = ctx.r11.s64 + 1252;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r11,-7288
	ctx.r9.s64 = ctx.r11.s64 + -7288;
	// lhz r8,-7288(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7288);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_83129B78:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83129b90
	if (!cr6.eq) goto loc_83129B90;
	// lwz r11,-108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -108);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83129bb8
	goto loc_83129BB8;
loc_83129B90:
	// lhz r5,-112(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -112);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83129bb0
	if (!cr6.eq) goto loc_83129BB0;
	// lwz r11,-108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -108);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129bb4
	if (cr6.eq) goto loc_83129BB4;
loc_83129BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129BB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129BB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83129bdc
	if (!cr6.eq) goto loc_83129BDC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83129c04
	goto loc_83129C04;
loc_83129BDC:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83129bfc
	if (!cr6.eq) goto loc_83129BFC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129c00
	if (cr6.eq) goto loc_83129C00;
loc_83129BFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129C00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129C04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129cc0
	if (!cr6.eq) goto loc_83129CC0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83129c28
	if (!cr6.eq) goto loc_83129C28;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83129c50
	goto loc_83129C50;
loc_83129C28:
	// lhz r5,104(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 104);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83129c48
	if (!cr6.eq) goto loc_83129C48;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129c4c
	if (cr6.eq) goto loc_83129C4C;
loc_83129C48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129C4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129C50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129cc8
	if (!cr6.eq) goto loc_83129CC8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83129c74
	if (!cr6.eq) goto loc_83129C74;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x83129c9c
	goto loc_83129C9C;
loc_83129C74:
	// lhz r5,212(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 212);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x83129c94
	if (!cr6.eq) goto loc_83129C94;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129c98
	if (cr6.eq) goto loc_83129C98;
loc_83129C94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129C98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129C9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129cd0
	if (!cr6.eq) goto loc_83129CD0;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// blt cr6,0x83129b78
	if (cr6.lt) goto loc_83129B78;
	// blr 
	return;
loc_83129CC0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_83129CC8:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blr 
	return;
loc_83129CD0:
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129CD8"))) PPC_WEAK_FUNC(sub_83129CD8);
PPC_FUNC_IMPL(__imp__sub_83129CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83129cec
	if (cr6.lt) goto loc_83129CEC;
	// addi r3,r3,1140
	ctx.r3.s64 = ctx.r3.s64 + 1140;
	// blr 
	return;
loc_83129CEC:
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1140
	ctx.r3.s64 = ctx.r11.s64 + 1140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129CFC"))) PPC_WEAK_FUNC(sub_83129CFC);
PPC_FUNC_IMPL(__imp__sub_83129CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129D00"))) PPC_WEAK_FUNC(sub_83129D00);
PPC_FUNC_IMPL(__imp__sub_83129D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,-7288
	ctx.r10.s64 = ctx.r11.s64 + -7288;
	// lhz r6,-7288(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -7288);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83129d28
	if (!cr6.eq) goto loc_83129D28;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83129d50
	goto loc_83129D50;
loc_83129D28:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83129d48
	if (!cr6.eq) goto loc_83129D48;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129d4c
	if (cr6.eq) goto loc_83129D4C;
loc_83129D48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129D4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,1144
	ctx.r10.s64 = ctx.r3.s64 + 1144;
loc_83129D68:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83129d80
	if (!cr6.eq) goto loc_83129D80;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83129da8
	goto loc_83129DA8;
loc_83129D80:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83129da0
	if (!cr6.eq) goto loc_83129DA0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129da4
	if (cr6.eq) goto loc_83129DA4;
loc_83129DA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129DA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129DA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83129dcc
	if (!cr6.eq) goto loc_83129DCC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83129df4
	goto loc_83129DF4;
loc_83129DCC:
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83129dec
	if (!cr6.eq) goto loc_83129DEC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129df0
	if (cr6.eq) goto loc_83129DF0;
loc_83129DEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129DF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129DF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129e14
	if (!cr6.eq) goto loc_83129E14;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83129d68
	if (cr6.lt) goto loc_83129D68;
	// blr 
	return;
loc_83129E14:
	// mulli r11,r9,108
	ctx.r11.s64 = ctx.r9.s64 * 108;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,1140
	ctx.r10.s64 = ctx.r11.s64 + 1140;
	// stw r9,1140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1140, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,1144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1144, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E34"))) PPC_WEAK_FUNC(sub_83129E34);
PPC_FUNC_IMPL(__imp__sub_83129E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129E38"))) PPC_WEAK_FUNC(sub_83129E38);
PPC_FUNC_IMPL(__imp__sub_83129E38) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7288
	ctx.r30.s64 = ctx.r11.s64 + -7288;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129e74
	if (!cr6.eq) goto loc_83129E74;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83129e9c
	goto loc_83129E9C;
loc_83129E74:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83129e94
	if (!cr6.eq) goto loc_83129E94;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83129e98
	if (cr6.eq) goto loc_83129E98;
loc_83129E94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83129E98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83129E9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83129f80
	if (!cr6.eq) goto loc_83129F80;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,1144
	ctx.r11.s64 = ctx.r31.s64 + 1144;
loc_83129EBC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83129ed4
	if (!cr6.eq) goto loc_83129ED4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x83129efc
	goto loc_83129EFC;
loc_83129ED4:
	// lhz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bne cr6,0x83129ef4
	if (!cr6.eq) goto loc_83129EF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x83129ef8
	if (cr6.eq) goto loc_83129EF8;
loc_83129EF4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83129EF8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_83129EFC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83129f1c
	if (!cr6.eq) goto loc_83129F1C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x83129ebc
	if (cr6.lt) goto loc_83129EBC;
	// b 0x83129f24
	goto loc_83129F24;
loc_83129F1C:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_83129F24:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83129f80
	if (cr6.eq) goto loc_83129F80;
	// cmplwi cr6,r8,31
	cr6.compare<uint32_t>(ctx.r8.u32, 31, xer);
	// bge cr6,0x83129f58
	if (!cr6.lt) goto loc_83129F58;
	// mulli r11,r8,108
	ctx.r11.s64 = ctx.r8.s64 * 108;
	// subfic r10,r8,31
	xer.ca = ctx.r8.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r8.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r9,r10,108
	ctx.r9.s64 = ctx.r10.s64 * 108;
	// addi r3,r11,1140
	ctx.r3.s64 = ctx.r11.s64 + 1140;
	// addi r4,r11,1248
	ctx.r4.s64 = ctx.r11.s64 + 1248;
	// rlwinm r5,r9,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83129F58;
	sub_831CEE08(ctx, base);
loc_83129F58:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r31,4488
	ctx.r11.s64 = ctx.r31.s64 + 4488;
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// std r10,4488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4488, ctx.r10.u64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83129F78:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83129f78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83129F78;
loc_83129F80:
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

__attribute__((alias("__imp__sub_83129F98"))) PPC_WEAK_FUNC(sub_83129F98);
PPC_FUNC_IMPL(__imp__sub_83129F98) {
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
	// bl 0x83129878
	ctx.lr = 0x83129FB0;
	sub_83129878(ctx, base);
	// addi r3,r31,4596
	ctx.r3.s64 = ctx.r31.s64 + 4596;
	// bl 0x83129878
	ctx.lr = 0x83129FB8;
	sub_83129878(ctx, base);
	// addi r3,r31,9192
	ctx.r3.s64 = ctx.r31.s64 + 9192;
	// bl 0x83129878
	ctx.lr = 0x83129FC0;
	sub_83129878(ctx, base);
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

__attribute__((alias("__imp__sub_83129FD4"))) PPC_WEAK_FUNC(sub_83129FD4);
PPC_FUNC_IMPL(__imp__sub_83129FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83129FD8"))) PPC_WEAK_FUNC(sub_83129FD8);
PPC_FUNC_IMPL(__imp__sub_83129FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// beq cr6,0x83129ff4
	if (cr6.eq) goto loc_83129FF4;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r3,9192
	ctx.r3.s64 = ctx.r3.s64 + 9192;
	// blr 
	return;
loc_83129FF4:
	// addi r3,r3,4596
	ctx.r3.s64 = ctx.r3.s64 + 4596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129FFC"))) PPC_WEAK_FUNC(sub_83129FFC);
PPC_FUNC_IMPL(__imp__sub_83129FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A000"))) PPC_WEAK_FUNC(sub_8312A000);
PPC_FUNC_IMPL(__imp__sub_8312A000) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x83129680
	ctx.lr = 0x8312A024;
	sub_83129680(ctx, base);
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

__attribute__((alias("__imp__sub_8312A038"))) PPC_WEAK_FUNC(sub_8312A038);
PPC_FUNC_IMPL(__imp__sub_8312A038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8312A040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r3,r3,340
	ctx.r3.s64 = ctx.r3.s64 + 340;
	// li r28,19
	ctx.r28.s64 = 19;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 4294901760;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r29,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r29.u8);
	// stb r29,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r29.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r29,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r29.u8);
	// stb r29,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r29.u8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// oris r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 4294901760;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stb r29,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r29.u8);
	// stb r29,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r29.u8);
loc_8312A098:
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x83129680
	ctx.lr = 0x8312A0A4;
	sub_83129680(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bge 0x8312a098
	if (!cr0.lt) goto loc_8312A098;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1140
	ctx.r11.s64 = ctx.r31.s64 + 1140;
	// li r5,31
	ctx.r5.s64 = 31;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
loc_8312A0C4:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ld r10,-7288(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + -7288);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8312A0E4:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8312a0e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312A0E4;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bge 0x8312a0c4
	if (!cr0.lt) goto loc_8312A0C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129878
	ctx.lr = 0x8312A100;
	sub_83129878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A10C"))) PPC_WEAK_FUNC(sub_8312A10C);
PPC_FUNC_IMPL(__imp__sub_8312A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A110"))) PPC_WEAK_FUNC(sub_8312A110);
PPC_FUNC_IMPL(__imp__sub_8312A110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,340
	ctx.r10.s64 = ctx.r11.s64 + 340;
	// sth r9,340(r11)
	PPC_STORE_U16(ctx.r11.u32 + 340, ctx.r9.u16);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,344(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r7,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r7.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r4.u32);
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r8.u32);
	// lbz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// stb r6,352(r11)
	PPC_STORE_U8(ctx.r11.u32 + 352, ctx.r6.u8);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r4,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r4.u32);
	// lwz r3,20(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r3,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r3.u32);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r10,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r9,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r9.u32);
	// lwz r8,32(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r8,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r8.u32);
	// lwz r7,36(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r7,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A1B4"))) PPC_WEAK_FUNC(sub_8312A1B4);
PPC_FUNC_IMPL(__imp__sub_8312A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A1B8"))) PPC_WEAK_FUNC(sub_8312A1B8);
PPC_FUNC_IMPL(__imp__sub_8312A1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312A1C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8312a038
	ctx.lr = 0x8312A1CC;
	sub_8312A038(ctx, base);
	// addi r30,r31,4596
	ctx.r30.s64 = ctx.r31.s64 + 4596;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312a038
	ctx.lr = 0x8312A1D8;
	sub_8312A038(ctx, base);
	// addi r29,r31,9192
	ctx.r29.s64 = ctx.r31.s64 + 9192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312a038
	ctx.lr = 0x8312A1E4;
	sub_8312A038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129878
	ctx.lr = 0x8312A1EC;
	sub_83129878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83129878
	ctx.lr = 0x8312A1F4;
	sub_83129878(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83129878
	ctx.lr = 0x8312A1FC;
	sub_83129878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A208"))) PPC_WEAK_FUNC(sub_8312A208);
PPC_FUNC_IMPL(__imp__sub_8312A208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8312a234
	if (cr6.lt) goto loc_8312A234;
	// beq cr6,0x8312a22c
	if (cr6.eq) goto loc_8312A22C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r3,9192
	ctx.r3.s64 = ctx.r3.s64 + 9192;
	// b 0x82ae4338
	sub_82AE4338(ctx, base);
	return;
loc_8312A22C:
	// addi r3,r3,4596
	ctx.r3.s64 = ctx.r3.s64 + 4596;
	// b 0x82ae4338
	sub_82AE4338(ctx, base);
	return;
loc_8312A234:
	// b 0x82ae4338
	sub_82AE4338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A238"))) PPC_WEAK_FUNC(sub_8312A238);
PPC_FUNC_IMPL(__imp__sub_8312A238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A23C"))) PPC_WEAK_FUNC(sub_8312A23C);
PPC_FUNC_IMPL(__imp__sub_8312A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A240"))) PPC_WEAK_FUNC(sub_8312A240);
PPC_FUNC_IMPL(__imp__sub_8312A240) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A248"))) PPC_WEAK_FUNC(sub_8312A248);
PPC_FUNC_IMPL(__imp__sub_8312A248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r4,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u16);
	// lwz r8,4640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r7,r5,10,16,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0xFC00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF03FF);
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r11,4640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,4640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4640, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A278"))) PPC_WEAK_FUNC(sub_8312A278);
PPC_FUNC_IMPL(__imp__sub_8312A278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8312A280;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,4640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8312a344
	if (!cr6.gt) goto loc_8312A344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8312A2C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,22,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3F;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x8312a328
	if (!cr6.eq) goto loc_8312A328;
	// bl 0x831156e8
	ctx.lr = 0x8312A2D8;
	sub_831156E8(ctx, base);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c4e0
	ctx.lr = 0x8312A2E4;
	sub_8311C4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8312a328
	if (cr6.eq) goto loc_8312A328;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831251c0
	ctx.lr = 0x8312A2FC;
	sub_831251C0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831251c0
	ctx.lr = 0x8312A30C;
	sub_831251C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x8313f560
	ctx.lr = 0x8312A328;
	sub_8313F560(ctx, base);
loc_8312A328:
	// lwz r11,4640(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4640);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x8312a2c4
	if (cr6.lt) goto loc_8312A2C4;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8312A344:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r10,r30,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r28,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 3;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8313dc98
	ctx.lr = 0x8312A364;
	sub_8313DC98(ctx, base);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8312a394
	if (cr6.eq) goto loc_8312A394;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x8312A38C;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8312A394:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8312a3c0
	if (cr6.eq) goto loc_8312A3C0;
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8312A3A4:
	// lwzu r11,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82ab5f20
	ctx.lr = 0x8312A3B8;
	sub_82AB5F20(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8312a3a4
	if (!cr0.eq) goto loc_8312A3A4;
loc_8312A3C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8312a3d0
	if (cr6.eq) goto loc_8312A3D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8312A3D0;
	sub_82416268(ctx, base);
loc_8312A3D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A3D8"))) PPC_WEAK_FUNC(sub_8312A3D8);
PPC_FUNC_IMPL(__imp__sub_8312A3D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312A400;
	sub_831CDCF0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mulli r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 * 14;
	// addi r11,r9,-6856
	ctx.r11.s64 = ctx.r9.s64 + -6856;
	// li r5,14
	ctx.r5.s64 = 14;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8312A420;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8312A438"))) PPC_WEAK_FUNC(sub_8312A438);
PPC_FUNC_IMPL(__imp__sub_8312A438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mulli r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 * 14;
	// addi r11,r11,-6856
	ctx.r11.s64 = ctx.r11.s64 + -6856;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// lbz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// lbz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// lbz r8,11(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312a560
	if (!cr6.eq) goto loc_8312A560;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8312A560:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A568"))) PPC_WEAK_FUNC(sub_8312A568);
PPC_FUNC_IMPL(__imp__sub_8312A568) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x8312a594
	if (!cr6.lt) goto loc_8312A594;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8312A594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312a5b4
	if (cr6.eq) goto loc_8312A5B4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x8312a5e4
	goto loc_8312A5E4;
loc_8312A5B4:
	// bl 0x830ff290
	ctx.lr = 0x8312A5B8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8312A5BC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x8312a5dc
	if (cr6.eq) goto loc_8312A5DC;
	// bl 0x830ff290
	ctx.lr = 0x8312A5C8;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x8312A5CC;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8312a5e0
	goto loc_8312A5E0;
loc_8312A5DC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8312A5E0:
	// stbx r30,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u8);
loc_8312A5E4:
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

__attribute__((alias("__imp__sub_8312A5FC"))) PPC_WEAK_FUNC(sub_8312A5FC);
PPC_FUNC_IMPL(__imp__sub_8312A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A600"))) PPC_WEAK_FUNC(sub_8312A600);
PPC_FUNC_IMPL(__imp__sub_8312A600) {
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
	// bl 0x830ff290
	ctx.lr = 0x8312A618;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8312A61C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x8312a63c
	if (cr6.eq) goto loc_8312A63C;
	// bl 0x830ff290
	ctx.lr = 0x8312A628;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x8312A62C;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8312a640
	goto loc_8312A640;
loc_8312A63C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8312A640:
	// lbzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8312A658"))) PPC_WEAK_FUNC(sub_8312A658);
PPC_FUNC_IMPL(__imp__sub_8312A658) {
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
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312A678;
	sub_831CDCF0(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r11,r11,-6856
	ctx.r11.s64 = ctx.r11.s64 + -6856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// bl 0x831ce980
	ctx.lr = 0x8312A690;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8312A6A4"))) PPC_WEAK_FUNC(sub_8312A6A4);
PPC_FUNC_IMPL(__imp__sub_8312A6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A6A8"))) PPC_WEAK_FUNC(sub_8312A6A8);
PPC_FUNC_IMPL(__imp__sub_8312A6A8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8312A6C0;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,24160
	ctx.r9.u64 = ctx.r11.u64 | 24160;
	// lbzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// blt cr6,0x8312a6f0
	if (cr6.lt) goto loc_8312A6F0;
loc_8312A6D8:
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
loc_8312A6F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312a438
	ctx.lr = 0x8312A6F8;
	sub_8312A438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312a6d8
	if (!cr6.eq) goto loc_8312A6D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312a438
	ctx.lr = 0x8312A710;
	sub_8312A438(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A730"))) PPC_WEAK_FUNC(sub_8312A730);
PPC_FUNC_IMPL(__imp__sub_8312A730) {
	PPC_FUNC_PROLOGUE();
	// li r5,1150
	ctx.r5.s64 = 1150;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A73C"))) PPC_WEAK_FUNC(sub_8312A73C);
PPC_FUNC_IMPL(__imp__sub_8312A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A740"))) PPC_WEAK_FUNC(sub_8312A740);
PPC_FUNC_IMPL(__imp__sub_8312A740) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,115
	ctx.r11.s64 = ctx.r4.s64 * 115;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A74C"))) PPC_WEAK_FUNC(sub_8312A74C);
PPC_FUNC_IMPL(__imp__sub_8312A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A750"))) PPC_WEAK_FUNC(sub_8312A750);
PPC_FUNC_IMPL(__imp__sub_8312A750) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r5,115
	ctx.r11.s64 = ctx.r5.s64 * 115;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,115
	ctx.r4.s64 = 115;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x831ce7d8
	sub_831CE7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A764"))) PPC_WEAK_FUNC(sub_8312A764);
PPC_FUNC_IMPL(__imp__sub_8312A764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A768"))) PPC_WEAK_FUNC(sub_8312A768);
PPC_FUNC_IMPL(__imp__sub_8312A768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312A770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// stb r30,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stb r30,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r30.u8);
	// stb r29,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r29.u8);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// stb r30,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r30.u8);
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r29.u8);
	// stb r30,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r30.u8);
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
	// stb r10,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r10.u8);
	// sth r30,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r30.u16);
	// sth r30,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r30.u16);
	// bl 0x830ff290
	ctx.lr = 0x8312A7E4;
	sub_830FF290(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r8,5
	ctx.r8.s64 = 5;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// stb r11,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
	// stb r11,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stb r30,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r30.u8);
	// stb r30,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r30.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stb r8,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r8.u8);
	// stb r30,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r30.u8);
	// bl 0x8310d3b8
	ctx.lr = 0x8312A828;
	sub_8310D3B8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x8310d4a0
	ctx.lr = 0x8312A830;
	sub_8310D4A0(ctx, base);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,-6588(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6588);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// lwz r11,-6588(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6588);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A864"))) PPC_WEAK_FUNC(sub_8312A864);
PPC_FUNC_IMPL(__imp__sub_8312A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A868"))) PPC_WEAK_FUNC(sub_8312A868);
PPC_FUNC_IMPL(__imp__sub_8312A868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8312A870;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312A884;
	sub_831CDCF0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,102
	ctx.r3.s64 = ctx.r31.s64 + 102;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// addi r29,r31,122
	ctx.r29.s64 = ctx.r31.s64 + 122;
	// addi r28,r31,132
	ctx.r28.s64 = ctx.r31.s64 + 132;
	// addi r27,r31,142
	ctx.r27.s64 = ctx.r31.s64 + 142;
	// addi r6,r31,150
	ctx.r6.s64 = ctx.r31.s64 + 150;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
loc_8312A8C4:
	// lwz r5,-6588(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r25,r5,0,0,13
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r25.u64 & 0xFFFFFFFF0003FFFF);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r5,-6588(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// rlwimi r24,r5,0,14,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFC0000);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r5,-6588(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r25,r5,0,0,13
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r25.u64 & 0xFFFFFFFF0003FFFF);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lwz r5,-6588(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// rlwimi r24,r5,0,14,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFC0000);
	// stwu r24,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stbx r8,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r8,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r8,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r7,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthu r4,2(r6)
	ea = 2 + ctx.r6.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8312a8c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312A8C4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r7,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// stb r9,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r9.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r9,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r9.u8);
	// li r8,253
	ctx.r8.s64 = 253;
	// li r6,25
	ctx.r6.s64 = 25;
	// stb r11,95(r31)
	PPC_STORE_U8(ctx.r31.u32 + 95, ctx.r11.u8);
	// li r5,254
	ctx.r5.s64 = 254;
	// stb r8,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r8.u8);
	// li r4,10
	ctx.r4.s64 = 10;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// li r9,23
	ctx.r9.s64 = 23;
	// stb r11,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r11.u8);
	// stb r6,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r6.u8);
	// stb r5,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r5.u8);
	// stb r4,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// stb r26,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r26.u8);
	// stb r26,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r26.u8);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// stb r9,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r9.u8);
	// stb r26,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r26.u8);
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r7,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stb r26,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A9A4"))) PPC_WEAK_FUNC(sub_8312A9A4);
PPC_FUNC_IMPL(__imp__sub_8312A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A9A8"))) PPC_WEAK_FUNC(sub_8312A9A8);
PPC_FUNC_IMPL(__imp__sub_8312A9A8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// li r5,1792
	ctx.r5.s64 = 1792;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x831cdcf0
	ctx.lr = 0x8312A9D8;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba1ca0
	ctx.lr = 0x8312A9E0;
	sub_82BA1CA0(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r31,1795
	ctx.r11.s64 = ctx.r31.s64 + 1795;
	// stb r30,1924(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1924, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312A9F0:
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stbu r30,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8312a9f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312A9F0;
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

__attribute__((alias("__imp__sub_8312AA14"))) PPC_WEAK_FUNC(sub_8312AA14);
PPC_FUNC_IMPL(__imp__sub_8312AA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312AA18"))) PPC_WEAK_FUNC(sub_8312AA18);
PPC_FUNC_IMPL(__imp__sub_8312AA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// li r6,63
	ctx.r6.s64 = 63;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_8312AA30:
	// li r8,16
	ctx.r8.s64 = 16;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8312AA50:
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8312aa50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AA50;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x8312aa30
	if (!cr0.lt) goto loc_8312AA30;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r11,r3,1795
	ctx.r11.s64 = ctx.r3.s64 + 1795;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312AA74:
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8312aa74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AA74;
	// stb r10,1924(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1924, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312AA88"))) PPC_WEAK_FUNC(sub_8312AA88);
PPC_FUNC_IMPL(__imp__sub_8312AA88) {
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
	// li r11,5730
	ctx.r11.s64 = 5730;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// bl 0x8312a730
	ctx.lr = 0x8312AAB8;
	sub_8312A730(ctx, base);
	// li r5,513
	ctx.r5.s64 = 513;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,1155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1155, ctx.r30.u8);
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// stb r30,1154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1154, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x8312AAD0;
	sub_831CDCF0(ctx, base);
	// li r5,65
	ctx.r5.s64 = 65;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1669
	ctx.r3.s64 = ctx.r31.s64 + 1669;
	// bl 0x831cdcf0
	ctx.lr = 0x8312AAE0;
	sub_831CDCF0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1732
	ctx.r11.s64 = ctx.r31.s64 + 1732;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312AAF0:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8312aaf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AAF0;
	// li r9,100
	ctx.r9.s64 = 100;
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// addi r11,r31,1764
	ctx.r11.s64 = ctx.r31.s64 + 1764;
	// stw r10,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r10.u32);
	// stw r10,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r10.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312AB14:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8312ab14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AB14;
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r11,r31,1964
	ctx.r11.s64 = ctx.r31.s64 + 1964;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312AB2C:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8312ab2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AB2C;
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

__attribute__((alias("__imp__sub_8312AB4C"))) PPC_WEAK_FUNC(sub_8312AB4C);
PPC_FUNC_IMPL(__imp__sub_8312AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312AB50"))) PPC_WEAK_FUNC(sub_8312AB50);
PPC_FUNC_IMPL(__imp__sub_8312AB50) {
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
	// li r10,850
	ctx.r10.s64 = 850;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312AB7C:
	// lwz r10,-6588(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// sth r30,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r30.u16);
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r10,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r10.u32);
	// sthu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8312ab7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AB7C;
	// li r5,4456
	ctx.r5.s64 = 4456;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6800
	ctx.r3.s64 = ctx.r31.s64 + 6800;
	// bl 0x831cdcf0
	ctx.lr = 0x8312ABA4;
	sub_831CDCF0(ctx, base);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11256
	ctx.r3.s64 = ctx.r31.s64 + 11256;
	// bl 0x831cdcf0
	ctx.lr = 0x8312ABB4;
	sub_831CDCF0(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11428
	ctx.r3.s64 = ctx.r31.s64 + 11428;
	// bl 0x831cdcf0
	ctx.lr = 0x8312ABC4;
	sub_831CDCF0(ctx, base);
	// sth r30,11480(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11480, ctx.r30.u16);
	// sth r30,11482(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11482, ctx.r30.u16);
	// addi r3,r31,11576
	ctx.r3.s64 = ctx.r31.s64 + 11576;
	// sth r30,11484(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11484, ctx.r30.u16);
	// li r5,312
	ctx.r5.s64 = 312;
	// sth r30,11486(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11486, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,11488(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11488, ctx.r30.u16);
	// addi r11,r31,11508
	ctx.r11.s64 = ctx.r31.s64 + 11508;
	// sth r30,11490(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11490, ctx.r30.u16);
	// sth r30,11492(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11492, ctx.r30.u16);
	// sth r30,11494(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11494, ctx.r30.u16);
	// sth r30,11496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11496, ctx.r30.u16);
	// sth r30,11498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11498, ctx.r30.u16);
	// sth r30,11500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11500, ctx.r30.u16);
	// sth r30,11502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11502, ctx.r30.u16);
	// sth r30,11504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11504, ctx.r30.u16);
	// stb r30,11506(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11506, ctx.r30.u8);
	// stb r30,11507(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11507, ctx.r30.u8);
	// stw r30,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r30.u32);
	// stw r30,11548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11548, ctx.r30.u32);
	// stw r30,11552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11552, ctx.r30.u32);
	// stw r30,11556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11556, ctx.r30.u32);
	// stb r30,11560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11560, ctx.r30.u8);
	// sth r30,11562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11562, ctx.r30.u16);
	// stw r30,11564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11564, ctx.r30.u32);
	// stw r30,11568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11568, ctx.r30.u32);
	// stb r30,11572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11572, ctx.r30.u8);
	// stb r30,11573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11573, ctx.r30.u8);
	// stb r30,11574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11574, ctx.r30.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x8312AC40;
	sub_831CDCF0(ctx, base);
	// bl 0x8311ec10
	ctx.lr = 0x8312AC44;
	sub_8311EC10(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,11880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11880, ctx.r11.u32);
	// stw r30,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r30.u32);
	// stw r30,11892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11892, ctx.r30.u32);
	// stw r30,11896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11896, ctx.r30.u32);
	// stw r30,11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11900, ctx.r30.u32);
	// stw r30,11904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11904, ctx.r30.u32);
	// stw r30,11908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11908, ctx.r30.u32);
	// stw r30,11912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11912, ctx.r30.u32);
	// stw r30,11916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11916, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8312AC84"))) PPC_WEAK_FUNC(sub_8312AC84);
PPC_FUNC_IMPL(__imp__sub_8312AC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312AC88"))) PPC_WEAK_FUNC(sub_8312AC88);
PPC_FUNC_IMPL(__imp__sub_8312AC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// addi r8,r11,-6636
	ctx.r8.s64 = ctx.r11.s64 + -6636;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,-6572
	ctx.r6.s64 = ctx.r7.s64 + -6572;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,-6588(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r5,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r5.u8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r11.u8);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// stb r11,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r11.u8);
	// stb r11,35(r3)
	PPC_STORE_U8(ctx.r3.u32 + 35, ctx.r11.u8);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r11.u8);
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312AD18"))) PPC_WEAK_FUNC(sub_8312AD18);
PPC_FUNC_IMPL(__imp__sub_8312AD18) {
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
	// bl 0x830ff290
	ctx.lr = 0x8312AD28;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8312AD2C;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8312ad9c
	if (cr6.gt) goto loc_8312AD9C;
	// lis r12,-31981
	ctx.r12.s64 = -2095906816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21168
	ctx.r12.s64 = ctx.r12.s64 + -21168;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8312AD88;
	case 1:
		goto loc_8312AD9C;
	case 2:
		goto loc_8312AD9C;
	case 3:
		goto loc_8312AD88;
	case 4:
		goto loc_8312AD88;
	case 5:
		goto loc_8312AD88;
	case 6:
		goto loc_8312AD9C;
	case 7:
		goto loc_8312AD9C;
	case 8:
		goto loc_8312AD88;
	case 9:
		goto loc_8312AD88;
	case 10:
		goto loc_8312AD88;
	case 11:
		goto loc_8312AD88;
	case 12:
		goto loc_8312AD88;
	case 13:
		goto loc_8312AD88;
	default:
		return;
	}
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21092(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21092);
	// lwz r24,-21092(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21092);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21092(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21092);
	// lwz r24,-21092(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21092);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
	// lwz r24,-21112(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21112);
loc_8312AD88:
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
loc_8312AD9C:
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

__attribute__((alias("__imp__sub_8312ADB0"))) PPC_WEAK_FUNC(sub_8312ADB0);
PPC_FUNC_IMPL(__imp__sub_8312ADB0) {
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
	// bl 0x8312ad18
	ctx.lr = 0x8312ADD0;
	sub_8312AD18(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// ori r11,r11,44752
	ctx.r11.u64 = ctx.r11.u64 | 44752;
	// blt cr6,0x8312ade4
	if (cr6.lt) goto loc_8312ADE4;
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
loc_8312ADE4:
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8312AE04"))) PPC_WEAK_FUNC(sub_8312AE04);
PPC_FUNC_IMPL(__imp__sub_8312AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312AE08"))) PPC_WEAK_FUNC(sub_8312AE08);
PPC_FUNC_IMPL(__imp__sub_8312AE08) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312aed0
	if (cr6.eq) goto loc_8312AED0;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,35265
	ctx.r10.u64 = ctx.r10.u64 | 35265;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8312AE3C:
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8312ae54
	if (!cr6.eq) goto loc_8312AE54;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
loc_8312AE54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8312ae3c
	if (cr6.lt) goto loc_8312AE3C;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x8312aed0
	if (!cr6.lt) goto loc_8312AED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8312AE80:
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x8312ae98
	if (!cr6.eq) goto loc_8312AE98;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
loc_8312AE98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8312ae80
	if (cr6.lt) goto loc_8312AE80;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x8312aed0
	if (!cr6.lt) goto loc_8312AED0;
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
loc_8312AED0:
	// bl 0x8312ad18
	ctx.lr = 0x8312AED4;
	sub_8312AD18(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// blt cr6,0x8312aefc
	if (cr6.lt) goto loc_8312AEFC;
	// ori r10,r11,44752
	ctx.r10.u64 = ctx.r11.u64 | 44752;
	// lbzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
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
loc_8312AEFC:
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// ori r9,r11,44752
	ctx.r9.u64 = ctx.r11.u64 | 44752;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8312AF1C"))) PPC_WEAK_FUNC(sub_8312AF1C);
PPC_FUNC_IMPL(__imp__sub_8312AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312AF20"))) PPC_WEAK_FUNC(sub_8312AF20);
PPC_FUNC_IMPL(__imp__sub_8312AF20) {
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
	// li r10,850
	ctx.r10.s64 = 850;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312AF4C:
	// lwz r10,-6588(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6588);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r10,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r10.u32);
	// sthu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8312af4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AF4C;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r31,11480(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11480, ctx.r31.u16);
	// addi r11,r30,11508
	ctx.r11.s64 = ctx.r30.s64 + 11508;
	// sth r31,11482(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11482, ctx.r31.u16);
	// sth r31,11484(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11484, ctx.r31.u16);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// sth r31,11486(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11486, ctx.r31.u16);
	// sth r31,11488(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11488, ctx.r31.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// sth r31,11490(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11490, ctx.r31.u16);
	// sth r31,11492(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11492, ctx.r31.u16);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// sth r31,11494(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11494, ctx.r31.u16);
	// sth r31,11496(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11496, ctx.r31.u16);
	// sth r31,11498(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11498, ctx.r31.u16);
	// sth r31,11500(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11500, ctx.r31.u16);
	// sth r31,11502(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11502, ctx.r31.u16);
	// sth r31,11504(r30)
	PPC_STORE_U16(ctx.r30.u32 + 11504, ctx.r31.u16);
	// stb r31,11506(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11506, ctx.r31.u8);
	// stb r31,11507(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11507, ctx.r31.u8);
loc_8312AFB4:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8312afb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AFB4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312AFCC:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8312afcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AFCC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r11,22
	ctx.r10.s64 = ctx.r11.s64 + 22;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312AFE4:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8312afe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312AFE4;
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// addi r3,r30,11576
	ctx.r3.s64 = ctx.r30.s64 + 11576;
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// li r5,312
	ctx.r5.s64 = 312;
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stb r31,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r31.u8);
	// sth r31,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r31.u16);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stb r31,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r31.u8);
	// stb r31,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r31.u8);
	// stb r31,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r31.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x8312B028;
	sub_831CDCF0(ctx, base);
	// bl 0x8311ec10
	ctx.lr = 0x8312B02C;
	sub_8311EC10(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,11880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11880, ctx.r11.u32);
	// stw r31,11888(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11888, ctx.r31.u32);
	// stw r31,11892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11892, ctx.r31.u32);
	// stw r31,11896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11896, ctx.r31.u32);
	// stw r31,11900(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11900, ctx.r31.u32);
	// stw r31,11904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11904, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8312B064"))) PPC_WEAK_FUNC(sub_8312B064);
PPC_FUNC_IMPL(__imp__sub_8312B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B068"))) PPC_WEAK_FUNC(sub_8312B068);
PPC_FUNC_IMPL(__imp__sub_8312B068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8312B070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,320
	ctx.r10.s64 = 320;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r8,-6572
	ctx.r8.s64 = ctx.r8.s64 + -6572;
	// addi r7,r9,-6636
	ctx.r7.s64 = ctx.r9.s64 + -6636;
loc_8312B0A0:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r9,6(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6, ctx.r9.u32);
	// lwz r9,-6588(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -6588);
	// clrlwi r9,r9,14
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFF;
	// stw r9,10(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stb r10,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r10.u8);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r5,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r5.u8);
	// stw r9,14(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14, ctx.r9.u32);
	// sth r10,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stb r10,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stb r10,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// stb r10,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
	// stb r10,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r10.u8);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r10,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r10.u8);
	// stb r10,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// stb r10,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r10.u8);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// stb r10,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r10.u8);
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// stbu r10,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8312b0a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312B0A0;
	// addi r31,r28,12800
	ctx.r31.s64 = ctx.r28.s64 + 12800;
	// li r30,527
	ctx.r30.s64 = 527;
	// li r29,255
	ctx.r29.s64 = 255;
loc_8312B120:
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r6,r11,31440
	ctx.r6.s64 = ctx.r11.s64 + 31440;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x823fca98
	ctx.lr = 0x8312B138;
	sub_823FCA98(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259ac00
	ctx.lr = 0x8312B144;
	sub_8259AC00(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,344
	ctx.r31.s64 = ctx.r31.s64 + 344;
	// bge 0x8312b120
	if (!cr0.lt) goto loc_8312B120;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// li r31,7
	ctx.r31.s64 = 7;
	// addi r11,r11,-2176
	ctx.r11.s64 = ctx.r11.s64 + -2176;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8312B160:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x8312B178;
	sub_823FCA98(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x8312b160
	if (!cr0.lt) goto loc_8312B160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B190"))) PPC_WEAK_FUNC(sub_8312B190);
PPC_FUNC_IMPL(__imp__sub_8312B190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8312B198;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 393216;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-30140
	ctx.r3.s64 = ctx.r3.s64 + -30140;
	// bl 0x831cdcf0
	ctx.lr = 0x8312B1B4;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r3,r3,24160
	ctx.r3.s64 = ctx.r3.s64 + 24160;
	// bl 0x8312a868
	ctx.lr = 0x8312B1C8;
	sub_8312A868(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,30360
	ctx.r11.s64 = ctx.r11.s64 + 30360;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r3,r3,24336
	ctx.r3.s64 = ctx.r3.s64 + 24336;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stb r31,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r31.u8);
	// stb r31,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r31.u8);
	// stw r31,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r31.u32);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// bl 0x8312a9a8
	ctx.lr = 0x8312B234;
	sub_8312A9A8(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,24068
	ctx.r3.s64 = ctx.r3.s64 + 24068;
	// bl 0x8312a768
	ctx.lr = 0x8312B240;
	sub_8312A768(ctx, base);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addi r8,r8,24120
	ctx.r8.s64 = ctx.r8.s64 + 24120;
	// addi r7,r7,24130
	ctx.r7.s64 = ctx.r7.s64 + 24130;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// stb r31,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r31.u8);
	// ori r4,r6,24131
	ctx.r4.u64 = ctx.r6.u64 | 24131;
	// stb r29,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r29.u8);
	// addi r5,r5,24140
	ctx.r5.s64 = ctx.r5.s64 + 24140;
	// stb r10,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r10.u8);
	// li r3,9
	ctx.r3.s64 = 9;
	// stb r31,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r31.u8);
	// addis r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 65536;
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// stb r11,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r11.u8);
	// addi r6,r6,24150
	ctx.r6.s64 = ctx.r6.s64 + 24150;
	// stb r31,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r31.u8);
	// stb r31,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r31.u8);
	// stb r31,9(r8)
	PPC_STORE_U8(ctx.r8.u32 + 9, ctx.r31.u8);
	// stb r31,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r31.u8);
	// stb r29,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r29.u8);
	// stb r10,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r10.u8);
	// stb r31,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r31.u8);
	// stb r11,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r11.u8);
	// stb r11,6(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6, ctx.r11.u8);
	// stb r31,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r31.u8);
	// stb r31,8(r7)
	PPC_STORE_U8(ctx.r7.u32 + 8, ctx.r31.u8);
	// stb r31,9(r7)
	PPC_STORE_U8(ctx.r7.u32 + 9, ctx.r31.u8);
	// stb r3,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r3.u8);
	// stbx r29,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r29.u8);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// stb r31,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r31.u8);
	// stb r29,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r29.u8);
	// stb r10,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r10.u8);
	// stb r31,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r31.u8);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stb r11,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r11.u8);
	// stb r11,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r11.u8);
	// addi r3,r3,32692
	ctx.r3.s64 = ctx.r3.s64 + 32692;
	// stb r31,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r31.u8);
	// stb r31,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r31.u8);
	// stb r31,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r31.u8);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// stb r31,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r31.u8);
	// stb r29,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r29.u8);
	// stb r10,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r10.u8);
	// stb r31,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r31.u8);
	// stb r11,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r11.u8);
	// stb r11,6(r6)
	PPC_STORE_U8(ctx.r6.u32 + 6, ctx.r11.u8);
	// stb r31,7(r6)
	PPC_STORE_U8(ctx.r6.u32 + 7, ctx.r31.u8);
	// stb r31,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r31.u8);
	// stb r31,9(r6)
	PPC_STORE_U8(ctx.r6.u32 + 9, ctx.r31.u8);
	// bl 0x8312ab50
	ctx.lr = 0x8312B32C;
	sub_8312AB50(ctx, base);
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r28,r28,32604
	ctx.r28.s64 = ctx.r28.s64 + 32604;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312B344;
	sub_831CDCF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8373fae8
	ctx.lr = 0x8312B350;
	sub_8373FAE8(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,204
	ctx.r6.s64 = 204;
	// stb r31,72(r28)
	PPC_STORE_U8(ctx.r28.u32 + 72, ctx.r31.u8);
	// li r5,165
	ctx.r5.s64 = 165;
	// li r4,143
	ctx.r4.s64 = 143;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x8312B36C;
	sub_82BEE188(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// stw r5,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r5.u32);
	// stw r4,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r4.u32);
	// stb r29,84(r28)
	PPC_STORE_U8(ctx.r28.u32 + 84, ctx.r29.u8);
	// bl 0x83124548
	ctx.lr = 0x8312B38C;
	sub_83124548(ctx, base);
	// addis r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 393216;
	// addi r3,r3,-30316
	ctx.r3.s64 = ctx.r3.s64 + -30316;
	// bl 0x82a63b90
	ctx.lr = 0x8312B398;
	sub_82A63B90(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
loc_8312B3A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b48518
	ctx.lr = 0x8312B3AC;
	sub_82B48518(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2800
	ctx.r27.s64 = ctx.r27.s64 + 2800;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// blt cr6,0x8312b3a0
	if (cr6.lt) goto loc_8312B3A0;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,30440
	ctx.r3.s64 = ctx.r3.s64 + 30440;
	// bl 0x8312aa88
	ctx.lr = 0x8312B3C8;
	sub_8312AA88(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r26,r11,37445
	ctx.r26.u64 = ctx.r11.u64 | 37445;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r11,r8,45476
	ctx.r11.u64 = ctx.r8.u64 | 45476;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r8,r7,45477
	ctx.r8.u64 = ctx.r7.u64 | 45477;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lis r3,5
	ctx.r3.s64 = 327680;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// ori r7,r6,45478
	ctx.r7.u64 = ctx.r6.u64 | 45478;
	// lis r28,5
	ctx.r28.s64 = 327680;
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// ori r6,r5,45479
	ctx.r6.u64 = ctx.r5.u64 | 45479;
	// ori r5,r4,14900
	ctx.r5.u64 = ctx.r4.u64 | 14900;
	// lis r27,5
	ctx.r27.s64 = 327680;
	// ori r25,r9,37444
	ctx.r25.u64 = ctx.r9.u64 | 37444;
	// stbx r31,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u8);
	// ori r4,r3,37446
	ctx.r4.u64 = ctx.r3.u64 | 37446;
	// li r10,28
	ctx.r10.s64 = 28;
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwx r31,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// ori r3,r28,37448
	ctx.r3.u64 = ctx.r28.u64 | 37448;
	// ori r28,r27,37447
	ctx.r28.u64 = ctx.r27.u64 | 37447;
	// li r11,255
	ctx.r11.s64 = 255;
	// stbx r31,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r31.u8);
	// ori r8,r9,44752
	ctx.r8.u64 = ctx.r9.u64 | 44752;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// stbx r11,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r11.u8);
	// stbx r11,r30,r25
	PPC_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r11.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r9,-20924
	ctx.r9.s64 = ctx.r9.s64 + -20924;
	// stwx r31,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r31.u32);
	// add r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 + ctx.r8.u64;
	// stbx r31,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r31.u8);
loc_8312B464:
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,-112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -112, ctx.r31.u32);
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312b464
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312B464;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r9,r30,r8
	ctx.r9.u64 = ctx.r30.u64 + ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312B488:
	// stbx r31,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8312b488
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312B488;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// addi r11,r11,-20668
	ctx.r11.s64 = ctx.r11.s64 + -20668;
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// ori r7,r10,37452
	ctx.r7.u64 = ctx.r10.u64 | 37452;
	// ori r6,r9,37453
	ctx.r6.u64 = ctx.r9.u64 | 37453;
	// ori r5,r8,37454
	ctx.r5.u64 = ctx.r8.u64 | 37454;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stbx r31,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r31.u8);
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// stbx r31,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u8);
	// stbx r31,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u8);
	// bl 0x83125ce0
	ctx.lr = 0x8312B4D8;
	sub_83125CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d0a990
	ctx.lr = 0x8312B4E0;
	sub_82D0A990(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83102db0
	ctx.lr = 0x8312B4F0;
	sub_83102DB0(ctx, base);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// lis r3,-32223
	ctx.r3.s64 = -2111766528;
	// addi r4,r4,760
	ctx.r4.s64 = ctx.r4.s64 + 760;
	// addi r3,r3,744
	ctx.r3.s64 = ctx.r3.s64 + 744;
	// bl 0x82d0a9a8
	ctx.lr = 0x8312B504;
	sub_82D0A9A8(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r29,r30,51
	ctx.r29.s64 = ctx.r30.s64 + 51;
loc_8312B50C:
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d0a9c0
	ctx.lr = 0x8312B520;
	sub_82D0A9C0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2800
	ctx.r29.s64 = ctx.r29.s64 + 2800;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// blt cr6,0x8312b50c
	if (cr6.lt) goto loc_8312B50C;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r3,r3,-20056
	ctx.r3.s64 = ctx.r3.s64 + -20056;
	// bl 0x83147570
	ctx.lr = 0x8312B53C;
	sub_83147570(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r3,r3,-19992
	ctx.r3.s64 = ctx.r3.s64 + -19992;
	// bl 0x8312e340
	ctx.lr = 0x8312B548;
	sub_8312E340(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r9,r11,14896
	ctx.r9.u64 = ctx.r11.u64 | 14896;
	// ori r8,r10,14897
	ctx.r8.u64 = ctx.r10.u64 | 14897;
	// stbx r31,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u8);
	// stbx r31,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B568"))) PPC_WEAK_FUNC(sub_8312B568);
PPC_FUNC_IMPL(__imp__sub_8312B568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312B570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
loc_8312B580:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b48b68
	ctx.lr = 0x8312B588;
	sub_82B48B68(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,2800
	ctx.r30.s64 = ctx.r30.s64 + 2800;
	// bge 0x8312b580
	if (!cr0.lt) goto loc_8312B580;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r8,r11,24112
	ctx.r8.u64 = ctx.r11.u64 | 24112;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r10,r10,24168
	ctx.r10.s64 = ctx.r10.s64 + 24168;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
loc_8312B5B4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312b5b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312B5B4;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,24336
	ctx.r3.s64 = ctx.r3.s64 + 24336;
	// bl 0x8312aa18
	ctx.lr = 0x8312B5C8;
	sub_8312AA18(ctx, base);
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r31,r31,32604
	ctx.r31.s64 = ctx.r31.s64 + 32604;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312B5E0;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4f5d0
	ctx.lr = 0x8312B5E8;
	sub_82B4F5D0(ctx, base);
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,32692
	ctx.r3.s64 = ctx.r3.s64 + 32692;
	// bl 0x8312af20
	ctx.lr = 0x8312B5F4;
	sub_8312AF20(ctx, base);
	// addis r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 131072;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126020
	ctx.lr = 0x8312B600;
	sub_83126020(ctx, base);
	// addis r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 131072;
	// addi r3,r3,-20056
	ctx.r3.s64 = ctx.r3.s64 + -20056;
	// bl 0x83147570
	ctx.lr = 0x8312B60C;
	sub_83147570(ctx, base);
	// addis r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 131072;
	// addi r3,r3,-19992
	ctx.r3.s64 = ctx.r3.s64 + -19992;
	// bl 0x8312b068
	ctx.lr = 0x8312B618;
	sub_8312B068(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312B624"))) PPC_WEAK_FUNC(sub_8312B624);
PPC_FUNC_IMPL(__imp__sub_8312B624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B628"))) PPC_WEAK_FUNC(sub_8312B628);
PPC_FUNC_IMPL(__imp__sub_8312B628) {
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
	// bl 0x8312b568
	ctx.lr = 0x8312B644;
	sub_8312B568(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83124908
	ctx.lr = 0x8312B650;
	sub_83124908(ctx, base);
	// addis r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 393216;
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a63b90
	ctx.lr = 0x8312B660;
	sub_82A63B90(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,171(r30)
	PPC_STORE_U8(ctx.r30.u32 + 171, ctx.r9.u8);
	// bl 0x8312b190
	ctx.lr = 0x8312B670;
	sub_8312B190(ctx, base);
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

__attribute__((alias("__imp__sub_8312B68C"))) PPC_WEAK_FUNC(sub_8312B68C);
PPC_FUNC_IMPL(__imp__sub_8312B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B690"))) PPC_WEAK_FUNC(sub_8312B690);
PPC_FUNC_IMPL(__imp__sub_8312B690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// srawi r9,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 1;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312B6A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r10,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8312b6cc
	if (!cr6.eq) goto loc_8312B6CC;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r7,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// bne cr6,0x8312b6cc
	if (!cr6.eq) goto loc_8312B6CC;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8312B6CC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// blt cr6,0x8312b6a0
	if (cr6.lt) goto loc_8312B6A0;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B6E4"))) PPC_WEAK_FUNC(sub_8312B6E4);
PPC_FUNC_IMPL(__imp__sub_8312B6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B6E8"))) PPC_WEAK_FUNC(sub_8312B6E8);
PPC_FUNC_IMPL(__imp__sub_8312B6E8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B6F4"))) PPC_WEAK_FUNC(sub_8312B6F4);
PPC_FUNC_IMPL(__imp__sub_8312B6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B6F8"))) PPC_WEAK_FUNC(sub_8312B6F8);
PPC_FUNC_IMPL(__imp__sub_8312B6F8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312B70C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8312B720;
	sub_83123A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B730"))) PPC_WEAK_FUNC(sub_8312B730);
PPC_FUNC_IMPL(__imp__sub_8312B730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8312b740
	if (cr6.lt) goto loc_8312B740;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312B740:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,601(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 601);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B74C"))) PPC_WEAK_FUNC(sub_8312B74C);
PPC_FUNC_IMPL(__imp__sub_8312B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B750"))) PPC_WEAK_FUNC(sub_8312B750);
PPC_FUNC_IMPL(__imp__sub_8312B750) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312B768;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x8312B780;
	sub_83123BA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B790"))) PPC_WEAK_FUNC(sub_8312B790);
PPC_FUNC_IMPL(__imp__sub_8312B790) {
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
	// li r7,32
	ctx.r7.s64 = 32;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r11,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ctx.r4.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,88(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B7CC"))) PPC_WEAK_FUNC(sub_8312B7CC);
PPC_FUNC_IMPL(__imp__sub_8312B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B7D0"))) PPC_WEAK_FUNC(sub_8312B7D0);
PPC_FUNC_IMPL(__imp__sub_8312B7D0) {
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
	// li r7,32
	ctx.r7.s64 = 32;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r11,r7,r5
	xer.ca = ctx.r5.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// and r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 & ctx.r4.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,152(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B80C"))) PPC_WEAK_FUNC(sub_8312B80C);
PPC_FUNC_IMPL(__imp__sub_8312B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B810"))) PPC_WEAK_FUNC(sub_8312B810);
PPC_FUNC_IMPL(__imp__sub_8312B810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8312b820
	if (cr6.lt) goto loc_8312B820;
loc_8312B818:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312B820:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x8312b818
	if (!cr6.lt) goto loc_8312B818;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,216(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B83C"))) PPC_WEAK_FUNC(sub_8312B83C);
PPC_FUNC_IMPL(__imp__sub_8312B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B840"))) PPC_WEAK_FUNC(sub_8312B840);
PPC_FUNC_IMPL(__imp__sub_8312B840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,280(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B84C"))) PPC_WEAK_FUNC(sub_8312B84C);
PPC_FUNC_IMPL(__imp__sub_8312B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B850"))) PPC_WEAK_FUNC(sub_8312B850);
PPC_FUNC_IMPL(__imp__sub_8312B850) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B858"))) PPC_WEAK_FUNC(sub_8312B858);
PPC_FUNC_IMPL(__imp__sub_8312B858) {
	PPC_FUNC_PROLOGUE();
	// sth r4,5840(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5840, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B860"))) PPC_WEAK_FUNC(sub_8312B860);
PPC_FUNC_IMPL(__imp__sub_8312B860) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,5840(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B868"))) PPC_WEAK_FUNC(sub_8312B868);
PPC_FUNC_IMPL(__imp__sub_8312B868) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,596(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B870"))) PPC_WEAK_FUNC(sub_8312B870);
PPC_FUNC_IMPL(__imp__sub_8312B870) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,597(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 597);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B878"))) PPC_WEAK_FUNC(sub_8312B878);
PPC_FUNC_IMPL(__imp__sub_8312B878) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,599(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 599);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B880"))) PPC_WEAK_FUNC(sub_8312B880);
PPC_FUNC_IMPL(__imp__sub_8312B880) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,600(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B888"))) PPC_WEAK_FUNC(sub_8312B888);
PPC_FUNC_IMPL(__imp__sub_8312B888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// blt cr6,0x8312b8a4
	if (cr6.lt) goto loc_8312B8A4;
	// lwz r11,376(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	// lwz r10,380(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8312B8A4:
	// addi r11,r5,47
	ctx.r11.s64 = ctx.r5.s64 + 47;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B8C4"))) PPC_WEAK_FUNC(sub_8312B8C4);
PPC_FUNC_IMPL(__imp__sub_8312B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B8C8"))) PPC_WEAK_FUNC(sub_8312B8C8);
PPC_FUNC_IMPL(__imp__sub_8312B8C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,568(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B8D0"))) PPC_WEAK_FUNC(sub_8312B8D0);
PPC_FUNC_IMPL(__imp__sub_8312B8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x8312b8e0
	if (cr6.lt) goto loc_8312B8E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312B8E0:
	// addi r11,r4,143
	ctx.r11.s64 = ctx.r4.s64 + 143;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B8F0"))) PPC_WEAK_FUNC(sub_8312B8F0);
PPC_FUNC_IMPL(__imp__sub_8312B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8312b900
	if (cr6.lt) goto loc_8312B900;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312B900:
	// addi r11,r4,147
	ctx.r11.s64 = ctx.r4.s64 + 147;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B910"))) PPC_WEAK_FUNC(sub_8312B910);
PPC_FUNC_IMPL(__imp__sub_8312B910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B934"))) PPC_WEAK_FUNC(sub_8312B934);
PPC_FUNC_IMPL(__imp__sub_8312B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B938"))) PPC_WEAK_FUNC(sub_8312B938);
PPC_FUNC_IMPL(__imp__sub_8312B938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 152, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B95C"))) PPC_WEAK_FUNC(sub_8312B95C);
PPC_FUNC_IMPL(__imp__sub_8312B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B960"))) PPC_WEAK_FUNC(sub_8312B960);
PPC_FUNC_IMPL(__imp__sub_8312B960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 216, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B984"))) PPC_WEAK_FUNC(sub_8312B984);
PPC_FUNC_IMPL(__imp__sub_8312B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B988"))) PPC_WEAK_FUNC(sub_8312B988);
PPC_FUNC_IMPL(__imp__sub_8312B988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B994"))) PPC_WEAK_FUNC(sub_8312B994);
PPC_FUNC_IMPL(__imp__sub_8312B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312B998"))) PPC_WEAK_FUNC(sub_8312B998);
PPC_FUNC_IMPL(__imp__sub_8312B998) {
	PPC_FUNC_PROLOGUE();
	// stb r4,596(r3)
	PPC_STORE_U8(ctx.r3.u32 + 596, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9A0"))) PPC_WEAK_FUNC(sub_8312B9A0);
PPC_FUNC_IMPL(__imp__sub_8312B9A0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,597(r3)
	PPC_STORE_U8(ctx.r3.u32 + 597, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9A8"))) PPC_WEAK_FUNC(sub_8312B9A8);
PPC_FUNC_IMPL(__imp__sub_8312B9A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,598(r3)
	PPC_STORE_U8(ctx.r3.u32 + 598, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9B0"))) PPC_WEAK_FUNC(sub_8312B9B0);
PPC_FUNC_IMPL(__imp__sub_8312B9B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,599(r3)
	PPC_STORE_U8(ctx.r3.u32 + 599, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9B8"))) PPC_WEAK_FUNC(sub_8312B9B8);
PPC_FUNC_IMPL(__imp__sub_8312B9B8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 600, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9C0"))) PPC_WEAK_FUNC(sub_8312B9C0);
PPC_FUNC_IMPL(__imp__sub_8312B9C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,628(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 628);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9C8"))) PPC_WEAK_FUNC(sub_8312B9C8);
PPC_FUNC_IMPL(__imp__sub_8312B9C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,628(r3)
	PPC_STORE_U8(ctx.r3.u32 + 628, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9D0"))) PPC_WEAK_FUNC(sub_8312B9D0);
PPC_FUNC_IMPL(__imp__sub_8312B9D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 624, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9D8"))) PPC_WEAK_FUNC(sub_8312B9D8);
PPC_FUNC_IMPL(__imp__sub_8312B9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9E0"))) PPC_WEAK_FUNC(sub_8312B9E0);
PPC_FUNC_IMPL(__imp__sub_8312B9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,620(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9E8"))) PPC_WEAK_FUNC(sub_8312B9E8);
PPC_FUNC_IMPL(__imp__sub_8312B9E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9F0"))) PPC_WEAK_FUNC(sub_8312B9F0);
PPC_FUNC_IMPL(__imp__sub_8312B9F0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,630(r3)
	PPC_STORE_U8(ctx.r3.u32 + 630, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312B9F8"))) PPC_WEAK_FUNC(sub_8312B9F8);
PPC_FUNC_IMPL(__imp__sub_8312B9F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,629(r3)
	PPC_STORE_U8(ctx.r3.u32 + 629, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BA04"))) PPC_WEAK_FUNC(sub_8312BA04);
PPC_FUNC_IMPL(__imp__sub_8312BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BA08"))) PPC_WEAK_FUNC(sub_8312BA08);
PPC_FUNC_IMPL(__imp__sub_8312BA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312BA48"))) PPC_WEAK_FUNC(sub_8312BA48);
PPC_FUNC_IMPL(__imp__sub_8312BA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BA4C"))) PPC_WEAK_FUNC(sub_8312BA4C);
PPC_FUNC_IMPL(__imp__sub_8312BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BA50"))) PPC_WEAK_FUNC(sub_8312BA50);
PPC_FUNC_IMPL(__imp__sub_8312BA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8312BA58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8312BA64;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r27,376
	ctx.r28.s64 = ctx.r27.s64 + 376;
	// addis r29,r11,6
	ctx.r29.s64 = ctx.r11.s64 + 393216;
	// li r26,255
	ctx.r26.s64 = 255;
	// addi r29,r29,-30316
	ctx.r29.s64 = ctx.r29.s64 + -30316;
loc_8312BA7C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r31,69(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bge cr6,0x8312bac8
	if (!cr6.lt) goto loc_8312BAC8;
	// bl 0x831156e8
	ctx.lr = 0x8312BAA8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r31,2800
	ctx.r10.s64 = ctx.r31.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,690
	ctx.r3.s64 = ctx.r11.s64 + 690;
	// bl 0x8312a600
	ctx.lr = 0x8312BABC;
	sub_8312A600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8312bacc
	goto loc_8312BACC;
loc_8312BAC8:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_8312BACC:
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// bge cr6,0x8312badc
	if (!cr6.lt) goto loc_8312BADC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_8312BADC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x8312ba7c
	if (cr6.lt) goto loc_8312BA7C;
	// bl 0x831156e8
	ctx.lr = 0x8312BAF0;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x8312BAFC;
	sub_8312AE08(ctx, base);
	// stb r3,568(r27)
	PPC_STORE_U8(ctx.r27.u32 + 568, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312BB08"))) PPC_WEAK_FUNC(sub_8312BB08);
PPC_FUNC_IMPL(__imp__sub_8312BB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,147
	ctx.r11.s64 = ctx.r4.s64 + 147;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BB20"))) PPC_WEAK_FUNC(sub_8312BB20);
PPC_FUNC_IMPL(__imp__sub_8312BB20) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x8312bb74
	if (!cr6.lt) goto loc_8312BB74;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x8312bb74
	if (!cr6.lt) goto loc_8312BB74;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312BB54;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8312BB68;
	sub_83123A08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82b81268
	ctx.lr = 0x8312BB74;
	sub_82B81268(ctx, base);
loc_8312BB74:
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

__attribute__((alias("__imp__sub_8312BB8C"))) PPC_WEAK_FUNC(sub_8312BB8C);
PPC_FUNC_IMPL(__imp__sub_8312BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BB90"))) PPC_WEAK_FUNC(sub_8312BB90);
PPC_FUNC_IMPL(__imp__sub_8312BB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312bbb0
	if (cr6.eq) goto loc_8312BBB0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8312BBB0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,5312
	ctx.r4.s64 = ctx.r11.s64 + 5312;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312BBD0"))) PPC_WEAK_FUNC(sub_8312BBD0);
PPC_FUNC_IMPL(__imp__sub_8312BBD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BBD4"))) PPC_WEAK_FUNC(sub_8312BBD4);
PPC_FUNC_IMPL(__imp__sub_8312BBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BBD8"))) PPC_WEAK_FUNC(sub_8312BBD8);
PPC_FUNC_IMPL(__imp__sub_8312BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,487
	ctx.r11.s64 = ctx.r5.s64 + 487;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BC20"))) PPC_WEAK_FUNC(sub_8312BC20);
PPC_FUNC_IMPL(__imp__sub_8312BC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,21
	cr6.compare<uint32_t>(ctx.r6.u32, 21, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r5,21
	ctx.r11.s64 = ctx.r5.s64 * 21;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,2934
	ctx.r11.s64 = ctx.r11.s64 + 2934;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BC4C"))) PPC_WEAK_FUNC(sub_8312BC4C);
PPC_FUNC_IMPL(__imp__sub_8312BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BC50"))) PPC_WEAK_FUNC(sub_8312BC50);
PPC_FUNC_IMPL(__imp__sub_8312BC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,6
	ctx.r10.s64 = 6;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312BC8C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8312bc8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312BC8C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BC9C"))) PPC_WEAK_FUNC(sub_8312BC9C);
PPC_FUNC_IMPL(__imp__sub_8312BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BCA0"))) PPC_WEAK_FUNC(sub_8312BCA0);
PPC_FUNC_IMPL(__imp__sub_8312BCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,21
	cr6.compare<uint32_t>(ctx.r6.u32, 21, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r5,21
	ctx.r11.s64 = ctx.r5.s64 * 21;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312BCDC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8312bcdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312BCDC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BCEC"))) PPC_WEAK_FUNC(sub_8312BCEC);
PPC_FUNC_IMPL(__imp__sub_8312BCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312BCF0"))) PPC_WEAK_FUNC(sub_8312BCF0);
PPC_FUNC_IMPL(__imp__sub_8312BCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r3,8492
	ctx.r11.s64 = ctx.r3.s64 + 8492;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312BD00:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312bd00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312BD00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312BD10"))) PPC_WEAK_FUNC(sub_8312BD10);
PPC_FUNC_IMPL(__imp__sub_8312BD10) {
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
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r3,13
	ctx.r11.s64 = ctx.r3.s64 + 13;
	// addi r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 + 76;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r7,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lbz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// lbz r3,13(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// stb r3,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r3.u8);
	// lbz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 14);
	// stb r9,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r9.u8);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lbz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// stb r7,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r7.u8);
	// lbz r6,21(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// stb r6,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r6.u8);
	// lbz r5,22(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// stb r5,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r5.u8);
	// lbz r4,23(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// stb r4,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r4.u8);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lbz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// lbz r8,29(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// stb r8,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r8.u8);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lbz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stb r6,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r6.u8);
	// lbz r5,37(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// stb r5,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r5.u8);
	// lbz r4,38(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 38);
	// stb r4,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r4.u8);
	// lbz r3,39(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// stb r3,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r3.u8);
	// lbz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r9,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r9.u8);
	// lbz r8,41(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// stb r8,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r8.u8);
	// lbz r7,42(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// stb r7,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r7.u8);
	// lhz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// sth r6,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r6.u16);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
loc_8312BE44:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312be44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312BE44;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x831ce980
	ctx.lr = 0x8312BE60;
	sub_831CE980(ctx, base);
	// lhz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 232);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r4,r30,244
	ctx.r4.s64 = ctx.r30.s64 + 244;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// sth r11,232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 232, ctx.r11.u16);
	// lhz r10,234(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 234);
	// sth r10,234(r31)
	PPC_STORE_U16(ctx.r31.u32 + 234, ctx.r10.u16);
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// lwz r8,240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r8,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// bl 0x831ce980
	ctx.lr = 0x8312BE90;
	sub_831CE980(ctx, base);
	// addi r3,r31,2868
	ctx.r3.s64 = ctx.r31.s64 + 2868;
	// addi r4,r30,2868
	ctx.r4.s64 = ctx.r30.s64 + 2868;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// bl 0x831ce980
	ctx.lr = 0x8312BEA0;
	sub_831CE980(ctx, base);
	// li r5,14848
	ctx.r5.s64 = 14848;
	// addi r4,r30,4132
	ctx.r4.s64 = ctx.r30.s64 + 4132;
	// addi r3,r31,4132
	ctx.r3.s64 = ctx.r31.s64 + 4132;
	// bl 0x831ce980
	ctx.lr = 0x8312BEB0;
	sub_831CE980(ctx, base);
	// addi r11,r30,18980
	ctx.r11.s64 = ctx.r30.s64 + 18980;
	// li r9,64
	ctx.r9.s64 = 64;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r7,r31,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312BED0:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r9.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbz r4,5(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// lbz r3,6(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lbz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r6,9(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// lbz r5,10(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10);
	// stb r5,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r5.u8);
	// lbz r4,11(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// stb r4,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r4.u8);
	// lbz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r3,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r3.u8);
	// lbz r9,13(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r9,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// lbzu r9,14(r10)
	ea = 14 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r9.u8);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// bdnz 0x8312bed0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312BED0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,19876
	ctx.r10.s64 = ctx.r31.s64 + 19876;
	// addi r11,r30,19872
	ctx.r11.s64 = ctx.r30.s64 + 19872;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8312BF5C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312bf5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312BF5C;
	// lhz r11,19900(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 19900);
	// addi r3,r31,19928
	ctx.r3.s64 = ctx.r31.s64 + 19928;
	// addi r4,r30,19928
	ctx.r4.s64 = ctx.r30.s64 + 19928;
	// li r5,232
	ctx.r5.s64 = 232;
	// sth r11,19900(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19900, ctx.r11.u16);
	// addi r11,r31,19902
	ctx.r11.s64 = ctx.r31.s64 + 19902;
	// lhz r10,19902(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 19902);
	// sth r10,19902(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19902, ctx.r10.u16);
	// lhz r9,19904(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 19904);
	// sth r9,19904(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19904, ctx.r9.u16);
	// lhz r8,19906(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 19906);
	// sth r8,19906(r31)
	PPC_STORE_U16(ctx.r31.u32 + 19906, ctx.r8.u16);
	// lwz r7,19908(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19908);
	// stw r7,19908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19908, ctx.r7.u32);
	// lwz r6,19912(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19912);
	// stw r6,19912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19912, ctx.r6.u32);
	// lwz r11,19916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19916);
	// stw r11,19916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19916, ctx.r11.u32);
	// lwz r10,19920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19920);
	// stw r10,19920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19920, ctx.r10.u32);
	// lwz r9,19924(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19924);
	// stw r9,19924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19924, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x8312BFC4;
	sub_831CE980(ctx, base);
	// lhz r8,20160(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20160);
	// addi r3,r31,20168
	ctx.r3.s64 = ctx.r31.s64 + 20168;
	// addi r4,r30,20168
	ctx.r4.s64 = ctx.r30.s64 + 20168;
	// li r5,132
	ctx.r5.s64 = 132;
	// sth r8,20160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20160, ctx.r8.u16);
	// lbz r7,20162(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20162);
	// stb r7,20162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20162, ctx.r7.u8);
	// lbz r6,20163(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20163);
	// stb r6,20163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20163, ctx.r6.u8);
	// lbz r11,20164(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20164);
	// stb r11,20164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20164, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x8312BFF4;
	sub_831CE980(ctx, base);
	// lwz r10,20300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20300);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20300, ctx.r10.u32);
	// lwz r9,20304(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20304);
	// stw r9,20304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20304, ctx.r9.u32);
	// lwz r8,20308(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20308);
	// stw r8,20308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20308, ctx.r8.u32);
	// lwz r7,20312(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20312);
	// stw r7,20312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20312, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8312C030"))) PPC_WEAK_FUNC(sub_8312C030);
PPC_FUNC_IMPL(__imp__sub_8312C030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8312C038;
	__savegprlr_25(ctx, base);
	// li r12,-20560
	ctx.r12.s64 = -20560;
	// bl 0x831d2724
	ctx.lr = 0x8312C040;
	sub_831D2724(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// blt cr6,0x8312c084
	if (cr6.lt) goto loc_8312C084;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,20560
	ctx.r1.s64 = ctx.r1.s64 + 20560;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312C084:
	// clrlwi r25,r8,24
	ctx.r25.u64 = ctx.r8.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addic r11,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// subfe r10,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312C09C;
	sub_831156E8(ctx, base);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r31,r9,14904
	ctx.r31.u64 = ctx.r9.u64 | 14904;
	// add r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 + ctx.r31.u64;
	// bl 0x83123a08
	ctx.lr = 0x8312C0B4;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1209
	ctx.r4.s64 = ctx.r11.s64 + 1209;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x8312C0C8;
	sub_831CE980(ctx, base);
	// lwz r7,280(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 280);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x831476d0
	ctx.lr = 0x8312C0D8;
	sub_831476D0(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// bl 0x831156e8
	ctx.lr = 0x8312C0E0;
	sub_831156E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,52(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// bl 0x8312bd10
	ctx.lr = 0x8312C0F4;
	sub_8312BD10(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// beq cr6,0x8312c10c
	if (cr6.eq) goto loc_8312C10C;
	// bl 0x83123988
	ctx.lr = 0x8312C108;
	sub_83123988(ctx, base);
	// b 0x8312c110
	goto loc_8312C110;
loc_8312C10C:
	// bl 0x83123968
	ctx.lr = 0x8312C110;
	sub_83123968(ctx, base);
loc_8312C110:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bl 0x8312b690
	ctx.lr = 0x8312C134;
	sub_8312B690(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x8312c144
	if (!cr6.eq) goto loc_8312C144;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8312C144:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83102db0
	ctx.lr = 0x8312C14C;
	sub_83102DB0(ctx, base);
	// addi r1,r1,20560
	ctx.r1.s64 = ctx.r1.s64 + 20560;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312C154"))) PPC_WEAK_FUNC(sub_8312C154);
PPC_FUNC_IMPL(__imp__sub_8312C154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312C158"))) PPC_WEAK_FUNC(sub_8312C158);
PPC_FUNC_IMPL(__imp__sub_8312C158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8312C160;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bge cr6,0x8312c2b4
	if (!cr6.lt) goto loc_8312C2B4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312c030
	ctx.lr = 0x8312C198;
	sub_8312C030(ctx, base);
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// bne cr6,0x8312c1a4
	if (!cr6.eq) goto loc_8312C1A4;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8312C1A4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312C1AC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8312C1C0;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1209
	ctx.r4.s64 = ctx.r11.s64 + 1209;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x8312C1D4;
	sub_831CE980(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8312C1E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312c210
	if (!cr6.eq) goto loc_8312C210;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r5,r6,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bne cr6,0x8312c210
	if (!cr6.eq) goto loc_8312C210;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// beq cr6,0x8312c248
	if (cr6.eq) goto loc_8312C248;
loc_8312C210:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x8312c1e4
	if (cr6.lt) goto loc_8312C1E4;
	// li r11,10
	ctx.r11.s64 = 10;
loc_8312C224:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x8312c250
	if (!cr6.eq) goto loc_8312C250;
	// li r11,215
	ctx.r11.s64 = 215;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8312C248:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8312c224
	goto loc_8312C224;
loc_8312C250:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r6,r26,24
	ctx.r6.u64 = ctx.r26.u32 & 0xFF;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r3,r4,3,21,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// ldx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r9.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x8312c29c
	if (cr6.eq) goto loc_8312C29C;
	// lbz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r10,91(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// stb r9,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8312C29C:
	// lbz r11,93(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// stb r9,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
loc_8312C2B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312C2BC"))) PPC_WEAK_FUNC(sub_8312C2BC);
PPC_FUNC_IMPL(__imp__sub_8312C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312C2C0"))) PPC_WEAK_FUNC(sub_8312C2C0);
PPC_FUNC_IMPL(__imp__sub_8312C2C0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x8312c3b0
	if (!cr6.lt) goto loc_8312C3B0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312c030
	ctx.lr = 0x8312C2FC;
	sub_8312C030(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312C304;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8312C318;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1209
	ctx.r4.s64 = ctx.r11.s64 + 1209;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x8312C32C;
	sub_831CE980(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8312C340:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r5,r10,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x8312c36c
	if (!cr6.eq) goto loc_8312C36C;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r4,r5,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// bne cr6,0x8312c36c
	if (!cr6.eq) goto loc_8312C36C;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// beq cr6,0x8312c3c8
	if (cr6.eq) goto loc_8312C3C8;
loc_8312C36C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x8312c340
	if (cr6.lt) goto loc_8312C340;
	// li r11,10
	ctx.r11.s64 = 10;
loc_8312C380:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r4,r5,3,21,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// ldx r3,r4,r9
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r9.u32);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8312C3B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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
loc_8312C3C8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8312c380
	goto loc_8312C380;
}

