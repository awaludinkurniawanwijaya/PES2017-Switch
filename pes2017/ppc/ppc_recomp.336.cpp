#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83358E84"))) PPC_WEAK_FUNC(sub_83358E84);
PPC_FUNC_IMPL(__imp__sub_83358E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358E88"))) PPC_WEAK_FUNC(sub_83358E88);
PPC_FUNC_IMPL(__imp__sub_83358E88) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,1096
	ctx.r3.s64 = ctx.r3.s64 + 1096;
	// addi r10,r11,9212
	ctx.r10.s64 = ctx.r11.s64 + 9212;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83b3f898
	ctx.lr = 0x83358EB0;
	sub_83B3F898(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r9,1764
	ctx.r8.s64 = ctx.r9.s64 + 1764;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_83358ED0"))) PPC_WEAK_FUNC(sub_83358ED0);
PPC_FUNC_IMPL(__imp__sub_83358ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83358ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// sth r30,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r30.u16);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// bl 0x831cdcf0
	ctx.lr = 0x83358EFC;
	sub_831CDCF0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83358F0C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83358f0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83358F0C;
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// sth r11,1084(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1084, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83358F44"))) PPC_WEAK_FUNC(sub_83358F44);
PPC_FUNC_IMPL(__imp__sub_83358F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358F48"))) PPC_WEAK_FUNC(sub_83358F48);
PPC_FUNC_IMPL(__imp__sub_83358F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r10.u32);
	// sth r9,1084(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1084, ctx.r9.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358F64"))) PPC_WEAK_FUNC(sub_83358F64);
PPC_FUNC_IMPL(__imp__sub_83358F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358F68"))) PPC_WEAK_FUNC(sub_83358F68);
PPC_FUNC_IMPL(__imp__sub_83358F68) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r11.u32);
	// sth r10,1084(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1084, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358F7C"))) PPC_WEAK_FUNC(sub_83358F7C);
PPC_FUNC_IMPL(__imp__sub_83358F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358F80"))) PPC_WEAK_FUNC(sub_83358F80);
PPC_FUNC_IMPL(__imp__sub_83358F80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,1080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1080, ctx.r11.u32);
	// sth r10,1084(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1084, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358F94"))) PPC_WEAK_FUNC(sub_83358F94);
PPC_FUNC_IMPL(__imp__sub_83358F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358F98"))) PPC_WEAK_FUNC(sub_83358F98);
PPC_FUNC_IMPL(__imp__sub_83358F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1023
	cr6.compare<int32_t>(ctx.r10.s32, 1023, xer);
	// ble cr6,0x83358fb0
	if (!cr6.gt) goto loc_83358FB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83358FB0:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, ctx.r4.u8);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83358FCC"))) PPC_WEAK_FUNC(sub_83358FCC);
PPC_FUNC_IMPL(__imp__sub_83358FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83358FD0"))) PPC_WEAK_FUNC(sub_83358FD0);
PPC_FUNC_IMPL(__imp__sub_83358FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1020
	cr6.compare<int32_t>(ctx.r10.s32, 1020, xer);
	// ble cr6,0x83358fe8
	if (!cr6.gt) goto loc_83358FE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83358FE8:
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// srawi r9,r4,24
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 24;
	// srawi r5,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,36(r7)
	PPC_STORE_U8(ctx.r7.u32 + 36, ctx.r9.u8);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r10.u32);
	// stb r5,36(r7)
	PPC_STORE_U8(ctx.r7.u32 + 36, ctx.r5.u8);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r10.u32);
	// stb r8,36(r6)
	PPC_STORE_U8(ctx.r6.u32 + 36, ctx.r8.u8);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r10.u32);
	// stb r4,36(r5)
	PPC_STORE_U8(ctx.r5.u32 + 36, ctx.r4.u8);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359050"))) PPC_WEAK_FUNC(sub_83359050);
PPC_FUNC_IMPL(__imp__sub_83359050) {
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
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// subfic r10,r5,1024
	xer.ca = ctx.r5.u32 <= 1024;
	ctx.r10.s64 = 1024 - ctx.r5.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83359084
	if (!cr6.gt) goto loc_83359084;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x833590a4
	goto loc_833590A4;
loc_83359084:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x831ce980
	ctx.lr = 0x83359094;
	sub_831CE980(ctx, base);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
loc_833590A4:
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

__attribute__((alias("__imp__sub_833590BC"))) PPC_WEAK_FUNC(sub_833590BC);
PPC_FUNC_IMPL(__imp__sub_833590BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833590C0"))) PPC_WEAK_FUNC(sub_833590C0);
PPC_FUNC_IMPL(__imp__sub_833590C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x833590e0
	if (!cr6.gt) goto loc_833590E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_833590E0:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83359100"))) PPC_WEAK_FUNC(sub_83359100);
PPC_FUNC_IMPL(__imp__sub_83359100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,1080(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x83359120
	if (!cr6.gt) goto loc_83359120;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83359120:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// rotlwi r6,r7,24
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 24);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r10.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,36(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 36);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r10.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 36);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,1080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1080, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_833591C0"))) PPC_WEAK_FUNC(sub_833591C0);
PPC_FUNC_IMPL(__imp__sub_833591C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833591C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x833591f8
	if (!cr6.gt) goto loc_833591F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_833591F8:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8335920C;
	sub_831CE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335922C"))) PPC_WEAK_FUNC(sub_8335922C);
PPC_FUNC_IMPL(__imp__sub_8335922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359230"))) PPC_WEAK_FUNC(sub_83359230);
PPC_FUNC_IMPL(__imp__sub_83359230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335924C"))) PPC_WEAK_FUNC(sub_8335924C);
PPC_FUNC_IMPL(__imp__sub_8335924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359250"))) PPC_WEAK_FUNC(sub_83359250);
PPC_FUNC_IMPL(__imp__sub_83359250) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,1096
	ctx.r4.s64 = ctx.r3.s64 + 1096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x8335927C;
	sub_8257FAD0(ctx, base);
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335929c
	if (cr6.eq) goto loc_8335929C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335929C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8335929C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x833592b8
	if (cr6.lt) goto loc_833592B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x833592B8;
	sub_8257FB60(ctx, base);
loc_833592B8:
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

__attribute__((alias("__imp__sub_833592D0"))) PPC_WEAK_FUNC(sub_833592D0);
PPC_FUNC_IMPL(__imp__sub_833592D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x833592D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,1096
	ctx.r4.s64 = ctx.r3.s64 + 1096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257fad0
	ctx.lr = 0x833592F0;
	sub_8257FAD0(ctx, base);
	// lwz r30,1088(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83359320
	if (!cr6.eq) goto loc_83359320;
loc_833592FC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83359314
	if (cr6.lt) goto loc_83359314;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x83359314;
	sub_8257FB60(ctx, base);
loc_83359314:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83359320:
	// lhz r28,6(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83359338;
	sub_831CE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83359364;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x833592fc
	if (cr6.eq) goto loc_833592FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// blt cr6,0x83359390
	if (cr6.lt) goto loc_83359390;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x83359390;
	sub_8257FB60(ctx, base);
loc_83359390:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335939C"))) PPC_WEAK_FUNC(sub_8335939C);
PPC_FUNC_IMPL(__imp__sub_8335939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_833593A0"))) PPC_WEAK_FUNC(sub_833593A0);
PPC_FUNC_IMPL(__imp__sub_833593A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x833593A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,1096
	ctx.r4.s64 = ctx.r3.s64 + 1096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257fad0
	ctx.lr = 0x833593C0;
	sub_8257FAD0(ctx, base);
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x833593f0
	if (!cr6.eq) goto loc_833593F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x833593e4
	if (cr6.lt) goto loc_833593E4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x833593E4;
	sub_8257FB60(ctx, base);
loc_833593E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_833593F0:
	// lhz r29,6(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83359408;
	sub_831CE980(ctx, base);
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83359428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x83359444
	if (cr6.lt) goto loc_83359444;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x83359444;
	sub_8257FB60(ctx, base);
loc_83359444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359450"))) PPC_WEAK_FUNC(sub_83359450);
PPC_FUNC_IMPL(__imp__sub_83359450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83359458;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82586d00
	ctx.lr = 0x83359468;
	sub_82586D00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x83359474;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83572958
	ctx.lr = 0x8335947C;
	sub_83572958(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83572958
	ctx.lr = 0x83359484;
	sub_83572958(ctx, base);
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// bge cr6,0x8335949c
	if (!cr6.lt) goto loc_8335949C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83572958
	ctx.lr = 0x83359494;
	sub_83572958(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x83359498;
	sub_83572958(ctx, base);
	// b 0x833595d4
	goto loc_833595D4;
loc_8335949C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x833594AC;
	sub_831CE980(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r8,7872
	ctx.r8.s64 = ctx.r8.s64 + 7872;
loc_833594D0:
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r9,-2
	ctx.r7.s64 = ctx.r9.s64 + -2;
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r5,r9,30
	ctx.r5.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r3,r4,30
	ctx.r3.u64 = ctx.r4.u32 & 0x3;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// lbz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// xor r4,r27,r6
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r6.u64;
	// lbz r25,1(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// xor r28,r26,r5
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r5.u64;
	// lbz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// xor r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r25.u64;
	// lbz r26,3(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// lbz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// xor r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r27.u64;
	// xor r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r26.u64;
	// stb r4,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// xor r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r24.u64;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// bdnz 0x833594d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_833594D0;
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83572958
	ctx.lr = 0x83359580;
	sub_83572958(ctx, base);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83359594
	if (!cr6.eq) goto loc_83359594;
	// bl 0x83572958
	ctx.lr = 0x8335958C;
	sub_83572958(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x83359590;
	sub_83572958(ctx, base);
	// b 0x833595d4
	goto loc_833595D4;
loc_83359594:
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// ble cr6,0x833595b0
	if (!cr6.gt) goto loc_833595B0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83572958
	ctx.lr = 0x833595A8;
	sub_83572958(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x833595AC;
	sub_83572958(ctx, base);
	// b 0x833595d4
	goto loc_833595D4;
loc_833595B0:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x833595cc
	if (!cr6.lt) goto loc_833595CC;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x833595C4;
	sub_83572958(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x833595C8;
	sub_83572958(ctx, base);
	// b 0x833595d4
	goto loc_833595D4;
loc_833595CC:
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_833595D4:
	// bl 0x83572958
	ctx.lr = 0x833595D8;
	sub_83572958(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83359610
	if (cr6.eq) goto loc_83359610;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586b68
	ctx.lr = 0x833595E8;
	sub_82586B68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586c08
	ctx.lr = 0x833595F8;
	sub_82586C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x83359600;
	sub_83572958(ctx, base);
	// bl 0x83572958
	ctx.lr = 0x83359604;
	sub_83572958(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83359610:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335961C"))) PPC_WEAK_FUNC(sub_8335961C);
PPC_FUNC_IMPL(__imp__sub_8335961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359620"))) PPC_WEAK_FUNC(sub_83359620);
PPC_FUNC_IMPL(__imp__sub_83359620) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,1096
	ctx.r3.s64 = ctx.r3.s64 + 1096;
	// addi r10,r11,9212
	ctx.r10.s64 = ctx.r11.s64 + 9212;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x8335964C;
	sub_8257FA88(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x83359668;
	sub_831CDCF0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83359678:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83359678
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83359678;
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// sth r30,1084(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1084, ctx.r30.u16);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// stw r30,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_833596C0"))) PPC_WEAK_FUNC(sub_833596C0);
PPC_FUNC_IMPL(__imp__sub_833596C0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r3,1096
	ctx.r3.s64 = ctx.r3.s64 + 1096;
	// addi r10,r11,9212
	ctx.r10.s64 = ctx.r11.s64 + 9212;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83b3f898
	ctx.lr = 0x833596F0;
	sub_83B3F898(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,1764
	ctx.r7.s64 = ctx.r9.s64 + 1764;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83359714
	if (cr6.eq) goto loc_83359714;
	// bl 0x82416268
	ctx.lr = 0x83359710;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83359714:
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

__attribute__((alias("__imp__sub_8335972C"))) PPC_WEAK_FUNC(sub_8335972C);
PPC_FUNC_IMPL(__imp__sub_8335972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359730"))) PPC_WEAK_FUNC(sub_83359730);
PPC_FUNC_IMPL(__imp__sub_83359730) {
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
	ctx.lr = 0x83359738;
	__savegprlr_26(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,8
	ctx.r9.s64 = 8;
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r7,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r7.u8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stb r8,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r8.u8);
	// rlwinm r6,r11,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r10,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r10.u8);
	// rlwinm r5,r11,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r6,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r6.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r5,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r5.u8);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r4,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r4.u8);
	// addi r11,r1,111
	ctx.r11.s64 = ctx.r1.s64 + 111;
	// stb r3,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r3.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r9.u8);
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
loc_833597B0:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x833597b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_833597B0;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x831ce980
	ctx.lr = 0x833597D4;
	sub_831CE980(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r10,r11,32128
	ctx.r10.s64 = ctx.r11.s64 + 32128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355940
	ctx.lr = 0x833597F8;
	sub_83355940(ctx, base);
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x831ce980
	ctx.lr = 0x83359808;
	sub_831CE980(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83359818;
	sub_831CE980(ctx, base);
	// lhz r29,6(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x831ce980
	ctx.lr = 0x8335982C;
	sub_831CE980(ctx, base);
	// addic. r5,r29,24
	xer.ca = ctx.r29.u32 > 4294967271;
	ctx.r5.s64 = ctx.r29.s64 + 24;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x83359880
	if (!cr0.gt) goto loc_83359880;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r9,r10,7872
	ctx.r9.s64 = ctx.r10.s64 + 7872;
loc_83359848:
	// srawi r7,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// lbzx r6,r3,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// blt cr6,0x83359848
	if (cr6.lt) goto loc_83359848;
loc_83359880:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82586c08
	ctx.lr = 0x8335988C;
	sub_82586C08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359898"))) PPC_WEAK_FUNC(sub_83359898);
PPC_FUNC_IMPL(__imp__sub_83359898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x833598A0;
	__savegprlr_17(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efb0
	ctx.lr = 0x833598C0;
	sub_8257EFB0(ctx, base);
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8257efb0
	ctx.lr = 0x833598D4;
	sub_8257EFB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586d00
	ctx.lr = 0x833598DC;
	sub_82586D00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x833598E8;
	sub_825832E8(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r25.u32);
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x83359908
	if (!cr6.lt) goto loc_83359908;
loc_833598FC:
	// li r3,-50
	ctx.r3.s64 = -50;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83359908:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83359918;
	sub_831CE980(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r5,-31771
	ctx.r5.s64 = -2082144256;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r27,r29,-24
	ctx.r27.s64 = ctx.r29.s64 + -24;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r10,r31,13
	ctx.r10.s64 = ctx.r31.s64 + 13;
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// addi r8,r31,15
	ctx.r8.s64 = ctx.r31.s64 + 15;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// addi r6,r31,17
	ctx.r6.s64 = ctx.r31.s64 + 17;
	// addi r30,r5,7872
	ctx.r30.s64 = ctx.r5.s64 + 7872;
loc_83359948:
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// lbzx r24,r28,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbzx r23,r10,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r22,r9,r11
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r29,r5,30
	ctx.r29.u64 = ctx.r5.u32 & 0x3;
	// lbzx r21,r8,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lbzx r20,r7,r11
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r19,r3,r30
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// addi r18,r5,-1
	ctx.r18.s64 = ctx.r5.s64 + -1;
	// lbzx r17,r6,r11
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// xor r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 ^ ctx.r24.u64;
	// clrlwi r19,r18,30
	ctx.r19.u64 = ctx.r18.u32 & 0x3;
	// stbx r24,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r24.u8);
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// lbzx r24,r29,r30
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// xor r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r23.u64;
	// stbx r24,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u8);
	// lbzx r24,r19,r30
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r30.u32);
	// xor r24,r24,r22
	ctx.r24.u64 = ctx.r24.u64 ^ ctx.r22.u64;
	// clrlwi r24,r24,24
	ctx.r24.u64 = ctx.r24.u32 & 0xFF;
	// stbx r24,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u8);
	// lbzx r5,r5,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r30.u32);
	// xor r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r21.u64;
	// stbx r5,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r30.u32);
	// xor r5,r3,r20
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r20.u64;
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbzx r5,r29,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// xor r3,r17,r5
	ctx.r3.u64 = ctx.r17.u64 ^ ctx.r5.u64;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// bdnz 0x83359948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83359948;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r29,r31,1060
	ctx.r29.s64 = ctx.r31.s64 + 1060;
	// lbz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r9,18(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// rotlwi r6,r3,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// xor r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r6,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r6.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r8.u32);
	// lhz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83359b64
	if (cr6.eq) goto loc_83359B64;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// ble cr6,0x83359a78
	if (!cr6.gt) goto loc_83359A78;
loc_83359A64:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,-202
	ctx.r3.s64 = -202;
	// sth r11,1084(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1084, ctx.r11.u16);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83359A78:
	// cmplw cr6,r27,r5
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, xer);
	// stw r25,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r25.u32);
	// blt cr6,0x833598fc
	if (cr6.lt) goto loc_833598FC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x83359A8C;
	sub_831CE980(ctx, base);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83359ad4
	if (cr6.eq) goto loc_83359AD4;
loc_83359A9C:
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lbzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lbzx r4,r5,r30
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r30.u32);
	// xor r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stbx r10,r26,r11
	PPC_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83359a9c
	if (cr6.lt) goto loc_83359A9C;
loc_83359AD4:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r10,r1,111
	ctx.r10.s64 = ctx.r1.s64 + 111;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83359AE8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83359ae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83359AE8;
	// lhz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83359B08;
	sub_831CE980(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r10,r11,32128
	ctx.r10.s64 = ctx.r11.s64 + 32128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83355940
	ctx.lr = 0x83359B2C;
	sub_83355940(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
loc_83359B38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83359b58
	if (!cr0.eq) goto loc_83359B58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x83359b38
	if (!cr6.eq) goto loc_83359B38;
loc_83359B58:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83359a64
	if (!cr6.eq) goto loc_83359A64;
	// stw r25,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r25.u32);
loc_83359B64:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,1084(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1084, ctx.r11.u16);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359B78"))) PPC_WEAK_FUNC(sub_83359B78);
PPC_FUNC_IMPL(__imp__sub_83359B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83359B80;
	__savegprlr_23(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x83359620
	ctx.lr = 0x83359BA4;
	sub_83359620(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,24784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24784);
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// lwz r31,256(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// bge cr6,0x83359be0
	if (!cr6.lt) goto loc_83359BE0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82586b68
	ctx.lr = 0x83359BCC;
	sub_82586B68(ctx, base);
loc_83359BCC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_83359BD0:
	// bl 0x83358e88
	ctx.lr = 0x83359BD4;
	sub_83358E88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83359BE0:
	// lwz r3,60(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83359c04
	if (cr6.eq) goto loc_83359C04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83359C00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r30.u32);
loc_83359C04:
	// li r3,4172
	ctx.r3.s64 = 4172;
	// bl 0x82416260
	ctx.lr = 0x83359C0C;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83359c24
	if (cr6.eq) goto loc_83359C24;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83358db8
	ctx.lr = 0x83359C20;
	sub_83358DB8(ctx, base);
	// b 0x83359c28
	goto loc_83359C28;
loc_83359C24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83359C28:
	// stw r3,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x83359bd0
	if (cr6.eq) goto loc_83359BD0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83359898
	ctx.lr = 0x83359C40;
	sub_83359898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x83359bd0
	if (!cr6.eq) goto loc_83359BD0;
	// bl 0x83359230
	ctx.lr = 0x83359C50;
	sub_83359230(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83359bcc
	if (cr6.lt) goto loc_83359BCC;
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(ctx.r11.s32, 96, xer);
	// beq cr6,0x83359c74
	if (cr6.eq) goto loc_83359C74;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(ctx.r11.s32, 111, xer);
	// ble cr6,0x83359c80
	if (!cr6.gt) goto loc_83359C80;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(ctx.r11.s32, 114, xer);
	// bgt cr6,0x83359c80
	if (cr6.gt) goto loc_83359C80;
loc_83359C74:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// bl 0x83359250
	ctx.lr = 0x83359C80;
	sub_83359250(ctx, base);
loc_83359C80:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833593a0
	ctx.lr = 0x83359C88;
	sub_833593A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83358f68
	ctx.lr = 0x83359C90;
	sub_83358F68(ctx, base);
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(ctx.r11.s32, 96, xer);
	// bgt cr6,0x83359ccc
	if (cr6.gt) goto loc_83359CCC;
	// beq cr6,0x83359cfc
	if (cr6.eq) goto loc_83359CFC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x83359cb8
	if (cr6.gt) goto loc_83359CB8;
	// beq cr6,0x83359cf0
	if (cr6.eq) goto loc_83359CF0;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// beq cr6,0x83359cfc
	if (cr6.eq) goto loc_83359CFC;
	// b 0x83359d20
	goto loc_83359D20;
loc_83359CB8:
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// blt cr6,0x83359d20
	if (cr6.lt) goto loc_83359D20;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// ble cr6,0x83359ce0
	if (!cr6.gt) goto loc_83359CE0;
	// b 0x83359d20
	goto loc_83359D20;
loc_83359CCC:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(ctx.r11.s32, 112, xer);
	// beq cr6,0x83359cf0
	if (cr6.eq) goto loc_83359CF0;
	// ble cr6,0x83359d20
	if (!cr6.gt) goto loc_83359D20;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(ctx.r11.s32, 114, xer);
	// bgt cr6,0x83359d20
	if (cr6.gt) goto loc_83359D20;
loc_83359CE0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83359100
	ctx.lr = 0x83359CEC;
	sub_83359100(ctx, base);
	// b 0x83359d20
	goto loc_83359D20;
loc_83359CF0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83359100
	ctx.lr = 0x83359CFC;
	sub_83359100(ctx, base);
loc_83359CFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83359100
	ctx.lr = 0x83359D08;
	sub_83359100(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83359100
	ctx.lr = 0x83359D14;
	sub_83359100(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833590c0
	ctx.lr = 0x83359D20;
	sub_833590C0(ctx, base);
loc_83359D20:
	// lis r30,-31771
	ctx.r30.s64 = -2082144256;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r4,7932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	// bl 0x82573108
	ctx.lr = 0x83359D34;
	sub_82573108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586b80
	ctx.lr = 0x83359D44;
	sub_82586B80(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83359d78
	if (cr6.eq) goto loc_83359D78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833591c0
	ctx.lr = 0x83359D5C;
	sub_833591C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82586c08
	ctx.lr = 0x83359D6C;
	sub_82586C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	// bl 0x82573040
	ctx.lr = 0x83359D78;
	sub_82573040(ctx, base);
loc_83359D78:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83358f80
	ctx.lr = 0x83359D80;
	sub_83358F80(ctx, base);
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(ctx.r11.s32, 112, xer);
	// bgt cr6,0x83359e00
	if (cr6.gt) goto loc_83359E00;
	// beq cr6,0x83359dac
	if (cr6.eq) goto loc_83359DAC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x83359dac
	if (cr6.eq) goto loc_83359DAC;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(ctx.r11.s32, 33, xer);
	// beq cr6,0x83359dc0
	if (cr6.eq) goto loc_83359DC0;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x83359e10
	if (cr6.eq) goto loc_83359E10;
	// b 0x83359e60
	goto loc_83359E60;
loc_83359DAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82586b68
	ctx.lr = 0x83359DB4;
	sub_82586B68(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82586ae8
	ctx.lr = 0x83359DC0;
	sub_82586AE8(ctx, base);
loc_83359DC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832e8
	ctx.lr = 0x83359DC8;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586d00
	ctx.lr = 0x83359DD4;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82586c08
	ctx.lr = 0x83359DE4;
	sub_82586C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586bd8
	ctx.lr = 0x83359DEC;
	sub_82586BD8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83358e88
	ctx.lr = 0x83359DF4;
	sub_83358E88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83359E00:
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(ctx.r11.s32, 113, xer);
	// beq cr6,0x83359dc0
	if (cr6.eq) goto loc_83359DC0;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(ctx.r11.s32, 114, xer);
	// bne cr6,0x83359e60
	if (!cr6.eq) goto loc_83359E60;
loc_83359E10:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832e8
	ctx.lr = 0x83359E18;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586d00
	ctx.lr = 0x83359E24;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82586c08
	ctx.lr = 0x83359E34;
	sub_82586C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586b68
	ctx.lr = 0x83359E3C;
	sub_82586B68(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825832e8
	ctx.lr = 0x83359E44;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82586d00
	ctx.lr = 0x83359E50;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82586c08
	ctx.lr = 0x83359E60;
	sub_82586C08(ctx, base);
loc_83359E60:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83359eec
	if (cr6.eq) goto loc_83359EEC;
	// lwz r4,7932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82573108
	ctx.lr = 0x83359E78;
	sub_82573108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83359eec
	if (cr6.eq) goto loc_83359EEC;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83358c40
	ctx.lr = 0x83359E8C;
	sub_83358C40(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825832e8
	ctx.lr = 0x83359E9C;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586d00
	ctx.lr = 0x83359EA8;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// bl 0x83358ca8
	ctx.lr = 0x83359EC0;
	sub_83358CA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586b68
	ctx.lr = 0x83359EC8;
	sub_82586B68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82586c08
	ctx.lr = 0x83359ED8;
	sub_82586C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	// bl 0x82573040
	ctx.lr = 0x83359EE4;
	sub_82573040(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82594f40
	ctx.lr = 0x83359EEC;
	sub_82594F40(ctx, base);
loc_83359EEC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82586b68
	ctx.lr = 0x83359EF4;
	sub_82586B68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825832e8
	ctx.lr = 0x83359EFC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586d00
	ctx.lr = 0x83359F08;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82586c08
	ctx.lr = 0x83359F18;
	sub_82586C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82586bd8
	ctx.lr = 0x83359F20;
	sub_82586BD8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83358e88
	ctx.lr = 0x83359F28;
	sub_83358E88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83359F34"))) PPC_WEAK_FUNC(sub_83359F34);
PPC_FUNC_IMPL(__imp__sub_83359F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359F38"))) PPC_WEAK_FUNC(sub_83359F38);
PPC_FUNC_IMPL(__imp__sub_83359F38) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,9244
	ctx.r10.s64 = ctx.r11.s64 + 9244;
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// bl 0x82586b80
	ctx.lr = 0x83359F84;
	sub_82586B80(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83359FA4"))) PPC_WEAK_FUNC(sub_83359FA4);
PPC_FUNC_IMPL(__imp__sub_83359FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83359FA8"))) PPC_WEAK_FUNC(sub_83359FA8);
PPC_FUNC_IMPL(__imp__sub_83359FA8) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,9244
	ctx.r10.s64 = ctx.r11.s64 + 9244;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x83359ff4
	if (cr6.eq) goto loc_83359FF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83359FF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_83359FF4:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82586bd8
	ctx.lr = 0x83359FFC;
	sub_82586BD8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335a014
	if (cr6.lt) goto loc_8335A014;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8335A014;
	sub_8386D088(ctx, base);
loc_8335A014:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8335A03C"))) PPC_WEAK_FUNC(sub_8335A03C);
PPC_FUNC_IMPL(__imp__sub_8335A03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A040"))) PPC_WEAK_FUNC(sub_8335A040);
PPC_FUNC_IMPL(__imp__sub_8335A040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335A048;
	__savegprlr_26(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83359620
	ctx.lr = 0x8335A060;
	sub_83359620(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r11,24784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24784);
	// addi r28,r11,200
	ctx.r28.s64 = ctx.r11.s64 + 200;
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bge cr6,0x8335a090
	if (!cr6.lt) goto loc_8335A090;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A080;
	sub_82586B68(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A088;
	sub_83358E88(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8335A090:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a0b8
	if (cr6.eq) goto loc_8335A0B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335A0B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_8335A0B8:
	// li r3,4172
	ctx.r3.s64 = 4172;
	// bl 0x82416260
	ctx.lr = 0x8335A0C0;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a0d8
	if (cr6.eq) goto loc_8335A0D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83358db8
	ctx.lr = 0x8335A0D4;
	sub_83358DB8(ctx, base);
	// b 0x8335a0dc
	goto loc_8335A0DC;
loc_8335A0D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8335A0DC:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a1ec
	if (cr6.eq) goto loc_8335A1EC;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82586b80
	ctx.lr = 0x8335A104;
	sub_82586B80(ctx, base);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8335a128
	if (!cr6.eq) goto loc_8335A128;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83359250
	ctx.lr = 0x8335A11C;
	sub_83359250(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8335a12c
	goto loc_8335A12C;
loc_8335A128:
	// li r4,16
	ctx.r4.s64 = 16;
loc_8335A12C:
	// bl 0x83358ed0
	ctx.lr = 0x8335A130;
	sub_83358ED0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A138;
	sub_825832E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A144;
	sub_83358FD0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A150;
	sub_83358FD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358f98
	ctx.lr = 0x8335A15C;
	sub_83358F98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A164;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586d00
	ctx.lr = 0x8335A170;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83359050
	ctx.lr = 0x8335A180;
	sub_83359050(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358f48
	ctx.lr = 0x8335A188;
	sub_83358F48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x833592d0
	ctx.lr = 0x8335A190;
	sub_833592D0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83359730
	ctx.lr = 0x8335A1B0;
	sub_83359730(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A1B8;
	sub_82586B68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e8
	ctx.lr = 0x8335A1C0;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586d00
	ctx.lr = 0x8335A1CC;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82586c08
	ctx.lr = 0x8335A1DC;
	sub_82586C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fe60
	ctx.lr = 0x8335A1E4;
	sub_8241FE60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x8335A1EC;
	sub_82586BD8(ctx, base);
loc_8335A1EC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A1F4;
	sub_83358E88(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A1FC"))) PPC_WEAK_FUNC(sub_8335A1FC);
PPC_FUNC_IMPL(__imp__sub_8335A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A200"))) PPC_WEAK_FUNC(sub_8335A200);
PPC_FUNC_IMPL(__imp__sub_8335A200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8335A208;
	__savegprlr_25(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x83359620
	ctx.lr = 0x8335A224;
	sub_83359620(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,24784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24784);
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// lwz r28,256(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// beq cr6,0x8335a25c
	if (cr6.eq) goto loc_8335A25C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335A258;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_8335A25C:
	// li r3,4172
	ctx.r3.s64 = 4172;
	// bl 0x82416260
	ctx.lr = 0x8335A264;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a27c
	if (cr6.eq) goto loc_8335A27C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83358db8
	ctx.lr = 0x8335A278;
	sub_83358DB8(ctx, base);
	// b 0x8335a280
	goto loc_8335A280;
loc_8335A27C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8335A280:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a3b4
	if (cr6.eq) goto loc_8335A3B4;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82586b80
	ctx.lr = 0x8335A2A8;
	sub_82586B80(ctx, base);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8335a2cc
	if (!cr6.eq) goto loc_8335A2CC;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83359250
	ctx.lr = 0x8335A2C0;
	sub_83359250(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8335a2d0
	goto loc_8335A2D0;
loc_8335A2CC:
	// li r4,32
	ctx.r4.s64 = 32;
loc_8335A2D0:
	// bl 0x83358ed0
	ctx.lr = 0x8335A2D4;
	sub_83358ED0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A2E0;
	sub_83358FD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A2E8;
	sub_825832E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A2F4;
	sub_83358FD0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A300;
	sub_83358FD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358f98
	ctx.lr = 0x8335A30C;
	sub_83358F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A314;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586d00
	ctx.lr = 0x8335A320;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83359050
	ctx.lr = 0x8335A330;
	sub_83359050(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358f48
	ctx.lr = 0x8335A338;
	sub_83358F48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x833592d0
	ctx.lr = 0x8335A340;
	sub_833592D0(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83359730
	ctx.lr = 0x8335A360;
	sub_83359730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A368;
	sub_82586B68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825832e8
	ctx.lr = 0x8335A370;
	sub_825832E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82586d00
	ctx.lr = 0x8335A37C;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82586c08
	ctx.lr = 0x8335A38C;
	sub_82586C08(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335a3a0
	if (cr6.lt) goto loc_8335A3A0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x8335A3A0;
	sub_8386D088(ctx, base);
loc_8335A3A0:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x82586bd8
	ctx.lr = 0x8335A3B4;
	sub_82586BD8(ctx, base);
loc_8335A3B4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A3BC;
	sub_83358E88(ctx, base);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A3C4"))) PPC_WEAK_FUNC(sub_8335A3C4);
PPC_FUNC_IMPL(__imp__sub_8335A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A3C8"))) PPC_WEAK_FUNC(sub_8335A3C8);
PPC_FUNC_IMPL(__imp__sub_8335A3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335A3D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83359620
	ctx.lr = 0x8335A3E4;
	sub_83359620(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r11,24784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24784);
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bge cr6,0x8335a414
	if (!cr6.lt) goto loc_8335A414;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A404;
	sub_82586B68(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A40C;
	sub_83358E88(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335A414:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a43c
	if (cr6.eq) goto loc_8335A43C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335A438;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_8335A43C:
	// li r3,4172
	ctx.r3.s64 = 4172;
	// bl 0x82416260
	ctx.lr = 0x8335A444;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a45c
	if (cr6.eq) goto loc_8335A45C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83358db8
	ctx.lr = 0x8335A458;
	sub_83358DB8(ctx, base);
	// b 0x8335a460
	goto loc_8335A460;
loc_8335A45C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8335A460:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a548
	if (cr6.eq) goto loc_8335A548;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x8335A478;
	sub_82586B80(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8335a49c
	if (!cr6.eq) goto loc_8335A49C;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83359250
	ctx.lr = 0x8335A490;
	sub_83359250(ctx, base);
	// li r4,113
	ctx.r4.s64 = 113;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8335a4a0
	goto loc_8335A4A0;
loc_8335A49C:
	// li r4,33
	ctx.r4.s64 = 33;
loc_8335A4A0:
	// bl 0x83358ed0
	ctx.lr = 0x8335A4A4;
	sub_83358ED0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A4AC;
	sub_825832E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A4B8;
	sub_83358FD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A4C0;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586d00
	ctx.lr = 0x8335A4CC;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83359050
	ctx.lr = 0x8335A4DC;
	sub_83359050(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358f48
	ctx.lr = 0x8335A4E4;
	sub_83358F48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x833592d0
	ctx.lr = 0x8335A4EC;
	sub_833592D0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83359730
	ctx.lr = 0x8335A50C;
	sub_83359730(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A514;
	sub_82586B68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e8
	ctx.lr = 0x8335A51C;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586d00
	ctx.lr = 0x8335A528;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82586c08
	ctx.lr = 0x8335A538;
	sub_82586C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fe60
	ctx.lr = 0x8335A540;
	sub_8241FE60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x8335A548;
	sub_82586BD8(ctx, base);
loc_8335A548:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A550;
	sub_83358E88(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A558"))) PPC_WEAK_FUNC(sub_8335A558);
PPC_FUNC_IMPL(__imp__sub_8335A558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335A560;
	__savegprlr_27(ctx, base);
	// stwu r1,-1344(r1)
	ea = -1344 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83359620
	ctx.lr = 0x8335A574;
	sub_83359620(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r11,24784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24784);
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
	// lwz r30,256(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bge cr6,0x8335a5a4
	if (!cr6.lt) goto loc_8335A5A4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A594;
	sub_82586B68(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A59C;
	sub_83358E88(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335A5A4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a5cc
	if (cr6.eq) goto loc_8335A5CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335A5C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_8335A5CC:
	// li r3,4172
	ctx.r3.s64 = 4172;
	// bl 0x82416260
	ctx.lr = 0x8335A5D4;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a5ec
	if (cr6.eq) goto loc_8335A5EC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83358db8
	ctx.lr = 0x8335A5E8;
	sub_83358DB8(ctx, base);
	// b 0x8335a5f0
	goto loc_8335A5F0;
loc_8335A5EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8335A5F0:
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335a6d8
	if (cr6.eq) goto loc_8335A6D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x8335A608;
	sub_82586B80(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8335a62c
	if (!cr6.eq) goto loc_8335A62C;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83359250
	ctx.lr = 0x8335A620;
	sub_83359250(ctx, base);
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8335a630
	goto loc_8335A630;
loc_8335A62C:
	// li r4,34
	ctx.r4.s64 = 34;
loc_8335A630:
	// bl 0x83358ed0
	ctx.lr = 0x8335A634;
	sub_83358ED0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A63C;
	sub_825832E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358fd0
	ctx.lr = 0x8335A648;
	sub_83358FD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832e8
	ctx.lr = 0x8335A650;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586d00
	ctx.lr = 0x8335A65C;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83359050
	ctx.lr = 0x8335A66C;
	sub_83359050(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358f48
	ctx.lr = 0x8335A674;
	sub_83358F48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x833592d0
	ctx.lr = 0x8335A67C;
	sub_833592D0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83359730
	ctx.lr = 0x8335A69C;
	sub_83359730(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82586b68
	ctx.lr = 0x8335A6A4;
	sub_82586B68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e8
	ctx.lr = 0x8335A6AC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586d00
	ctx.lr = 0x8335A6B8;
	sub_82586D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82586c08
	ctx.lr = 0x8335A6C8;
	sub_82586C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fe60
	ctx.lr = 0x8335A6D0;
	sub_8241FE60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x8335A6D8;
	sub_82586BD8(ctx, base);
loc_8335A6D8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83358e88
	ctx.lr = 0x8335A6E0;
	sub_83358E88(ctx, base);
	// addi r1,r1,1344
	ctx.r1.s64 = ctx.r1.s64 + 1344;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335A6E8"))) PPC_WEAK_FUNC(sub_8335A6E8);
PPC_FUNC_IMPL(__imp__sub_8335A6E8) {
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
	// bl 0x83359fa8
	ctx.lr = 0x8335A708;
	sub_83359FA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335a720
	if (cr6.eq) goto loc_8335A720;
	// bl 0x82416268
	ctx.lr = 0x8335A71C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335A720:
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

__attribute__((alias("__imp__sub_8335A738"))) PPC_WEAK_FUNC(sub_8335A738);
PPC_FUNC_IMPL(__imp__sub_8335A738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,24860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24860);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335a774
	if (!cr6.eq) goto loc_8335A774;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r11,24860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24860, ctx.r11.u32);
	// addi r3,r8,24856
	ctx.r3.s64 = ctx.r8.s64 + 24856;
	// lwz r11,24836(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24836, ctx.r11.u32);
	// stw r11,24856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24856, ctx.r11.u32);
	// blr 
	return;
loc_8335A774:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A780"))) PPC_WEAK_FUNC(sub_8335A780);
PPC_FUNC_IMPL(__imp__sub_8335A780) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,9268
	ctx.r9.s64 = ctx.r11.s64 + 9268;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8335a7b4
	if (cr6.eq) goto loc_8335A7B4;
	// bl 0x82416268
	ctx.lr = 0x8335A7B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335A7B4:
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

__attribute__((alias("__imp__sub_8335A7C8"))) PPC_WEAK_FUNC(sub_8335A7C8);
PPC_FUNC_IMPL(__imp__sub_8335A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,24868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24868);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335a804
	if (!cr6.eq) goto loc_8335A804;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r11,24868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24868, ctx.r11.u32);
	// addi r3,r8,24864
	ctx.r3.s64 = ctx.r8.s64 + 24864;
	// lwz r11,24836(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24836, ctx.r11.u32);
	// stw r11,24864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24864, ctx.r11.u32);
	// blr 
	return;
loc_8335A804:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A810"))) PPC_WEAK_FUNC(sub_8335A810);
PPC_FUNC_IMPL(__imp__sub_8335A810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lbz r3,24832(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24832);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A81C"))) PPC_WEAK_FUNC(sub_8335A81C);
PPC_FUNC_IMPL(__imp__sub_8335A81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A820"))) PPC_WEAK_FUNC(sub_8335A820);
PPC_FUNC_IMPL(__imp__sub_8335A820) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83360398
	ctx.lr = 0x8335A834;
	sub_83360398(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// addi r3,r10,24848
	ctx.r3.s64 = ctx.r10.s64 + 24848;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8335A848;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8335A854;
	sub_82572FA0(ctx, base);
	// bl 0x8335e630
	ctx.lr = 0x8335A858;
	sub_8335E630(ctx, base);
	// bl 0x8335f518
	ctx.lr = 0x8335A85C;
	sub_8335F518(ctx, base);
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24832(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24832, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A878"))) PPC_WEAK_FUNC(sub_8335A878);
PPC_FUNC_IMPL(__imp__sub_8335A878) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9276
	ctx.r9.s64 = ctx.r11.s64 + 9276;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24848(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24848);
	// bl 0x833600e8
	ctx.lr = 0x8335A8AC;
	sub_833600E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A8BC"))) PPC_WEAK_FUNC(sub_8335A8BC);
PPC_FUNC_IMPL(__imp__sub_8335A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A8C0"))) PPC_WEAK_FUNC(sub_8335A8C0);
PPC_FUNC_IMPL(__imp__sub_8335A8C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8335A8E4;
	sub_82572FA0(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,24840
	ctx.r3.s64 = ctx.r11.s64 + 24840;
	// bl 0x82572fa0
	ctx.lr = 0x8335A8F4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8335A900;
	sub_82572FA0(ctx, base);
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8335A910;
	sub_82572FA0(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r10,24848
	ctx.r3.s64 = ctx.r10.s64 + 24848;
	// bl 0x82572fa0
	ctx.lr = 0x8335A920;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8335A92C;
	sub_82572FA0(ctx, base);
	// bl 0x8335e6e0
	ctx.lr = 0x8335A930;
	sub_8335E6E0(ctx, base);
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

__attribute__((alias("__imp__sub_8335A944"))) PPC_WEAK_FUNC(sub_8335A944);
PPC_FUNC_IMPL(__imp__sub_8335A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335A948"))) PPC_WEAK_FUNC(sub_8335A948);
PPC_FUNC_IMPL(__imp__sub_8335A948) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,9348
	ctx.r31.s64 = ctx.r11.s64 + 9348;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82588a88
	ctx.lr = 0x8335A970;
	sub_82588A88(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r9,r10,9364
	ctx.r9.s64 = ctx.r10.s64 + 9364;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x82588b60
	ctx.lr = 0x8335A988;
	sub_82588B60(ctx, base);
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x83102db0
	ctx.lr = 0x8335A994;
	sub_83102DB0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x83102db0
	ctx.lr = 0x8335A9A4;
	sub_83102DB0(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x83102db0
	ctx.lr = 0x8335A9B4;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_8335A9D0"))) PPC_WEAK_FUNC(sub_8335A9D0);
PPC_FUNC_IMPL(__imp__sub_8335A9D0) {
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
	// bl 0x8335a820
	ctx.lr = 0x8335A9E0;
	sub_8335A820(ctx, base);
	// bl 0x83360750
	ctx.lr = 0x8335A9E4;
	sub_83360750(ctx, base);
	// bl 0x83360478
	ctx.lr = 0x8335A9E8;
	sub_83360478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335A9F8"))) PPC_WEAK_FUNC(sub_8335A9F8);
PPC_FUNC_IMPL(__imp__sub_8335A9F8) {
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
	// bl 0x83360488
	ctx.lr = 0x8335AA08;
	sub_83360488(ctx, base);
	// bl 0x83361148
	ctx.lr = 0x8335AA0C;
	sub_83361148(ctx, base);
	// bl 0x83360760
	ctx.lr = 0x8335AA10;
	sub_83360760(ctx, base);
	// bl 0x8335a8c0
	ctx.lr = 0x8335AA14;
	sub_8335A8C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AA24"))) PPC_WEAK_FUNC(sub_8335AA24);
PPC_FUNC_IMPL(__imp__sub_8335AA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AA28"))) PPC_WEAK_FUNC(sub_8335AA28);
PPC_FUNC_IMPL(__imp__sub_8335AA28) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,24976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24976);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335aa88
	if (!cr6.eq) goto loc_8335AA88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,24976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24976, ctx.r11.u32);
	// addi r31,r9,24872
	ctx.r31.s64 = ctx.r9.s64 + 24872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335a948
	ctx.lr = 0x8335AA64;
	sub_8335A948(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,28768
	ctx.r3.s64 = ctx.r8.s64 + 28768;
	// bl 0x831cdcc8
	ctx.lr = 0x8335AA70;
	sub_831CDCC8(ctx, base);
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
loc_8335AA88:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,24872
	ctx.r3.s64 = ctx.r11.s64 + 24872;
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

__attribute__((alias("__imp__sub_8335AAA4"))) PPC_WEAK_FUNC(sub_8335AAA4);
PPC_FUNC_IMPL(__imp__sub_8335AAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AAA8"))) PPC_WEAK_FUNC(sub_8335AAA8);
PPC_FUNC_IMPL(__imp__sub_8335AAA8) {
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
	// bl 0x8335aa28
	ctx.lr = 0x8335AAB8;
	sub_8335AA28(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x8335AABC;
	sub_83102DB0(ctx, base);
	// bl 0x8335aa28
	ctx.lr = 0x8335AAC0;
	sub_8335AA28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AAD0"))) PPC_WEAK_FUNC(sub_8335AAD0);
PPC_FUNC_IMPL(__imp__sub_8335AAD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,76
	ctx.r9.s64 = 76;
	// divwu r8,r11,r10
	ctx.r8.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r7,r11,r9
	ctx.r7.u32 = PPCDivide(ctx.r11.u32, ctx.r9.u32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335AAF4"))) PPC_WEAK_FUNC(sub_8335AAF4);
PPC_FUNC_IMPL(__imp__sub_8335AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AAF8"))) PPC_WEAK_FUNC(sub_8335AAF8);
PPC_FUNC_IMPL(__imp__sub_8335AAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8335AB00;
	__savegprlr_24(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335ad48
	if (cr6.eq) goto loc_8335AD48;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,27594
	ctx.r10.s64 = 1808400384;
	// li r28,61
	ctx.r28.s64 = 61;
	// ori r26,r10,6899
	ctx.r26.u64 = ctx.r10.u64 | 6899;
	// li r24,13
	ctx.r24.s64 = 13;
	// li r25,10
	ctx.r25.s64 = 10;
	// addi r30,r11,7992
	ctx.r30.s64 = ctx.r11.s64 + 7992;
loc_8335AB30:
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// blt cr6,0x8335ad58
	if (cr6.lt) goto loc_8335AD58;
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8335ac9c
	if (cr6.eq) goto loc_8335AC9C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq cr6,0x8335ac10
	if (cr6.eq) goto loc_8335AC10;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335ab64
	if (!cr6.lt) goto loc_8335AB64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8335ab68
	goto loc_8335AB68;
loc_8335AB64:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8335AB68:
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r10,r11,4,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bge cr6,0x8335ab9c
	if (!cr6.lt) goto loc_8335AB9C;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// b 0x8335aba0
	goto loc_8335ABA0;
loc_8335AB9C:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8335ABA0:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r5,r11,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335abd4
	if (!cr6.lt) goto loc_8335ABD4;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8335abd8
	goto loc_8335ABD8;
loc_8335ABD4:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8335ABD8:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// lbz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335ac00
	if (!cr6.lt) goto loc_8335AC00;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// b 0x8335acec
	goto loc_8335ACEC;
loc_8335AC00:
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// b 0x8335acec
	goto loc_8335ACEC;
loc_8335AC10:
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335ac20
	if (!cr6.lt) goto loc_8335AC20;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8335ac24
	goto loc_8335AC24;
loc_8335AC20:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8335AC24:
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r8,r11,4,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r5,r11,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 | ctx.r5.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335ac58
	if (!cr6.lt) goto loc_8335AC58;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8335ac5c
	goto loc_8335AC5C;
loc_8335AC58:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8335AC5C:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335ac88
	if (!cr6.lt) goto loc_8335AC88;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stbu r28,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r10.u32 = ea;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// b 0x8335acec
	goto loc_8335ACEC;
loc_8335AC88:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stbu r28,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r10.u32 = ea;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// b 0x8335acec
	goto loc_8335ACEC;
loc_8335AC9C:
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// bge cr6,0x8335acb4
	if (!cr6.lt) goto loc_8335ACB4;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// b 0x8335acb8
	goto loc_8335ACB8;
loc_8335ACB4:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8335ACB8:
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lbzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r10,r10,4,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x30;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bge cr6,0x8335acd8
	if (!cr6.lt) goto loc_8335ACD8;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// b 0x8335acdc
	goto loc_8335ACDC;
loc_8335ACD8:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8335ACDC:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stbu r28,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// stbu r28,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_8335ACEC:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335ad38
	if (cr6.eq) goto loc_8335AD38;
	// mulhw r11,r29,r26
	ctx.r11.s64 = (int64_t(ctx.r29.s32) * int64_t(ctx.r26.s32)) >> 32;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 * 76;
	// subf. r8,r9,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8335ad38
	if (!cr0.eq) goto loc_8335AD38;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bge cr6,0x8335ad40
	if (!cr6.lt) goto loc_8335AD40;
	// stb r24,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r24.u8);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// stbu r25,1(r5)
	ea = 1 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r25.u8);
	ctx.r5.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8335AD38:
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// blt cr6,0x8335ab30
	if (cr6.lt) goto loc_8335AB30;
loc_8335AD40:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x8335ad50
	if (cr6.eq) goto loc_8335AD50;
loc_8335AD48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
loc_8335AD50:
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8335AD58:
	// li r11,-1
	ctx.r11.s64 = -1;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335AD64"))) PPC_WEAK_FUNC(sub_8335AD64);
PPC_FUNC_IMPL(__imp__sub_8335AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335AD68"))) PPC_WEAK_FUNC(sub_8335AD68);
PPC_FUNC_IMPL(__imp__sub_8335AD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335AD70;
	__savegprlr_28(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335b040
	if (cr6.eq) goto loc_8335B040;
	// addi r30,r5,-1
	ctx.r30.s64 = ctx.r5.s64 + -1;
loc_8335AD8C:
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// bge cr6,0x8335b040
	if (!cr6.lt) goto loc_8335B040;
	// lbzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x8335b028
	if (cr6.eq) goto loc_8335B028;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8335b028
	if (cr6.eq) goto loc_8335B028;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8335b03c
	if (cr6.eq) goto loc_8335B03C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8335adc8
	if (!cr6.eq) goto loc_8335ADC8;
	// li r31,63
	ctx.r31.s64 = 63;
	// b 0x8335ae30
	goto loc_8335AE30;
loc_8335ADC8:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x8335add8
	if (!cr6.eq) goto loc_8335ADD8;
	// li r31,62
	ctx.r31.s64 = 62;
	// b 0x8335ae30
	goto loc_8335AE30;
loc_8335ADD8:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x8335adf4
	if (cr6.lt) goto loc_8335ADF4;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x8335adf4
	if (cr6.gt) goto loc_8335ADF4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335ae30
	goto loc_8335AE30;
loc_8335ADF4:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x8335ae10
	if (cr6.lt) goto loc_8335AE10;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bgt cr6,0x8335ae10
	if (cr6.gt) goto loc_8335AE10;
	// addi r11,r11,185
	ctx.r11.s64 = ctx.r11.s64 + 185;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335ae30
	goto loc_8335AE30;
loc_8335AE10:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// blt cr6,0x8335ae2c
	if (cr6.lt) goto loc_8335AE2C;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bgt cr6,0x8335ae2c
	if (cr6.gt) goto loc_8335AE2C;
	// addi r11,r11,191
	ctx.r11.s64 = ctx.r11.s64 + 191;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335ae30
	goto loc_8335AE30;
loc_8335AE2C:
	// li r31,255
	ctx.r31.s64 = 255;
loc_8335AE30:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8335ae48
	if (!cr6.eq) goto loc_8335AE48;
	// li r8,63
	ctx.r8.s64 = 63;
	// b 0x8335aeb0
	goto loc_8335AEB0;
loc_8335AE48:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x8335ae58
	if (!cr6.eq) goto loc_8335AE58;
	// li r8,62
	ctx.r8.s64 = 62;
	// b 0x8335aeb0
	goto loc_8335AEB0;
loc_8335AE58:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x8335ae74
	if (cr6.lt) goto loc_8335AE74;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x8335ae74
	if (cr6.gt) goto loc_8335AE74;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335aeb0
	goto loc_8335AEB0;
loc_8335AE74:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x8335ae90
	if (cr6.lt) goto loc_8335AE90;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bgt cr6,0x8335ae90
	if (cr6.gt) goto loc_8335AE90;
	// addi r11,r11,185
	ctx.r11.s64 = ctx.r11.s64 + 185;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335aeb0
	goto loc_8335AEB0;
loc_8335AE90:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// blt cr6,0x8335aeac
	if (cr6.lt) goto loc_8335AEAC;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bgt cr6,0x8335aeac
	if (cr6.gt) goto loc_8335AEAC;
	// addi r11,r11,191
	ctx.r11.s64 = ctx.r11.s64 + 191;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335aeb0
	goto loc_8335AEB0;
loc_8335AEAC:
	// li r8,255
	ctx.r8.s64 = 255;
loc_8335AEB0:
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8335aec8
	if (!cr6.eq) goto loc_8335AEC8;
	// li r9,63
	ctx.r9.s64 = 63;
	// b 0x8335af30
	goto loc_8335AF30;
loc_8335AEC8:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x8335aed8
	if (!cr6.eq) goto loc_8335AED8;
	// li r9,62
	ctx.r9.s64 = 62;
	// b 0x8335af30
	goto loc_8335AF30;
loc_8335AED8:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x8335aef4
	if (cr6.lt) goto loc_8335AEF4;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x8335aef4
	if (cr6.gt) goto loc_8335AEF4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335af30
	goto loc_8335AF30;
loc_8335AEF4:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x8335af10
	if (cr6.lt) goto loc_8335AF10;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bgt cr6,0x8335af10
	if (cr6.gt) goto loc_8335AF10;
	// addi r11,r11,185
	ctx.r11.s64 = ctx.r11.s64 + 185;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335af30
	goto loc_8335AF30;
loc_8335AF10:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// blt cr6,0x8335af2c
	if (cr6.lt) goto loc_8335AF2C;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bgt cr6,0x8335af2c
	if (cr6.gt) goto loc_8335AF2C;
	// addi r11,r11,191
	ctx.r11.s64 = ctx.r11.s64 + 191;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335af30
	goto loc_8335AF30;
loc_8335AF2C:
	// li r9,255
	ctx.r9.s64 = 255;
loc_8335AF30:
	// add r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r11,3(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8335af48
	if (!cr6.eq) goto loc_8335AF48;
	// li r10,63
	ctx.r10.s64 = 63;
	// b 0x8335afb0
	goto loc_8335AFB0;
loc_8335AF48:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x8335af58
	if (!cr6.eq) goto loc_8335AF58;
	// li r10,62
	ctx.r10.s64 = 62;
	// b 0x8335afb0
	goto loc_8335AFB0;
loc_8335AF58:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x8335af74
	if (cr6.lt) goto loc_8335AF74;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bgt cr6,0x8335af74
	if (cr6.gt) goto loc_8335AF74;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335afb0
	goto loc_8335AFB0;
loc_8335AF74:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x8335af90
	if (cr6.lt) goto loc_8335AF90;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bgt cr6,0x8335af90
	if (cr6.gt) goto loc_8335AF90;
	// addi r11,r11,185
	ctx.r11.s64 = ctx.r11.s64 + 185;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335afb0
	goto loc_8335AFB0;
loc_8335AF90:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// blt cr6,0x8335afac
	if (cr6.lt) goto loc_8335AFAC;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bgt cr6,0x8335afac
	if (cr6.gt) goto loc_8335AFAC;
	// addi r11,r11,191
	ctx.r11.s64 = ctx.r11.s64 + 191;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8335afb0
	goto loc_8335AFB0;
loc_8335AFAC:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8335AFB0:
	// rlwinm r11,r8,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x3;
	// rlwinm r31,r31,2,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFC;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r31,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// beq 0x8335b020
	if (cr0.eq) goto loc_8335B020;
	// lbz r8,2(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r8,61
	cr6.compare<uint32_t>(ctx.r8.u32, 61, xer);
	// beq cr6,0x8335affc
	if (cr6.eq) goto loc_8335AFFC;
	// rlwinm r8,r9,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xF;
	// rlwinm r5,r11,4,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// or r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 | ctx.r5.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8335AFFC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8335b020
	if (cr6.eq) goto loc_8335B020;
	// lbz r11,3(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// beq cr6,0x8335b020
	if (cr6.eq) goto loc_8335B020;
	// rlwimi r10,r9,6,18,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3FC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC03F);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stbu r10,1(r30)
	ea = 1 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r30.u32 = ea;
loc_8335B020:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8335b02c
	goto loc_8335B02C;
loc_8335B028:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8335B02C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335ad8c
	if (!cr6.eq) goto loc_8335AD8C;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335B03C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335B040:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B044"))) PPC_WEAK_FUNC(sub_8335B044);
PPC_FUNC_IMPL(__imp__sub_8335B044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B048"))) PPC_WEAK_FUNC(sub_8335B048);
PPC_FUNC_IMPL(__imp__sub_8335B048) {
	PPC_FUNC_PROLOGUE();
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// stb r5,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r5.u8);
	// stb r6,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r6.u8);
	// stb r7,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B05C"))) PPC_WEAK_FUNC(sub_8335B05C);
PPC_FUNC_IMPL(__imp__sub_8335B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B060"))) PPC_WEAK_FUNC(sub_8335B060);
PPC_FUNC_IMPL(__imp__sub_8335B060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B06C"))) PPC_WEAK_FUNC(sub_8335B06C);
PPC_FUNC_IMPL(__imp__sub_8335B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B070"))) PPC_WEAK_FUNC(sub_8335B070);
PPC_FUNC_IMPL(__imp__sub_8335B070) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// lbz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// stb r9,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r9.u8);
	// lbz r8,11(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// stb r8,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B094"))) PPC_WEAK_FUNC(sub_8335B094);
PPC_FUNC_IMPL(__imp__sub_8335B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B098"))) PPC_WEAK_FUNC(sub_8335B098);
PPC_FUNC_IMPL(__imp__sub_8335B098) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r3,11(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r9,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B0BC"))) PPC_WEAK_FUNC(sub_8335B0BC);
PPC_FUNC_IMPL(__imp__sub_8335B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B0C0"))) PPC_WEAK_FUNC(sub_8335B0C0);
PPC_FUNC_IMPL(__imp__sub_8335B0C0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B0C8"))) PPC_WEAK_FUNC(sub_8335B0C8);
PPC_FUNC_IMPL(__imp__sub_8335B0C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B0D0"))) PPC_WEAK_FUNC(sub_8335B0D0);
PPC_FUNC_IMPL(__imp__sub_8335B0D0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-21700
	ctx.r10.s64 = ctx.r11.s64 + -21700;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8257efb0
	ctx.lr = 0x8335B100;
	sub_8257EFB0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8335B128"))) PPC_WEAK_FUNC(sub_8335B128);
PPC_FUNC_IMPL(__imp__sub_8335B128) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B150"))) PPC_WEAK_FUNC(sub_8335B150);
PPC_FUNC_IMPL(__imp__sub_8335B150) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r9,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r9.u8);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335B174"))) PPC_WEAK_FUNC(sub_8335B174);
PPC_FUNC_IMPL(__imp__sub_8335B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B178"))) PPC_WEAK_FUNC(sub_8335B178);
PPC_FUNC_IMPL(__imp__sub_8335B178) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-21864
	ctx.r10.s64 = ctx.r11.s64 + -21864;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8339d970
	ctx.lr = 0x8335B1A4;
	sub_8339D970(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8335b1c4
	if (cr6.eq) goto loc_8335B1C4;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335B1C0;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335B1C4:
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

__attribute__((alias("__imp__sub_8335B1DC"))) PPC_WEAK_FUNC(sub_8335B1DC);
PPC_FUNC_IMPL(__imp__sub_8335B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B1E0"))) PPC_WEAK_FUNC(sub_8335B1E0);
PPC_FUNC_IMPL(__imp__sub_8335B1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8335B1E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335b304
	if (cr6.eq) goto loc_8335B304;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8258be28
	ctx.lr = 0x8335B220;
	sub_8258BE28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r30,136
	ctx.r28.s64 = ctx.r30.s64 + 136;
	// lwz r9,140(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x8335b394
	if (cr6.eq) goto loc_8335B394;
	// lbz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335b264
	if (cr6.eq) goto loc_8335B264;
	// li r3,10035
	ctx.r3.s64 = 10035;
	// bl 0x8335e730
	ctx.lr = 0x8335B250;
	sub_8335E730(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824efbc0
	ctx.lr = 0x8335B258;
	sub_824EFBC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8335B264:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824efbc0
	ctx.lr = 0x8335B26C;
	sub_824EFBC0(ctx, base);
	// addi r27,r30,156
	ctx.r27.s64 = ctx.r30.s64 + 156;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82588f90
	ctx.lr = 0x8335B280;
	sub_82588F90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8335b304
	if (!cr6.eq) goto loc_8335B304;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8335B290:
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335b304
	if (cr6.eq) goto loc_8335B304;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x8335B2AC;
	sub_8258BE28(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// beq cr6,0x8335b318
	if (cr6.eq) goto loc_8335B318;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82589048
	ctx.lr = 0x8335B2D0;
	sub_82589048(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8335b2e8
	if (cr6.lt) goto loc_8335B2E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8258be88
	ctx.lr = 0x8335B2E4;
	sub_8258BE88(ctx, base);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
loc_8335B2E8:
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82588f90
	ctx.lr = 0x8335B2F8;
	sub_82588F90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8335b290
	if (cr6.eq) goto loc_8335B290;
loc_8335B304:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8335e730
	ctx.lr = 0x8335B30C;
	sub_8335E730(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8335B318:
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8335B328;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b354
	if (!cr6.eq) goto loc_8335B354;
	// bl 0x8335e730
	ctx.lr = 0x8335B338;
	sub_8335E730(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82467848
	ctx.lr = 0x8335B340;
	sub_82467848(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824efbc0
	ctx.lr = 0x8335B348;
	sub_824EFBC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8335B354:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82467848
	ctx.lr = 0x8335B380;
	sub_82467848(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824efbc0
	ctx.lr = 0x8335B388;
	sub_824EFBC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8335B394:
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8335B3A4;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b3d0
	if (!cr6.eq) goto loc_8335B3D0;
	// bl 0x8335e730
	ctx.lr = 0x8335B3B4;
	sub_8335E730(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82467848
	ctx.lr = 0x8335B3BC;
	sub_82467848(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824efbc0
	ctx.lr = 0x8335B3C4;
	sub_824EFBC0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8335B3D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B3F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82467848
	ctx.lr = 0x8335B3FC;
	sub_82467848(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824efbc0
	ctx.lr = 0x8335B404;
	sub_824EFBC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B410"))) PPC_WEAK_FUNC(sub_8335B410);
PPC_FUNC_IMPL(__imp__sub_8335B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335B418;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8335B440;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b474
	if (!cr6.eq) goto loc_8335B474;
	// bl 0x8335e730
	ctx.lr = 0x8335B450;
	sub_8335E730(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b468
	if (cr6.lt) goto loc_8335B468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B468;
	sub_8257FB60(ctx, base);
loc_8335B468:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335B474:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8335b4b0
	if (cr6.lt) goto loc_8335B4B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B4B0;
	sub_8257FB60(ctx, base);
loc_8335B4B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B4BC"))) PPC_WEAK_FUNC(sub_8335B4BC);
PPC_FUNC_IMPL(__imp__sub_8335B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B4C0"))) PPC_WEAK_FUNC(sub_8335B4C0);
PPC_FUNC_IMPL(__imp__sub_8335B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335B4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8335B4EC;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b520
	if (!cr6.eq) goto loc_8335B520;
	// bl 0x8335e730
	ctx.lr = 0x8335B4FC;
	sub_8335E730(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b514
	if (cr6.lt) goto loc_8335B514;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B514;
	sub_8257FB60(ctx, base);
loc_8335B514:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335B520:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B53C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8335b558
	if (cr6.lt) goto loc_8335B558;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B558;
	sub_8257FB60(ctx, base);
loc_8335B558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B564"))) PPC_WEAK_FUNC(sub_8335B564);
PPC_FUNC_IMPL(__imp__sub_8335B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B568"))) PPC_WEAK_FUNC(sub_8335B568);
PPC_FUNC_IMPL(__imp__sub_8335B568) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x8335B590;
	sub_8257FAD0(ctx, base);
	// addi r31,r31,216
	ctx.r31.s64 = ctx.r31.s64 + 216;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335b600
	if (cr6.eq) goto loc_8335B600;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B5B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8335B5C8;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x8335B5D4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8335B5E0;
	sub_82572FA0(ctx, base);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8335b5f8
	if (cr6.lt) goto loc_8335B5F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B5F8;
	sub_8257FB60(ctx, base);
loc_8335B5F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8335b61c
	goto loc_8335B61C;
loc_8335B600:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b618
	if (cr6.lt) goto loc_8335B618;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B618;
	sub_8257FB60(ctx, base);
loc_8335B618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335B61C:
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

__attribute__((alias("__imp__sub_8335B634"))) PPC_WEAK_FUNC(sub_8335B634);
PPC_FUNC_IMPL(__imp__sub_8335B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335B638"))) PPC_WEAK_FUNC(sub_8335B638);
PPC_FUNC_IMPL(__imp__sub_8335B638) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x8335B664;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b694
	if (!cr6.eq) goto loc_8335B694;
	// bl 0x8335e730
	ctx.lr = 0x8335B674;
	sub_8335E730(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b68c
	if (cr6.lt) goto loc_8335B68C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B68C;
	sub_8257FB60(ctx, base);
loc_8335B68C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335b6c8
	goto loc_8335B6C8;
loc_8335B694:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B6A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8335b6c4
	if (cr6.lt) goto loc_8335B6C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B6C4;
	sub_8257FB60(ctx, base);
loc_8335B6C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335B6C8:
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

__attribute__((alias("__imp__sub_8335B6E0"))) PPC_WEAK_FUNC(sub_8335B6E0);
PPC_FUNC_IMPL(__imp__sub_8335B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335B6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x8335B704;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b738
	if (!cr6.eq) goto loc_8335B738;
	// bl 0x8335e730
	ctx.lr = 0x8335B714;
	sub_8335E730(ctx, base);
loc_8335B714:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b72c
	if (cr6.lt) goto loc_8335B72C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B72C;
	sub_8257FB60(ctx, base);
loc_8335B72C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8335B738:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335b714
	if (!cr6.eq) goto loc_8335B714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335B758;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8335b774
	if (!cr6.eq) goto loc_8335B774;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r9.u8);
loc_8335B774:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b78c
	if (cr6.lt) goto loc_8335B78C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B78C;
	sub_8257FB60(ctx, base);
loc_8335B78C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B798"))) PPC_WEAK_FUNC(sub_8335B798);
PPC_FUNC_IMPL(__imp__sub_8335B798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335B7A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,9784
	ctx.r9.s64 = ctx.r11.s64 + 9784;
	// addi r8,r10,9776
	ctx.r8.s64 = ctx.r10.s64 + 9776;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x8335b568
	ctx.lr = 0x8335B7C8;
	sub_8335B568(ctx, base);
	// addi r28,r31,168
	ctx.r28.s64 = ctx.r31.s64 + 168;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8335B7DC;
	sub_8257FAD0(ctx, base);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stb r7,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r7.u8);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x8335b804
	if (cr6.lt) goto loc_8335B804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B800;
	sub_8257FB60(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
loc_8335B804:
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8258bdc8
	ctx.lr = 0x8335B814;
	sub_8258BDC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825833a0
	ctx.lr = 0x8335B824;
	sub_825833A0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x83b3f898
	ctx.lr = 0x8335B82C;
	sub_83B3F898(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x82572fa0
	ctx.lr = 0x8335B838;
	sub_82572FA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83b3f898
	ctx.lr = 0x8335B840;
	sub_83B3F898(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82588f78
	ctx.lr = 0x8335B848;
	sub_82588F78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258bf48
	ctx.lr = 0x8335B850;
	sub_8258BF48(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335b860
	if (cr6.eq) goto loc_8335B860;
	// bl 0x8386d088
	ctx.lr = 0x8335B860;
	sub_8386D088(ctx, base);
loc_8335B860:
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// bl 0x82583b60
	ctx.lr = 0x8335B874;
	sub_82583B60(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-21864
	ctx.r10.s64 = ctx.r11.s64 + -21864;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8339d970
	ctx.lr = 0x8335B888;
	sub_8339D970(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B890"))) PPC_WEAK_FUNC(sub_8335B890);
PPC_FUNC_IMPL(__imp__sub_8335B890) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8335ba40
	sub_8335BA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335B898"))) PPC_WEAK_FUNC(sub_8335B898);
PPC_FUNC_IMPL(__imp__sub_8335B898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335B8A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x8335B8BC;
	sub_8258BE28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r28,224
	ctx.r4.s64 = ctx.r28.s64 + 224;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8335B8D8;
	sub_8257FAD0(ctx, base);
	// lwz r3,216(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335b924
	if (!cr6.eq) goto loc_8335B924;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b904
	if (cr6.lt) goto loc_8335B904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B8FC;
	sub_8257FB60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8335B904:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8335b918
	if (cr6.lt) goto loc_8335B918;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x8335B918;
	sub_8258BE88(ctx, base);
loc_8335B918:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335B924:
	// lwz r4,136(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r30,r28,136
	ctx.r30.s64 = ctx.r28.s64 + 136;
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335b978
	if (!cr6.eq) goto loc_8335B978;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335b958
	if (cr6.lt) goto loc_8335B958;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B950;
	sub_8257FB60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8335B958:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8335ba30
	if (cr6.lt) goto loc_8335BA30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x8335B96C;
	sub_8258BE88(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335B978:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8335B994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8335b9b8
	if (cr6.lt) goto loc_8335B9B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335B9B0;
	sub_8257FB60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8335B9B8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x8335b9d4
	if (!cr6.lt) goto loc_8335B9D4;
loc_8335B9C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824efbc0
	ctx.lr = 0x8335B9C8;
	sub_824EFBC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335B9D4:
	// beq cr6,0x8335b9c0
	if (cr6.eq) goto loc_8335B9C0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8335ba28
	if (!cr6.gt) goto loc_8335BA28;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8335ba0c
	if (cr6.eq) goto loc_8335BA0C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r29,r4,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x8335BA04;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8335BA0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8335ba28
	if (!cr6.eq) goto loc_8335BA28;
	// addi r4,r28,156
	ctx.r4.s64 = ctx.r28.s64 + 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82588ff8
	ctx.lr = 0x8335BA28;
	sub_82588FF8(ctx, base);
loc_8335BA28:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824efbc0
	ctx.lr = 0x8335BA30;
	sub_824EFBC0(ctx, base);
loc_8335BA30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BA3C"))) PPC_WEAK_FUNC(sub_8335BA3C);
PPC_FUNC_IMPL(__imp__sub_8335BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BA40"))) PPC_WEAK_FUNC(sub_8335BA40);
PPC_FUNC_IMPL(__imp__sub_8335BA40) {
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
	// bl 0x8335b798
	ctx.lr = 0x8335BA60;
	sub_8335B798(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335ba80
	if (cr6.eq) goto loc_8335BA80;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335BA7C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335BA80:
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

__attribute__((alias("__imp__sub_8335BA98"))) PPC_WEAK_FUNC(sub_8335BA98);
PPC_FUNC_IMPL(__imp__sub_8335BA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335BAA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8335b0d0
	ctx.lr = 0x8335BAB4;
	sub_8335B0D0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x8335BAF0;
	sub_82420558(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bge cr6,0x8335bb08
	if (!cr6.lt) goto loc_8335BB08;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_8335BB08:
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8335BB0C:
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x8335bb1c
	if (!cr6.lt) goto loc_8335BB1C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8335BB1C:
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x8335bb48
	if (cr6.eq) goto loc_8335BB48;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// bne cr6,0x8335bb98
	if (!cr6.eq) goto loc_8335BB98;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// ble cr6,0x8335bbd0
	if (!cr6.gt) goto loc_8335BBD0;
loc_8335BB44:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8335BB48:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335bbd8
	if (cr6.eq) goto loc_8335BBD8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,-21700
	ctx.r8.s64 = ctx.r11.s64 + -21700;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8335BB74:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8335bb74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335BB74;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x8335bc30
	if (cr6.lt) goto loc_8335BC30;
	// bl 0x8386d088
	ctx.lr = 0x8335BB8C;
	sub_8386D088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8335BB98:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x8335bb44
	if (cr6.lt) goto loc_8335BB44;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8335bb44
	if (cr6.gt) goto loc_8335BB44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r10,208
	ctx.r9.s64 = ctx.r10.s64 + 208;
	// stbx r9,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8335BBD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x8335bb0c
	goto loc_8335BB0C;
loc_8335BBD8:
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8335b0c0
	ctx.lr = 0x8335BBE4;
	sub_8335B0C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8335b150
	ctx.lr = 0x8335BBF0;
	sub_8335B150(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,-21700
	ctx.r8.s64 = ctx.r11.s64 + -21700;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8335BC10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8335bc10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335BC10;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335bc30
	if (cr6.lt) goto loc_8335BC30;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8386d088
	ctx.lr = 0x8335BC30;
	sub_8386D088(ctx, base);
loc_8335BC30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BC3C"))) PPC_WEAK_FUNC(sub_8335BC3C);
PPC_FUNC_IMPL(__imp__sub_8335BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BC40"))) PPC_WEAK_FUNC(sub_8335BC40);
PPC_FUNC_IMPL(__imp__sub_8335BC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335BC48;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8335d4b0
	ctx.lr = 0x8335BC58;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,9680
	ctx.r10.s64 = ctx.r11.s64 + 9680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82583938
	ctx.lr = 0x8335BC70;
	sub_82583938(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r7,r9,9784
	ctx.r7.s64 = ctx.r9.s64 + 9784;
	// addi r6,r8,9776
	ctx.r6.s64 = ctx.r8.s64 + 9776;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x8258bee8
	ctx.lr = 0x8335BCA4;
	sub_8258BEE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82588f18
	ctx.lr = 0x8335BCB4;
	sub_82588F18(ctx, base);
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8257fa88
	ctx.lr = 0x8335BCC0;
	sub_8257FA88(ctx, base);
	// std r30,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r30.u64);
	// addi r27,r31,216
	ctx.r27.s64 = ctx.r31.s64 + 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335BCD4;
	sub_82572FA0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8257fa88
	ctx.lr = 0x8335BCDC;
	sub_8257FA88(ctx, base);
	// stb r30,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583340
	ctx.lr = 0x8335BCF0;
	sub_82583340(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8335bd0c
	if (!cr6.eq) goto loc_8335BD0C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824509f0
	ctx.lr = 0x8335BD08;
	sub_824509F0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_8335BD0C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335bd78
	if (cr6.eq) goto loc_8335BD78;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335bd54
	if (!cr6.eq) goto loc_8335BD54;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8335efa0
	ctx.lr = 0x8335BD2C;
	sub_8335EFA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8335BD3C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8335BD48;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8335BD54:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335f058
	ctx.lr = 0x8335BD5C;
	sub_8335F058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x8335BD6C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82572fa0
	ctx.lr = 0x8335BD78;
	sub_82572FA0(ctx, base);
loc_8335BD78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BD84"))) PPC_WEAK_FUNC(sub_8335BD84);
PPC_FUNC_IMPL(__imp__sub_8335BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BD88"))) PPC_WEAK_FUNC(sub_8335BD88);
PPC_FUNC_IMPL(__imp__sub_8335BD88) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,280
	ctx.r3.s64 = 280;
	// bl 0x825730a8
	ctx.lr = 0x8335BDB0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335bdc8
	if (cr6.eq) goto loc_8335BDC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8335bc40
	ctx.lr = 0x8335BDC0;
	sub_8335BC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8335bdcc
	goto loc_8335BDCC;
loc_8335BDC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8335BDCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335BDDC;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335BDF4"))) PPC_WEAK_FUNC(sub_8335BDF4);
PPC_FUNC_IMPL(__imp__sub_8335BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BDF8"))) PPC_WEAK_FUNC(sub_8335BDF8);
PPC_FUNC_IMPL(__imp__sub_8335BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8335BE00;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,152
	ctx.r26.s64 = ctx.r3.s64 + 152;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8335BE2C;
	sub_8257FAD0(ctx, base);
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335bfa4
	if (!cr6.eq) goto loc_8335BFA4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r27,r31,120
	ctx.r27.s64 = ctx.r31.s64 + 120;
	// addi r28,r31,136
	ctx.r28.s64 = ctx.r31.s64 + 136;
	// addi r24,r31,-16
	ctx.r24.s64 = ctx.r31.s64 + -16;
	// ori r23,r11,34464
	ctx.r23.u64 = ctx.r11.u64 | 34464;
loc_8335BE50:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335be6c
	if (cr6.lt) goto loc_8335BE6C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x8335BE68;
	sub_8257FB60(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
loc_8335BE6C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8258be28
	ctx.lr = 0x8335BE78;
	sub_8258BE28(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8335be98
	if (!cr6.eq) goto loc_8335BE98;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8258bd68
	ctx.lr = 0x8335BE98;
	sub_8258BD68(ctx, base);
loc_8335BE98:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8335b898
	ctx.lr = 0x8335BEA0;
	sub_8335B898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335bf74
	if (!cr6.eq) goto loc_8335BF74;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8335bed0
	if (cr6.eq) goto loc_8335BED0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x833f4d38
	ctx.lr = 0x8335BECC;
	sub_833F4D38(ctx, base);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
loc_8335BED0:
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x8335BEE0;
	sub_8257FAD0(ctx, base);
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335bf10
	if (cr6.eq) goto loc_8335BF10;
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82572fa0
	ctx.lr = 0x8335BEF8;
	sub_82572FA0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8247d6b0
	ctx.lr = 0x8335BF04;
	sub_8247D6B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82572fa0
	ctx.lr = 0x8335BF10;
	sub_82572FA0(ctx, base);
loc_8335BF10:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335bf2c
	if (cr6.lt) goto loc_8335BF2C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8257fb60
	ctx.lr = 0x8335BF28;
	sub_8257FB60(ctx, base);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
loc_8335BF2C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335bf48
	if (!cr6.eq) goto loc_8335BF48;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// b 0x8335bf70
	goto loc_8335BF70;
loc_8335BF48:
	// std r23,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r23.u64);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83361d20
	ctx.lr = 0x8335BF60;
	sub_83361D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8335bf74
	if (!cr6.lt) goto loc_8335BF74;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_8335BF70:
	// bl 0x82583480
	ctx.lr = 0x8335BF74;
	sub_82583480(ctx, base);
loc_8335BF74:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x8335bf88
	if (cr6.lt) goto loc_8335BF88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8258be88
	ctx.lr = 0x8335BF88;
	sub_8258BE88(ctx, base);
loc_8335BF88:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8257fad0
	ctx.lr = 0x8335BF98;
	sub_8257FAD0(ctx, base);
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335be50
	if (cr6.eq) goto loc_8335BE50;
loc_8335BFA4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335bfc0
	if (cr6.lt) goto loc_8335BFC0;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x8335BFBC;
	sub_8257FB60(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
loc_8335BFC0:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335bfe4
	if (cr6.eq) goto loc_8335BFE4;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x833f4d38
	ctx.lr = 0x8335BFDC;
	sub_833F4D38(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x8335BFE4;
	sub_8386D088(ctx, base);
loc_8335BFE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335BFEC"))) PPC_WEAK_FUNC(sub_8335BFEC);
PPC_FUNC_IMPL(__imp__sub_8335BFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335BFF0"))) PPC_WEAK_FUNC(sub_8335BFF0);
PPC_FUNC_IMPL(__imp__sub_8335BFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335BFF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335c0e4
	if (cr6.eq) goto loc_8335C0E4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335c0e4
	if (cr6.eq) goto loc_8335C0E4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8335c0e4
	if (cr6.eq) goto loc_8335C0E4;
	// addi r26,r3,152
	ctx.r26.s64 = ctx.r3.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x8258be28
	ctx.lr = 0x8335C038;
	sub_8258BE28(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// lis r29,1
	ctx.r29.s64 = 65536;
	// lwz r10,140(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// addi r30,r28,136
	ctx.r30.s64 = ctx.r28.s64 + 136;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8335c06c
	if (cr6.gt) goto loc_8335C06C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bge cr6,0x8335c098
	if (!cr6.lt) goto loc_8335C098;
loc_8335C06C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335b898
	ctx.lr = 0x8335C074;
	sub_8335B898(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bgt cr6,0x8335c0dc
	if (cr6.gt) goto loc_8335C0DC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// blt cr6,0x8335c0dc
	if (cr6.lt) goto loc_8335C0DC;
loc_8335C098:
	// add r29,r31,r27
	ctx.r29.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x8335c0bc
	if (cr6.eq) goto loc_8335C0BC;
loc_8335C0A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83357fd8
	ctx.lr = 0x8335C0B0;
	sub_83357FD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8335c0a4
	if (!cr6.eq) goto loc_8335C0A4;
loc_8335C0BC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bdc8
	ctx.lr = 0x8335C0C8;
	sub_8258BDC8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824efbc0
	ctx.lr = 0x8335C0D0;
	sub_824EFBC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8335C0DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824efbc0
	ctx.lr = 0x8335C0E4;
	sub_824EFBC0(ctx, base);
loc_8335C0E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C0F0"))) PPC_WEAK_FUNC(sub_8335C0F0);
PPC_FUNC_IMPL(__imp__sub_8335C0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8335C0F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r11,9528
	ctx.r30.s64 = ctx.r11.s64 + 9528;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82e70238
	ctx.lr = 0x8335C124;
	sub_82E70238(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8252abc8
	ctx.lr = 0x8335C138;
	sub_8252ABC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x8252ae98
	ctx.lr = 0x8335C158;
	sub_8252AE98(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335c16c
	if (cr6.lt) goto loc_8335C16C;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x8335C16C;
	sub_8386D088(ctx, base);
loc_8335C16C:
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8335aad0
	ctx.lr = 0x8335C180;
	sub_8335AAD0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x8335c198
	if (!cr6.lt) goto loc_8335C198;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8335C198:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8335aaf8
	ctx.lr = 0x8335C1AC;
	sub_8335AAF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e70238
	ctx.lr = 0x8335C1BC;
	sub_82E70238(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8252abc8
	ctx.lr = 0x8335C1CC;
	sub_8252ABC8(ctx, base);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8252ae98
	ctx.lr = 0x8335C1E4;
	sub_8252AE98(ctx, base);
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82537aa0
	ctx.lr = 0x8335C1F4;
	sub_82537AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// bl 0x82537aa0
	ctx.lr = 0x8335C204;
	sub_82537AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82537aa0
	ctx.lr = 0x8335C214;
	sub_82537AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8252ae98
	ctx.lr = 0x8335C220;
	sub_8252AE98(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335c234
	if (cr6.lt) goto loc_8335C234;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x8335C234;
	sub_8386D088(ctx, base);
loc_8335C234:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8335c254
	if (cr6.lt) goto loc_8335C254;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x8386d088
	ctx.lr = 0x8335C254;
	sub_8386D088(ctx, base);
loc_8335C254:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// blt cr6,0x8335c274
	if (cr6.lt) goto loc_8335C274;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x8335C274;
	sub_8386D088(ctx, base);
loc_8335C274:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x8335c294
	if (cr6.lt) goto loc_8335C294;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x8335C294;
	sub_8386D088(ctx, base);
loc_8335C294:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8335c2b4
	if (cr6.lt) goto loc_8335C2B4;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x8386d088
	ctx.lr = 0x8335C2B4;
	sub_8386D088(ctx, base);
loc_8335C2B4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// bge cr6,0x8335c2d4
	if (!cr6.lt) goto loc_8335C2D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8335C2D4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8335bff0
	ctx.lr = 0x8335C2E0;
	sub_8335BFF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335c2f4
	if (!cr6.eq) goto loc_8335C2F4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8335C2F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335c308
	if (cr6.lt) goto loc_8335C308;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x8335C308;
	sub_8386D088(ctx, base);
loc_8335C308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C314"))) PPC_WEAK_FUNC(sub_8335C314);
PPC_FUNC_IMPL(__imp__sub_8335C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C318"))) PPC_WEAK_FUNC(sub_8335C318);
PPC_FUNC_IMPL(__imp__sub_8335C318) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,9548
	ctx.r31.s64 = ctx.r11.s64 + 9548;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82537b18
	ctx.lr = 0x8335C348;
	sub_82537B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82537aa0
	ctx.lr = 0x8335C358;
	sub_82537AA0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8335c36c
	if (cr6.lt) goto loc_8335C36C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x8335C36C;
	sub_8386D088(ctx, base);
loc_8335C36C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bge cr6,0x8335c394
	if (!cr6.lt) goto loc_8335C394;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8335C394:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8335bff0
	ctx.lr = 0x8335C3A0;
	sub_8335BFF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335c3b4
	if (!cr6.eq) goto loc_8335C3B4;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8335C3B4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335c3c8
	if (cr6.lt) goto loc_8335C3C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x8335C3C8;
	sub_8386D088(ctx, base);
loc_8335C3C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8335C3E4"))) PPC_WEAK_FUNC(sub_8335C3E4);
PPC_FUNC_IMPL(__imp__sub_8335C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C3E8"))) PPC_WEAK_FUNC(sub_8335C3E8);
PPC_FUNC_IMPL(__imp__sub_8335C3E8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,9572
	ctx.r31.s64 = ctx.r11.s64 + 9572;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82537b18
	ctx.lr = 0x8335C418;
	sub_82537B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82537aa0
	ctx.lr = 0x8335C428;
	sub_82537AA0(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8335c43c
	if (cr6.lt) goto loc_8335C43C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x8335C43C;
	sub_8386D088(ctx, base);
loc_8335C43C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bge cr6,0x8335c464
	if (!cr6.lt) goto loc_8335C464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8335C464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8335bff0
	ctx.lr = 0x8335C470;
	sub_8335BFF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335c484
	if (!cr6.eq) goto loc_8335C484;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8335C484:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335c498
	if (cr6.lt) goto loc_8335C498;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x8335C498;
	sub_8386D088(ctx, base);
loc_8335C498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8335C4B4"))) PPC_WEAK_FUNC(sub_8335C4B4);
PPC_FUNC_IMPL(__imp__sub_8335C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C4B8"))) PPC_WEAK_FUNC(sub_8335C4B8);
PPC_FUNC_IMPL(__imp__sub_8335C4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335C4C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,9672
	ctx.r31.s64 = ctx.r11.s64 + 9672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r5,r31,-92
	ctx.r5.s64 = ctx.r31.s64 + -92;
	// bl 0x8257e438
	ctx.lr = 0x8335C4EC;
	sub_8257E438(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82537b18
	ctx.lr = 0x8335C4FC;
	sub_82537B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-80
	ctx.r5.s64 = ctx.r31.s64 + -80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82537aa0
	ctx.lr = 0x8335C50C;
	sub_82537AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// bl 0x82537aa0
	ctx.lr = 0x8335C51C;
	sub_82537AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-88
	ctx.r5.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82537aa0
	ctx.lr = 0x8335C52C;
	sub_82537AA0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8252abc8
	ctx.lr = 0x8335C53C;
	sub_8252ABC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x8252ae98
	ctx.lr = 0x8335C55C;
	sub_8252AE98(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8335c570
	if (cr6.lt) goto loc_8335C570;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x8335C570;
	sub_8386D088(ctx, base);
loc_8335C570:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x8335c590
	if (cr6.lt) goto loc_8335C590;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x8335C590;
	sub_8386D088(ctx, base);
loc_8335C590:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x8335c5b0
	if (cr6.lt) goto loc_8335C5B0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x8335C5B0;
	sub_8386D088(ctx, base);
loc_8335C5B0:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x8335c5d0
	if (cr6.lt) goto loc_8335C5D0;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x8335C5D0;
	sub_8386D088(ctx, base);
loc_8335C5D0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bge cr6,0x8335c5f0
	if (!cr6.lt) goto loc_8335C5F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8335C5F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8335bff0
	ctx.lr = 0x8335C5FC;
	sub_8335BFF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335c610
	if (!cr6.eq) goto loc_8335C610;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8335C610:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8335c624
	if (cr6.lt) goto loc_8335C624;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x8335C624;
	sub_8386D088(ctx, base);
loc_8335C624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C630"))) PPC_WEAK_FUNC(sub_8335C630);
PPC_FUNC_IMPL(__imp__sub_8335C630) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832dec50
	ctx.lr = 0x8335C650;
	sub_832DEC50(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8335c72c
	if (cr6.gt) goto loc_8335C72C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8335c6cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335C6CC;
	// bdzf 4*cr6+eq,0x8335c724
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335C724;
	// bne cr6,0x8335c66c
	if (!cr6.eq) goto loc_8335C66C;
loc_8335C66C:
	// lis r31,-31747
	ctx.r31.s64 = -2080571392;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x8335c684
	if (!cr6.eq) goto loc_8335C684;
	// lwz r11,24984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335c71c
	if (!cr6.eq) goto loc_8335C71C;
loc_8335C684:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832dec40
	ctx.lr = 0x8335C68C;
	sub_832DEC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335c71c
	if (!cr6.eq) goto loc_8335C71C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825891b8
	ctx.lr = 0x8335C69C;
	sub_825891B8(ctx, base);
	// lwz r11,24984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24984);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24984, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// std r10,24992(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24992, ctx.r10.u64);
	// blt cr6,0x8335c72c
	if (cr6.lt) goto loc_8335C72C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,24984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24984, ctx.r11.u32);
	// b 0x8335c730
	goto loc_8335C730;
loc_8335C6CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x8335C6D4;
	sub_825891B8(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r11,24992(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24992);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x82589210
	ctx.lr = 0x8335C6EC;
	sub_82589210(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8335C6F8;
	sub_831CE710(ctx, base);
	// fmul f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 * ctx.f1.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f0,16776(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16776);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,10000
	cr6.compare<uint32_t>(ctx.r7.u32, 10000, xer);
	// ble cr6,0x8335c72c
	if (!cr6.gt) goto loc_8335C72C;
loc_8335C71C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335c730
	goto loc_8335C730;
loc_8335C724:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8335c730
	goto loc_8335C730;
loc_8335C72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335C730:
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

__attribute__((alias("__imp__sub_8335C74C"))) PPC_WEAK_FUNC(sub_8335C74C);
PPC_FUNC_IMPL(__imp__sub_8335C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C750"))) PPC_WEAK_FUNC(sub_8335C750);
PPC_FUNC_IMPL(__imp__sub_8335C750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335C758;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31747
	ctx.r31.s64 = -2080571392;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// stw r11,24984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24984, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,16776(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16776);
loc_8335C780:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832dec50
	ctx.lr = 0x8335C788;
	sub_832DEC50(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8335c84c
	if (cr6.gt) goto loc_8335C84C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8335c808
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335C808;
	// bdzf 4*cr6+eq,0x8335c870
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335C870;
	// bne cr6,0x8335c7a4
	if (!cr6.eq) goto loc_8335C7A4;
loc_8335C7A4:
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x8335c7b8
	if (!cr6.eq) goto loc_8335C7B8;
	// lwz r11,24984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335c85c
	if (!cr6.eq) goto loc_8335C85C;
loc_8335C7B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832dec40
	ctx.lr = 0x8335C7C0;
	sub_832DEC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335c85c
	if (!cr6.eq) goto loc_8335C85C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825891b8
	ctx.lr = 0x8335C7D0;
	sub_825891B8(ctx, base);
	// lwz r11,24984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24984);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24984, ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// std r10,24992(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24992, ctx.r10.u64);
	// blt cr6,0x8335c84c
	if (cr6.lt) goto loc_8335C84C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,24984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24984, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8335C808:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825891b8
	ctx.lr = 0x8335C810;
	sub_825891B8(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r11,24992(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24992);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bl 0x82589210
	ctx.lr = 0x8335C824;
	sub_82589210(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8335C830;
	sub_831CE710(ctx, base);
	// fmul f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64 * ctx.f1.f64;
	// fmul f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r8,10000
	cr6.compare<uint32_t>(ctx.r8.u32, 10000, xer);
	// bgt cr6,0x8335c85c
	if (cr6.gt) goto loc_8335C85C;
loc_8335C84C:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583480
	ctx.lr = 0x8335C858;
	sub_82583480(ctx, base);
	// b 0x8335c780
	goto loc_8335C780;
loc_8335C85C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8335C870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C884"))) PPC_WEAK_FUNC(sub_8335C884);
PPC_FUNC_IMPL(__imp__sub_8335C884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C888"))) PPC_WEAK_FUNC(sub_8335C888);
PPC_FUNC_IMPL(__imp__sub_8335C888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335C898"))) PPC_WEAK_FUNC(sub_8335C898);
PPC_FUNC_IMPL(__imp__sub_8335C898) {
	PPC_FUNC_PROLOGUE();
	// b 0x8335c630
	sub_8335C630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C89C"))) PPC_WEAK_FUNC(sub_8335C89C);
PPC_FUNC_IMPL(__imp__sub_8335C89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C8A0"))) PPC_WEAK_FUNC(sub_8335C8A0);
PPC_FUNC_IMPL(__imp__sub_8335C8A0) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335c8d0
	if (cr6.eq) goto loc_8335C8D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83361e90
	ctx.lr = 0x8335C8C8;
	sub_83361E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8335C8D0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8335c8fc
	if (cr6.eq) goto loc_8335C8FC;
	// bl 0x832dee00
	ctx.lr = 0x8335C8E0;
	sub_832DEE00(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
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
loc_8335C8FC:
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

__attribute__((alias("__imp__sub_8335C914"))) PPC_WEAK_FUNC(sub_8335C914);
PPC_FUNC_IMPL(__imp__sub_8335C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335C918"))) PPC_WEAK_FUNC(sub_8335C918);
PPC_FUNC_IMPL(__imp__sub_8335C918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x832deea8
	sub_832DEEA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335C920"))) PPC_WEAK_FUNC(sub_8335C920);
PPC_FUNC_IMPL(__imp__sub_8335C920) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8335ca8c
	if (cr6.gt) goto loc_8335CA8C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8335c9bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335C9BC;
	// bdzf 4*cr6+eq,0x8335ca0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335CA0C;
	// bdzf 4*cr6+eq,0x8335ca40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335CA40;
	// bdzf 4*cr6+eq,0x8335ca8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335CA8C;
	// bne cr6,0x8335caa8
	if (!cr6.eq) goto loc_8335CAA8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8335c97c
	if (cr6.eq) goto loc_8335C97C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8335c9ac
	if (!cr6.eq) goto loc_8335C9AC;
loc_8335C97C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x832dee10
	ctx.lr = 0x8335C99C;
	sub_832DEE10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8335ca8c
	if (!cr6.eq) goto loc_8335CA8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8335C9AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8335ca90
	goto loc_8335CA90;
loc_8335C9BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8335c9ec
	if (!cr6.eq) goto loc_8335C9EC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335cab8
	if (cr6.eq) goto loc_8335CAB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83361e90
	ctx.lr = 0x8335C9DC;
	sub_83361E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8335ca90
	goto loc_8335CA90;
loc_8335C9EC:
	// bl 0x83361e28
	ctx.lr = 0x8335C9F0;
	sub_83361E28(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83361fc0
	ctx.lr = 0x8335CA04;
	sub_83361FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8335ca90
	goto loc_8335CA90;
loc_8335CA0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x832dee28
	ctx.lr = 0x8335CA38;
	sub_832DEE28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8335ca90
	goto loc_8335CA90;
loc_8335CA40:
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x832dee28
	ctx.lr = 0x8335CA84;
	sub_832DEE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8335cab8
	if (cr6.eq) goto loc_8335CAB8;
loc_8335CA8C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8335CA90:
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
loc_8335CAA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r9.u8);
loc_8335CAB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8335ca90
	goto loc_8335CA90;
}

__attribute__((alias("__imp__sub_8335CAC0"))) PPC_WEAK_FUNC(sub_8335CAC0);
PPC_FUNC_IMPL(__imp__sub_8335CAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335cad0
	if (cr6.eq) goto loc_8335CAD0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8335CAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335CAD8"))) PPC_WEAK_FUNC(sub_8335CAD8);
PPC_FUNC_IMPL(__imp__sub_8335CAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335CAE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335CAFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83360738
	ctx.lr = 0x8335CB0C;
	sub_83360738(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335cb34
	if (cr6.eq) goto loc_8335CB34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8335CB24;
	sub_831CDCF0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833605a0
	ctx.lr = 0x8335CB34;
	sub_833605A0(ctx, base);
loc_8335CB34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335CB48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335CB54"))) PPC_WEAK_FUNC(sub_8335CB54);
PPC_FUNC_IMPL(__imp__sub_8335CB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335CB58"))) PPC_WEAK_FUNC(sub_8335CB58);
PPC_FUNC_IMPL(__imp__sub_8335CB58) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335cbdc
	if (cr6.eq) goto loc_8335CBDC;
	// lis r10,-31756
	ctx.r10.s64 = -2081161216;
	// lis r9,-31756
	ctx.r9.s64 = -2081161216;
	// lwz r11,-27208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27208);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8335cbb0
	if (!cr6.eq) goto loc_8335CBB0;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-27208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27208, ctx.r11.u32);
	// lwz r11,24836(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24836);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r31,24836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24836, ctx.r31.u32);
	// stw r31,-27212(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27212, ctx.r31.u32);
	// b 0x8335cbb4
	goto loc_8335CBB4;
loc_8335CBB0:
	// lwz r31,-27212(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27212);
loc_8335CBB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335CBC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 & ctx.r30.u64;
loc_8335CBDC:
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

__attribute__((alias("__imp__sub_8335CBF4"))) PPC_WEAK_FUNC(sub_8335CBF4);
PPC_FUNC_IMPL(__imp__sub_8335CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335CBF8"))) PPC_WEAK_FUNC(sub_8335CBF8);
PPC_FUNC_IMPL(__imp__sub_8335CBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335CC00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8335cc94
	if (cr6.lt) goto loc_8335CC94;
	// bl 0x833604b0
	ctx.lr = 0x8335CC1C;
	sub_833604B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335cc94
	if (cr6.eq) goto loc_8335CC94;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8335cad8
	ctx.lr = 0x8335CC2C;
	sub_8335CAD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335cc94
	if (cr6.eq) goto loc_8335CC94;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r29,r9,15,16,16
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 15) & 0x8000) | (ctx.r29.u64 & 0xFFFFFFFFFFFF7FFF);
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwinm r8,r8,0,20,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// beq cr6,0x8335cc7c
	if (cr6.eq) goto loc_8335CC7C;
	// addi r4,r3,10
	ctx.r4.s64 = ctx.r3.s64 + 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335b070
	ctx.lr = 0x8335CC68;
	sub_8335B070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335b0c8
	ctx.lr = 0x8335CC70;
	sub_8335B0C8(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335CC7C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,10
	ctx.r3.s64 = ctx.r31.s64 + 10;
	// bl 0x8257efb0
	ctx.lr = 0x8335CC8C;
	sub_8257EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
loc_8335CC94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335CC9C"))) PPC_WEAK_FUNC(sub_8335CC9C);
PPC_FUNC_IMPL(__imp__sub_8335CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335CCA0"))) PPC_WEAK_FUNC(sub_8335CCA0);
PPC_FUNC_IMPL(__imp__sub_8335CCA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10032
	ctx.r10.s64 = ctx.r11.s64 + 10032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8335c8a0
	ctx.lr = 0x8335CCCC;
	sub_8335C8A0(ctx, base);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-21864
	ctx.r8.s64 = ctx.r9.s64 + -21864;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x8339d970
	ctx.lr = 0x8335CCE0;
	sub_8339D970(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8335cd00
	if (cr6.eq) goto loc_8335CD00;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335CCFC;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335CD00:
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

__attribute__((alias("__imp__sub_8335CD18"))) PPC_WEAK_FUNC(sub_8335CD18);
PPC_FUNC_IMPL(__imp__sub_8335CD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335CD20;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335cdc0
	if (cr6.eq) goto loc_8335CDC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x8335CD50;
	sub_825891B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subf r26,r10,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82589210
	ctx.lr = 0x8335CD60;
	sub_82589210(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831ce710
	ctx.lr = 0x8335CD6C;
	sub_831CE710(ctx, base);
	// fmul f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64 * ctx.f1.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfd f0,7416(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 7416);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8335cda0
	if (!cr6.gt) goto loc_8335CDA0;
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825891b8
	ctx.lr = 0x8335CD8C;
	sub_825891B8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r27,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r27.u64);
	// std r27,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r27.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_8335CDA0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r11,8192
	cr6.compare<int32_t>(ctx.r11.s32, 8192, xer);
	// blt cr6,0x8335cdc0
	if (cr6.lt) goto loc_8335CDC0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583480
	ctx.lr = 0x8335CDC0;
	sub_82583480(ctx, base);
loc_8335CDC0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8335ce38
	if (!cr6.eq) goto loc_8335CE38;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832def28
	ctx.lr = 0x8335CDDC;
	sub_832DEF28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8335ce28
	if (cr6.lt) goto loc_8335CE28;
	// bl 0x833604b0
	ctx.lr = 0x8335CDEC;
	sub_833604B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335ce28
	if (cr6.eq) goto loc_8335CE28;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8335cad8
	ctx.lr = 0x8335CDFC;
	sub_8335CAD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335ce28
	if (cr6.eq) goto loc_8335CE28;
	// clrlwi r11,r30,20
	ctx.r11.u64 = ctx.r30.u32 & 0xFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// addi r3,r3,10
	ctx.r3.s64 = ctx.r3.s64 + 10;
	// bl 0x8257efb0
	ctx.lr = 0x8335CE24;
	sub_8257EFB0(ctx, base);
	// sth r27,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r27.u16);
loc_8335CE28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8335CE38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335CE40;
	sub_8335CB58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335ce5c
	if (!cr6.eq) goto loc_8335CE5C;
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
loc_8335CE5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82429688
	ctx.lr = 0x8335CE64;
	sub_82429688(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83767d18
	ctx.lr = 0x8335CE70;
	sub_83767D18(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x832def40
	ctx.lr = 0x8335CE8C;
	sub_832DEF40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335cbf8
	ctx.lr = 0x8335CEA8;
	sub_8335CBF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335CEB8"))) PPC_WEAK_FUNC(sub_8335CEB8);
PPC_FUNC_IMPL(__imp__sub_8335CEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335CEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8335cf30
	if (!cr6.eq) goto loc_8335CF30;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x832def08
	ctx.lr = 0x8335CEF4;
	sub_832DEF08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8335b0d0
	ctx.lr = 0x8335CF00;
	sub_8335B0D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8335b128
	ctx.lr = 0x8335CF0C;
	sub_8335B128(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335cbf8
	ctx.lr = 0x8335CF24;
	sub_8335CBF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335CF30:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335CF38;
	sub_8335CB58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335cf50
	if (!cr6.eq) goto loc_8335CF50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335CF50:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832def08
	ctx.lr = 0x8335CF74;
	sub_832DEF08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335b128
	ctx.lr = 0x8335CF84;
	sub_8335B128(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335cbf8
	ctx.lr = 0x8335CF9C;
	sub_8335CBF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335CFA8"))) PPC_WEAK_FUNC(sub_8335CFA8);
PPC_FUNC_IMPL(__imp__sub_8335CFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335CFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335CFC0;
	sub_8335CB58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335cfd8
	if (!cr6.eq) goto loc_8335CFD8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8335CFD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82429688
	ctx.lr = 0x8335CFE0;
	sub_82429688(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x8335CFEC;
	sub_83767D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832dee90
	ctx.lr = 0x8335CFFC;
	sub_832DEE90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8335d01c
	if (cr6.eq) goto loc_8335D01C;
	// bl 0x832def80
	ctx.lr = 0x8335D00C;
	sub_832DEF80(ctx, base);
	// addi r11,r3,-10056
	ctx.r11.s64 = ctx.r3.s64 + -10056;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_8335D01C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335D028"))) PPC_WEAK_FUNC(sub_8335D028);
PPC_FUNC_IMPL(__imp__sub_8335D028) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335D048;
	sub_8335CB58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335d05c
	if (!cr6.eq) goto loc_8335D05C;
loc_8335D054:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335d08c
	goto loc_8335D08C;
loc_8335D05C:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832dee60
	ctx.lr = 0x8335D074;
	sub_832DEE60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8335d054
	if (cr6.lt) goto loc_8335D054;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b128
	ctx.lr = 0x8335D088;
	sub_8335B128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335D08C:
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

__attribute__((alias("__imp__sub_8335D0A4"))) PPC_WEAK_FUNC(sub_8335D0A4);
PPC_FUNC_IMPL(__imp__sub_8335D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D0A8"))) PPC_WEAK_FUNC(sub_8335D0A8);
PPC_FUNC_IMPL(__imp__sub_8335D0A8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335D0C8;
	sub_8335CB58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335d0dc
	if (!cr6.eq) goto loc_8335D0DC;
loc_8335D0D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335d10c
	goto loc_8335D10C;
loc_8335D0DC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832dee48
	ctx.lr = 0x8335D0F4;
	sub_832DEE48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8335d0d4
	if (cr6.lt) goto loc_8335D0D4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b128
	ctx.lr = 0x8335D108;
	sub_8335B128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8335D10C:
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

__attribute__((alias("__imp__sub_8335D124"))) PPC_WEAK_FUNC(sub_8335D124);
PPC_FUNC_IMPL(__imp__sub_8335D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D128"))) PPC_WEAK_FUNC(sub_8335D128);
PPC_FUNC_IMPL(__imp__sub_8335D128) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335D148;
	sub_8335CB58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335d15c
	if (!cr6.eq) goto loc_8335D15C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335d19c
	goto loc_8335D19C;
loc_8335D15C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8335b0d0
	ctx.lr = 0x8335D164;
	sub_8335B0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b0c8
	ctx.lr = 0x8335D16C;
	sub_8335B0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8335b0c0
	ctx.lr = 0x8335D178;
	sub_8335B0C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82429688
	ctx.lr = 0x8335D180;
	sub_82429688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83767d18
	ctx.lr = 0x8335D18C;
	sub_83767D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832dee78
	ctx.lr = 0x8335D19C;
	sub_832DEE78(ctx, base);
loc_8335D19C:
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

__attribute__((alias("__imp__sub_8335D1B4"))) PPC_WEAK_FUNC(sub_8335D1B4);
PPC_FUNC_IMPL(__imp__sub_8335D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D1B8"))) PPC_WEAK_FUNC(sub_8335D1B8);
PPC_FUNC_IMPL(__imp__sub_8335D1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335D1C0;
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
	// bl 0x8335d4b0
	ctx.lr = 0x8335D1D4;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,10032
	ctx.r9.s64 = ctx.r11.s64 + 10032;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// bl 0x825891b8
	ctx.lr = 0x8335D208;
	sub_825891B8(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// bne cr6,0x8335d24c
	if (!cr6.eq) goto loc_8335D24C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832dede8
	ctx.lr = 0x8335D23C;
	sub_832DEDE8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335D24C:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335D25C"))) PPC_WEAK_FUNC(sub_8335D25C);
PPC_FUNC_IMPL(__imp__sub_8335D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D260"))) PPC_WEAK_FUNC(sub_8335D260);
PPC_FUNC_IMPL(__imp__sub_8335D260) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832deeb8
	ctx.lr = 0x8335D288;
	sub_832DEEB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8335d29c
	if (!cr6.eq) goto loc_8335D29C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8335d2d0
	goto loc_8335D2D0;
loc_8335D29C:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x825730a8
	ctx.lr = 0x8335D2B0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335d2cc
	if (cr6.eq) goto loc_8335D2CC;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8335d1b8
	ctx.lr = 0x8335D2C4;
	sub_8335D1B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8335d2d0
	goto loc_8335D2D0;
loc_8335D2CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8335D2D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335D2E0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335D2FC"))) PPC_WEAK_FUNC(sub_8335D2FC);
PPC_FUNC_IMPL(__imp__sub_8335D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D300"))) PPC_WEAK_FUNC(sub_8335D300);
PPC_FUNC_IMPL(__imp__sub_8335D300) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335D31C;
	sub_8335CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335d33c
	if (!cr6.eq) goto loc_8335D33C;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8335D33C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8335b070
	ctx.lr = 0x8335D344;
	sub_8335B070(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// stb r10,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
	// stb r9,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r9.u8);
	// stb r8,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r8.u8);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8335c750
	ctx.lr = 0x8335D36C;
	sub_8335C750(ctx, base);
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

__attribute__((alias("__imp__sub_8335D380"))) PPC_WEAK_FUNC(sub_8335D380);
PPC_FUNC_IMPL(__imp__sub_8335D380) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335D3AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8335d3bc
	if (!cr6.eq) goto loc_8335D3BC;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8335d3c8
	goto loc_8335D3C8;
loc_8335D3BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335cfa8
	ctx.lr = 0x8335D3C8;
	sub_8335CFA8(ctx, base);
loc_8335D3C8:
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

__attribute__((alias("__imp__sub_8335D3E0"))) PPC_WEAK_FUNC(sub_8335D3E0);
PPC_FUNC_IMPL(__imp__sub_8335D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335D3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x825730a8
	ctx.lr = 0x8335D404;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335d490
	if (cr6.eq) goto loc_8335D490;
	// bl 0x8335d4b0
	ctx.lr = 0x8335D414;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,10032
	ctx.r9.s64 = ctx.r11.s64 + 10032;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// bl 0x825891b8
	ctx.lr = 0x8335D448;
	sub_825891B8(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// li r5,254
	ctx.r5.s64 = 254;
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// bl 0x832dede8
	ctx.lr = 0x8335D474;
	sub_832DEDE8(ctx, base);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r7,10112
	ctx.r6.s64 = ctx.r7.s64 + 10112;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// b 0x8335d498
	goto loc_8335D498;
loc_8335D490:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8335D498:
	// std r30,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335D4A4;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335D4B0"))) PPC_WEAK_FUNC(sub_8335D4B0);
PPC_FUNC_IMPL(__imp__sub_8335D4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r9,r10,-32552
	ctx.r9.s64 = ctx.r10.s64 + -32552;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r10,25000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,25000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25000, ctx.r10.u32);
	// bne 0x8335d4e0
	if (!cr0.eq) goto loc_8335D4E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,25000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25000, ctx.r10.u32);
loc_8335D4E0:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335D4E8"))) PPC_WEAK_FUNC(sub_8335D4E8);
PPC_FUNC_IMPL(__imp__sub_8335D4E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8335d548
	if (!cr6.eq) goto loc_8335D548;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8335d548
	if (!cr6.gt) goto loc_8335D548;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,24
	ctx.r5.u64 = ctx.r5.u64 | 24;
	// bl 0x825730a8
	ctx.lr = 0x8335D53C;
	sub_825730A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8335D548:
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

__attribute__((alias("__imp__sub_8335D560"))) PPC_WEAK_FUNC(sub_8335D560);
PPC_FUNC_IMPL(__imp__sub_8335D560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// b 0x82573040
	sub_82573040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335D578"))) PPC_WEAK_FUNC(sub_8335D578);
PPC_FUNC_IMPL(__imp__sub_8335D578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335D57C"))) PPC_WEAK_FUNC(sub_8335D57C);
PPC_FUNC_IMPL(__imp__sub_8335D57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D580"))) PPC_WEAK_FUNC(sub_8335D580);
PPC_FUNC_IMPL(__imp__sub_8335D580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335D588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335d5b8
	if (!cr6.eq) goto loc_8335D5B8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335D5B8:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// beq cr6,0x8335d698
	if (cr6.eq) goto loc_8335D698;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8335d640
	if (!cr6.gt) goto loc_8335D640;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// rlwinm r29,r11,0,0,22
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335d61c
	if (!cr6.eq) goto loc_8335D61C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r5,r5,24
	ctx.r5.u64 = ctx.r5.u64 | 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825730a8
	ctx.lr = 0x8335D600;
	sub_825730A8(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8335d634
	if (!cr6.gt) goto loc_8335D634;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x8335D618;
	sub_831CE980(ctx, base);
	// b 0x8335d634
	goto loc_8335D634;
loc_8335D61C:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r6,r6,24
	ctx.r6.u64 = ctx.r6.u64 | 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825730c0
	ctx.lr = 0x8335D630;
	sub_825730C0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8335D634:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8335D640:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335d684
	if (cr6.eq) goto loc_8335D684;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x8335d70c
	if (!cr6.gt) goto loc_8335D70C;
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8335D670:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8335d670
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335D670;
	// b 0x8335d70c
	goto loc_8335D70C;
loc_8335D684:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8335d704
	goto loc_8335D704;
loc_8335D698:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// ble cr6,0x8335d6bc
	if (!cr6.gt) goto loc_8335D6BC;
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335D6BC:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x8335d6fc
	if (cr6.eq) goto loc_8335D6FC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x8335d70c
	if (!cr6.gt) goto loc_8335D70C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8335D6EC:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8335d6ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335D6EC;
	// b 0x8335d70c
	goto loc_8335D70C;
loc_8335D6FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8335D704:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8335D70C;
	sub_831CE980(ctx, base);
loc_8335D70C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8335d738
	if (cr6.eq) goto loc_8335D738;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8335d738
	if (!cr6.gt) goto loc_8335D738;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8335D738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335D744"))) PPC_WEAK_FUNC(sub_8335D744);
PPC_FUNC_IMPL(__imp__sub_8335D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D748"))) PPC_WEAK_FUNC(sub_8335D748);
PPC_FUNC_IMPL(__imp__sub_8335D748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8335d768
	if (cr6.lt) goto loc_8335D768;
	// bne cr6,0x8335d76c
	if (!cr6.eq) goto loc_8335D76C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8335d76c
	goto loc_8335D76C;
loc_8335D768:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_8335D76C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blt 0x8335d788
	if (cr0.lt) goto loc_8335D788;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8335d78c
	if (!cr6.gt) goto loc_8335D78C;
loc_8335D788:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_8335D78C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335D7A4"))) PPC_WEAK_FUNC(sub_8335D7A4);
PPC_FUNC_IMPL(__imp__sub_8335D7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D7A8"))) PPC_WEAK_FUNC(sub_8335D7A8);
PPC_FUNC_IMPL(__imp__sub_8335D7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// bne cr6,0x8335d7c8
	if (!cr6.eq) goto loc_8335D7C8;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
loc_8335D7C8:
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335D7D0"))) PPC_WEAK_FUNC(sub_8335D7D0);
PPC_FUNC_IMPL(__imp__sub_8335D7D0) {
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
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832def60
	ctx.lr = 0x8335D7F4;
	sub_832DEF60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335d804
	if (cr6.eq) goto loc_8335D804;
	// bl 0x832def98
	ctx.lr = 0x8335D804;
	sub_832DEF98(ctx, base);
loc_8335D804:
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

__attribute__((alias("__imp__sub_8335D81C"))) PPC_WEAK_FUNC(sub_8335D81C);
PPC_FUNC_IMPL(__imp__sub_8335D81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335D820"))) PPC_WEAK_FUNC(sub_8335D820);
PPC_FUNC_IMPL(__imp__sub_8335D820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335D828;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8335D848;
	sub_8257FAD0(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r30,r29,80
	ctx.r30.s64 = ctx.r29.s64 + 80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8335d980
	if (cr6.eq) goto loc_8335D980;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x8335d86c
	if (!cr6.lt) goto loc_8335D86C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x8335d874
	goto loc_8335D874;
loc_8335D86C:
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divw r6,r31,r9
	ctx.r6.s32 = PPCDivide(ctx.r31.s32, ctx.r9.s32);
loc_8335D874:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r3,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832defa8
	ctx.lr = 0x8335D88C;
	sub_832DEFA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,192
	cr6.compare<uint32_t>(ctx.r3.u32, 192, xer);
	// beq cr6,0x8335d980
	if (cr6.eq) goto loc_8335D980;
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// beq cr6,0x8335d980
	if (cr6.eq) goto loc_8335D980;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8335d980
	if (cr6.eq) goto loc_8335D980;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bge cr6,0x8335d958
	if (!cr6.lt) goto loc_8335D958;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bge cr6,0x8335d958
	if (!cr6.lt) goto loc_8335D958;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x832defa0
	ctx.lr = 0x8335D8EC;
	sub_832DEFA0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8335d934
	if (!cr6.eq) goto loc_8335D934;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335D920;
	sub_82572FA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x8335D928;
	sub_82467848(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335D934:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335D944;
	sub_82572FA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x8335D94C;
	sub_82467848(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335D958:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335D96C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x8335D974;
	sub_82467848(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335D980:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335D994;
	sub_82572FA0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8335d9ac
	if (cr6.lt) goto loc_8335D9AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335D9AC;
	sub_8257FB60(ctx, base);
loc_8335D9AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335D9B8"))) PPC_WEAK_FUNC(sub_8335D9B8);
PPC_FUNC_IMPL(__imp__sub_8335D9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335D9C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8335D9E0;
	sub_8257FAD0(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8335da48
	if (cr6.eq) goto loc_8335DA48;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8335D9F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8335da38
	if (cr6.eq) goto loc_8335DA38;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832def60
	ctx.lr = 0x8335DA18;
	sub_832DEF60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8335da34
	if (cr6.eq) goto loc_8335DA34;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832def60
	ctx.lr = 0x8335DA30;
	sub_832DEF60(ctx, base);
	// b 0x8335da38
	goto loc_8335DA38;
loc_8335DA34:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_8335DA38:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335d9f8
	if (!cr6.eq) goto loc_8335D9F8;
loc_8335DA48:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335d820
	ctx.lr = 0x8335DA58;
	sub_8335D820(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335da70
	if (cr6.lt) goto loc_8335DA70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335DA70;
	sub_8257FB60(ctx, base);
loc_8335DA70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DA7C"))) PPC_WEAK_FUNC(sub_8335DA7C);
PPC_FUNC_IMPL(__imp__sub_8335DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DA80"))) PPC_WEAK_FUNC(sub_8335DA80);
PPC_FUNC_IMPL(__imp__sub_8335DA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335DA88;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8257fad0
	ctx.lr = 0x8335DAA8;
	sub_8257FAD0(ctx, base);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8335db10
	if (cr6.eq) goto loc_8335DB10;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8335DAC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8335db00
	if (cr6.eq) goto loc_8335DB00;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// li r5,33
	ctx.r5.s64 = 33;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832def60
	ctx.lr = 0x8335DAE0;
	sub_832DEF60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8335dafc
	if (cr6.eq) goto loc_8335DAFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832def60
	ctx.lr = 0x8335DAF8;
	sub_832DEF60(ctx, base);
	// b 0x8335db00
	goto loc_8335DB00;
loc_8335DAFC:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_8335DB00:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335dac0
	if (!cr6.eq) goto loc_8335DAC0;
loc_8335DB10:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335d820
	ctx.lr = 0x8335DB20;
	sub_8335D820(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335db38
	if (cr6.lt) goto loc_8335DB38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335DB38;
	sub_8257FB60(ctx, base);
loc_8335DB38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DB44"))) PPC_WEAK_FUNC(sub_8335DB44);
PPC_FUNC_IMPL(__imp__sub_8335DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DB48"))) PPC_WEAK_FUNC(sub_8335DB48);
PPC_FUNC_IMPL(__imp__sub_8335DB48) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335db98
	if (cr6.eq) goto loc_8335DB98;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335DB80;
	sub_82572FA0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
loc_8335DB98:
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

__attribute__((alias("__imp__sub_8335DBB0"))) PPC_WEAK_FUNC(sub_8335DBB0);
PPC_FUNC_IMPL(__imp__sub_8335DBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335DBB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8335dc08
	if (cr6.eq) goto loc_8335DC08;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
loc_8335DBD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x82572fa0
	ctx.lr = 0x8335DBDC;
	sub_82572FA0(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r8,r31,-12
	ctx.r8.s64 = ctx.r31.s64 + -12;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bne cr6,0x8335dbd0
	if (!cr6.eq) goto loc_8335DBD0;
loc_8335DC08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DC14"))) PPC_WEAK_FUNC(sub_8335DC14);
PPC_FUNC_IMPL(__imp__sub_8335DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DC18"))) PPC_WEAK_FUNC(sub_8335DC18);
PPC_FUNC_IMPL(__imp__sub_8335DC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335DC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8335dc80
	if (cr6.eq) goto loc_8335DC80;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8335DC3C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8335dc6c
	if (cr6.eq) goto loc_8335DC6C;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335DC54;
	sub_82572FA0(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_8335DC6C:
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8335dc3c
	if (!cr6.eq) goto loc_8335DC3C;
loc_8335DC80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DC8C"))) PPC_WEAK_FUNC(sub_8335DC8C);
PPC_FUNC_IMPL(__imp__sub_8335DC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DC90"))) PPC_WEAK_FUNC(sub_8335DC90);
PPC_FUNC_IMPL(__imp__sub_8335DC90) {
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8335dccc
	if (cr6.eq) goto loc_8335DCCC;
loc_8335DCB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335DCC0;
	sub_82572FA0(ctx, base);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x8335dcb4
	if (!cr6.eq) goto loc_8335DCB4;
loc_8335DCCC:
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

__attribute__((alias("__imp__sub_8335DCE4"))) PPC_WEAK_FUNC(sub_8335DCE4);
PPC_FUNC_IMPL(__imp__sub_8335DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DCE8"))) PPC_WEAK_FUNC(sub_8335DCE8);
PPC_FUNC_IMPL(__imp__sub_8335DCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335DCF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8335dd14
	if (!cr6.gt) goto loc_8335DD14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8335DD14;
	sub_831CC150(ctx, base);
loc_8335DD14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,24
	ctx.r27.s64 = 24;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8335ddb4
	if (!cr6.lt) goto loc_8335DDB4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82534518
	ctx.lr = 0x8335DD44;
	sub_82534518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8335dc18
	ctx.lr = 0x8335DD68;
	sub_8335DC18(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x8335dd94
	if (cr6.eq) goto loc_8335DD94;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8335dc90
	ctx.lr = 0x8335DD8C;
	sub_8335DC90(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8335DD94;
	sub_8386D088(ctx, base);
loc_8335DD94:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8335DDB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DDBC"))) PPC_WEAK_FUNC(sub_8335DDBC);
PPC_FUNC_IMPL(__imp__sub_8335DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335DDC0"))) PPC_WEAK_FUNC(sub_8335DDC0);
PPC_FUNC_IMPL(__imp__sub_8335DDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335DDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r5,24
	ctx.r3.s64 = ctx.r5.s64 + 24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8335dbb0
	ctx.lr = 0x8335DDE8;
	sub_8335DBB0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r4,-24
	ctx.r3.s64 = ctx.r4.s64 + -24;
	// bl 0x8335dc90
	ctx.lr = 0x8335DDFC;
	sub_8335DC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DE18"))) PPC_WEAK_FUNC(sub_8335DE18);
PPC_FUNC_IMPL(__imp__sub_8335DE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,24
	ctx.r9.s64 = 24;
	// ori r8,r10,43690
	ctx.r8.u64 = ctx.r10.u64 | 43690;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8335de4c
	if (!cr6.lt) goto loc_8335DE4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8335DE4C:
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
	// blt cr6,0x8335de7c
	if (cr6.lt) goto loc_8335DE7C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8335DE7C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8335de88
	if (!cr6.lt) goto loc_8335DE88;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8335DE88:
	// b 0x8335dce8
	sub_8335DCE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DE8C"))) PPC_WEAK_FUNC(sub_8335DE8C);
PPC_FUNC_IMPL(__imp__sub_8335DE8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335DE90"))) PPC_WEAK_FUNC(sub_8335DE90);
PPC_FUNC_IMPL(__imp__sub_8335DE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335DE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r30,64(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,10268
	ctx.r9.s64 = ctx.r11.s64 + 10268;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8335def0
	if (cr6.eq) goto loc_8335DEF0;
loc_8335DEC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832def60
	ctx.lr = 0x8335DED0;
	sub_832DEF60(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335dee0
	if (cr6.eq) goto loc_8335DEE0;
	// bl 0x832def98
	ctx.lr = 0x8335DEE0;
	sub_832DEF98(ctx, base);
loc_8335DEE0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335dec0
	if (!cr6.eq) goto loc_8335DEC0;
loc_8335DEF0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335df00
	if (cr6.eq) goto loc_8335DF00;
	// bl 0x8386d088
	ctx.lr = 0x8335DF00;
	sub_8386D088(ctx, base);
loc_8335DF00:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335df34
	if (cr6.eq) goto loc_8335DF34;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8335dc90
	ctx.lr = 0x8335DF2C;
	sub_8335DC90(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8335DF34;
	sub_8386D088(ctx, base);
loc_8335DF34:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// bl 0x83b3f898
	ctx.lr = 0x8335DF48;
	sub_83B3F898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8339d970
	ctx.lr = 0x8335DF50;
	sub_8339D970(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335DF58"))) PPC_WEAK_FUNC(sub_8335DF58);
PPC_FUNC_IMPL(__imp__sub_8335DF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335DF60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x8335DF78;
	sub_8257FAD0(ctx, base);
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r30,r29,80
	ctx.r30.s64 = ctx.r29.s64 + 80;
	// lwz r31,80(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8335dfac
	if (cr6.eq) goto loc_8335DFAC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x8335DFA4;
	sub_831CE420(ctx, base);
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8335DFAC:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r4,r8,r10
	ctx.r4.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// bl 0x825896c8
	ctx.lr = 0x8335DFC8;
	sub_825896C8(ctx, base);
	// lwz r7,68(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r31,64(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x8335dff4
	if (cr6.eq) goto loc_8335DFF4;
loc_8335DFD8:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82589920
	ctx.lr = 0x8335DFE4;
	sub_82589920(ctx, base);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335dfd8
	if (!cr6.eq) goto loc_8335DFD8;
loc_8335DFF4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335e00c
	if (cr6.lt) goto loc_8335E00C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335E00C;
	sub_8257FB60(ctx, base);
loc_8335E00C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E014"))) PPC_WEAK_FUNC(sub_8335E014);
PPC_FUNC_IMPL(__imp__sub_8335E014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E018"))) PPC_WEAK_FUNC(sub_8335E018);
PPC_FUNC_IMPL(__imp__sub_8335E018) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8335e050
	if (!cr6.lt) goto loc_8335E050;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8335e054
	if (!cr6.gt) goto loc_8335E054;
loc_8335E050:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8335E054:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8335e0b8
	if (cr6.eq) goto loc_8335E0B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x8335e088
	if (!cr6.eq) goto loc_8335E088;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335de18
	ctx.lr = 0x8335E088;
	sub_8335DE18(ctx, base);
loc_8335E088:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8335db48
	ctx.lr = 0x8335E0A8;
	sub_8335DB48(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8335e0ec
	goto loc_8335E0EC;
loc_8335E0B8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8335e0d0
	if (!cr6.eq) goto loc_8335E0D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335de18
	ctx.lr = 0x8335E0D0;
	sub_8335DE18(ctx, base);
loc_8335E0D0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8335db48
	ctx.lr = 0x8335E0E0;
	sub_8335DB48(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8335E0EC:
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

__attribute__((alias("__imp__sub_8335E104"))) PPC_WEAK_FUNC(sub_8335E104);
PPC_FUNC_IMPL(__imp__sub_8335E104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E108"))) PPC_WEAK_FUNC(sub_8335E108);
PPC_FUNC_IMPL(__imp__sub_8335E108) {
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
	// bl 0x8335d4b0
	ctx.lr = 0x8335E120;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,10268
	ctx.r10.s64 = ctx.r11.s64 + 10268;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x8335E134;
	sub_8257FA88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8335E168"))) PPC_WEAK_FUNC(sub_8335E168);
PPC_FUNC_IMPL(__imp__sub_8335E168) {
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
	// bl 0x8335de90
	ctx.lr = 0x8335E188;
	sub_8335DE90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335e1a8
	if (cr6.eq) goto loc_8335E1A8;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335E1A4;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335E1A8:
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

__attribute__((alias("__imp__sub_8335E1C0"))) PPC_WEAK_FUNC(sub_8335E1C0);
PPC_FUNC_IMPL(__imp__sub_8335E1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335E1C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x8335E1E4;
	sub_8257FAD0(ctx, base);
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r9,64(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r28,r29,64
	ctx.r28.s64 = ctx.r29.s64 + 64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	// cmplwi cr6,r7,64
	cr6.compare<uint32_t>(ctx.r7.u32, 64, xer);
	// blt cr6,0x8335e228
	if (cr6.lt) goto loc_8335E228;
loc_8335E204:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335e2dc
	if (cr6.lt) goto loc_8335E2DC;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335E21C;
	sub_8257FB60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335E228:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e204
	if (cr6.eq) goto loc_8335E204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335E248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8335e2d4
	if (!cr6.eq) goto loc_8335E2D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8335e2d4
	if (cr6.eq) goto loc_8335E2D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335E274;
	sub_82572FA0(ctx, base);
	// lwz r9,68(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// beq cr6,0x8335e2e8
	if (cr6.eq) goto loc_8335E2E8;
loc_8335E290:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8335e2a4
	if (cr6.gt) goto loc_8335E2A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// bge cr6,0x8335e2a8
	if (!cr6.lt) goto loc_8335E2A8;
loc_8335E2A4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8335E2A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8335e2c0
	if (!cr6.eq) goto loc_8335E2C0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335e290
	if (!cr6.eq) goto loc_8335E290;
loc_8335E2C0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8335e2e8
	if (cr6.eq) goto loc_8335E2E8;
loc_8335E2C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8335E2D4;
	sub_82572FA0(ctx, base);
loc_8335E2D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x8335E2DC;
	sub_82467848(ctx, base);
loc_8335E2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8335E2E8:
	// bl 0x832def90
	ctx.lr = 0x8335E2EC;
	sub_832DEF90(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e2c8
	if (cr6.eq) goto loc_8335E2C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335e018
	ctx.lr = 0x8335E304;
	sub_8335E018(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335df58
	ctx.lr = 0x8335E30C;
	sub_8335DF58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8335E318;
	sub_82572FA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x8335E320;
	sub_82467848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E32C"))) PPC_WEAK_FUNC(sub_8335E32C);
PPC_FUNC_IMPL(__imp__sub_8335E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E330"))) PPC_WEAK_FUNC(sub_8335E330);
PPC_FUNC_IMPL(__imp__sub_8335E330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335E338;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x8335E354;
	sub_8257FAD0(ctx, base);
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// li r27,24
	ctx.r27.s64 = 24;
	// addi r30,r29,64
	ctx.r30.s64 = ctx.r29.s64 + 64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r28,r9,r27
	ctx.r28.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8335e448
	if (cr0.eq) goto loc_8335E448;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e448
	if (cr6.eq) goto loc_8335E448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335E390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8335e448
	if (!cr6.eq) goto loc_8335E448;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8335e448
	if (cr6.eq) goto loc_8335E448;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8335e3d4
	if (cr6.eq) goto loc_8335E3D4;
loc_8335E3B4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8335e3cc
	if (cr6.eq) goto loc_8335E3CC;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335e3b4
	if (!cr6.eq) goto loc_8335E3B4;
loc_8335E3CC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335e3e8
	if (!cr6.eq) goto loc_8335E3E8;
loc_8335E3D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x8335E3DC;
	sub_82467848(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335E3E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335d7d0
	ctx.lr = 0x8335E3F4;
	sub_8335D7D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335e3d4
	if (cr6.eq) goto loc_8335E3D4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8335ddc0
	ctx.lr = 0x8335E410;
	sub_8335DDC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335df58
	ctx.lr = 0x8335E418;
	sub_8335DF58(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// subfc r7,r28,r8
	xer.ca = ctx.r8.u32 >= ctx.r28.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r5,31
	ctx.r31.u64 = ctx.r5.u32 & 0x1;
	// bl 0x82467848
	ctx.lr = 0x8335E43C;
	sub_82467848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335E448:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8335e460
	if (cr6.lt) goto loc_8335E460;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x8335E460;
	sub_8257FB60(ctx, base);
loc_8335E460:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E46C"))) PPC_WEAK_FUNC(sub_8335E46C);
PPC_FUNC_IMPL(__imp__sub_8335E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E470"))) PPC_WEAK_FUNC(sub_8335E470);
PPC_FUNC_IMPL(__imp__sub_8335E470) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x825730a8
	ctx.lr = 0x8335E498;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e4ac
	if (cr6.eq) goto loc_8335E4AC;
	// bl 0x8335e108
	ctx.lr = 0x8335E4A4;
	sub_8335E108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8335e4b0
	goto loc_8335E4B0;
loc_8335E4AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8335E4B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335E4C0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335E4D8"))) PPC_WEAK_FUNC(sub_8335E4D8);
PPC_FUNC_IMPL(__imp__sub_8335E4D8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,27304
	ctx.r9.s64 = ctx.r11.s64 + 27304;
	// addi r8,r10,-32552
	ctx.r8.s64 = ctx.r10.s64 + -32552;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8335e520
	if (cr6.eq) goto loc_8335E520;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335E51C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335E520:
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

__attribute__((alias("__imp__sub_8335E534"))) PPC_WEAK_FUNC(sub_8335E534);
PPC_FUNC_IMPL(__imp__sub_8335E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E538"))) PPC_WEAK_FUNC(sub_8335E538);
PPC_FUNC_IMPL(__imp__sub_8335E538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335E540;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335E550;
	sub_8335CB58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e5cc
	if (cr6.eq) goto loc_8335E5CC;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8335b098
	ctx.lr = 0x8335E568;
	sub_8335B098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335e59c
	if (!cr6.eq) goto loc_8335E59C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ded08
	ctx.lr = 0x8335E578;
	sub_832DED08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e5cc
	if (cr6.eq) goto loc_8335E5CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r11,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// rlwinm r4,r11,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// bl 0x8335b048
	ctx.lr = 0x8335E59C;
	sub_8335B048(ctx, base);
loc_8335E59C:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8335E5B0:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8335e5b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335E5B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8335E5CC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E5D8"))) PPC_WEAK_FUNC(sub_8335E5D8);
PPC_FUNC_IMPL(__imp__sub_8335E5D8) {
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
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8335e604
	if (!cr6.eq) goto loc_8335E604;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// b 0x8335e614
	goto loc_8335E614;
loc_8335E604:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,25008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25008);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_8335E614:
	// bl 0x82572fa0
	ctx.lr = 0x8335E618;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335E630"))) PPC_WEAK_FUNC(sub_8335E630);
PPC_FUNC_IMPL(__imp__sub_8335E630) {
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
	// bl 0x832df050
	ctx.lr = 0x8335E644;
	sub_832DF050(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x825730a8
	ctx.lr = 0x8335E658;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e698
	if (cr6.eq) goto loc_8335E698;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,10316
	ctx.r9.s64 = ctx.r11.s64 + 10316;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8335b0d0
	ctx.lr = 0x8335E680;
	sub_8335B0D0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8257efb0
	ctx.lr = 0x8335E690;
	sub_8257EFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8335e69c
	goto loc_8335E69C;
loc_8335E698:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8335E69C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335E6AC;
	sub_82572FA0(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r10,25008
	ctx.r3.s64 = ctx.r10.s64 + 25008;
	// bl 0x82572fa0
	ctx.lr = 0x8335E6BC;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8335E6C8;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335E6DC"))) PPC_WEAK_FUNC(sub_8335E6DC);
PPC_FUNC_IMPL(__imp__sub_8335E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E6E0"))) PPC_WEAK_FUNC(sub_8335E6E0);
PPC_FUNC_IMPL(__imp__sub_8335E6E0) {
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
	// bl 0x832df060
	ctx.lr = 0x8335E6F0;
	sub_832DF060(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8335E704;
	sub_82572FA0(ctx, base);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r10,25008
	ctx.r3.s64 = ctx.r10.s64 + 25008;
	// bl 0x82572fa0
	ctx.lr = 0x8335E714;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x8335E720;
	sub_82572FA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E730"))) PPC_WEAK_FUNC(sub_8335E730);
PPC_FUNC_IMPL(__imp__sub_8335E730) {
	PPC_FUNC_PROLOGUE();
	// b 0x832def88
	sub_832DEF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E734"))) PPC_WEAK_FUNC(sub_8335E734);
PPC_FUNC_IMPL(__imp__sub_8335E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E738"))) PPC_WEAK_FUNC(sub_8335E738);
PPC_FUNC_IMPL(__imp__sub_8335E738) {
	PPC_FUNC_PROLOGUE();
	// b 0x832def80
	sub_832DEF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E73C"))) PPC_WEAK_FUNC(sub_8335E73C);
PPC_FUNC_IMPL(__imp__sub_8335E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E740"))) PPC_WEAK_FUNC(sub_8335E740);
PPC_FUNC_IMPL(__imp__sub_8335E740) {
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
	// bl 0x832def80
	ctx.lr = 0x8335E750;
	sub_832DEF80(ctx, base);
	// addi r11,r3,-10035
	ctx.r11.s64 = ctx.r3.s64 + -10035;
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

__attribute__((alias("__imp__sub_8335E76C"))) PPC_WEAK_FUNC(sub_8335E76C);
PPC_FUNC_IMPL(__imp__sub_8335E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E770"))) PPC_WEAK_FUNC(sub_8335E770);
PPC_FUNC_IMPL(__imp__sub_8335E770) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x832def28
	sub_832DEF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E77C"))) PPC_WEAK_FUNC(sub_8335E77C);
PPC_FUNC_IMPL(__imp__sub_8335E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E780"))) PPC_WEAK_FUNC(sub_8335E780);
PPC_FUNC_IMPL(__imp__sub_8335E780) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e7b0
	if (cr6.eq) goto loc_8335E7B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83361e90
	ctx.lr = 0x8335E7A8;
	sub_83361E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8335E7B0:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8335e7dc
	if (cr6.eq) goto loc_8335E7DC;
	// bl 0x832dee00
	ctx.lr = 0x8335E7C0;
	sub_832DEE00(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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
loc_8335E7DC:
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

__attribute__((alias("__imp__sub_8335E7F4"))) PPC_WEAK_FUNC(sub_8335E7F4);
PPC_FUNC_IMPL(__imp__sub_8335E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E7F8"))) PPC_WEAK_FUNC(sub_8335E7F8);
PPC_FUNC_IMPL(__imp__sub_8335E7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x832deea8
	sub_832DEEA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335E800"))) PPC_WEAK_FUNC(sub_8335E800);
PPC_FUNC_IMPL(__imp__sub_8335E800) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8335e928
	if (cr6.gt) goto loc_8335E928;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8335e898
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335E898;
	// bdzf 4*cr6+eq,0x8335e8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335E8E8;
	// bdzf 4*cr6+eq,0x8335e8f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8335E8F8;
	// bne cr6,0x8335e920
	if (!cr6.eq) goto loc_8335E920;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8335e858
	if (cr6.eq) goto loc_8335E858;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8335e888
	if (!cr6.eq) goto loc_8335E888;
loc_8335E858:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x832dee10
	ctx.lr = 0x8335E878;
	sub_832DEE10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8335e928
	if (!cr6.eq) goto loc_8335E928;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8335E888:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x8335e92c
	goto loc_8335E92C;
loc_8335E898:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8335e8c8
	if (!cr6.eq) goto loc_8335E8C8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335e920
	if (cr6.eq) goto loc_8335E920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83361e90
	ctx.lr = 0x8335E8B8;
	sub_83361E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x8335e92c
	goto loc_8335E92C;
loc_8335E8C8:
	// bl 0x83361e28
	ctx.lr = 0x8335E8CC;
	sub_83361E28(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83361fc0
	ctx.lr = 0x8335E8E0;
	sub_83361FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8335e92c
	goto loc_8335E92C;
loc_8335E8E8:
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x8335e900
	goto loc_8335E900;
loc_8335E8F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
loc_8335E900:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x832dee28
	ctx.lr = 0x8335E920;
	sub_832DEE28(ctx, base);
loc_8335E920:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8335e92c
	goto loc_8335E92C;
loc_8335E928:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8335E92C:
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

__attribute__((alias("__imp__sub_8335E944"))) PPC_WEAK_FUNC(sub_8335E944);
PPC_FUNC_IMPL(__imp__sub_8335E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335E948"))) PPC_WEAK_FUNC(sub_8335E948);
PPC_FUNC_IMPL(__imp__sub_8335E948) {
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
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335e974
	if (cr6.eq) goto loc_8335E974;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b3df70
	ctx.lr = 0x8335E974;
	sub_83B3DF70(ctx, base);
loc_8335E974:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8335E990"))) PPC_WEAK_FUNC(sub_8335E990);
PPC_FUNC_IMPL(__imp__sub_8335E990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8335e9a0
	if (cr6.eq) goto loc_8335E9A0;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8335E9A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335E9A8"))) PPC_WEAK_FUNC(sub_8335E9A8);
PPC_FUNC_IMPL(__imp__sub_8335E9A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,10432
	ctx.r10.s64 = ctx.r11.s64 + 10432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8335e780
	ctx.lr = 0x8335E9D4;
	sub_8335E780(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r7,r9,27304
	ctx.r7.s64 = ctx.r9.s64 + 27304;
	// addi r6,r8,-21864
	ctx.r6.s64 = ctx.r8.s64 + -21864;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bl 0x8339d970
	ctx.lr = 0x8335E9F8;
	sub_8339D970(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8335ea18
	if (cr6.eq) goto loc_8335EA18;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335EA14;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335EA18:
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

__attribute__((alias("__imp__sub_8335EA30"))) PPC_WEAK_FUNC(sub_8335EA30);
PPC_FUNC_IMPL(__imp__sub_8335EA30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335EA4C;
	sub_8335CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335ea6c
	if (!cr6.eq) goto loc_8335EA6C;
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
loc_8335EA6C:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8335EA80:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8335ea80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335EA80;
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

__attribute__((alias("__imp__sub_8335EAA8"))) PPC_WEAK_FUNC(sub_8335EAA8);
PPC_FUNC_IMPL(__imp__sub_8335EAA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335EAC4;
	sub_8335CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335eae4
	if (!cr6.eq) goto loc_8335EAE4;
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
loc_8335EAE4:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8335EAF8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8335eaf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335EAF8;
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

__attribute__((alias("__imp__sub_8335EB20"))) PPC_WEAK_FUNC(sub_8335EB20);
PPC_FUNC_IMPL(__imp__sub_8335EB20) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335EB40;
	sub_8335CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335eb50
	if (!cr6.eq) goto loc_8335EB50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335ebe4
	goto loc_8335EBE4;
loc_8335EB50:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8335EB68:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8335eb68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335EB68;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x832dee28
	ctx.lr = 0x8335EB9C;
	sub_832DEE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8335ebe4
	if (cr6.lt) goto loc_8335EBE4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335b0d0
	ctx.lr = 0x8335EBAC;
	sub_8335B0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b0c8
	ctx.lr = 0x8335EBB4;
	sub_8335B0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335b0c0
	ctx.lr = 0x8335EBC0;
	sub_8335B0C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82429688
	ctx.lr = 0x8335EBC8;
	sub_82429688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83767d18
	ctx.lr = 0x8335EBD4;
	sub_83767D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x832dee78
	ctx.lr = 0x8335EBE4;
	sub_832DEE78(ctx, base);
loc_8335EBE4:
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

__attribute__((alias("__imp__sub_8335EBFC"))) PPC_WEAK_FUNC(sub_8335EBFC);
PPC_FUNC_IMPL(__imp__sub_8335EBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335EC00"))) PPC_WEAK_FUNC(sub_8335EC00);
PPC_FUNC_IMPL(__imp__sub_8335EC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,25020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25020);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335ec3c
	if (!cr6.eq) goto loc_8335EC3C;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r11,25020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25020, ctx.r11.u32);
	// addi r3,r8,25016
	ctx.r3.s64 = ctx.r8.s64 + 25016;
	// lwz r11,24836(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24836, ctx.r11.u32);
	// stw r11,25016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25016, ctx.r11.u32);
	// blr 
	return;
loc_8335EC3C:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,25016
	ctx.r3.s64 = ctx.r11.s64 + 25016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335EC48"))) PPC_WEAK_FUNC(sub_8335EC48);
PPC_FUNC_IMPL(__imp__sub_8335EC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8335EC60"))) PPC_WEAK_FUNC(sub_8335EC60);
PPC_FUNC_IMPL(__imp__sub_8335EC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,25028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25028);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335ec9c
	if (!cr6.eq) goto loc_8335EC9C;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r11,25028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25028, ctx.r11.u32);
	// addi r3,r8,25024
	ctx.r3.s64 = ctx.r8.s64 + 25024;
	// lwz r11,24836(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24836, ctx.r11.u32);
	// stw r11,25024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25024, ctx.r11.u32);
	// blr 
	return;
loc_8335EC9C:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335ECA8"))) PPC_WEAK_FUNC(sub_8335ECA8);
PPC_FUNC_IMPL(__imp__sub_8335ECA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8335ECB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8335d4b0
	ctx.lr = 0x8335ECC0;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,10432
	ctx.r10.s64 = ctx.r11.s64 + 10432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8335b0d0
	ctx.lr = 0x8335ECD8;
	sub_8335B0D0(ctx, base);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335b0d0
	ctx.lr = 0x8335ECE4;
	sub_8335B0D0(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// bne cr6,0x8335ed1c
	if (!cr6.eq) goto loc_8335ED1C;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832dede8
	ctx.lr = 0x8335ED0C;
	sub_832DEDE8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8335ED1C:
	// li r27,16
	ctx.r27.s64 = 16;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832dee60
	ctx.lr = 0x8335ED38;
	sub_832DEE60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335b128
	ctx.lr = 0x8335ED44;
	sub_8335B128(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832dee48
	ctx.lr = 0x8335ED58;
	sub_832DEE48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8335b128
	ctx.lr = 0x8335ED64;
	sub_8335B128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335ED70"))) PPC_WEAK_FUNC(sub_8335ED70);
PPC_FUNC_IMPL(__imp__sub_8335ED70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335ED90;
	sub_8335CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335eda0
	if (!cr6.eq) goto loc_8335EDA0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8335eea8
	goto loc_8335EEA8;
loc_8335EDA0:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r31,r30,56
	ctx.r31.s64 = ctx.r30.s64 + 56;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8335EDB8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8335edb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335EDB8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335b0d0
	ctx.lr = 0x8335EDD0;
	sub_8335B0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b098
	ctx.lr = 0x8335EDD8;
	sub_8335B098(ctx, base);
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x8335ee30
	if (!cr6.eq) goto loc_8335EE30;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8335e5d8
	ctx.lr = 0x8335EDF4;
	sub_8335E5D8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335EE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8335EE18;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b0c8
	ctx.lr = 0x8335EE20;
	sub_8335B0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335b0c0
	ctx.lr = 0x8335EE2C;
	sub_8335B0C0(ctx, base);
	// b 0x8335ee54
	goto loc_8335EE54;
loc_8335EE30:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8335EE44:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8335ee44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8335EE44;
loc_8335EE54:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335b070
	ctx.lr = 0x8335EE60;
	sub_8335B070(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82429688
	ctx.lr = 0x8335EE68;
	sub_82429688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83767d18
	ctx.lr = 0x8335EE74;
	sub_83767D18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// bl 0x832dee90
	ctx.lr = 0x8335EE84;
	sub_832DEE90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8335eea4
	if (cr6.eq) goto loc_8335EEA4;
	// bl 0x832def80
	ctx.lr = 0x8335EE94;
	sub_832DEF80(ctx, base);
	// addi r11,r3,-10056
	ctx.r11.s64 = ctx.r3.s64 + -10056;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_8335EEA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335EEA8:
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

__attribute__((alias("__imp__sub_8335EEC0"))) PPC_WEAK_FUNC(sub_8335EEC0);
PPC_FUNC_IMPL(__imp__sub_8335EEC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8335cb58
	ctx.lr = 0x8335EEDC;
	sub_8335CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8335eefc
	if (!cr6.eq) goto loc_8335EEFC;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8335EEFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8335b070
	ctx.lr = 0x8335EF04;
	sub_8335B070(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r10,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r10.u8);
	// stb r9,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r9.u8);
	// stb r8,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r8.u8);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8335c750
	ctx.lr = 0x8335EF2C;
	sub_8335C750(ctx, base);
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

__attribute__((alias("__imp__sub_8335EF40"))) PPC_WEAK_FUNC(sub_8335EF40);
PPC_FUNC_IMPL(__imp__sub_8335EF40) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8335EF6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8335ef7c
	if (!cr6.eq) goto loc_8335EF7C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8335ef88
	goto loc_8335EF88;
loc_8335EF7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335ed70
	ctx.lr = 0x8335EF88;
	sub_8335ED70(ctx, base);
loc_8335EF88:
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

__attribute__((alias("__imp__sub_8335EFA0"))) PPC_WEAK_FUNC(sub_8335EFA0);
PPC_FUNC_IMPL(__imp__sub_8335EFA0) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x825730a8
	ctx.lr = 0x8335EFCC;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335f024
	if (cr6.eq) goto loc_8335F024;
	// bl 0x8335d4b0
	ctx.lr = 0x8335EFDC;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,10432
	ctx.r10.s64 = ctx.r11.s64 + 10432;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8335b0d0
	ctx.lr = 0x8335EFF0;
	sub_8335B0D0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8335b0d0
	ctx.lr = 0x8335EFF8;
	sub_8335B0D0(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832dede8
	ctx.lr = 0x8335F018;
	sub_832DEDE8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8335f028
	goto loc_8335F028;
loc_8335F024:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8335F028:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335F038;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335F054"))) PPC_WEAK_FUNC(sub_8335F054);
PPC_FUNC_IMPL(__imp__sub_8335F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F058"))) PPC_WEAK_FUNC(sub_8335F058);
PPC_FUNC_IMPL(__imp__sub_8335F058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8335F060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x825730a8
	ctx.lr = 0x8335F07C;
	sub_825730A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335f0e4
	if (cr6.eq) goto loc_8335F0E4;
	// bl 0x8335d4b0
	ctx.lr = 0x8335F08C;
	sub_8335D4B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r10,r11,10432
	ctx.r10.s64 = ctx.r11.s64 + 10432;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8335b0d0
	ctx.lr = 0x8335F0A0;
	sub_8335B0D0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8335b0d0
	ctx.lr = 0x8335F0A8;
	sub_8335B0D0(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832dede8
	ctx.lr = 0x8335F0C8;
	sub_832DEDE8(ctx, base);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r8,10512
	ctx.r7.s64 = ctx.r8.s64 + 10512;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x8335f0ec
	goto loc_8335F0EC;
loc_8335F0E4:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8335F0EC:
	// std r30,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335F0F8;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F104"))) PPC_WEAK_FUNC(sub_8335F104);
PPC_FUNC_IMPL(__imp__sub_8335F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F108"))) PPC_WEAK_FUNC(sub_8335F108);
PPC_FUNC_IMPL(__imp__sub_8335F108) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,10420
	ctx.r9.s64 = ctx.r11.s64 + 10420;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8335f13c
	if (cr6.eq) goto loc_8335F13C;
	// bl 0x82416268
	ctx.lr = 0x8335F138;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335F13C:
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

__attribute__((alias("__imp__sub_8335F150"))) PPC_WEAK_FUNC(sub_8335F150);
PPC_FUNC_IMPL(__imp__sub_8335F150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335F158;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83b3df08
	ctx.lr = 0x8335F180;
	sub_83B3DF08(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r26,8(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8335f598
	ctx.lr = 0x8335F194;
	sub_8335F598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8335fdd8
	ctx.lr = 0x8335F1A8;
	sub_8335FDD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x8335F1B4;
	sub_82572FA0(ctx, base);
	// lwz r26,96(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// bl 0x83361e28
	ctx.lr = 0x8335F1BC;
	sub_83361E28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83361fc0
	ctx.lr = 0x8335F1CC;
	sub_83361FC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83b3dfd0
	ctx.lr = 0x8335F1DC;
	sub_83B3DFD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8335f598
	ctx.lr = 0x8335F1E4;
	sub_8335F598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8335f970
	ctx.lr = 0x8335F1F0;
	sub_8335F970(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82572fa0
	ctx.lr = 0x8335F1FC;
	sub_82572FA0(ctx, base);
	// bl 0x83361e28
	ctx.lr = 0x8335F200;
	sub_83361E28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83361e90
	ctx.lr = 0x8335F208;
	sub_83361E90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// bl 0x83b3e030
	ctx.lr = 0x8335F218;
	sub_83B3E030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F224"))) PPC_WEAK_FUNC(sub_8335F224);
PPC_FUNC_IMPL(__imp__sub_8335F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F228"))) PPC_WEAK_FUNC(sub_8335F228);
PPC_FUNC_IMPL(__imp__sub_8335F228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8335F230;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8335f258
	if (!cr6.eq) goto loc_8335F258;
loc_8335F24C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8335F258:
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8335f334
	if (!cr6.gt) goto loc_8335F334;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r9,-5816
	ctx.r4.s64 = ctx.r9.s64 + -5816;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// lwz r26,12(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r25,r7,10596
	ctx.r25.s64 = ctx.r7.s64 + 10596;
	// lwz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r22,0(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r21,4(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r20,8(r8)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r28.u32);
	// stw r26,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r26.u32);
	// stw r24,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r22,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r22.u32);
	// stw r21,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r21.u32);
	// stw r20,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r20.u32);
	// stw r8,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r8.u32);
	// bl 0x8335f150
	ctx.lr = 0x8335F314;
	sub_8335F150(ctx, base);
	// lis r9,-23162
	ctx.r9.s64 = -1517944832;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r8,r9,34818
	ctx.r8.u64 = ctx.r9.u64 | 34818;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x8335f24c
	if (cr6.eq) goto loc_8335F24C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,10420
	ctx.r10.s64 = ctx.r11.s64 + 10420;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8335F334:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832deef0
	ctx.lr = 0x8335F348;
	sub_832DEEF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8335f364
	if (!cr6.lt) goto loc_8335F364;
	// bl 0x832def80
	ctx.lr = 0x8335F358;
	sub_832DEF80(ctx, base);
	// cmpwi cr6,r3,10035
	cr6.compare<int32_t>(ctx.r3.s32, 10035, xer);
	// bne cr6,0x8335f364
	if (!cr6.eq) goto loc_8335F364;
	// bl 0x8335a810
	ctx.lr = 0x8335F364;
	sub_8335A810(ctx, base);
loc_8335F364:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F370"))) PPC_WEAK_FUNC(sub_8335F370);
PPC_FUNC_IMPL(__imp__sub_8335F370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8335F378;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8335f3ac
	if (!cr6.eq) goto loc_8335F3AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335F3A0;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8335F3AC:
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8335f490
	if (cr6.lt) goto loc_8335F490;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r7,r10,-5816
	ctx.r7.s64 = ctx.r10.s64 + -5816;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r25,r6,10608
	ctx.r25.s64 = ctx.r6.s64 + 10608;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r24,r1,128
	ctx.r24.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r22,4(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r21,8(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
	// stw r22,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r22.u32);
	// stw r21,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r21.u32);
	// stw r9,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r9.u32);
	// bl 0x8335f150
	ctx.lr = 0x8335F468;
	sub_8335F150(ctx, base);
	// lis r10,-23162
	ctx.r10.s64 = -1517944832;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r10,34818
	ctx.r9.u64 = ctx.r10.u64 | 34818;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x8335f484
	if (!cr6.eq) goto loc_8335F484;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8335f500
	goto loc_8335F500;
loc_8335F484:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,10420
	ctx.r10.s64 = ctx.r11.s64 + 10420;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8335F490:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832deeb8
	ctx.lr = 0x8335F4A0;
	sub_832DEEB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8335f500
	if (cr6.eq) goto loc_8335F500;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832def60
	ctx.lr = 0x8335F4B8;
	sub_832DEF60(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832dee10
	ctx.lr = 0x8335F4D0;
	sub_832DEE10(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x825730a8
	ctx.lr = 0x8335F4E4;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335f4fc
	if (cr6.eq) goto loc_8335F4FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8335eca8
	ctx.lr = 0x8335F4F4;
	sub_8335ECA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8335f500
	goto loc_8335F500;
loc_8335F4FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8335F500:
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x8335F50C;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F518"))) PPC_WEAK_FUNC(sub_8335F518);
PPC_FUNC_IMPL(__imp__sub_8335F518) {
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
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lwz r11,25064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25064);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335f578
	if (!cr6.eq) goto loc_8335F578;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// stw r11,25064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25064, ctx.r11.u32);
	// addi r31,r9,25032
	ctx.r31.s64 = ctx.r9.s64 + 25032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82490318
	ctx.lr = 0x8335F554;
	sub_82490318(ctx, base);
	// lis r8,-31787
	ctx.r8.s64 = -2083192832;
	// addi r3,r8,28808
	ctx.r3.s64 = ctx.r8.s64 + 28808;
	// bl 0x831cdcc8
	ctx.lr = 0x8335F560;
	sub_831CDCC8(ctx, base);
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
loc_8335F578:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,25032
	ctx.r3.s64 = ctx.r11.s64 + 25032;
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

__attribute__((alias("__imp__sub_8335F594"))) PPC_WEAK_FUNC(sub_8335F594);
PPC_FUNC_IMPL(__imp__sub_8335F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F598"))) PPC_WEAK_FUNC(sub_8335F598);
PPC_FUNC_IMPL(__imp__sub_8335F598) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25068(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25068);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// bl 0x82572fa0
	ctx.lr = 0x8335F5C0;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_8335F5D8"))) PPC_WEAK_FUNC(sub_8335F5D8);
PPC_FUNC_IMPL(__imp__sub_8335F5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8335F5E8:
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stb r11,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r11.u8);
	// stb r11,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r11.u8);
	// beq cr6,0x8335f628
	if (cr6.eq) goto loc_8335F628;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
loc_8335F628:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x8335f5e8
	if (!cr0.eq) goto loc_8335F5E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F638"))) PPC_WEAK_FUNC(sub_8335F638);
PPC_FUNC_IMPL(__imp__sub_8335F638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x8335f688
	if (cr6.eq) goto loc_8335F688;
loc_8335F658:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335f658
	if (!cr6.eq) goto loc_8335F658;
loc_8335F688:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F690"))) PPC_WEAK_FUNC(sub_8335F690);
PPC_FUNC_IMPL(__imp__sub_8335F690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335F698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8335f6bc
	if (!cr6.gt) goto loc_8335F6BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8335F6BC;
	sub_831CC150(ctx, base);
loc_8335F6BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8335f764
	if (!cr6.lt) goto loc_8335F764;
	// rlwinm r28,r4,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82534518
	ctx.lr = 0x8335F6E0;
	sub_82534518(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8335f730
	if (cr6.eq) goto loc_8335F730;
loc_8335F6F8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8335f720
	if (cr6.eq) goto loc_8335F720;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_8335F720:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335f6f8
	if (!cr6.eq) goto loc_8335F6F8;
loc_8335F730:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r29,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x8335f74c
	if (cr6.eq) goto loc_8335F74C;
	// bl 0x8386d088
	ctx.lr = 0x8335F74C;
	sub_8386D088(ctx, base);
loc_8335F74C:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8335F764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F76C"))) PPC_WEAK_FUNC(sub_8335F76C);
PPC_FUNC_IMPL(__imp__sub_8335F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F770"))) PPC_WEAK_FUNC(sub_8335F770);
PPC_FUNC_IMPL(__imp__sub_8335F770) {
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
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r9,r10,10668
	ctx.r9.s64 = ctx.r10.s64 + 10668;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,25068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25068);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8335f7b0
	if (!cr6.eq) goto loc_8335F7B0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,25068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25068, ctx.r30.u32);
loc_8335F7B0:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8258bf48
	ctx.lr = 0x8335F7B8;
	sub_8258BF48(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335f7c8
	if (cr6.eq) goto loc_8335F7C8;
	// bl 0x8386d088
	ctx.lr = 0x8335F7C8;
	sub_8386D088(ctx, base);
loc_8335F7C8:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8335f7e4
	if (cr6.eq) goto loc_8335F7E4;
	// bl 0x8386d088
	ctx.lr = 0x8335F7E4;
	sub_8386D088(ctx, base);
loc_8335F7E4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8335F814"))) PPC_WEAK_FUNC(sub_8335F814);
PPC_FUNC_IMPL(__imp__sub_8335F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F818"))) PPC_WEAK_FUNC(sub_8335F818);
PPC_FUNC_IMPL(__imp__sub_8335F818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335F820;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// ori r27,r11,2
	ctx.r27.u64 = ctx.r11.u64 | 2;
	// bl 0x8258be28
	ctx.lr = 0x8335F848;
	sub_8258BE28(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8335f870
	if (cr6.eq) goto loc_8335F870;
loc_8335F858:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bd68
	ctx.lr = 0x8335F864;
	sub_8258BD68(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8335f858
	if (!cr6.eq) goto loc_8335F858;
loc_8335F870:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x8335f8f8
	if (cr6.eq) goto loc_8335F8F8;
loc_8335F884:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x8335f8e8
	if (!cr6.eq) goto loc_8335F8E8;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8335f8d8
	if (cr6.eq) goto loc_8335F8D8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8335F8A8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335f8a8
	if (!cr6.eq) goto loc_8335F8A8;
loc_8335F8D8:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// b 0x8335f8ec
	goto loc_8335F8EC;
loc_8335F8E8:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
loc_8335F8EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x8335f884
	if (!cr6.eq) goto loc_8335F884;
loc_8335F8F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8335f954
	if (cr6.eq) goto loc_8335F954;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8335F90C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bne cr6,0x8335f944
	if (!cr6.eq) goto loc_8335F944;
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335f930
	if (!cr6.eq) goto loc_8335F930;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x8335f944
	if (!cr6.eq) goto loc_8335F944;
loc_8335F930:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
loc_8335F944:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335f90c
	if (!cr6.eq) goto loc_8335F90C;
loc_8335F954:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt cr6,0x8335f968
	if (cr6.lt) goto loc_8335F968;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x8335F968;
	sub_8258BE88(ctx, base);
loc_8335F968:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F970"))) PPC_WEAK_FUNC(sub_8335F970);
PPC_FUNC_IMPL(__imp__sub_8335F970) {
	PPC_FUNC_PROLOGUE();
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8335f818
	sub_8335F818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335F97C"))) PPC_WEAK_FUNC(sub_8335F97C);
PPC_FUNC_IMPL(__imp__sub_8335F97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F980"))) PPC_WEAK_FUNC(sub_8335F980);
PPC_FUNC_IMPL(__imp__sub_8335F980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x8335f9cc
	if (cr6.eq) goto loc_8335F9CC;
loc_8335F99C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335f99c
	if (!cr6.eq) goto loc_8335F99C;
loc_8335F9CC:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335F9D4"))) PPC_WEAK_FUNC(sub_8335F9D4);
PPC_FUNC_IMPL(__imp__sub_8335F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335F9D8"))) PPC_WEAK_FUNC(sub_8335F9D8);
PPC_FUNC_IMPL(__imp__sub_8335F9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x8335fa08
	if (!cr6.lt) goto loc_8335FA08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8335FA08:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x8335fa38
	if (cr6.lt) goto loc_8335FA38;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8335FA38:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x8335fa44
	if (!cr6.lt) goto loc_8335FA44;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8335FA44:
	// b 0x8335f690
	sub_8335F690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335FA48"))) PPC_WEAK_FUNC(sub_8335FA48);
PPC_FUNC_IMPL(__imp__sub_8335FA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8335FA4C"))) PPC_WEAK_FUNC(sub_8335FA4C);
PPC_FUNC_IMPL(__imp__sub_8335FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335FA50"))) PPC_WEAK_FUNC(sub_8335FA50);
PPC_FUNC_IMPL(__imp__sub_8335FA50) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x8335fa9c
	if (!cr6.gt) goto loc_8335FA9C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8335f638
	ctx.lr = 0x8335FA98;
	sub_8335F638(ctx, base);
	// b 0x8335faf4
	goto loc_8335FAF4;
loc_8335FA9C:
	// bge cr6,0x8335faf4
	if (!cr6.lt) goto loc_8335FAF4;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335f9d8
	ctx.lr = 0x8335FAAC;
	sub_8335F9D8(ctx, base);
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
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// subf r4,r9,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r9.s64;
	// bl 0x8335f5d8
	ctx.lr = 0x8335FAD4;
	sub_8335F5D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r6,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_8335FAF4:
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

__attribute__((alias("__imp__sub_8335FB0C"))) PPC_WEAK_FUNC(sub_8335FB0C);
PPC_FUNC_IMPL(__imp__sub_8335FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8335FB10"))) PPC_WEAK_FUNC(sub_8335FB10);
PPC_FUNC_IMPL(__imp__sub_8335FB10) {
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
	// bl 0x8335f770
	ctx.lr = 0x8335FB30;
	sub_8335F770(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335fb50
	if (cr6.eq) goto loc_8335FB50;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82573040
	ctx.lr = 0x8335FB4C;
	sub_82573040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8335FB50:
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

__attribute__((alias("__imp__sub_8335FB68"))) PPC_WEAK_FUNC(sub_8335FB68);
PPC_FUNC_IMPL(__imp__sub_8335FB68) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8335fba0
	if (!cr6.lt) goto loc_8335FBA0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8335fba4
	if (!cr6.gt) goto loc_8335FBA4;
loc_8335FBA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8335FBA4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8335fc10
	if (cr6.eq) goto loc_8335FC10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 4;
	// bne cr6,0x8335fbd4
	if (!cr6.eq) goto loc_8335FBD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335f9d8
	ctx.lr = 0x8335FBD4;
	sub_8335F9D8(ctx, base);
loc_8335FBD4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335fc54
	if (cr6.eq) goto loc_8335FC54;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// b 0x8335fc54
	goto loc_8335FC54;
loc_8335FC10:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8335fc28
	if (!cr6.eq) goto loc_8335FC28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335f9d8
	ctx.lr = 0x8335FC28;
	sub_8335F9D8(ctx, base);
loc_8335FC28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8335fc54
	if (cr6.eq) goto loc_8335FC54;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_8335FC54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8335FC78"))) PPC_WEAK_FUNC(sub_8335FC78);
PPC_FUNC_IMPL(__imp__sub_8335FC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8335FC80;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,44
	ctx.r26.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r28,r11,2
	ctx.r28.u64 = ctx.r11.u64 | 2;
	// bl 0x8258be28
	ctx.lr = 0x8335FCA8;
	sub_8258BE28(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8335fce0
	if (!cr6.gt) goto loc_8335FCE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// stb r28,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r28.u8);
	// bl 0x8335fb68
	ctx.lr = 0x8335FCDC;
	sub_8335FB68(ctx, base);
	// b 0x8335fd3c
	goto loc_8335FD3C;
loc_8335FCE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8335fd3c
	if (cr6.eq) goto loc_8335FD3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8335FCF4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bne cr6,0x8335fd2c
	if (!cr6.eq) goto loc_8335FD2C;
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8335fd18
	if (!cr6.eq) goto loc_8335FD18;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bne cr6,0x8335fd2c
	if (!cr6.eq) goto loc_8335FD2C;
loc_8335FD18:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
loc_8335FD2C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8335fcf4
	if (!cr6.eq) goto loc_8335FCF4;
loc_8335FD3C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x8335fd50
	if (cr6.lt) goto loc_8335FD50;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x8335FD50;
	sub_8258BE88(ctx, base);
loc_8335FD50:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8335FD58"))) PPC_WEAK_FUNC(sub_8335FD58);
PPC_FUNC_IMPL(__imp__sub_8335FD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8335FD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,10668
	ctx.r10.s64 = ctx.r11.s64 + 10668;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8335fa50
	ctx.lr = 0x8335FD98;
	sub_8335FA50(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// bl 0x8258bee8
	ctx.lr = 0x8335FDB0;
	sub_8258BEE8(ctx, base);
	// lis r9,-31747
	ctx.r9.s64 = -2080571392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,25068(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25068, ctx.r31.u32);
	// bl 0x8335f980
	ctx.lr = 0x8335FDC0;
	sub_8335F980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335f980
	ctx.lr = 0x8335FDC8;
	sub_8335F980(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

