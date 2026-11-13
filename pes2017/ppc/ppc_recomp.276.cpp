#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830EF9D8"))) PPC_WEAK_FUNC(sub_830EF9D8);
PPC_FUNC_IMPL(__imp__sub_830EF9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// srawi r9,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 24;
	// srawi r8,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r9,r8,0,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r9,r7,8,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFA20"))) PPC_WEAK_FUNC(sub_830EFA20);
PPC_FUNC_IMPL(__imp__sub_830EFA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,5092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5092);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830efb18
	if (cr6.eq) goto loc_830EFB18;
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,8
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 8;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x830efb18
	if (!cr6.lt) goto loc_830EFB18;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lbz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r31,r9,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r10,r10,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 | ctx.r9.u64;
	// or r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 | ctx.r30.u64;
	// beq cr6,0x830efaec
	if (cr6.eq) goto loc_830EFAEC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830efae8
	if (cr6.eq) goto loc_830EFAE8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r31,r8,24,16,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwimi r11,r8,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r31,r7
	ctx.r8.u64 = ctx.r31.u64 | ctx.r7.u64;
	// rlwinm r7,r11,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x830efaec
	goto loc_830EFAEC;
loc_830EFAE8:
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_830EFAEC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830efb08
	if (cr6.eq) goto loc_830EFB08;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830efb04
	if (cr6.eq) goto loc_830EFB04;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x830efb08
	goto loc_830EFB08;
loc_830EFB04:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
loc_830EFB08:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830efb14
	if (cr6.eq) goto loc_830EFB14;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_830EFB14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830EFB18:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFB24"))) PPC_WEAK_FUNC(sub_830EFB24);
PPC_FUNC_IMPL(__imp__sub_830EFB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFB28"))) PPC_WEAK_FUNC(sub_830EFB28);
PPC_FUNC_IMPL(__imp__sub_830EFB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x830efb4c
	if (!cr6.eq) goto loc_830EFB4C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830EFB4C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r6,5092(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5092);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830efc34
	if (cr6.eq) goto loc_830EFC34;
	// lhz r11,10(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// srawi r11,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// srawi r30,r9,24
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFFF) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 24;
	// rlwimi r11,r7,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r30,r10,0,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r30,r5,8,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// beq cr6,0x830efc34
	if (cr6.eq) goto loc_830EFC34;
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
loc_830EFBB0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_830EFBB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// beq cr6,0x830efbdc
	if (cr6.eq) goto loc_830EFBDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830efbb8
	if (cr6.eq) goto loc_830EFBB8;
loc_830EFBDC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830efc20
	if (cr6.eq) goto loc_830EFC20;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,84
	ctx.r7.s64 = ctx.r7.s64 + 84;
	// srawi r10,r11,24
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// srawi r9,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r9,0,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r30,r11,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r10,r30,8,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x830efbb0
	if (cr6.lt) goto loc_830EFBB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830EFC20:
	// mulli r11,r8,84
	ctx.r11.s64 = ctx.r8.s64 * 84;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_830EFC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFC44"))) PPC_WEAK_FUNC(sub_830EFC44);
PPC_FUNC_IMPL(__imp__sub_830EFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFC48"))) PPC_WEAK_FUNC(sub_830EFC48);
PPC_FUNC_IMPL(__imp__sub_830EFC48) {
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
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// ble cr6,0x830efcbc
	if (!cr6.gt) goto loc_830EFCBC;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efc90
	if (cr6.eq) goto loc_830EFC90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFC8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830EFC90:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,5092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5092, ctx.r30.u32);
	// stw r11,5096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5096, ctx.r11.u32);
	// beq cr6,0x830efcbc
	if (cr6.eq) goto loc_830EFCBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFCBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFCBC:
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

__attribute__((alias("__imp__sub_830EFCD4"))) PPC_WEAK_FUNC(sub_830EFCD4);
PPC_FUNC_IMPL(__imp__sub_830EFCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFCD8"))) PPC_WEAK_FUNC(sub_830EFCD8);
PPC_FUNC_IMPL(__imp__sub_830EFCD8) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,5092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830efd24
	if (cr6.eq) goto loc_830EFD24;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r3,5088(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5088);
	// bl 0x83103e98
	ctx.lr = 0x830EFD08;
	sub_83103E98(ctx, base);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,5088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5088, ctx.r11.u32);
	// stw r10,5092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5092, ctx.r10.u32);
	// stw r9,5096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5096, ctx.r9.u32);
loc_830EFD24:
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

__attribute__((alias("__imp__sub_830EFD40"))) PPC_WEAK_FUNC(sub_830EFD40);
PPC_FUNC_IMPL(__imp__sub_830EFD40) {
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
	// bl 0x83103f60
	ctx.lr = 0x830EFD60;
	sub_83103F60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830efd78
	if (cr6.eq) goto loc_830EFD78;
	// bl 0x82416268
	ctx.lr = 0x830EFD74;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830EFD78:
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

__attribute__((alias("__imp__sub_830EFD90"))) PPC_WEAK_FUNC(sub_830EFD90);
PPC_FUNC_IMPL(__imp__sub_830EFD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830EFD98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efdc4
	if (cr6.eq) goto loc_830EFDC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFDC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
loc_830EFDC4:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// lwz r11,5092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830efe00
	if (cr6.eq) goto loc_830EFE00;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// lwz r3,5088(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5088);
	// bl 0x83103e98
	ctx.lr = 0x830EFDE0;
	sub_83103E98(ctx, base);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// lwz r3,9904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9904);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,5088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5088, ctx.r11.u32);
	// stw r10,5092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5092, ctx.r10.u32);
	// stw r9,5096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5096, ctx.r9.u32);
loc_830EFE00:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efe18
	if (cr6.eq) goto loc_830EFE18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFE18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFE18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EFE24"))) PPC_WEAK_FUNC(sub_830EFE24);
PPC_FUNC_IMPL(__imp__sub_830EFE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFE28"))) PPC_WEAK_FUNC(sub_830EFE28);
PPC_FUNC_IMPL(__imp__sub_830EFE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830efe40
	if (cr6.eq) goto loc_830EFE40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830efa20
	sub_830EFA20(ctx, base);
	return;
loc_830EFE40:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFE48"))) PPC_WEAK_FUNC(sub_830EFE48);
PPC_FUNC_IMPL(__imp__sub_830EFE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830efe64
	if (cr6.eq) goto loc_830EFE64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830efa20
	sub_830EFA20(ctx, base);
	return;
loc_830EFE64:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFE6C"))) PPC_WEAK_FUNC(sub_830EFE6C);
PPC_FUNC_IMPL(__imp__sub_830EFE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFE70"))) PPC_WEAK_FUNC(sub_830EFE70);
PPC_FUNC_IMPL(__imp__sub_830EFE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830efe8c
	if (cr6.eq) goto loc_830EFE8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830efa20
	sub_830EFA20(ctx, base);
	return;
loc_830EFE8C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EFE94"))) PPC_WEAK_FUNC(sub_830EFE94);
PPC_FUNC_IMPL(__imp__sub_830EFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EFE98"))) PPC_WEAK_FUNC(sub_830EFE98);
PPC_FUNC_IMPL(__imp__sub_830EFE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830EFEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efecc
	if (cr6.eq) goto loc_830EFECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFEC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
loc_830EFECC:
	// lis r28,-31751
	ctx.r28.s64 = -2080833536;
	// lwz r11,5096(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5096);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830eff00
	if (!cr6.eq) goto loc_830EFF00;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830efef4
	if (cr6.eq) goto loc_830EFEF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFEF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFEF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830EFF00:
	// bl 0x830efcd8
	ctx.lr = 0x830EFF04;
	sub_830EFCD8(ctx, base);
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830eff20
	if (cr6.eq) goto loc_830EFF20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFF20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFF20:
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r11,11520
	ctx.r10.u64 = ctx.r11.u64 | 11520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830f1c50
	ctx.lr = 0x830EFF38;
	sub_830F1C50(ctx, base);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r9,31084
	ctx.r31.s64 = ctx.r9.s64 + 31084;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x830EFF4C;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574d38
	ctx.lr = 0x830EFF60;
	sub_82574D38(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830EFF6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830eff6c
	if (!cr6.eq) goto loc_830EFF6C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a84c0
	ctx.lr = 0x830EFF98;
	sub_827A84C0(ctx, base);
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830effb8
	if (cr6.eq) goto loc_830EFFB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EFFB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830EFFB8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830effcc
	if (!cr6.lt) goto loc_830EFFCC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_830EFFCC:
	// bl 0x83104018
	ctx.lr = 0x830EFFD0;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f005c
	if (cr6.eq) goto loc_830F005C;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830EFFF4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f0038
	if (cr6.eq) goto loc_830F0038;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830f0014
	if (!cr6.lt) goto loc_830F0014;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_830F0014:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104868
	ctx.lr = 0x830F0024;
	sub_83104868(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,31172
	ctx.r9.s64 = ctx.r10.s64 + 31172;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x830f003c
	goto loc_830F003C;
loc_830F0038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F003C:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r11,r11,5088
	ctx.r11.s64 = ctx.r11.s64 + 5088;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x830F004C;
	sub_83103B18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,5096(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5096, ctx.r11.u32);
	// b 0x830f0060
	goto loc_830F0060;
loc_830F005C:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830F0060:
	// lwz r3,9904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f007c
	if (cr6.eq) goto loc_830F007C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F007C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F007C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f009c
	if (cr6.lt) goto loc_830F009C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F009C;
	sub_825952B8(ctx, base);
loc_830F009C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F00A8"))) PPC_WEAK_FUNC(sub_830F00A8);
PPC_FUNC_IMPL(__imp__sub_830F00A8) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5092);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f0160
	if (cr6.eq) goto loc_830F0160;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x830f0160
	if (!cr6.lt) goto loc_830F0160;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r7,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 8;
	// rlwimi r7,r9,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// beq cr6,0x830f0160
	if (cr6.eq) goto loc_830F0160;
	// mulli r10,r8,84
	ctx.r10.s64 = ctx.r8.s64 * 84;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// or r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8259d6c0
	ctx.lr = 0x830F0150;
	sub_8259D6C0(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8259d6c0
	ctx.lr = 0x830F015C;
	sub_8259D6C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F0160:
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

__attribute__((alias("__imp__sub_830F0178"))) PPC_WEAK_FUNC(sub_830F0178);
PPC_FUNC_IMPL(__imp__sub_830F0178) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lbz r11,5136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f01b8
	if (!cr6.eq) goto loc_830F01B8;
	// bl 0x830f1c40
	ctx.lr = 0x830F019C;
	sub_830F1C40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x830f1aa0
	ctx.lr = 0x830F01A4;
	sub_830F1AA0(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,5136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5136, ctx.r10.u8);
	// stb r11,5137(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5137, ctx.r11.u8);
loc_830F01B8:
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
}

__attribute__((alias("__imp__sub_830F01D0"))) PPC_WEAK_FUNC(sub_830F01D0);
PPC_FUNC_IMPL(__imp__sub_830F01D0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,5136(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f0200
	if (!cr6.eq) goto loc_830F0200;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f0284
	goto loc_830F0284;
loc_830F0200:
	// bl 0x830f64d0
	ctx.lr = 0x830F0204;
	sub_830F64D0(ctx, base);
	// bl 0x830f2240
	ctx.lr = 0x830F0208;
	sub_830F2240(ctx, base);
	// bl 0x830ef250
	ctx.lr = 0x830F020C;
	sub_830EF250(ctx, base);
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x830f2cc0
	ctx.lr = 0x830F0214;
	sub_830F2CC0(ctx, base);
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x830f4de8
	ctx.lr = 0x830F021C;
	sub_830F4DE8(ctx, base);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f3328
	ctx.lr = 0x830F0228;
	sub_830F3328(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f0240
	if (cr6.eq) goto loc_830F0240;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2000
	ctx.r3.s64 = 2000;
	// bl 0x830eb188
	ctx.lr = 0x830F0240;
	sub_830EB188(ctx, base);
loc_830F0240:
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// stw r11,5128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5128, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,5132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5132, ctx.r10.u32);
	// bl 0x830eb320
	ctx.lr = 0x830F0264;
	sub_830EB320(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830f1c40
	ctx.lr = 0x830F026C;
	sub_830F1C40(ctx, base);
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,5136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5136, ctx.r10.u8);
	// stb r11,5137(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5137, ctx.r11.u8);
loc_830F0284:
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

__attribute__((alias("__imp__sub_830F029C"))) PPC_WEAK_FUNC(sub_830F029C);
PPC_FUNC_IMPL(__imp__sub_830F029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F02A0"))) PPC_WEAK_FUNC(sub_830F02A0);
PPC_FUNC_IMPL(__imp__sub_830F02A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F02A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,5136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f02c8
	if (!cr6.eq) goto loc_830F02C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F02C8:
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,5128(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5128);
	// lwz r11,5132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5132);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f03c0
	if (cr6.eq) goto loc_830F03C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f035c
	if (!cr6.eq) goto loc_830F035C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x830f0354
	if (cr6.gt) goto loc_830F0354;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830f0350
	if (cr6.eq) goto loc_830F0350;
	// bdz 0x830f0350
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830F0350;
	// bdz 0x830f0320
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830F0320;
	// bdz 0x830f032c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830F032C;
	// bdz 0x830f0338
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830F0338;
	// bdz 0x830f0354
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830F0354;
	// bdz 0x830f0344
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830F0344;
	// b 0x830f0350
	goto loc_830F0350;
loc_830F0320:
	// li r31,500
	ctx.r31.s64 = 500;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f03a8
	goto loc_830F03A8;
loc_830F032C:
	// li r31,1500
	ctx.r31.s64 = 1500;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f03a8
	goto loc_830F03A8;
loc_830F0338:
	// li r31,1600
	ctx.r31.s64 = 1600;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f03a8
	goto loc_830F03A8;
loc_830F0344:
	// li r31,3000
	ctx.r31.s64 = 3000;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f03a8
	goto loc_830F03A8;
loc_830F0350:
	// li r31,2000
	ctx.r31.s64 = 2000;
loc_830F0354:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f03a8
	goto loc_830F03A8;
loc_830F035C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bgt cr6,0x830f0390
	if (cr6.gt) goto loc_830F0390;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830f038c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F038C;
	// bdzf 4*cr6+eq,0x830f03cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F03CC;
	// bdzf 4*cr6+eq,0x830f03dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F03DC;
	// bdzf 4*cr6+eq,0x830f03cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F03CC;
	// bdzf 4*cr6+eq,0x830f03d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F03D4;
	// bdzf 4*cr6+eq,0x830f0390
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F0390;
	// bne cr6,0x830f03e4
	if (!cr6.eq) goto loc_830F03E4;
loc_830F038C:
	// li r31,2000
	ctx.r31.s64 = 2000;
loc_830F0390:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x830f03c0
	if (!cr6.lt) goto loc_830F03C0;
loc_830F0398:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-26364
	ctx.r8.s64 = ctx.r10.s64 + -26364;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_830F03A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830eb320
	ctx.lr = 0x830F03B0;
	sub_830EB320(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f03c0
	if (!cr6.eq) goto loc_830F03C0;
	// lwz r11,5132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5132);
	// stw r11,5128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5128, ctx.r11.u32);
loc_830F03C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F03CC:
	// li r31,1000
	ctx.r31.s64 = 1000;
	// b 0x830f0390
	goto loc_830F0390;
loc_830F03D4:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x830f0390
	if (!cr6.eq) goto loc_830F0390;
loc_830F03DC:
	// li r31,3000
	ctx.r31.s64 = 3000;
	// b 0x830f0390
	goto loc_830F0390;
loc_830F03E4:
	// li r31,2000
	ctx.r31.s64 = 2000;
	// bl 0x830f1908
	ctx.lr = 0x830F03EC;
	sub_830F1908(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5132, ctx.r11.u32);
	// b 0x830f0398
	goto loc_830F0398;
}

__attribute__((alias("__imp__sub_830F0404"))) PPC_WEAK_FUNC(sub_830F0404);
PPC_FUNC_IMPL(__imp__sub_830F0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0408"))) PPC_WEAK_FUNC(sub_830F0408);
PPC_FUNC_IMPL(__imp__sub_830F0408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F0410;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r10,5136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f0438
	if (!cr6.eq) goto loc_830F0438;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F0438:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x830f0468
	if (cr6.eq) goto loc_830F0468;
	// addi r11,r11,31384
	ctx.r11.s64 = ctx.r11.s64 + 31384;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// b 0x830f046c
	goto loc_830F046C;
loc_830F0468:
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
loc_830F046C:
	// bl 0x830eab70
	ctx.lr = 0x830F0470;
	sub_830EAB70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f047c
	if (cr6.eq) goto loc_830F047C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_830F047C:
	// bl 0x830f1908
	ctx.lr = 0x830F0480;
	sub_830F1908(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830f04ac
	if (cr6.eq) goto loc_830F04AC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f0498
	if (cr6.eq) goto loc_830F0498;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830f04d0
	goto loc_830F04D0;
loc_830F0498:
	// bl 0x830f1b10
	ctx.lr = 0x830F049C;
	sub_830F1B10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f04d8
	if (!cr6.eq) goto loc_830F04D8;
	// b 0x830f04d0
	goto loc_830F04D0;
loc_830F04AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f04bc
	if (cr6.eq) goto loc_830F04BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x830f04d0
	goto loc_830F04D0;
loc_830F04BC:
	// bl 0x830f1b10
	ctx.lr = 0x830F04C0;
	sub_830F1B10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f04d8
	if (!cr6.eq) goto loc_830F04D8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_830F04D0:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// stw r11,5132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5132, ctx.r11.u32);
loc_830F04D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f1ab8
	ctx.lr = 0x830F04E0;
	sub_830F1AB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f04ec
	if (cr6.eq) goto loc_830F04EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_830F04EC:
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F04FC"))) PPC_WEAK_FUNC(sub_830F04FC);
PPC_FUNC_IMPL(__imp__sub_830F04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0500"))) PPC_WEAK_FUNC(sub_830F0500);
PPC_FUNC_IMPL(__imp__sub_830F0500) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f1ad0
	sub_830F1AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0504"))) PPC_WEAK_FUNC(sub_830F0504);
PPC_FUNC_IMPL(__imp__sub_830F0504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0508"))) PPC_WEAK_FUNC(sub_830F0508);
PPC_FUNC_IMPL(__imp__sub_830F0508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F0510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lbz r10,5136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f0538
	if (!cr6.eq) goto loc_830F0538;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F0538:
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x830f1af8
	ctx.lr = 0x830F0540;
	sub_830F1AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f0590
	if (cr6.eq) goto loc_830F0590;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830f0564
	if (cr6.eq) goto loc_830F0564;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,5132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5132, ctx.r11.u32);
	// b 0x830f0584
	goto loc_830F0584;
loc_830F0564:
	// bl 0x830f1908
	ctx.lr = 0x830F0568;
	sub_830F1908(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r11,5132(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5132, ctx.r11.u32);
loc_830F0584:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830f1ae8
	ctx.lr = 0x830F058C;
	sub_830F1AE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830F0590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F059C"))) PPC_WEAK_FUNC(sub_830F059C);
PPC_FUNC_IMPL(__imp__sub_830F059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F05A0"))) PPC_WEAK_FUNC(sub_830F05A0);
PPC_FUNC_IMPL(__imp__sub_830F05A0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,5136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f05d0
	if (!cr6.eq) goto loc_830F05D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830F05D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f05fc
	if (cr6.eq) goto loc_830F05FC;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,5132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830F05FC:
	// bl 0x830f1908
	ctx.lr = 0x830F0600;
	sub_830F1908(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r3,0
	ctx.r3.s64 = 0;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r11,5132(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0630"))) PPC_WEAK_FUNC(sub_830F0630);
PPC_FUNC_IMPL(__imp__sub_830F0630) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,5136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f066c
	if (!cr6.eq) goto loc_830F066C;
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
loc_830F066C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f0688
	if (cr6.eq) goto loc_830F0688;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,5132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5132, ctx.r11.u32);
	// b 0x830f06d8
	goto loc_830F06D8;
loc_830F0688:
	// bl 0x830f1ac8
	ctx.lr = 0x830F068C;
	sub_830F1AC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f06b8
	if (cr6.eq) goto loc_830F06B8;
	// bl 0x830f1908
	ctx.lr = 0x830F069C;
	sub_830F1908(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5132, ctx.r11.u32);
	// b 0x830f06d8
	goto loc_830F06D8;
loc_830F06B8:
	// bl 0x830f1908
	ctx.lr = 0x830F06BC;
	sub_830F1908(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r10,6
	ctx.r10.s64 = 6;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r11,5132(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5132, ctx.r11.u32);
loc_830F06D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f1b00
	ctx.lr = 0x830F06E0;
	sub_830F1B00(ctx, base);
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

__attribute__((alias("__imp__sub_830F06F4"))) PPC_WEAK_FUNC(sub_830F06F4);
PPC_FUNC_IMPL(__imp__sub_830F06F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F06F8"))) PPC_WEAK_FUNC(sub_830F06F8);
PPC_FUNC_IMPL(__imp__sub_830F06F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F0700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,163
	cr6.compare<uint32_t>(ctx.r11.u32, 163, xer);
	// bgt cr6,0x830f0760
	if (cr6.gt) goto loc_830F0760;
	// beq cr6,0x830f0758
	if (cr6.eq) goto loc_830F0758;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// beq cr6,0x830f0750
	if (cr6.eq) goto loc_830F0750;
	// cmplwi cr6,r11,114
	cr6.compare<uint32_t>(ctx.r11.u32, 114, xer);
	// beq cr6,0x830f0748
	if (cr6.eq) goto loc_830F0748;
	// cmplwi cr6,r11,121
	cr6.compare<uint32_t>(ctx.r11.u32, 121, xer);
	// bne cr6,0x830f0778
	if (!cr6.eq) goto loc_830F0778;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F0748:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F0750:
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F0758:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F0760:
	// cmplwi cr6,r11,166
	cr6.compare<uint32_t>(ctx.r11.u32, 166, xer);
	// beq cr6,0x830f07c0
	if (cr6.eq) goto loc_830F07C0;
	// cmplwi cr6,r11,292
	cr6.compare<uint32_t>(ctx.r11.u32, 292, xer);
	// beq cr6,0x830f07a4
	if (cr6.eq) goto loc_830F07A4;
	// cmplwi cr6,r11,330
	cr6.compare<uint32_t>(ctx.r11.u32, 330, xer);
	// beq cr6,0x830f0780
	if (cr6.eq) goto loc_830F0780;
loc_830F0778:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F0780:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x830f079c
	if (cr6.eq) goto loc_830F079C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x830f079c
	if (cr6.eq) goto loc_830F079C;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F079C:
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F07A4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,-146
	ctx.r9.s64 = ctx.r11.s64 + -146;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x830f07c4
	goto loc_830F07C4;
loc_830F07C0:
	// li r3,5
	ctx.r3.s64 = 5;
loc_830F07C4:
	// bl 0x830f1800
	ctx.lr = 0x830F07C8;
	sub_830F1800(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f07d4
	if (cr6.eq) goto loc_830F07D4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_830F07D4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,292
	cr6.compare<uint32_t>(ctx.r11.u32, 292, xer);
	// bgt cr6,0x830f0820
	if (cr6.gt) goto loc_830F0820;
	// beq cr6,0x830f0804
	if (cr6.eq) goto loc_830F0804;
	// cmplwi cr6,r11,114
	cr6.compare<uint32_t>(ctx.r11.u32, 114, xer);
	// beq cr6,0x830f07fc
	if (cr6.eq) goto loc_830F07FC;
	// cmplwi cr6,r11,163
	cr6.compare<uint32_t>(ctx.r11.u32, 163, xer);
	// bne cr6,0x830f0828
	if (!cr6.eq) goto loc_830F0828;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830f084c
	goto loc_830F084C;
loc_830F07FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830f084c
	goto loc_830F084C;
loc_830F0804:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x830f0818
	if (!cr6.eq) goto loc_830F0818;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x830f084c
	goto loc_830F084C;
loc_830F0818:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x830f084c
	goto loc_830F084C;
loc_830F0820:
	// cmplwi cr6,r11,330
	cr6.compare<uint32_t>(ctx.r11.u32, 330, xer);
	// beq cr6,0x830f0830
	if (cr6.eq) goto loc_830F0830;
loc_830F0828:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830f084c
	goto loc_830F084C;
loc_830F0830:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x830f0848
	if (cr6.eq) goto loc_830F0848;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// bne cr6,0x830f084c
	if (!cr6.eq) goto loc_830F084C;
loc_830F0848:
	// li r11,11
	ctx.r11.s64 = 11;
loc_830F084C:
	// clrlwi r31,r28,31
	ctx.r31.u64 = ctx.r28.u32 & 0x1;
	// addic r10,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bl 0x830f1758
	ctx.lr = 0x830F0860;
	sub_830F1758(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f086c
	if (cr6.eq) goto loc_830F086C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F086C:
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x830f1b58
	ctx.lr = 0x830F0874;
	sub_830F1B58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0880
	if (cr6.eq) goto loc_830F0880;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F0880:
	// rlwinm r3,r28,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// bl 0x830f1b70
	ctx.lr = 0x830F0888;
	sub_830F1B70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0894
	if (cr6.eq) goto loc_830F0894;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F0894:
	// rlwinm r3,r28,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x1;
	// bl 0x830f1b80
	ctx.lr = 0x830F089C;
	sub_830F1B80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f08a8
	if (cr6.eq) goto loc_830F08A8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F08A8:
	// rlwinm r3,r28,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1;
	// bl 0x830f1b98
	ctx.lr = 0x830F08B0;
	sub_830F1B98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f08bc
	if (cr6.eq) goto loc_830F08BC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F08BC:
	// rlwinm r3,r28,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x1;
	// bl 0x830f1bb0
	ctx.lr = 0x830F08C4;
	sub_830F1BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f08d0
	if (cr6.eq) goto loc_830F08D0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F08D0:
	// rlwinm r3,r28,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// bl 0x830f1bc8
	ctx.lr = 0x830F08D8;
	sub_830F1BC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f08e4
	if (cr6.eq) goto loc_830F08E4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F08E4:
	// rlwinm r3,r28,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x1;
	// bl 0x830f1c10
	ctx.lr = 0x830F08EC;
	sub_830F1C10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f08f8
	if (cr6.eq) goto loc_830F08F8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F08F8:
	// rlwinm r3,r28,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// bl 0x830f1be0
	ctx.lr = 0x830F0900;
	sub_830F1BE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f090c
	if (cr6.eq) goto loc_830F090C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F090C:
	// rlwinm r3,r28,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	// bl 0x830f1bf8
	ctx.lr = 0x830F0914;
	sub_830F1BF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0920
	if (cr6.eq) goto loc_830F0920;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F0920:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// rlwinm r11,r28,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x1;
	// rlwinm r3,r28,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x1;
	// stb r11,5137(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5137, ctx.r11.u8);
	// bl 0x830f1c28
	ctx.lr = 0x830F0934;
	sub_830F1C28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0940
	if (cr6.eq) goto loc_830F0940;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F0940:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830f1918
	ctx.lr = 0x830F0948;
	sub_830F1918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0954
	if (cr6.eq) goto loc_830F0954;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F0954:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x830f18b8
	ctx.lr = 0x830F095C;
	sub_830F18B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f0968
	if (cr6.eq) goto loc_830F0968;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F0968:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830f18e0
	ctx.lr = 0x830F0970;
	sub_830F18E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f097c
	if (cr6.eq) goto loc_830F097C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F097C:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,31484
	ctx.r31.s64 = ctx.r11.s64 + 31484;
	// addi r3,r31,-76
	ctx.r3.s64 = ctx.r31.s64 + -76;
	// bl 0x83523fd8
	ctx.lr = 0x830F0990;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f09b8
	if (cr6.eq) goto loc_830F09B8;
	// addi r3,r31,-44
	ctx.r3.s64 = ctx.r31.s64 + -44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x830F09A4;
	sub_83523FD8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x830f1918
	ctx.lr = 0x830F09AC;
	sub_830F1918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f09b8
	if (cr6.eq) goto loc_830F09B8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F09B8:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// addi r8,r11,5168
	ctx.r8.s64 = ctx.r11.s64 + 5168;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r31,r6,-25984
	ctx.r31.s64 = ctx.r6.s64 + -25984;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r28,r9,5120
	ctx.r28.s64 = ctx.r9.s64 + 5120;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,5120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5120, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bl 0x831d0b08
	ctx.lr = 0x830F0A10;
	sub_831D0B08(ctx, base);
	// subfic r9,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r29.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0A28"))) PPC_WEAK_FUNC(sub_830F0A28);
PPC_FUNC_IMPL(__imp__sub_830F0A28) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830f1b90
	ctx.lr = 0x830F0A48;
	sub_830F1B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r11,r11,31556
	ctx.r11.s64 = ctx.r11.s64 + 31556;
	// beq cr6,0x830f0a6c
	if (cr6.eq) goto loc_830F0A6C;
	// addi r9,r11,-20
	ctx.r9.s64 = ctx.r11.s64 + -20;
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x830f0a74
	goto loc_830F0A74;
loc_830F0A6C:
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830F0A74:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,5120
	ctx.r5.s64 = ctx.r11.s64 + 5120;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5120);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-8
	ctx.r6.s64 = -8;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x830eace8
	ctx.lr = 0x830F0AB4;
	sub_830EACE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_830F0ACC"))) PPC_WEAK_FUNC(sub_830F0ACC);
PPC_FUNC_IMPL(__imp__sub_830F0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0AD0"))) PPC_WEAK_FUNC(sub_830F0AD0);
PPC_FUNC_IMPL(__imp__sub_830F0AD0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// blt cr6,0x830f0b04
	if (cr6.lt) goto loc_830F0B04;
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
loc_830F0B04:
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,5132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5132, ctx.r11.u32);
	// beq cr6,0x830f0b38
	if (cr6.eq) goto loc_830F0B38;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-26364
	ctx.r8.s64 = ctx.r10.s64 + -26364;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x830eb320
	ctx.lr = 0x830F0B2C;
	sub_830EB320(ctx, base);
	// lwz r11,5132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5132);
	// lis r7,-31751
	ctx.r7.s64 = -2080833536;
	// stw r11,5128(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5128, ctx.r11.u32);
loc_830F0B38:
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

__attribute__((alias("__imp__sub_830F0B4C"))) PPC_WEAK_FUNC(sub_830F0B4C);
PPC_FUNC_IMPL(__imp__sub_830F0B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0B50"))) PPC_WEAK_FUNC(sub_830F0B50);
PPC_FUNC_IMPL(__imp__sub_830F0B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830F0B58;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lbz r10,5137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f0cb8
	if (cr6.eq) goto loc_830F0CB8;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,31516
	ctx.r29.s64 = ctx.r11.s64 + 31516;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// bl 0x837b0c10
	ctx.lr = 0x830F0B88;
	sub_837B0C10(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x835d5a08
	ctx.lr = 0x830F0B9C;
	sub_835D5A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f0c30
	if (!cr6.eq) goto loc_830F0C30;
	// lhz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f0c30
	if (cr6.eq) goto loc_830F0C30;
	// addi r31,r1,152
	ctx.r31.s64 = ctx.r1.s64 + 152;
loc_830F0BB8:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x835d5a48
	ctx.lr = 0x830F0BC8;
	sub_835D5A48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f0c18
	if (!cr6.eq) goto loc_830F0C18;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830f0c18
	if (cr6.eq) goto loc_830F0C18;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_830F0BE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f0be0
	if (!cr6.eq) goto loc_830F0BE0;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x830F0C0C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f0c18
	if (!cr6.eq) goto loc_830F0C18;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830F0C18:
	// lhz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x830f0bb8
	if (cr6.lt) goto loc_830F0BB8;
loc_830F0C30:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f0c70
	if (cr6.eq) goto loc_830F0C70;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830eace8
	ctx.lr = 0x830F0C6C;
	sub_830EACE8(ctx, base);
	// b 0x830f0c88
	goto loc_830F0C88;
loc_830F0C70:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x830eab70
	ctx.lr = 0x830F0C88;
	sub_830EAB70(ctx, base);
loc_830F0C88:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f0cac
	if (cr6.lt) goto loc_830F0CAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F0CAC;
	sub_825952B8(ctx, base);
loc_830F0CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_830F0CB8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830eab70
	ctx.lr = 0x830F0CD4;
	sub_830EAB70(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0CDC"))) PPC_WEAK_FUNC(sub_830F0CDC);
PPC_FUNC_IMPL(__imp__sub_830F0CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0CE0"))) PPC_WEAK_FUNC(sub_830F0CE0);
PPC_FUNC_IMPL(__imp__sub_830F0CE0) {
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
	// bl 0x830f1748
	ctx.lr = 0x830F0D00;
	sub_830F1748(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x830f0dd8
	if (!cr6.eq) goto loc_830F0DD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x830F0D14;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830f0d5c
	if (!cr6.eq) goto loc_830F0D5C;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r31,r11,31572
	ctx.r31.s64 = ctx.r11.s64 + 31572;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82574d38
	ctx.lr = 0x830F0D38;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// bne cr6,0x830f0d58
	if (!cr6.eq) goto loc_830F0D58;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_830F0D58:
	// bl 0x827a84c0
	ctx.lr = 0x830F0D5C;
	sub_827A84C0(ctx, base);
loc_830F0D5C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x830f0d70
	if (!cr6.lt) goto loc_830F0D70;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_830F0D70:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f39a8
	ctx.lr = 0x830F0D98;
	sub_830F39A8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830f0dbc
	if (cr6.lt) goto loc_830F0DBC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F0DBC;
	sub_825952B8(ctx, base);
loc_830F0DBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F0DC0:
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
loc_830F0DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830f0dc0
	goto loc_830F0DC0;
}

__attribute__((alias("__imp__sub_830F0DE0"))) PPC_WEAK_FUNC(sub_830F0DE0);
PPC_FUNC_IMPL(__imp__sub_830F0DE0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f0e34
	if (!cr6.eq) goto loc_830F0E34;
	// bl 0x830f8d38
	ctx.lr = 0x830F0E08;
	sub_830F8D38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f0e30
	if (!cr6.eq) goto loc_830F0E30;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// bl 0x830f92a0
	ctx.lr = 0x830F0E1C;
	sub_830F92A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f0e30
	if (!cr6.eq) goto loc_830F0E30;
	// lwz r11,5192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5192);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,5192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5192, ctx.r11.u32);
loc_830F0E30:
	// bl 0x830f8670
	ctx.lr = 0x830F0E34;
	sub_830F8670(ctx, base);
loc_830F0E34:
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

__attribute__((alias("__imp__sub_830F0E48"))) PPC_WEAK_FUNC(sub_830F0E48);
PPC_FUNC_IMPL(__imp__sub_830F0E48) {
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
	// bl 0x830f8708
	ctx.lr = 0x830F0E5C;
	sub_830F8708(ctx, base);
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,5192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5192);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f0e80
	if (cr6.eq) goto loc_830F0E80;
	// bl 0x830f91e8
	ctx.lr = 0x830F0E74;
	sub_830F91E8(ctx, base);
	// lwz r11,5192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5192);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,5192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5192, ctx.r11.u32);
loc_830F0E80:
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

__attribute__((alias("__imp__sub_830F0E94"))) PPC_WEAK_FUNC(sub_830F0E94);
PPC_FUNC_IMPL(__imp__sub_830F0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0E98"))) PPC_WEAK_FUNC(sub_830F0E98);
PPC_FUNC_IMPL(__imp__sub_830F0E98) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r11,5192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5192);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f0ec8
	if (cr6.eq) goto loc_830F0EC8;
	// bl 0x830fa0f0
	ctx.lr = 0x830F0EC4;
	sub_830FA0F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830F0EC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830f87b8
	ctx.lr = 0x830F0ED8;
	sub_830F87B8(ctx, base);
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
}

__attribute__((alias("__imp__sub_830F0EF0"))) PPC_WEAK_FUNC(sub_830F0EF0);
PPC_FUNC_IMPL(__imp__sub_830F0EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5192);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,31868
	ctx.r3.s64 = ctx.r11.s64 + 31868;
	// b 0x830f92a0
	sub_830F92A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0F14"))) PPC_WEAK_FUNC(sub_830F0F14);
PPC_FUNC_IMPL(__imp__sub_830F0F14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F0F18"))) PPC_WEAK_FUNC(sub_830F0F18);
PPC_FUNC_IMPL(__imp__sub_830F0F18) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f9318
	sub_830F9318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0F1C"))) PPC_WEAK_FUNC(sub_830F0F1C);
PPC_FUNC_IMPL(__imp__sub_830F0F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0F20"))) PPC_WEAK_FUNC(sub_830F0F20);
PPC_FUNC_IMPL(__imp__sub_830F0F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f8910
	sub_830F8910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0F24"))) PPC_WEAK_FUNC(sub_830F0F24);
PPC_FUNC_IMPL(__imp__sub_830F0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0F28"))) PPC_WEAK_FUNC(sub_830F0F28);
PPC_FUNC_IMPL(__imp__sub_830F0F28) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f89c8
	sub_830F89C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0F2C"))) PPC_WEAK_FUNC(sub_830F0F2C);
PPC_FUNC_IMPL(__imp__sub_830F0F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0F30"))) PPC_WEAK_FUNC(sub_830F0F30);
PPC_FUNC_IMPL(__imp__sub_830F0F30) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f8a60
	sub_830F8A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0F34"))) PPC_WEAK_FUNC(sub_830F0F34);
PPC_FUNC_IMPL(__imp__sub_830F0F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0F38"))) PPC_WEAK_FUNC(sub_830F0F38);
PPC_FUNC_IMPL(__imp__sub_830F0F38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// bl 0x830f95d8
	ctx.lr = 0x830F0F7C;
	sub_830F95D8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830f9800
	ctx.lr = 0x830F0F8C;
	sub_830F9800(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r6,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r6.u8);
	// bl 0x830f8ae8
	ctx.lr = 0x830F0FA4;
	sub_830F8AE8(ctx, base);
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

__attribute__((alias("__imp__sub_830F0FBC"))) PPC_WEAK_FUNC(sub_830F0FBC);
PPC_FUNC_IMPL(__imp__sub_830F0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0FC0"))) PPC_WEAK_FUNC(sub_830F0FC0);
PPC_FUNC_IMPL(__imp__sub_830F0FC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f8c88
	sub_830F8C88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0FC4"))) PPC_WEAK_FUNC(sub_830F0FC4);
PPC_FUNC_IMPL(__imp__sub_830F0FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0FC8"))) PPC_WEAK_FUNC(sub_830F0FC8);
PPC_FUNC_IMPL(__imp__sub_830F0FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830ef2e0
	sub_830EF2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0FCC"))) PPC_WEAK_FUNC(sub_830F0FCC);
PPC_FUNC_IMPL(__imp__sub_830F0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0FD0"))) PPC_WEAK_FUNC(sub_830F0FD0);
PPC_FUNC_IMPL(__imp__sub_830F0FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f84d0
	sub_830F84D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0FD4"))) PPC_WEAK_FUNC(sub_830F0FD4);
PPC_FUNC_IMPL(__imp__sub_830F0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0FD8"))) PPC_WEAK_FUNC(sub_830F0FD8);
PPC_FUNC_IMPL(__imp__sub_830F0FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f84e8
	sub_830F84E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F0FDC"))) PPC_WEAK_FUNC(sub_830F0FDC);
PPC_FUNC_IMPL(__imp__sub_830F0FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F0FE0"))) PPC_WEAK_FUNC(sub_830F0FE0);
PPC_FUNC_IMPL(__imp__sub_830F0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F0FE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830f99b0
	ctx.lr = 0x830F0FFC;
	sub_830F99B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f1014
	if (cr6.eq) goto loc_830F1014;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ef558
	ctx.lr = 0x830F1014;
	sub_830EF558(ctx, base);
loc_830F1014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F101C"))) PPC_WEAK_FUNC(sub_830F101C);
PPC_FUNC_IMPL(__imp__sub_830F101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1020"))) PPC_WEAK_FUNC(sub_830F1020);
PPC_FUNC_IMPL(__imp__sub_830F1020) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830f9bf8
	sub_830F9BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1028"))) PPC_WEAK_FUNC(sub_830F1028);
PPC_FUNC_IMPL(__imp__sub_830F1028) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f93a8
	sub_830F93A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F102C"))) PPC_WEAK_FUNC(sub_830F102C);
PPC_FUNC_IMPL(__imp__sub_830F102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1030"))) PPC_WEAK_FUNC(sub_830F1030);
PPC_FUNC_IMPL(__imp__sub_830F1030) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f9488
	sub_830F9488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1034"))) PPC_WEAK_FUNC(sub_830F1034);
PPC_FUNC_IMPL(__imp__sub_830F1034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1038"))) PPC_WEAK_FUNC(sub_830F1038);
PPC_FUNC_IMPL(__imp__sub_830F1038) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f9530
	sub_830F9530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F103C"))) PPC_WEAK_FUNC(sub_830F103C);
PPC_FUNC_IMPL(__imp__sub_830F103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1040"))) PPC_WEAK_FUNC(sub_830F1040);
PPC_FUNC_IMPL(__imp__sub_830F1040) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f96a0
	sub_830F96A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1044"))) PPC_WEAK_FUNC(sub_830F1044);
PPC_FUNC_IMPL(__imp__sub_830F1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1048"))) PPC_WEAK_FUNC(sub_830F1048);
PPC_FUNC_IMPL(__imp__sub_830F1048) {
	PPC_FUNC_PROLOGUE();
	// b 0x830f9740
	sub_830F9740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F104C"))) PPC_WEAK_FUNC(sub_830F104C);
PPC_FUNC_IMPL(__imp__sub_830F104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1050"))) PPC_WEAK_FUNC(sub_830F1050);
PPC_FUNC_IMPL(__imp__sub_830F1050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f1060
	if (cr6.eq) goto loc_830F1060;
	// b 0x830f98a8
	sub_830F98A8(ctx, base);
	return;
loc_830F1060:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1068"))) PPC_WEAK_FUNC(sub_830F1068);
PPC_FUNC_IMPL(__imp__sub_830F1068) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830f99b0
	ctx.lr = 0x830F108C;
	sub_830F99B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f10a4
	if (cr6.eq) goto loc_830F10A4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ef558
	ctx.lr = 0x830F10A4;
	sub_830EF558(ctx, base);
loc_830F10A4:
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

__attribute__((alias("__imp__sub_830F10BC"))) PPC_WEAK_FUNC(sub_830F10BC);
PPC_FUNC_IMPL(__imp__sub_830F10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F10C0"))) PPC_WEAK_FUNC(sub_830F10C0);
PPC_FUNC_IMPL(__imp__sub_830F10C0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830f99b0
	ctx.lr = 0x830F10E8;
	sub_830F99B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f1100
	if (cr6.eq) goto loc_830F1100;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ef558
	ctx.lr = 0x830F1100;
	sub_830EF558(ctx, base);
loc_830F1100:
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

__attribute__((alias("__imp__sub_830F1118"))) PPC_WEAK_FUNC(sub_830F1118);
PPC_FUNC_IMPL(__imp__sub_830F1118) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lbz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f1150
	if (cr6.eq) goto loc_830F1150;
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
loc_830F1150:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,5216
	ctx.r5.s64 = ctx.r10.s64 + 5216;
	// li r10,2000
	ctx.r10.s64 = 2000;
	// li r9,2000
	ctx.r9.s64 = 2000;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// li r6,4000
	ctx.r6.s64 = 4000;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r9,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r9.u32);
	// lis r4,-32224
	ctx.r4.s64 = -2111832064;
	// stw r8,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r8.u32);
	// lis r3,-31751
	ctx.r3.s64 = -2080833536;
	// stw r7,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r7.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r6,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r6.u32);
	// li r6,2000
	ctx.r6.s64 = 2000;
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// li r11,2000
	ctx.r11.s64 = 2000;
	// stw r10,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r8.u32);
	// li r8,2500
	ctx.r8.s64 = 2500;
	// stw r7,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r7.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r6,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, ctx.r6.u32);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r11,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r10,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, ctx.r10.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r9,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r9.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r8,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r8.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r7,92(r5)
	PPC_STORE_U32(ctx.r5.u32 + 92, ctx.r7.u32);
	// addi r4,r4,32556
	ctx.r4.s64 = ctx.r4.s64 + 32556;
	// stw r6,104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 104, ctx.r6.u32);
	// addi r3,r3,5364
	ctx.r3.s64 = ctx.r3.s64 + 5364;
	// stw r11,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, ctx.r11.u32);
	// stw r10,120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 120, ctx.r10.u32);
	// stw r9,124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 124, ctx.r9.u32);
	// stw r8,140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 140, ctx.r8.u32);
	// bl 0x835d6090
	ctx.lr = 0x830F1210;
	sub_835D6090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,5204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5204, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830F1230"))) PPC_WEAK_FUNC(sub_830F1230);
PPC_FUNC_IMPL(__imp__sub_830F1230) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lbz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f1268
	if (!cr6.eq) goto loc_830F1268;
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
loc_830F1268:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,5364
	ctx.r3.s64 = ctx.r11.s64 + 5364;
	// bl 0x835d60f8
	ctx.lr = 0x830F1274;
	sub_835D60F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,5204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5204, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830F1294"))) PPC_WEAK_FUNC(sub_830F1294);
PPC_FUNC_IMPL(__imp__sub_830F1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1298"))) PPC_WEAK_FUNC(sub_830F1298);
PPC_FUNC_IMPL(__imp__sub_830F1298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,29
	cr6.compare<int32_t>(ctx.r4.s32, 29, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830f12f0
	if (!cr6.lt) goto loc_830F12F0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830f12d0
	if (!cr6.lt) goto loc_830F12D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F12D0:
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bge cr6,0x830f12e4
	if (!cr6.lt) goto loc_830F12E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F12E4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F12F0:
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bge cr6,0x830f132c
	if (!cr6.lt) goto loc_830F132C;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830f130c
	if (!cr6.lt) goto loc_830F130C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F130C:
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bge cr6,0x830f1320
	if (!cr6.lt) goto loc_830F1320;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F1320:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F132C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830f1340
	if (!cr6.lt) goto loc_830F1340;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_830F1340:
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x830f1350
	if (cr6.lt) goto loc_830F1350;
	// li r11,8
	ctx.r11.s64 = 8;
loc_830F1350:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1358"))) PPC_WEAK_FUNC(sub_830F1358);
PPC_FUNC_IMPL(__imp__sub_830F1358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830F1360;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lbz r10,5204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f15f4
	if (cr6.eq) goto loc_830F15F4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r11,5364
	ctx.r25.s64 = ctx.r11.s64 + 5364;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,5364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5364);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r31,r11,-25832
	ctx.r31.s64 = ctx.r11.s64 + -25832;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r27,-31751
	ctx.r27.s64 = -2080833536;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r24,-31772
	ctx.r24.s64 = -2082209792;
	// addi r28,r10,5424
	ctx.r28.s64 = ctx.r10.s64 + 5424;
	// addi r26,r9,5208
	ctx.r26.s64 = ctx.r9.s64 + 5208;
	// addi r30,r11,-25608
	ctx.r30.s64 = ctx.r11.s64 + -25608;
	// cmpwi cr6,r4,29
	cr6.compare<int32_t>(ctx.r4.s32, 29, xer);
	// beq cr6,0x830f14c0
	if (cr6.eq) goto loc_830F14C0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r4,r3
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, xer);
	// beq cr6,0x830f1490
	if (cr6.eq) goto loc_830F1490;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x830f1298
	ctx.lr = 0x830F13E4;
	sub_830F1298(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1478
	if (!cr6.eq) goto loc_830F1478;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,5216
	ctx.r9.s64 = ctx.r9.s64 + 5216;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bge cr6,0x830f1478
	if (!cr6.lt) goto loc_830F1478;
	// lwz r11,-25824(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -25824);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830f1460
	if (cr6.lt) goto loc_830F1460;
	// beq cr6,0x830f1448
	if (cr6.eq) goto loc_830F1448;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x830f1470
	goto loc_830F1470;
loc_830F1448:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x830eb168
	ctx.lr = 0x830F1458;
	sub_830EB168(ctx, base);
	// std r23,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r23.u64);
	// b 0x830f1468
	goto loc_830F1468;
loc_830F1460:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x830f0f28
	ctx.lr = 0x830F1468;
	sub_830F0F28(ctx, base);
loc_830F1468:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830F1470:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,-25824(r24)
	PPC_STORE_U32(ctx.r24.u32 + -25824, ctx.r11.u32);
loc_830F1478:
	// addi r11,r4,-28
	ctx.r11.s64 = ctx.r4.s64 + -28;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,5200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5200, ctx.r11.u32);
	// b 0x830f1494
	goto loc_830F1494;
loc_830F1490:
	// lwz r11,5200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5200);
loc_830F1494:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830f14b4
	if (!cr6.eq) goto loc_830F14B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830fe3a8
	ctx.lr = 0x830F14A8;
	sub_830FE3A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fe3b0
	ctx.lr = 0x830F14B0;
	sub_830FE3B0(ctx, base);
	// lwz r11,5200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5200);
loc_830F14B4:
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830f14c4
	goto loc_830F14C4;
loc_830F14C0:
	// lwz r11,5200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5200);
loc_830F14C4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830f14d8
	if (cr6.eq) goto loc_830F14D8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830f1598
	if (cr6.eq) goto loc_830F1598;
	// b 0x830f15e0
	goto loc_830F15E0;
loc_830F14D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830fe3e0
	ctx.lr = 0x830F14E0;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f15e0
	if (cr6.eq) goto loc_830F15E0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x830f158c
	if (cr6.gt) goto loc_830F158C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830f153c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F153C;
	// bdzf 4*cr6+eq,0x830f158c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F158C;
	// bdzf 4*cr6+eq,0x830f151c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F151C;
	// bdzf 4*cr6+eq,0x830f153c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F153C;
	// bdzf 4*cr6+eq,0x830f158c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F158C;
	// bdzf 4*cr6+eq,0x830f151c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F151C;
	// bne cr6,0x830f153c
	if (!cr6.eq) goto loc_830F153C;
loc_830F151C:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830f0f20
	ctx.lr = 0x830F1528;
	sub_830F0F20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1590
	if (!cr6.eq) goto loc_830F1590;
	// stw r23,-25824(r24)
	PPC_STORE_U32(ctx.r24.u32 + -25824, ctx.r23.u32);
	// b 0x830f1590
	goto loc_830F1590;
loc_830F153C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,-2
	xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x830f1590
	if (cr0.lt) goto loc_830F1590;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bge cr6,0x830f1590
	if (!cr6.lt) goto loc_830F1590;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-25816
	ctx.r8.s64 = ctx.r10.s64 + -25816;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x830eaf60
	ctx.lr = 0x830F1574;
	sub_830EAF60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1590
	if (!cr6.eq) goto loc_830F1590;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-25824(r24)
	PPC_STORE_U32(ctx.r24.u32 + -25824, ctx.r11.u32);
	// b 0x830f1590
	goto loc_830F1590;
loc_830F158C:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_830F1590:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,5200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5200, ctx.r11.u32);
loc_830F1598:
	// lwz r10,-25824(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -25824);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x830f15c8
	if (cr6.lt) goto loc_830F15C8;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x830f15d8
	if (!cr6.eq) goto loc_830F15D8;
	// ld r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x830eb1d8
	ctx.lr = 0x830F15B8;
	sub_830EB1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f15d8
	if (cr6.eq) goto loc_830F15D8;
	// b 0x830f15e0
	goto loc_830F15E0;
loc_830F15C8:
	// bl 0x830f0f30
	ctx.lr = 0x830F15CC;
	sub_830F0F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f15e0
	if (!cr6.eq) goto loc_830F15E0;
loc_830F15D8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,5200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5200, ctx.r23.u32);
loc_830F15E0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F15F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F15F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1600"))) PPC_WEAK_FUNC(sub_830F1600);
PPC_FUNC_IMPL(__imp__sub_830F1600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F1608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,5204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f1668
	if (cr6.eq) goto loc_830F1668;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,5364
	ctx.r29.s64 = ctx.r31.s64 + 5364;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,5364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,-25832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25832, ctx.r30.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F1664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F1668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1670"))) PPC_WEAK_FUNC(sub_830F1670);
PPC_FUNC_IMPL(__imp__sub_830F1670) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lbz r11,5448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f16a8
	if (cr6.eq) goto loc_830F16A8;
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
loc_830F16A8:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r4,r11,-32712
	ctx.r4.s64 = ctx.r11.s64 + -32712;
	// addi r3,r10,5476
	ctx.r3.s64 = ctx.r10.s64 + 5476;
	// bl 0x835d6090
	ctx.lr = 0x830F16BC;
	sub_835D6090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,5448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5448, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830F16DC"))) PPC_WEAK_FUNC(sub_830F16DC);
PPC_FUNC_IMPL(__imp__sub_830F16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F16E0"))) PPC_WEAK_FUNC(sub_830F16E0);
PPC_FUNC_IMPL(__imp__sub_830F16E0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lbz r11,5448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f1718
	if (!cr6.eq) goto loc_830F1718;
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
loc_830F1718:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,5476
	ctx.r3.s64 = ctx.r11.s64 + 5476;
	// bl 0x835d60f8
	ctx.lr = 0x830F1724;
	sub_835D60F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,5448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5448, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830F1744"))) PPC_WEAK_FUNC(sub_830F1744);
PPC_FUNC_IMPL(__imp__sub_830F1744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1748"))) PPC_WEAK_FUNC(sub_830F1748);
PPC_FUNC_IMPL(__imp__sub_830F1748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,-13648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13648);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1754"))) PPC_WEAK_FUNC(sub_830F1754);
PPC_FUNC_IMPL(__imp__sub_830F1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1758"))) PPC_WEAK_FUNC(sub_830F1758);
PPC_FUNC_IMPL(__imp__sub_830F1758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// blt cr6,0x830f176c
	if (cr6.lt) goto loc_830F176C;
	// blr 
	return;
loc_830F176C:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x830f17e0
	if (cr6.gt) goto loc_830F17E0;
	// lis r12,-31985
	ctx.r12.s64 = -2096168960;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6028
	ctx.r12.s64 = ctx.r12.s64 + 6028;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830F17D0;
	case 1:
		goto loc_830F17D0;
	case 2:
		goto loc_830F17E0;
	case 3:
		goto loc_830F17D0;
	case 4:
		goto loc_830F17D0;
	case 5:
		goto loc_830F17E0;
	case 6:
		goto loc_830F17E0;
	case 7:
		goto loc_830F17E0;
	case 8:
		goto loc_830F17E0;
	case 9:
		goto loc_830F17E0;
	case 10:
		goto loc_830F17D0;
	case 11:
		goto loc_830F17D0;
	case 12:
		goto loc_830F17E0;
	case 13:
		goto loc_830F17E0;
	case 14:
		goto loc_830F17E0;
	case 15:
		goto loc_830F17E0;
	case 16:
		goto loc_830F17D0;
	default:
		return;
	}
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6112(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6112);
	// lwz r24,6096(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6096);
loc_830F17D0:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,5456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5456, ctx.r11.u32);
	// blr 
	return;
loc_830F17E0:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F17F0"))) PPC_WEAK_FUNC(sub_830F17F0);
PPC_FUNC_IMPL(__imp__sub_830F17F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,5456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F17FC"))) PPC_WEAK_FUNC(sub_830F17FC);
PPC_FUNC_IMPL(__imp__sub_830F17FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1800"))) PPC_WEAK_FUNC(sub_830F1800);
PPC_FUNC_IMPL(__imp__sub_830F1800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// blt cr6,0x830f1814
	if (cr6.lt) goto loc_830F1814;
	// blr 
	return;
loc_830F1814:
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgt cr6,0x830f1894
	if (cr6.gt) goto loc_830F1894;
	// lis r12,-31985
	ctx.r12.s64 = -2096168960;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6196
	ctx.r12.s64 = ctx.r12.s64 + 6196;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830F1884;
	case 1:
		goto loc_830F1884;
	case 2:
		goto loc_830F1884;
	case 3:
		goto loc_830F1884;
	case 4:
		goto loc_830F1884;
	case 5:
		goto loc_830F1884;
	case 6:
		goto loc_830F1894;
	case 7:
		goto loc_830F1894;
	case 8:
		goto loc_830F1894;
	case 9:
		goto loc_830F1894;
	case 10:
		goto loc_830F1894;
	case 11:
		goto loc_830F1884;
	case 12:
		goto loc_830F1894;
	case 13:
		goto loc_830F1894;
	case 14:
		goto loc_830F1894;
	case 15:
		goto loc_830F1894;
	case 16:
		goto loc_830F1884;
	case 17:
		goto loc_830F1894;
	case 18:
		goto loc_830F1894;
	case 19:
		goto loc_830F1884;
	default:
		return;
	}
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6292(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6292);
	// lwz r24,6276(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 6276);
loc_830F1884:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,5460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5460, ctx.r11.u32);
	// blr 
	return;
loc_830F1894:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F18A4"))) PPC_WEAK_FUNC(sub_830F18A4);
PPC_FUNC_IMPL(__imp__sub_830F18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F18A8"))) PPC_WEAK_FUNC(sub_830F18A8);
PPC_FUNC_IMPL(__imp__sub_830F18A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,5460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5460);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F18B4"))) PPC_WEAK_FUNC(sub_830F18B4);
PPC_FUNC_IMPL(__imp__sub_830F18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F18B8"))) PPC_WEAK_FUNC(sub_830F18B8);
PPC_FUNC_IMPL(__imp__sub_830F18B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,5468(r10)
	PPC_STORE_U16(ctx.r10.u32 + 5468, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F18CC"))) PPC_WEAK_FUNC(sub_830F18CC);
PPC_FUNC_IMPL(__imp__sub_830F18CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F18D0"))) PPC_WEAK_FUNC(sub_830F18D0);
PPC_FUNC_IMPL(__imp__sub_830F18D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lhz r3,5468(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5468);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F18DC"))) PPC_WEAK_FUNC(sub_830F18DC);
PPC_FUNC_IMPL(__imp__sub_830F18DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F18E0"))) PPC_WEAK_FUNC(sub_830F18E0);
PPC_FUNC_IMPL(__imp__sub_830F18E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x830f18f4
	if (cr6.lt) goto loc_830F18F4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830F18F4:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,5452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1904"))) PPC_WEAK_FUNC(sub_830F1904);
PPC_FUNC_IMPL(__imp__sub_830F1904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1908"))) PPC_WEAK_FUNC(sub_830F1908);
PPC_FUNC_IMPL(__imp__sub_830F1908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r3,5452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5452);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1914"))) PPC_WEAK_FUNC(sub_830F1914);
PPC_FUNC_IMPL(__imp__sub_830F1914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1918"))) PPC_WEAK_FUNC(sub_830F1918);
PPC_FUNC_IMPL(__imp__sub_830F1918) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r5,r11,-32664
	ctx.r5.s64 = ctx.r11.s64 + -32664;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stw r11,5440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5440, ctx.r11.u32);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r8,-25424
	ctx.r31.s64 = ctx.r8.s64 + -25424;
	// sth r3,5472(r9)
	PPC_STORE_U16(ctx.r9.u32 + 5472, ctx.r3.u16);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,5440
	ctx.r30.s64 = ctx.r10.s64 + 5440;
	// bl 0x831d0b08
	ctx.lr = 0x830F1964;
	sub_831D0B08(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_830F1988"))) PPC_WEAK_FUNC(sub_830F1988);
PPC_FUNC_IMPL(__imp__sub_830F1988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1994"))) PPC_WEAK_FUNC(sub_830F1994);
PPC_FUNC_IMPL(__imp__sub_830F1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1998"))) PPC_WEAK_FUNC(sub_830F1998);
PPC_FUNC_IMPL(__imp__sub_830F1998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F19A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,5448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f1a20
	if (cr6.eq) goto loc_830F1A20;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,5476
	ctx.r31.s64 = ctx.r11.s64 + 5476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5476);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F19E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,5464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5464);
	// bne cr6,0x830f19fc
	if (!cr6.eq) goto loc_830F19FC;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// b 0x830f1a00
	goto loc_830F1A00;
loc_830F19FC:
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_830F1A00:
	// stw r11,5464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5464, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1A1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F1A20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1A28"))) PPC_WEAK_FUNC(sub_830F1A28);
PPC_FUNC_IMPL(__imp__sub_830F1A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F1A30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,5448(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f1a98
	if (cr6.eq) goto loc_830F1A98;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,5476
	ctx.r29.s64 = ctx.r30.s64 + 5476;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5476);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F1A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,5476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5476);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r10,5464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5464);
	// and r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 & ctx.r31.u64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r31,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// bctrl 
	ctx.lr = 0x830F1A94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F1A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AA0"))) PPC_WEAK_FUNC(sub_830F1AA0);
PPC_FUNC_IMPL(__imp__sub_830F1AA0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AAC"))) PPC_WEAK_FUNC(sub_830F1AAC);
PPC_FUNC_IMPL(__imp__sub_830F1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1AB0"))) PPC_WEAK_FUNC(sub_830F1AB0);
PPC_FUNC_IMPL(__imp__sub_830F1AB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AB8"))) PPC_WEAK_FUNC(sub_830F1AB8);
PPC_FUNC_IMPL(__imp__sub_830F1AB8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AC4"))) PPC_WEAK_FUNC(sub_830F1AC4);
PPC_FUNC_IMPL(__imp__sub_830F1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1AC8"))) PPC_WEAK_FUNC(sub_830F1AC8);
PPC_FUNC_IMPL(__imp__sub_830F1AC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AD0"))) PPC_WEAK_FUNC(sub_830F1AD0);
PPC_FUNC_IMPL(__imp__sub_830F1AD0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1ADC"))) PPC_WEAK_FUNC(sub_830F1ADC);
PPC_FUNC_IMPL(__imp__sub_830F1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1AE0"))) PPC_WEAK_FUNC(sub_830F1AE0);
PPC_FUNC_IMPL(__imp__sub_830F1AE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AE8"))) PPC_WEAK_FUNC(sub_830F1AE8);
PPC_FUNC_IMPL(__imp__sub_830F1AE8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1AF4"))) PPC_WEAK_FUNC(sub_830F1AF4);
PPC_FUNC_IMPL(__imp__sub_830F1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1AF8"))) PPC_WEAK_FUNC(sub_830F1AF8);
PPC_FUNC_IMPL(__imp__sub_830F1AF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B00"))) PPC_WEAK_FUNC(sub_830F1B00);
PPC_FUNC_IMPL(__imp__sub_830F1B00) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B0C"))) PPC_WEAK_FUNC(sub_830F1B0C);
PPC_FUNC_IMPL(__imp__sub_830F1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1B10"))) PPC_WEAK_FUNC(sub_830F1B10);
PPC_FUNC_IMPL(__imp__sub_830F1B10) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B18"))) PPC_WEAK_FUNC(sub_830F1B18);
PPC_FUNC_IMPL(__imp__sub_830F1B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-25452
	ctx.r11.s64 = ctx.r11.s64 + -25452;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f1b50
	if (cr6.eq) goto loc_830F1B50;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830f1b40
	if (cr6.lt) goto loc_830F1B40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830F1B40:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_830F1B50:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F1B58"))) PPC_WEAK_FUNC(sub_830F1B58);
PPC_FUNC_IMPL(__imp__sub_830F1B58) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B64"))) PPC_WEAK_FUNC(sub_830F1B64);
PPC_FUNC_IMPL(__imp__sub_830F1B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1B68"))) PPC_WEAK_FUNC(sub_830F1B68);
PPC_FUNC_IMPL(__imp__sub_830F1B68) {
	PPC_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B70"))) PPC_WEAK_FUNC(sub_830F1B70);
PPC_FUNC_IMPL(__imp__sub_830F1B70) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B7C"))) PPC_WEAK_FUNC(sub_830F1B7C);
PPC_FUNC_IMPL(__imp__sub_830F1B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1B80"))) PPC_WEAK_FUNC(sub_830F1B80);
PPC_FUNC_IMPL(__imp__sub_830F1B80) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B8C"))) PPC_WEAK_FUNC(sub_830F1B8C);
PPC_FUNC_IMPL(__imp__sub_830F1B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1B90"))) PPC_WEAK_FUNC(sub_830F1B90);
PPC_FUNC_IMPL(__imp__sub_830F1B90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1B98"))) PPC_WEAK_FUNC(sub_830F1B98);
PPC_FUNC_IMPL(__imp__sub_830F1B98) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BA4"))) PPC_WEAK_FUNC(sub_830F1BA4);
PPC_FUNC_IMPL(__imp__sub_830F1BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1BA8"))) PPC_WEAK_FUNC(sub_830F1BA8);
PPC_FUNC_IMPL(__imp__sub_830F1BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,1
	ctx.r3.s64 = 65536;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BB0"))) PPC_WEAK_FUNC(sub_830F1BB0);
PPC_FUNC_IMPL(__imp__sub_830F1BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BBC"))) PPC_WEAK_FUNC(sub_830F1BBC);
PPC_FUNC_IMPL(__imp__sub_830F1BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1BC0"))) PPC_WEAK_FUNC(sub_830F1BC0);
PPC_FUNC_IMPL(__imp__sub_830F1BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,2
	ctx.r3.s64 = 131072;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BC8"))) PPC_WEAK_FUNC(sub_830F1BC8);
PPC_FUNC_IMPL(__imp__sub_830F1BC8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BD4"))) PPC_WEAK_FUNC(sub_830F1BD4);
PPC_FUNC_IMPL(__imp__sub_830F1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1BD8"))) PPC_WEAK_FUNC(sub_830F1BD8);
PPC_FUNC_IMPL(__imp__sub_830F1BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,4
	ctx.r3.s64 = 262144;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BE0"))) PPC_WEAK_FUNC(sub_830F1BE0);
PPC_FUNC_IMPL(__imp__sub_830F1BE0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BEC"))) PPC_WEAK_FUNC(sub_830F1BEC);
PPC_FUNC_IMPL(__imp__sub_830F1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1BF0"))) PPC_WEAK_FUNC(sub_830F1BF0);
PPC_FUNC_IMPL(__imp__sub_830F1BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,8
	ctx.r3.s64 = 524288;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1BF8"))) PPC_WEAK_FUNC(sub_830F1BF8);
PPC_FUNC_IMPL(__imp__sub_830F1BF8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C04"))) PPC_WEAK_FUNC(sub_830F1C04);
PPC_FUNC_IMPL(__imp__sub_830F1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1C08"))) PPC_WEAK_FUNC(sub_830F1C08);
PPC_FUNC_IMPL(__imp__sub_830F1C08) {
	PPC_FUNC_PROLOGUE();
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C10"))) PPC_WEAK_FUNC(sub_830F1C10);
PPC_FUNC_IMPL(__imp__sub_830F1C10) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,64
	ctx.r3.s64 = 4194304;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C1C"))) PPC_WEAK_FUNC(sub_830F1C1C);
PPC_FUNC_IMPL(__imp__sub_830F1C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1C20"))) PPC_WEAK_FUNC(sub_830F1C20);
PPC_FUNC_IMPL(__imp__sub_830F1C20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,64
	ctx.r3.s64 = 4194304;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C28"))) PPC_WEAK_FUNC(sub_830F1C28);
PPC_FUNC_IMPL(__imp__sub_830F1C28) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C34"))) PPC_WEAK_FUNC(sub_830F1C34);
PPC_FUNC_IMPL(__imp__sub_830F1C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1C38"))) PPC_WEAK_FUNC(sub_830F1C38);
PPC_FUNC_IMPL(__imp__sub_830F1C38) {
	PPC_FUNC_PROLOGUE();
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// b 0x830f1a28
	sub_830F1A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C40"))) PPC_WEAK_FUNC(sub_830F1C40);
PPC_FUNC_IMPL(__imp__sub_830F1C40) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f1998
	sub_830F1998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1C4C"))) PPC_WEAK_FUNC(sub_830F1C4C);
PPC_FUNC_IMPL(__imp__sub_830F1C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1C50"))) PPC_WEAK_FUNC(sub_830F1C50);
PPC_FUNC_IMPL(__imp__sub_830F1C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F1C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,-13648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13648);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x830f1d38
	if (!cr6.lt) goto loc_830F1D38;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8310d398
	ctx.lr = 0x830F1C80;
	sub_8310D398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x830F1C8C;
	sub_837B0C10(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq cr6,0x830f1cf8
	if (cr6.eq) goto loc_830F1CF8;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bge cr6,0x830f1cb4
	if (!cr6.lt) goto loc_830F1CB4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x830f1cbc
	if (cr6.lt) goto loc_830F1CBC;
loc_830F1CB4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x830f1cc0
	goto loc_830F1CC0;
loc_830F1CBC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_830F1CC0:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x830f1cd8
	if (!cr6.lt) goto loc_830F1CD8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_830F1CD8:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x830f1cf8
	if (cr6.eq) goto loc_830F1CF8;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r7,r11,18384
	ctx.r7.s64 = ctx.r11.s64 + 18384;
	// bl 0x82e8b6a8
	ctx.lr = 0x830F1CF0;
	sub_82E8B6A8(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830F1CF8:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bge cr6,0x830f1d08
	if (!cr6.lt) goto loc_830F1D08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_830F1D08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x831ce980
	ctx.lr = 0x830F1D14;
	sub_831CE980(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x830f1d34
	if (cr6.lt) goto loc_830F1D34;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830F1D34;
	sub_825952B8(ctx, base);
loc_830F1D34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F1D38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1D40"))) PPC_WEAK_FUNC(sub_830F1D40);
PPC_FUNC_IMPL(__imp__sub_830F1D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F1D48;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x8310d398
	ctx.lr = 0x830F1D60;
	sub_8310D398(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_830F1D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f1d7c
	if (!cr6.eq) goto loc_830F1D7C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830F1DA0;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x830f1e38
	if (!cr6.lt) goto loc_830F1E38;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f1e14
	if (cr6.eq) goto loc_830F1E14;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bge cr6,0x830f1dd0
	if (!cr6.lt) goto loc_830F1DD0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x830f1dd8
	if (cr6.lt) goto loc_830F1DD8;
loc_830F1DD0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x830f1ddc
	goto loc_830F1DDC;
loc_830F1DD8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_830F1DDC:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x830f1df4
	if (!cr6.lt) goto loc_830F1DF4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_830F1DF4:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x830f1e14
	if (cr6.eq) goto loc_830F1E14;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r7,r11,18384
	ctx.r7.s64 = ctx.r11.s64 + 18384;
	// bl 0x82e8b6a8
	ctx.lr = 0x830F1E0C;
	sub_82E8B6A8(ctx, base);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_830F1E14:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bge cr6,0x830f1e24
	if (!cr6.lt) goto loc_830F1E24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_830F1E24:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x831ce980
	ctx.lr = 0x830F1E30;
	sub_831CE980(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x830f1e3c
	goto loc_830F1E3C;
loc_830F1E38:
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_830F1E3C:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// blt cr6,0x830f1e58
	if (cr6.lt) goto loc_830F1E58;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830F1E58;
	sub_825952B8(ctx, base);
loc_830F1E58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F1E64"))) PPC_WEAK_FUNC(sub_830F1E64);
PPC_FUNC_IMPL(__imp__sub_830F1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1E68"))) PPC_WEAK_FUNC(sub_830F1E68);
PPC_FUNC_IMPL(__imp__sub_830F1E68) {
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
	// lis r11,11565
	ctx.r11.s64 = 757923840;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r11,11520
	ctx.r10.u64 = ctx.r11.u64 | 11520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830f1c50
	ctx.lr = 0x830F1E94;
	sub_830F1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// bne cr6,0x830f1ef0
	if (!cr6.eq) goto loc_830F1EF0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r31,r11,-25452
	ctx.r31.s64 = ctx.r11.s64 + -25452;
	// addi r4,r10,-32688
	ctx.r4.s64 = ctx.r10.s64 + -32688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x8259cc28
	ctx.lr = 0x830F1EBC;
	sub_8259CC28(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830F1EC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830f1ec4
	if (!cr6.eq) goto loc_830F1EC4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x830F1EEC;
	sub_825A1EB8(ctx, base);
	// b 0x830f1f10
	goto loc_830F1F10;
loc_830F1EF0:
	// addi r11,r11,-25452
	ctx.r11.s64 = ctx.r11.s64 + -25452;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x830f1f0c
	if (cr6.lt) goto loc_830F1F0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830F1F0C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_830F1F10:
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

__attribute__((alias("__imp__sub_830F1F2C"))) PPC_WEAK_FUNC(sub_830F1F2C);
PPC_FUNC_IMPL(__imp__sub_830F1F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F1F30"))) PPC_WEAK_FUNC(sub_830F1F30);
PPC_FUNC_IMPL(__imp__sub_830F1F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F1F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f200c
	if (!cr6.eq) goto loc_830F200C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r30,r11,5568
	ctx.r30.s64 = ctx.r11.s64 + 5568;
	// addi r4,r10,-32336
	ctx.r4.s64 = ctx.r10.s64 + -32336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d6090
	ctx.lr = 0x830F1F68;
	sub_835D6090(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F1F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830fb060
	ctx.lr = 0x830F1F90;
	sub_830FB060(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1fa4
	if (!cr6.eq) goto loc_830F1FA4;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F1FA4:
	// bl 0x830fab90
	ctx.lr = 0x830F1FA8;
	sub_830FAB90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1fbc
	if (!cr6.eq) goto loc_830F1FBC;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F1FBC:
	// bl 0x830fa6f0
	ctx.lr = 0x830F1FC0;
	sub_830FA6F0(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1fd0
	if (!cr6.eq) goto loc_830F1FD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_830F1FD0:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
	// bl 0x830fa238
	ctx.lr = 0x830F1FDC;
	sub_830FA238(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f1ff4
	if (!cr6.eq) goto loc_830F1FF4;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F1FF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830F200C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2014"))) PPC_WEAK_FUNC(sub_830F2014);
PPC_FUNC_IMPL(__imp__sub_830F2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2018"))) PPC_WEAK_FUNC(sub_830F2018);
PPC_FUNC_IMPL(__imp__sub_830F2018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f213c
	if (cr6.eq) goto loc_830F213C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5568
	ctx.r30.s64 = ctx.r11.s64 + 5568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F205C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f2088
	if (cr6.eq) goto loc_830F2088;
	// bl 0x830fa2c8
	ctx.lr = 0x830F2070;
	sub_830FA2C8(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f2088
	if (!cr6.eq) goto loc_830F2088;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F2088:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f20a0
	if (cr6.eq) goto loc_830F20A0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F20A0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f20c8
	if (cr6.eq) goto loc_830F20C8;
	// bl 0x83572958
	ctx.lr = 0x830F20B0;
	sub_83572958(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f20c8
	if (!cr6.eq) goto loc_830F20C8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F20C8:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f20f0
	if (cr6.eq) goto loc_830F20F0;
	// bl 0x83572958
	ctx.lr = 0x830F20D8;
	sub_83572958(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f20f0
	if (!cr6.eq) goto loc_830F20F0;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F20F0:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f2118
	if (cr6.eq) goto loc_830F2118;
	// bl 0x83572958
	ctx.lr = 0x830F2100;
	sub_83572958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f2118
	if (!cr6.eq) goto loc_830F2118;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F2118:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F212C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d60f8
	ctx.lr = 0x830F2134;
	sub_835D60F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5536, ctx.r11.u32);
loc_830F213C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2148"))) PPC_WEAK_FUNC(sub_830F2148);
PPC_FUNC_IMPL(__imp__sub_830F2148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F2150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f2230
	if (cr6.eq) goto loc_830F2230;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,5568
	ctx.r28.s64 = ctx.r11.s64 + 5568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F218C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f21a8
	if (cr6.eq) goto loc_830F21A8;
	// bl 0x83572958
	ctx.lr = 0x830F21A0;
	sub_83572958(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830F21A8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f21e8
	if (cr6.eq) goto loc_830F21E8;
	// lbz r11,5541(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5541);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f21d8
	if (cr6.eq) goto loc_830F21D8;
	// bl 0x830f1ae0
	ctx.lr = 0x830F21C8;
	sub_830F1AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f21dc
	if (!cr6.eq) goto loc_830F21DC;
loc_830F21D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F21DC:
	// bl 0x830fa7b0
	ctx.lr = 0x830F21E0;
	sub_830FA7B0(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830F21E8:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f2204
	if (cr6.eq) goto loc_830F2204;
	// lbz r3,5541(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5541);
	// bl 0x830fbb10
	ctx.lr = 0x830F21FC;
	sub_830FBB10(ctx, base);
	// lwz r11,5536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5536);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830F2204:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f221c
	if (cr6.eq) goto loc_830F221C;
	// lbz r3,5541(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5541);
	// bl 0x830fa288
	ctx.lr = 0x830F2218;
	sub_830FA288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830F221C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F2230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F223C"))) PPC_WEAK_FUNC(sub_830F223C);
PPC_FUNC_IMPL(__imp__sub_830F223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2240"))) PPC_WEAK_FUNC(sub_830F2240);
PPC_FUNC_IMPL(__imp__sub_830F2240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2248;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,5536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5536);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f22f8
	if (cr6.eq) goto loc_830F22F8;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,5568
	ctx.r31.s64 = ctx.r11.s64 + 5568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,5541(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5541, ctx.r11.u8);
	// stb r10,5540(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5540, ctx.r10.u8);
	// lwz r11,5536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5536);
	// rlwinm r7,r11,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830f22b8
	if (cr6.eq) goto loc_830F22B8;
	// bl 0x830fb248
	ctx.lr = 0x830F22B0;
	sub_830FB248(ctx, base);
	// lwz r11,5536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5536);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830F22B8:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f22d0
	if (cr6.eq) goto loc_830F22D0;
	// bl 0x830faeb8
	ctx.lr = 0x830F22C8;
	sub_830FAEB8(ctx, base);
	// lwz r11,5536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5536);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830F22D0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f22e4
	if (cr6.eq) goto loc_830F22E4;
	// bl 0x830fa318
	ctx.lr = 0x830F22E0;
	sub_830FA318(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830F22E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F22F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F22F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2304"))) PPC_WEAK_FUNC(sub_830F2304);
PPC_FUNC_IMPL(__imp__sub_830F2304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2308"))) PPC_WEAK_FUNC(sub_830F2308);
PPC_FUNC_IMPL(__imp__sub_830F2308) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,5568
	ctx.r30.s64 = ctx.r31.s64 + 5568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,5568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F233C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5568);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r31,5541(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5541);
	// bctrl 
	ctx.lr = 0x830F2358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_830F2374"))) PPC_WEAK_FUNC(sub_830F2374);
PPC_FUNC_IMPL(__imp__sub_830F2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2378"))) PPC_WEAK_FUNC(sub_830F2378);
PPC_FUNC_IMPL(__imp__sub_830F2378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F2380;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f24d8
	if (cr6.eq) goto loc_830F24D8;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// lbz r11,5540(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5540);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x830f24d4
	if (cr6.eq) goto loc_830F24D4;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,5568
	ctx.r31.s64 = ctx.r11.s64 + 5568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F23DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r10,r30,-6
	ctx.r10.s64 = ctx.r30.s64 + -6;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r9,5541(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5541, ctx.r9.u8);
	// bgt cr6,0x830f248c
	if (cr6.gt) goto loc_830F248C;
	// lis r12,-31985
	ctx.r12.s64 = -2096168960;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9228
	ctx.r12.s64 = ctx.r12.s64 + 9228;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_830F2464;
	case 1:
		goto loc_830F2450;
	case 2:
		goto loc_830F2478;
	case 3:
		goto loc_830F248C;
	case 4:
		goto loc_830F248C;
	case 5:
		goto loc_830F248C;
	case 6:
		goto loc_830F248C;
	case 7:
		goto loc_830F248C;
	case 8:
		goto loc_830F248C;
	case 9:
		goto loc_830F248C;
	case 10:
		goto loc_830F248C;
	case 11:
		goto loc_830F248C;
	case 12:
		goto loc_830F248C;
	case 13:
		goto loc_830F248C;
	case 14:
		goto loc_830F248C;
	case 15:
		goto loc_830F248C;
	case 16:
		goto loc_830F2450;
	default:
		return;
	}
	// lwz r24,9316(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9316);
	// lwz r24,9296(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9296);
	// lwz r24,9336(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9336);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9356(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9356);
	// lwz r24,9296(r15)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r15.u32 + 9296);
loc_830F2450:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f31,-25032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25032);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-25028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25028);
	ctx.f30.f64 = double(temp.f32);
	// b 0x830f24a0
	goto loc_830F24A0;
loc_830F2464:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f31,-25024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25024);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-25020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25020);
	ctx.f30.f64 = double(temp.f32);
	// b 0x830f24a0
	goto loc_830F24A0;
loc_830F2478:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lfs f31,-25016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25016);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-25012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25012);
	ctx.f30.f64 = double(temp.f32);
	// b 0x830f24a0
	goto loc_830F24A0;
loc_830F248C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,5541(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5541, ctx.r10.u8);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_830F24A0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfs f1,-32520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32520);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb3d8
	ctx.lr = 0x830F24AC;
	sub_830EB3D8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830fad68
	ctx.lr = 0x830F24B4;
	sub_830FAD68(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x830fad98
	ctx.lr = 0x830F24BC;
	sub_830FAD98(ctx, base);
	// stb r28,5540(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5540, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F24D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F24D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F24D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F24E8"))) PPC_WEAK_FUNC(sub_830F24E8);
PPC_FUNC_IMPL(__imp__sub_830F24E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F24F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f2560
	if (cr6.eq) goto loc_830F2560;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,5568
	ctx.r29.s64 = ctx.r30.s64 + 5568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r4,r10,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fac38
	ctx.lr = 0x830F2544;
	sub_830FAC38(ctx, base);
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F255C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F2560:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2568"))) PPC_WEAK_FUNC(sub_830F2568);
PPC_FUNC_IMPL(__imp__sub_830F2568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F2570;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f25f4
	if (cr6.eq) goto loc_830F25F4;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,5568
	ctx.r28.s64 = ctx.r29.s64 + 5568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,5568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F25BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r4,r9,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fac88
	ctx.lr = 0x830F25D8;
	sub_830FAC88(ctx, base);
	// lwz r11,5568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830F25F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F25F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F25FC"))) PPC_WEAK_FUNC(sub_830F25FC);
PPC_FUNC_IMPL(__imp__sub_830F25FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2600"))) PPC_WEAK_FUNC(sub_830F2600);
PPC_FUNC_IMPL(__imp__sub_830F2600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f2678
	if (cr6.eq) goto loc_830F2678;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,5568
	ctx.r29.s64 = ctx.r30.s64 + 5568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F264C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r4,r10,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fad18
	ctx.lr = 0x830F265C;
	sub_830FAD18(ctx, base);
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F2674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F2678:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2680"))) PPC_WEAK_FUNC(sub_830F2680);
PPC_FUNC_IMPL(__imp__sub_830F2680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2688;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f2714
	if (cr6.eq) goto loc_830F2714;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,5568
	ctx.r31.s64 = ctx.r11.s64 + 5568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F26D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lbz r9,5541(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5541);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f2700
	if (cr6.eq) goto loc_830F2700;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb488
	ctx.lr = 0x830F26F4;
	sub_830EB488(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830eb438
	ctx.lr = 0x830F26FC;
	sub_830EB438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830F2700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F2714:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2720"))) PPC_WEAK_FUNC(sub_830F2720);
PPC_FUNC_IMPL(__imp__sub_830F2720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2728;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f27d0
	if (cr6.eq) goto loc_830F27D0;
	// bl 0x830f2308
	ctx.lr = 0x830F2754;
	sub_830F2308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f27d0
	if (cr6.eq) goto loc_830F27D0;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,5568
	ctx.r29.s64 = ctx.r30.s64 + 5568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
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
	// bl 0x830eb4a8
	ctx.lr = 0x830F27A4;
	sub_830EB4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb438
	ctx.lr = 0x830F27AC;
	sub_830EB438(ctx, base);
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F27C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F27D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F27DC"))) PPC_WEAK_FUNC(sub_830F27DC);
PPC_FUNC_IMPL(__imp__sub_830F27DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F27E0"))) PPC_WEAK_FUNC(sub_830F27E0);
PPC_FUNC_IMPL(__imp__sub_830F27E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F27E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f284c
	if (cr6.eq) goto loc_830F284C;
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,5568
	ctx.r29.s64 = ctx.r30.s64 + 5568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fb930
	ctx.lr = 0x830F2830;
	sub_830FB930(ctx, base);
	// lwz r11,5568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F2848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F284C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2854"))) PPC_WEAK_FUNC(sub_830F2854);
PPC_FUNC_IMPL(__imp__sub_830F2854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2858"))) PPC_WEAK_FUNC(sub_830F2858);
PPC_FUNC_IMPL(__imp__sub_830F2858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F2860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f28cc
	if (cr6.eq) goto loc_830F28CC;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,5568
	ctx.r28.s64 = ctx.r29.s64 + 5568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,5568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F28A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830faae0
	ctx.lr = 0x830F28B0;
	sub_830FAAE0(ctx, base);
	// lwz r11,5568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F28C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F28CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F28D4"))) PPC_WEAK_FUNC(sub_830F28D4);
PPC_FUNC_IMPL(__imp__sub_830F28D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F28D8"))) PPC_WEAK_FUNC(sub_830F28D8);
PPC_FUNC_IMPL(__imp__sub_830F28D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F28E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,5536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5536);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f294c
	if (cr6.eq) goto loc_830F294C;
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,5568
	ctx.r28.s64 = ctx.r29.s64 + 5568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,5568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5568);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fa368
	ctx.lr = 0x830F2930;
	sub_830FA368(ctx, base);
	// lwz r11,5568(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F2948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830F294C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2954"))) PPC_WEAK_FUNC(sub_830F2954);
PPC_FUNC_IMPL(__imp__sub_830F2954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2958"))) PPC_WEAK_FUNC(sub_830F2958);
PPC_FUNC_IMPL(__imp__sub_830F2958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F2960;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31751
	ctx.r28.s64 = -2080833536;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,5568
	ctx.r31.s64 = ctx.r11.s64 + 5568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,5536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5536);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f29c8
	if (cr6.eq) goto loc_830F29C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F29A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fb2c0
	ctx.lr = 0x830F29AC;
	sub_830FB2C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F29C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5536);
loc_830F29C8:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f2aa4
	if (cr6.eq) goto loc_830F2AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F29F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x830fb108
	ctx.lr = 0x830F2A04;
	sub_830FB108(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fa3a0
	ctx.lr = 0x830F2A1C;
	sub_830FA3A0(ctx, base);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fa3d8
	ctx.lr = 0x830F2A30;
	sub_830FA3D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fb158
	ctx.lr = 0x830F2A38;
	sub_830FB158(ctx, base);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fa3a0
	ctx.lr = 0x830F2A50;
	sub_830FA3A0(ctx, base);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 52);
	// rldicr r5,r7,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x830fa3d8
	ctx.lr = 0x830F2A64;
	sub_830FA3D8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f2a80
	if (cr6.eq) goto loc_830F2A80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830F2A80;
	sub_825952B8(ctx, base);
loc_830F2A80:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2AA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5536);
loc_830F2AA4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f2b2c
	if (cr6.eq) goto loc_830F2B2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2AC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x830fb0b8
	ctx.lr = 0x830F2ADC;
	sub_830FB0B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fa720
	ctx.lr = 0x830F2AE4;
	sub_830FA720(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830f2b00
	if (cr6.eq) goto loc_830F2B00;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x830F2B00;
	sub_825952B8(ctx, base);
loc_830F2B00:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F2B2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2B38"))) PPC_WEAK_FUNC(sub_830F2B38);
PPC_FUNC_IMPL(__imp__sub_830F2B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F2B54"))) PPC_WEAK_FUNC(sub_830F2B54);
PPC_FUNC_IMPL(__imp__sub_830F2B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2B58"))) PPC_WEAK_FUNC(sub_830F2B58);
PPC_FUNC_IMPL(__imp__sub_830F2B58) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2b88
	if (!cr6.eq) goto loc_830F2B88;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830F2B88:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// bl 0x835d60f8
	ctx.lr = 0x830F2B94;
	sub_835D60F8(ctx, base);
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

__attribute__((alias("__imp__sub_830F2BA8"))) PPC_WEAK_FUNC(sub_830F2BA8);
PPC_FUNC_IMPL(__imp__sub_830F2BA8) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2bd4
	if (!cr6.eq) goto loc_830F2BD4;
loc_830F2BCC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f2c1c
	goto loc_830F2C1C;
loc_830F2BD4:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830f2bcc
	if (!cr6.lt) goto loc_830F2BCC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r31,r3,224
	ctx.r31.s64 = ctx.r3.s64 * 224;
	// addi r11,r11,5704
	ctx.r11.s64 = ctx.r11.s64 + 5704;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// ldx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r30.u32);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x830f2bcc
	if (cr6.eq) goto loc_830F2BCC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x830f2c08
	if (!cr6.gt) goto loc_830F2C08;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830f2c10
	goto loc_830F2C10;
loc_830F2C08:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830F2C10:
	// bl 0x830eb168
	ctx.lr = 0x830F2C14;
	sub_830EB168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stdx r11,r31,r30
	PPC_STORE_U64(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u64);
loc_830F2C1C:
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

__attribute__((alias("__imp__sub_830F2C34"))) PPC_WEAK_FUNC(sub_830F2C34);
PPC_FUNC_IMPL(__imp__sub_830F2C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2C38"))) PPC_WEAK_FUNC(sub_830F2C38);
PPC_FUNC_IMPL(__imp__sub_830F2C38) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2c74
	if (!cr6.eq) goto loc_830F2C74;
loc_830F2C5C:
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
loc_830F2C74:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r31,r11,6160
	ctx.r31.s64 = ctx.r11.s64 + 6160;
	// ld r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x830f2c5c
	if (cr6.eq) goto loc_830F2C5C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x830f2c98
	if (!cr6.gt) goto loc_830F2C98;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830f2ca0
	goto loc_830F2CA0;
loc_830F2C98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830F2CA0:
	// bl 0x830eb168
	ctx.lr = 0x830F2CA4;
	sub_830EB168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_830F2CC0"))) PPC_WEAK_FUNC(sub_830F2CC0);
PPC_FUNC_IMPL(__imp__sub_830F2CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2cf0
	if (!cr6.eq) goto loc_830F2CF0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F2CF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f2c38
	ctx.lr = 0x830F2CF8;
	sub_830F2C38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_830F2CFC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f2ba8
	ctx.lr = 0x830F2D08;
	sub_830F2BA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f2d14
	if (cr6.eq) goto loc_830F2D14;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830F2D14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830f2cfc
	if (cr6.lt) goto loc_830F2CFC;
	// subfic r11,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2D30"))) PPC_WEAK_FUNC(sub_830F2D30);
PPC_FUNC_IMPL(__imp__sub_830F2D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F2D38;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2d68
	if (!cr6.eq) goto loc_830F2D68;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F2D68:
	// lis r30,-31751
	ctx.r30.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,5648
	ctx.r29.s64 = ctx.r30.s64 + 5648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lwz r11,5648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5648);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,5632
	ctx.r8.s64 = ctx.r10.s64 + 5632;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfsx f31,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830F2DAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2DBC"))) PPC_WEAK_FUNC(sub_830F2DBC);
PPC_FUNC_IMPL(__imp__sub_830F2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2DC0"))) PPC_WEAK_FUNC(sub_830F2DC0);
PPC_FUNC_IMPL(__imp__sub_830F2DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F2DC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2df0
	if (!cr6.eq) goto loc_830F2DF0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F2DF0:
	// lis r29,-31751
	ctx.r29.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r29,5648
	ctx.r28.s64 = ctx.r29.s64 + 5648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,5648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5648);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2E10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,5632
	ctx.r8.s64 = ctx.r10.s64 + 5632;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,5648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5648);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830F2E38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2E44"))) PPC_WEAK_FUNC(sub_830F2E44);
PPC_FUNC_IMPL(__imp__sub_830F2E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F2E48"))) PPC_WEAK_FUNC(sub_830F2E48);
PPC_FUNC_IMPL(__imp__sub_830F2E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F2E50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2e70
	if (!cr6.eq) goto loc_830F2E70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F2E70:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r11,5648
	ctx.r26.s64 = ctx.r11.s64 + 5648;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,5648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5648);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2E90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r28,r11,5632
	ctx.r28.s64 = ctx.r11.s64 + 5632;
	// addi r31,r10,5704
	ctx.r31.s64 = ctx.r10.s64 + 5704;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r29,2
	ctx.r29.s64 = 2;
loc_830F2EA8:
	// ld r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x830f2ed8
	if (cr6.eq) goto loc_830F2ED8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f2ec8
	if (cr6.lt) goto loc_830F2EC8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830f2ecc
	goto loc_830F2ECC;
loc_830F2EC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_830F2ECC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb298
	ctx.lr = 0x830F2ED8;
	sub_830EB298(ctx, base);
loc_830F2ED8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// bne 0x830f2ea8
	if (!cr0.eq) goto loc_830F2EA8;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x830f2f00
	if (cr6.gt) goto loc_830F2F00;
	// li r10,1
	ctx.r10.s64 = 1;
loc_830F2F00:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,6160
	ctx.r27.s64 = ctx.r11.s64 + 6160;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// ld r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 32);
	// stfs f0,5644(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 5644, temp.u32);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x830f2f68
	if (cr6.eq) goto loc_830F2F68;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x830f2f38
	goto loc_830F2F38;
loc_830F2F34:
	// ld r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 32);
loc_830F2F38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f2f4c
	if (cr6.lt) goto loc_830F2F4C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830f2f50
	goto loc_830F2F50;
loc_830F2F4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_830F2F50:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// bl 0x830eb298
	ctx.lr = 0x830F2F5C;
	sub_830EB298(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// bne 0x830f2f34
	if (!cr0.eq) goto loc_830F2F34;
loc_830F2F68:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F2F7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F2F88"))) PPC_WEAK_FUNC(sub_830F2F88);
PPC_FUNC_IMPL(__imp__sub_830F2F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F2F90;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f2fc0
	if (!cr6.eq) goto loc_830F2FC0;
loc_830F2FB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F2FC0:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x830f2fb0
	if (!cr6.lt) goto loc_830F2FB0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r29,r28,224
	ctx.r29.s64 = ctx.r28.s64 * 224;
	// addi r30,r11,5704
	ctx.r30.s64 = ctx.r11.s64 + 5704;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ldx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x830f2fb0
	if (!cr6.eq) goto loc_830F2FB0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r31,r11,-31956
	ctx.r31.s64 = ctx.r11.s64 + -31956;
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x830f1b68
	ctx.lr = 0x830F2FFC;
	sub_830F1B68(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f3014
	if (cr6.eq) goto loc_830F3014;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x830f3018
	goto loc_830F3018;
loc_830F3014:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_830F3018:
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,-8
	ctx.r6.s64 = -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830eace8
	ctx.lr = 0x830F303C;
	sub_830EACE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f30b0
	if (!cr6.eq) goto loc_830F30B0;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5648
	ctx.r4.s64 = ctx.r11.s64 + 5648;
	// bl 0x830eed60
	ctx.lr = 0x830F3054;
	sub_830EED60(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r10,5632
	ctx.r8.s64 = ctx.r10.s64 + 5632;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfsx f31,r7,r8
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x830f3088
	if (cr6.eq) goto loc_830F3088;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F3088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F3088:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830f309c
	if (cr6.lt) goto loc_830F309C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830F309C:
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830eb298
	ctx.lr = 0x830F30B0;
	sub_830EB298(ctx, base);
loc_830F30B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F30BC"))) PPC_WEAK_FUNC(sub_830F30BC);
PPC_FUNC_IMPL(__imp__sub_830F30BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F30C0"))) PPC_WEAK_FUNC(sub_830F30C0);
PPC_FUNC_IMPL(__imp__sub_830F30C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F30C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,5640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f30f0
	if (!cr6.eq) goto loc_830F30F0;
loc_830F30E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F30F0:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r29,r11,6160
	ctx.r29.s64 = ctx.r11.s64 + 6160;
	// ld r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x830f30e0
	if (!cr6.eq) goto loc_830F30E0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x830eab70
	ctx.lr = 0x830F311C;
	sub_830EAB70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f3168
	if (!cr6.eq) goto loc_830F3168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_830F3134:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f3148
	if (cr6.lt) goto loc_830F3148;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x830f314c
	goto loc_830F314C;
loc_830F3148:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_830F314C:
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830eb298
	ctx.lr = 0x830F315C;
	sub_830EB298(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// bne 0x830f3134
	if (!cr0.eq) goto loc_830F3134;
loc_830F3168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3174"))) PPC_WEAK_FUNC(sub_830F3174);
PPC_FUNC_IMPL(__imp__sub_830F3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3178"))) PPC_WEAK_FUNC(sub_830F3178);
PPC_FUNC_IMPL(__imp__sub_830F3178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F3180;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r28,r11,-31996
	ctx.r28.s64 = ctx.r11.s64 + -31996;
	// addi r3,r10,5648
	ctx.r3.s64 = ctx.r10.s64 + 5648;
	// addi r4,r28,-84
	ctx.r4.s64 = ctx.r28.s64 + -84;
	// bl 0x835d6090
	ctx.lr = 0x830F31A0;
	sub_835D6090(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r9,5704
	ctx.r11.s64 = ctx.r9.s64 + 5704;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r28,-68
	ctx.r8.s64 = ctx.r28.s64 + -68;
	// addi r7,r28,-44
	ctx.r7.s64 = ctx.r28.s64 + -44;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f31,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r27,r10,5632
	ctx.r27.s64 = ctx.r10.s64 + 5632;
loc_830F31DC:
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830F31E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f31e4
	if (!cr6.eq) goto loc_830F31E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830F3208;
	sub_8259CC28(ctx, base);
	// stfsx f31,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, temp.u32);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830f31dc
	if (!cr0.eq) goto loc_830F31DC;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// addi r31,r10,6160
	ctx.r31.s64 = ctx.r10.s64 + 6160;
	// li r5,17
	ctx.r5.s64 = 17;
	// stfs f31,5644(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5644, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x830F3244;
	sub_8259CC28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x830F3254;
	sub_8259CC28(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r10,5640(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5640, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3278"))) PPC_WEAK_FUNC(sub_830F3278);
PPC_FUNC_IMPL(__imp__sub_830F3278) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r11,6611(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6611);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f32b0
	if (cr6.eq) goto loc_830F32B0;
	// bl 0x835d7cb8
	ctx.lr = 0x830F32A0;
	sub_835D7CB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f32b0
	if (!cr6.eq) goto loc_830F32B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,6611(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6611, ctx.r11.u8);
loc_830F32B0:
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

__attribute__((alias("__imp__sub_830F32C4"))) PPC_WEAK_FUNC(sub_830F32C4);
PPC_FUNC_IMPL(__imp__sub_830F32C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F32C8"))) PPC_WEAK_FUNC(sub_830F32C8);
PPC_FUNC_IMPL(__imp__sub_830F32C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f32e0
	if (cr6.eq) goto loc_830F32E0;
	// b 0x835d62d0
	sub_835D62D0(ctx, base);
	return;
loc_830F32E0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F32E8"))) PPC_WEAK_FUNC(sub_830F32E8);
PPC_FUNC_IMPL(__imp__sub_830F32E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,6611(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x835d63c8
	sub_835D63C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3300"))) PPC_WEAK_FUNC(sub_830F3300);
PPC_FUNC_IMPL(__imp__sub_830F3300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3304"))) PPC_WEAK_FUNC(sub_830F3304);
PPC_FUNC_IMPL(__imp__sub_830F3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3308"))) PPC_WEAK_FUNC(sub_830F3308);
PPC_FUNC_IMPL(__imp__sub_830F3308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f3320
	if (cr6.eq) goto loc_830F3320;
	// b 0x835d6768
	sub_835D6768(ctx, base);
	return;
loc_830F3320:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3328"))) PPC_WEAK_FUNC(sub_830F3328);
PPC_FUNC_IMPL(__imp__sub_830F3328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F3330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r10,6611(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f3388
	if (cr6.eq) goto loc_830F3388;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830F3354:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d6768
	ctx.lr = 0x830F3364;
	sub_835D6768(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f3370
	if (cr6.eq) goto loc_830F3370;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_830F3370:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x830f3354
	if (cr6.lt) goto loc_830F3354;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x830f338c
	if (!cr6.eq) goto loc_830F338C;
loc_830F3388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F338C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3394"))) PPC_WEAK_FUNC(sub_830F3394);
PPC_FUNC_IMPL(__imp__sub_830F3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3398"))) PPC_WEAK_FUNC(sub_830F3398);
PPC_FUNC_IMPL(__imp__sub_830F3398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f33b0
	if (cr6.eq) goto loc_830F33B0;
	// b 0x835d6810
	sub_835D6810(ctx, base);
	return;
loc_830F33B0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F33B8"))) PPC_WEAK_FUNC(sub_830F33B8);
PPC_FUNC_IMPL(__imp__sub_830F33B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r9,r11,6608
	ctx.r9.s64 = ctx.r11.s64 + 6608;
	// stbx r4,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F33E0"))) PPC_WEAK_FUNC(sub_830F33E0);
PPC_FUNC_IMPL(__imp__sub_830F33E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f33f8
	if (cr6.eq) goto loc_830F33F8;
	// b 0x835d68a0
	sub_835D68A0(ctx, base);
	return;
loc_830F33F8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F3400"))) PPC_WEAK_FUNC(sub_830F3400);
PPC_FUNC_IMPL(__imp__sub_830F3400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x830f3484
	if (cr6.lt) goto loc_830F3484;
	// beq cr6,0x830f3454
	if (cr6.eq) goto loc_830F3454;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x830f3424
	if (cr6.lt) goto loc_830F3424;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830F3424:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r10,r4,56
	ctx.r10.s64 = ctx.r4.s64 * 56;
	// addi r11,r11,6616
	ctx.r11.s64 = ctx.r11.s64 + 6616;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830F3444:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x830f3444
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F3444;
	// blr 
	return;
loc_830F3454:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// addi r10,r10,6728
	ctx.r10.s64 = ctx.r10.s64 + 6728;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830F3474:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x830f3474
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F3474;
	// blr 
	return;
loc_830F3484:
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// addi r10,r10,6840
	ctx.r10.s64 = ctx.r10.s64 + 6840;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830F34A4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x830f34a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F34A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F34B4"))) PPC_WEAK_FUNC(sub_830F34B4);
PPC_FUNC_IMPL(__imp__sub_830F34B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F34B8"))) PPC_WEAK_FUNC(sub_830F34B8);
PPC_FUNC_IMPL(__imp__sub_830F34B8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f351c
	if (cr6.eq) goto loc_830F351C;
	// lhz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r8,6840
	ctx.r10.s64 = ctx.r8.s64 + 6840;
	// mulli r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 * 56;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_830F34FC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x830f34fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F34FC;
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
loc_830F351C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3554
	if (cr6.eq) goto loc_830F3554;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ld r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835d5920
	ctx.lr = 0x830F3540;
	sub_835D5920(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835d5920
	ctx.lr = 0x830F3554;
	sub_835D5920(ctx, base);
loc_830F3554:
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

__attribute__((alias("__imp__sub_830F3568"))) PPC_WEAK_FUNC(sub_830F3568);
PPC_FUNC_IMPL(__imp__sub_830F3568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// li r11,7
	ctx.r11.s64 = 7;
	// mulli r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 * 56;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r9,r9,6728
	ctx.r9.s64 = ctx.r9.s64 + 6728;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_830F359C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x830f359c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F359C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F35AC"))) PPC_WEAK_FUNC(sub_830F35AC);
PPC_FUNC_IMPL(__imp__sub_830F35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F35B0"))) PPC_WEAK_FUNC(sub_830F35B0);
PPC_FUNC_IMPL(__imp__sub_830F35B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r8,r8,6616
	ctx.r8.s64 = ctx.r8.s64 + 6616;
	// mulli r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 * 56;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
loc_830F35E8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x830f35e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F35E8;
	// b 0x830f4128
	sub_830F4128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F35F8"))) PPC_WEAK_FUNC(sub_830F35F8);
PPC_FUNC_IMPL(__imp__sub_830F35F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F35FC"))) PPC_WEAK_FUNC(sub_830F35FC);
PPC_FUNC_IMPL(__imp__sub_830F35FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3600"))) PPC_WEAK_FUNC(sub_830F3600);
PPC_FUNC_IMPL(__imp__sub_830F3600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-31985
	ctx.r7.s64 = -2096168960;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r7,r7,13496
	ctx.r7.s64 = ctx.r7.s64 + 13496;
	// lis r6,-31985
	ctx.r6.s64 = -2096168960;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// lis r5,-31985
	ctx.r5.s64 = -2096168960;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r3,528
	ctx.r3.s64 = 528;
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// li r4,32
	ctx.r4.s64 = 32;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// addi r6,r6,13672
	ctx.r6.s64 = ctx.r6.s64 + 13672;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// sth r4,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// addi r5,r5,13744
	ctx.r5.s64 = ctx.r5.s64 + 13744;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// sth r9,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r9.u16);
	// sth r8,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r8.u16);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// bl 0x835d7e58
	ctx.lr = 0x830F3698;
	sub_835D7E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f36ac
	if (!cr6.eq) goto loc_830F36AC;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,6611(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6611, ctx.r11.u8);
loc_830F36AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F36BC"))) PPC_WEAK_FUNC(sub_830F36BC);
PPC_FUNC_IMPL(__imp__sub_830F36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F36C0"))) PPC_WEAK_FUNC(sub_830F36C0);
PPC_FUNC_IMPL(__imp__sub_830F36C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830F36C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f3764
	if (cr6.eq) goto loc_830F3764;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x830f3400
	ctx.lr = 0x830F371C;
	sub_830F3400(ctx, base);
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(ctx.r31.u64, 0, xer);
	// beq cr6,0x830f3758
	if (cr6.eq) goto loc_830F3758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb1d8
	ctx.lr = 0x830F3734;
	sub_830EB1D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3758
	if (cr6.eq) goto loc_830F3758;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830eb168
	ctx.lr = 0x830F3750;
	sub_830EB168(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F3758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830F3764:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3770"))) PPC_WEAK_FUNC(sub_830F3770);
PPC_FUNC_IMPL(__imp__sub_830F3770) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f37dc
	if (cr6.eq) goto loc_830F37DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x835d6940
	ctx.lr = 0x830F37B4;
	sub_835D6940(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_830F37DC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_830F37F4"))) PPC_WEAK_FUNC(sub_830F37F4);
PPC_FUNC_IMPL(__imp__sub_830F37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F37F8"))) PPC_WEAK_FUNC(sub_830F37F8);
PPC_FUNC_IMPL(__imp__sub_830F37F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f386c
	if (cr6.eq) goto loc_830F386C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x835d6a18
	ctx.lr = 0x830F3844;
	sub_835D6A18(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_830F386C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_830F3884"))) PPC_WEAK_FUNC(sub_830F3884);
PPC_FUNC_IMPL(__imp__sub_830F3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3888"))) PPC_WEAK_FUNC(sub_830F3888);
PPC_FUNC_IMPL(__imp__sub_830F3888) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f38fc
	if (cr6.eq) goto loc_830F38FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x835d6a18
	ctx.lr = 0x830F38D4;
	sub_835D6A18(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_830F38FC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_830F3914"))) PPC_WEAK_FUNC(sub_830F3914);
PPC_FUNC_IMPL(__imp__sub_830F3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3918"))) PPC_WEAK_FUNC(sub_830F3918);
PPC_FUNC_IMPL(__imp__sub_830F3918) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r9,6611(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f398c
	if (cr6.eq) goto loc_830F398C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x835d6a18
	ctx.lr = 0x830F3964;
	sub_835D6A18(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_830F398C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_830F39A4"))) PPC_WEAK_FUNC(sub_830F39A4);
PPC_FUNC_IMPL(__imp__sub_830F39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F39A8"))) PPC_WEAK_FUNC(sub_830F39A8);
PPC_FUNC_IMPL(__imp__sub_830F39A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830F39B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lbz r5,6611(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6611);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830f3cf0
	if (cr6.eq) goto loc_830F3CF0;
	// li r11,16
	ctx.r11.s64 = 16;
	// std r24,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r24.u64);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r30,r4,65535
	ctx.r30.u64 = ctx.r4.u64 | 65535;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// lfs f0,-26260(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// sth r30,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r30.u16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// stw r28,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r28.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
loc_830F3A24:
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830f3a24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830F3A24;
	// lbz r26,551(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 551);
	// stfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// std r24,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r24.u64);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// sth r25,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r25.u16);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// beq cr6,0x830f3aa8
	if (cr6.eq) goto loc_830F3AA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ef418
	ctx.lr = 0x830F3A78;
	sub_830EF418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f3cf0
	if (!cr6.eq) goto loc_830F3CF0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
loc_830F3AA8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x830f3af8
	if (!cr6.eq) goto loc_830F3AF8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r11,r11,-24832
	ctx.r11.s64 = ctx.r11.s64 + -24832;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bne cr6,0x830f3aec
	if (!cr6.eq) goto loc_830F3AEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x830f1b18
	ctx.lr = 0x830F3ADC;
	sub_830F1B18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f3aec
	if (!cr6.eq) goto loc_830F3AEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
loc_830F3AEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r11.u16);
	// b 0x830f3cd8
	goto loc_830F3CD8;
loc_830F3AF8:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// beq cr6,0x830f3b14
	if (cr6.eq) goto loc_830F3B14;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(ctx.r23.u32, 2, xer);
	// bne cr6,0x830f3b20
	if (!cr6.eq) goto loc_830F3B20;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x830f3b20
	goto loc_830F3B20;
loc_830F3B14:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x830f3b20
	if (!cr6.eq) goto loc_830F3B20;
	// li r27,4
	ctx.r27.s64 = 4;
loc_830F3B20:
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835dd8a0
	ctx.lr = 0x830F3B30;
	sub_835DD8A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f3b90
	if (!cr6.eq) goto loc_830F3B90;
	// lhz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 360);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3b98
	if (cr6.eq) goto loc_830F3B98;
	// addi r29,r1,204
	ctx.r29.s64 = ctx.r1.s64 + 204;
	// addi r31,r1,328
	ctx.r31.s64 = ctx.r1.s64 + 328;
loc_830F3B50:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x835d5a48
	ctx.lr = 0x830F3B60;
	sub_835D5A48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f3b70
	if (!cr6.eq) goto loc_830F3B70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_830F3B70:
	// lhz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 360);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x830f3b50
	if (cr6.lt) goto loc_830F3B50;
	// b 0x830f3b98
	goto loc_830F3B98;
loc_830F3B90:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// sth r28,360(r1)
	PPC_STORE_U16(ctx.r1.u32 + 360, ctx.r28.u16);
loc_830F3B98:
	// sth r27,194(r1)
	PPC_STORE_U16(ctx.r1.u32 + 194, ctx.r27.u16);
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// beq cr6,0x830f3c04
	if (cr6.eq) goto loc_830F3C04;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(ctx.r23.u32, 2, xer);
	// bne cr6,0x830f3cd8
	if (!cr6.eq) goto loc_830F3CD8;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(ctx.r25.u32, 1, xer);
	// addi r31,r10,-31620
	ctx.r31.s64 = ctx.r10.s64 + -31620;
	// bne cr6,0x830f3bec
	if (!cr6.eq) goto loc_830F3BEC;
	// bl 0x830f1b68
	ctx.lr = 0x830F3BC0;
	sub_830F1B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 360);
	// bne cr6,0x830f3bec
	if (!cr6.eq) goto loc_830F3BEC;
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// addi r8,r31,-16
	ctx.r8.s64 = ctx.r31.s64 + -16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stwx r8,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
loc_830F3BEC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x830f3cd8
	if (cr6.eq) goto loc_830F3CD8;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// b 0x830f3cd8
	goto loc_830F3CD8;
loc_830F3C04:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-31620
	ctx.r11.s64 = ctx.r11.s64 + -31620;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x837b0c10
	ctx.lr = 0x830F3C18;
	sub_837B0C10(ctx, base);
	// lhz r9,360(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 360);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f3c8c
	if (cr6.eq) goto loc_830F3C8C;
	// addi r31,r1,204
	ctx.r31.s64 = ctx.r1.s64 + 204;
loc_830F3C30:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_830F3C38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f3c38
	if (!cr6.eq) goto loc_830F3C38;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x830F3C64;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f3c88
	if (cr6.eq) goto loc_830F3C88;
	// lhz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 360);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x830f3c30
	if (cr6.lt) goto loc_830F3C30;
	// b 0x830f3c8c
	goto loc_830F3C8C;
loc_830F3C88:
	// li r29,1
	ctx.r29.s64 = 1;
loc_830F3C8C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3ca8
	if (cr6.eq) goto loc_830F3CA8;
	// bl 0x830f1988
	ctx.lr = 0x830F3C9C;
	sub_830F1988(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
loc_830F3CA8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f3cc8
	if (cr6.lt) goto loc_830F3CC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830F3CC8;
	sub_825952B8(ctx, base);
loc_830F3CC8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_830F3CD8:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x835d6498
	ctx.lr = 0x830F3CE4;
	sub_835D6498(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f3cf0
	if (cr6.eq) goto loc_830F3CF0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_830F3CF0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F3CF8"))) PPC_WEAK_FUNC(sub_830F3CF8);
PPC_FUNC_IMPL(__imp__sub_830F3CF8) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f3d28
	if (!cr6.eq) goto loc_830F3D28;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f3e2c
	goto loc_830F3E2C;
loc_830F3D28:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830f7d68
	ctx.lr = 0x830F3D30;
	sub_830F7D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f3dec
	if (!cr6.eq) goto loc_830F3DEC;
	// cmplwi cr6,r31,146
	cr6.compare<uint32_t>(ctx.r31.u32, 146, xer);
	// bgt cr6,0x830f3d94
	if (cr6.gt) goto loc_830F3D94;
	// beq cr6,0x830f3d8c
	if (cr6.eq) goto loc_830F3D8C;
	// cmplwi cr6,r31,87
	cr6.compare<uint32_t>(ctx.r31.u32, 87, xer);
	// bgt cr6,0x830f3d7c
	if (cr6.gt) goto loc_830F3D7C;
	// beq cr6,0x830f3d74
	if (cr6.eq) goto loc_830F3D74;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// beq cr6,0x830f3d6c
	if (cr6.eq) goto loc_830F3D6C;
	// cmplwi cr6,r31,31
	cr6.compare<uint32_t>(ctx.r31.u32, 31, xer);
	// bne cr6,0x830f3dd4
	if (!cr6.eq) goto loc_830F3DD4;
	// li r30,10001
	ctx.r30.s64 = 10001;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3D6C:
	// li r30,10008
	ctx.r30.s64 = 10008;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3D74:
	// li r30,10007
	ctx.r30.s64 = 10007;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3D7C:
	// cmplwi cr6,r31,144
	cr6.compare<uint32_t>(ctx.r31.u32, 144, xer);
	// bne cr6,0x830f3dd4
	if (!cr6.eq) goto loc_830F3DD4;
	// li r30,10003
	ctx.r30.s64 = 10003;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3D8C:
	// li r30,10000
	ctx.r30.s64 = 10000;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3D94:
	// cmplwi cr6,r31,215
	cr6.compare<uint32_t>(ctx.r31.u32, 215, xer);
	// bgt cr6,0x830f3dc8
	if (cr6.gt) goto loc_830F3DC8;
	// beq cr6,0x830f3dc0
	if (cr6.eq) goto loc_830F3DC0;
	// cmplwi cr6,r31,204
	cr6.compare<uint32_t>(ctx.r31.u32, 204, xer);
	// beq cr6,0x830f3db8
	if (cr6.eq) goto loc_830F3DB8;
	// cmplwi cr6,r31,210
	cr6.compare<uint32_t>(ctx.r31.u32, 210, xer);
	// bne cr6,0x830f3dd4
	if (!cr6.eq) goto loc_830F3DD4;
	// li r30,10005
	ctx.r30.s64 = 10005;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3DB8:
	// li r30,10002
	ctx.r30.s64 = 10002;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3DC0:
	// li r30,10006
	ctx.r30.s64 = 10006;
	// b 0x830f3dd4
	goto loc_830F3DD4;
loc_830F3DC8:
	// cmplwi cr6,r31,236
	cr6.compare<uint32_t>(ctx.r31.u32, 236, xer);
	// bne cr6,0x830f3dd4
	if (!cr6.eq) goto loc_830F3DD4;
	// li r30,10004
	ctx.r30.s64 = 10004;
loc_830F3DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f7d68
	ctx.lr = 0x830F3DDC;
	sub_830F7D68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f3dec
	if (!cr6.eq) goto loc_830F3DEC;
	// li r30,30000
	ctx.r30.s64 = 30000;
loc_830F3DEC:
	// bl 0x830f1b68
	ctx.lr = 0x830F3DF0;
	sub_830F1B68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830f1bd8
	ctx.lr = 0x830F3DF8;
	sub_830F1BD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3e18
	if (cr6.eq) goto loc_830F3E18;
	// bl 0x830f1b90
	ctx.lr = 0x830F3E08;
	sub_830F1B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3e18
	if (cr6.eq) goto loc_830F3E18;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830F3E18:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,7152
	ctx.r5.s64 = ctx.r11.s64 + 7152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830f7db0
	ctx.lr = 0x830F3E2C;
	sub_830F7DB0(ctx, base);
loc_830F3E2C:
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

__attribute__((alias("__imp__sub_830F3E44"))) PPC_WEAK_FUNC(sub_830F3E44);
PPC_FUNC_IMPL(__imp__sub_830F3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3E48"))) PPC_WEAK_FUNC(sub_830F3E48);
PPC_FUNC_IMPL(__imp__sub_830F3E48) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f3e78
	if (!cr6.eq) goto loc_830F3E78;
loc_830F3E70:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830f3f78
	goto loc_830F3F78;
loc_830F3E78:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r30,r11,7144
	ctx.r30.s64 = ctx.r11.s64 + 7144;
	// ld r11,7144(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 7144);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x830f3e70
	if (!cr6.eq) goto loc_830F3E70;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r31,r11,-31012
	ctx.r31.s64 = ctx.r11.s64 + -31012;
	// addi r11,r31,-156
	ctx.r11.s64 = ctx.r31.s64 + -156;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830f1b90
	ctx.lr = 0x830F3EA0;
	sub_830F1B90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f3ecc
	if (cr6.eq) goto loc_830F3ECC;
	// bl 0x830f1bf0
	ctx.lr = 0x830F3EB0;
	sub_830F1BF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f3ec4
	if (cr6.eq) goto loc_830F3EC4;
	// addi r11,r31,-144
	ctx.r11.s64 = ctx.r31.s64 + -144;
	// b 0x830f3ed0
	goto loc_830F3ED0;
loc_830F3EC4:
	// addi r11,r31,-124
	ctx.r11.s64 = ctx.r31.s64 + -124;
	// b 0x830f3ed0
	goto loc_830F3ED0;
loc_830F3ECC:
	// addi r11,r31,-116
	ctx.r11.s64 = ctx.r31.s64 + -116;
loc_830F3ED0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,7152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7152);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830eace8
	ctx.lr = 0x830F3EFC;
	sub_830EACE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f3f78
	if (!cr6.eq) goto loc_830F3F78;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x835d5928
	ctx.lr = 0x830F3F10;
	sub_835D5928(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x835d5928
	ctx.lr = 0x830F3F1C;
	sub_835D5928(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x835d5928
	ctx.lr = 0x830F3F28;
	sub_835D5928(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830eb298
	ctx.lr = 0x830F3F44;
	sub_830EB298(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830eb298
	ctx.lr = 0x830F3F58;
	sub_830EB298(ctx, base);
	// bl 0x830f1908
	ctx.lr = 0x830F3F5C;
	sub_830F1908(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-440
	ctx.r9.s64 = ctx.r31.s64 + -440;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb298
	ctx.lr = 0x830F3F78;
	sub_830EB298(ctx, base);
loc_830F3F78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_830F3F94"))) PPC_WEAK_FUNC(sub_830F3F94);
PPC_FUNC_IMPL(__imp__sub_830F3F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F3F98"))) PPC_WEAK_FUNC(sub_830F3F98);
PPC_FUNC_IMPL(__imp__sub_830F3F98) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f3fd4
	if (!cr6.eq) goto loc_830F3FD4;
loc_830F3FBC:
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
loc_830F3FD4:
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// ld r11,7144(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7144);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x830f3fbc
	if (cr6.eq) goto loc_830F3FBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x830eb168
	ctx.lr = 0x830F3FF0;
	sub_830EB168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,7144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7144, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_830F400C"))) PPC_WEAK_FUNC(sub_830F400C);
PPC_FUNC_IMPL(__imp__sub_830F400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4010"))) PPC_WEAK_FUNC(sub_830F4010);
PPC_FUNC_IMPL(__imp__sub_830F4010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F4018;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f403c
	if (!cr6.eq) goto loc_830F403C;
loc_830F4030:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F403C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835d5a08
	ctx.lr = 0x830F4044;
	sub_835D5A08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f4030
	if (!cr6.eq) goto loc_830F4030;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lhz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,7280
	ctx.r11.s64 = ctx.r11.s64 + 7280;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
loc_830F4060:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830f4090
	if (cr6.eq) goto loc_830F4090;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_830F4074:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// beq cr6,0x830f40ac
	if (cr6.eq) goto loc_830F40AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830f4074
	if (cr6.lt) goto loc_830F4074;
loc_830F4090:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x830f4060
	if (cr6.lt) goto loc_830F4060;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F40AC:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mulli r10,r30,224
	ctx.r10.s64 = ctx.r30.s64 * 224;
	// addi r11,r11,7480
	ctx.r11.s64 = ctx.r11.s64 + 7480;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fc400
	ctx.lr = 0x830F40CC;
	sub_830FC400(ctx, base);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// rlwinm r28,r30,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r11,7376
	ctx.r29.s64 = ctx.r11.s64 + 7376;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r5,r28,r29
	ctx.r5.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fc100
	ctx.lr = 0x830F40E8;
	sub_830FC100(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,7064
	ctx.r9.s64 = ctx.r10.s64 + 7064;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// stbx r11,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u8);
	// beq cr6,0x830f4114
	if (cr6.eq) goto loc_830F4114;
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r11,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F4114:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F4128"))) PPC_WEAK_FUNC(sub_830F4128);
PPC_FUNC_IMPL(__imp__sub_830F4128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F4130;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x830f4154
	if (!cr6.eq) goto loc_830F4154;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F4154:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-31464
	ctx.r31.s64 = ctx.r11.s64 + -31464;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r31,472
	ctx.r11.s64 = ctx.r31.s64 + 472;
	// addi r10,r31,488
	ctx.r10.s64 = ctx.r31.s64 + 488;
	// addi r9,r31,504
	ctx.r9.s64 = ctx.r31.s64 + 504;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r31,520
	ctx.r8.s64 = ctx.r31.s64 + 520;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,536
	ctx.r7.s64 = ctx.r31.s64 + 536;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r31,552
	ctx.r6.s64 = ctx.r31.s64 + 552;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r5,r31,576
	ctx.r5.s64 = ctx.r31.s64 + 576;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r4,r31,600
	ctx.r4.s64 = ctx.r31.s64 + 600;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
loc_830F41A4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// bl 0x835d5928
	ctx.lr = 0x830F41B0;
	sub_835D5928(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f41bc
	if (cr6.eq) goto loc_830F41BC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_830F41BC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830f41a4
	if (!cr0.eq) goto loc_830F41A4;
	// addi r11,r31,620
	ctx.r11.s64 = ctx.r31.s64 + 620;
	// addi r10,r31,636
	ctx.r10.s64 = ctx.r31.s64 + 636;
	// addi r9,r31,652
	ctx.r9.s64 = ctx.r31.s64 + 652;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r31,668
	ctx.r8.s64 = ctx.r31.s64 + 668;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,688
	ctx.r7.s64 = ctx.r31.s64 + 688;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
loc_830F41FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,9008(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// bl 0x830eb298
	ctx.lr = 0x830F4210;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f421c
	if (cr6.eq) goto loc_830F421C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_830F421C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x830f41fc
	if (!cr0.eq) goto loc_830F41FC;
	// bl 0x830f1908
	ctx.lr = 0x830F422C;
	sub_830F1908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// ld r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,708
	ctx.r4.s64 = ctx.r31.s64 + 708;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfsx f1,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb298
	ctx.lr = 0x830F424C;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4258
	if (cr6.eq) goto loc_830F4258;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_830F4258:
	// lhz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4270
	if (!cr6.eq) goto loc_830F4270;
	// bl 0x830f1b68
	ctx.lr = 0x830F4268;
	sub_830F1B68(ctx, base);
	// lfs f0,9008(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x830f428c
	goto loc_830F428C;
loc_830F4270:
	// bl 0x830f1b68
	ctx.lr = 0x830F4274;
	sub_830F1B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4288
	if (cr6.eq) goto loc_830F4288;
	// lfs f0,9008(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// b 0x830f428c
	goto loc_830F428C;
loc_830F4288:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_830F428C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// ld r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,14624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14624);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x835d5910
	ctx.lr = 0x830F42A4;
	sub_835D5910(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f42b0
	if (cr6.eq) goto loc_830F42B0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_830F42B0:
	// subfic r11,r26,0
	xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F42C0"))) PPC_WEAK_FUNC(sub_830F42C0);
PPC_FUNC_IMPL(__imp__sub_830F42C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F42C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f42e8
	if (!cr6.eq) goto loc_830F42E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F42E8:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,7424
	ctx.r28.s64 = ctx.r11.s64 + 7424;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,7424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7424);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r11,r10,7184
	ctx.r11.s64 = ctx.r10.s64 + 7184;
	// li r29,24
	ctx.r29.s64 = 24;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// li r26,0
	ctx.r26.s64 = 0;
loc_830F4320:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f436c
	if (cr6.eq) goto loc_830F436C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830F433C;
	sub_82595150(ctx, base);
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f435c
	if (cr6.eq) goto loc_830F435C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F435C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F435C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830F4364;
	sub_82595170(ctx, base);
	// stw r26,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r26.u32);
	// stw r26,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r26.u32);
loc_830F436C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f43b0
	if (cr6.eq) goto loc_830F43B0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595150
	ctx.lr = 0x830F4388;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830f43a4
	if (cr6.eq) goto loc_830F43A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x830F439C;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830F43A4;
	sub_82416268(ctx, base);
loc_830F43A4:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595170
	ctx.lr = 0x830F43AC;
	sub_82595170(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_830F43B0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x830f4320
	if (!cr0.eq) goto loc_830F4320;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F43D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d60f8
	ctx.lr = 0x830F43D8;
	sub_835D60F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F43E4"))) PPC_WEAK_FUNC(sub_830F43E4);
PPC_FUNC_IMPL(__imp__sub_830F43E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F43E8"))) PPC_WEAK_FUNC(sub_830F43E8);
PPC_FUNC_IMPL(__imp__sub_830F43E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830F43F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f44a4
	if (cr6.eq) goto loc_830F44A4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830f44a4
	if (!cr6.lt) goto loc_830F44A4;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// bge cr6,0x830f44a4
	if (!cr6.lt) goto loc_830F44A4;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// bgt cr6,0x830f44a4
	if (cr6.gt) goto loc_830F44A4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x830f4498
	if (cr6.eq) goto loc_830F4498;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7424
	ctx.r4.s64 = ctx.r11.s64 + 7424;
	// bl 0x830eed60
	ctx.lr = 0x830F4458;
	sub_830EED60(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 * 44;
	// addi r8,r10,7184
	ctx.r8.s64 = ctx.r10.s64 + 7184;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x830fc928
	ctx.lr = 0x830F4474;
	sub_830FC928(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4498
	if (cr6.eq) goto loc_830F4498;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F4498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F4498:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830F44A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F44B0"))) PPC_WEAK_FUNC(sub_830F44B0);
PPC_FUNC_IMPL(__imp__sub_830F44B0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f4540
	if (cr6.eq) goto loc_830F4540;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830f4540
	if (!cr6.lt) goto loc_830F4540;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// bge cr6,0x830f4540
	if (!cr6.lt) goto loc_830F4540;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7424
	ctx.r4.s64 = ctx.r11.s64 + 7424;
	// bl 0x830eed60
	ctx.lr = 0x830F44FC;
	sub_830EED60(ctx, base);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r9,r31,44
	ctx.r9.s64 = ctx.r31.s64 * 44;
	// addi r8,r10,7184
	ctx.r8.s64 = ctx.r10.s64 + 7184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x830fc7d8
	ctx.lr = 0x830F4514;
	sub_830FC7D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4538
	if (cr6.eq) goto loc_830F4538;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830F4538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F4538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830f4544
	goto loc_830F4544;
loc_830F4540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F4544:
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

__attribute__((alias("__imp__sub_830F455C"))) PPC_WEAK_FUNC(sub_830F455C);
PPC_FUNC_IMPL(__imp__sub_830F455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4560"))) PPC_WEAK_FUNC(sub_830F4560);
PPC_FUNC_IMPL(__imp__sub_830F4560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830F4568;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f4704
	if (cr6.eq) goto loc_830F4704;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x830f4704
	if (!cr6.lt) goto loc_830F4704;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// bge cr6,0x830f4704
	if (!cr6.lt) goto loc_830F4704;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,7424
	ctx.r4.s64 = ctx.r11.s64 + 7424;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// bl 0x830eed60
	ctx.lr = 0x830F45B4;
	sub_830EED60(ctx, base);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// mulli r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 * 44;
	// addi r11,r9,7184
	ctx.r11.s64 = ctx.r9.s64 + 7184;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x830fc7d8
	ctx.lr = 0x830F45D0;
	sub_830FC7D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r5,r30
	ctx.r28.u64 = ctx.r5.u64 & ctx.r30.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x830f46d8
	if (cr6.eq) goto loc_830F46D8;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x830f4664
	if (cr6.eq) goto loc_830F4664;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4640
	if (cr6.eq) goto loc_830F4640;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830F4618;
	sub_82595150(ctx, base);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830f4634
	if (cr6.eq) goto loc_830F4634;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x830F462C;
	sub_83102DB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830F4634;
	sub_82416268(ctx, base);
loc_830F4634:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830F463C;
	sub_82595170(ctx, base);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
loc_830F4640:
	// li r5,3000
	ctx.r5.s64 = 3000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830fc6c0
	ctx.lr = 0x830F4650;
	sub_830FC6C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f465c
	if (cr6.eq) goto loc_830F465C;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_830F465C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830F4664:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(ctx.r27.s32, 3, xer);
	// beq cr6,0x830f4678
	if (cr6.eq) goto loc_830F4678;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// b 0x830f468c
	goto loc_830F468C;
loc_830F4678:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7076
	ctx.r9.s64 = ctx.r11.s64 + 7076;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_830F468C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830f46ac
	if (cr6.eq) goto loc_830F46AC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x830f46bc
	if (!cr6.eq) goto loc_830F46BC;
	// stb r26,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r26.u8);
	// b 0x830f46c0
	goto loc_830F46C0;
loc_830F46AC:
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// bne cr6,0x830f46bc
	if (!cr6.eq) goto loc_830F46BC;
	// stb r26,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r26.u8);
	// b 0x830f46c0
	goto loc_830F46C0;
loc_830F46BC:
	// stb r24,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r24.u8);
loc_830F46C0:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// beq cr6,0x830f46d0
	if (cr6.eq) goto loc_830F46D0;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bne cr6,0x830f46d4
	if (!cr6.eq) goto loc_830F46D4;
loc_830F46D0:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_830F46D4:
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
loc_830F46D8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f46f4
	if (cr6.eq) goto loc_830F46F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830F46F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830F46F4:
	// subfic r11,r23,0
	xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830F4704:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F4710"))) PPC_WEAK_FUNC(sub_830F4710);
PPC_FUNC_IMPL(__imp__sub_830F4710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830F4718;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f474c
	if (!cr6.eq) goto loc_830F474C;
loc_830F4740:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830F474C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830f4740
	if (!cr6.lt) goto loc_830F4740;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,7424
	ctx.r30.s64 = ctx.r11.s64 + 7424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,7424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7424);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4774;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// addi r10,r10,7184
	ctx.r10.s64 = ctx.r10.s64 + 7184;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,100
	cr6.compare<uint32_t>(ctx.r9.u32, 100, xer);
	// beq cr6,0x830f485c
	if (cr6.eq) goto loc_830F485C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x830f47f8
	if (!cr6.gt) goto loc_830F47F8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f485c
	if (!cr6.eq) goto loc_830F485C;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830F47BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f47d0
	if (cr6.eq) goto loc_830F47D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830fe360
	ctx.lr = 0x830F47CC;
	sub_830FE360(ctx, base);
	// b 0x830f47d4
	goto loc_830F47D4;
loc_830F47D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830F47D4:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// extsw r4,r29
	ctx.r4.s64 = ctx.r29.s32;
	// bl 0x830fe3a8
	ctx.lr = 0x830F47E0;
	sub_830FE3A8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x830fe3b0
	ctx.lr = 0x830F47E8;
	sub_830FE3B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// b 0x830f4858
	goto loc_830F4858;
loc_830F47F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4840
	if (cr6.eq) goto loc_830F4840;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830F4814;
	sub_82595150(ctx, base);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830f4830
	if (cr6.eq) goto loc_830F4830;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83102db0
	ctx.lr = 0x830F4828;
	sub_83102DB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830F4830;
	sub_82416268(ctx, base);
loc_830F4830:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830F4838;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_830F4840:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830fc6c0
	ctx.lr = 0x830F4850;
	sub_830FC6C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_830F4858:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830F485C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4870;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F487C"))) PPC_WEAK_FUNC(sub_830F487C);
PPC_FUNC_IMPL(__imp__sub_830F487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830F4880"))) PPC_WEAK_FUNC(sub_830F4880);
PPC_FUNC_IMPL(__imp__sub_830F4880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830F4888;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31751
	ctx.r28.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,7136(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f48b4
	if (!cr6.eq) goto loc_830F48B4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830F48B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830F48B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f4710
	ctx.lr = 0x830F48CC;
	sub_830F4710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f48d8
	if (cr6.eq) goto loc_830F48D8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_830F48D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830f48b8
	if (cr6.lt) goto loc_830F48B8;
	// lbz r11,7136(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f491c
	if (cr6.eq) goto loc_830F491C;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// ld r3,7144(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7144);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x830f491c
	if (cr6.eq) goto loc_830F491C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830eb168
	ctx.lr = 0x830F490C;
	sub_830EB168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// std r11,7144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7144, ctx.r11.u64);
	// beq cr6,0x830f4920
	if (cr6.eq) goto loc_830F4920;
loc_830F491C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_830F4920:
	// subfic r11,r27,0
	xer.ca = ctx.r27.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r27.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830F4930"))) PPC_WEAK_FUNC(sub_830F4930);
PPC_FUNC_IMPL(__imp__sub_830F4930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x830F4938;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
	// lbz r10,7136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f4968
	if (!cr6.eq) goto loc_830F4968;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_830F4968:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r16,r11,7480
	ctx.r16.s64 = ctx.r11.s64 + 7480;
	// addi r17,r10,7376
	ctx.r17.s64 = ctx.r10.s64 + 7376;
	// addi r29,r16,40
	ctx.r29.s64 = ctx.r16.s64 + 40;
	// addi r30,r17,12
	ctx.r30.s64 = ctx.r17.s64 + 12;
	// li r31,3
	ctx.r31.s64 = 3;
loc_830F4984:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830f4998
	if (cr6.eq) goto loc_830F4998;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830fc2e0
	ctx.lr = 0x830F4998;
	sub_830FC2E0(ctx, base);
loc_830F4998:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bne 0x830f4984
	if (!cr0.eq) goto loc_830F4984;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// addi r14,r11,7068
	ctx.r14.s64 = ctx.r11.s64 + 7068;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_830F49B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830f2dc0
	ctx.lr = 0x830F49C4;
	sub_830F2DC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f49d0
	if (cr6.eq) goto loc_830F49D0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F49D0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x830f49b8
	if (cr6.lt) goto loc_830F49B8;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r11,7424
	ctx.r25.s64 = ctx.r11.s64 + 7424;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,7424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7424);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4A00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r24,r11,7184
	ctx.r24.s64 = ctx.r11.s64 + 7184;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// addi r31,r24,28
	ctx.r31.s64 = ctx.r24.s64 + 28;
	// li r29,100
	ctx.r29.s64 = 100;
	// li r28,5
	ctx.r28.s64 = 5;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r20,24
	ctx.r20.s64 = 24;
	// li r21,4
	ctx.r21.s64 = 4;
	// addi r27,r11,7076
	ctx.r27.s64 = ctx.r11.s64 + 7076;
	// addi r19,r10,7064
	ctx.r19.s64 = ctx.r10.s64 + 7064;
loc_830F4A38:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f4c2c
	if (cr6.eq) goto loc_830F4C2C;
	// bl 0x830fc518
	ctx.lr = 0x830F4A48;
	sub_830FC518(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4a54
	if (cr6.eq) goto loc_830F4A54;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4A54:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x830f4c2c
	if (cr6.gt) goto loc_830F4C2C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830f4abc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F4ABC;
	// bdzf 4*cr6+eq,0x830f4b38
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F4B38;
	// bdzf 4*cr6+eq,0x830f4bdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830F4BDC;
	// bne cr6,0x830f4bf8
	if (!cr6.eq) goto loc_830F4BF8;
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x830fc7b8
	ctx.lr = 0x830F4A84;
	sub_830FC7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4c2c
	if (!cr6.eq) goto loc_830F4C2C;
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r5,-8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x830fc670
	ctx.lr = 0x830F4AA4;
	sub_830FC670(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f4b4c
	if (!cr6.eq) goto loc_830F4B4C;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r26,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r26.u32);
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// b 0x830f4c28
	goto loc_830F4C28;
loc_830F4ABC:
	// lbz r11,2(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4adc
	if (cr6.eq) goto loc_830F4ADC;
	// lbz r11,44(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4adc
	if (!cr6.eq) goto loc_830F4ADC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stb r23,44(r17)
	PPC_STORE_U8(ctx.r17.u32 + 44, ctx.r23.u8);
loc_830F4ADC:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x830fc7b8
	ctx.lr = 0x830F4AE4;
	sub_830FC7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4c2c
	if (!cr6.eq) goto loc_830F4C2C;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4b4c
	if (cr6.eq) goto loc_830F4B4C;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4b1c
	if (!cr6.eq) goto loc_830F4B1C;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x830f4b1c
	if (cr6.eq) goto loc_830F4B1C;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// b 0x830f4b20
	goto loc_830F4B20;
loc_830F4B1C:
	// stw r18,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r18.u32);
loc_830F4B20:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r23,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r23.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// b 0x830f4c2c
	goto loc_830F4C2C;
loc_830F4B38:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x830fc7b8
	ctx.lr = 0x830F4B40;
	sub_830FC7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4b54
	if (!cr6.eq) goto loc_830F4B54;
loc_830F4B4C:
	// stw r28,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r28.u32);
	// b 0x830f4c2c
	goto loc_830F4C2C;
loc_830F4B54:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830f4b70
	if (cr6.eq) goto loc_830F4B70;
	// bl 0x830fe3e0
	ctx.lr = 0x830F4B64;
	sub_830FE3E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4c2c
	if (cr6.eq) goto loc_830F4C2C;
loc_830F4B70:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830fc6c0
	ctx.lr = 0x830F4B80;
	sub_830FC6C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4b8c
	if (cr6.eq) goto loc_830F4B8C;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4B8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4bd0
	if (cr6.eq) goto loc_830F4BD0;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830F4BA8;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830f4bc4
	if (cr6.eq) goto loc_830F4BC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x830F4BBC;
	sub_83102DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830F4BC4;
	sub_82416268(ctx, base);
loc_830F4BC4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830F4BCC;
	sub_82595170(ctx, base);
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
loc_830F4BD0:
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// stw r21,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r21.u32);
	// b 0x830f4c2c
	goto loc_830F4C2C;
loc_830F4BDC:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x830fc7b8
	ctx.lr = 0x830F4BE4;
	sub_830FC7B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830f4c2c
	if (!cr6.eq) goto loc_830F4C2C;
	// stw r28,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r28.u32);
	// b 0x830f4c2c
	goto loc_830F4C2C;
loc_830F4BF8:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4c1c
	if (cr6.eq) goto loc_830F4C1C;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x830fc9e8
	ctx.lr = 0x830F4C10;
	sub_830FC9E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4c1c
	if (cr6.eq) goto loc_830F4C1C;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4C1C:
	// stw r29,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r29.u32);
	// stw r29,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r29.u32);
	// stw r18,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r18.u32);
loc_830F4C28:
	// stw r29,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
loc_830F4C2C:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x830f4a38
	if (!cr0.eq) goto loc_830F4A38;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830F4C4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x830f1ac8
	ctx.lr = 0x830F4C50;
	sub_830F1AC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830f4dd0
	if (!cr6.eq) goto loc_830F4DD0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// addi r23,r11,-31188
	ctx.r23.s64 = ctx.r11.s64 + -31188;
loc_830F4C68:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x830fc748
	ctx.lr = 0x830F4C74;
	sub_830FC748(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x830f4d74
	if (!cr6.eq) goto loc_830F4D74;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x830f4d74
	if (cr6.eq) goto loc_830F4D74;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// addi r28,r17,12
	ctx.r28.s64 = ctx.r17.s64 + 12;
	// addi r31,r16,40
	ctx.r31.s64 = ctx.r16.s64 + 40;
	// li r27,3
	ctx.r27.s64 = 3;
loc_830F4C98:
	// lbzx r11,r30,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830f4d04
	if (cr6.eq) goto loc_830F4D04;
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x830f4cb8
	if (cr6.lt) goto loc_830F4CB8;
	// lwz r29,-40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// b 0x830f4cbc
	goto loc_830F4CBC;
loc_830F4CB8:
	// addi r29,r31,-40
	ctx.r29.s64 = ctx.r31.s64 + -40;
loc_830F4CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fbe50
	ctx.lr = 0x830F4CC4;
	sub_830FBE50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x830eb298
	ctx.lr = 0x830F4CD4;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4ce0
	if (cr6.eq) goto loc_830F4CE0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4CE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fbe58
	ctx.lr = 0x830F4CE8;
	sub_830FBE58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x830fbe50
	ctx.lr = 0x830F4CF4;
	sub_830FBE50(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bne cr6,0x830f4d04
	if (!cr6.eq) goto loc_830F4D04;
	// stb r18,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r18.u8);
	// stbx r18,r30,r19
	PPC_STORE_U8(ctx.r30.u32 + ctx.r19.u32, ctx.r18.u8);
loc_830F4D04:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x830f4c98
	if (!cr0.eq) goto loc_830F4C98;
	// addi r4,r23,-60
	ctx.r4.s64 = ctx.r23.s64 + -60;
	// lfs f1,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x830eb298
	ctx.lr = 0x830F4D2C;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4d38
	if (cr6.eq) goto loc_830F4D38;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4D38:
	// addi r4,r23,-40
	ctx.r4.s64 = ctx.r23.s64 + -40;
	// lfs f1,4(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x830eb298
	ctx.lr = 0x830F4D4C;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4d58
	if (cr6.eq) goto loc_830F4D58;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4D58:
	// addic r11,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subfe r3,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x830f28d8
	ctx.lr = 0x830F4D68;
	sub_830F28D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4d74
	if (cr6.eq) goto loc_830F4D74;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4D74:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 + 44;
	// bne 0x830f4c68
	if (!cr0.eq) goto loc_830F4C68;
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// ld r3,7144(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7144);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x830f4dd0
	if (cr6.eq) goto loc_830F4DD0;
	// addi r4,r23,-20
	ctx.r4.s64 = ctx.r23.s64 + -20;
	// lfs f1,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830eb298
	ctx.lr = 0x830F4DA4;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4db0
	if (cr6.eq) goto loc_830F4DB0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4DB0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// ld r3,7144(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7144);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,4(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x830eb298
	ctx.lr = 0x830F4DC4;
	sub_830EB298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830f4dd0
	if (cr6.eq) goto loc_830F4DD0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_830F4DD0:
	// subfic r11,r15,0
	xer.ca = ctx.r15.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r15.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

