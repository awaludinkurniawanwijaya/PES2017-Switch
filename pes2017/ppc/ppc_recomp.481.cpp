#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8399EA2C"))) PPC_WEAK_FUNC(sub_8399EA2C);
PPC_FUNC_IMPL(__imp__sub_8399EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EA30"))) PPC_WEAK_FUNC(sub_8399EA30);
PPC_FUNC_IMPL(__imp__sub_8399EA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,484
	ctx.r10.s64 = ctx.r3.s64 + 484;
loc_8399EA38:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x8399ea58
	if (cr6.eq) goto loc_8399EA58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8399ea38
	if (cr6.lt) goto loc_8399EA38;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8399EA58:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EA60"))) PPC_WEAK_FUNC(sub_8399EA60);
PPC_FUNC_IMPL(__imp__sub_8399EA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,525(r3)
	PPC_STORE_U8(ctx.r3.u32 + 525, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EA70"))) PPC_WEAK_FUNC(sub_8399EA70);
PPC_FUNC_IMPL(__imp__sub_8399EA70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,525(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 525);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EA78"))) PPC_WEAK_FUNC(sub_8399EA78);
PPC_FUNC_IMPL(__imp__sub_8399EA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,525(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 525);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,484
	ctx.r9.s64 = ctx.r3.s64 + 484;
loc_8399EA84:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// beq cr6,0x8399eaa4
	if (cr6.eq) goto loc_8399EAA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8399ea84
	if (cr6.lt) goto loc_8399EA84;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8399EAA4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EAAC"))) PPC_WEAK_FUNC(sub_8399EAAC);
PPC_FUNC_IMPL(__imp__sub_8399EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EAB0"))) PPC_WEAK_FUNC(sub_8399EAB0);
PPC_FUNC_IMPL(__imp__sub_8399EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8399eac4
	if (cr6.lt) goto loc_8399EAC4;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8399EAC4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,516(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 516);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EAD0"))) PPC_WEAK_FUNC(sub_8399EAD0);
PPC_FUNC_IMPL(__imp__sub_8399EAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8399eae4
	if (cr6.lt) goto loc_8399EAE4;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8399EAE4:
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,484
	ctx.r10.s64 = ctx.r3.s64 + 484;
	// lbz r9,516(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 516);
loc_8399EAF4:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8399eb10
	if (cr6.eq) goto loc_8399EB10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8399eaf4
	if (cr6.lt) goto loc_8399EAF4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8399EB10:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EB18"))) PPC_WEAK_FUNC(sub_8399EB18);
PPC_FUNC_IMPL(__imp__sub_8399EB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r5,522(r11)
	PPC_STORE_U8(ctx.r11.u32 + 522, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EB30"))) PPC_WEAK_FUNC(sub_8399EB30);
PPC_FUNC_IMPL(__imp__sub_8399EB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x8399eb44
	if (cr6.lt) goto loc_8399EB44;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8399EB44:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,522(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 522);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EB50"))) PPC_WEAK_FUNC(sub_8399EB50);
PPC_FUNC_IMPL(__imp__sub_8399EB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x8399eb64
	if (cr6.lt) goto loc_8399EB64;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8399EB64:
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,484
	ctx.r10.s64 = ctx.r3.s64 + 484;
	// lbz r9,522(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 522);
loc_8399EB74:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8399eb90
	if (cr6.eq) goto loc_8399EB90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8399eb74
	if (cr6.lt) goto loc_8399EB74;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8399EB90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EB98"))) PPC_WEAK_FUNC(sub_8399EB98);
PPC_FUNC_IMPL(__imp__sub_8399EB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stb r4,526(r3)
	PPC_STORE_U8(ctx.r3.u32 + 526, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EBA8"))) PPC_WEAK_FUNC(sub_8399EBA8);
PPC_FUNC_IMPL(__imp__sub_8399EBA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,526(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 526);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EBB0"))) PPC_WEAK_FUNC(sub_8399EBB0);
PPC_FUNC_IMPL(__imp__sub_8399EBB0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,527(r3)
	PPC_STORE_U8(ctx.r3.u32 + 527, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EBB8"))) PPC_WEAK_FUNC(sub_8399EBB8);
PPC_FUNC_IMPL(__imp__sub_8399EBB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,527(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 527);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EBC0"))) PPC_WEAK_FUNC(sub_8399EBC0);
PPC_FUNC_IMPL(__imp__sub_8399EBC0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,529(r3)
	PPC_STORE_U8(ctx.r3.u32 + 529, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EBC8"))) PPC_WEAK_FUNC(sub_8399EBC8);
PPC_FUNC_IMPL(__imp__sub_8399EBC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,529(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 529);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EBD0"))) PPC_WEAK_FUNC(sub_8399EBD0);
PPC_FUNC_IMPL(__imp__sub_8399EBD0) {
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
	// bl 0x830ff290
	ctx.lr = 0x8399EBF0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399EBF4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x8399ec00
	if (cr6.eq) goto loc_8399EC00;
	// stb r30,528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 528, ctx.r30.u8);
loc_8399EC00:
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

__attribute__((alias("__imp__sub_8399EC18"))) PPC_WEAK_FUNC(sub_8399EC18);
PPC_FUNC_IMPL(__imp__sub_8399EC18) {
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
	// bl 0x830ff290
	ctx.lr = 0x8399EC30;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399EC34;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8399ec44
	if (cr6.eq) goto loc_8399EC44;
	// lbz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 528);
loc_8399EC44:
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

__attribute__((alias("__imp__sub_8399EC58"))) PPC_WEAK_FUNC(sub_8399EC58);
PPC_FUNC_IMPL(__imp__sub_8399EC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,149(r9)
	PPC_STORE_U8(ctx.r9.u32 + 149, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EC84"))) PPC_WEAK_FUNC(sub_8399EC84);
PPC_FUNC_IMPL(__imp__sub_8399EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EC88"))) PPC_WEAK_FUNC(sub_8399EC88);
PPC_FUNC_IMPL(__imp__sub_8399EC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bge cr6,0x8399ecb4
	if (!cr6.lt) goto loc_8399ECB4;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r11,r4,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,149(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 149);
	// blr 
	return;
loc_8399ECB4:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399ECBC"))) PPC_WEAK_FUNC(sub_8399ECBC);
PPC_FUNC_IMPL(__imp__sub_8399ECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399ECC0"))) PPC_WEAK_FUNC(sub_8399ECC0);
PPC_FUNC_IMPL(__imp__sub_8399ECC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x8399ecd8
	if (cr6.lt) goto loc_8399ECD8;
	// blr 
	return;
loc_8399ECD8:
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8399ECE0:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8399ed04
	if (!cr6.lt) goto loc_8399ED04;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,149(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 149);
	// b 0x8399ed08
	goto loc_8399ED08;
loc_8399ED04:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8399ED08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8399ed20
	if (!cr6.eq) goto loc_8399ED20;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_8399ED20:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x8399ece0
	if (cr6.lt) goto loc_8399ECE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399ED34"))) PPC_WEAK_FUNC(sub_8399ED34);
PPC_FUNC_IMPL(__imp__sub_8399ED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399ED38"))) PPC_WEAK_FUNC(sub_8399ED38);
PPC_FUNC_IMPL(__imp__sub_8399ED38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_8399ED40:
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8399ED4C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8399ed64
	if (!cr6.lt) goto loc_8399ED64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r8,149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 149, ctx.r8.u8);
loc_8399ED64:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8399ed4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399ED4C;
	// addi r9,r9,160
	ctx.r9.s64 = ctx.r9.s64 + 160;
	// cmplwi cr6,r9,480
	cr6.compare<uint32_t>(ctx.r9.u32, 480, xer);
	// blt cr6,0x8399ed40
	if (cr6.lt) goto loc_8399ED40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399ED7C"))) PPC_WEAK_FUNC(sub_8399ED7C);
PPC_FUNC_IMPL(__imp__sub_8399ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399ED80"))) PPC_WEAK_FUNC(sub_8399ED80);
PPC_FUNC_IMPL(__imp__sub_8399ED80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82abfda0
	sub_82ABFDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399EDA8"))) PPC_WEAK_FUNC(sub_8399EDA8);
PPC_FUNC_IMPL(__imp__sub_8399EDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EDAC"))) PPC_WEAK_FUNC(sub_8399EDAC);
PPC_FUNC_IMPL(__imp__sub_8399EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EDB0"))) PPC_WEAK_FUNC(sub_8399EDB0);
PPC_FUNC_IMPL(__imp__sub_8399EDB0) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// li r5,160
	ctx.r5.s64 = 160;
	// blt cr6,0x8399eddc
	if (cr6.lt) goto loc_8399EDDC;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8399edf0
	goto loc_8399EDF0;
loc_8399EDDC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8399EDF0:
	// bl 0x831ce980
	ctx.lr = 0x8399EDF4;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8399EE0C"))) PPC_WEAK_FUNC(sub_8399EE0C);
PPC_FUNC_IMPL(__imp__sub_8399EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EE10"))) PPC_WEAK_FUNC(sub_8399EE10);
PPC_FUNC_IMPL(__imp__sub_8399EE10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,484
	ctx.r3.s64 = ctx.r3.s64 + 484;
	// li r5,47
	ctx.r5.s64 = 47;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399EE1C"))) PPC_WEAK_FUNC(sub_8399EE1C);
PPC_FUNC_IMPL(__imp__sub_8399EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EE20"))) PPC_WEAK_FUNC(sub_8399EE20);
PPC_FUNC_IMPL(__imp__sub_8399EE20) {
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
	// addi r4,r4,484
	ctx.r4.s64 = ctx.r4.s64 + 484;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x8399EE40;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8399EE58"))) PPC_WEAK_FUNC(sub_8399EE58);
PPC_FUNC_IMPL(__imp__sub_8399EE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stbx r4,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EE78"))) PPC_WEAK_FUNC(sub_8399EE78);
PPC_FUNC_IMPL(__imp__sub_8399EE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x8399ee88
	if (cr6.lt) goto loc_8399EE88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399EE88:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EEA0"))) PPC_WEAK_FUNC(sub_8399EEA0);
PPC_FUNC_IMPL(__imp__sub_8399EEA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stb r6,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EEB4"))) PPC_WEAK_FUNC(sub_8399EEB4);
PPC_FUNC_IMPL(__imp__sub_8399EEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EEB8"))) PPC_WEAK_FUNC(sub_8399EEB8);
PPC_FUNC_IMPL(__imp__sub_8399EEB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EECC"))) PPC_WEAK_FUNC(sub_8399EECC);
PPC_FUNC_IMPL(__imp__sub_8399EECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EED0"))) PPC_WEAK_FUNC(sub_8399EED0);
PPC_FUNC_IMPL(__imp__sub_8399EED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
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

__attribute__((alias("__imp__sub_8399EEE4"))) PPC_WEAK_FUNC(sub_8399EEE4);
PPC_FUNC_IMPL(__imp__sub_8399EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EEE8"))) PPC_WEAK_FUNC(sub_8399EEE8);
PPC_FUNC_IMPL(__imp__sub_8399EEE8) {
	PPC_FUNC_PROLOGUE();
	// li r10,255
	ctx.r10.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399EF04"))) PPC_WEAK_FUNC(sub_8399EF04);
PPC_FUNC_IMPL(__imp__sub_8399EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EF08"))) PPC_WEAK_FUNC(sub_8399EF08);
PPC_FUNC_IMPL(__imp__sub_8399EF08) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399ef30
	if (!cr6.eq) goto loc_8399EF30;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399EF30:
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x83120738
	ctx.lr = 0x8399EF44;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8399EF5C"))) PPC_WEAK_FUNC(sub_8399EF5C);
PPC_FUNC_IMPL(__imp__sub_8399EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399EF60"))) PPC_WEAK_FUNC(sub_8399EF60);
PPC_FUNC_IMPL(__imp__sub_8399EF60) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8399ef94
	if (!cr6.eq) goto loc_8399EF94;
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
loc_8399EF94:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831236a0
	ctx.lr = 0x8399EFA4;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8399EFB4;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8399EFD0"))) PPC_WEAK_FUNC(sub_8399EFD0);
PPC_FUNC_IMPL(__imp__sub_8399EFD0) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8399f004
	if (!cr6.eq) goto loc_8399F004;
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
loc_8399F004:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831236a0
	ctx.lr = 0x8399F014;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8399F024;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8399F040"))) PPC_WEAK_FUNC(sub_8399F040);
PPC_FUNC_IMPL(__imp__sub_8399F040) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399f068
	if (!cr6.eq) goto loc_8399F068;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399F068:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83120738
	ctx.lr = 0x8399F07C;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8399F094"))) PPC_WEAK_FUNC(sub_8399F094);
PPC_FUNC_IMPL(__imp__sub_8399F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F098"))) PPC_WEAK_FUNC(sub_8399F098);
PPC_FUNC_IMPL(__imp__sub_8399F098) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399f0c4
	if (!cr6.eq) goto loc_8399F0C4;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399F0C4:
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x8399F0D8;
	sub_83120738(ctx, base);
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

__attribute__((alias("__imp__sub_8399F0EC"))) PPC_WEAK_FUNC(sub_8399F0EC);
PPC_FUNC_IMPL(__imp__sub_8399F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F0F0"))) PPC_WEAK_FUNC(sub_8399F0F0);
PPC_FUNC_IMPL(__imp__sub_8399F0F0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399f11c
	if (!cr6.eq) goto loc_8399F11C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399F11C:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8314b1c8
	ctx.lr = 0x8399F128;
	sub_8314B1C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F138"))) PPC_WEAK_FUNC(sub_8399F138);
PPC_FUNC_IMPL(__imp__sub_8399F138) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399f160
	if (!cr6.eq) goto loc_8399F160;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399F160:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83151df8
	ctx.lr = 0x8399F170;
	sub_83151DF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F180"))) PPC_WEAK_FUNC(sub_8399F180);
PPC_FUNC_IMPL(__imp__sub_8399F180) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399f1b8
	if (!cr6.eq) goto loc_8399F1B8;
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
loc_8399F1B8:
	// bl 0x839a9af8
	ctx.lr = 0x8399F1BC;
	sub_839A9AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83151e90
	ctx.lr = 0x8399F1C8;
	sub_83151E90(ctx, base);
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

__attribute__((alias("__imp__sub_8399F1DC"))) PPC_WEAK_FUNC(sub_8399F1DC);
PPC_FUNC_IMPL(__imp__sub_8399F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F1E0"))) PPC_WEAK_FUNC(sub_8399F1E0);
PPC_FUNC_IMPL(__imp__sub_8399F1E0) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8399f214
	if (!cr6.eq) goto loc_8399F214;
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
loc_8399F214:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83123620
	ctx.lr = 0x8399F224;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8399F234;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8399F250"))) PPC_WEAK_FUNC(sub_8399F250);
PPC_FUNC_IMPL(__imp__sub_8399F250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,58
	ctx.r4.s64 = 58;
	// b 0x83120738
	sub_83120738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399F268"))) PPC_WEAK_FUNC(sub_8399F268);
PPC_FUNC_IMPL(__imp__sub_8399F268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F26C"))) PPC_WEAK_FUNC(sub_8399F26C);
PPC_FUNC_IMPL(__imp__sub_8399F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F270"))) PPC_WEAK_FUNC(sub_8399F270);
PPC_FUNC_IMPL(__imp__sub_8399F270) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8399f2a4
	if (!cr6.eq) goto loc_8399F2A4;
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
loc_8399F2A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83123650
	ctx.lr = 0x8399F2B4;
	sub_83123650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8399F2C4;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8399F2E0"))) PPC_WEAK_FUNC(sub_8399F2E0);
PPC_FUNC_IMPL(__imp__sub_8399F2E0) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8399f314
	if (!cr6.eq) goto loc_8399F314;
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
loc_8399F314:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831236d0
	ctx.lr = 0x8399F324;
	sub_831236D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8399F334;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8399F358"))) PPC_WEAK_FUNC(sub_8399F358);
PPC_FUNC_IMPL(__imp__sub_8399F358) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8399f38c
	if (!cr6.eq) goto loc_8399F38C;
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
loc_8399F38C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83123700
	ctx.lr = 0x8399F39C;
	sub_83123700(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x8399F3AC;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8399F3D0"))) PPC_WEAK_FUNC(sub_8399F3D0);
PPC_FUNC_IMPL(__imp__sub_8399F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8399f3ec
	if (!cr6.eq) goto loc_8399F3EC;
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// ld r11,23840(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23840);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_8399F3EC:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F400"))) PPC_WEAK_FUNC(sub_8399F400);
PPC_FUNC_IMPL(__imp__sub_8399F400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x83121088
	sub_83121088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399F418"))) PPC_WEAK_FUNC(sub_8399F418);
PPC_FUNC_IMPL(__imp__sub_8399F418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F41C"))) PPC_WEAK_FUNC(sub_8399F41C);
PPC_FUNC_IMPL(__imp__sub_8399F41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F420"))) PPC_WEAK_FUNC(sub_8399F420);
PPC_FUNC_IMPL(__imp__sub_8399F420) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399f448
	if (!cr6.eq) goto loc_8399F448;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399F448:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x83120738
	ctx.lr = 0x8399F45C;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8399F474"))) PPC_WEAK_FUNC(sub_8399F474);
PPC_FUNC_IMPL(__imp__sub_8399F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F478"))) PPC_WEAK_FUNC(sub_8399F478);
PPC_FUNC_IMPL(__imp__sub_8399F478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x83121088
	sub_83121088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399F490"))) PPC_WEAK_FUNC(sub_8399F490);
PPC_FUNC_IMPL(__imp__sub_8399F490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F494"))) PPC_WEAK_FUNC(sub_8399F494);
PPC_FUNC_IMPL(__imp__sub_8399F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F498"))) PPC_WEAK_FUNC(sub_8399F498);
PPC_FUNC_IMPL(__imp__sub_8399F498) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8399f4c0
	if (!cr6.eq) goto loc_8399F4C0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8399F4C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x83120738
	ctx.lr = 0x8399F4D4;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8399F4EC"))) PPC_WEAK_FUNC(sub_8399F4EC);
PPC_FUNC_IMPL(__imp__sub_8399F4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F4F0"))) PPC_WEAK_FUNC(sub_8399F4F0);
PPC_FUNC_IMPL(__imp__sub_8399F4F0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F4F8"))) PPC_WEAK_FUNC(sub_8399F4F8);
PPC_FUNC_IMPL(__imp__sub_8399F4F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F510"))) PPC_WEAK_FUNC(sub_8399F510);
PPC_FUNC_IMPL(__imp__sub_8399F510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bne cr6,0x8399f524
	if (!cr6.eq) goto loc_8399F524;
	// blr 
	return;
loc_8399F524:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8399F52C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x8399f554
	if (cr6.eq) goto loc_8399F554;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// bne cr6,0x8399f560
	if (!cr6.eq) goto loc_8399F560;
loc_8399F554:
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399f578
	if (cr6.eq) goto loc_8399F578;
loc_8399F560:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// blt cr6,0x8399f52c
	if (cr6.lt) goto loc_8399F52C;
	// blr 
	return;
loc_8399F578:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F580"))) PPC_WEAK_FUNC(sub_8399F580);
PPC_FUNC_IMPL(__imp__sub_8399F580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,255
	ctx.r8.s64 = 255;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// stb r9,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F5BC"))) PPC_WEAK_FUNC(sub_8399F5BC);
PPC_FUNC_IMPL(__imp__sub_8399F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F5C0"))) PPC_WEAK_FUNC(sub_8399F5C0);
PPC_FUNC_IMPL(__imp__sub_8399F5C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F5C8"))) PPC_WEAK_FUNC(sub_8399F5C8);
PPC_FUNC_IMPL(__imp__sub_8399F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x8399f5d8
	if (cr6.lt) goto loc_8399F5D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399F5D8:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,524(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 524);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F5E4"))) PPC_WEAK_FUNC(sub_8399F5E4);
PPC_FUNC_IMPL(__imp__sub_8399F5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F5E8"))) PPC_WEAK_FUNC(sub_8399F5E8);
PPC_FUNC_IMPL(__imp__sub_8399F5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,255
	ctx.r7.s64 = 255;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8399F5F4:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x8399f5f4
	if (cr6.lt) goto loc_8399F5F4;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r6,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r6.u8);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r7,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r7.u32);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
loc_8399F624:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,124(r10)
	PPC_STORE_U8(ctx.r10.u32 + 124, ctx.r6.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt cr6,0x8399f624
	if (cr6.lt) goto loc_8399F624;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r9,r3,524
	ctx.r9.s64 = ctx.r3.s64 + 524;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8399F650:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8399f650
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399F650;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8399F660:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r8,r9,25
	ctx.r8.s64 = ctx.r9.s64 + 25;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8399F670:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r4,r10,19
	ctx.r4.s64 = ctx.r10.s64 + 19;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// stwx r7,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// bdnz 0x8399f670
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399F670;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// blt cr6,0x8399f660
	if (cr6.lt) goto loc_8399F660;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F6A4"))) PPC_WEAK_FUNC(sub_8399F6A4);
PPC_FUNC_IMPL(__imp__sub_8399F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F6A8"))) PPC_WEAK_FUNC(sub_8399F6A8);
PPC_FUNC_IMPL(__imp__sub_8399F6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// li r11,5
	ctx.r11.s64 = 5;
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,108
	ctx.r11.s64 = ctx.r10.s64 + 108;
loc_8399F6D8:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8399f6d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399F6D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F6E8"))) PPC_WEAK_FUNC(sub_8399F6E8);
PPC_FUNC_IMPL(__imp__sub_8399F6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,108
	ctx.r11.s64 = ctx.r10.s64 + 108;
loc_8399F708:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8399f708
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8399F708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F718"))) PPC_WEAK_FUNC(sub_8399F718);
PPC_FUNC_IMPL(__imp__sub_8399F718) {
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
	// bl 0x830ff290
	ctx.lr = 0x8399F738;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399F73C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x8399f748
	if (cr6.eq) goto loc_8399F748;
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
loc_8399F748:
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

__attribute__((alias("__imp__sub_8399F760"))) PPC_WEAK_FUNC(sub_8399F760);
PPC_FUNC_IMPL(__imp__sub_8399F760) {
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
	// bl 0x830ff290
	ctx.lr = 0x8399F778;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8399F77C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8399f78c
	if (cr6.eq) goto loc_8399F78C;
	// lbz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
loc_8399F78C:
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

__attribute__((alias("__imp__sub_8399F7A0"))) PPC_WEAK_FUNC(sub_8399F7A0);
PPC_FUNC_IMPL(__imp__sub_8399F7A0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,90(r3)
	PPC_STORE_U8(ctx.r3.u32 + 90, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F7A8"))) PPC_WEAK_FUNC(sub_8399F7A8);
PPC_FUNC_IMPL(__imp__sub_8399F7A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F800"))) PPC_WEAK_FUNC(sub_8399F800);
PPC_FUNC_IMPL(__imp__sub_8399F800) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,38
	ctx.r11.s64 = ctx.r4.s64 + 38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F810"))) PPC_WEAK_FUNC(sub_8399F810);
PPC_FUNC_IMPL(__imp__sub_8399F810) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,38
	ctx.r11.s64 = ctx.r4.s64 + 38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F820"))) PPC_WEAK_FUNC(sub_8399F820);
PPC_FUNC_IMPL(__imp__sub_8399F820) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 + 49;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F83C"))) PPC_WEAK_FUNC(sub_8399F83C);
PPC_FUNC_IMPL(__imp__sub_8399F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F840"))) PPC_WEAK_FUNC(sub_8399F840);
PPC_FUNC_IMPL(__imp__sub_8399F840) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 + 49;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F85C"))) PPC_WEAK_FUNC(sub_8399F85C);
PPC_FUNC_IMPL(__imp__sub_8399F85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F860"))) PPC_WEAK_FUNC(sub_8399F860);
PPC_FUNC_IMPL(__imp__sub_8399F860) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,82
	ctx.r11.s64 = ctx.r11.s64 + 82;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F87C"))) PPC_WEAK_FUNC(sub_8399F87C);
PPC_FUNC_IMPL(__imp__sub_8399F87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F880"))) PPC_WEAK_FUNC(sub_8399F880);
PPC_FUNC_IMPL(__imp__sub_8399F880) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,82
	ctx.r11.s64 = ctx.r11.s64 + 82;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F89C"))) PPC_WEAK_FUNC(sub_8399F89C);
PPC_FUNC_IMPL(__imp__sub_8399F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F8A0"))) PPC_WEAK_FUNC(sub_8399F8A0);
PPC_FUNC_IMPL(__imp__sub_8399F8A0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F8A8"))) PPC_WEAK_FUNC(sub_8399F8A8);
PPC_FUNC_IMPL(__imp__sub_8399F8A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,89(r3)
	PPC_STORE_U8(ctx.r3.u32 + 89, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F8B0"))) PPC_WEAK_FUNC(sub_8399F8B0);
PPC_FUNC_IMPL(__imp__sub_8399F8B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,89(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F8B8"))) PPC_WEAK_FUNC(sub_8399F8B8);
PPC_FUNC_IMPL(__imp__sub_8399F8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// lwz r3,-19664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F8C4"))) PPC_WEAK_FUNC(sub_8399F8C4);
PPC_FUNC_IMPL(__imp__sub_8399F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399F8C8"))) PPC_WEAK_FUNC(sub_8399F8C8);
PPC_FUNC_IMPL(__imp__sub_8399F8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2132, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F8E0"))) PPC_WEAK_FUNC(sub_8399F8E0);
PPC_FUNC_IMPL(__imp__sub_8399F8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399f8f0
	if (cr6.lt) goto loc_8399F8F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399F8F0:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F900"))) PPC_WEAK_FUNC(sub_8399F900);
PPC_FUNC_IMPL(__imp__sub_8399F900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2136, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F918"))) PPC_WEAK_FUNC(sub_8399F918);
PPC_FUNC_IMPL(__imp__sub_8399F918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399f928
	if (cr6.lt) goto loc_8399F928;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399F928:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F938"))) PPC_WEAK_FUNC(sub_8399F938);
PPC_FUNC_IMPL(__imp__sub_8399F938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2140, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F950"))) PPC_WEAK_FUNC(sub_8399F950);
PPC_FUNC_IMPL(__imp__sub_8399F950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399f960
	if (cr6.lt) goto loc_8399F960;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399F960:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F970"))) PPC_WEAK_FUNC(sub_8399F970);
PPC_FUNC_IMPL(__imp__sub_8399F970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2144, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F988"))) PPC_WEAK_FUNC(sub_8399F988);
PPC_FUNC_IMPL(__imp__sub_8399F988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399f998
	if (cr6.lt) goto loc_8399F998;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399F998:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,2140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x8399f9b4
	if (cr6.lt) goto loc_8399F9B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8399f9d0
	goto loc_8399F9D0;
loc_8399F9B4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r4,532
	ctx.r10.s64 = ctx.r4.s64 * 532;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 168);
loc_8399F9D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,2144(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399F9E8"))) PPC_WEAK_FUNC(sub_8399F9E8);
PPC_FUNC_IMPL(__imp__sub_8399F9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2148, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FA00"))) PPC_WEAK_FUNC(sub_8399FA00);
PPC_FUNC_IMPL(__imp__sub_8399FA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fa10
	if (cr6.lt) goto loc_8399FA10;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FA10:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FA20"))) PPC_WEAK_FUNC(sub_8399FA20);
PPC_FUNC_IMPL(__imp__sub_8399FA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2152, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FA38"))) PPC_WEAK_FUNC(sub_8399FA38);
PPC_FUNC_IMPL(__imp__sub_8399FA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fa48
	if (cr6.lt) goto loc_8399FA48;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FA48:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FA58"))) PPC_WEAK_FUNC(sub_8399FA58);
PPC_FUNC_IMPL(__imp__sub_8399FA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2156, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FA70"))) PPC_WEAK_FUNC(sub_8399FA70);
PPC_FUNC_IMPL(__imp__sub_8399FA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fa80
	if (cr6.lt) goto loc_8399FA80;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FA80:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FA90"))) PPC_WEAK_FUNC(sub_8399FA90);
PPC_FUNC_IMPL(__imp__sub_8399FA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2160, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FAA8"))) PPC_WEAK_FUNC(sub_8399FAA8);
PPC_FUNC_IMPL(__imp__sub_8399FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fab8
	if (cr6.lt) goto loc_8399FAB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FAB8:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2160);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FAC8"))) PPC_WEAK_FUNC(sub_8399FAC8);
PPC_FUNC_IMPL(__imp__sub_8399FAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2164, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FAE0"))) PPC_WEAK_FUNC(sub_8399FAE0);
PPC_FUNC_IMPL(__imp__sub_8399FAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399faf0
	if (cr6.lt) goto loc_8399FAF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FAF0:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FB00"))) PPC_WEAK_FUNC(sub_8399FB00);
PPC_FUNC_IMPL(__imp__sub_8399FB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,115
	ctx.r11.s64 = ctx.r4.s64 * 115;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,550
	ctx.r11.s64 = ctx.r11.s64 + 550;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FB28"))) PPC_WEAK_FUNC(sub_8399FB28);
PPC_FUNC_IMPL(__imp__sub_8399FB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fb38
	if (cr6.lt) goto loc_8399FB38;
loc_8399FB30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FB38:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x8399fb30
	if (!cr6.lt) goto loc_8399FB30;
	// mulli r11,r4,115
	ctx.r11.s64 = ctx.r4.s64 * 115;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,550
	ctx.r11.s64 = ctx.r11.s64 + 550;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FB58"))) PPC_WEAK_FUNC(sub_8399FB58);
PPC_FUNC_IMPL(__imp__sub_8399FB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r10,2168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2168, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FB74"))) PPC_WEAK_FUNC(sub_8399FB74);
PPC_FUNC_IMPL(__imp__sub_8399FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8399FB78"))) PPC_WEAK_FUNC(sub_8399FB78);
PPC_FUNC_IMPL(__imp__sub_8399FB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fb88
	if (cr6.lt) goto loc_8399FB88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FB88:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FB98"))) PPC_WEAK_FUNC(sub_8399FB98);
PPC_FUNC_IMPL(__imp__sub_8399FB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FBB0"))) PPC_WEAK_FUNC(sub_8399FBB0);
PPC_FUNC_IMPL(__imp__sub_8399FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fbc0
	if (cr6.lt) goto loc_8399FBC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FBC0:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FBD0"))) PPC_WEAK_FUNC(sub_8399FBD0);
PPC_FUNC_IMPL(__imp__sub_8399FBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2176, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FBE8"))) PPC_WEAK_FUNC(sub_8399FBE8);
PPC_FUNC_IMPL(__imp__sub_8399FBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fbf8
	if (cr6.lt) goto loc_8399FBF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FBF8:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FC08"))) PPC_WEAK_FUNC(sub_8399FC08);
PPC_FUNC_IMPL(__imp__sub_8399FC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2180, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FC20"))) PPC_WEAK_FUNC(sub_8399FC20);
PPC_FUNC_IMPL(__imp__sub_8399FC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fc30
	if (cr6.lt) goto loc_8399FC30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FC30:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FC40"))) PPC_WEAK_FUNC(sub_8399FC40);
PPC_FUNC_IMPL(__imp__sub_8399FC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2184, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FC58"))) PPC_WEAK_FUNC(sub_8399FC58);
PPC_FUNC_IMPL(__imp__sub_8399FC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fc68
	if (cr6.lt) goto loc_8399FC68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FC68:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FC78"))) PPC_WEAK_FUNC(sub_8399FC78);
PPC_FUNC_IMPL(__imp__sub_8399FC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2188, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FC90"))) PPC_WEAK_FUNC(sub_8399FC90);
PPC_FUNC_IMPL(__imp__sub_8399FC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fca0
	if (cr6.lt) goto loc_8399FCA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FCA0:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FCB0"))) PPC_WEAK_FUNC(sub_8399FCB0);
PPC_FUNC_IMPL(__imp__sub_8399FCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2192, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FCC8"))) PPC_WEAK_FUNC(sub_8399FCC8);
PPC_FUNC_IMPL(__imp__sub_8399FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fcd8
	if (cr6.lt) goto loc_8399FCD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FCD8:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FCE8"))) PPC_WEAK_FUNC(sub_8399FCE8);
PPC_FUNC_IMPL(__imp__sub_8399FCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fcf8
	if (cr6.lt) goto loc_8399FCF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8399FCF8:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FD08"))) PPC_WEAK_FUNC(sub_8399FD08);
PPC_FUNC_IMPL(__imp__sub_8399FD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,2218(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2218);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399fd24
	if (cr6.eq) goto loc_8399FD24;
	// lbz r11,2678(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2678);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8399fd28
	if (!cr6.eq) goto loc_8399FD28;
loc_8399FD24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399FD28:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FD30"))) PPC_WEAK_FUNC(sub_8399FD30);
PPC_FUNC_IMPL(__imp__sub_8399FD30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2212, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FD48"))) PPC_WEAK_FUNC(sub_8399FD48);
PPC_FUNC_IMPL(__imp__sub_8399FD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fd58
	if (cr6.lt) goto loc_8399FD58;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8399FD58:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,2212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FD68"))) PPC_WEAK_FUNC(sub_8399FD68);
PPC_FUNC_IMPL(__imp__sub_8399FD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8399fd7c
	if (cr6.lt) goto loc_8399FD7C;
	// blr 
	return;
loc_8399FD7C:
	// mulli r10,r4,460
	ctx.r10.s64 = ctx.r4.s64 * 460;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,2672(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2672);
	// lwz r6,2212(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2212);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FDA0"))) PPC_WEAK_FUNC(sub_8399FDA0);
PPC_FUNC_IMPL(__imp__sub_8399FDA0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x8399fdc4
	if (cr6.lt) goto loc_8399FDC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8399fdd0
	goto loc_8399FDD0;
loc_8399FDC4:
	// mulli r11,r5,460
	ctx.r11.s64 = ctx.r5.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,2140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
loc_8399FDD0:
	// mulli r10,r5,532
	ctx.r10.s64 = ctx.r5.s64 * 532;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,160
	ctx.r5.s64 = 160;
	// blt cr6,0x8399fdf8
	if (cr6.lt) goto loc_8399FDF8;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// b 0x8399fe0c
	goto loc_8399FE0C;
loc_8399FDF8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8399FE0C:
	// bl 0x831ce980
	ctx.lr = 0x8399FE10;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82abfda0
	ctx.lr = 0x8399FE1C;
	sub_82ABFDA0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8399FE30"))) PPC_WEAK_FUNC(sub_8399FE30);
PPC_FUNC_IMPL(__imp__sub_8399FE30) {
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
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x8399fe54
	if (cr6.lt) goto loc_8399FE54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8399fe60
	goto loc_8399FE60;
loc_8399FE54:
	// mulli r11,r5,460
	ctx.r11.s64 = ctx.r5.s64 * 460;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,2140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
loc_8399FE60:
	// mulli r10,r5,532
	ctx.r10.s64 = ctx.r5.s64 * 532;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x8399fe88
	if (cr6.lt) goto loc_8399FE88;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// b 0x8399fe9c
	goto loc_8399FE9C;
loc_8399FE88:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8399FE9C:
	// bl 0x831ce980
	ctx.lr = 0x8399FEA0;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8399FEB8"))) PPC_WEAK_FUNC(sub_8399FEB8);
PPC_FUNC_IMPL(__imp__sub_8399FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8399FEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bl 0x839a9af8
	ctx.lr = 0x8399FEE8;
	sub_839A9AF8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8399ff34
	if (cr6.eq) goto loc_8399FF34;
	// addi r11,r29,1028
	ctx.r11.s64 = ctx.r29.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_8399FF00:
	// bl 0x839aa5d8
	ctx.lr = 0x8399FF04;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x8399FF14;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x8399ffb4
	if (!cr6.lt) goto loc_8399FFB4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8399ffb8
	goto loc_8399FFB8;
loc_8399FF34:
	// bl 0x831156e8
	ctx.lr = 0x8399FF38;
	sub_831156E8(ctx, base);
	// addi r11,r29,1028
	ctx.r11.s64 = ctx.r29.s64 + 1028;
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,23888(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23888);
	// lwzx r3,r8,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// xor r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8399ff74
	if (!cr6.eq) goto loc_8399FF74;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8399ff78
	if (cr6.eq) goto loc_8399FF78;
loc_8399FF74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8399FF78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8399ff00
	if (cr6.eq) goto loc_8399FF00;
	// addis r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 4718592;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// addi r10,r10,7136
	ctx.r10.s64 = ctx.r10.s64 + 7136;
	// bge cr6,0x8399ffac
	if (!cr6.lt) goto loc_8399FFAC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// b 0x8399ffb8
	goto loc_8399FFB8;
loc_8399FFAC:
	// addi r4,r10,832
	ctx.r4.s64 = ctx.r10.s64 + 832;
	// b 0x8399ffb8
	goto loc_8399FFB8;
loc_8399FFB4:
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
loc_8399FFB8:
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x8399FFC4;
	sub_831CE980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8399FFD0"))) PPC_WEAK_FUNC(sub_8399FFD0);
PPC_FUNC_IMPL(__imp__sub_8399FFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8399FFD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x839a9af8
	ctx.lr = 0x8399FFEC;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a0034
	if (cr6.eq) goto loc_839A0034;
	// addi r11,r30,1028
	ctx.r11.s64 = ctx.r30.s64 + 1028;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_839A0004:
	// bl 0x839aa5d8
	ctx.lr = 0x839A0008;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x839A0018;
	sub_831CE980(ctx, base);
	// addi r4,r1,1242
	ctx.r4.s64 = ctx.r1.s64 + 1242;
loc_839A001C:
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x839A0028;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_839A0034:
	// bl 0x831156e8
	ctx.lr = 0x839A0038;
	sub_831156E8(ctx, base);
	// addi r11,r30,1028
	ctx.r11.s64 = ctx.r30.s64 + 1028;
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,23888(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23888);
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// xor r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x839a0074
	if (!cr6.eq) goto loc_839A0074;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a0078
	if (cr6.eq) goto loc_839A0078;
loc_839A0074:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A0078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a0004
	if (cr6.eq) goto loc_839A0004;
	// addis r11,r10,72
	ctx.r11.s64 = ctx.r10.s64 + 4718592;
	// addi r11,r11,7136
	ctx.r11.s64 = ctx.r11.s64 + 7136;
	// addi r4,r11,1162
	ctx.r4.s64 = ctx.r11.s64 + 1162;
	// b 0x839a001c
	goto loc_839A001C;
}

__attribute__((alias("__imp__sub_839A0094"))) PPC_WEAK_FUNC(sub_839A0094);
PPC_FUNC_IMPL(__imp__sub_839A0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0098"))) PPC_WEAK_FUNC(sub_839A0098);
PPC_FUNC_IMPL(__imp__sub_839A0098) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r4,66
	ctx.r10.s64 = ctx.r4.s64 * 66;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,287
	ctx.r10.s64 = ctx.r11.s64 + 287;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A00BC"))) PPC_WEAK_FUNC(sub_839A00BC);
PPC_FUNC_IMPL(__imp__sub_839A00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A00C0"))) PPC_WEAK_FUNC(sub_839A00C0);
PPC_FUNC_IMPL(__imp__sub_839A00C0) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r4,66
	ctx.r10.s64 = ctx.r4.s64 * 66;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,287
	ctx.r10.s64 = ctx.r11.s64 + 287;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A00E4"))) PPC_WEAK_FUNC(sub_839A00E4);
PPC_FUNC_IMPL(__imp__sub_839A00E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A00E8"))) PPC_WEAK_FUNC(sub_839A00E8);
PPC_FUNC_IMPL(__imp__sub_839A00E8) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r4,66
	ctx.r10.s64 = ctx.r4.s64 * 66;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,293
	ctx.r10.s64 = ctx.r11.s64 + 293;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A010C"))) PPC_WEAK_FUNC(sub_839A010C);
PPC_FUNC_IMPL(__imp__sub_839A010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0110"))) PPC_WEAK_FUNC(sub_839A0110);
PPC_FUNC_IMPL(__imp__sub_839A0110) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r4,66
	ctx.r10.s64 = ctx.r4.s64 * 66;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,293
	ctx.r10.s64 = ctx.r11.s64 + 293;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0134"))) PPC_WEAK_FUNC(sub_839A0134);
PPC_FUNC_IMPL(__imp__sub_839A0134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0138"))) PPC_WEAK_FUNC(sub_839A0138);
PPC_FUNC_IMPL(__imp__sub_839A0138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x839A0140;
	__savegprlr_26(ctx, base);
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r29,r4,532
	ctx.r29.s64 = ctx.r4.s64 * 532;
loc_839A0154:
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// add r28,r29,r30
	ctx.r28.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// addi r11,r28,3048
	ctx.r11.s64 = ctx.r28.s64 + 3048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,160
	ctx.r5.s64 = 160;
	// bge cr6,0x839a0180
	if (!cr6.lt) goto loc_839A0180;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_839A0180:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x839A0188;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a01b0
	if (!cr6.lt) goto loc_839A01B0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82abfda0
	ctx.lr = 0x839A01B0;
	sub_82ABFDA0(ctx, base);
loc_839A01B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x839a0154
	if (cr6.lt) goto loc_839A0154;
	// addi r4,r28,3532
	ctx.r4.s64 = ctx.r28.s64 + 3532;
	// addi r3,r28,492
	ctx.r3.s64 = ctx.r28.s64 + 492;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x839A01CC;
	sub_831CE980(ctx, base);
	// addi r11,r26,1028
	ctx.r11.s64 = ctx.r26.s64 + 1028;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r11,23888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23888);
	// xor r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839a0204
	if (!cr6.eq) goto loc_839A0204;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a0208
	if (cr6.eq) goto loc_839A0208;
loc_839A0204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A0208:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a0234
	if (!cr6.eq) goto loc_839A0234;
	// bl 0x839aa5d8
	ctx.lr = 0x839A0218;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x839A0228;
	sub_831CE980(ctx, base);
	// lwz r11,1048(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// rlwinm r10,r11,16,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7F;
	// stb r10,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r10.u8);
loc_839A0234:
	// addi r1,r1,1616
	ctx.r1.s64 = ctx.r1.s64 + 1616;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A023C"))) PPC_WEAK_FUNC(sub_839A023C);
PPC_FUNC_IMPL(__imp__sub_839A023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0240"))) PPC_WEAK_FUNC(sub_839A0240);
PPC_FUNC_IMPL(__imp__sub_839A0240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A0248;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r3,3532
	ctx.r27.s64 = ctx.r3.s64 + 3532;
	// subfic r26,r3,-3532
	xer.ca = ctx.r3.u32 <= 4294963764;
	ctx.r26.s64 = -3532 - ctx.r3.s64;
	// li r25,2
	ctx.r25.s64 = 2;
loc_839A025C:
	// addi r4,r27,-3040
	ctx.r4.s64 = ctx.r27.s64 + -3040;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x839A026C;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x839A027C;
	sub_831CE980(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r30,r26,r27
	ctx.r30.u64 = ctx.r26.u64 + ctx.r27.u64;
loc_839A0284:
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// bge cr6,0x839a02b0
	if (!cr6.lt) goto loc_839A02B0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_839A02B0:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x839A02B8;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a02e0
	if (!cr6.lt) goto loc_839A02E0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,3052
	ctx.r3.s64 = ctx.r11.s64 + 3052;
	// bl 0x82abfda0
	ctx.lr = 0x839A02E0;
	sub_82ABFDA0(ctx, base);
loc_839A02E0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x839a0284
	if (cr6.lt) goto loc_839A0284;
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r27,r27,532
	ctx.r27.s64 = ctx.r27.s64 + 532;
	// bne 0x839a025c
	if (!cr0.eq) goto loc_839A025C;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A0300"))) PPC_WEAK_FUNC(sub_839A0300);
PPC_FUNC_IMPL(__imp__sub_839A0300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// stbx r5,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0310"))) PPC_WEAK_FUNC(sub_839A0310);
PPC_FUNC_IMPL(__imp__sub_839A0310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// lbzx r3,r7,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0328"))) PPC_WEAK_FUNC(sub_839A0328);
PPC_FUNC_IMPL(__imp__sub_839A0328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0368"))) PPC_WEAK_FUNC(sub_839A0368);
PPC_FUNC_IMPL(__imp__sub_839A0368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,6
	ctx.r10.s64 = 6;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A03A8"))) PPC_WEAK_FUNC(sub_839A03A8);
PPC_FUNC_IMPL(__imp__sub_839A03A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmpwi cr6,r4,255
	cr6.compare<int32_t>(ctx.r4.s32, 255, xer);
	// bne cr6,0x839a03bc
	if (!cr6.eq) goto loc_839A03BC;
	// blr 
	return;
loc_839A03BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
loc_839A03C8:
	// subfc r10,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// stw r9,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r9.u32);
	// beq cr6,0x839a0404
	if (cr6.eq) goto loc_839A0404;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x839a0420
	if (!cr6.eq) goto loc_839A0420;
loc_839A0404:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r5,13(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x839a0438
	if (cr6.eq) goto loc_839A0438;
loc_839A0420:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,6
	cr6.compare<uint32_t>(ctx.r6.u32, 6, xer);
	// blt cr6,0x839a03c8
	if (cr6.lt) goto loc_839A03C8;
	// blr 
	return;
loc_839A0438:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0440"))) PPC_WEAK_FUNC(sub_839A0440);
PPC_FUNC_IMPL(__imp__sub_839A0440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r8.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0474"))) PPC_WEAK_FUNC(sub_839A0474);
PPC_FUNC_IMPL(__imp__sub_839A0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0478"))) PPC_WEAK_FUNC(sub_839A0478);
PPC_FUNC_IMPL(__imp__sub_839A0478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,32
	ctx.r11.s64 = 32;
	// subfc r10,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r6,136(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A04B4"))) PPC_WEAK_FUNC(sub_839A04B4);
PPC_FUNC_IMPL(__imp__sub_839A04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A04B8"))) PPC_WEAK_FUNC(sub_839A04B8);
PPC_FUNC_IMPL(__imp__sub_839A04B8) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r11,-19664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a051c
	if (cr6.eq) goto loc_839A051C;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x839A04EC;
	sub_82595150(ctx, base);
	// lwz r3,-19664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19664);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a050c
	if (cr6.eq) goto loc_839A050C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x839A050C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_839A050C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x839A0514;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19664, ctx.r11.u32);
loc_839A051C:
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

__attribute__((alias("__imp__sub_839A0530"))) PPC_WEAK_FUNC(sub_839A0530);
PPC_FUNC_IMPL(__imp__sub_839A0530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A0538;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839a0640
	if (cr6.eq) goto loc_839A0640;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x839a0640
	if (cr6.eq) goto loc_839A0640;
	// addi r11,r4,1028
	ctx.r11.s64 = ctx.r4.s64 + 1028;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,23888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23888);
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x839a0590
	if (!cr6.eq) goto loc_839A0590;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a0594
	if (cr6.eq) goto loc_839A0594;
loc_839A0590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A0594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a0640
	if (!cr6.eq) goto loc_839A0640;
	// bl 0x831156e8
	ctx.lr = 0x839A05A4;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x839A05B4;
	sub_8311BDF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a0640
	if (cr6.eq) goto loc_839A0640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,504(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x839A05CC;
	sub_8311BE78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a0640
	if (cr6.eq) goto loc_839A0640;
	// mulli r11,r28,532
	ctx.r11.s64 = ctx.r28.s64 * 532;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A05EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399edb0
	ctx.lr = 0x839A05F8;
	sub_8399EDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a061c
	if (!cr6.lt) goto loc_839A061C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x82abfda0
	ctx.lr = 0x839A061C;
	sub_82ABFDA0(ctx, base);
loc_839A061C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x839a05ec
	if (cr6.lt) goto loc_839A05EC;
	// addi r4,r28,492
	ctx.r4.s64 = ctx.r28.s64 + 492;
	// addi r3,r29,584
	ctx.r3.s64 = ctx.r29.s64 + 584;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x839A0640;
	sub_831CE980(ctx, base);
loc_839A0640:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A0648"))) PPC_WEAK_FUNC(sub_839A0648);
PPC_FUNC_IMPL(__imp__sub_839A0648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A0650;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x839a9b70
	ctx.lr = 0x839A065C;
	sub_839A9B70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a0674
	if (!cr6.eq) goto loc_839A0674;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x839a0744
	if (!cr6.eq) goto loc_839A0744;
loc_839A0674:
	// bl 0x831156e8
	ctx.lr = 0x839A0678;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r28,r28,14904
	ctx.r28.s64 = ctx.r28.s64 + 14904;
loc_839A068C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123ad8
	ctx.lr = 0x839A0698;
	sub_83123AD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a0730
	if (cr6.eq) goto loc_839A0730;
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A06A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge cr6,0x839a06d8
	if (!cr6.lt) goto loc_839A06D8;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_839A06D8:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce980
	ctx.lr = 0x839A06E0;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a0704
	if (!cr6.lt) goto loc_839A0704;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x82abfda0
	ctx.lr = 0x839A0704;
	sub_82ABFDA0(ctx, base);
loc_839A0704:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a06a8
	if (cr6.lt) goto loc_839A06A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,584
	ctx.r3.s64 = ctx.r30.s64 + 584;
	// li r5,47
	ctx.r5.s64 = 47;
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,492
	ctx.r4.s64 = ctx.r11.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A0730;
	sub_831CE980(ctx, base);
loc_839A0730:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839a068c
	if (cr6.lt) goto loc_839A068C;
loc_839A0744:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A074C"))) PPC_WEAK_FUNC(sub_839A074C);
PPC_FUNC_IMPL(__imp__sub_839A074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0750"))) PPC_WEAK_FUNC(sub_839A0750);
PPC_FUNC_IMPL(__imp__sub_839A0750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2220
	ctx.r10.s64 = ctx.r11.s64 + 2220;
	// lwz r10,2224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
	// lwz r9,2220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r3,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0770"))) PPC_WEAK_FUNC(sub_839A0770);
PPC_FUNC_IMPL(__imp__sub_839A0770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,2236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2236, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0788"))) PPC_WEAK_FUNC(sub_839A0788);
PPC_FUNC_IMPL(__imp__sub_839A0788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2128
	ctx.r10.s64 = ctx.r11.s64 + 2128;
	// lwz r9,2236(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,2236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2236, ctx.r9.u32);
	// lwz r8,2224(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
	// lwz r7,2220(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A07CC"))) PPC_WEAK_FUNC(sub_839A07CC);
PPC_FUNC_IMPL(__imp__sub_839A07CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A07D0"))) PPC_WEAK_FUNC(sub_839A07D0);
PPC_FUNC_IMPL(__imp__sub_839A07D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839a080c
	if (!cr6.eq) goto loc_839A080C;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r7,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// blr 
	return;
loc_839A080C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0818"))) PPC_WEAK_FUNC(sub_839A0818);
PPC_FUNC_IMPL(__imp__sub_839A0818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839A0820;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r21,r4,24
	ctx.r21.u64 = ctx.r4.u32 & 0xFF;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r21,6
	cr6.compare<uint32_t>(ctx.r21.u32, 6, xer);
	// bge cr6,0x839a0acc
	if (!cr6.lt) goto loc_839A0ACC;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// bne cr6,0x839a098c
	if (!cr6.eq) goto loc_839A098C;
	// lbz r11,518(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 518);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bne cr6,0x839a0ac4
	if (!cr6.eq) goto loc_839A0AC4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31742
	ctx.r29.s64 = -2080243712;
	// li r27,32
	ctx.r27.s64 = 32;
	// li r28,1
	ctx.r28.s64 = 1;
loc_839A0868:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x839a087c
	if (!cr6.lt) goto loc_839A087C;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// b 0x839a0880
	goto loc_839A0880;
loc_839A087C:
	// li r11,255
	ctx.r11.s64 = 255;
loc_839A0880:
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// beq cr6,0x839a0944
	if (cr6.eq) goto loc_839A0944;
	// lwz r11,-19664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a0944
	if (cr6.eq) goto loc_839A0944;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mulli r10,r23,528
	ctx.r10.s64 = ctx.r23.s64 * 528;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// addi r9,r11,1072
	ctx.r9.s64 = ctx.r11.s64 + 1072;
	// bge cr6,0x839a08b8
	if (!cr6.lt) goto loc_839A08B8;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// b 0x839a08bc
	goto loc_839A08BC;
loc_839A08B8:
	// li r11,255
	ctx.r11.s64 = 255;
loc_839A08BC:
	// subfc r10,r27,r11
	xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r31,144(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bne cr6,0x839a0944
	if (!cr6.eq) goto loc_839A0944;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839a0900
	if (!cr6.eq) goto loc_839A0900;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839a0910
	goto loc_839A0910;
loc_839A0900:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83151df8
	ctx.lr = 0x839A0910;
	sub_83151DF8(ctx, base);
loc_839A0910:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// ble cr6,0x839a0944
	if (!cr6.gt) goto loc_839A0944;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839a092c
	if (!cr6.eq) goto loc_839A092C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839a093c
	goto loc_839A093C;
loc_839A092C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83151df8
	ctx.lr = 0x839A093C;
	sub_83151DF8(ctx, base);
loc_839A093C:
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_839A0944:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x839a0868
	if (cr6.lt) goto loc_839A0868;
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// bge cr6,0x839a0974
	if (!cr6.lt) goto loc_839A0974;
	// add r11,r25,r24
	ctx.r11.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// stb r11,518(r24)
	PPC_STORE_U8(ctx.r24.u32 + 518, ctx.r11.u8);
	// add r11,r21,r24
	ctx.r11.u64 = ctx.r21.u64 + ctx.r24.u64;
	// stb r22,516(r11)
	PPC_STORE_U8(ctx.r11.u32 + 516, ctx.r22.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839A0974:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,518(r24)
	PPC_STORE_U8(ctx.r24.u32 + 518, ctx.r11.u8);
	// add r11,r21,r24
	ctx.r11.u64 = ctx.r21.u64 + ctx.r24.u64;
	// stb r22,516(r11)
	PPC_STORE_U8(ctx.r11.u32 + 516, ctx.r22.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839A098C:
	// cmplwi cr6,r21,2
	cr6.compare<uint32_t>(ctx.r21.u32, 2, xer);
	// bne cr6,0x839a0ac4
	if (!cr6.eq) goto loc_839A0AC4;
	// lbz r11,517(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 517);
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, xer);
	// bne cr6,0x839a0ac4
	if (!cr6.eq) goto loc_839A0AC4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31742
	ctx.r29.s64 = -2080243712;
	// li r27,32
	ctx.r27.s64 = 32;
	// li r28,2
	ctx.r28.s64 = 2;
loc_839A09B0:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x839a09c4
	if (!cr6.lt) goto loc_839A09C4;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// b 0x839a09c8
	goto loc_839A09C8;
loc_839A09C4:
	// li r11,255
	ctx.r11.s64 = 255;
loc_839A09C8:
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, xer);
	// beq cr6,0x839a0a8c
	if (cr6.eq) goto loc_839A0A8C;
	// lwz r11,-19664(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a0a8c
	if (cr6.eq) goto loc_839A0A8C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mulli r11,r23,528
	ctx.r11.s64 = ctx.r23.s64 * 528;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// addi r9,r11,1072
	ctx.r9.s64 = ctx.r11.s64 + 1072;
	// bge cr6,0x839a0a00
	if (!cr6.lt) goto loc_839A0A00;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// b 0x839a0a04
	goto loc_839A0A04;
loc_839A0A00:
	// li r11,255
	ctx.r11.s64 = 255;
loc_839A0A04:
	// subfc r10,r27,r11
	xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r31,144(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bne cr6,0x839a0a8c
	if (!cr6.eq) goto loc_839A0A8C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839a0a48
	if (!cr6.eq) goto loc_839A0A48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839a0a58
	goto loc_839A0A58;
loc_839A0A48:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83151df8
	ctx.lr = 0x839A0A58;
	sub_83151DF8(ctx, base);
loc_839A0A58:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// ble cr6,0x839a0a8c
	if (!cr6.gt) goto loc_839A0A8C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x839a0a74
	if (!cr6.eq) goto loc_839A0A74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839a0a84
	goto loc_839A0A84;
loc_839A0A74:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83151df8
	ctx.lr = 0x839A0A84;
	sub_83151DF8(ctx, base);
loc_839A0A84:
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_839A0A8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x839a09b0
	if (cr6.lt) goto loc_839A09B0;
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// bge cr6,0x839a0abc
	if (!cr6.lt) goto loc_839A0ABC;
	// add r11,r25,r24
	ctx.r11.u64 = ctx.r25.u64 + ctx.r24.u64;
	// lbz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 484);
	// stb r11,517(r24)
	PPC_STORE_U8(ctx.r24.u32 + 517, ctx.r11.u8);
	// add r11,r21,r24
	ctx.r11.u64 = ctx.r21.u64 + ctx.r24.u64;
	// stb r22,516(r11)
	PPC_STORE_U8(ctx.r11.u32 + 516, ctx.r22.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839A0ABC:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,517(r24)
	PPC_STORE_U8(ctx.r24.u32 + 517, ctx.r11.u8);
loc_839A0AC4:
	// add r11,r21,r24
	ctx.r11.u64 = ctx.r21.u64 + ctx.r24.u64;
	// stb r22,516(r11)
	PPC_STORE_U8(ctx.r11.u32 + 516, ctx.r22.u8);
loc_839A0ACC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A0AD4"))) PPC_WEAK_FUNC(sub_839A0AD4);
PPC_FUNC_IMPL(__imp__sub_839A0AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0AD8"))) PPC_WEAK_FUNC(sub_839A0AD8);
PPC_FUNC_IMPL(__imp__sub_839A0AD8) {
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
	// li r11,23
	ctx.r11.s64 = 23;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_839A0AFC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82ac0800
	ctx.lr = 0x839A0B14;
	sub_82AC0800(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a0afc
	if (cr6.lt) goto loc_839A0AFC;
	// addi r31,r30,484
	ctx.r31.s64 = ctx.r30.s64 + 484;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x839A0B38;
	sub_831CDCF0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839A0B48:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x839a0b48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A0B48;
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

__attribute__((alias("__imp__sub_839A0B68"))) PPC_WEAK_FUNC(sub_839A0B68);
PPC_FUNC_IMPL(__imp__sub_839A0B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x839a0bac
	if (cr0.eq) goto loc_839A0BAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// ble cr6,0x839a0bbc
	if (!cr6.gt) goto loc_839A0BBC;
loc_839A0B90:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x839a0bc8
	if (cr6.eq) goto loc_839A0BC8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bgt cr6,0x839a0b90
	if (cr6.gt) goto loc_839A0B90;
loc_839A0BAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_839A0BBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_839A0BC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0BD4"))) PPC_WEAK_FUNC(sub_839A0BD4);
PPC_FUNC_IMPL(__imp__sub_839A0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0BD8"))) PPC_WEAK_FUNC(sub_839A0BD8);
PPC_FUNC_IMPL(__imp__sub_839A0BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x839a0be8
	if (cr6.lt) goto loc_839A0BE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839A0BE8:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,2220
	ctx.r10.s64 = ctx.r11.s64 + 2220;
	// lwz r10,2220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// lwz r11,2224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bgt cr6,0x839a0c18
	if (cr6.gt) goto loc_839A0C18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_839A0C18:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0C24"))) PPC_WEAK_FUNC(sub_839A0C24);
PPC_FUNC_IMPL(__imp__sub_839A0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0C28"))) PPC_WEAK_FUNC(sub_839A0C28);
PPC_FUNC_IMPL(__imp__sub_839A0C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A0C30;
	__savegprlr_27(ctx, base);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x839a9af8
	ctx.lr = 0x839A0C40;
	sub_839A9AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a0d34
	if (cr6.eq) goto loc_839A0D34;
	// addi r11,r27,1028
	ctx.r11.s64 = ctx.r27.s64 + 1028;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,23888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23888);
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// xor r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839a0c84
	if (!cr6.eq) goto loc_839A0C84;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a0c88
	if (cr6.eq) goto loc_839A0C88;
loc_839A0C84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A0C88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a0e74
	if (!cr6.eq) goto loc_839A0E74;
	// bl 0x839aa5d8
	ctx.lr = 0x839A0C98;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x839A0CA8;
	sub_831CE980(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x839a0cc8
	if (!cr6.eq) goto loc_839A0CC8;
	// mulli r11,r27,532
	ctx.r11.s64 = ctx.r27.s64 * 532;
	// lwz r10,1144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r10,16,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7F;
	// stb r8,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r8.u8);
loc_839A0CC8:
	// mulli r29,r27,532
	ctx.r29.s64 = ctx.r27.s64 * 532;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,492
	ctx.r31.s64 = ctx.r11.s64 + 492;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x839A0CE4;
	sub_831CE980(ctx, base);
	// lbz r11,1540(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1540);
	// lbz r10,1541(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1541);
	// lbz r9,1542(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1542);
	// lbz r8,1543(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1543);
	// lbz r7,1544(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1544);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// stb r10,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r10.u8);
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stb r8,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// stb r7,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r7.u8);
	// bne cr6,0x839a0d28
	if (!cr6.eq) goto loc_839A0D28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,1498
	ctx.r4.s64 = ctx.r1.s64 + 1498;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x839A0D28;
	sub_831CE980(ctx, base);
loc_839A0D28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x839a0df8
	goto loc_839A0DF8;
loc_839A0D34:
	// bl 0x831156e8
	ctx.lr = 0x839A0D38;
	sub_831156E8(ctx, base);
	// addi r11,r27,1028
	ctx.r11.s64 = ctx.r27.s64 + 1028;
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,23888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23888);
	// lwzx r31,r9,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// xor r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x839a0d70
	if (!cr6.eq) goto loc_839A0D70;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a0d74
	if (cr6.eq) goto loc_839A0D74;
loc_839A0D70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A0D74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a0e74
	if (!cr6.eq) goto loc_839A0E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa5d8
	ctx.lr = 0x839A0D88;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x839A0D98;
	sub_831CE980(ctx, base);
	// mulli r29,r27,532
	ctx.r29.s64 = ctx.r27.s64 * 532;
	// lwz r11,1144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// add r28,r29,r30
	ctx.r28.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r10,r11,16,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7F;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,1498
	ctx.r4.s64 = ctx.r1.s64 + 1498;
	// li r5,47
	ctx.r5.s64 = 47;
	// stb r10,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r10.u8);
	// bl 0x831ce980
	ctx.lr = 0x839A0DBC;
	sub_831CE980(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8399feb8
	ctx.lr = 0x839A0DD0;
	sub_8399FEB8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x839a8390
	ctx.lr = 0x839A0DF0;
	sub_839A8390(ctx, base);
	// addi r3,r28,492
	ctx.r3.s64 = ctx.r28.s64 + 492;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_839A0DF8:
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x839A0E00;
	sub_831CE980(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A0E08:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8399feb8
	ctx.lr = 0x839A0E18;
	sub_8399FEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a0e40
	if (!cr6.lt) goto loc_839A0E40;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82abfda0
	ctx.lr = 0x839A0E40;
	sub_82ABFDA0(ctx, base);
loc_839A0E40:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// blt cr6,0x839a0e08
	if (cr6.lt) goto loc_839A0E08;
	// bl 0x830ff290
	ctx.lr = 0x839A0E58;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A0E5C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x839a0e74
	if (cr6.eq) goto loc_839A0E74;
	// mulli r11,r27,460
	ctx.r11.s64 = ctx.r27.s64 * 460;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2196(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2196, ctx.r10.u8);
loc_839A0E74:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A0E7C"))) PPC_WEAK_FUNC(sub_839A0E7C);
PPC_FUNC_IMPL(__imp__sub_839A0E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0E80"))) PPC_WEAK_FUNC(sub_839A0E80);
PPC_FUNC_IMPL(__imp__sub_839A0E80) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x839a0ebc
	if (!cr6.eq) goto loc_839A0EBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839a0f00
	goto loc_839A0F00;
loc_839A0EBC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x839a0ed8
	if (!cr6.gt) goto loc_839A0ED8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x839A0ED8;
	sub_831CC150(ctx, base);
loc_839A0ED8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828eb740
	ctx.lr = 0x839A0EE4;
	sub_828EB740(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_839A0F00:
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

__attribute__((alias("__imp__sub_839A0F18"))) PPC_WEAK_FUNC(sub_839A0F18);
PPC_FUNC_IMPL(__imp__sub_839A0F18) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x839a0f48
	if (cr6.lt) goto loc_839A0F48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x839a0f5c
	goto loc_839A0F5C;
loc_839A0F48:
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a0b68
	ctx.lr = 0x839A0F5C;
	sub_839A0B68(ctx, base);
loc_839A0F5C:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x839a0f70
	if (!cr6.lt) goto loc_839A0F70;
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r3,2236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2236, ctx.r3.u32);
loc_839A0F70:
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

__attribute__((alias("__imp__sub_839A0F88"))) PPC_WEAK_FUNC(sub_839A0F88);
PPC_FUNC_IMPL(__imp__sub_839A0F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x839a0f98
	if (cr6.lt) goto loc_839A0F98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839A0F98:
	// mulli r11,r4,460
	ctx.r11.s64 = ctx.r4.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,2220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	// lwz r9,2224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2224);
	// lwz r11,2236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x839a0fc8
	if (cr6.gt) goto loc_839A0FC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_839A0FC8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A0FD4"))) PPC_WEAK_FUNC(sub_839A0FD4);
PPC_FUNC_IMPL(__imp__sub_839A0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A0FD8"))) PPC_WEAK_FUNC(sub_839A0FD8);
PPC_FUNC_IMPL(__imp__sub_839A0FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x839A0FE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,24848
	ctx.r10.s64 = ctx.r11.s64 + 24848;
	// li r29,13
	ctx.r29.s64 = 13;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r25,255
	ctx.r25.s64 = 255;
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// addi r28,r3,92
	ctx.r28.s64 = ctx.r3.s64 + 92;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// stw r25,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r25.u32);
	// stw r29,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r29.u32);
	// stw r29,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r29.u32);
	// stb r30,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r30.u8);
	// stb r30,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r30.u8);
	// stw r25,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r25.u32);
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
	// stw r29,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r29.u32);
	// stb r30,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r30.u8);
	// stb r30,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r30.u8);
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// stb r30,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r30.u8);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r27,92(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x839a10cc
	if (cr6.eq) goto loc_839A10CC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x831ce420
	ctx.lr = 0x839A10C4;
	sub_831CE420(ctx, base);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
loc_839A10CC:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
loc_839A10E0:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r25.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r7,r10,82
	ctx.r7.s64 = ctx.r10.s64 + 82;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839A10F4:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r4,r9,49
	ctx.r4.s64 = ctx.r9.s64 + 49;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r29,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r29.u32);
	// bdnz 0x839a10f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A10F4;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r10,33
	cr6.compare<uint32_t>(ctx.r10.u32, 33, xer);
	// blt cr6,0x839a10e0
	if (cr6.lt) goto loc_839A10E0;
	// stb r24,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r24.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r24,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r24.u8);
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A1140"))) PPC_WEAK_FUNC(sub_839A1140);
PPC_FUNC_IMPL(__imp__sub_839A1140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A1148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r31,r3,92
	ctx.r31.s64 = ctx.r3.s64 + 92;
	// addi r10,r11,24848
	ctx.r10.s64 = ctx.r11.s64 + 24848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r30,92(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x839a118c
	if (cr6.eq) goto loc_839A118C;
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
	ctx.lr = 0x839A1184;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_839A118C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a119c
	if (cr6.eq) goto loc_839A119C;
	// bl 0x82416268
	ctx.lr = 0x839A119C;
	sub_82416268(ctx, base);
loc_839A119C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A11B4"))) PPC_WEAK_FUNC(sub_839A11B4);
PPC_FUNC_IMPL(__imp__sub_839A11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A11B8"))) PPC_WEAK_FUNC(sub_839A11B8);
PPC_FUNC_IMPL(__imp__sub_839A11B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A11C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24852
	ctx.r10.s64 = ctx.r11.s64 + 24852;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_839A11DC:
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x839A11F4;
	sub_823FCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a0ad8
	ctx.lr = 0x839A11FC;
	sub_839A0AD8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,532
	ctx.r30.s64 = ctx.r30.s64 + 532;
	// bge 0x839a11dc
	if (!cr0.lt) goto loc_839A11DC;
	// addi r29,r31,1072
	ctx.r29.s64 = ctx.r31.s64 + 1072;
	// li r30,1
	ctx.r30.s64 = 1;
loc_839A1210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83832bd8
	ctx.lr = 0x839A1218;
	sub_83832BD8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,528
	ctx.r29.s64 = ctx.r29.s64 + 528;
	// bge 0x839a1210
	if (!cr0.lt) goto loc_839A1210;
	// addi r29,r31,2128
	ctx.r29.s64 = ctx.r31.s64 + 2128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_839A122C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a0fd8
	ctx.lr = 0x839A1234;
	sub_839A0FD8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,460
	ctx.r29.s64 = ctx.r29.s64 + 460;
	// bge 0x839a122c
	if (!cr0.lt) goto loc_839A122C;
	// addi r30,r31,3048
	ctx.r30.s64 = ctx.r31.s64 + 3048;
	// li r29,1
	ctx.r29.s64 = 1;
loc_839A1248:
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x839A1260;
	sub_823FCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a0ad8
	ctx.lr = 0x839A1268;
	sub_839A0AD8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,532
	ctx.r30.s64 = ctx.r30.s64 + 532;
	// bge 0x839a1248
	if (!cr0.lt) goto loc_839A1248;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,4112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4112, ctx.r11.u32);
	// addi r11,r31,4112
	ctx.r11.s64 = ctx.r31.s64 + 4112;
	// stw r9,4116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4116, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A129C"))) PPC_WEAK_FUNC(sub_839A129C);
PPC_FUNC_IMPL(__imp__sub_839A129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A12A0"))) PPC_WEAK_FUNC(sub_839A12A0);
PPC_FUNC_IMPL(__imp__sub_839A12A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x839A12A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r28,r3,3048
	ctx.r28.s64 = ctx.r3.s64 + 3048;
	// addi r10,r11,24852
	ctx.r10.s64 = ctx.r11.s64 + 24852;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,24848
	ctx.r25.s64 = ctx.r11.s64 + 24848;
loc_839A12D0:
	// addi r31,r31,-460
	ctx.r31.s64 = ctx.r31.s64 + -460;
	// stwu r25,-460(r28)
	ea = -460 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r28.u32 = ea;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,-4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x839a1308
	if (cr6.eq) goto loc_839A1308;
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
	ctx.lr = 0x839A1300;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839A1308:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a1318
	if (cr6.eq) goto loc_839A1318;
	// bl 0x82416268
	ctx.lr = 0x839A1318;
	sub_82416268(ctx, base);
loc_839A1318:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r26,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// bge 0x839a12d0
	if (!cr0.lt) goto loc_839A12D0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A1334"))) PPC_WEAK_FUNC(sub_839A1334);
PPC_FUNC_IMPL(__imp__sub_839A1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A1338"))) PPC_WEAK_FUNC(sub_839A1338);
PPC_FUNC_IMPL(__imp__sub_839A1338) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,92
	ctx.r4.s64 = ctx.r4.s64 + 92;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lbz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// stb r9,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r9.u8);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r5,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r5.u32);
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// lbz r10,89(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// stb r10,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r10.u8);
	// lbz r9,90(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// stb r9,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r9.u8);
	// bl 0x82dd7210
	ctx.lr = 0x839A1420;
	sub_82DD7210(ctx, base);
	// lwz r8,108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r31,108
	ctx.r10.s64 = ctx.r31.s64 + 108;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839A1438:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839a1438
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A1438;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839A1454:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839a1454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A1454;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839A1470:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x839a1470
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A1470;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839A148C:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x839a148c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A148C;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r31,328
	ctx.r11.s64 = ctx.r31.s64 + 328;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_839A14A8:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x839a14a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A14A8;
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

__attribute__((alias("__imp__sub_839A14D4"))) PPC_WEAK_FUNC(sub_839A14D4);
PPC_FUNC_IMPL(__imp__sub_839A14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A14D8"))) PPC_WEAK_FUNC(sub_839A14D8);
PPC_FUNC_IMPL(__imp__sub_839A14D8) {
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
	// bl 0x839a12a0
	ctx.lr = 0x839A14F8;
	sub_839A12A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a1510
	if (cr6.eq) goto loc_839A1510;
	// bl 0x82416268
	ctx.lr = 0x839A150C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839A1510:
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

__attribute__((alias("__imp__sub_839A1528"))) PPC_WEAK_FUNC(sub_839A1528);
PPC_FUNC_IMPL(__imp__sub_839A1528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A1530;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,92(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r29,r3,92
	ctx.r29.s64 = ctx.r3.s64 + 92;
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x839a1568
	if (cr6.eq) goto loc_839A1568;
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
	ctx.lr = 0x839A1560;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_839A1568:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A156C:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x839a1584
	if (!cr6.eq) goto loc_839A1584;
	// bl 0x839a9cd8
	ctx.lr = 0x839A1578;
	sub_839A9CD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x839a15ac
	if (cr6.eq) goto loc_839A15AC;
	// b 0x839a159c
	goto loc_839A159C;
loc_839A1584:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x839a159c
	if (!cr6.eq) goto loc_839A159C;
	// bl 0x830ff290
	ctx.lr = 0x839A1590;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A1594;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x839a15ac
	if (!cr6.eq) goto loc_839A15AC;
loc_839A159C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x839A15AC;
	sub_82AB5F20(ctx, base);
loc_839A15AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a156c
	if (cr6.lt) goto loc_839A156C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A15C0"))) PPC_WEAK_FUNC(sub_839A15C0);
PPC_FUNC_IMPL(__imp__sub_839A15C0) {
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
	// bl 0x839a1140
	ctx.lr = 0x839A15E0;
	sub_839A1140(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a15f8
	if (cr6.eq) goto loc_839A15F8;
	// bl 0x82416268
	ctx.lr = 0x839A15F4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839A15F8:
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

__attribute__((alias("__imp__sub_839A1610"))) PPC_WEAK_FUNC(sub_839A1610);
PPC_FUNC_IMPL(__imp__sub_839A1610) {
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
	// lis r31,-31742
	ctx.r31.s64 = -2080243712;
	// lwz r3,-19664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19664);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a1660
	if (!cr6.eq) goto loc_839A1660;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4120
	ctx.r4.s64 = 4120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839A1648;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a1658
	if (cr6.eq) goto loc_839A1658;
	// bl 0x839a11b8
	ctx.lr = 0x839A1654;
	sub_839A11B8(ctx, base);
	// b 0x839a165c
	goto loc_839A165C;
loc_839A1658:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A165C:
	// stw r3,-19664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19664, ctx.r3.u32);
loc_839A1660:
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

__attribute__((alias("__imp__sub_839A1674"))) PPC_WEAK_FUNC(sub_839A1674);
PPC_FUNC_IMPL(__imp__sub_839A1674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A1678"))) PPC_WEAK_FUNC(sub_839A1678);
PPC_FUNC_IMPL(__imp__sub_839A1678) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x839a0e80
	ctx.lr = 0x839A16B8;
	sub_839A0E80(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839a16fc
	if (cr6.eq) goto loc_839A16FC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x839a16f8
	if (cr6.eq) goto loc_839A16F8;
loc_839A16D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a16e8
	if (cr6.eq) goto loc_839A16E8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_839A16E8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x839a16d8
	if (!cr6.eq) goto loc_839A16D8;
loc_839A16F8:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_839A16FC:
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

__attribute__((alias("__imp__sub_839A1718"))) PPC_WEAK_FUNC(sub_839A1718);
PPC_FUNC_IMPL(__imp__sub_839A1718) {
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
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,24848
	ctx.r10.s64 = ctx.r11.s64 + 24848;
	// addi r4,r4,92
	ctx.r4.s64 = ctx.r4.s64 + 92;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lbz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// stb r7,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r7.u8);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lbz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r9,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r9.u8);
	// lbz r8,89(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 89);
	// stb r8,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r8.u8);
	// lbz r7,90(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 90);
	// stb r7,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r7.u8);
	// bl 0x839a1678
	ctx.lr = 0x839A180C;
	sub_839A1678(ctx, base);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_839A1828:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839a1828
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A1828;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831ce980
	ctx.lr = 0x839A1844;
	sub_831CE980(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x831ce980
	ctx.lr = 0x839A1854;
	sub_831CE980(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x831ce980
	ctx.lr = 0x839A1864;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_839A1880"))) PPC_WEAK_FUNC(sub_839A1880);
PPC_FUNC_IMPL(__imp__sub_839A1880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A1888;
	__savegprlr_27(ctx, base);
	// stwu r1,-3584(r1)
	ea = -3584 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x839a9dd0
	ctx.lr = 0x839A1898;
	sub_839A9DD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r27,-31742
	ctx.r27.s64 = -2080243712;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a18b0
	if (cr6.eq) goto loc_839A18B0;
	// bl 0x8308e078
	ctx.lr = 0x839A18AC;
	sub_8308E078(ctx, base);
	// b 0x839a19fc
	goto loc_839A19FC;
loc_839A18B0:
	// bl 0x830ff290
	ctx.lr = 0x839A18B4;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x839A18B8;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a18f0
	if (cr6.eq) goto loc_839A18F0;
	// bl 0x82dad2e0
	ctx.lr = 0x839A18C8;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a18e8
	if (cr6.eq) goto loc_839A18E8;
	// bl 0x82dad2e0
	ctx.lr = 0x839A18D4;
	sub_82DAD2E0(ctx, base);
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bne cr6,0x839a1a04
	if (!cr6.eq) goto loc_839A1A04;
	// bl 0x8308e078
	ctx.lr = 0x839A18E4;
	sub_8308E078(ctx, base);
	// b 0x839a19fc
	goto loc_839A19FC;
loc_839A18E8:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x839a1a04
	goto loc_839A1A04;
loc_839A18F0:
	// bl 0x831156e8
	ctx.lr = 0x839A18F4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 + 393216;
	// addi r4,r4,-30316
	ctx.r4.s64 = ctx.r4.s64 + -30316;
	// bl 0x831ce980
	ctx.lr = 0x839A1910;
	sub_831CE980(ctx, base);
	// lwz r11,-19664(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19664);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,7
	cr6.compare<int32_t>(ctx.r9.s32, 7, xer);
	// bne cr6,0x839a193c
	if (!cr6.eq) goto loc_839A193C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x839a193c
	if (!cr6.eq) goto loc_839A193C;
	// bl 0x8308e078
	ctx.lr = 0x839A192C;
	sub_8308E078(ctx, base);
	// bl 0x839aa498
	ctx.lr = 0x839A1930;
	sub_839AA498(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x839a1a04
	if (!cr6.eq) goto loc_839A1A04;
loc_839A193C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A1940:
	// bl 0x8311e3d0
	ctx.lr = 0x839A1944;
	sub_8311E3D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8311d680
	ctx.lr = 0x839A194C;
	sub_8311D680(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x839a1984
	if (!cr6.eq) goto loc_839A1984;
	// addi r11,r1,141
	ctx.r11.s64 = ctx.r1.s64 + 141;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x839a9d98
	ctx.lr = 0x839A1964;
	sub_839A9D98(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a1984
	if (cr6.eq) goto loc_839A1984;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x839A197C;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a1998
	if (!cr6.eq) goto loc_839A1998;
loc_839A1984:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839a1940
	if (cr6.lt) goto loc_839A1940;
	// b 0x839a19ac
	goto loc_839A19AC;
loc_839A1998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa498
	ctx.lr = 0x839A19A0;
	sub_839AA498(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x839a1a04
	if (!cr6.eq) goto loc_839A1A04;
loc_839A19AC:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,141
	ctx.r11.s64 = ctx.r1.s64 + 141;
loc_839A19B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x839a9d98
	ctx.lr = 0x839A19C0;
	sub_839A9D98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a19e0
	if (cr6.eq) goto loc_839A19E0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8353b168
	ctx.lr = 0x839A19D8;
	sub_8353B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a19f8
	if (!cr6.eq) goto loc_839A19F8;
loc_839A19E0:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,141
	ctx.r11.s64 = ctx.r1.s64 + 141;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r31,24
	cr6.compare<uint32_t>(ctx.r31.u32, 24, xer);
	// blt cr6,0x839a19b4
	if (cr6.lt) goto loc_839A19B4;
	// b 0x839a1a04
	goto loc_839A1A04;
loc_839A19F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839A19FC:
	// bl 0x839aa498
	ctx.lr = 0x839A1A00;
	sub_839AA498(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
loc_839A1A04:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// beq cr6,0x839a1a34
	if (cr6.eq) goto loc_839A1A34;
	// bl 0x831156e8
	ctx.lr = 0x839A1A14;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mulli r10,r29,2800
	ctx.r10.s64 = ctx.r29.s64 * 2800;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// bl 0x831ce980
	ctx.lr = 0x839A1A30;
	sub_831CE980(ctx, base);
	// lbz r30,1437(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1437);
loc_839A1A34:
	// lwz r11,-19664(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19664);
	// mulli r31,r28,460
	ctx.r31.s64 = ctx.r28.s64 * 460;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a1718
	ctx.lr = 0x839A1A4C;
	sub_839A1718(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x839A1A50;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A1A54;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x839a1a60
	if (cr6.eq) goto loc_839A1A60;
	// stb r30,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r30.u8);
loc_839A1A60:
	// lwz r11,-19664(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19664);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a1338
	ctx.lr = 0x839A1A74;
	sub_839A1338(ctx, base);
	// lwz r31,364(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x839a1a90
	if (cr6.eq) goto loc_839A1A90;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce420
	ctx.lr = 0x839A1A90;
	sub_831CE420(ctx, base);
loc_839A1A90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839a1aa0
	if (cr6.eq) goto loc_839A1AA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x839A1AA0;
	sub_82416268(ctx, base);
loc_839A1AA0:
	// addi r1,r1,3584
	ctx.r1.s64 = ctx.r1.s64 + 3584;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A1AA8"))) PPC_WEAK_FUNC(sub_839A1AA8);
PPC_FUNC_IMPL(__imp__sub_839A1AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x839A1AB0;
	__savegprlr_18(ctx, base);
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,1812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1812, ctx.r5.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839a1ec0
	if (cr6.eq) goto loc_839A1EC0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x839a1ec0
	if (cr6.eq) goto loc_839A1EC0;
	// mulli r11,r5,460
	ctx.r11.s64 = ctx.r5.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a1528
	ctx.lr = 0x839A1AE4;
	sub_839A1528(ctx, base);
	// lwz r7,1812(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// rlwinm r10,r30,0,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r11,r30,14
	ctx.r11.u64 = ctx.r30.u32 & 0x3FFFF;
	// addi r6,r7,1028
	ctx.r6.s64 = ctx.r7.s64 + 1028;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31768
	ctx.r9.s64 = -2081947648;
	// stwx r8,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r8.u32);
	// lwz r10,23888(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23888);
	// xor r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// rlwinm r4,r5,0,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x839a1b28
	if (!cr6.eq) goto loc_839A1B28;
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x839a1b2c
	if (cr6.eq) goto loc_839A1B2C;
loc_839A1B28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A1B2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a1ec0
	if (!cr6.eq) goto loc_839A1EC0;
	// bl 0x831156e8
	ctx.lr = 0x839A1B3C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r19,r11,5
	ctx.r19.s64 = ctx.r11.s64 + 327680;
	// addi r19,r19,14904
	ctx.r19.s64 = ctx.r19.s64 + 14904;
	// bl 0x831156e8
	ctx.lr = 0x839A1B4C;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,48(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x839aa5d8
	ctx.lr = 0x839A1B5C;
	sub_839AA5D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x839A1B6C;
	sub_831CE980(ctx, base);
	// lwz r9,1812(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// lwz r7,1144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r11,r9,532
	ctx.r11.s64 = ctx.r9.s64 * 532;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r18,r7,16,25,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x7F;
	// stb r18,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r18.u8);
loc_839A1B88:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8314fef8
	ctx.lr = 0x839A1B98;
	sub_8314FEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a1bc8
	if (!cr6.lt) goto loc_839A1BC8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1812(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r11,r10,532
	ctx.r11.s64 = ctx.r10.s64 * 532;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82abfda0
	ctx.lr = 0x839A1BC8;
	sub_82ABFDA0(ctx, base);
loc_839A1BC8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1812
	ctx.r4.s64 = ctx.r1.s64 + 1812;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x831240c8
	ctx.lr = 0x839A1BD8;
	sub_831240C8(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a1bf4
	if (!cr6.lt) goto loc_839A1BF4;
	// lwz r11,1812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// mulli r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r3,1596(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1596, ctx.r3.u8);
loc_839A1BF4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a1b88
	if (cr6.lt) goto loc_839A1B88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8314ff98
	ctx.lr = 0x839A1C10;
	sub_8314FF98(ctx, base);
	// lwz r11,1812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A1C2C;
	sub_831CE980(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x839a1e74
	if (!cr6.gt) goto loc_839A1E74;
	// lis r11,191
	ctx.r11.s64 = 12517376;
	// addi r21,r1,584
	ctx.r21.s64 = ctx.r1.s64 + 584;
	// li r23,32
	ctx.r23.s64 = 32;
	// lis r20,-31768
	ctx.r20.s64 = -2081947648;
	// ori r22,r11,54572
	ctx.r22.u64 = ctx.r11.u64 | 54572;
loc_839A1C4C:
	// ld r4,23840(r20)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r20.u32 + 23840);
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r18.u32, xer);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bge cr6,0x839a1c64
	if (!cr6.lt) goto loc_839A1C64;
	// ld r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
loc_839A1C64:
	// subfc r11,r23,r28
	xer.ca = ctx.r28.u32 >= ctx.r23.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r23.s64;
	// lwz r9,1812(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// and r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 & ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r6,1216(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	// lwz r31,1208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// lwz r25,1212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// bl 0x8311bd68
	ctx.lr = 0x839A1CA4;
	sub_8311BD68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a1e64
	if (cr6.eq) goto loc_839A1E64;
	// bl 0x830ff290
	ctx.lr = 0x839A1CB4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A1CB8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// blt cr6,0x839a1d64
	if (cr6.lt) goto loc_839A1D64;
	// bl 0x830ff290
	ctx.lr = 0x839A1CC4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A1CC8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x839a1d64
	if (cr6.gt) goto loc_839A1D64;
	// add r3,r24,r22
	ctx.r3.u64 = ctx.r24.u64 + ctx.r22.u64;
	// bl 0x83126788
	ctx.lr = 0x839A1CD8;
	sub_83126788(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83123778
	ctx.lr = 0x839A1CE8;
	sub_83123778(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e340
	ctx.lr = 0x839A1CF4;
	sub_8314E340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x839A1D04;
	sub_8311BF98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8315b528
	ctx.lr = 0x839A1D14;
	sub_8315B528(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839a1e30
	if (cr6.eq) goto loc_839A1E30;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839a1e34
	if (!cr6.eq) goto loc_839A1E34;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 + 120;
loc_839A1D30:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a1e28
	if (cr6.eq) goto loc_839A1E28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x839a1d30
	if (cr6.lt) goto loc_839A1D30;
loc_839A1D4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A1D50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a1e34
	if (cr6.eq) goto loc_839A1E34;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x839a1e34
	goto loc_839A1E34;
loc_839A1D64:
	// bl 0x8314f578
	ctx.lr = 0x839A1D68;
	sub_8314F578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a1e34
	if (cr6.eq) goto loc_839A1E34;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8311bf98
	ctx.lr = 0x839A1D84;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83123768
	ctx.lr = 0x839A1D90;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8315b528
	ctx.lr = 0x839A1DA4;
	sub_8315B528(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839a1e30
	if (cr6.eq) goto loc_839A1E30;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x839a1e00
	if (cr6.eq) goto loc_839A1E00;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x839a1e34
	if (!cr6.eq) goto loc_839A1E34;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
loc_839A1DC4:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839a1df8
	if (cr6.eq) goto loc_839A1DF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x839a1dc4
	if (cr6.lt) goto loc_839A1DC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A1DE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a1e34
	if (cr6.eq) goto loc_839A1E34;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x839a1e34
	goto loc_839A1E34;
loc_839A1DF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839a1de4
	goto loc_839A1DE4;
loc_839A1E00:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
loc_839A1E08:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839a1e28
	if (cr6.eq) goto loc_839A1E28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x839a1e08
	if (cr6.lt) goto loc_839A1E08;
	// b 0x839a1d4c
	goto loc_839A1D4C;
loc_839A1E28:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839a1d50
	goto loc_839A1D50;
loc_839A1E30:
	// li r31,1
	ctx.r31.s64 = 1;
loc_839A1E34:
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// bge cr6,0x839a1e64
	if (!cr6.lt) goto loc_839A1E64;
	// lwz r11,1812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r31,1208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1208, ctx.r31.u32);
	// stw r25,1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1212, ctx.r25.u32);
	// stw r27,1216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1216, ctx.r27.u32);
loc_839A1E64:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// cmpw cr6,r28,r18
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, xer);
	// blt cr6,0x839a1c4c
	if (cr6.lt) goto loc_839A1C4C;
loc_839A1E74:
	// lwz r30,1812(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,47
	ctx.r5.s64 = 47;
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A1E90;
	sub_831CE980(ctx, base);
	// lbz r5,145(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// lbz r9,146(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x839a1eb4
	if (!cr6.eq) goto loc_839A1EB4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x839a0818
	ctx.lr = 0x839A1EB0;
	sub_839A0818(ctx, base);
	// lwz r30,1812(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1812);
loc_839A1EB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839a1880
	ctx.lr = 0x839A1EC0;
	sub_839A1880(ctx, base);
loc_839A1EC0:
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A1EC8"))) PPC_WEAK_FUNC(sub_839A1EC8);
PPC_FUNC_IMPL(__imp__sub_839A1EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x839A1ED0;
	__savegprlr_19(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x839a1eec
	if (cr6.eq) goto loc_839A1EEC;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x839a2348
	if (!cr6.eq) goto loc_839A2348;
loc_839A1EEC:
	// bl 0x831156e8
	ctx.lr = 0x839A1EF0;
	sub_831156E8(ctx, base);
	// lwz r19,48(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x839A1EF8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r24,r11,5
	ctx.r24.s64 = ctx.r11.s64 + 327680;
	// lis r11,191
	ctx.r11.s64 = 12517376;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r24,r24,14904
	ctx.r24.s64 = ctx.r24.s64 + 14904;
	// lis r20,-31768
	ctx.r20.s64 = -2081947648;
	// li r22,32
	ctx.r22.s64 = 32;
	// ori r21,r11,54572
	ctx.r21.u64 = ctx.r11.u64 | 54572;
loc_839A1F1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83123a08
	ctx.lr = 0x839A1F28;
	sub_83123A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x839A1F38;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 * 460;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a1528
	ctx.lr = 0x839A1F4C;
	sub_839A1528(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A1F50:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831240c8
	ctx.lr = 0x839A1F60;
	sub_831240C8(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a1f7c
	if (!cr6.lt) goto loc_839A1F7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 * 528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r3,1596(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1596, ctx.r3.u8);
loc_839A1F7C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a1f50
	if (cr6.lt) goto loc_839A1F50;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r23,1024(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,1028
	ctx.r10.s64 = ctx.r11.s64 + 1028;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r23.u32);
	// bl 0x83123ad8
	ctx.lr = 0x839A1FA8;
	sub_83123AD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x839A1FB8;
	sub_831CE980(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,1832(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1832);
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r11,r9,532
	ctx.r11.s64 = ctx.r9.s64 * 532;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r25,r8,16,25,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x7F;
	// stb r25,8(r7)
	PPC_STORE_U8(ctx.r7.u32 + 8, ctx.r25.u8);
loc_839A1FD4:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a1ff4
	if (!cr6.lt) goto loc_839A1FF4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,488
	ctx.r10.s64 = ctx.r1.s64 + 488;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x839a1ff8
	goto loc_839A1FF8;
loc_839A1FF4:
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
loc_839A1FF8:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a2030
	if (!cr6.lt) goto loc_839A2030;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r11,r10,532
	ctx.r11.s64 = ctx.r10.s64 * 532;
	// rlwinm r30,r9,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82abfda0
	ctx.lr = 0x839A2024;
	sub_82ABFDA0(ctx, base);
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// b 0x839a2034
	goto loc_839A2034;
loc_839A2030:
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
loc_839A2034:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x839a2060
	if (!cr6.lt) goto loc_839A2060;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mulli r10,r10,532
	ctx.r10.s64 = ctx.r10.s64 * 532;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,3052
	ctx.r3.s64 = ctx.r11.s64 + 3052;
	// bl 0x82abfda0
	ctx.lr = 0x839A2060;
	sub_82ABFDA0(ctx, base);
loc_839A2060:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x839a1fd4
	if (cr6.lt) goto loc_839A1FD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,968
	ctx.r4.s64 = ctx.r1.s64 + 968;
	// li r5,47
	ctx.r5.s64 = 47;
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A208C;
	sub_831CE980(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,968
	ctx.r4.s64 = ctx.r1.s64 + 968;
	// mulli r11,r10,532
	ctx.r11.s64 = ctx.r10.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r3,r11,3532
	ctx.r3.s64 = ctx.r11.s64 + 3532;
	// bl 0x831ce980
	ctx.lr = 0x839A20A8;
	sub_831CE980(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x839a2244
	if (!cr6.gt) goto loc_839A2244;
	// addi r26,r1,1272
	ctx.r26.s64 = ctx.r1.s64 + 1272;
loc_839A20B8:
	// ld r11,23840(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 23840);
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bge cr6,0x839a20d0
	if (!cr6.lt) goto loc_839A20D0;
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_839A20D0:
	// subfc r11,r22,r30
	xer.ca = ctx.r30.u32 >= ctx.r22.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r22.s64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mulli r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 * 44;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,1216(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	// lwz r31,1208(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// lwz r27,1212(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// bl 0x83123be0
	ctx.lr = 0x839A2114;
	sub_83123BE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a2234
	if (cr6.eq) goto loc_839A2234;
	// bl 0x830ff290
	ctx.lr = 0x839A2124;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2128;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// blt cr6,0x839a2174
	if (cr6.lt) goto loc_839A2174;
	// bl 0x830ff290
	ctx.lr = 0x839A2134;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2138;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x839a2174
	if (cr6.gt) goto loc_839A2174;
	// add r3,r19,r21
	ctx.r3.u64 = ctx.r19.u64 + ctx.r21.u64;
	// bl 0x83126788
	ctx.lr = 0x839A2148;
	sub_83126788(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8315b528
	ctx.lr = 0x839A215C;
	sub_8315B528(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839a2200
	if (cr6.eq) goto loc_839A2200;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x839a2204
	if (!cr6.eq) goto loc_839A2204;
loc_839A216C:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x839a2204
	goto loc_839A2204;
loc_839A2174:
	// bl 0x8314f578
	ctx.lr = 0x839A2178;
	sub_8314F578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2204
	if (cr6.eq) goto loc_839A2204;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r28,120
	ctx.r10.s64 = ctx.r28.s64 + 120;
loc_839A2190:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x839a21f8
	if (cr6.eq) goto loc_839A21F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x839a2190
	if (cr6.lt) goto loc_839A2190;
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A21B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2204
	if (cr6.eq) goto loc_839A2204;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83123768
	ctx.lr = 0x839A21C4;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8315b528
	ctx.lr = 0x839A21D8;
	sub_8315B528(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x839a2200
	if (cr6.eq) goto loc_839A2200;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x839a216c
	if (cr6.eq) goto loc_839A216C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x839a2204
	if (!cr6.eq) goto loc_839A2204;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x839a2204
	goto loc_839A2204;
loc_839A21F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x839a21b0
	goto loc_839A21B0;
loc_839A2200:
	// li r31,1
	ctx.r31.s64 = 1;
loc_839A2204:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x839a2234
	if (!cr6.lt) goto loc_839A2234;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r31,1208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1208, ctx.r31.u32);
	// stw r27,1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1212, ctx.r27.u32);
	// stw r28,1216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1216, ctx.r28.u32);
loc_839A2234:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, xer);
	// blt cr6,0x839a20b8
	if (cr6.lt) goto loc_839A20B8;
loc_839A2244:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,47
	ctx.r5.s64 = 47;
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A2260;
	sub_831CE980(ctx, base);
	// lbz r5,145(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// lbz r9,146(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x839a2280
	if (!cr6.eq) goto loc_839A2280;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x839a0818
	ctx.lr = 0x839A2280;
	sub_839A0818(ctx, base);
loc_839A2280:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x839a2318
	if (!cr6.eq) goto loc_839A2318;
	// bl 0x830ff290
	ctx.lr = 0x839A2290;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2294;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x839a22ac
	if (cr6.eq) goto loc_839A22AC;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// ble cr6,0x839a2318
	if (!cr6.gt) goto loc_839A2318;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bgt cr6,0x839a2318
	if (cr6.gt) goto loc_839A2318;
loc_839A22AC:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,47
	ctx.r5.s64 = 47;
	// mulli r11,r30,532
	ctx.r11.s64 = ctx.r30.s64 * 532;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A22C8;
	sub_831CE980(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x839A22DC;
	sub_831CE980(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r6,158(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 158);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x839a8390
	ctx.lr = 0x839A22FC;
	sub_839A8390(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mulli r11,r10,532
	ctx.r11.s64 = ctx.r10.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// bl 0x831ce980
	ctx.lr = 0x839A2318;
	sub_831CE980(ctx, base);
loc_839A2318:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x839a1f1c
	if (cr6.lt) goto loc_839A1F1C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_839A2330:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a1880
	ctx.lr = 0x839A233C;
	sub_839A1880(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x839a2330
	if (cr6.lt) goto loc_839A2330;
loc_839A2348:
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A2350"))) PPC_WEAK_FUNC(sub_839A2350);
PPC_FUNC_IMPL(__imp__sub_839A2350) {
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
	// bl 0x831c4008
	ctx.lr = 0x839A2360;
	sub_831C4008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2380
	if (cr6.eq) goto loc_839A2380;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2370;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x839a2384
	if (!cr6.eq) goto loc_839A2384;
loc_839A2380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839A2384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A2394"))) PPC_WEAK_FUNC(sub_839A2394);
PPC_FUNC_IMPL(__imp__sub_839A2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A2398"))) PPC_WEAK_FUNC(sub_839A2398);
PPC_FUNC_IMPL(__imp__sub_839A2398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x839A23A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A23CC;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,2128
	ctx.r31.s64 = ctx.r11.s64 + 2128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f810
	ctx.lr = 0x839A23E4;
	sub_8399F810(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bne cr6,0x839a2428
	if (!cr6.eq) goto loc_839A2428;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f840
	ctx.lr = 0x839A23FC;
	sub_8399F840(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r3.s32, xer);
	// bne cr6,0x839a2428
	if (!cr6.eq) goto loc_839A2428;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a2428
	if (!cr6.eq) goto loc_839A2428;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f880
	ctx.lr = 0x839A2420;
	sub_8399F880(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_839A2428:
	// bl 0x831c4008
	ctx.lr = 0x839A242C;
	sub_831C4008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a244c
	if (cr6.eq) goto loc_839A244C;
	// bl 0x8399f8b8
	ctx.lr = 0x839A243C;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x839a2450
	if (!cr6.eq) goto loc_839A2450;
loc_839A244C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A2450:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a25dc
	if (cr6.eq) goto loc_839A25DC;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2460;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a25dc
	if (cr6.eq) goto loc_839A25DC;
	// lwz r27,468(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2470;
	sub_8399F8B8(ctx, base);
	// lwz r22,468(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A247C;
	sub_8399F8B8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A2484;
	sub_8399F950(ctx, base);
	// lwz r22,468(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8399f8b8
	ctx.lr = 0x839A248C;
	sub_8399F8B8(ctx, base);
	// mulli r11,r27,532
	ctx.r11.s64 = ctx.r27.s64 * 532;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399ee20
	ctx.lr = 0x839A24A4;
	sub_8399EE20(ctx, base);
	// lwz r27,468(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8399f8b8
	ctx.lr = 0x839A24AC;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8399fe30
	ctx.lr = 0x839A24BC;
	sub_8399FE30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x831c4068
	ctx.lr = 0x839A24C8;
	sub_831C4068(ctx, base);
	// mulli r11,r22,528
	ctx.r11.s64 = ctx.r22.s64 * 528;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x839a0478
	ctx.lr = 0x839A24E0;
	sub_839A0478(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f3d0
	ctx.lr = 0x839A24EC;
	sub_8399F3D0(ctx, base);
	// lis r11,-31768
	ctx.r11.s64 = -2081947648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23976
	ctx.r4.s64 = ctx.r11.s64 + 23976;
	// bl 0x825a2298
	ctx.lr = 0x839A24FC;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a25dc
	if (cr6.eq) goto loc_839A25DC;
	// bl 0x831156e8
	ctx.lr = 0x839A250C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a25dc
	if (cr6.eq) goto loc_839A25DC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825832d8
	ctx.lr = 0x839A251C;
	sub_825832D8(ctx, base);
	// lwz r27,468(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2528;
	sub_8399F8B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8399f950
	ctx.lr = 0x839A2530;
	sub_8399F950(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x839a25dc
	if (cr6.eq) goto loc_839A25DC;
	// bl 0x830ff290
	ctx.lr = 0x839A2540;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2544;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x839a2580
	if (cr6.eq) goto loc_839A2580;
	// bl 0x839a9a80
	ctx.lr = 0x839A2550;
	sub_839A9A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a2580
	if (!cr6.eq) goto loc_839A2580;
	// bl 0x830ff290
	ctx.lr = 0x839A2560;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2564;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x839a25dc
	if (!cr6.eq) goto loc_839A25DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831a3870
	ctx.lr = 0x839A2578;
	sub_831A3870(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x839a25b8
	goto loc_839A25B8;
loc_839A2580:
	// bl 0x831156e8
	ctx.lr = 0x839A2584;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,468
	ctx.r5.s64 = ctx.r1.s64 + 468;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r26,r10,5
	ctx.r26.s64 = ctx.r10.s64 + 327680;
	// addi r26,r26,14904
	ctx.r26.s64 = ctx.r26.s64 + 14904;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831243b0
	ctx.lr = 0x839A25A8;
	sub_831243B0(ctx, base);
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83124088
	ctx.lr = 0x839A25B4;
	sub_83124088(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_839A25B8:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c5180
	ctx.lr = 0x839A25D8;
	sub_831C5180(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
loc_839A25DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f810
	ctx.lr = 0x839A25E8;
	sub_8399F810(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// beq cr6,0x839a2614
	if (cr6.eq) goto loc_839A2614;
	// li r29,0
	ctx.r29.s64 = 0;
loc_839A25F4:
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f820
	ctx.lr = 0x839A2608;
	sub_8399F820(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x839a25f4
	if (cr6.lt) goto loc_839A25F4;
loc_839A2614:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f800
	ctx.lr = 0x839A2624;
	sub_8399F800(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f820
	ctx.lr = 0x839A2638;
	sub_8399F820(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8399f860
	ctx.lr = 0x839A264C;
	sub_8399F860(ctx, base);
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2654;
	sub_8399F8B8(ctx, base);
	// mulli r11,r30,460
	ctx.r11.s64 = ctx.r30.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x839a1338
	ctx.lr = 0x839A2668;
	sub_839A1338(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A2674"))) PPC_WEAK_FUNC(sub_839A2674);
PPC_FUNC_IMPL(__imp__sub_839A2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A2678"))) PPC_WEAK_FUNC(sub_839A2678);
PPC_FUNC_IMPL(__imp__sub_839A2678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x839A2680;
	__savegprlr_19(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2694;
	sub_8399F8B8(ctx, base);
	// mulli r11,r26,528
	ctx.r11.s64 = ctx.r26.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x839A26AC;
	sub_831CE980(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A26B0;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8399fe30
	ctx.lr = 0x839A26C0;
	sub_8399FE30(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A26C4;
	sub_8399F8B8(ctx, base);
	// mulli r31,r26,460
	ctx.r31.s64 = ctx.r26.s64 * 460;
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8399f6e8
	ctx.lr = 0x839A26DC;
	sub_8399F6E8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A26E0;
	sub_8399F8B8(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f6e8
	ctx.lr = 0x839A26F4;
	sub_8399F6E8(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r24,256(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x839aa158
	ctx.lr = 0x839A270C;
	sub_839AA158(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x839aa158
	ctx.lr = 0x839A2720;
	sub_839AA158(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x839a03a8
	ctx.lr = 0x839A2730;
	sub_839A03A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x839a03a8
	ctx.lr = 0x839A2740;
	sub_839A03A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2748;
	sub_8399F8B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8399f988
	ctx.lr = 0x839A2750;
	sub_8399F988(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_839A2768:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x839a2768
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_839A2768;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_839A277C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa158
	ctx.lr = 0x839A278C;
	sub_839AA158(ctx, base);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
loc_839A2798:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x839a27e0
	if (cr6.lt) goto loc_839A27E0;
	// beq cr6,0x839a27c8
	if (cr6.eq) goto loc_839A27C8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x839a27f8
	if (!cr6.lt) goto loc_839A27F8;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a27f8
	if (!cr6.lt) goto loc_839A27F8;
	// addi r8,r1,562
	ctx.r8.s64 = ctx.r1.s64 + 562;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// b 0x839a27fc
	goto loc_839A27FC;
loc_839A27C8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a27f8
	if (!cr6.lt) goto loc_839A27F8;
	// addi r8,r1,529
	ctx.r8.s64 = ctx.r1.s64 + 529;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// b 0x839a27fc
	goto loc_839A27FC;
loc_839A27E0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a27f8
	if (!cr6.lt) goto loc_839A27F8;
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// b 0x839a27fc
	goto loc_839A27FC;
loc_839A27F8:
	// li r11,13
	ctx.r11.s64 = 13;
loc_839A27FC:
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u32);
	// blt cr6,0x839a2798
	if (cr6.lt) goto loc_839A2798;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,33
	cr6.compare<int32_t>(ctx.r30.s32, 33, xer);
	// blt cr6,0x839a277c
	if (cr6.lt) goto loc_839A277C;
	// cmpwi cr6,r24,255
	cr6.compare<int32_t>(ctx.r24.s32, 255, xer);
	// bne cr6,0x839a2878
	if (!cr6.eq) goto loc_839A2878;
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// beq cr6,0x839a2c14
	if (cr6.eq) goto loc_839A2C14;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x839aa018
	ctx.lr = 0x839A2850;
	sub_839AA018(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// beq cr6,0x839a2c14
	if (cr6.eq) goto loc_839A2C14;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A2878:
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x839a2910
	if (!cr6.eq) goto loc_839A2910;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x839a2910
	if (!cr6.eq) goto loc_839A2910;
	// lbz r10,193(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 193);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a28d8
	if (cr6.eq) goto loc_839A28D8;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stwx r9,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A28D8:
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// lbz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2b00
	if (cr6.eq) goto loc_839A2B00;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a2ad4
	if (cr6.eq) goto loc_839A2AD4;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// stwx r21,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r21.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A2910:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x839a29e8
	if (!cr6.eq) goto loc_839A29E8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839A292C;
	sub_839A0368(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2930;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839A293C;
	sub_831F8200(ctx, base);
	// mulli r11,r26,532
	ctx.r11.s64 = ctx.r26.s64 * 532;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea30
	ctx.lr = 0x839A2950;
	sub_8399EA30(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// lbz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a29b8
	if (cr6.eq) goto loc_839A29B8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a298c
	if (cr6.eq) goto loc_839A298C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// bl 0x825832e0
	ctx.lr = 0x839A2984;
	sub_825832E0(ctx, base);
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x839a2c0c
	goto loc_839A2C0C;
loc_839A298C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a29b8
	if (cr6.eq) goto loc_839A29B8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a29b0
	if (!cr6.eq) goto loc_839A29B0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A29B0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a2c14
	if (!cr6.eq) goto loc_839A2C14;
loc_839A29B8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2c14
	if (cr6.eq) goto loc_839A2C14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839A29CC;
	sub_831F8200(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839A29E0;
	sub_825832E0(ctx, base);
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x839a2c0c
	goto loc_839A2C0C;
loc_839A29E8:
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x839a2ab8
	if (!cr6.eq) goto loc_839A2AB8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839A29FC;
	sub_839A0368(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2A00;
	sub_8399F8B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839A2A0C;
	sub_831F8200(ctx, base);
	// mulli r11,r26,532
	ctx.r11.s64 = ctx.r26.s64 * 532;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea30
	ctx.lr = 0x839A2A20;
	sub_8399EA30(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// lbz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2a9c
	if (cr6.eq) goto loc_839A2A9C;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a2a5c
	if (cr6.eq) goto loc_839A2A5C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r21,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r21.u32);
	// bl 0x825832e0
	ctx.lr = 0x839A2A54;
	sub_825832E0(ctx, base);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x839a2c0c
	goto loc_839A2C0C;
loc_839A2A5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2a9c
	if (cr6.eq) goto loc_839A2A9C;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a2a94
	if (!cr6.eq) goto loc_839A2A94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839A2A78;
	sub_831F8200(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839A2A8C;
	sub_825832E0(ctx, base);
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x839a2c0c
	goto loc_839A2C0C;
loc_839A2A94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a2c14
	if (!cr6.eq) goto loc_839A2C14;
loc_839A2A9C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2c14
	if (cr6.eq) goto loc_839A2C14;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r21,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r21.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A2AB8:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x839a2b1c
	if (!cr6.eq) goto loc_839A2B1C;
	// bl 0x839a0368
	ctx.lr = 0x839A2ACC;
	sub_839A0368(ctx, base);
	// lbz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
loc_839A2AD4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2b00
	if (cr6.eq) goto loc_839A2B00;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a2af8
	if (!cr6.eq) goto loc_839A2AF8;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A2AF8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a2c14
	if (!cr6.eq) goto loc_839A2C14;
loc_839A2B00:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2c14
	if (cr6.eq) goto loc_839A2C14;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r21,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r21.u32);
	// b 0x839a2c14
	goto loc_839A2C14;
loc_839A2B1C:
	// bl 0x839a0368
	ctx.lr = 0x839A2B20;
	sub_839A0368(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839A2B30;
	sub_839A0368(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2B34;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mulli r31,r26,532
	ctx.r31.s64 = ctx.r26.s64 * 532;
	// bl 0x831f8200
	ctx.lr = 0x839A2B44;
	sub_831F8200(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea30
	ctx.lr = 0x839A2B54;
	sub_8399EA30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2B5C;
	sub_8399F8B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839A2B68;
	sub_831F8200(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea30
	ctx.lr = 0x839A2B78;
	sub_8399EA30(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// lbz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2be0
	if (cr6.eq) goto loc_839A2BE0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x839a2ba4
	if (cr6.eq) goto loc_839A2BA4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839A2BA0;
	sub_825832E0(ctx, base);
	// b 0x839a2bf4
	goto loc_839A2BF4;
loc_839A2BA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2be0
	if (cr6.eq) goto loc_839A2BE0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x839a2bd8
	if (!cr6.eq) goto loc_839A2BD8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e0
	ctx.lr = 0x839A2BC0;
	sub_825832E0(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f8200
	ctx.lr = 0x839A2BD4;
	sub_831F8200(ctx, base);
	// b 0x839a2c08
	goto loc_839A2C08;
loc_839A2BD8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839a2c14
	if (!cr6.eq) goto loc_839A2C14;
loc_839A2BE0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2c14
	if (cr6.eq) goto loc_839A2C14;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831f8200
	ctx.lr = 0x839A2BF4;
	sub_831F8200(ctx, base);
loc_839A2BF4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825832e0
	ctx.lr = 0x839A2C08;
	sub_825832E0(ctx, base);
loc_839A2C08:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_839A2C0C:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
loc_839A2C14:
	// stw r20,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r20.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r20,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r20.u32);
	// stw r20,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r20.u32);
	// bl 0x831c44a0
	ctx.lr = 0x839A2C28;
	sub_831C44A0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x839A2C2C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2C30;
	sub_830FFAA8(ctx, base);
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x839a2d60
	if (!cr6.eq) goto loc_839A2D60;
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2C4C;
	sub_8399F8B8(ctx, base);
	// mulli r30,r26,532
	ctx.r30.s64 = ctx.r26.s64 * 532;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea70
	ctx.lr = 0x839A2C5C;
	sub_8399EA70(ctx, base);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,255
	ctx.r29.s64 = 255;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_839A2C74:
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x839a2cb0
	if (cr6.eq) goto loc_839A2CB0;
	// cmpw cr6,r28,r5
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, xer);
	// bne cr6,0x839a2c8c
	if (!cr6.eq) goto loc_839A2C8C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_839A2C8C:
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x839a0478
	ctx.lr = 0x839A2C98;
	sub_839A0478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399f3d0
	ctx.lr = 0x839A2CA4;
	sub_8399F3D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83546fd8
	ctx.lr = 0x839A2CB0;
	sub_83546FD8(ctx, base);
loc_839A2CB0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x839a2c74
	if (cr6.lt) goto loc_839A2C74;
	// bl 0x8399f8b8
	ctx.lr = 0x839A2CD0;
	sub_8399F8B8(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea70
	ctx.lr = 0x839A2CDC;
	sub_8399EA70(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x831c47e8
	ctx.lr = 0x839A2CF0;
	sub_831C47E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// bl 0x82eb9458
	ctx.lr = 0x839A2D10;
	sub_82EB9458(ctx, base);
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a2d30
	if (cr6.eq) goto loc_839A2D30;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825952b8
	ctx.lr = 0x839A2D30;
	sub_825952B8(ctx, base);
loc_839A2D30:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r20,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r20.u32);
	// stw r20,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r20.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r20,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r20.u32);
	// beq cr6,0x839a2d54
	if (cr6.eq) goto loc_839A2D54;
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825952b8
	ctx.lr = 0x839A2D54;
	sub_825952B8(ctx, base);
loc_839A2D54:
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
loc_839A2D60:
	// li r24,33
	ctx.r24.s64 = 33;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r25,r1,352
	ctx.r25.s64 = ctx.r1.s64 + 352;
loc_839A2D6C:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_839A2D78:
	// bl 0x830ff290
	ctx.lr = 0x839A2D7C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2D80;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x839a2db0
	if (!cr6.eq) goto loc_839A2DB0;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839a2398
	ctx.lr = 0x839A2DA8;
	sub_839A2398(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x839a2e0c
	goto loc_839A2E0C;
loc_839A2DB0:
	// stw r20,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r20.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r20,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r20.u32);
	// stw r20,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r20.u32);
	// bl 0x831c44a0
	ctx.lr = 0x839A2DC4;
	sub_831C44A0(ctx, base);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839a2398
	ctx.lr = 0x839A2DE4;
	sub_839A2398(ctx, base);
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a2e00
	if (cr6.eq) goto loc_839A2E00;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825952b8
	ctx.lr = 0x839A2E00;
	sub_825952B8(ctx, base);
loc_839A2E00:
	// stw r20,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r20.u32);
	// stw r20,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r20.u32);
	// stw r20,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r20.u32);
loc_839A2E0C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r19,r28,r19
	ctx.r19.u64 = ctx.r28.u64 + ctx.r19.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x839a2d78
	if (cr6.lt) goto loc_839A2D78;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839A2E2C;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a2e4c
	if (cr6.eq) goto loc_839A2E4C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x839a2d6c
	if (cr6.lt) goto loc_839A2D6C;
	// b 0x839a2e50
	goto loc_839A2E50;
loc_839A2E4C:
	// li r24,11
	ctx.r24.s64 = 11;
loc_839A2E50:
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// divwu r31,r19,r24
	ctx.r31.u32 = PPCDivide(ctx.r19.u32, ctx.r24.u32);
	// twllei r24,0
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a2e70
	if (cr6.eq) goto loc_839A2E70;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x825952b8
	ctx.lr = 0x839A2E70;
	sub_825952B8(ctx, base);
loc_839A2E70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A2E7C"))) PPC_WEAK_FUNC(sub_839A2E7C);
PPC_FUNC_IMPL(__imp__sub_839A2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A2E80"))) PPC_WEAK_FUNC(sub_839A2E80);
PPC_FUNC_IMPL(__imp__sub_839A2E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x839A2E88;
	__savegprlr_19(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r19,33
	ctx.r19.s64 = 33;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// bl 0x831c44a0
	ctx.lr = 0x839A2EC0;
	sub_831C44A0(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r28,255
	ctx.r28.s64 = 255;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// bl 0x8399f8b8
	ctx.lr = 0x839A2EE0;
	sub_8399F8B8(ctx, base);
	// mulli r11,r25,528
	ctx.r11.s64 = ctx.r25.s64 * 528;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r26,r11,1072
	ctx.r26.s64 = ctx.r11.s64 + 1072;
loc_839A2EF0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839aa158
	ctx.lr = 0x839A2F00;
	sub_839AA158(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x835977d8
	ctx.lr = 0x839A2F10;
	sub_835977D8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x839a2f4c
	if (cr6.eq) goto loc_839A2F4C;
	// cmpw cr6,r27,r5
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r5.s32, xer);
	// bne cr6,0x839a2f28
	if (!cr6.eq) goto loc_839A2F28;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_839A2F28:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x839a0478
	ctx.lr = 0x839A2F34;
	sub_839A0478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8399f3d0
	ctx.lr = 0x839A2F40;
	sub_8399F3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83546fd8
	ctx.lr = 0x839A2F4C;
	sub_83546FD8(ctx, base);
loc_839A2F4C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x839a2ef0
	if (cr6.lt) goto loc_839A2EF0;
	// bl 0x830ff290
	ctx.lr = 0x839A2F5C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A2F60;
	sub_830FFAA8(ctx, base);
	// li r20,2
	ctx.r20.s64 = 2;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x839a2fcc
	if (!cr6.eq) goto loc_839A2FCC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831c47e8
	ctx.lr = 0x839A2F80;
	sub_831C47E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x82eb9458
	ctx.lr = 0x839A2FA0;
	sub_82EB9458(ctx, base);
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a2fc0
	if (cr6.eq) goto loc_839A2FC0;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x839A2FC0;
	sub_825952B8(ctx, base);
loc_839A2FC0:
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
loc_839A2FCC:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a2fe4
	if (cr6.eq) goto loc_839A2FE4;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x839A2FE4;
	sub_825952B8(ctx, base);
loc_839A2FE4:
	// lwz r22,208(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
loc_839A2FF8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// clrlwi r26,r27,24
	ctx.r26.u64 = ctx.r27.u32 & 0xFF;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_839A3004:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// blt cr6,0x839a304c
	if (cr6.lt) goto loc_839A304C;
	// beq cr6,0x839a3034
	if (cr6.eq) goto loc_839A3034;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// bge cr6,0x839a3060
	if (!cr6.lt) goto loc_839A3060;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a3060
	if (!cr6.lt) goto loc_839A3060;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r31,66(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// b 0x839a3064
	goto loc_839A3064;
loc_839A3034:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a3060
	if (!cr6.lt) goto loc_839A3060;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r31,33(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x839a3064
	goto loc_839A3064;
loc_839A304C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a3060
	if (!cr6.lt) goto loc_839A3060;
	// lbzx r31,r11,r23
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// b 0x839a3064
	goto loc_839A3064;
loc_839A3060:
	// li r31,13
	ctx.r31.s64 = 13;
loc_839A3064:
	// bl 0x830ff290
	ctx.lr = 0x839A3068;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x839A306C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x839a309c
	if (!cr6.eq) goto loc_839A309C;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x839a2398
	ctx.lr = 0x839A3094;
	sub_839A2398(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x839a30f8
	goto loc_839A30F8;
loc_839A309C:
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// bl 0x831c44a0
	ctx.lr = 0x839A30B0;
	sub_831C44A0(ctx, base);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x839a2398
	ctx.lr = 0x839A30D0;
	sub_839A2398(ctx, base);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a30ec
	if (cr6.eq) goto loc_839A30EC;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x839A30EC;
	sub_825952B8(ctx, base);
loc_839A30EC:
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
loc_839A30F8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r21,r31,r21
	ctx.r21.u64 = ctx.r31.u64 + ctx.r21.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x839a3004
	if (cr6.lt) goto loc_839A3004;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x839aa9a8
	ctx.lr = 0x839A3114;
	sub_839AA9A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a3130
	if (cr6.eq) goto loc_839A3130;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// blt cr6,0x839a2ff8
	if (cr6.lt) goto loc_839A2FF8;
	// b 0x839a3134
	goto loc_839A3134;
loc_839A3130:
	// li r19,11
	ctx.r19.s64 = 11;
loc_839A3134:
	// divwu r31,r21,r19
	ctx.r31.u32 = PPCDivide(ctx.r21.u32, ctx.r19.u32);
	// twllei r19,0
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x839a3154
	if (cr6.eq) goto loc_839A3154;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x839A3154;
	sub_825952B8(ctx, base);
loc_839A3154:
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a316c
	if (cr6.eq) goto loc_839A316C;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x839A316C;
	sub_825952B8(ctx, base);
loc_839A316C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A3178"))) PPC_WEAK_FUNC(sub_839A3178);
PPC_FUNC_IMPL(__imp__sub_839A3178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x839A3180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A3194;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,532
	ctx.r11.s64 = ctx.r29.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8399ea70
	ctx.lr = 0x839A31A4;
	sub_8399EA70(ctx, base);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x839a3204
	if (cr6.gt) goto loc_839A3204;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x839a31d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A31D4;
	// bdzf 4*cr6+eq,0x839a31dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A31DC;
	// bdzf 4*cr6+eq,0x839a31e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A31E0;
	// bdzf 4*cr6+eq,0x839a31e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_839A31E0;
	// bne cr6,0x839a31e8
	if (!cr6.eq) goto loc_839A31E8;
loc_839A31D4:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x839a3204
	goto loc_839A3204;
loc_839A31DC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_839A31E0:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x839a3204
	goto loc_839A3204;
loc_839A31E8:
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8399f8b8
	ctx.lr = 0x839A31F4;
	sub_8399F8B8(ctx, base);
	// mulli r11,r29,528
	ctx.r11.s64 = ctx.r29.s64 * 528;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// bl 0x82dab740
	ctx.lr = 0x839A3204;
	sub_82DAB740(ctx, base);
loc_839A3204:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a2e80
	ctx.lr = 0x839A3220;
	sub_839A2E80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A3228"))) PPC_WEAK_FUNC(sub_839A3228);
PPC_FUNC_IMPL(__imp__sub_839A3228) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A3248;
	sub_8399F8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399fe30
	ctx.lr = 0x839A3258;
	sub_8399FE30(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839a3178
	ctx.lr = 0x839A3268;
	sub_839A3178(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_839A3280"))) PPC_WEAK_FUNC(sub_839A3280);
PPC_FUNC_IMPL(__imp__sub_839A3280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A3288;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r9,r10,30872
	ctx.r9.s64 = ctx.r10.s64 + 30872;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x839A32C8;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x839a32f0
	if (cr6.eq) goto loc_839A32F0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x839A32E8;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_839A32F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A32F8"))) PPC_WEAK_FUNC(sub_839A32F8);
PPC_FUNC_IMPL(__imp__sub_839A32F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x839A3300;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,25672
	ctx.r10.s64 = ctx.r11.s64 + 25672;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,168
	ctx.r8.s64 = 168;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x839A3344;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x839a336c
	if (cr6.eq) goto loc_839A336C;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x839A3364;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_839A336C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A3374"))) PPC_WEAK_FUNC(sub_839A3374);
PPC_FUNC_IMPL(__imp__sub_839A3374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A3378"))) PPC_WEAK_FUNC(sub_839A3378);
PPC_FUNC_IMPL(__imp__sub_839A3378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x839a33e4
	if (!cr6.gt) goto loc_839A33E4;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,25672
	ctx.r8.s64 = ctx.r10.s64 + 25672;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,168
	ctx.r6.s64 = 168;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x839A33D4;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_839A33E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A33F8"))) PPC_WEAK_FUNC(sub_839A33F8);
PPC_FUNC_IMPL(__imp__sub_839A33F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r4,r10,30872
	ctx.r4.s64 = ctx.r10.s64 + 30872;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8247b530
	ctx.lr = 0x839A346C;
	sub_8247B530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A3484"))) PPC_WEAK_FUNC(sub_839A3484);
PPC_FUNC_IMPL(__imp__sub_839A3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A3488"))) PPC_WEAK_FUNC(sub_839A3488);
PPC_FUNC_IMPL(__imp__sub_839A3488) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824baf50
	ctx.lr = 0x839A34A8;
	sub_824BAF50(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x839a33f8
	ctx.lr = 0x839A34B4;
	sub_839A33F8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x824baf50
	ctx.lr = 0x839A34C0;
	sub_824BAF50(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// bl 0x839a33f8
	ctx.lr = 0x839A34CC;
	sub_839A33F8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// bl 0x824baf50
	ctx.lr = 0x839A34D8;
	sub_824BAF50(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// bl 0x839a33f8
	ctx.lr = 0x839A34E4;
	sub_839A33F8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// bl 0x824baf50
	ctx.lr = 0x839A34F0;
	sub_824BAF50(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// bl 0x824baf50
	ctx.lr = 0x839A34FC;
	sub_824BAF50(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// bl 0x824baf50
	ctx.lr = 0x839A3508;
	sub_824BAF50(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x839a33f8
	ctx.lr = 0x839A351C;
	sub_839A33F8(ctx, base);
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

__attribute__((alias("__imp__sub_839A3538"))) PPC_WEAK_FUNC(sub_839A3538);
PPC_FUNC_IMPL(__imp__sub_839A3538) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// std r30,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x839A3568;
	sub_82423930(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82de2070
	ctx.lr = 0x839A3580;
	sub_82DE2070(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82423930
	ctx.lr = 0x839A3598;
	sub_82423930(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82de2070
	ctx.lr = 0x839A35B0;
	sub_82DE2070(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82423930
	ctx.lr = 0x839A35C8;
	sub_82423930(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82de2070
	ctx.lr = 0x839A35E0;
	sub_82DE2070(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82423930
	ctx.lr = 0x839A35F8;
	sub_82423930(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82423930
	ctx.lr = 0x839A3610;
	sub_82423930(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82423930
	ctx.lr = 0x839A3628;
	sub_82423930(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// std r30,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r30.u64);
	// bl 0x82de2070
	ctx.lr = 0x839A3644;
	sub_82DE2070(ctx, base);
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

__attribute__((alias("__imp__sub_839A3660"))) PPC_WEAK_FUNC(sub_839A3660);
PPC_FUNC_IMPL(__imp__sub_839A3660) {
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
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x839a3280
	ctx.lr = 0x839A367C;
	sub_839A3280(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x824238b8
	ctx.lr = 0x839A3684;
	sub_824238B8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x824238b8
	ctx.lr = 0x839A368C;
	sub_824238B8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824238b8
	ctx.lr = 0x839A3694;
	sub_824238B8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x839a3280
	ctx.lr = 0x839A369C;
	sub_839A3280(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x839A36A4;
	sub_824238B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x839a3280
	ctx.lr = 0x839A36AC;
	sub_839A3280(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x839A36B4;
	sub_824238B8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x839a3280
	ctx.lr = 0x839A36BC;
	sub_839A3280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824238b8
	ctx.lr = 0x839A36C4;
	sub_824238B8(ctx, base);
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

__attribute__((alias("__imp__sub_839A36D8"))) PPC_WEAK_FUNC(sub_839A36D8);
PPC_FUNC_IMPL(__imp__sub_839A36D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839A36E0;
	__savegprlr_21(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8399f8b8
	ctx.lr = 0x839A36F0;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a3e78
	if (cr6.eq) goto loc_839A3E78;
	// bl 0x8399f8b8
	ctx.lr = 0x839A36FC;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a3e78
	if (cr6.eq) goto loc_839A3E78;
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x839a3728
	if (!cr6.eq) goto loc_839A3728;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_839A3728:
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lwz r5,488(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// addi r28,r10,25584
	ctx.r28.s64 = ctx.r10.s64 + 25584;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r28,-16
	ctx.r6.s64 = ctx.r28.s64 + -16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x839A3748;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839a3758
	if (!cr6.eq) goto loc_839A3758;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x839a3780
	goto loc_839A3780;
loc_839A3758:
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// addi r6,r28,-8
	ctx.r6.s64 = ctx.r28.s64 + -8;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,488(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// bl 0x827a8810
	ctx.lr = 0x839A3774;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x839a3e78
	if (!cr6.eq) goto loc_839A3E78;
	// li r31,1
	ctx.r31.s64 = 1;
loc_839A3780:
	// mulli r22,r31,532
	ctx.r22.s64 = ctx.r31.s64 * 532;
	// bl 0x8399f8b8
	ctx.lr = 0x839A3788;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mulli r21,r31,528
	ctx.r21.s64 = ctx.r31.s64 * 528;
	// addi r24,r11,8
	ctx.r24.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A3798;
	sub_8399F8B8(ctx, base);
	// add r11,r3,r21
	ctx.r11.u64 = ctx.r3.u64 + ctx.r21.u64;
	// addi r23,r11,1072
	ctx.r23.s64 = ctx.r11.s64 + 1072;
	// bl 0x8399f8b8
	ctx.lr = 0x839A37A4;
	sub_8399F8B8(ctx, base);
	// lwzx r10,r26,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// lwz r9,500(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r4,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f718
	ctx.lr = 0x839A37C4;
	sub_8399F718(ctx, base);
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,360
	ctx.r29.s64 = ctx.r11.s64 + 360;
	// lwz r31,368(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
loc_839A37D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x839a386c
	if (cr6.eq) goto loc_839A386C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x839a0368
	ctx.lr = 0x839A3804;
	sub_839A0368(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x827a8810
	ctx.lr = 0x839A381C;
	sub_827A8810(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8399eea0
	ctx.lr = 0x839A383C;
	sub_8399EEA0(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x839a0328
	ctx.lr = 0x839A3854;
	sub_839A0328(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x839a37d4
	if (cr6.lt) goto loc_839A37D4;
loc_839A386C:
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r11,376
	ctx.r27.s64 = ctx.r11.s64 + 376;
	// lwz r30,384(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
loc_839A3884:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mulli r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 * 168;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x839a3c88
	if (cr6.eq) goto loc_839A3C88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8399edb0
	ctx.lr = 0x839A38AC;
	sub_8399EDB0(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// li r8,0
	ctx.r8.s64 = 0;
loc_839A38B4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,-32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x839a38f8
	if (cr6.eq) goto loc_839A38F8;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a38e4
	if (!cr6.lt) goto loc_839A38E4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A38E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// blt cr6,0x839a38b4
	if (cr6.lt) goto loc_839A38B4;
loc_839A38F8:
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A3900:
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lwz r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a395c
	if (cr6.eq) goto loc_839A395C;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a3948
	if (!cr6.lt) goto loc_839A3948;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,155
	ctx.r8.s64 = ctx.r1.s64 + 155;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
loc_839A3948:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a3900
	if (cr6.lt) goto loc_839A3900;
loc_839A395C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
loc_839A3964:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x839a39a8
	if (cr6.eq) goto loc_839A39A8;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a3994
	if (!cr6.lt) goto loc_839A3994;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,177
	ctx.r8.s64 = ctx.r1.s64 + 177;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3994:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// blt cr6,0x839a3964
	if (cr6.lt) goto loc_839A3964;
loc_839A39A8:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A39B0:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3a0c
	if (cr6.eq) goto loc_839A3A0C;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a39f8
	if (!cr6.lt) goto loc_839A39F8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,188
	ctx.r8.s64 = ctx.r1.s64 + 188;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
loc_839A39F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a39b0
	if (cr6.lt) goto loc_839A39B0;
loc_839A3A0C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
loc_839A3A14:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3a58
	if (cr6.eq) goto loc_839A3A58;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a3a44
	if (!cr6.lt) goto loc_839A3A44;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,210
	ctx.r8.s64 = ctx.r1.s64 + 210;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3A44:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// blt cr6,0x839a3a14
	if (cr6.lt) goto loc_839A3A14;
loc_839A3A58:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A3A60:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3abc
	if (cr6.eq) goto loc_839A3ABC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a3aa8
	if (!cr6.lt) goto loc_839A3AA8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,221
	ctx.r8.s64 = ctx.r1.s64 + 221;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r6,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r6.u8);
loc_839A3AA8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a3a60
	if (cr6.lt) goto loc_839A3A60;
loc_839A3ABC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
loc_839A3AC4:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3b08
	if (cr6.eq) goto loc_839A3B08;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bge cr6,0x839a3af4
	if (!cr6.lt) goto loc_839A3AF4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,243
	ctx.r8.s64 = ctx.r1.s64 + 243;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3AF4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x839a3ac4
	if (cr6.lt) goto loc_839A3AC4;
loc_839A3B08:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_839A3B10:
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a3b80
	if (cr6.eq) goto loc_839A3B80;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r9,11
	ctx.r9.s64 = 11;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x839a3b48
	if (cr6.eq) goto loc_839A3B48;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x839a3b4c
	if (!cr6.eq) goto loc_839A3B4C;
loc_839A3B48:
	// li r9,4
	ctx.r9.s64 = 4;
loc_839A3B4C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x839a3b6c
	if (!cr6.gt) goto loc_839A3B6C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bge cr6,0x839a3b6c
	if (!cr6.lt) goto loc_839A3B6C;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
loc_839A3B6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x839a3b10
	if (cr6.lt) goto loc_839A3B10;
loc_839A3B80:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
loc_839A3B88:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3bcc
	if (cr6.eq) goto loc_839A3BCC;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x839a3bb8
	if (!cr6.lt) goto loc_839A3BB8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,289
	ctx.r8.s64 = ctx.r1.s64 + 289;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3BB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// blt cr6,0x839a3b88
	if (cr6.lt) goto loc_839A3B88;
loc_839A3BCC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r11.u8);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
loc_839A3BE0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_839A3BE4:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x839a3c4c
	if (cr6.eq) goto loc_839A3C4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r28,r10,24,0,7
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r28.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// bge cr6,0x839a3c3c
	if (!cr6.lt) goto loc_839A3C3C;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x839a3c3c
	if (cr6.lt) goto loc_839A3C3C;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bge cr6,0x839a3c3c
	if (!cr6.lt) goto loc_839A3C3C;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r4,r5
	PPC_STORE_U64(ctx.r4.u32 + ctx.r5.u32, ctx.r9.u64);
loc_839A3C3C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// blt cr6,0x839a3be4
	if (cr6.lt) goto loc_839A3BE4;
loc_839A3C4C:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// blt cr6,0x839a3be0
	if (cr6.lt) goto loc_839A3BE0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8399ed80
	ctx.lr = 0x839A3C6C;
	sub_8399ED80(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x839a3884
	if (cr6.lt) goto loc_839A3884;
loc_839A3C88:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8399ee20
	ctx.lr = 0x839A3C94;
	sub_8399EE20(ctx, base);
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_839A3CA4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a3d78
	if (cr6.eq) goto loc_839A3D78;
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// bge cr6,0x839a3cd0
	if (!cr6.lt) goto loc_839A3CD0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stbx r9,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3CD0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a3d78
	if (cr6.eq) goto loc_839A3D78;
	// addi r6,r7,3
	ctx.r6.s64 = ctx.r7.s64 + 3;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x839a3d08
	if (!cr6.lt) goto loc_839A3D08;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// stbx r9,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3D08:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a3d78
	if (cr6.eq) goto loc_839A3D78;
	// cmplwi cr6,r7,30
	cr6.compare<uint32_t>(ctx.r7.u32, 30, xer);
	// bge cr6,0x839a3d38
	if (!cr6.lt) goto loc_839A3D38;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,98
	ctx.r8.s64 = ctx.r1.s64 + 98;
	// stbx r9,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3D38:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x839a3d78
	if (cr6.eq) goto loc_839A3D78;
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// bge cr6,0x839a3d68
	if (!cr6.lt) goto loc_839A3D68;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,99
	ctx.r8.s64 = ctx.r1.s64 + 99;
	// stbx r9,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u8);
loc_839A3D68:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r7,32
	cr6.compare<int32_t>(ctx.r7.s32, 32, xer);
	// blt cr6,0x839a3ca4
	if (cr6.lt) goto loc_839A3CA4;
loc_839A3D78:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
loc_839A3D84:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3dc4
	if (cr6.eq) goto loc_839A3DC4;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r3,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r3.u8);
	// cmplwi cr6,r6,6
	cr6.compare<uint32_t>(ctx.r6.u32, 6, xer);
	// blt cr6,0x839a3d84
	if (cr6.lt) goto loc_839A3D84;
loc_839A3DC4:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r10,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r10.u8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_839A3DD8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x839a3e18
	if (cr6.eq) goto loc_839A3E18;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r1,134
	ctx.r5.s64 = ctx.r1.s64 + 134;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r3,r8,r5
	PPC_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r3.u8);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// blt cr6,0x839a3dd8
	if (cr6.lt) goto loc_839A3DD8;
loc_839A3E18:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r10,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r10.u8);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stb r8,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r8.u8);
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stb r6,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r6.u8);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stb r10,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r10.u8);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stb r8,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r8.u8);
	// bl 0x8399ee10
	ctx.lr = 0x839A3E4C;
	sub_8399EE10(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A3E50;
	sub_8399F8B8(ctx, base);
	// add r11,r22,r3
	ctx.r11.u64 = ctx.r22.u64 + ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82abff78
	ctx.lr = 0x839A3E60;
	sub_82ABFF78(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A3E64;
	sub_8399F8B8(ctx, base);
	// add r11,r21,r3
	ctx.r11.u64 = ctx.r21.u64 + ctx.r3.u64;
	// li r5,528
	ctx.r5.s64 = 528;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// bl 0x831ce980
	ctx.lr = 0x839A3E78;
	sub_831CE980(ctx, base);
loc_839A3E78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A3E84"))) PPC_WEAK_FUNC(sub_839A3E84);
PPC_FUNC_IMPL(__imp__sub_839A3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A3E88"))) PPC_WEAK_FUNC(sub_839A3E88);
PPC_FUNC_IMPL(__imp__sub_839A3E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A3E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// std r30,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r30.u64);
	// bl 0x824baf50
	ctx.lr = 0x839A3EB0;
	sub_824BAF50(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x839a33f8
	ctx.lr = 0x839A3EC8;
	sub_839A33F8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// bl 0x824baf50
	ctx.lr = 0x839A3EE0;
	sub_824BAF50(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// bl 0x839a33f8
	ctx.lr = 0x839A3EF8;
	sub_839A33F8(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// bl 0x824baf50
	ctx.lr = 0x839A3F10;
	sub_824BAF50(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// bl 0x839a33f8
	ctx.lr = 0x839A3F28;
	sub_839A33F8(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// bl 0x824baf50
	ctx.lr = 0x839A3F40;
	sub_824BAF50(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// std r30,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r30.u64);
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// bl 0x824baf50
	ctx.lr = 0x839A3F58;
	sub_824BAF50(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// bl 0x824baf50
	ctx.lr = 0x839A3F70;
	sub_824BAF50(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// std r30,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r30.u64);
	// bl 0x839a33f8
	ctx.lr = 0x839A3F90;
	sub_839A33F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A3F9C"))) PPC_WEAK_FUNC(sub_839A3F9C);
PPC_FUNC_IMPL(__imp__sub_839A3F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A3FA0"))) PPC_WEAK_FUNC(sub_839A3FA0);
PPC_FUNC_IMPL(__imp__sub_839A3FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a3fb4
	if (cr6.eq) goto loc_839A3FB4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x839a3e88
	sub_839A3E88(ctx, base);
	return;
loc_839A3FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A3FBC"))) PPC_WEAK_FUNC(sub_839A3FBC);
PPC_FUNC_IMPL(__imp__sub_839A3FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A3FC0"))) PPC_WEAK_FUNC(sub_839A3FC0);
PPC_FUNC_IMPL(__imp__sub_839A3FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x839a3488
	sub_839A3488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A3FCC"))) PPC_WEAK_FUNC(sub_839A3FCC);
PPC_FUNC_IMPL(__imp__sub_839A3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A3FD0"))) PPC_WEAK_FUNC(sub_839A3FD0);
PPC_FUNC_IMPL(__imp__sub_839A3FD0) {
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
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a4010
	if (!cr6.eq) goto loc_839A4010;
loc_839A3FF8:
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
loc_839A4010:
	// bl 0x82e744f8
	ctx.lr = 0x839A4014;
	sub_82E744F8(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x839A4018;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a3ff8
	if (cr6.eq) goto loc_839A3FF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x839A4034;
	sub_82B64B88(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x839A4038;
	sub_82DAD2E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b66948
	ctx.lr = 0x839A4040;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x839a405c
	if (cr6.eq) goto loc_839A405C;
	// bl 0x8259b510
	ctx.lr = 0x839A405C;
	sub_8259B510(ctx, base);
loc_839A405C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_839A407C"))) PPC_WEAK_FUNC(sub_839A407C);
PPC_FUNC_IMPL(__imp__sub_839A407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A4080"))) PPC_WEAK_FUNC(sub_839A4080);
PPC_FUNC_IMPL(__imp__sub_839A4080) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// bl 0x82420558
	ctx.lr = 0x839A40D8;
	sub_82420558(ctx, base);
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

__attribute__((alias("__imp__sub_839A40F0"))) PPC_WEAK_FUNC(sub_839A40F0);
PPC_FUNC_IMPL(__imp__sub_839A40F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x839a4104
	if (cr6.eq) goto loc_839A4104;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x839a4080
	sub_839A4080(ctx, base);
	return;
loc_839A4104:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839A410C"))) PPC_WEAK_FUNC(sub_839A410C);
PPC_FUNC_IMPL(__imp__sub_839A410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A4110"))) PPC_WEAK_FUNC(sub_839A4110);
PPC_FUNC_IMPL(__imp__sub_839A4110) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x839a3660
	sub_839A3660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A4118"))) PPC_WEAK_FUNC(sub_839A4118);
PPC_FUNC_IMPL(__imp__sub_839A4118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x839A4120;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x839A412C;
	sub_83103328(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,25688
	ctx.r10.s64 = ctx.r11.s64 + 25688;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r27,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r27.u32);
	// addi r22,r26,68
	ctx.r22.s64 = ctx.r26.s64 + 68;
	// stw r27,92(r26)
	PPC_STORE_U32(ctx.r26.u32 + 92, ctx.r27.u32);
	// addi r29,r26,92
	ctx.r29.s64 = ctx.r26.s64 + 92;
	// stw r27,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r27.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r27,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r27.u32);
	// li r21,29
	ctx.r21.s64 = 29;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r24,r11,17524
	ctx.r24.s64 = ctx.r11.s64 + 17524;
	// addi r23,r10,272
	ctx.r23.s64 = ctx.r10.s64 + 272;
loc_839A4170:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,504
	ctx.r4.s64 = 504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839A4184;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a419c
	if (cr6.eq) goto loc_839A419C;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x839f3c10
	ctx.lr = 0x839A4194;
	sub_839F3C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x839a41a0
	goto loc_839A41A0;
loc_839A419C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_839A41A0:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x839A41B4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a41e0
	if (cr6.eq) goto loc_839A41E0;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x8257fa88
	ctx.lr = 0x839A41D0;
	sub_8257FA88(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x839a41e4
	goto loc_839A41E4;
loc_839A41E0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_839A41E4:
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x839a4248
	if (cr6.eq) goto loc_839A4248;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839a4234
	if (cr6.eq) goto loc_839A4234;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x839A420C;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x839a4234
	if (cr6.lt) goto loc_839A4234;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x839A4230;
	sub_8257FB60(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
loc_839A4234:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a4244
	if (cr6.eq) goto loc_839A4244;
	// bl 0x8259b510
	ctx.lr = 0x839A4244;
	sub_8259B510(ctx, base);
loc_839A4244:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_839A4248:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x839a4258
	if (cr6.eq) goto loc_839A4258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x839A4258;
	sub_8259B510(ctx, base);
loc_839A4258:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// stwu r27,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r22.u32 = ea;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x839a4170
	if (!cr0.eq) goto loc_839A4170;
	// bl 0x830fe8a0
	ctx.lr = 0x839A426C;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x839A4270;
	sub_835240D8(ctx, base);
	// std r3,80(r26)
	PPC_STORE_U64(ctx.r26.u32 + 80, ctx.r3.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A4280"))) PPC_WEAK_FUNC(sub_839A4280);
PPC_FUNC_IMPL(__imp__sub_839A4280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A4288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r3,104
	ctx.r11.s64 = ctx.r3.s64 + 104;
	// addi r9,r10,25688
	ctx.r9.s64 = ctx.r10.s64 + 25688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_839A42A8:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a42b8
	if (cr6.eq) goto loc_839A42B8;
	// bl 0x8259b510
	ctx.lr = 0x839A42B8;
	sub_8259B510(ctx, base);
loc_839A42B8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x839a42a8
	if (!cr0.lt) goto loc_839A42A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831032a0
	ctx.lr = 0x839A42C8;
	sub_831032A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A42D0"))) PPC_WEAK_FUNC(sub_839A42D0);
PPC_FUNC_IMPL(__imp__sub_839A42D0) {
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
	// bl 0x839a4280
	ctx.lr = 0x839A42F0;
	sub_839A4280(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4308
	if (cr6.eq) goto loc_839A4308;
	// bl 0x82416268
	ctx.lr = 0x839A4304;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839A4308:
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

__attribute__((alias("__imp__sub_839A4320"))) PPC_WEAK_FUNC(sub_839A4320);
PPC_FUNC_IMPL(__imp__sub_839A4320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x839a4360
	if (cr6.lt) goto loc_839A4360;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82df22b0
	ctx.lr = 0x839A4354;
	sub_82DF22B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4390
	if (cr6.eq) goto loc_839A4390;
loc_839A4360:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839a4384
	if (cr0.eq) goto loc_839A4384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839a4080
	ctx.lr = 0x839A4384;
	sub_839A4080(ctx, base);
loc_839A4384:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_839A4390:
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

__attribute__((alias("__imp__sub_839A43AC"))) PPC_WEAK_FUNC(sub_839A43AC);
PPC_FUNC_IMPL(__imp__sub_839A43AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A43B0"))) PPC_WEAK_FUNC(sub_839A43B0);
PPC_FUNC_IMPL(__imp__sub_839A43B0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x839A43DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a4400
	if (cr6.eq) goto loc_839A4400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x839a4118
	ctx.lr = 0x839A43EC;
	sub_839A4118(ctx, base);
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
loc_839A4400:
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

__attribute__((alias("__imp__sub_839A4418"))) PPC_WEAK_FUNC(sub_839A4418);
PPC_FUNC_IMPL(__imp__sub_839A4418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x839A4420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r8,r11,25728
	ctx.r8.s64 = ctx.r11.s64 + 25728;
	// addi r7,r10,25716
	ctx.r7.s64 = ctx.r10.s64 + 25716;
	// addi r6,r9,25712
	ctx.r6.s64 = ctx.r9.s64 + 25712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,432
	ctx.r30.s64 = ctx.r3.s64 + 432;
	// lwz r5,452(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x839a4464
	if (cr6.lt) goto loc_839A4464;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x839A4464;
	sub_8386D088(ctx, base);
loc_839A4464:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r29,r31,352
	ctx.r29.s64 = ctx.r31.s64 + 352;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x824238b8
	ctx.lr = 0x839A4484;
	sub_824238B8(ctx, base);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x824238b8
	ctx.lr = 0x839A448C;
	sub_824238B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824238b8
	ctx.lr = 0x839A4494;
	sub_824238B8(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x839a32f8
	ctx.lr = 0x839A449C;
	sub_839A32F8(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x835fe3a0
	ctx.lr = 0x839A44A4;
	sub_835FE3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x839A44AC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A44B4"))) PPC_WEAK_FUNC(sub_839A44B4);
PPC_FUNC_IMPL(__imp__sub_839A44B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839A44B8"))) PPC_WEAK_FUNC(sub_839A44B8);
PPC_FUNC_IMPL(__imp__sub_839A44B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x839a44c8
	sub_839A44C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A44C0"))) PPC_WEAK_FUNC(sub_839A44C0);
PPC_FUNC_IMPL(__imp__sub_839A44C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x839a44c8
	sub_839A44C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839A44C8"))) PPC_WEAK_FUNC(sub_839A44C8);
PPC_FUNC_IMPL(__imp__sub_839A44C8) {
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
	// bl 0x839a4418
	ctx.lr = 0x839A44E8;
	sub_839A4418(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4500
	if (cr6.eq) goto loc_839A4500;
	// bl 0x82416268
	ctx.lr = 0x839A44FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_839A4500:
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

__attribute__((alias("__imp__sub_839A4518"))) PPC_WEAK_FUNC(sub_839A4518);
PPC_FUNC_IMPL(__imp__sub_839A4518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x839A4520;
	__savegprlr_15(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x839f3b28
	ctx.lr = 0x839A4530;
	sub_839F3B28(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A4534;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a4550
	if (!cr6.eq) goto loc_839A4550;
loc_839A453C:
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x839a4418
	ctx.lr = 0x839A4544;
	sub_839A4418(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_839A4550:
	// bl 0x8399f8b8
	ctx.lr = 0x839A4554;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a453c
	if (cr6.eq) goto loc_839A453C;
	// bl 0x82dad2e0
	ctx.lr = 0x839A4560;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a453c
	if (cr6.eq) goto loc_839A453C;
	// bl 0x82dad2e0
	ctx.lr = 0x839A456C;
	sub_82DAD2E0(ctx, base);
	// lwz r31,228(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// bl 0x8399f8b8
	ctx.lr = 0x839A4574;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 * 532;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r18,r11,8
	ctx.r18.s64 = ctx.r11.s64 + 8;
	// bl 0x8399f8b8
	ctx.lr = 0x839A4584;
	sub_8399F8B8(ctx, base);
	// mulli r10,r31,528
	ctx.r10.s64 = ctx.r31.s64 * 528;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r11,1072
	ctx.r29.s64 = ctx.r11.s64 + 1072;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r28,r11,25564
	ctx.r28.s64 = ctx.r11.s64 + 25564;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// beq cr6,0x839a45b0
	if (cr6.eq) goto loc_839A45B0;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
loc_839A45B0:
	// bl 0x824208c8
	ctx.lr = 0x839A45B4;
	sub_824208C8(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x839A45B8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r31,460
	ctx.r11.s64 = ctx.r31.s64 * 460;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x8399f760
	ctx.lr = 0x839A45C8;
	sub_8399F760(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,1868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1868, ctx.r11.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r15,15
	ctx.r15.s64 = 15;
	// addi r30,r11,27936
	ctx.r30.s64 = ctx.r11.s64 + 27936;
loc_839A45E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x839a0368
	ctx.lr = 0x839A45F4;
	sub_839A0368(ctx, base);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// stw r23,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r23,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r23.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r15,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r15.u32);
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// stw r23,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r23.u32);
	// stb r23,428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 428, ctx.r23.u8);
	// bl 0x824208c8
	ctx.lr = 0x839A461C;
	sub_824208C8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x825832e0
	ctx.lr = 0x839A4624;
	sub_825832E0(ctx, base);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x831f8200
	ctx.lr = 0x839A4630;
	sub_831F8200(ctx, base);
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82a47e40
	ctx.lr = 0x839A463C;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r11,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// bl 0x82a47e60
	ctx.lr = 0x839A464C;
	sub_82A47E60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,428
	ctx.r3.s64 = ctx.r1.s64 + 428;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x839a4668
	if (cr6.eq) goto loc_839A4668;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x839a4670
	goto loc_839A4670;
loc_839A4668:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
loc_839A4670:
	// bl 0x824208c8
	ctx.lr = 0x839A4674;
	sub_824208C8(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x839a4320
	ctx.lr = 0x839A4680;
	sub_839A4320(ctx, base);
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839a4694
	if (cr6.lt) goto loc_839A4694;
	// lwz r3,428(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// bl 0x8386d088
	ctx.lr = 0x839A4694;
	sub_8386D088(ctx, base);
loc_839A4694:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r15,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r15.u32);
	// stw r23,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r23.u32);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// stb r23,428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 428, ctx.r23.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// blt cr6,0x839a45e8
	if (cr6.lt) goto loc_839A45E8;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r20,400(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lis r6,11
	ctx.r6.s64 = 720896;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32204
	ctx.r7.s64 = -2110521344;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// ori r27,r6,1
	ctx.r27.u64 = ctx.r6.u64 | 1;
	// li r24,8
	ctx.r24.s64 = 8;
	// li r16,168
	ctx.r16.s64 = 168;
	// addi r17,r11,25672
	ctx.r17.s64 = ctx.r11.s64 + 25672;
	// addi r21,r10,30872
	ctx.r21.s64 = ctx.r10.s64 + 30872;
	// addi r22,r9,30872
	ctx.r22.s64 = ctx.r9.s64 + 30872;
	// addi r28,r8,8980
	ctx.r28.s64 = ctx.r8.s64 + 8980;
	// addi r25,r7,26164
	ctx.r25.s64 = ctx.r7.s64 + 26164;
loc_839A46FC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x8399edb0
	ctx.lr = 0x839A4708;
	sub_8399EDB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839a3538
	ctx.lr = 0x839A4710;
	sub_839A3538(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A4718:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a4730
	if (!cr6.lt) goto loc_839A4730;
	// addi r9,r1,1920
	ctx.r9.s64 = ctx.r1.s64 + 1920;
	// lbzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x839a4734
	goto loc_839A4734;
loc_839A4730:
	// li r31,13
	ctx.r31.s64 = 13;
loc_839A4734:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a479c
	if (cr6.lt) goto loc_839A479C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a478c
	if (!cr6.gt) goto loc_839A478C;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r25,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r25.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r26,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r26.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r11.u32);
	// stw r10,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r10.u32);
	// addi r6,r1,348
	ctx.r6.s64 = ctx.r1.s64 + 348;
	// stw r9,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r26.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x8247b270
	ctx.lr = 0x839A4780;
	sub_8247B270(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r28.u32);
	// b 0x839a4790
	goto loc_839A4790;
loc_839A478C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4790:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a47bc
	if (cr6.eq) goto loc_839A47BC;
loc_839A479C:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a47b4
	if (cr0.eq) goto loc_839A47B4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_839A47B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_839A47BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x839a4718
	if (cr6.lt) goto loc_839A4718;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_839A47D0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a47ec
	if (!cr6.lt) goto loc_839A47EC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1931
	ctx.r10.s64 = ctx.r1.s64 + 1931;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x839a47f0
	goto loc_839A47F0;
loc_839A47EC:
	// addi r11,r1,1931
	ctx.r11.s64 = ctx.r1.s64 + 1931;
loc_839A47F0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r5,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r5.u32);
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// blt cr6,0x839a4870
	if (cr6.lt) goto loc_839A4870;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4860
	if (!cr6.gt) goto loc_839A4860;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r22,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r22.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r24,1228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1228, ctx.r24.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r11,1216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1216, ctx.r11.u32);
	// stw r10,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, ctx.r10.u32);
	// addi r6,r1,376
	ctx.r6.s64 = ctx.r1.s64 + 376;
	// stw r9,1224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1224, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r24,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r24.u32);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x8247b270
	ctx.lr = 0x839A4854;
	sub_8247B270(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r28.u32);
	// b 0x839a4864
	goto loc_839A4864;
loc_839A4860:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4864:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4894
	if (cr6.eq) goto loc_839A4894;
loc_839A4870:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a488c
	if (cr0.eq) goto loc_839A488C;
	// ld r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_839A488C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_839A4894:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839a47d0
	if (cr6.lt) goto loc_839A47D0;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A48A8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a48c0
	if (!cr6.lt) goto loc_839A48C0;
	// addi r9,r1,1953
	ctx.r9.s64 = ctx.r1.s64 + 1953;
	// lbzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x839a48c4
	goto loc_839A48C4;
loc_839A48C0:
	// li r31,13
	ctx.r31.s64 = 13;
loc_839A48C4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a492c
	if (cr6.lt) goto loc_839A492C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a491c
	if (!cr6.gt) goto loc_839A491C;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r25,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r25.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r26,1356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1356, ctx.r26.u32);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r11,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r11.u32);
	// stw r10,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, ctx.r10.u32);
	// addi r6,r1,324
	ctx.r6.s64 = ctx.r1.s64 + 324;
	// stw r9,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r26.u32);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x8247b270
	ctx.lr = 0x839A4910;
	sub_8247B270(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// b 0x839a4920
	goto loc_839A4920;
loc_839A491C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4920:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a494c
	if (cr6.eq) goto loc_839A494C;
loc_839A492C:
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4944
	if (cr0.eq) goto loc_839A4944;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_839A4944:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_839A494C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x839a48a8
	if (cr6.lt) goto loc_839A48A8;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_839A4960:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a497c
	if (!cr6.lt) goto loc_839A497C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1964
	ctx.r10.s64 = ctx.r1.s64 + 1964;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x839a4980
	goto loc_839A4980;
loc_839A497C:
	// addi r11,r1,1964
	ctx.r11.s64 = ctx.r1.s64 + 1964;
loc_839A4980:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r7,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// stw r5,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r5.u32);
	// blt cr6,0x839a4a00
	if (cr6.lt) goto loc_839A4A00;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a49f0
	if (!cr6.gt) goto loc_839A49F0;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r22,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r22.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r24,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r24.u32);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r11.u32);
	// stw r10,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r10.u32);
	// addi r6,r1,276
	ctx.r6.s64 = ctx.r1.s64 + 276;
	// stw r9,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r24,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r24.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8247b270
	ctx.lr = 0x839A49E4;
	sub_8247B270(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// b 0x839a49f4
	goto loc_839A49F4;
loc_839A49F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A49F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4a24
	if (cr6.eq) goto loc_839A4A24;
loc_839A4A00:
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4a1c
	if (cr0.eq) goto loc_839A4A1C;
	// ld r10,464(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_839A4A1C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
loc_839A4A24:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839a4960
	if (cr6.lt) goto loc_839A4960;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A4A38:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a4a50
	if (!cr6.lt) goto loc_839A4A50;
	// addi r9,r1,1986
	ctx.r9.s64 = ctx.r1.s64 + 1986;
	// lbzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// b 0x839a4a54
	goto loc_839A4A54;
loc_839A4A50:
	// li r31,13
	ctx.r31.s64 = 13;
loc_839A4A54:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a4abc
	if (cr6.lt) goto loc_839A4ABC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4aac
	if (!cr6.gt) goto loc_839A4AAC;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// stw r25,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r25.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r26,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r26.u32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// stw r11,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r11.u32);
	// stw r10,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r10.u32);
	// addi r6,r1,364
	ctx.r6.s64 = ctx.r1.s64 + 364;
	// stw r9,1256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1256, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r26.u32);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x8247b270
	ctx.lr = 0x839A4AA0;
	sub_8247B270(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r28,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r28.u32);
	// b 0x839a4ab0
	goto loc_839A4AB0;
loc_839A4AAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4AB0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4adc
	if (cr6.eq) goto loc_839A4ADC;
loc_839A4ABC:
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4ad4
	if (cr0.eq) goto loc_839A4AD4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_839A4AD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
loc_839A4ADC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x839a4a38
	if (cr6.lt) goto loc_839A4A38;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_839A4AF0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x839a4b0c
	if (!cr6.lt) goto loc_839A4B0C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1997
	ctx.r10.s64 = ctx.r1.s64 + 1997;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x839a4b10
	goto loc_839A4B10;
loc_839A4B0C:
	// addi r11,r1,1997
	ctx.r11.s64 = ctx.r1.s64 + 1997;
loc_839A4B10:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stw r6,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r6.u32);
	// stw r5,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r5.u32);
	// blt cr6,0x839a4b90
	if (cr6.lt) goto loc_839A4B90;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4b80
	if (!cr6.gt) goto loc_839A4B80;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// stw r22,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r22.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r24,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r24.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r11.u32);
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// addi r6,r1,284
	ctx.r6.s64 = ctx.r1.s64 + 284;
	// stw r9,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r24,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r24.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8247b270
	ctx.lr = 0x839A4B74;
	sub_8247B270(ctx, base);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r28.u32);
	// b 0x839a4b84
	goto loc_839A4B84;
loc_839A4B80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4B84:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4bb4
	if (cr6.eq) goto loc_839A4BB4;
loc_839A4B90:
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4bac
	if (cr0.eq) goto loc_839A4BAC;
	// ld r10,472(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_839A4BAC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
loc_839A4BB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x839a4af0
	if (cr6.lt) goto loc_839A4AF0;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,7
	cr6.compare<uint32_t>(ctx.r23.u32, 7, xer);
	// bge cr6,0x839a4bdc
	if (!cr6.lt) goto loc_839A4BDC;
loc_839A4BD0:
	// addi r11,r1,2019
	ctx.r11.s64 = ctx.r1.s64 + 2019;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x839a4be0
	goto loc_839A4BE0;
loc_839A4BDC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_839A4BE0:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a4c4c
	if (cr6.lt) goto loc_839A4C4C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4c3c
	if (!cr6.gt) goto loc_839A4C3C;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// stw r25,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r25.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r26,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r26.u32);
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// stw r11,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r11.u32);
	// stw r10,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r10.u32);
	// addi r6,r1,332
	ctx.r6.s64 = ctx.r1.s64 + 332;
	// stw r9,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r26.u32);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x8247b270
	ctx.lr = 0x839A4C30;
	sub_8247B270(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r28,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r28.u32);
	// b 0x839a4c40
	goto loc_839A4C40;
loc_839A4C3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4C40:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4c6c
	if (cr6.eq) goto loc_839A4C6C;
loc_839A4C4C:
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4c64
	if (cr0.eq) goto loc_839A4C64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_839A4C64:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_839A4C6C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// blt cr6,0x839a4bd0
	if (cr6.lt) goto loc_839A4BD0;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A4C80:
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bge cr6,0x839a4c94
	if (!cr6.lt) goto loc_839A4C94;
	// addi r11,r1,2060
	ctx.r11.s64 = ctx.r1.s64 + 2060;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x839a4c98
	goto loc_839A4C98;
loc_839A4C94:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_839A4C98:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a4d04
	if (cr6.lt) goto loc_839A4D04;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4cf4
	if (!cr6.gt) goto loc_839A4CF4;
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r26,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r26.u32);
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// stw r11,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r11.u32);
	// stw r10,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r10.u32);
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// stw r9,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r26.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8247b270
	ctx.lr = 0x839A4CE8;
	sub_8247B270(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// b 0x839a4cf8
	goto loc_839A4CF8;
loc_839A4CF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4CF8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4d24
	if (cr6.eq) goto loc_839A4D24;
loc_839A4D04:
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4d1c
	if (cr0.eq) goto loc_839A4D1C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_839A4D1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
loc_839A4D24:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x839a4c80
	if (cr6.lt) goto loc_839A4C80;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A4D40:
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x839a4d54
	if (!cr6.lt) goto loc_839A4D54;
	// addi r11,r1,2065
	ctx.r11.s64 = ctx.r1.s64 + 2065;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x839a4d58
	goto loc_839A4D58;
loc_839A4D54:
	// li r11,255
	ctx.r11.s64 = 255;
loc_839A4D58:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a4dc4
	if (cr6.lt) goto loc_839A4DC4;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4db4
	if (!cr6.gt) goto loc_839A4DB4;
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r25.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r26,1292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1292, ctx.r26.u32);
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r11.u32);
	// stw r10,1284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1284, ctx.r10.u32);
	// addi r6,r1,356
	ctx.r6.s64 = ctx.r1.s64 + 356;
	// stw r9,1288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1288, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r26.u32);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x8247b270
	ctx.lr = 0x839A4DA8;
	sub_8247B270(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// b 0x839a4db8
	goto loc_839A4DB8;
loc_839A4DB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4DB8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4de4
	if (cr6.eq) goto loc_839A4DE4;
loc_839A4DC4:
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4ddc
	if (cr0.eq) goto loc_839A4DDC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_839A4DDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
loc_839A4DE4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x839a4d40
	if (cr6.lt) goto loc_839A4D40;
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A4E04:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_839A4E08:
	// clrlwi r20,r20,8
	ctx.r20.u64 = ctx.r20.u32 & 0xFFFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bge cr6,0x839a4e44
	if (!cr6.lt) goto loc_839A4E44;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x839a4e44
	if (cr6.lt) goto loc_839A4E44;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bge cr6,0x839a4e44
	if (!cr6.lt) goto loc_839A4E44;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r9,r1,2028
	ctx.r9.s64 = ctx.r1.s64 + 2028;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// std r7,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r7.u64);
	// lbz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 404);
	// lwz r20,400(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
loc_839A4E44:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// srawi r8,r20,24
	xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFFFFFF) != 0);
	ctx.r8.s64 = ctx.r20.s32 >> 24;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// stw r8,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// blt cr6,0x839a4ebc
	if (cr6.lt) goto loc_839A4EBC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4eac
	if (!cr6.gt) goto loc_839A4EAC;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r21,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r21.u32);
	// addi r10,r1,248
	ctx.r10.s64 = ctx.r1.s64 + 248;
	// stw r24,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r24.u32);
	// addi r9,r1,252
	ctx.r9.s64 = ctx.r1.s64 + 252;
	// stw r11,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
	// stw r10,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r10.u32);
	// addi r6,r1,300
	ctx.r6.s64 = ctx.r1.s64 + 300;
	// stw r9,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r24,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r24.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x8247b270
	ctx.lr = 0x839A4EA0;
	sub_8247B270(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r28,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r28.u32);
	// b 0x839a4eb0
	goto loc_839A4EB0;
loc_839A4EAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4EB0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4ee0
	if (cr6.eq) goto loc_839A4EE0;
loc_839A4EBC:
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a4ed8
	if (cr0.eq) goto loc_839A4ED8;
	// ld r10,384(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
loc_839A4ED8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
loc_839A4EE0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x839a4e08
	if (cr6.lt) goto loc_839A4E08;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x839a4e04
	if (cr6.lt) goto loc_839A4E04;
	// lbz r8,2076(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 2076);
	// lwz r9,1744(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// lwz r11,1748(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1748);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// blt cr6,0x839a4f70
	if (cr6.lt) goto loc_839A4F70;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a4f60
	if (!cr6.gt) goto loc_839A4F60;
	// addi r11,r1,1752
	ctx.r11.s64 = ctx.r1.s64 + 1752;
	// stw r17,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// addi r10,r1,1744
	ctx.r10.s64 = ctx.r1.s64 + 1744;
	// stw r24,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r24.u32);
	// addi r9,r1,1748
	ctx.r9.s64 = ctx.r1.s64 + 1748;
	// stw r11,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r11.u32);
	// stw r10,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r10.u32);
	// addi r6,r1,340
	ctx.r6.s64 = ctx.r1.s64 + 340;
	// stw r9,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r16,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r16.u32);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x8247b270
	ctx.lr = 0x839A4F54;
	sub_8247B270(ctx, base);
	// lwz r9,1744(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// b 0x839a4f64
	goto loc_839A4F64;
loc_839A4F60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A4F64:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a4f94
	if (cr6.eq) goto loc_839A4F94;
loc_839A4F70:
	// lwz r10,1752(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1752);
	// mulli r11,r9,168
	ctx.r11.s64 = ctx.r9.s64 * 168;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x839a4f8c
	if (cr0.eq) goto loc_839A4F8C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x839a3e88
	ctx.lr = 0x839A4F88;
	sub_839A3E88(ctx, base);
	// lwz r9,1744(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
loc_839A4F8C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,1744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1744, ctx.r11.u32);
loc_839A4F94:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r21,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r21.u32);
	// addi r10,r1,248
	ctx.r10.s64 = ctx.r1.s64 + 248;
	// stw r24,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r24.u32);
	// addi r9,r1,252
	ctx.r9.s64 = ctx.r1.s64 + 252;
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// stw r10,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r10.u32);
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// stw r9,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r9.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stw r24,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A4FC4;
	sub_8247B7D8(ctx, base);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a4fe4
	if (cr6.eq) goto loc_839A4FE4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A4FDC;
	sub_8247B268(ctx, base);
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r23.u32);
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
loc_839A4FE4:
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r25,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r25.u32);
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,1376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1376, ctx.r11.u32);
	// stw r10,1380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1380, ctx.r10.u32);
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// stw r9,1384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1384, ctx.r9.u32);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// stw r26,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r26.u32);
	// stw r26,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A5018;
	sub_8247B7D8(ctx, base);
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a5038
	if (cr6.eq) goto loc_839A5038;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A5030;
	sub_8247B268(ctx, base);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r23,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r23.u32);
loc_839A5038:
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r28.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r25,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r25.u32);
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// stw r11,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r11.u32);
	// stw r10,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r10.u32);
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// stw r9,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r9.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r26,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r26.u32);
	// stw r26,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A506C;
	sub_8247B7D8(ctx, base);
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a508c
	if (cr6.eq) goto loc_839A508C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A5084;
	sub_8247B268(ctx, base);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r23.u32);
loc_839A508C:
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// stw r28,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r28.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// stw r11,1184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1184, ctx.r11.u32);
	// stw r10,1188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1188, ctx.r10.u32);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// stw r9,1192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1192, ctx.r9.u32);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// stw r26,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r26.u32);
	// stw r26,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A50C0;
	sub_8247B7D8(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a50e0
	if (cr6.eq) goto loc_839A50E0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A50D8;
	sub_8247B268(ctx, base);
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
loc_839A50E0:
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r22,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r22.u32);
	// addi r9,r1,180
	ctx.r9.s64 = ctx.r1.s64 + 180;
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// stw r9,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r9.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r24,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r24.u32);
	// stw r24,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A5114;
	sub_8247B7D8(ctx, base);
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a5134
	if (cr6.eq) goto loc_839A5134;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A512C;
	sub_8247B268(ctx, base);
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r23.u32);
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
loc_839A5134:
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// stw r28,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r28.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// stw r11,1312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1312, ctx.r11.u32);
	// stw r10,1316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1316, ctx.r10.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r9,1320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1320, ctx.r9.u32);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// stw r26,1324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1324, ctx.r26.u32);
	// stw r26,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A5168;
	sub_8247B7D8(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a5188
	if (cr6.eq) goto loc_839A5188;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A5180;
	sub_8247B268(ctx, base);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
loc_839A5188:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r22,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r22.u32);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// stw r11,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r11.u32);
	// stw r10,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r10.u32);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stw r9,1000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1000, ctx.r9.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// stw r24,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r24.u32);
	// stw r24,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A51BC;
	sub_8247B7D8(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a51dc
	if (cr6.eq) goto loc_839A51DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A51D4;
	sub_8247B268(ctx, base);
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
loc_839A51DC:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// stw r10,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r10.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r9,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r9.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r26,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r26.u32);
	// stw r26,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A5210;
	sub_8247B7D8(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a5230
	if (cr6.eq) goto loc_839A5230;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A5228;
	sub_8247B268(ctx, base);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
loc_839A5230:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r22,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r22.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r11,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// stw r10,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r10.u32);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// stw r9,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r9.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r24,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r24.u32);
	// stw r24,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A5264;
	sub_8247B7D8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a5284
	if (cr6.eq) goto loc_839A5284;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A527C;
	sub_8247B268(ctx, base);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
loc_839A5284:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r28,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r11.u32);
	// stw r10,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r10.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stw r9,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r9.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r26,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r26.u32);
	// stw r26,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A52B8;
	sub_8247B7D8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a52d8
	if (cr6.eq) goto loc_839A52D8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A52D0;
	sub_8247B268(ctx, base);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
loc_839A52D8:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x839a46fc
	if (cr6.lt) goto loc_839A46FC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// bl 0x8399ee20
	ctx.lr = 0x839A52FC;
	sub_8399EE20(ctx, base);
	// lwz r10,1760(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1760);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_839A5304:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x839a5318
	if (!cr6.lt) goto loc_839A5318;
	// addi r11,r1,1872
	ctx.r11.s64 = ctx.r1.s64 + 1872;
	// lbzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// b 0x839a531c
	goto loc_839A531C;
loc_839A5318:
	// li r31,255
	ctx.r31.s64 = 255;
loc_839A531C:
	// lwz r11,1764(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1764);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a5384
	if (cr6.lt) goto loc_839A5384;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a5374
	if (!cr6.gt) goto loc_839A5374;
	// addi r11,r1,1768
	ctx.r11.s64 = ctx.r1.s64 + 1768;
	// stw r25,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r25.u32);
	// addi r10,r1,1760
	ctx.r10.s64 = ctx.r1.s64 + 1760;
	// stw r26,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r26.u32);
	// addi r9,r1,1764
	ctx.r9.s64 = ctx.r1.s64 + 1764;
	// stw r11,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// stw r10,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r10.u32);
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// stw r9,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r26.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8247b270
	ctx.lr = 0x839A5368;
	sub_8247B270(ctx, base);
	// lwz r10,1760(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1760);
	// stw r28,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// b 0x839a5378
	goto loc_839A5378;
loc_839A5374:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A5378:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a53a4
	if (cr6.eq) goto loc_839A53A4;
loc_839A5384:
	// lwz r9,1768(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1768);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a539c
	if (cr0.eq) goto loc_839A539C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,1760(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1760);
loc_839A539C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1760, ctx.r10.u32);
loc_839A53A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x839a5304
	if (cr6.lt) goto loc_839A5304;
	// lwz r9,1776(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r10,r1,1904
	ctx.r10.s64 = ctx.r1.s64 + 1904;
loc_839A53BC:
	// lwz r11,1780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1780);
	// lbzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a5428
	if (cr6.lt) goto loc_839A5428;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a5418
	if (!cr6.gt) goto loc_839A5418;
	// addi r11,r1,1784
	ctx.r11.s64 = ctx.r1.s64 + 1784;
	// stw r25,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r25.u32);
	// addi r10,r1,1776
	ctx.r10.s64 = ctx.r1.s64 + 1776;
	// stw r26,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r26.u32);
	// addi r9,r1,1780
	ctx.r9.s64 = ctx.r1.s64 + 1780;
	// stw r11,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r11.u32);
	// stw r10,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r10.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stw r9,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r26.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8247b270
	ctx.lr = 0x839A540C;
	sub_8247B270(ctx, base);
	// lwz r9,1776(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
	// stw r28,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r28.u32);
	// b 0x839a541c
	goto loc_839A541C;
loc_839A5418:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A541C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a5448
	if (cr6.eq) goto loc_839A5448;
loc_839A5428:
	// lwz r10,1784(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1784);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a5440
	if (cr0.eq) goto loc_839A5440;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r9,1776(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
loc_839A5440:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, ctx.r9.u32);
loc_839A5448:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r1,1904
	ctx.r10.s64 = ctx.r1.s64 + 1904;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x839a53bc
	if (cr6.lt) goto loc_839A53BC;
	// lbz r9,1913(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1913);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r10,r1,1910
	ctx.r10.s64 = ctx.r1.s64 + 1910;
	// stw r9,1792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1792, ctx.r9.u32);
	// lwz r9,1800(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1800);
loc_839A5474:
	// lwz r11,1804(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1804);
	// lbzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x839a54e0
	if (cr6.lt) goto loc_839A54E0;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x839a54d0
	if (!cr6.gt) goto loc_839A54D0;
	// addi r11,r1,1808
	ctx.r11.s64 = ctx.r1.s64 + 1808;
	// stw r25,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r25.u32);
	// addi r10,r1,1800
	ctx.r10.s64 = ctx.r1.s64 + 1800;
	// stw r26,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r26.u32);
	// addi r9,r1,1804
	ctx.r9.s64 = ctx.r1.s64 + 1804;
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// stw r10,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r10.u32);
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// stw r9,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r26,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r26.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x8247b270
	ctx.lr = 0x839A54C4;
	sub_8247B270(ctx, base);
	// lwz r9,1800(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1800);
	// stw r28,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r28.u32);
	// b 0x839a54d4
	goto loc_839A54D4;
loc_839A54D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_839A54D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839a5500
	if (cr6.eq) goto loc_839A5500;
loc_839A54E0:
	// lwz r10,1808(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1808);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x839a54f8
	if (cr0.eq) goto loc_839A54F8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r9,1800(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1800);
loc_839A54F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,1800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1800, ctx.r9.u32);
loc_839A5500:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r1,1910
	ctx.r10.s64 = ctx.r1.s64 + 1910;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x839a5474
	if (cr6.lt) goto loc_839A5474;
	// lbz r8,1914(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1914);
	// lbz r6,1915(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1915);
	// lbz r4,1916(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1916);
	// lbz r3,1917(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1917);
	// lbz r11,1918(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1918);
	// stw r8,1816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1816, ctx.r8.u32);
	// stw r6,1820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1820, ctx.r6.u32);
	// stw r4,1824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1824, ctx.r4.u32);
	// stw r3,1828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1828, ctx.r3.u32);
	// stw r11,1832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1832, ctx.r11.u32);
	// bl 0x82dad2e0
	ctx.lr = 0x839A5544;
	sub_82DAD2E0(ctx, base);
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x839a5558
	if (!cr6.eq) goto loc_839A5558;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x839a5564
	goto loc_839A5564;
loc_839A5558:
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// bl 0x82e74498
	ctx.lr = 0x839A5560;
	sub_82E74498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_839A5564:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lwz r10,1860(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1860);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// addi r7,r11,25728
	ctx.r7.s64 = ctx.r11.s64 + 25728;
	// addi r6,r9,25716
	ctx.r6.s64 = ctx.r9.s64 + 25716;
	// addi r5,r8,25712
	ctx.r5.s64 = ctx.r8.s64 + 25712;
	// stw r7,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r7.u32);
	// stw r6,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r6.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r5,1624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1624, ctx.r5.u32);
	// blt cr6,0x839a559c
	if (cr6.lt) goto loc_839A559C;
	// lwz r3,1840(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1840);
	// bl 0x8386d088
	ctx.lr = 0x839A559C;
	sub_8386D088(ctx, base);
loc_839A559C:
	// addi r11,r1,1808
	ctx.r11.s64 = ctx.r1.s64 + 1808;
	// stw r25,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r25.u32);
	// addi r10,r1,1800
	ctx.r10.s64 = ctx.r1.s64 + 1800;
	// stw r15,1860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1860, ctx.r15.u32);
	// addi r9,r1,1804
	ctx.r9.s64 = ctx.r1.s64 + 1804;
	// stw r23,1856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1856, ctx.r23.u32);
	// stb r23,1840(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1840, ctx.r23.u8);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stw r11,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// stw r10,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r10.u32);
	// stw r9,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r9.u32);
	// stw r26,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r26.u32);
	// stw r26,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A55D8;
	sub_8247B7D8(ctx, base);
	// lwz r3,1808(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1808);
	// stw r23,1800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1800, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a55f8
	if (cr6.eq) goto loc_839A55F8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A55F0;
	sub_8247B268(ctx, base);
	// stw r23,1804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1804, ctx.r23.u32);
	// stw r23,1808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1808, ctx.r23.u32);
loc_839A55F8:
	// addi r11,r1,1784
	ctx.r11.s64 = ctx.r1.s64 + 1784;
	// stw r28,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r28.u32);
	// addi r10,r1,1776
	ctx.r10.s64 = ctx.r1.s64 + 1776;
	// stw r25,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r25.u32);
	// addi r9,r1,1780
	ctx.r9.s64 = ctx.r1.s64 + 1780;
	// stw r11,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r11.u32);
	// stw r10,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r10.u32);
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// stw r9,968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 968, ctx.r9.u32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r26,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r26.u32);
	// stw r26,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A562C;
	sub_8247B7D8(ctx, base);
	// lwz r3,1784(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1784);
	// stw r23,1776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1776, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a564c
	if (cr6.eq) goto loc_839A564C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A5644;
	sub_8247B268(ctx, base);
	// stw r23,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, ctx.r23.u32);
	// stw r23,1784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1784, ctx.r23.u32);
loc_839A564C:
	// addi r11,r1,1768
	ctx.r11.s64 = ctx.r1.s64 + 1768;
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// addi r10,r1,1760
	ctx.r10.s64 = ctx.r1.s64 + 1760;
	// stw r25,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r25.u32);
	// addi r9,r1,1764
	ctx.r9.s64 = ctx.r1.s64 + 1764;
	// stw r11,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r11.u32);
	// stw r10,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r10.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r9,1032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1032, ctx.r9.u32);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stw r26,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r26.u32);
	// stw r26,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r26.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A5680;
	sub_8247B7D8(ctx, base);
	// lwz r3,1768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1768);
	// stw r23,1760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1760, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a56a0
	if (cr6.eq) goto loc_839A56A0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A5698;
	sub_8247B268(ctx, base);
	// stw r23,1764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1764, ctx.r23.u32);
	// stw r23,1768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1768, ctx.r23.u32);
loc_839A56A0:
	// addi r11,r1,1752
	ctx.r11.s64 = ctx.r1.s64 + 1752;
	// stw r28,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r28.u32);
	// addi r10,r1,1744
	ctx.r10.s64 = ctx.r1.s64 + 1744;
	// stw r17,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r17.u32);
	// addi r9,r1,1748
	ctx.r9.s64 = ctx.r1.s64 + 1748;
	// stw r11,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r11.u32);
	// stw r10,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r10.u32);
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// stw r9,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r9.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// stw r24,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r24.u32);
	// stw r16,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r16.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x839A56D4;
	sub_8247B7D8(ctx, base);
	// lwz r3,1752(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1752);
	// stw r23,1744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1744, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a56f4
	if (cr6.eq) goto loc_839A56F4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A56EC;
	sub_8247B268(ctx, base);
	// stw r23,1748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1748, ctx.r23.u32);
	// stw r23,1752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1752, ctx.r23.u32);
loc_839A56F4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r28,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r28.u32);
	// addi r10,r1,1736
	ctx.r10.s64 = ctx.r1.s64 + 1736;
	// stw r24,1164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1164, ctx.r24.u32);
	// addi r9,r11,-2980
	ctx.r9.s64 = ctx.r11.s64 + -2980;
	// addi r8,r1,1728
	ctx.r8.s64 = ctx.r1.s64 + 1728;
	// stw r10,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r10.u32);
	// addi r7,r1,1732
	ctx.r7.s64 = ctx.r1.s64 + 1732;
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r8,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r8.u32);
	// stw r7,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, ctx.r7.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r6,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r6.u32);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x8247b7d8
	ctx.lr = 0x839A5734;
	sub_8247B7D8(ctx, base);
	// lwz r3,1736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1736);
	// stw r23,1728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1728, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839a5754
	if (cr6.eq) goto loc_839A5754;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8247b268
	ctx.lr = 0x839A574C;
	sub_8247B268(ctx, base);
	// stw r23,1732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1732, ctx.r23.u32);
	// stw r23,1736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1736, ctx.r23.u32);
loc_839A5754:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,1708(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1708);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r28,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r28.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r11,25580
	ctx.r7.s64 = ctx.r11.s64 + 25580;
	// addi r6,r9,25568
	ctx.r6.s64 = ctx.r9.s64 + 25568;
	// addi r5,r8,25548
	ctx.r5.s64 = ctx.r8.s64 + 25548;
	// stw r7,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r7.u32);
	// stw r6,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r6.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r5,1624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1624, ctx.r5.u32);
	// blt cr6,0x839a5790
	if (cr6.lt) goto loc_839A5790;
	// lwz r3,1688(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1688);
	// bl 0x8386d088
	ctx.lr = 0x839A5790;
	sub_8386D088(ctx, base);
loc_839A5790:
	// lwz r11,1680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1680);
	// stw r15,1708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1708, ctx.r15.u32);
	// stw r23,1704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1704, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,1688(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1688, ctx.r23.u8);
	// blt cr6,0x839a57b0
	if (cr6.lt) goto loc_839A57B0;
	// lwz r3,1660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1660);
	// bl 0x8386d088
	ctx.lr = 0x839A57B0;
	sub_8386D088(ctx, base);
loc_839A57B0:
	// lwz r11,1648(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1648);
	// stw r15,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, ctx.r15.u32);
	// stw r23,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,1660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1660, ctx.r23.u8);
	// blt cr6,0x839a57d0
	if (cr6.lt) goto loc_839A57D0;
	// lwz r3,1628(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// bl 0x8386d088
	ctx.lr = 0x839A57D0;
	sub_8386D088(ctx, base);
loc_839A57D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r15,1648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1648, ctx.r15.u32);
	// stw r23,1644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1644, ctx.r23.u32);
	// addi r10,r11,25536
	ctx.r10.s64 = ctx.r11.s64 + 25536;
	// stb r23,1628(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1628, ctx.r23.u8);
	// lwz r3,1616(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// stw r10,1608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1608, ctx.r10.u32);
	// bl 0x831cf100
	ctx.lr = 0x839A57F0;
	sub_831CF100(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1584
	ctx.r3.s64 = ctx.r1.s64 + 1584;
	// addi r8,r9,25556
	ctx.r8.s64 = ctx.r9.s64 + 25556;
	// stw r8,1408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1408, ctx.r8.u32);
	// bl 0x82535aa0
	ctx.lr = 0x839A5804;
	sub_82535AA0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r5,1568(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1568);
	// addi r6,r7,-68
	ctx.r6.s64 = ctx.r7.s64 + -68;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// stw r6,1544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1544, ctx.r6.u32);
	// blt cr6,0x839a5824
	if (cr6.lt) goto loc_839A5824;
	// lwz r3,1548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// bl 0x8386d088
	ctx.lr = 0x839A5824;
	sub_8386D088(ctx, base);
loc_839A5824:
	// stw r15,1568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1568, ctx.r15.u32);
	// addi r3,r1,1544
	ctx.r3.s64 = ctx.r1.s64 + 1544;
	// stw r23,1564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1564, ctx.r23.u32);
	// stb r23,1548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1548, ctx.r23.u8);
	// bl 0x825458c8
	ctx.lr = 0x839A5838;
	sub_825458C8(ctx, base);
	// lwz r11,1532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x839a584c
	if (cr6.lt) goto loc_839A584C;
	// lwz r3,1512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// bl 0x8386d088
	ctx.lr = 0x839A584C;
	sub_8386D088(ctx, base);
loc_839A584C:
	// lwz r11,1484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1484);
	// stw r15,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r15.u32);
	// stw r23,1528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1528, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,1512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1512, ctx.r23.u8);
	// blt cr6,0x839a586c
	if (cr6.lt) goto loc_839A586C;
	// lwz r3,1464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1464);
	// bl 0x8386d088
	ctx.lr = 0x839A586C;
	sub_8386D088(ctx, base);
loc_839A586C:
	// stw r15,1484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1484, ctx.r15.u32);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// stw r23,1480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1480, ctx.r23.u32);
	// stb r23,1464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1464, ctx.r23.u8);
	// bl 0x82450cc0
	ctx.lr = 0x839A5880;
	sub_82450CC0(ctx, base);
	// lwz r3,1440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// bl 0x8386d088
	ctx.lr = 0x839A5888;
	sub_8386D088(ctx, base);
	// stw r23,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r23.u32);
	// addi r3,r1,1416
	ctx.r3.s64 = ctx.r1.s64 + 1416;
	// bl 0x82450950
	ctx.lr = 0x839A5894;
	sub_82450950(ctx, base);
	// lwz r3,1416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1416);
	// bl 0x8386d088
	ctx.lr = 0x839A589C;
	sub_8386D088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

