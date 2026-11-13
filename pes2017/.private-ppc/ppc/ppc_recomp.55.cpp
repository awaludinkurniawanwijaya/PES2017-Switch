#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825FFB18"))) PPC_WEAK_FUNC(sub_825FFB18);
PPC_FUNC_IMPL(__imp__sub_825FFB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825FFB20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a22c10
	ctx.lr = 0x825FFB40;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blt cr6,0x825ffb78
	if (cr6.lt) goto loc_825FFB78;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x825ffb78
	if (!cr6.lt) goto loc_825FFB78;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x825ffb78
	if (cr6.lt) goto loc_825FFB78;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x825ffb7c
	if (cr6.lt) goto loc_825FFB7C;
loc_825FFB78:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_825FFB7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ffd60
	if (cr6.eq) goto loc_825FFD60;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x825ffba0
	if (!cr6.lt) goto loc_825FFBA0;
	// addi r10,r9,74
	ctx.r10.s64 = ctx.r9.s64 + 74;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x825ffba4
	goto loc_825FFBA4;
loc_825FFBA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825FFBA4:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2a378
	ctx.lr = 0x825FFBAC;
	sub_82A2A378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825ffbc0
	if (cr6.lt) goto loc_825FFBC0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825ffbc4
	if (cr6.lt) goto loc_825FFBC4;
loc_825FFBC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFBC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ffd60
	if (cr6.eq) goto loc_825FFD60;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825ffbe4
	if (cr6.lt) goto loc_825FFBE4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825ffbe8
	if (cr6.lt) goto loc_825FFBE8;
loc_825FFBE4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFBE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ffc08
	if (cr6.eq) goto loc_825FFC08;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825ffc0c
	goto loc_825FFC0C;
loc_825FFC08:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFC0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ffd60
	if (cr6.eq) goto loc_825FFD60;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x825ffc34
	if (!cr6.lt) goto loc_825FFC34;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825ffc38
	goto loc_825FFC38;
loc_825FFC34:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFC38:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x825ffd1c
	if (cr6.eq) goto loc_825FFD1C;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x825ffc68
	if (!cr6.lt) goto loc_825FFC68;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825ffc6c
	goto loc_825FFC6C;
loc_825FFC68:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFC6C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,18432
	ctx.r10.s64 = 1207959552;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x825ffd1c
	if (cr6.eq) goto loc_825FFD1C;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x825ffc9c
	if (!cr6.lt) goto loc_825FFC9C;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825ffca0
	goto loc_825FFCA0;
loc_825FFC9C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFCA0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,18688
	ctx.r10.s64 = 1224736768;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x825ffd1c
	if (cr6.eq) goto loc_825FFD1C;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x825ffcd0
	if (!cr6.lt) goto loc_825FFCD0;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825ffcd4
	goto loc_825FFCD4;
loc_825FFCD0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFCD4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,18944
	ctx.r10.s64 = 1241513984;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x825ffd1c
	if (cr6.eq) goto loc_825FFD1C;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x825ffd04
	if (!cr6.lt) goto loc_825FFD04;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x825ffd08
	goto loc_825FFD08;
loc_825FFD04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825FFD08:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,19200
	ctx.r10.s64 = 1258291200;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x825ffd60
	if (!cr6.eq) goto loc_825FFD60;
loc_825FFD1C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r29,1592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1592, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r29.u32);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// bl 0x82a22b40
	ctx.lr = 0x825FFD40;
	sub_82A22B40(ctx, base);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,1592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1592, ctx.r8.u8);
	// stw r9,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r9.u32);
	// stw r9,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825FFD60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FFD6C"))) PPC_WEAK_FUNC(sub_825FFD6C);
PPC_FUNC_IMPL(__imp__sub_825FFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFD70"))) PPC_WEAK_FUNC(sub_825FFD70);
PPC_FUNC_IMPL(__imp__sub_825FFD70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x825ffdb0
	if (cr6.eq) goto loc_825FFDB0;
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
loc_825FFDB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x825FFDBC;
	sub_82A22B40(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,1600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_825FFDE4"))) PPC_WEAK_FUNC(sub_825FFDE4);
PPC_FUNC_IMPL(__imp__sub_825FFDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFDE8"))) PPC_WEAK_FUNC(sub_825FFDE8);
PPC_FUNC_IMPL(__imp__sub_825FFDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825FFDF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8263d9b0
	ctx.lr = 0x825FFDFC;
	sub_8263D9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82646be8
	ctx.lr = 0x825FFE04;
	sub_82646BE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,26104
	ctx.r11.s64 = ctx.r11.s64 + 26104;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82a454e0
	ctx.lr = 0x825FFE1C;
	sub_82A454E0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r8,r10,26148
	ctx.r8.u64 = ctx.r10.u64 | 26148;
	// lbz r7,1621(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1621);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwzx r28,r9,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// beq cr6,0x825ffe78
	if (cr6.eq) goto loc_825FFE78;
	// addi r30,r31,1608
	ctx.r30.s64 = ctx.r31.s64 + 1608;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a454e0
	ctx.lr = 0x825FFE4C;
	sub_82A454E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x825ffe78
	if (cr6.eq) goto loc_825FFE78;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,26124
	ctx.r3.s64 = ctx.r3.s64 + 26124;
	// bl 0x831ce980
	ctx.lr = 0x825FFE70;
	sub_831CE980(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825FFE78:
	// lbz r11,1622(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1622);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ffeb0
	if (cr6.eq) goto loc_825FFEB0;
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x825ffeb0
	if (cr6.eq) goto loc_825FFEB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,1608
	ctx.r4.s64 = ctx.r31.s64 + 1608;
	// li r5,56
	ctx.r5.s64 = 56;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,26124
	ctx.r3.s64 = ctx.r3.s64 + 26124;
	// bl 0x831ce980
	ctx.lr = 0x825FFEA8;
	sub_831CE980(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825FFEB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,1608
	ctx.r4.s64 = ctx.r31.s64 + 1608;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,26124
	ctx.r3.s64 = ctx.r3.s64 + 26124;
	// bl 0x82a45508
	ctx.lr = 0x825FFEC4;
	sub_82A45508(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FFECC"))) PPC_WEAK_FUNC(sub_825FFECC);
PPC_FUNC_IMPL(__imp__sub_825FFECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFED0"))) PPC_WEAK_FUNC(sub_825FFED0);
PPC_FUNC_IMPL(__imp__sub_825FFED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825FFED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fffdc
	if (cr6.eq) goto loc_825FFFDC;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825fffdc
	if (cr6.eq) goto loc_825FFFDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a23768
	ctx.lr = 0x825FFF0C;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x825FFF1C;
	sub_831CE980(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x825fff58
	if (cr6.eq) goto loc_825FFF58;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825fff4c
	if (!cr6.eq) goto loc_825FFF4C;
	// lwz r11,5388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5388);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x825fff58
	if (!cr6.eq) goto loc_825FFF58;
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// b 0x825fff50
	goto loc_825FFF50;
loc_825FFF4C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
loc_825FFF50:
	// bne cr6,0x825fff58
	if (!cr6.eq) goto loc_825FFF58;
	// li r31,1
	ctx.r31.s64 = 1;
loc_825FFF58:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825fffd4
	if (cr6.eq) goto loc_825FFFD4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r11,21792
	ctx.r28.u64 = ctx.r11.u64 | 21792;
loc_825FFF70:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,4548
	ctx.r3.s64 = ctx.r11.s64 + 4548;
	// bl 0x82a45650
	ctx.lr = 0x825FFF84;
	sub_82A45650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fffc8
	if (cr6.eq) goto loc_825FFFC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263ec58
	ctx.lr = 0x825FFF9C;
	sub_8263EC58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825fffbc
	if (cr6.eq) goto loc_825FFFBC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263ed48
	ctx.lr = 0x825FFFB8;
	sub_8263ED48(ctx, base);
	// b 0x825fffc8
	goto loc_825FFFC8;
loc_825FFFBC:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_825FFFC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// ble cr6,0x825fff70
	if (!cr6.gt) goto loc_825FFF70;
loc_825FFFD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x825FFFDC;
	sub_83102DB0(ctx, base);
loc_825FFFDC:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FFFE4"))) PPC_WEAK_FUNC(sub_825FFFE4);
PPC_FUNC_IMPL(__imp__sub_825FFFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFFE8"))) PPC_WEAK_FUNC(sub_825FFFE8);
PPC_FUNC_IMPL(__imp__sub_825FFFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x825FFFF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82600010;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82600020;
	sub_82A22B40(ctx, base);
	// ld r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82a474e0
	ctx.lr = 0x82600034;
	sub_82A474E0(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82600064
	if (cr6.lt) goto loc_82600064;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82600064
	if (!cr6.lt) goto loc_82600064;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// blt cr6,0x82600064
	if (cr6.lt) goto loc_82600064;
	// cmpwi cr6,r21,32
	cr6.compare<int32_t>(ctx.r21.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82600068
	if (cr6.lt) goto loc_82600068;
loc_82600064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82600068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82600254
	if (cr6.eq) goto loc_82600254;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(ctx.r24.s32, 5, xer);
	// bge cr6,0x82600254
	if (!cr6.lt) goto loc_82600254;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82600098
	if (!cr6.lt) goto loc_82600098;
	// addi r11,r27,76
	ctx.r11.s64 = ctx.r27.s64 + 76;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x8260009c
	goto loc_8260009C;
loc_82600098:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8260009C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r25,r11,27316
	ctx.r25.u64 = ctx.r11.u64 | 27316;
	// add r3,r10,r25
	ctx.r3.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bl 0x82a4cd20
	ctx.lr = 0x826000B4;
	sub_82A4CD20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x826000d4
	if (!cr6.lt) goto loc_826000D4;
	// addi r11,r27,74
	ctx.r11.s64 = ctx.r27.s64 + 74;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826000d8
	goto loc_826000D8;
loc_826000D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826000D8:
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// bl 0x82a2a468
	ctx.lr = 0x826000E0;
	sub_82A2A468(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r30,252(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 252);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82600110
	if (!cr6.eq) goto loc_82600110;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82600108
	if (cr6.eq) goto loc_82600108;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82600110
	if (!cr6.eq) goto loc_82600110;
loc_82600108:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82600114
	goto loc_82600114;
loc_82600110:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82600114:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260017c
	if (cr6.eq) goto loc_8260017C;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a3fca8
	ctx.lr = 0x8260012C;
	sub_82A3FCA8(ctx, base);
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r6,1
	ctx.r6.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82600170
	if (!cr6.lt) goto loc_82600170;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a4c890
	ctx.lr = 0x8260016C;
	sub_82A4C890(ctx, base);
	// b 0x826001c0
	goto loc_826001C0;
loc_82600170:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a4c890
	ctx.lr = 0x82600178;
	sub_82A4C890(ctx, base);
	// b 0x826001c0
	goto loc_826001C0;
loc_8260017C:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x826001c0
	if (!cr6.eq) goto loc_826001C0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,22272
	ctx.r10.s64 = ctx.r10.s64 + 22272;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srawi r9,r11,8
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826001b4
	if (!cr6.eq) goto loc_826001B4;
	// srawi r11,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826001c0
	if (cr6.eq) goto loc_826001C0;
loc_826001B4:
	// lbz r11,31(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 31);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,31(r26)
	PPC_STORE_U8(ctx.r26.u32 + 31, ctx.r11.u8);
loc_826001C0:
	// lwz r11,4460(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4460);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82600214
	if (!cr6.eq) goto loc_82600214;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bne cr6,0x826001e8
	if (!cr6.eq) goto loc_826001E8;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x826001ec
	if (cr6.eq) goto loc_826001EC;
loc_826001E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826001EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82600214
	if (cr6.eq) goto loc_82600214;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
loc_82600214:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a4cc30
	ctx.lr = 0x8260022C;
	sub_82A4CC30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82600254
	if (!cr6.eq) goto loc_82600254;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82a4cd60
	ctx.lr = 0x82600254;
	sub_82A4CD60(ctx, base);
loc_82600254:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260025C"))) PPC_WEAK_FUNC(sub_8260025C);
PPC_FUNC_IMPL(__imp__sub_8260025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600260"))) PPC_WEAK_FUNC(sub_82600260);
PPC_FUNC_IMPL(__imp__sub_82600260) {
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
	// lwz r11,1644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1644);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82600284
	if (!cr6.lt) goto loc_82600284;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826002ac
	goto loc_826002AC;
loc_82600284:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82600294
	if (!cr6.lt) goto loc_82600294;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826002ac
	goto loc_826002AC;
loc_82600294:
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
loc_826002AC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826002d8
	if (cr6.lt) goto loc_826002D8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x826002d8
	if (!cr6.lt) goto loc_826002D8;
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
	// subf r31,r6,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x826002dc
	goto loc_826002DC;
loc_826002D8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826002DC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cd20
	ctx.lr = 0x826002EC;
	sub_82A4CD20(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r10,r11,91
	ctx.r10.s64 = ctx.r11.s64 + 91;
	// lbz r10,91(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 91);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,91(r11)
	PPC_STORE_U8(ctx.r11.u32 + 91, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82600314"))) PPC_WEAK_FUNC(sub_82600314);
PPC_FUNC_IMPL(__imp__sub_82600314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600318"))) PPC_WEAK_FUNC(sub_82600318);
PPC_FUNC_IMPL(__imp__sub_82600318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82600320;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,26208
	ctx.r3.s64 = ctx.r3.s64 + 26208;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82600428
	if (cr6.eq) goto loc_82600428;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82600428
	if (!cr6.lt) goto loc_82600428;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bge cr6,0x82600384
	if (!cr6.lt) goto loc_82600384;
	// addi r9,r30,76
	ctx.r9.s64 = ctx.r30.s64 + 76;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x82600388
	goto loc_82600388;
loc_82600384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82600388:
	// lbz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x826003c0
	if (!cr6.eq) goto loc_826003C0;
	// srawi r11,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82600428
	if (cr6.eq) goto loc_82600428;
loc_826003C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a45490
	ctx.lr = 0x826003CC;
	sub_82A45490(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826003f0
	if (cr6.lt) goto loc_826003F0;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82600408
	goto loc_82600408;
loc_826003F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-6684(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6684);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82600408
	if (cr6.lt) goto loc_82600408;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82600408:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cd40
	ctx.lr = 0x8260041C;
	sub_82A4CD40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a4cbb8
	ctx.lr = 0x82600428;
	sub_82A4CBB8(ctx, base);
loc_82600428:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82600438"))) PPC_WEAK_FUNC(sub_82600438);
PPC_FUNC_IMPL(__imp__sub_82600438) {
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
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,812
	ctx.r5.s64 = 812;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addi r4,r4,22600
	ctx.r4.s64 = ctx.r4.s64 + 22600;
	// bl 0x831ce980
	ctx.lr = 0x82600460;
	sub_831CE980(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x826004ac
	if (!cr6.lt) goto loc_826004AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,21097
	ctx.r10.u64 = ctx.r11.u64 | 21097;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826004ac
	if (!cr6.eq) goto loc_826004AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,21096
	ctx.r10.u64 = ctx.r11.u64 | 21096;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826004ac
	if (cr6.eq) goto loc_826004AC;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cd20
	ctx.lr = 0x826004A0;
	sub_82A4CD20(ctx, base);
	// lbz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
loc_826004AC:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826004C0"))) PPC_WEAK_FUNC(sub_826004C0);
PPC_FUNC_IMPL(__imp__sub_826004C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x826004C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,23412
	ctx.r30.s64 = ctx.r30.s64 + 23412;
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82600760
	if (!cr6.lt) goto loc_82600760;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cd20
	ctx.lr = 0x826004F8;
	sub_82A4CD20(ctx, base);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lbz r28,74(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 74);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r27,73(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,24552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24552);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lbz r6,252(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 252);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f8,f11
	cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// blt cr6,0x82600760
	if (cr6.lt) goto loc_82600760;
	// lwz r10,808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260056c
	if (cr6.eq) goto loc_8260056C;
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r10.u16);
loc_8260056C:
	// lfs f13,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fabs f8,f13
	ctx.f8.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// li r31,3
	ctx.r31.s64 = 3;
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f8,f11
	cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bge cr6,0x826005c4
	if (!cr6.lt) goto loc_826005C4;
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f11
	cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bge cr6,0x826005c4
	if (!cr6.lt) goto loc_826005C4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826005c4
	if (!cr6.eq) goto loc_826005C4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826005c4
	if (!cr6.eq) goto loc_826005C4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82600614
	goto loc_82600614;
loc_826005C4:
	// fmuls f0,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82600610
	if (cr6.lt) goto loc_82600610;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826005e8
	if (cr6.eq) goto loc_826005E8;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82600610
	if (cr6.eq) goto loc_82600610;
loc_826005E8:
	// fmuls f0,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82600608
	if (cr6.gt) goto loc_82600608;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82600614
	if (!cr6.eq) goto loc_82600614;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82600614
	if (cr6.eq) goto loc_82600614;
loc_82600608:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82600614
	goto loc_82600614;
loc_82600610:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82600614:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82600634
	if (!cr6.lt) goto loc_82600634;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4c818
	ctx.lr = 0x82600630;
	sub_82A4C818(ctx, base);
	// stb r31,72(r29)
	PPC_STORE_U8(ctx.r29.u32 + 72, ctx.r31.u8);
loc_82600634:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82600650
	if (!cr6.eq) goto loc_82600650;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82600654
	if (cr6.eq) goto loc_82600654;
loc_82600650:
	// li r26,4
	ctx.r26.s64 = 4;
loc_82600654:
	// lwz r11,740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x826006a8
	if (!cr6.eq) goto loc_826006A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-23848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23848);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82600690
	if (cr6.gt) goto loc_82600690;
	// lbz r11,744(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826006a8
	if (cr6.eq) goto loc_826006A8;
loc_82600690:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826006a8
	if (!cr6.lt) goto loc_826006A8;
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
loc_826006A8:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826006c0
	if (cr6.eq) goto loc_826006C0;
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
loc_826006C0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// ori r9,r11,21840
	ctx.r9.u64 = ctx.r11.u64 | 21840;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x826006dc
	if (!cr6.gt) goto loc_826006DC;
	// ori r26,r26,8
	ctx.r26.u64 = ctx.r26.u64 | 8;
loc_826006DC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_826006E4:
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// sraw r10,r11,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82600724
	if (cr6.eq) goto loc_82600724;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4c840
	ctx.lr = 0x82600708;
	sub_82A4C840(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82600724
	if (!cr6.eq) goto loc_82600724;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4c868
	ctx.lr = 0x82600724;
	sub_82A4C868(ctx, base);
loc_82600724:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x826006e4
	if (cr6.lt) goto loc_826006E4;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// stw r26,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// bne cr6,0x82600760
	if (!cr6.eq) goto loc_82600760;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
loc_82600760:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82600768"))) PPC_WEAK_FUNC(sub_82600768);
PPC_FUNC_IMPL(__imp__sub_82600768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82600770;
	__savegprlr_27(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a23768
	ctx.lr = 0x8260078C;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x8260079C;
	sub_831CE980(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// bne cr6,0x826007c0
	if (!cr6.eq) goto loc_826007C0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// ori r9,r11,26104
	ctx.r9.u64 = ctx.r11.u64 | 26104;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826008d0
	if (cr6.eq) goto loc_826008D0;
loc_826007C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,22424
	ctx.r28.s64 = ctx.r28.s64 + 22424;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826008d0
	if (cr6.eq) goto loc_826008D0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// bl 0x82a474e0
	ctx.lr = 0x826007F4;
	sub_82A474E0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8260082c
	if (cr6.eq) goto loc_8260082C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82600824
	if (cr6.eq) goto loc_82600824;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82600830
	goto loc_82600830;
loc_82600824:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82600830
	goto loc_82600830;
loc_8260082C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82600830:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ori r30,r11,27316
	ctx.r30.u64 = ctx.r11.u64 | 27316;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x82a4cd20
	ctx.lr = 0x82600848;
	sub_82A4CD20(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bge cr6,0x8260087c
	if (!cr6.lt) goto loc_8260087C;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bge cr6,0x8260087c
	if (!cr6.lt) goto loc_8260087C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8260087C:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826008d0
	if (cr6.eq) goto loc_826008D0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4cd20
	ctx.lr = 0x82600898;
	sub_82A4CD20(ctx, base);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bge cr6,0x826008d0
	if (!cr6.lt) goto loc_826008D0;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(ctx.r29.s32, 5, xer);
	// bge cr6,0x826008d0
	if (!cr6.lt) goto loc_826008D0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 5;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_826008D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x826008D8;
	sub_83102DB0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826008E0"))) PPC_WEAK_FUNC(sub_826008E0);
PPC_FUNC_IMPL(__imp__sub_826008E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x826008E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x82600900;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82600bc8
	if (cr6.eq) goto loc_82600BC8;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,28040
	ctx.r31.s64 = ctx.r31.s64 + 28040;
	// bl 0x82a22a50
	ctx.lr = 0x82600920;
	sub_82A22A50(ctx, base);
	// lwz r27,324(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// bge cr6,0x82600bc8
	if (!cr6.lt) goto loc_82600BC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a225d0
	ctx.lr = 0x82600938;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x82600940;
	sub_82919698(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x82a225d0
	ctx.lr = 0x82600950;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x82600960;
	sub_82919698(ctx, base);
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// beq cr6,0x826009b4
	if (cr6.eq) goto loc_826009B4;
	// subf r11,r25,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subfc r11,r26,r25
	xer.ca = ctx.r25.u32 >= ctx.r26.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subfze r28,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r28.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
loc_826009B4:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826009d8
	if (cr6.eq) goto loc_826009D8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x826009d8
	if (cr6.eq) goto loc_826009D8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x826009dc
	if (!cr6.eq) goto loc_826009DC;
loc_826009D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826009DC:
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x826009fc
	if (!cr6.eq) goto loc_826009FC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82600a14
	if (!cr6.gt) goto loc_82600A14;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x82600a14
	goto loc_82600A14;
loc_826009FC:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x82600a14
	if (!cr6.eq) goto loc_82600A14;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82600a14
	if (!cr6.gt) goto loc_82600A14;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
loc_82600A14:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x82600a78
	if (cr6.eq) goto loc_82600A78;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82600a30
	if (!cr6.eq) goto loc_82600A30;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_82600A30:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x82600a48
	if (!cr6.eq) goto loc_82600A48;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82600a74
	goto loc_82600A74;
loc_82600A48:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// beq cr6,0x82600a74
	if (cr6.eq) goto loc_82600A74;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_82600A74:
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
loc_82600A78:
	// lwz r10,324(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,296(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82600ab4
	if (!cr6.eq) goto loc_82600AB4;
	// lbz r10,968(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 968);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82600ab4
	if (cr6.eq) goto loc_82600AB4;
	// lwz r10,812(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 812);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82600ab4
	if (!cr6.eq) goto loc_82600AB4;
	// lwz r10,800(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 800);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x82600ab4
	if (!cr6.eq) goto loc_82600AB4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82600AB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82600b18
	if (cr6.eq) goto loc_82600B18;
	// addi r30,r23,872
	ctx.r30.s64 = ctx.r23.s64 + 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44eb8
	ctx.lr = 0x82600AD8;
	sub_82A44EB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a44eb8
	ctx.lr = 0x82600AEC;
	sub_82A44EB8(ctx, base);
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 | ctx.r30.u64;
	// or r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 | ctx.r29.u64;
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
loc_82600B18:
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82600b44
	if (!cr6.eq) goto loc_82600B44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r8,r27,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82a4c5c8
	ctx.lr = 0x82600B44;
	sub_82A4C5C8(ctx, base);
loc_82600B44:
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, xer);
	// bne cr6,0x82600b9c
	if (!cr6.eq) goto loc_82600B9C;
	// subf r11,r25,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r25.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82600b9c
	if (!cr6.eq) goto loc_82600B9C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r8,r27,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82a4c5c8
	ctx.lr = 0x82600B9C;
	sub_82A4C5C8(ctx, base);
loc_82600B9C:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82600bc8
	if (cr6.eq) goto loc_82600BC8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r8,r27,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82a4c5c8
	ctx.lr = 0x82600BC8;
	sub_82A4C5C8(ctx, base);
loc_82600BC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82600BD0"))) PPC_WEAK_FUNC(sub_82600BD0);
PPC_FUNC_IMPL(__imp__sub_82600BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82600BD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a23768
	ctx.lr = 0x82600BF4;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82600C04;
	sub_831CE980(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82600cec
	if (cr6.eq) goto loc_82600CEC;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r25,296
	ctx.r25.s64 = 296;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// ori r23,r11,27316
	ctx.r23.u64 = ctx.r11.u64 | 27316;
loc_82600C28:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82a4cd20
	ctx.lr = 0x82600C38;
	sub_82A4CD20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x82600c50
	if (!cr6.lt) goto loc_82600C50;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// b 0x82600c54
	goto loc_82600C54;
loc_82600C50:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82600C54:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82600C58:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82600c98
	if (cr6.eq) goto loc_82600C98;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// beq cr6,0x82600c98
	if (cr6.eq) goto loc_82600C98;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82600c9c
	if (!cr6.eq) goto loc_82600C9C;
loc_82600C98:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82600C9C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82600cc4
	if (cr6.eq) goto loc_82600CC4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a29c10
	ctx.lr = 0x82600CB4;
	sub_82A29C10(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stb r27,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r27.u8);
	// stb r27,91(r10)
	PPC_STORE_U8(ctx.r10.u32 + 91, ctx.r27.u8);
loc_82600CC4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x82600c58
	if (cr6.lt) goto loc_82600C58;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// cmpwi cr6,r25,300
	cr6.compare<int32_t>(ctx.r25.s32, 300, xer);
	// ble cr6,0x82600c28
	if (!cr6.gt) goto loc_82600C28;
loc_82600CEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82600CF4;
	sub_83102DB0(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82600CFC"))) PPC_WEAK_FUNC(sub_82600CFC);
PPC_FUNC_IMPL(__imp__sub_82600CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600D00"))) PPC_WEAK_FUNC(sub_82600D00);
PPC_FUNC_IMPL(__imp__sub_82600D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r3,44
	ctx.r8.s64 = ctx.r3.s64 + 44;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r8,r3,76
	ctx.r8.s64 = ctx.r3.s64 + 76;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r9,r3,116
	ctx.r9.s64 = ctx.r3.s64 + 116;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_82600DC0:
	// stfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfsu f0,12(r9)
	ea = 12 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82600dc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82600DC0;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r31,380
	ctx.r11.s64 = ctx.r31.s64 + 380;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82600DDC:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82600ddc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82600DDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825faa68
	ctx.lr = 0x82600DF4;
	sub_825FAA68(ctx, base);
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

__attribute__((alias("__imp__sub_82600E0C"))) PPC_WEAK_FUNC(sub_82600E0C);
PPC_FUNC_IMPL(__imp__sub_82600E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600E10"))) PPC_WEAK_FUNC(sub_82600E10);
PPC_FUNC_IMPL(__imp__sub_82600E10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
loc_82600E58:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stbx r30,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x82600e58
	if (cr6.lt) goto loc_82600E58;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// stb r30,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r30.u8);
	// stb r30,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r30.u8);
	// stb r30,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r30.u8);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// bl 0x82600d00
	ctx.lr = 0x82600E9C;
	sub_82600D00(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f31,748(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f31,752(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// addi r10,r31,768
	ctx.r10.s64 = ctx.r31.s64 + 768;
	// stb r30,744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 744, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// stfs f31,772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// stfs f31,776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// stfs f31,780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// stfs f31,772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// stfs f31,776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// stfs f31,780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// stb r30,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r30.u8);
	// stb r30,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r30.u8);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// stfs f31,772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// stfs f31,776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// stfs f31,780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// bl 0x825fab68
	ctx.lr = 0x82600F24;
	sub_825FAB68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82600F44"))) PPC_WEAK_FUNC(sub_82600F44);
PPC_FUNC_IMPL(__imp__sub_82600F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600F48"))) PPC_WEAK_FUNC(sub_82600F48);
PPC_FUNC_IMPL(__imp__sub_82600F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82600F50:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bne cr6,0x82600f7c
	if (!cr6.eq) goto loc_82600F7C;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82600f94
	if (cr6.eq) goto loc_82600F94;
loc_82600F7C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82600f50
	if (cr6.lt) goto loc_82600F50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82600F94:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82600F9C"))) PPC_WEAK_FUNC(sub_82600F9C);
PPC_FUNC_IMPL(__imp__sub_82600F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600FA0"))) PPC_WEAK_FUNC(sub_82600FA0);
PPC_FUNC_IMPL(__imp__sub_82600FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82600FC4"))) PPC_WEAK_FUNC(sub_82600FC4);
PPC_FUNC_IMPL(__imp__sub_82600FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600FC8"))) PPC_WEAK_FUNC(sub_82600FC8);
PPC_FUNC_IMPL(__imp__sub_82600FC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// bl 0x825face8
	ctx.lr = 0x82601020;
	sub_825FACE8(ctx, base);
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

__attribute__((alias("__imp__sub_82601038"))) PPC_WEAK_FUNC(sub_82601038);
PPC_FUNC_IMPL(__imp__sub_82601038) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// bl 0x825fad38
	ctx.lr = 0x82601070;
	sub_825FAD38(ctx, base);
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

__attribute__((alias("__imp__sub_82601088"))) PPC_WEAK_FUNC(sub_82601088);
PPC_FUNC_IMPL(__imp__sub_82601088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82601090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_826010A0:
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,22320
	ctx.r6.s64 = ctx.r11.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823fca98
	ctx.lr = 0x826010B8;
	sub_823FCA98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fad38
	ctx.lr = 0x826010C0;
	sub_825FAD38(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bge 0x826010a0
	if (!cr0.lt) goto loc_826010A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825fadc0
	ctx.lr = 0x826010D4;
	sub_825FADC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826010E0"))) PPC_WEAK_FUNC(sub_826010E0);
PPC_FUNC_IMPL(__imp__sub_826010E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// bl 0x825faec8
	ctx.lr = 0x82601144;
	sub_825FAEC8(ctx, base);
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

__attribute__((alias("__imp__sub_8260115C"))) PPC_WEAK_FUNC(sub_8260115C);
PPC_FUNC_IMPL(__imp__sub_8260115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82601160"))) PPC_WEAK_FUNC(sub_82601160);
PPC_FUNC_IMPL(__imp__sub_82601160) {
	PPC_FUNC_PROLOGUE();
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82601178"))) PPC_WEAK_FUNC(sub_82601178);
PPC_FUNC_IMPL(__imp__sub_82601178) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,1424
	ctx.r4.s64 = ctx.r4.s64 + 1424;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// bl 0x825ca560
	ctx.lr = 0x8260119C;
	sub_825CA560(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x826011c0
	if (!cr6.lt) goto loc_826011C0;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x826011cc
	goto loc_826011CC;
loc_826011C0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x826011d0
	if (cr6.lt) goto loc_826011D0;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_826011CC:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_826011D0:
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

__attribute__((alias("__imp__sub_826011E8"))) PPC_WEAK_FUNC(sub_826011E8);
PPC_FUNC_IMPL(__imp__sub_826011E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
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
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x825fafe0
	sub_825FAFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82601224"))) PPC_WEAK_FUNC(sub_82601224);
PPC_FUNC_IMPL(__imp__sub_82601224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82601228"))) PPC_WEAK_FUNC(sub_82601228);
PPC_FUNC_IMPL(__imp__sub_82601228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82601230;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82601274
	if (cr6.lt) goto loc_82601274;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82601274
	if (!cr6.lt) goto loc_82601274;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82601274
	if (cr6.lt) goto loc_82601274;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601278
	if (cr6.lt) goto loc_82601278;
loc_82601274:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601278:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826015e0
	if (cr6.eq) goto loc_826015E0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,21976
	ctx.r28.s64 = ctx.r28.s64 + 21976;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825fa8c8
	ctx.lr = 0x82601298;
	sub_825FA8C8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x826012bc
	if (!cr6.lt) goto loc_826012BC;
	// addi r10,r26,76
	ctx.r10.s64 = ctx.r26.s64 + 76;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x826012c0
	goto loc_826012C0;
loc_826012BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826012C0:
	// lbz r29,252(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 252);
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// bge cr6,0x826012dc
	if (!cr6.lt) goto loc_826012DC;
	// addi r10,r26,74
	ctx.r10.s64 = ctx.r26.s64 + 74;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x826012e0
	goto loc_826012E0;
loc_826012DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826012E0:
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// bl 0x82a2a378
	ctx.lr = 0x826012E8;
	sub_82A2A378(ctx, base);
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bge cr6,0x82601310
	if (!cr6.lt) goto loc_82601310;
	// addi r11,r26,74
	ctx.r11.s64 = ctx.r26.s64 + 74;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82601314
	goto loc_82601314;
loc_82601310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82601314:
	// ld r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// bl 0x82a2a378
	ctx.lr = 0x8260131C;
	sub_82A2A378(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82601348
	if (cr6.lt) goto loc_82601348;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82601348
	if (!cr6.lt) goto loc_82601348;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82601348
	if (cr6.lt) goto loc_82601348;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260134c
	if (cr6.lt) goto loc_8260134C;
loc_82601348:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260134C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260139c
	if (cr6.eq) goto loc_8260139C;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// bne cr6,0x8260139c
	if (!cr6.eq) goto loc_8260139C;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x82601388
	if (!cr6.lt) goto loc_82601388;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f0,1280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826013b0
	goto loc_826013B0;
loc_82601388:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,1280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826013b0
	goto loc_826013B0;
loc_8260139C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,8196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8204);
	ctx.f12.f64 = double(temp.f32);
loc_826013B0:
	// extsb r9,r29
	ctx.r9.s64 = ctx.r29.s8;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// cntlzw r10,r26
	ctx.r10.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// li r20,0
	ctx.r20.s64 = 0;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r23,r26,11
	ctx.r23.s64 = ctx.r26.s64 * 11;
	// mulli r22,r29,11
	ctx.r22.s64 = ctx.r29.s64 * 11;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r7,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// frsp f30,f10
	ctx.f30.f64 = double(float(ctx.f10.f64));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f0,20(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// stfs f13,24(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// stfs f12,28(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// lfs f8,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f8,f30
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
loc_82601430:
	// add. r11,r23,r30
	ctx.r11.u64 = ctx.r23.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r27,r22,r30
	ctx.r27.u64 = ctx.r22.u64 + ctx.r30.u64;
	// blt 0x82601448
	if (cr0.lt) goto loc_82601448;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8260144c
	if (cr6.lt) goto loc_8260144C;
loc_82601448:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8260144C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82601514
	if (cr6.eq) goto loc_82601514;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8260146c
	if (cr6.lt) goto loc_8260146C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82601470
	if (cr6.lt) goto loc_82601470;
loc_8260146C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82601470:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82601490
	if (cr6.eq) goto loc_82601490;
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lbz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82601494
	goto loc_82601494;
loc_82601490:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82601494:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82601514
	if (cr6.eq) goto loc_82601514;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bge cr6,0x826014bc
	if (!cr6.lt) goto loc_826014BC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826014c0
	goto loc_826014C0;
loc_826014BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826014C0:
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r6,1280(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1280);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a44de0
	ctx.lr = 0x826014DC;
	sub_82A44DE0(ctx, base);
	// lfs f0,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x826014f8
	if (!cr6.gt) goto loc_826014F8;
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// or r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 | ctx.r25.u64;
	// clrlwi r20,r10,16
	ctx.r20.u64 = ctx.r10.u32 & 0xFFFF;
loc_826014F8:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bgt cr6,0x82601514
	if (cr6.gt) goto loc_82601514;
	// clrlwi r11,r21,16
	ctx.r11.u64 = ctx.r21.u32 & 0xFFFF;
	// or r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 | ctx.r25.u64;
	// clrlwi r21,r10,16
	ctx.r21.u64 = ctx.r10.u32 & 0xFFFF;
loc_82601514:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x82601528
	if (cr6.lt) goto loc_82601528;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260152c
	if (cr6.lt) goto loc_8260152C;
loc_82601528:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260152C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826015bc
	if (cr6.eq) goto loc_826015BC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x8260154c
	if (cr6.lt) goto loc_8260154C;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601550
	if (cr6.lt) goto loc_82601550;
loc_8260154C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601550:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601570
	if (cr6.eq) goto loc_82601570;
	// add r11,r27,r19
	ctx.r11.u64 = ctx.r27.u64 + ctx.r19.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82601574
	goto loc_82601574;
loc_82601570:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601574:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826015bc
	if (cr6.eq) goto loc_826015BC;
	// cmplwi cr6,r27,22
	cr6.compare<uint32_t>(ctx.r27.u32, 22, xer);
	// bge cr6,0x8260159c
	if (!cr6.lt) goto loc_8260159C;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826015a0
	goto loc_826015A0;
loc_8260159C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826015A0:
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,1280(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1280);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82a44de0
	ctx.lr = 0x826015BC;
	sub_82A44DE0(ctx, base);
loc_826015BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x82601430
	if (cr6.lt) goto loc_82601430;
	// sth r20,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r20.u16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r21,18(r28)
	PPC_STORE_U16(ctx.r28.u32 + 18, ctx.r21.u16);
	// bl 0x8263ba18
	ctx.lr = 0x826015DC;
	sub_8263BA18(ctx, base);
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
loc_826015E0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826015F4"))) PPC_WEAK_FUNC(sub_826015F4);
PPC_FUNC_IMPL(__imp__sub_826015F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826015F8"))) PPC_WEAK_FUNC(sub_826015F8);
PPC_FUNC_IMPL(__imp__sub_826015F8) {
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
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8260163c
	if (cr6.lt) goto loc_8260163C;
	// bne cr6,0x8260165c
	if (!cr6.eq) goto loc_8260165C;
	// bl 0x825fb9c0
	ctx.lr = 0x82601620;
	sub_825FB9C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260165c
	if (cr6.eq) goto loc_8260165C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// b 0x82601654
	goto loc_82601654;
loc_8260163C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fb758
	ctx.lr = 0x82601644;
	sub_825FB758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260165c
	if (cr6.eq) goto loc_8260165C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82601654:
	// stb r11,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8260165C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// li r5,76
	ctx.r5.s64 = 76;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,21880
	ctx.r3.s64 = ctx.r3.s64 + 21880;
	// bl 0x831ce980
	ctx.lr = 0x82601674;
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

__attribute__((alias("__imp__sub_82601688"))) PPC_WEAK_FUNC(sub_82601688);
PPC_FUNC_IMPL(__imp__sub_82601688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82601690;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce764
	ctx.lr = 0x82601698;
	__savefpr_23(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r16,16(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82a22b40
	ctx.lr = 0x826016C4;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// beq cr6,0x82601c44
	if (cr6.eq) goto loc_82601C44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23768
	ctx.lr = 0x826016EC;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82601710
	if (cr6.eq) goto loc_82601710;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82601714
	if (cr6.eq) goto loc_82601714;
loc_82601710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601714:
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82601c44
	if (!cr6.eq) goto loc_82601C44;
	// lbz r10,60(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 60);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82601738
	if (!cr6.eq) goto loc_82601738;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601c44
	if (cr6.eq) goto loc_82601C44;
loc_82601738:
	// ld r14,4(r18)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r18.u32 + 4);
	// std r14,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r14.u64);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// blt cr6,0x8260176c
	if (cr6.lt) goto loc_8260176C;
	// cmpwi cr6,r15,2
	cr6.compare<int32_t>(ctx.r15.s32, 2, xer);
	// bge cr6,0x8260176c
	if (!cr6.lt) goto loc_8260176C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8260176c
	if (cr6.lt) goto loc_8260176C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601770
	if (cr6.lt) goto loc_82601770;
loc_8260176C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601770:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601c44
	if (cr6.eq) goto loc_82601C44;
	// cmpwi cr6,r15,2
	cr6.compare<int32_t>(ctx.r15.s32, 2, xer);
	// bge cr6,0x82601798
	if (!cr6.lt) goto loc_82601798;
	// addi r11,r15,74
	ctx.r11.s64 = ctx.r15.s64 + 74;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x8260179c
	goto loc_8260179C;
loc_82601798:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260179C:
	// ld r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r18.u32 + 4);
	// bl 0x82a2a378
	ctx.lr = 0x826017A4;
	sub_82A2A378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r15,2
	cr6.compare<int32_t>(ctx.r15.s32, 2, xer);
	// bge cr6,0x826017c4
	if (!cr6.lt) goto loc_826017C4;
	// addi r11,r15,76
	ctx.r11.s64 = ctx.r15.s64 + 76;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826017c8
	goto loc_826017C8;
loc_826017C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826017C8:
	// lbz r29,252(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x826017dc
	if (!cr6.lt) goto loc_826017DC;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82601800
	goto loc_82601800;
loc_826017DC:
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// bge cr6,0x826017ec
	if (!cr6.lt) goto loc_826017EC;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82601800
	goto loc_82601800;
loc_826017EC:
	// li r11,22
	ctx.r11.s64 = 22;
	// srawi r10,r30,31
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r30
	xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// adde r21,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r21.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82601800:
	// addi r11,r21,76
	ctx.r11.s64 = ctx.r21.s64 + 76;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mulli r20,r21,11
	ctx.r20.s64 = ctx.r21.s64 * 11;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82a29b60
	ctx.lr = 0x82601820;
	sub_82A29B60(ctx, base);
	// add r17,r3,r20
	ctx.r17.u64 = ctx.r3.u64 + ctx.r20.u64;
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x82601840
	if (!cr6.lt) goto loc_82601840;
	// addi r11,r30,30
	ctx.r11.s64 = ctx.r30.s64 + 30;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r19,r9,r10
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82601844
	goto loc_82601844;
loc_82601840:
	// li r19,0
	ctx.r19.s64 = 0;
loc_82601844:
	// addi r4,r18,74
	ctx.r4.s64 = ctx.r18.s64 + 74;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a3fca8
	ctx.lr = 0x82601850;
	sub_82A3FCA8(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f12,-11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11412);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f23,f8,f12
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// bl 0x82a40900
	ctx.lr = 0x82601890;
	sub_82A40900(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f4,8164(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 8164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8156(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 8156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x826018B4;
	sub_825C3EC0(ctx, base);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// addis r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 65536;
	// addis r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 65536;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// addi r22,r22,20320
	ctx.r22.s64 = ctx.r22.s64 + 20320;
	// addi r28,r28,20120
	ctx.r28.s64 = ctx.r28.s64 + 20120;
	// addi r11,r11,12384
	ctx.r11.s64 = ctx.r11.s64 + 12384;
	// bge cr6,0x826018e8
	if (!cr6.lt) goto loc_826018E8;
	// addi r10,r30,7
	ctx.r10.s64 = ctx.r30.s64 + 7;
	// mulli r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 * 200;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826018ec
	goto loc_826018EC;
loc_826018E8:
	// addi r23,r11,1400
	ctx.r23.s64 = ctx.r11.s64 + 1400;
loc_826018EC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lfs f27,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f25,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,24504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24504);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,16088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16088);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,-4460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4460);
	ctx.f26.f64 = double(temp.f32);
loc_82601914:
	// add. r30,r20,r29
	ctx.r30.u64 = ctx.r20.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt 0x82601928
	if (cr0.lt) goto loc_82601928;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260192c
	if (cr6.lt) goto loc_8260192C;
loc_82601928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260192C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601a24
	if (cr6.eq) goto loc_82601A24;
	// cmpw cr6,r17,r30
	cr6.compare<int32_t>(ctx.r17.s32, ctx.r30.s32, xer);
	// beq cr6,0x82601a24
	if (cr6.eq) goto loc_82601A24;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82601954
	if (cr6.lt) goto loc_82601954;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601958
	if (cr6.lt) goto loc_82601958;
loc_82601954:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601958:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260197c
	if (cr6.eq) goto loc_8260197C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82601980
	goto loc_82601980;
loc_8260197C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601980:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601a24
	if (cr6.eq) goto loc_82601A24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825ca600
	ctx.lr = 0x82601998;
	sub_825CA600(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bge cr6,0x826019ac
	if (!cr6.lt) goto loc_826019AC;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
loc_826019AC:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lfsx f2,r11,r22
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x826019BC;
	sub_825CE9F8(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x826019e0
	if (!cr6.lt) goto loc_826019E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ca600
	ctx.lr = 0x826019D8;
	sub_825CA600(ctx, base);
	// fcmpu cr6,f24,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f24.f64, ctx.f1.f64);
	// bgt cr6,0x82601a00
	if (cr6.gt) goto loc_82601A00;
loc_826019E0:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82601a24
	if (!cr6.lt) goto loc_82601A24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ca600
	ctx.lr = 0x826019F8;
	sub_825CA600(ctx, base);
	// fcmpu cr6,f1,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bge cr6,0x82601a24
	if (!cr6.lt) goto loc_82601A24;
loc_82601A00:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82601a18
	if (!cr6.gt) goto loc_82601A18;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82601a24
	goto loc_82601A24;
loc_82601A18:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
loc_82601A24:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// blt cr6,0x82601914
	if (cr6.lt) goto loc_82601914;
	// mulli r11,r21,88
	ctx.r11.s64 = ctx.r21.s64 * 88;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r17
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, xer);
	// bne cr6,0x82601a48
	if (!cr6.eq) goto loc_82601A48;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82601A48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826417b8
	ctx.lr = 0x82601A50;
	sub_826417B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82644f80
	ctx.lr = 0x82601A5C;
	sub_82644F80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fa938
	ctx.lr = 0x82601A68;
	sub_825FA938(ctx, base);
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// std r14,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r14.u64);
	// addi r4,r18,68
	ctx.r4.s64 = ctx.r18.s64 + 68;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r15,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r15.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a3fca8
	ctx.lr = 0x82601A88;
	sub_82A3FCA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x82639290
	ctx.lr = 0x82601AB8;
	sub_82639290(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f9,64(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f10,60(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lfs f8,4(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stb r24,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r24.u8);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stb r25,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r25.u8);
	// stfs f23,84(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r26,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r26.u8);
	// bl 0x82642b30
	ctx.lr = 0x82601B14;
	sub_82642B30(ctx, base);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82601b28
	if (cr6.eq) goto loc_82601B28;
	// lbz r11,84(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 84);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82601B28:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x82601b3c
	if (cr6.lt) goto loc_82601B3C;
	// cmpwi cr6,r17,22
	cr6.compare<int32_t>(ctx.r17.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601b40
	if (cr6.lt) goto loc_82601B40;
loc_82601B3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601B40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601be8
	if (cr6.eq) goto loc_82601BE8;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x82601b60
	if (cr6.lt) goto loc_82601B60;
	// cmpwi cr6,r17,22
	cr6.compare<int32_t>(ctx.r17.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601b64
	if (cr6.lt) goto loc_82601B64;
loc_82601B60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601B64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601b88
	if (cr6.eq) goto loc_82601B88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r17,r11
	ctx.r10.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lbz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82601b8c
	goto loc_82601B8C;
loc_82601B88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601B8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601be8
	if (cr6.eq) goto loc_82601BE8;
	// cmplwi cr6,r17,22
	cr6.compare<uint32_t>(ctx.r17.u32, 22, xer);
	// bge cr6,0x82601bb4
	if (!cr6.lt) goto loc_82601BB4;
	// addi r11,r17,8
	ctx.r11.s64 = ctx.r17.s64 + 8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82601bb8
	goto loc_82601BB8;
loc_82601BB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601BB8:
	// lwz r9,1280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lwz r8,1284(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lwz r10,1288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82601BE8:
	// rlwinm r11,r29,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82601c28
	if (cr6.eq) goto loc_82601C28;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,76
	ctx.r5.s64 = 76;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,21880
	ctx.r4.s64 = ctx.r4.s64 + 21880;
	// bl 0x831ce980
	ctx.lr = 0x82601C0C;
	sub_831CE980(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82601C28:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b0
	ctx.lr = 0x82601C40;
	__restfpr_23(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82601C44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b0
	ctx.lr = 0x82601C54;
	__restfpr_23(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82601C58"))) PPC_WEAK_FUNC(sub_82601C58);
PPC_FUNC_IMPL(__imp__sub_82601C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82601C60;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce778
	ctx.lr = 0x82601C68;
	__savefpr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r30,r30,22272
	ctx.r30.s64 = ctx.r30.s64 + 22272;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r23,16(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a22c10
	ctx.lr = 0x82601CA0;
	sub_82A22C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x82639708
	ctx.lr = 0x82601CB0;
	sub_82639708(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82601ce0
	if (!cr6.eq) goto loc_82601CE0;
	// lwz r11,5388(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5388);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82601cd8
	if (cr6.eq) goto loc_82601CD8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82601CD8:
	// bl 0x82a44e30
	ctx.lr = 0x82601CDC;
	sub_82A44E30(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
loc_82601CE0:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82601d0c
	if (cr6.lt) goto loc_82601D0C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82601d0c
	if (!cr6.lt) goto loc_82601D0C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82601d0c
	if (cr6.lt) goto loc_82601D0C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601d10
	if (cr6.lt) goto loc_82601D10;
loc_82601D0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601d3c
	if (cr6.eq) goto loc_82601D3C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82601d38
	if (cr6.eq) goto loc_82601D38;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601D38;
	sub_82A44E30(ctx, base);
loc_82601D38:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82601D3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23768
	ctx.lr = 0x82601D4C;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82601D5C;
	sub_831CE980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82601D68;
	sub_82A22B40(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82601d8c
	if (cr6.eq) goto loc_82601D8C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82601d90
	if (!cr6.eq) goto loc_82601D90;
loc_82601D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601D90:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f30,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82601f38
	if (cr6.eq) goto loc_82601F38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601DB8;
	sub_82A44E30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601DC8;
	sub_82A44E30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601DD8;
	sub_82A44E30(ctx, base);
	// addi r4,r26,74
	ctx.r4.s64 = ctx.r26.s64 + 74;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a3fca8
	ctx.lr = 0x82601DE4;
	sub_82A3FCA8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r26,80
	ctx.r4.s64 = ctx.r26.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f31,f13,f13,f11
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// bl 0x82a3fca8
	ctx.lr = 0x82601E08;
	sub_82A3FCA8(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f13,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82601e48
	if (cr6.eq) goto loc_82601E48;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82601e48
	if (!cr6.lt) goto loc_82601E48;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-6680(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -6680);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82601e4c
	if (!cr6.lt) goto loc_82601E4C;
loc_82601E48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601E4C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82601e7c
	if (cr6.lt) goto loc_82601E7C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82601e7c
	if (!cr6.lt) goto loc_82601E7C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82601e7c
	if (cr6.lt) goto loc_82601E7C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82601e80
	if (cr6.lt) goto loc_82601E80;
loc_82601E7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601E80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601ebc
	if (cr6.eq) goto loc_82601EBC;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82601ebc
	if (!cr6.eq) goto loc_82601EBC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r9,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r9.u32);
	// bl 0x82642c38
	ctx.lr = 0x82601EB8;
	sub_82642C38(ctx, base);
	// b 0x82601f38
	goto loc_82601F38;
loc_82601EBC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82601f38
	if (!cr6.eq) goto loc_82601F38;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82601f38
	if (!cr6.eq) goto loc_82601F38;
	// lwz r31,48(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82601ee8
	if (cr6.eq) goto loc_82601EE8;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bne cr6,0x82601ef8
	if (!cr6.eq) goto loc_82601EF8;
loc_82601EE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601EF8;
	sub_82A44E30(ctx, base);
loc_82601EF8:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r4,14
	ctx.r4.s64 = 14;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82a44e30
	ctx.lr = 0x82601F10;
	sub_82A44E30(ctx, base);
	// addi r9,r31,-2
	ctx.r9.s64 = ctx.r31.s64 + -2;
	// li r4,15
	ctx.r4.s64 = 15;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82a44e30
	ctx.lr = 0x82601F28;
	sub_82A44E30(ctx, base);
	// lwz r7,16(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r7,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r7.u32);
	// bl 0x8263ccc8
	ctx.lr = 0x82601F38;
	sub_8263CCC8(ctx, base);
loc_82601F38:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82601f70
	if (cr6.eq) goto loc_82601F70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601F54;
	sub_82A44E30(ctx, base);
	// lbz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82601f70
	if (!cr6.eq) goto loc_82601F70;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82601F70;
	sub_82A44E30(ctx, base);
loc_82601F70:
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82601f84
	if (cr6.eq) goto loc_82601F84;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r11.u8);
loc_82601F84:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82642b30
	ctx.lr = 0x82601F8C;
	sub_82642B30(ctx, base);
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82601f9c
	if (!cr6.gt) goto loc_82601F9C;
	// stfs f1,132(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
loc_82601F9C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82602200
	if (!cr6.eq) goto loc_82602200;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602200
	if (!cr6.eq) goto loc_82602200;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bge cr6,0x82601fe0
	if (!cr6.lt) goto loc_82601FE0;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82601fe4
	goto loc_82601FE4;
loc_82601FE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82601FE4:
	// lfs f31,8156(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8156);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f29,8164(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8164);
	ctx.f29.f64 = double(temp.f32);
	// lbz r31,252(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lfs f28,8160(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8160);
	ctx.f28.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x8260200C;
	sub_825C3EC0(ctx, base);
	// fmuls f13,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// ori r29,r10,20120
	ctx.r29.u64 = ctx.r10.u64 | 20120;
	// lfs f0,-11412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11412);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f11,f31,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,124(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// bne cr6,0x82602140
	if (!cr6.eq) goto loc_82602140;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4472(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4472);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82602140
	if (cr6.eq) goto loc_82602140;
	// extsb r9,r31
	ctx.r9.s64 = ctx.r31.s8;
	// lfs f0,8144(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f31,f12,f9
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// bge cr6,0x8260209c
	if (!cr6.lt) goto loc_8260209C;
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826020a0
	goto loc_826020A0;
loc_8260209C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826020A0:
	// ld r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 20);
	// bl 0x82a2a378
	ctx.lr = 0x826020A8;
	sub_82A2A378(ctx, base);
	// lfs f0,8144(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x826020d8
	if (cr6.lt) goto loc_826020D8;
	// lfs f0,8152(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8152);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,28(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x826020dc
	if (!cr6.gt) goto loc_826020DC;
loc_826020D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826020DC:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x825ca600
	ctx.lr = 0x826020EC;
	sub_825CA600(ctx, base);
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82602108
	if (cr6.gt) goto loc_82602108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602108:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82602120
	if (!cr6.eq) goto loc_82602120;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602140
	if (cr6.eq) goto loc_82602140;
loc_82602120:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82602140
	if (!cr6.gt) goto loc_82602140;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x82602138;
	sub_82A44E30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,88(r30)
	PPC_STORE_U8(ctx.r30.u32 + 88, ctx.r11.u8);
loc_82602140:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82602158
	if (cr6.lt) goto loc_82602158;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260215c
	if (cr6.lt) goto loc_8260215C;
loc_82602158:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260215C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602200
	if (!cr6.eq) goto loc_82602200;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bge cr6,0x82602184
	if (!cr6.lt) goto loc_82602184;
	// mulli r10,r28,88
	ctx.r10.s64 = ctx.r28.s64 * 88;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82602188
	goto loc_82602188;
loc_82602184:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82602188:
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x8260219c
	if (!cr6.lt) goto loc_8260219C;
	// mulli r10,r28,88
	ctx.r10.s64 = ctx.r28.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8260219C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x826021b4
	if (cr6.lt) goto loc_826021B4;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826021b8
	if (cr6.lt) goto loc_826021B8;
loc_826021B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826021B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602200
	if (cr6.eq) goto loc_82602200;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-6696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6696);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82602200
	if (!cr6.lt) goto loc_82602200;
	// addi r11,r31,21464
	ctx.r11.s64 = ctx.r31.s64 + 21464;
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x826021E8;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-19988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19988);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82602200
	if (!cr6.lt) goto loc_82602200;
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
loc_82602200:
	// clrlwi r31,r21,24
	ctx.r31.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82602320
	if (cr6.eq) goto loc_82602320;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826022bc
	if (cr6.eq) goto loc_826022BC;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260223c
	if (!cr6.eq) goto loc_8260223C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x8260223C;
	sub_82A44E30(ctx, base);
loc_8260223C:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// srawi r10,r11,9
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82602278
	if (cr6.eq) goto loc_82602278;
	// addi r4,r26,68
	ctx.r4.s64 = ctx.r26.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a3fca8
	ctx.lr = 0x8260225C;
	sub_82A3FCA8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82602290
	goto loc_82602290;
loc_82602278:
	// lwz r11,8144(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8144);
	// lwz r9,8148(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8148);
	// lwz r10,8152(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_82602290:
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// srawi r10,r11,11
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// b 0x82602314
	goto loc_82602314;
loc_826022BC:
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826022fc
	if (cr6.eq) goto loc_826022FC;
	// srawi r11,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82602320
	if (cr6.eq) goto loc_82602320;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82602320
	if (!cr6.eq) goto loc_82602320;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a44e30
	ctx.lr = 0x826022F8;
	sub_82A44E30(ctx, base);
	// b 0x82602320
	goto loc_82602320;
loc_826022FC:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82602320
	if (cr6.eq) goto loc_82602320;
	// srawi r11,r11,11
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 11;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
loc_82602314:
	// bne cr6,0x82602320
	if (!cr6.eq) goto loc_82602320;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8263ccc8
	ctx.lr = 0x82602320;
	sub_8263CCC8(ctx, base);
loc_82602320:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x82602330
	if (!cr6.eq) goto loc_82602330;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82602354
	if (cr6.eq) goto loc_82602354;
loc_82602330:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r24,872
	ctx.r3.s64 = ctx.r24.s64 + 872;
	// bl 0x82a44eb8
	ctx.lr = 0x82602340;
	sub_82A44EB8(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82602354
	if (!cr6.eq) goto loc_82602354;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,900(r24)
	PPC_STORE_U32(ctx.r24.u32 + 900, ctx.r11.u32);
loc_82602354:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83102db0
	ctx.lr = 0x8260235C;
	sub_83102DB0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x831ce7c4
	ctx.lr = 0x8260236C;
	__restfpr_28(ctx, base);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82602370"))) PPC_WEAK_FUNC(sub_82602370);
PPC_FUNC_IMPL(__imp__sub_82602370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addic. r30,r30,21832
	xer.ca = ctx.r30.u32 > 4294945463;
	ctx.r30.s64 = ctx.r30.s64 + 21832;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x826024a0
	if (cr0.eq) goto loc_826024A0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82602464
	if (cr6.lt) goto loc_82602464;
	// bne cr6,0x82602480
	if (!cr6.eq) goto loc_82602480;
	// bl 0x825fbd98
	ctx.lr = 0x826023AC;
	sub_825FBD98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826023ec
	if (cr6.eq) goto loc_826023EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stb r11,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r11.u8);
	// stb r11,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r11.u8);
	// b 0x82602480
	goto loc_82602480;
loc_826023EC:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602480
	if (cr6.eq) goto loc_82602480;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x82602448
	if (cr6.eq) goto loc_82602448;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82602418:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82602418
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602418;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82602438:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82602438
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602438;
	// b 0x82602480
	goto loc_82602480;
loc_82602448:
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82602454:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82602454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602454;
	// b 0x82602480
	goto loc_82602480;
loc_82602464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fbbc0
	ctx.lr = 0x8260246C;
	sub_825FBBC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602480
	if (cr6.eq) goto loc_82602480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82602480:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82602494:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82602494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602494;
loc_826024A0:
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

__attribute__((alias("__imp__sub_826024B8"))) PPC_WEAK_FUNC(sub_826024B8);
PPC_FUNC_IMPL(__imp__sub_826024B8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82602584
	if (cr6.lt) goto loc_82602584;
	// beq cr6,0x82602568
	if (cr6.eq) goto loc_82602568;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x826025a0
	if (!cr6.eq) goto loc_826025A0;
	// bl 0x825fbf98
	ctx.lr = 0x826024E8;
	sub_825FBF98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826025a0
	if (cr6.eq) goto loc_826025A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r8,r8,26292
	ctx.r8.s64 = ctx.r8.s64 + 26292;
	// li r6,255
	ctx.r6.s64 = 255;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,26316
	ctx.r4.s64 = ctx.r4.s64 + 26316;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// sth r11,18(r4)
	PPC_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
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
loc_82602568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fc010
	ctx.lr = 0x82602570;
	sub_825FC010(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826025a0
	if (cr6.eq) goto loc_826025A0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8260259c
	goto loc_8260259C;
loc_82602584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fbed0
	ctx.lr = 0x8260258C;
	sub_825FBED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826025a0
	if (cr6.eq) goto loc_826025A0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260259C:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826025A0:
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

__attribute__((alias("__imp__sub_826025B4"))) PPC_WEAK_FUNC(sub_826025B4);
PPC_FUNC_IMPL(__imp__sub_826025B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826025B8"))) PPC_WEAK_FUNC(sub_826025B8);
PPC_FUNC_IMPL(__imp__sub_826025B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addic. r10,r10,22408
	xer.ca = ctx.r10.u32 > 4294944887;
	ctx.r10.s64 = ctx.r10.s64 + 22408;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826026f0
	if (cr0.eq) goto loc_826026F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826026f0
	if (cr6.eq) goto loc_826026F0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x826026f0
	if (cr6.gt) goto loc_826026F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82602644
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82602644;
	// bdzf 4*cr6+eq,0x8260268c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260268C;
	// bdzf 4*cr6+eq,0x826026f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826026F0;
	// bdzf 4*cr6+eq,0x826026f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826026F0;
	// bne cr6,0x826026bc
	if (!cr6.eq) goto loc_826026BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fc398
	ctx.lr = 0x8260261C;
	sub_825FC398(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826026f0
	if (cr6.eq) goto loc_826026F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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
loc_82602644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fc530
	ctx.lr = 0x8260264C;
	sub_825FC530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826026f0
	if (cr6.eq) goto loc_826026F0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602670
	if (!cr6.eq) goto loc_82602670;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826026a0
	if (cr6.eq) goto loc_826026A0;
loc_82602670:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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
loc_8260268C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fc750
	ctx.lr = 0x82602694;
	sub_825FC750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826026f0
	if (cr6.eq) goto loc_826026F0;
loc_826026A0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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
loc_826026BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,115
	ctx.r8.s64 = 115;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_826026F0:
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

__attribute__((alias("__imp__sub_82602704"))) PPC_WEAK_FUNC(sub_82602704);
PPC_FUNC_IMPL(__imp__sub_82602704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82602708"))) PPC_WEAK_FUNC(sub_82602708);
PPC_FUNC_IMPL(__imp__sub_82602708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// addic. r31,r31,25104
	xer.ca = ctx.r31.u32 > 4294942191;
	ctx.r31.s64 = ctx.r31.s64 + 25104;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82602770
	if (cr0.eq) goto loc_82602770;
	// lwz r11,4460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82602768
	if (!cr6.eq) goto loc_82602768;
	// bl 0x82a29f40
	ctx.lr = 0x82602740;
	sub_82A29F40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602768
	if (cr6.eq) goto loc_82602768;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602760
	if (!cr6.eq) goto loc_82602760;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8260276c
	goto loc_8260276C;
loc_82602760:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8260276c
	goto loc_8260276C;
loc_82602768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260276C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82602770:
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

__attribute__((alias("__imp__sub_82602784"))) PPC_WEAK_FUNC(sub_82602784);
PPC_FUNC_IMPL(__imp__sub_82602784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82602788"))) PPC_WEAK_FUNC(sub_82602788);
PPC_FUNC_IMPL(__imp__sub_82602788) {
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
	// lwz r11,1672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1672);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x826027d8
	if (cr6.eq) goto loc_826027D8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x826027d0
	if (cr6.eq) goto loc_826027D0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x826027c8
	if (cr6.eq) goto loc_826027C8;
	// bl 0x825fcfb8
	ctx.lr = 0x826027C4;
	sub_825FCFB8(ctx, base);
	// b 0x826027dc
	goto loc_826027DC;
loc_826027C8:
	// bl 0x825fce08
	ctx.lr = 0x826027CC;
	sub_825FCE08(ctx, base);
	// b 0x826027dc
	goto loc_826027DC;
loc_826027D0:
	// bl 0x825fcbe0
	ctx.lr = 0x826027D4;
	sub_825FCBE0(ctx, base);
	// b 0x826027dc
	goto loc_826027DC;
loc_826027D8:
	// bl 0x825fcb18
	ctx.lr = 0x826027DC;
	sub_825FCB18(ctx, base);
loc_826027DC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826027ec
	if (cr6.eq) goto loc_826027EC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_826027EC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602800
	if (!cr6.eq) goto loc_82602800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fd080
	ctx.lr = 0x82602800;
	sub_825FD080(ctx, base);
loc_82602800:
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

__attribute__((alias("__imp__sub_8260281C"))) PPC_WEAK_FUNC(sub_8260281C);
PPC_FUNC_IMPL(__imp__sub_8260281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82602820"))) PPC_WEAK_FUNC(sub_82602820);
PPC_FUNC_IMPL(__imp__sub_82602820) {
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
	ctx.lr = 0x82602828;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce778
	ctx.lr = 0x82602830;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82602f48
	if (cr6.gt) goto loc_82602F48;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10340
	ctx.r12.s64 = ctx.r12.s64 + 10340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82602E84;
	case 1:
		goto loc_82602F48;
	case 2:
		goto loc_82602E84;
	case 3:
		goto loc_82602F48;
	case 4:
		goto loc_82602E3C;
	case 5:
		goto loc_82602F48;
	case 6:
		goto loc_82602F48;
	case 7:
		goto loc_82602F48;
	case 8:
		goto loc_82602F48;
	case 9:
		goto loc_82602C04;
	case 10:
		goto loc_82602F48;
	case 11:
		goto loc_82602894;
	default:
		return;
	}
	// lwz r19,11908(0)
	ctx.r19.u64 = PPC_LOAD_U32(11908);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,11908(0)
	ctx.r19.u64 = PPC_LOAD_U32(11908);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,11836(0)
	ctx.r19.u64 = PPC_LOAD_U32(11836);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,11268(0)
	ctx.r19.u64 = PPC_LOAD_U32(11268);
	// lwz r19,12104(0)
	ctx.r19.u64 = PPC_LOAD_U32(12104);
	// lwz r19,10388(0)
	ctx.r19.u64 = PPC_LOAD_U32(10388);
loc_82602894:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x826028b0
	if (!cr6.lt) goto loc_826028B0;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826028b4
	goto loc_826028B4;
loc_826028B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826028B4:
	// lbz r11,253(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602bf0
	if (!cr6.eq) goto loc_82602BF0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82602bf0
	if (!cr6.eq) goto loc_82602BF0;
	// addi r27,r30,1700
	ctx.r27.s64 = ctx.r30.s64 + 1700;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82600f48
	ctx.lr = 0x826028EC;
	sub_82600F48(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// ori r29,r10,20408
	ctx.r29.u64 = ctx.r10.u64 | 20408;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f28,-7352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82602a14
	if (cr6.eq) goto loc_82602A14;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bge cr6,0x82602940
	if (!cr6.lt) goto loc_82602940;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x82602944
	goto loc_82602944;
loc_82602940:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602944:
	// lbz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x82602a14
	if (!cr6.lt) goto loc_82602A14;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x8260298c
	if (!cr6.lt) goto loc_8260298C;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x82602990
	goto loc_82602990;
loc_8260298C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82602990:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a2b188
	ctx.lr = 0x82602998;
	sub_82A2B188(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826029ac
	if (cr6.lt) goto loc_826029AC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826029b0
	if (cr6.lt) goto loc_826029B0;
loc_826029AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826029B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602a14
	if (cr6.eq) goto loc_82602A14;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x826029d8
	if (!cr6.lt) goto loc_826029D8;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826029dc
	goto loc_826029DC;
loc_826029D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826029DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,1280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lwz r8,1284(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lwz r7,1288(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lfs f12,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// fsubs f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82602f48
	if (cr6.lt) goto loc_82602F48;
loc_82602A14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4480(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4480);
	// bl 0x83740858
	ctx.lr = 0x82602A24;
	sub_83740858(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bge cr6,0x82602a4c
	if (!cr6.lt) goto loc_82602A4C;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82600f48
	ctx.lr = 0x82602A40;
	sub_82600F48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602bf0
	if (cr6.eq) goto loc_82602BF0;
loc_82602A4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r28,r10
	ctx.r8.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lfs f13,68(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bge cr6,0x82602a9c
	if (!cr6.lt) goto loc_82602A9C;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602aa0
	goto loc_82602AA0;
loc_82602A9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602AA0:
	// lbz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lfs f29,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f0,16088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16088);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f31,f10,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f30,f29,f10
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fadds f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f30,f9
	cr6.compare(ctx.f30.f64, ctx.f9.f64);
	// blt cr6,0x82602afc
	if (cr6.lt) goto loc_82602AFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4480(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4480);
	// bl 0x83740858
	ctx.lr = 0x82602AE8;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82602be0
	if (cr6.gt) goto loc_82602BE0;
loc_82602AFC:
	// fadds f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x82602bf0
	if (cr6.lt) goto loc_82602BF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r31,4472(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// bl 0x82a22b40
	ctx.lr = 0x82602B20;
	sub_82A22B40(ctx, base);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// blt cr6,0x82602be0
	if (cr6.lt) goto loc_82602BE0;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82602b4c
	if (!cr6.lt) goto loc_82602B4C;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602b50
	goto loc_82602B50;
loc_82602B4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82602B50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a2b188
	ctx.lr = 0x82602B58;
	sub_82A2B188(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82602b6c
	if (cr6.lt) goto loc_82602B6C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82602b70
	if (cr6.lt) goto loc_82602B70;
loc_82602B6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602B70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602bf0
	if (cr6.eq) goto loc_82602BF0;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// bge cr6,0x82602b98
	if (!cr6.lt) goto loc_82602B98;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602b9c
	goto loc_82602B9C;
loc_82602B98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602B9C:
	// lwz r9,1288(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,1284(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-23488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23488);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82602bf0
	if (cr6.gt) goto loc_82602BF0;
loc_82602BE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-6668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6668);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82602f48
	if (!cr6.lt) goto loc_82602F48;
loc_82602BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82602C00;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82602C04:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82602c20
	if (!cr6.lt) goto loc_82602C20;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602c24
	goto loc_82602C24;
loc_82602C20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602C24:
	// lbz r11,253(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 253);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602bf0
	if (!cr6.eq) goto loc_82602BF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,20408
	ctx.r10.s64 = ctx.r10.s64 + 20408;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bge cr6,0x82602c70
	if (!cr6.lt) goto loc_82602C70;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602c74
	goto loc_82602C74;
loc_82602C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602C74:
	// lbz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lfs f29,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// fctiwz f12,f31
	ctx.f12.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lbz r31,95(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82a48068
	ctx.lr = 0x82602CBC;
	sub_82A48068(ctx, base);
	// rlwinm r7,r3,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82602f48
	if (!cr6.eq) goto loc_82602F48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmuls f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,-6672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f31,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82602d08
	if (!cr6.lt) goto loc_82602D08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f29
	ctx.f12.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82602f48
	if (cr6.lt) goto loc_82602F48;
loc_82602D08:
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a48068
	ctx.lr = 0x82602D20;
	sub_82A48068(ctx, base);
	// rlwinm r11,r3,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82602dcc
	if (cr6.eq) goto loc_82602DCC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82602d54
	if (cr6.eq) goto loc_82602D54;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82602d54
	if (cr6.eq) goto loc_82602D54;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602d7c
	goto loc_82602D7C;
loc_82602D54:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82602d78
	if (!cr6.lt) goto loc_82602D78;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602d7c
	goto loc_82602D7C;
loc_82602D78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82602D7C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f13,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x825ca560
	ctx.lr = 0x82602DB0;
	sub_825CA560(ctx, base);
	// lfs f2,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x82602DB8;
	sub_825CE9F8(ctx, base);
	// fabs f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-20096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82602f48
	if (cr6.gt) goto loc_82602F48;
loc_82602DCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82602DDC;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82602e04
	if (!cr6.eq) goto loc_82602E04;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82602dfc
	if (cr6.eq) goto loc_82602DFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82602e04
	if (!cr6.eq) goto loc_82602E04;
loc_82602DFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82602e08
	goto loc_82602E08;
loc_82602E04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602E08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82602f48
	if (!cr6.eq) goto loc_82602F48;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82602e28
	if (!cr6.eq) goto loc_82602E28;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x82602f48
	if (cr6.eq) goto loc_82602F48;
loc_82602E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82602E38;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82602E3C:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82602e58
	if (!cr6.lt) goto loc_82602E58;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82602e5c
	goto loc_82602E5C;
loc_82602E58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602E5C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44296
	ctx.r9.u64 = ctx.r10.u64 | 44296;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82602f48
	if (cr6.eq) goto loc_82602F48;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82602E80;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82602E84:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r5,r28,11
	ctx.r5.s64 = ctx.r28.s64 * 11;
	// li r6,15304
	ctx.r6.s64 = 15304;
loc_82602E98:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add. r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x82602eb0
	if (cr0.lt) goto loc_82602EB0;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82602eb4
	if (cr6.lt) goto loc_82602EB4;
loc_82602EB0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82602EB4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82602ed4
	if (cr6.eq) goto loc_82602ED4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82602ed8
	goto loc_82602ED8;
loc_82602ED4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602ED8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602f20
	if (cr6.eq) goto loc_82602F20;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bge cr6,0x82602efc
	if (!cr6.lt) goto loc_82602EFC;
	// addi r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 + 76;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x82602f00
	goto loc_82602F00;
loc_82602EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82602F00:
	// addi r11,r11,3612
	ctx.r11.s64 = ctx.r11.s64 + 3612;
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// bge cr6,0x82602f14
	if (!cr6.lt) goto loc_82602F14;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// b 0x82602f18
	goto loc_82602F18;
loc_82602F14:
	// lwz r11,15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15304);
loc_82602F18:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82602f34
	if (cr6.eq) goto loc_82602F34;
loc_82602F20:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r6,15348
	cr6.compare<int32_t>(ctx.r6.s32, 15348, xer);
	// blt cr6,0x82602e98
	if (cr6.lt) goto loc_82602E98;
	// b 0x82602f38
	goto loc_82602F38;
loc_82602F34:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82602F38:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82602f4c
	if (cr6.eq) goto loc_82602F4C;
loc_82602F48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82602F4C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7c4
	ctx.lr = 0x82602F58;
	__restfpr_28(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82602F5C"))) PPC_WEAK_FUNC(sub_82602F5C);
PPC_FUNC_IMPL(__imp__sub_82602F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82602F60"))) PPC_WEAK_FUNC(sub_82602F60);
PPC_FUNC_IMPL(__imp__sub_82602F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82602F68;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4460);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82602f98
	if (!cr6.eq) goto loc_82602F98;
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82602f98
	if (!cr6.eq) goto loc_82602F98;
	// addi r3,r3,1700
	ctx.r3.s64 = ctx.r3.s64 + 1700;
	// bl 0x825fac70
	ctx.lr = 0x82602F98;
	sub_825FAC70(ctx, base);
loc_82602F98:
	// li r15,0
	ctx.r15.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mr r17,r15
	ctx.r17.u64 = ctx.r15.u64;
	// ori r14,r11,39112
	ctx.r14.u64 = ctx.r11.u64 | 39112;
loc_82602FB0:
	// cmpwi cr6,r16,2
	cr6.compare<int32_t>(ctx.r16.s32, 2, xer);
	// bge cr6,0x82602fc8
	if (!cr6.lt) goto loc_82602FC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// lwz r22,304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// b 0x82602fcc
	goto loc_82602FCC;
loc_82602FC8:
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
loc_82602FCC:
	// lbz r11,253(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 253);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bl 0x82a33718
	ctx.lr = 0x82602FF0;
	sub_82A33718(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82603020
	if (!cr6.eq) goto loc_82603020;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82a32ec0
	ctx.lr = 0x8260300C;
	sub_82A32EC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82603020
	if (!cr6.eq) goto loc_82603020;
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
	// b 0x82603028
	goto loc_82603028;
loc_82603020:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82603028:
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
loc_82603030:
	// add r31,r17,r18
	ctx.r31.u64 = ctx.r17.u64 + ctx.r18.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r11,r31,426
	ctx.r11.s64 = ctx.r31.s64 + 426;
	// addi r10,r31,434
	ctx.r10.s64 = ctx.r31.s64 + 434;
	// addi r9,r31,442
	ctx.r9.s64 = ctx.r31.s64 + 442;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r10,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r9,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzx r21,r25,r30
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// lwzx r19,r24,r30
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r30.u32);
	// lwzx r20,r23,r30
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r30.u32);
	// bl 0x82a14490
	ctx.lr = 0x82603068;
	sub_82A14490(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826030a8
	if (cr6.eq) goto loc_826030A8;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a14460
	ctx.lr = 0x82603084;
	sub_82A14460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826030a8
	if (!cr6.eq) goto loc_826030A8;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826030a8
	if (cr6.eq) goto loc_826030A8;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// b 0x826030c8
	goto loc_826030C8;
loc_826030A8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82602820
	ctx.lr = 0x826030B8;
	sub_82602820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r8,r29
	ctx.r28.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_826030C8:
	// li r26,255
	ctx.r26.s64 = 255;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// beq cr6,0x826030f8
	if (cr6.eq) goto loc_826030F8;
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// bne cr6,0x8260310c
	if (!cr6.eq) goto loc_8260310C;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a14508
	ctx.lr = 0x826030EC;
	sub_82A14508(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x8260310c
	goto loc_8260310C;
loc_826030F8:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a144d8
	ctx.lr = 0x82603108;
	sub_82A144D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8260310C:
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a145a8
	ctx.lr = 0x8260311C;
	sub_82A145A8(ctx, base);
	// addi r11,r31,458
	ctx.r11.s64 = ctx.r31.s64 + 458;
	// stwx r28,r25,r30
	PPC_STORE_U32(ctx.r25.u32 + ctx.r30.u32, ctx.r28.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r24,r30
	PPC_STORE_U32(ctx.r24.u32 + ctx.r30.u32, ctx.r29.u32);
	// stwx r26,r23,r30
	PPC_STORE_U32(ctx.r23.u32 + ctx.r30.u32, ctx.r26.u32);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// beq cr6,0x82603270
	if (cr6.eq) goto loc_82603270;
	// cmpw cr6,r28,r21
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, xer);
	// bne cr6,0x82603270
	if (!cr6.eq) goto loc_82603270;
	// cmpw cr6,r20,r26
	cr6.compare<int32_t>(ctx.r20.s32, ctx.r26.s32, xer);
	// bne cr6,0x82603270
	if (!cr6.eq) goto loc_82603270;
	// addi r10,r31,450
	ctx.r10.s64 = ctx.r31.s64 + 450;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// lwzx r31,r29,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bgt cr6,0x82603268
	if (cr6.gt) goto loc_82603268;
	// lis r12,-32160
	ctx.r12.s64 = -2107637760;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12668
	ctx.r12.s64 = ctx.r12.s64 + 12668;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826031B0;
	case 1:
		goto loc_826031B0;
	case 2:
		goto loc_826031C8;
	case 3:
		goto loc_826031F4;
	case 4:
		goto loc_82603210;
	case 5:
		goto loc_826031B0;
	case 6:
		goto loc_82603224;
	case 7:
		goto loc_82603268;
	case 8:
		goto loc_82603258;
	case 9:
		goto loc_82603258;
	case 10:
		goto loc_82603258;
	case 11:
		goto loc_82603258;
	case 12:
		goto loc_82603258;
	default:
		return;
	}
	// lwz r19,12720(0)
	ctx.r19.u64 = PPC_LOAD_U32(12720);
	// lwz r19,12720(0)
	ctx.r19.u64 = PPC_LOAD_U32(12720);
	// lwz r19,12744(0)
	ctx.r19.u64 = PPC_LOAD_U32(12744);
	// lwz r19,12788(0)
	ctx.r19.u64 = PPC_LOAD_U32(12788);
	// lwz r19,12816(0)
	ctx.r19.u64 = PPC_LOAD_U32(12816);
	// lwz r19,12720(0)
	ctx.r19.u64 = PPC_LOAD_U32(12720);
	// lwz r19,12836(0)
	ctx.r19.u64 = PPC_LOAD_U32(12836);
	// lwz r19,12904(0)
	ctx.r19.u64 = PPC_LOAD_U32(12904);
	// lwz r19,12888(0)
	ctx.r19.u64 = PPC_LOAD_U32(12888);
	// lwz r19,12888(0)
	ctx.r19.u64 = PPC_LOAD_U32(12888);
	// lwz r19,12888(0)
	ctx.r19.u64 = PPC_LOAD_U32(12888);
	// lwz r19,12888(0)
	ctx.r19.u64 = PPC_LOAD_U32(12888);
	// lwz r19,12888(0)
	ctx.r19.u64 = PPC_LOAD_U32(12888);
loc_826031B0:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82603268
	if (cr6.eq) goto loc_82603268;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r31,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r31.u32);
	// b 0x8260328c
	goto loc_8260328C;
loc_826031C8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a29e38
	ctx.lr = 0x826031D0;
	sub_82A29E38(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82603268
	if (cr6.eq) goto loc_82603268;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82603268
	if (!cr6.lt) goto loc_82603268;
	// addi r11,r3,8507
	ctx.r11.s64 = ctx.r3.s64 + 8507;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// b 0x82603260
	goto loc_82603260;
loc_826031F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34444
	ctx.r10.u64 = ctx.r11.u64 | 34444;
	// lhzx r11,r22,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x82603264
	if (cr6.eq) goto loc_82603264;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// b 0x82603260
	goto loc_82603260;
loc_82603210:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34444
	ctx.r10.u64 = ctx.r11.u64 | 34444;
	// lhzx r9,r22,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r22.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// b 0x82603260
	goto loc_82603260;
loc_82603224:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// add r10,r22,r14
	ctx.r10.u64 = ctx.r22.u64 + ctx.r14.u64;
	// cmpwi cr6,r15,11
	cr6.compare<int32_t>(ctx.r15.s32, 11, xer);
	// bge cr6,0x82603240
	if (!cr6.lt) goto loc_82603240;
loc_82603234:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,36
	cr6.compare<int32_t>(ctx.r9.s32, 36, xer);
	// beq cr6,0x82603264
	if (cr6.eq) goto loc_82603264;
loc_82603240:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// blt cr6,0x82603234
	if (cr6.lt) goto loc_82603234;
	// stwx r31,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r31.u32);
	// b 0x8260328c
	goto loc_8260328C;
loc_82603258:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
loc_82603260:
	// bne cr6,0x82603268
	if (!cr6.eq) goto loc_82603268;
loc_82603264:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82603268:
	// stwx r31,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r31.u32);
	// b 0x8260328c
	goto loc_8260328C;
loc_82603270:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x82603280
	if (cr6.eq) goto loc_82603280;
	// cmpw cr6,r19,r29
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r29.s32, xer);
	// beq cr6,0x8260328c
	if (cr6.eq) goto loc_8260328C;
loc_82603280:
	// addi r11,r31,450
	ctx.r11.s64 = ctx.r31.s64 + 450;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r15.u32);
loc_8260328C:
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x82603030
	if (cr6.lt) goto loc_82603030;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// cmpwi cr6,r17,8
	cr6.compare<int32_t>(ctx.r17.s32, 8, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82602fb0
	if (cr6.lt) goto loc_82602FB0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,1700
	ctx.r4.s64 = ctx.r30.s64 + 1700;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,27152
	ctx.r3.s64 = ctx.r3.s64 + 27152;
	// bl 0x825d7028
	ctx.lr = 0x826032D0;
	sub_825D7028(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826032D8"))) PPC_WEAK_FUNC(sub_826032D8);
PPC_FUNC_IMPL(__imp__sub_826032D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x826032E0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce778
	ctx.lr = 0x826032E8;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82603304;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a22c10
	ctx.lr = 0x82603318;
	sub_82A22C10(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4460(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// lwz r29,800(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 800);
	// bne cr6,0x826039a0
	if (!cr6.eq) goto loc_826039A0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r14,0
	ctx.r14.s64 = 0;
	// ori r8,r10,24224
	ctx.r8.u64 = ctx.r10.u64 | 24224;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82603364
	if (!cr6.eq) goto loc_82603364;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,24225
	ctx.r8.u64 = ctx.r10.u64 | 24225;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82603368
	if (cr6.eq) goto loc_82603368;
loc_82603364:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82603368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826039a0
	if (!cr6.eq) goto loc_826039A0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x826039a0
	if (!cr6.lt) goto loc_826039A0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r17,255
	ctx.r17.s64 = 255;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x826033b0
	if (cr6.lt) goto loc_826033B0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x826033b0
	if (!cr6.lt) goto loc_826033B0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826033b0
	if (cr6.lt) goto loc_826033B0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826033b4
	if (cr6.lt) goto loc_826033B4;
loc_826033B0:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_826033B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603404
	if (cr6.eq) goto loc_82603404;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x826033ec
	if (!cr6.lt) goto loc_826033EC;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a2a378
	ctx.lr = 0x826033E0;
	sub_82A2A378(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r3,376(r26)
	PPC_STORE_U32(ctx.r26.u32 + 376, ctx.r3.u32);
	// b 0x82603524
	goto loc_82603524;
loc_826033EC:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82a2a378
	ctx.lr = 0x826033F8;
	sub_82A2A378(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r3,376(r26)
	PPC_STORE_U32(ctx.r26.u32 + 376, ctx.r3.u32);
	// b 0x82603524
	goto loc_82603524;
loc_82603404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8260341c
	if (!cr6.gt) goto loc_8260341C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82603420
	if (!cr6.gt) goto loc_82603420;
loc_8260341C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82603420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603538
	if (cr6.eq) goto loc_82603538;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82603458
	if (cr6.lt) goto loc_82603458;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82603458
	if (!cr6.lt) goto loc_82603458;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82603458
	if (cr6.lt) goto loc_82603458;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260345c
	if (cr6.lt) goto loc_8260345C;
loc_82603458:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8260345C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603538
	if (cr6.eq) goto loc_82603538;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82603480
	if (!cr6.lt) goto loc_82603480;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82603484
	goto loc_82603484;
loc_82603480:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82603484:
	// ld r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// bl 0x82a2a378
	ctx.lr = 0x8260348C;
	sub_82A2A378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826034a4
	if (cr6.lt) goto loc_826034A4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826034a8
	if (cr6.lt) goto loc_826034A8;
loc_826034A4:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_826034A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603538
	if (cr6.eq) goto loc_82603538;
	// lwz r11,380(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x82603538
	if (!cr6.eq) goto loc_82603538;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,20120
	ctx.r3.s64 = ctx.r3.s64 + 20120;
	// bl 0x825ca600
	ctx.lr = 0x826034D4;
	sub_825CA600(ctx, base);
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,-7352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82603538
	if (!cr6.lt) goto loc_82603538;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x826034f8
	if (!cr6.lt) goto loc_826034F8;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// b 0x82603520
	goto loc_82603520;
loc_826034F8:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// bge cr6,0x82603508
	if (!cr6.lt) goto loc_82603508;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// b 0x82603520
	goto loc_82603520;
loc_82603508:
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
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
loc_82603520:
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
loc_82603524:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x82603538
	if (cr6.lt) goto loc_82603538;
	// cmpwi cr6,r17,22
	cr6.compare<int32_t>(ctx.r17.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260353c
	if (cr6.lt) goto loc_8260353C;
loc_82603538:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8260353C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82603568
	if (!cr6.eq) goto loc_82603568;
	// addi r11,r29,76
	ctx.r11.s64 = ctx.r29.s64 + 76;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,255
	ctx.r9.s64 = 255;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r17,44(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r9,376(r26)
	PPC_STORE_U32(ctx.r26.u32 + 376, ctx.r9.u32);
loc_82603568:
	// lwz r11,380(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// beq cr6,0x82603598
	if (cr6.eq) goto loc_82603598;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x82603588
	if (cr6.lt) goto loc_82603588;
	// cmpwi cr6,r17,22
	cr6.compare<int32_t>(ctx.r17.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260358c
	if (cr6.lt) goto loc_8260358C;
loc_82603588:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8260358C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826039a0
	if (!cr6.eq) goto loc_826039A0;
loc_82603598:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// blt cr6,0x826035ac
	if (cr6.lt) goto loc_826035AC;
	// cmpwi cr6,r17,22
	cr6.compare<int32_t>(ctx.r17.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826035b0
	if (cr6.lt) goto loc_826035B0;
loc_826035AC:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_826035B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826035d0
	if (!cr6.eq) goto loc_826035D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x826035CC;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_826035D0:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// bge cr6,0x826035e0
	if (!cr6.lt) goto loc_826035E0;
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x82603604
	goto loc_82603604;
loc_826035E0:
	// cmpwi cr6,r17,11
	cr6.compare<int32_t>(ctx.r17.s32, 11, xer);
	// bge cr6,0x826035f0
	if (!cr6.lt) goto loc_826035F0;
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x82603604
	goto loc_82603604;
loc_826035F0:
	// li r11,22
	ctx.r11.s64 = 22;
	// srawi r10,r17,31
	xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r17
	xer.ca = ctx.r17.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r17.s64 - ctx.r11.s64;
	// adde r16,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r16.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82603604:
	// addi r11,r16,76
	ctx.r11.s64 = ctx.r16.s64 + 76;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r15,r9,r10
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x826403a8
	ctx.lr = 0x82603620;
	sub_826403A8(ctx, base);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x8260363c
	if (!cr6.lt) goto loc_8260363C;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82603640
	goto loc_82603640;
loc_8260363C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82603640:
	// lbz r31,252(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// cmplwi cr6,r17,22
	cr6.compare<uint32_t>(ctx.r17.u32, 22, xer);
	// bge cr6,0x82603660
	if (!cr6.lt) goto loc_82603660;
	// addi r11,r17,8
	ctx.r11.s64 = ctx.r17.s64 + 8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82603664
	goto loc_82603664;
loc_82603660:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
loc_82603664:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82601178
	ctx.lr = 0x8260366C;
	sub_82601178(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x825ceaf8
	ctx.lr = 0x8260367C;
	sub_825CEAF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f28,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f28
	cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// addi r18,r11,-7352
	ctx.r18.s64 = ctx.r11.s64 + -7352;
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x826036a4
	if (!cr6.lt) goto loc_826036A4;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x826036b0
	goto loc_826036B0;
loc_826036A4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x826036b4
	if (cr6.lt) goto loc_826036B4;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_826036B0:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826036B4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r19,828(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 828);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r14,392(r26)
	PPC_STORE_U32(ctx.r26.u32 + 392, ctx.r14.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r14,384(r26)
	PPC_STORE_U8(ctx.r26.u32 + 384, ctx.r14.u8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r24,r26,376
	ctx.r24.s64 = ctx.r26.s64 + 376;
	// lfs f31,21812(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21812);
	ctx.f31.f64 = double(temp.f32);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// lfs f29,19176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19176);
	ctx.f29.f64 = double(temp.f32);
	// mr r20,r14
	ctx.r20.u64 = ctx.r14.u64;
	// lfs f30,-6664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6664);
	ctx.f30.f64 = double(temp.f32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// li r21,3
	ctx.r21.s64 = 3;
	// ori r22,r7,12384
	ctx.r22.u64 = ctx.r7.u64 | 12384;
loc_826036F8:
	// subfc r10,r21,r25
	xer.ca = ctx.r25.u32 >= ctx.r21.u32;
	ctx.r10.s64 = ctx.r25.s64 - ctx.r21.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r11,r7,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFF0;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r30,396(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82603724
	if (cr6.lt) goto loc_82603724;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603728
	if (cr6.lt) goto loc_82603728;
loc_82603724:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82603728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603970
	if (cr6.eq) goto loc_82603970;
	// lwz r11,408(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 408);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603970
	if (cr6.eq) goto loc_82603970;
	// addi r11,r16,74
	ctx.r11.s64 = ctx.r16.s64 + 74;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82a29c78
	ctx.lr = 0x82603758;
	sub_82A29C78(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82a2a468
	ctx.lr = 0x82603768;
	sub_82A2A468(ctx, base);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82603780
	if (!cr6.lt) goto loc_82603780;
	// addi r11,r3,9778
	ctx.r11.s64 = ctx.r3.s64 + 9778;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r15
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	// b 0x82603784
	goto loc_82603784;
loc_82603780:
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_82603784:
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x826037a0
	if (!cr6.lt) goto loc_826037A0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826037a4
	goto loc_826037A4;
loc_826037A0:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_826037A4:
	// lwz r10,1272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// cmplwi cr6,r17,22
	cr6.compare<uint32_t>(ctx.r17.u32, 22, xer);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r11,r9,r22
	ctx.r11.u64 = ctx.r9.u64 + ctx.r22.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bge cr6,0x826037c4
	if (!cr6.lt) goto loc_826037C4;
	// mulli r10,r17,88
	ctx.r10.s64 = ctx.r17.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_826037C4:
	// addi r11,r11,5800
	ctx.r11.s64 = ctx.r11.s64 + 5800;
	// lfs f13,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x826037e8
	if (!cr6.lt) goto loc_826037E8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x826037f4
	goto loc_826037F4;
loc_826037E8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826037f8
	if (cr6.lt) goto loc_826037F8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_826037F4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_826037F8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// bl 0x825cb910
	ctx.lr = 0x82603808;
	sub_825CB910(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x8260383c
	if (cr6.gt) goto loc_8260383C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825cb910
	ctx.lr = 0x8260381C;
	sub_825CB910(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x8260383c
	if (cr6.gt) goto loc_8260383C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825cb910
	ctx.lr = 0x82603830;
	sub_825CB910(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8260383c
	if (cr6.lt) goto loc_8260383C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8260383C:
	// lbz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,60
	cr6.compare<int32_t>(ctx.r28.s32, 60, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,8(r24)
	PPC_STORE_U8(ctx.r24.u32 + 8, ctx.r11.u8);
	// beq cr6,0x8260385c
	if (cr6.eq) goto loc_8260385C;
	// cmpwi cr6,r28,57
	cr6.compare<int32_t>(ctx.r28.s32, 57, xer);
	// bne cr6,0x82603860
	if (!cr6.eq) goto loc_82603860;
loc_8260385C:
	// li r31,5
	ctx.r31.s64 = 5;
loc_82603860:
	// lwz r11,404(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826038b8
	if (cr6.eq) goto loc_826038B8;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82603880
	if (cr6.eq) goto loc_82603880;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// ble cr6,0x82603884
	if (!cr6.gt) goto loc_82603884;
loc_82603880:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82603884:
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x826038a0
	if (!cr6.lt) goto loc_826038A0;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826038a4
	goto loc_826038A4;
loc_826038A0:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826038A4:
	// bl 0x82a3d3c0
	ctx.lr = 0x826038A8;
	sub_82A3D3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826038b8
	if (cr6.eq) goto loc_826038B8;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
loc_826038B8:
	// cmpwi cr6,r28,51
	cr6.compare<int32_t>(ctx.r28.s32, 51, xer);
	// beq cr6,0x826038c8
	if (cr6.eq) goto loc_826038C8;
	// cmpwi cr6,r28,50
	cr6.compare<int32_t>(ctx.r28.s32, 50, xer);
	// bne cr6,0x826038d8
	if (!cr6.eq) goto loc_826038D8;
loc_826038C8:
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// cmpwi cr6,r28,50
	cr6.compare<int32_t>(ctx.r28.s32, 50, xer);
	// bne cr6,0x826038d8
	if (!cr6.eq) goto loc_826038D8;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_826038D8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826038e8
	if (cr6.eq) goto loc_826038E8;
	// ori r31,r31,512
	ctx.r31.u64 = ctx.r31.u64 | 512;
loc_826038E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825cb910
	ctx.lr = 0x826038F4;
	sub_825CB910(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82603910
	if (cr6.lt) goto loc_82603910;
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82603910
	if (cr6.eq) goto loc_82603910;
	// ori r31,r31,128
	ctx.r31.u64 = ctx.r31.u64 | 128;
loc_82603910:
	// bl 0x83740868
	ctx.lr = 0x82603914;
	sub_83740868(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82603958
	if (cr6.gt) goto loc_82603958;
	// lwz r11,856(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 856);
	// srawi r10,r11,7
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82603958
	if (cr6.eq) goto loc_82603958;
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82603954
	if (!cr6.eq) goto loc_82603954;
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82603958
	if (cr6.eq) goto loc_82603958;
loc_82603954:
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
loc_82603958:
	// cmplwi cr6,r25,3
	cr6.compare<uint32_t>(ctx.r25.u32, 3, xer);
	// bge cr6,0x8260396c
	if (!cr6.lt) goto loc_8260396C;
	// addi r11,r25,111
	ctx.r11.s64 = ctx.r25.s64 + 111;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r31.u32);
loc_8260396C:
	// or r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 | ctx.r20.u64;
loc_82603970:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x826036f8
	if (cr6.lt) goto loc_826036F8;
	// stw r20,392(r26)
	PPC_STORE_U32(ctx.r26.u32 + 392, ctx.r20.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,388(r26)
	PPC_STORE_U32(ctx.r26.u32 + 388, ctx.r23.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x8260399C;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_826039A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x826039B0;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826039B4"))) PPC_WEAK_FUNC(sub_826039B4);
PPC_FUNC_IMPL(__imp__sub_826039B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826039B8"))) PPC_WEAK_FUNC(sub_826039B8);
PPC_FUNC_IMPL(__imp__sub_826039B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x826039C0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82603ccc
	if (!cr6.eq) goto loc_82603CCC;
	// bl 0x8263e878
	ctx.lr = 0x826039E4;
	sub_8263E878(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826039fc
	if (cr6.lt) goto loc_826039FC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603a00
	if (cr6.lt) goto loc_82603A00;
loc_826039FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82603A00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603cc8
	if (cr6.eq) goto loc_82603CC8;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bge cr6,0x82603a1c
	if (!cr6.lt) goto loc_82603A1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82603a44
	goto loc_82603A44;
loc_82603A1C:
	// cmpwi cr6,r24,11
	cr6.compare<int32_t>(ctx.r24.s32, 11, xer);
	// bge cr6,0x82603a2c
	if (!cr6.lt) goto loc_82603A2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82603a44
	goto loc_82603A44;
loc_82603A2C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r24
	xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// eqv r9,r11,r24
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r24.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82603A44:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r25,255
	ctx.r25.s64 = 255;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8263ebe8
	ctx.lr = 0x82603A5C;
	sub_8263EBE8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82603cc8
	if (cr6.eq) goto loc_82603CC8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r24,22
	cr6.compare<uint32_t>(ctx.r24.u32, 22, xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,12384
	ctx.r11.s64 = ctx.r11.s64 + 12384;
	// bge cr6,0x82603a8c
	if (!cr6.lt) goto loc_82603A8C;
	// addi r10,r24,7
	ctx.r10.s64 = ctx.r24.s64 + 7;
	// mulli r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 * 200;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82603a90
	goto loc_82603A90;
loc_82603A8C:
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
loc_82603A90:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x831ce980
	ctx.lr = 0x82603A9C;
	sub_831CE980(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-17874
	ctx.r10.s64 = -1171390464;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r10,35747
	ctx.r28.u64 = ctx.r10.u64 | 35747;
	// lfs f31,-11376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11376);
	ctx.f31.f64 = double(temp.f32);
loc_82603AB0:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82603ad8
	if (!cr6.lt) goto loc_82603AD8;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82603ad8
	if (!cr6.lt) goto loc_82603AD8;
	// mulli r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82603adc
	goto loc_82603ADC;
loc_82603AD8:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
loc_82603ADC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82603b80
	if (!cr6.lt) goto loc_82603B80;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82603b10
	if (!cr6.lt) goto loc_82603B10;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x82603b10
	if (!cr6.lt) goto loc_82603B10;
	// mulli r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82603b14
	goto loc_82603B14;
loc_82603B10:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
loc_82603B14:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82603b3c
	if (cr6.lt) goto loc_82603B3C;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bge cr6,0x82603b3c
	if (!cr6.lt) goto loc_82603B3C;
	// mulhwu r11,r31,r28
	ctx.r11.u64 = (uint64_t(ctx.r31.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 * 11;
	// subf r5,r9,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r9.s64;
	// b 0x82603b40
	goto loc_82603B40;
loc_82603B3C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82603B40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826395e0
	ctx.lr = 0x82603B4C;
	sub_826395E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82603b68
	if (!cr6.eq) goto loc_82603B68;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82603ab0
	if (cr6.lt) goto loc_82603AB0;
	// b 0x82603b80
	goto loc_82603B80;
loc_82603B68:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82603b80
	if (cr6.lt) goto loc_82603B80;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603b84
	if (cr6.lt) goto loc_82603B84;
loc_82603B80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82603B84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603cc8
	if (cr6.eq) goto loc_82603CC8;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// blt cr6,0x82603bac
	if (cr6.lt) goto loc_82603BAC;
	// cmpwi cr6,r25,22
	cr6.compare<int32_t>(ctx.r25.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603bb0
	if (cr6.lt) goto loc_82603BB0;
loc_82603BAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82603BB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603bd0
	if (cr6.eq) goto loc_82603BD0;
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82603bd4
	goto loc_82603BD4;
loc_82603BD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82603BD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603cc8
	if (cr6.eq) goto loc_82603CC8;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82603bf8
	if (!cr6.lt) goto loc_82603BF8;
	// addi r11,r29,74
	ctx.r11.s64 = ctx.r29.s64 + 74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82603bfc
	goto loc_82603BFC;
loc_82603BF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82603BFC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a29c78
	ctx.lr = 0x82603C04;
	sub_82A29C78(ctx, base);
	// lwz r11,524(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 524);
	// lwz r10,520(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r31,r26,464
	ctx.r31.s64 = ctx.r26.s64 + 464;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82603c68
	if (cr6.eq) goto loc_82603C68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82603c50
	if (!cr6.eq) goto loc_82603C50;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82603c54
	if (cr6.eq) goto loc_82603C54;
loc_82603C50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82603C54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82603cd0
	if (!cr6.eq) goto loc_82603CD0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263e9f0
	ctx.lr = 0x82603C68;
	sub_8263E9F0(ctx, base);
loc_82603C68:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82601038
	ctx.lr = 0x82603C70;
	sub_82601038(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263ea28
	ctx.lr = 0x82603C84;
	sub_8263EA28(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82603C94;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82603CA4;
	sub_831CE980(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,128
	ctx.r5.s64 = 128;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,24232
	ctx.r3.s64 = ctx.r3.s64 + 24232;
	// bl 0x831ce980
	ctx.lr = 0x82603CBC;
	sub_831CE980(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82603CC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82603CCC:
	// bl 0x8263e9f0
	ctx.lr = 0x82603CD0;
	sub_8263E9F0(ctx, base);
loc_82603CD0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82603CDC"))) PPC_WEAK_FUNC(sub_82603CDC);
PPC_FUNC_IMPL(__imp__sub_82603CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82603CE0"))) PPC_WEAK_FUNC(sub_82603CE0);
PPC_FUNC_IMPL(__imp__sub_82603CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82603CE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r31,r31,24608
	ctx.r31.s64 = ctx.r31.s64 + 24608;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82a23768
	ctx.lr = 0x82603D2C;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// ld r24,20(r3)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// ld r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// blt cr6,0x82603d7c
	if (cr6.lt) goto loc_82603D7C;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x82603d7c
	if (!cr6.lt) goto loc_82603D7C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82603d7c
	if (cr6.lt) goto loc_82603D7C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603d80
	if (cr6.lt) goto loc_82603D80;
loc_82603D7C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82603D80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82603db8
	if (cr6.lt) goto loc_82603DB8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82603db8
	if (!cr6.lt) goto loc_82603DB8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82603db8
	if (cr6.lt) goto loc_82603DB8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603dbc
	if (cr6.lt) goto loc_82603DBC;
loc_82603DB8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82603DBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x82603dec
	if (!cr6.lt) goto loc_82603DEC;
	// addi r11,r9,74
	ctx.r11.s64 = ctx.r9.s64 + 74;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82603df0
	goto loc_82603DF0;
loc_82603DEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82603DF0:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82603e0c
	if (!cr6.lt) goto loc_82603E0C;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82603e10
	goto loc_82603E10;
loc_82603E0C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82603E10:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82603e2c
	if (!cr6.lt) goto loc_82603E2C;
	// addi r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 + 76;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r9,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82603e30
	goto loc_82603E30;
loc_82603E2C:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_82603E30:
	// ld r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 20);
	// bl 0x82a2a378
	ctx.lr = 0x82603E38;
	sub_82A2A378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82603e4c
	if (cr6.lt) goto loc_82603E4C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82603e50
	if (cr6.lt) goto loc_82603E50;
loc_82603E4C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82603E50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260404c
	if (cr6.eq) goto loc_8260404C;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stb r28,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r28.u8);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// bge cr6,0x82603ec8
	if (!cr6.lt) goto loc_82603EC8;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82603ecc
	goto loc_82603ECC;
loc_82603EC8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82603ECC:
	// lwz r8,1284(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1284);
	// lwz r7,1288(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1288);
	// lwz r9,1280(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1280);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f12,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r6,4472(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4472);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r3,4456(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4456);
	// bl 0x82a474e0
	ctx.lr = 0x82603F0C;
	sub_82A474E0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lbz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// stb r5,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r5.u8);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// bne cr6,0x82603f30
	if (!cr6.eq) goto loc_82603F30;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_82603F30:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82603f48
	if (!cr6.eq) goto loc_82603F48;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_82603F48:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82603f60
	if (!cr6.eq) goto loc_82603F60;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_82603F60:
	// std r24,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r24.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r27,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r27.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2a468
	ctx.lr = 0x82603F74;
	sub_82A2A468(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263a6c8
	ctx.lr = 0x82603F88;
	sub_8263A6C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82603fac
	if (cr6.eq) goto loc_82603FAC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263abb0
	ctx.lr = 0x82603FA8;
	sub_8263ABB0(ctx, base);
	// b 0x82603fd4
	goto loc_82603FD4;
loc_82603FAC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82603fd4
	if (cr6.eq) goto loc_82603FD4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263a948
	ctx.lr = 0x82603FD0;
	sub_8263A948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82603FD4:
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// bge cr6,0x82603fec
	if (!cr6.lt) goto loc_82603FEC;
	// addi r11,r29,9778
	ctx.r11.s64 = ctx.r29.s64 + 9778;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// b 0x82603ff0
	goto loc_82603FF0;
loc_82603FEC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82603FF0:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x8260400c
	if (!cr6.eq) goto loc_8260400C;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_8260400C:
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8263ad28
	ctx.lr = 0x82604018;
	sub_8263AD28(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82604028
	if (cr6.eq) goto loc_82604028;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82604038
	if (!cr6.eq) goto loc_82604038;
loc_82604028:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_82604038:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8260404C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604058"))) PPC_WEAK_FUNC(sub_82604058);
PPC_FUNC_IMPL(__imp__sub_82604058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82604060;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826045d0
	if (cr6.eq) goto loc_826045D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x826045d0
	if (cr6.eq) goto loc_826045D0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x826040b4
	if (!cr6.eq) goto loc_826040B4;
	// bl 0x825fd710
	ctx.lr = 0x826040A0;
	sub_825FD710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826045d0
	if (cr6.eq) goto loc_826045D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826045cc
	goto loc_826045CC;
loc_826040B4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82604594
	if (!cr6.eq) goto loc_82604594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263b658
	ctx.lr = 0x826040C4;
	sub_8263B658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8263b6d0
	ctx.lr = 0x826040D0;
	sub_8263B6D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8263b748
	ctx.lr = 0x826040DC;
	sub_8263B748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x8263b5c0
	ctx.lr = 0x826040E8;
	sub_8263B5C0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r23,r11,22508
	ctx.r23.u64 = ctx.r11.u64 | 22508;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r10,22512
	ctx.r7.u64 = ctx.r10.u64 | 22512;
	// ori r6,r8,22516
	ctx.r6.u64 = ctx.r8.u64 | 22516;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfsx f29,r9,r23
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r23.u32, temp.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r27,r5,22460
	ctx.r27.u64 = ctx.r5.u64 | 22460;
	// stfsx f1,r4,r7
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfsx f13,r3,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r30,255
	ctx.r30.s64 = 255;
	// li r11,255
	ctx.r11.s64 = 255;
	// ldx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r27.u32);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8260417c
	if (cr6.lt) goto loc_8260417C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x8260417c
	if (!cr6.lt) goto loc_8260417C;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8260417c
	if (cr6.lt) goto loc_8260417C;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// blt cr6,0x82604180
	if (cr6.lt) goto loc_82604180;
loc_8260417C:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82604180:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826041f0
	if (cr6.eq) goto loc_826041F0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643b70
	ctx.lr = 0x826041A0;
	sub_82643B70(ctx, base);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643b70
	ctx.lr = 0x826041BC;
	sub_82643B70(ctx, base);
	// addi r10,r30,-255
	ctx.r10.s64 = ctx.r30.s64 + -255;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r3,-255
	ctx.r10.s64 = ctx.r3.s64 + -255;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r4,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r10.s64;
	// and r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 & ctx.r9.u64;
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// and r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 & ctx.r6.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_826041F0:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// ori r6,r9,22548
	ctx.r6.u64 = ctx.r9.u64 | 22548;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// ori r3,r5,22549
	ctx.r3.u64 = ctx.r5.u64 | 22549;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r4,22540
	ctx.r9.u64 = ctx.r4.u64 | 22540;
	// stbx r7,r8,r6
	PPC_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u8);
	// ori r7,r10,22544
	ctx.r7.u64 = ctx.r10.u64 | 22544;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stbx r6,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x825fd830
	ctx.lr = 0x82604248;
	sub_825FD830(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826042a0
	if (cr6.eq) goto loc_826042A0;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82604298
	if (cr6.eq) goto loc_82604298;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x825fa9e8
	ctx.lr = 0x8260426C;
	sub_825FA9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fd710
	ctx.lr = 0x82604274;
	sub_825FD710(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826045d0
	if (cr6.eq) goto loc_826045D0;
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82604298:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x826045cc
	goto loc_826045CC;
loc_826042A0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r30,r10,22484
	ctx.r30.u64 = ctx.r10.u64 | 22484;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826042d8
	if (!cr6.eq) goto loc_826042D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fd8f8
	ctx.lr = 0x826042C0;
	sub_825FD8F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826042e8
	if (cr6.eq) goto loc_826042E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x826042e8
	goto loc_826042E8;
loc_826042D8:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
loc_826042E8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r30,r10,22504
	ctx.r30.u64 = ctx.r10.u64 | 22504;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82604320
	if (!cr6.eq) goto loc_82604320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fdb60
	ctx.lr = 0x82604308;
	sub_825FDB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604330
	if (cr6.eq) goto loc_82604330;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x82604330
	goto loc_82604330;
loc_82604320:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
loc_82604330:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r30,r10,22492
	ctx.r30.u64 = ctx.r10.u64 | 22492;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82604368
	if (!cr6.eq) goto loc_82604368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fdcd0
	ctx.lr = 0x82604350;
	sub_825FDCD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604378
	if (cr6.eq) goto loc_82604378;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
	// b 0x82604378
	goto loc_82604378;
loc_82604368:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
loc_82604378:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r26,r10,22488
	ctx.r26.u64 = ctx.r10.u64 | 22488;
	// ori r8,r9,20424
	ctx.r8.u64 = ctx.r9.u64 | 20424;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// ori r28,r7,22536
	ctx.r28.u64 = ctx.r7.u64 | 22536;
	// lwzx r6,r11,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ble cr6,0x82604400
	if (!cr6.gt) goto loc_82604400;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x826043bc
	if (cr6.lt) goto loc_826043BC;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// blt cr6,0x826043c0
	if (cr6.lt) goto loc_826043C0;
loc_826043BC:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_826043C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826043f0
	if (cr6.eq) goto loc_826043F0;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x826043f0
	if (!cr6.eq) goto loc_826043F0;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// b 0x826043f8
	goto loc_826043F8;
loc_826043F0:
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// li r4,255
	ctx.r4.s64 = 255;
loc_826043F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263b7a0
	ctx.lr = 0x82604400;
	sub_8263B7A0(ctx, base);
loc_82604400:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r29,r10,22496
	ctx.r29.u64 = ctx.r10.u64 | 22496;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x82604474
	if (!cr6.gt) goto loc_82604474;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82604430
	if (cr6.lt) goto loc_82604430;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// blt cr6,0x82604434
	if (cr6.lt) goto loc_82604434;
loc_82604430:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82604434:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82604464
	if (cr6.eq) goto loc_82604464;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// bne cr6,0x82604464
	if (!cr6.eq) goto loc_82604464;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// b 0x8260446c
	goto loc_8260446C;
loc_82604464:
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// li r4,255
	ctx.r4.s64 = 255;
loc_8260446C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263b7a0
	ctx.lr = 0x82604474;
	sub_8263B7A0(ctx, base);
loc_82604474:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826044f0
	if (!cr6.eq) goto loc_826044F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fddf8
	ctx.lr = 0x8260448C;
	sub_825FDDF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826044f0
	if (cr6.eq) goto loc_826044F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263b8e8
	ctx.lr = 0x826044A4;
	sub_8263B8E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826044f0
	if (cr6.eq) goto loc_826044F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x826044c8
	if (!cr6.gt) goto loc_826044C8;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_826044C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r24,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r24.u32);
	// bl 0x8263b7a0
	ctx.lr = 0x826044DC;
	sub_8263B7A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r11,90(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 90);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,90(r9)
	PPC_STORE_U8(ctx.r9.u32 + 90, ctx.r8.u8);
loc_826044F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826045d0
	if (!cr6.eq) goto loc_826045D0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfsx f13,r11,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826045d0
	if (!cr6.lt) goto loc_826045D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fe0f0
	ctx.lr = 0x8260451C;
	sub_825FE0F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826045d0
	if (cr6.eq) goto loc_826045D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263b8e8
	ctx.lr = 0x82604534;
	sub_8263B8E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826045d0
	if (cr6.eq) goto loc_826045D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82604558
	if (!cr6.gt) goto loc_82604558;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82604558:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r24,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r24.u32);
	// bl 0x8263b7a0
	ctx.lr = 0x8260456C;
	sub_8263B7A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r11,91(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 91);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stb r8,91(r9)
	PPC_STORE_U8(ctx.r9.u32 + 91, ctx.r8.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82604594:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x826045c8
	if (!cr6.eq) goto loc_826045C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,22460
	ctx.r3.s64 = ctx.r3.s64 + 22460;
	// bl 0x825fa9e8
	ctx.lr = 0x826045AC;
	sub_825FA9E8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_826045C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826045CC:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_826045D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826045E4"))) PPC_WEAK_FUNC(sub_826045E4);
PPC_FUNC_IMPL(__imp__sub_826045E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826045E8"))) PPC_WEAK_FUNC(sub_826045E8);
PPC_FUNC_IMPL(__imp__sub_826045E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x826045F0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260492c
	if (cr6.eq) goto loc_8260492C;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8260492c
	if (cr6.eq) goto loc_8260492C;
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8260492c
	if (cr6.eq) goto loc_8260492C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82639290
	ctx.lr = 0x82604644;
	sub_82639290(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82604670
	if (!cr6.eq) goto loc_82604670;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82604670
	if (!cr6.eq) goto loc_82604670;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x8260492c
	if (cr6.eq) goto loc_8260492C;
loc_82604670:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r4,r8,22584
	ctx.r4.u64 = ctx.r8.u64 | 22584;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// lwz r10,4472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4472);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r8,r6,22568
	ctx.r8.u64 = ctx.r6.u64 | 22568;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,22572
	ctx.r3.s64 = ctx.r3.s64 + 22572;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stwx r11,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826046e8
	if (cr6.lt) goto loc_826046E8;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// blt cr6,0x826046ec
	if (cr6.lt) goto loc_826046EC;
loc_826046E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826046EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260492c
	if (cr6.eq) goto loc_8260492C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82604708
	if (!cr6.lt) goto loc_82604708;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82604730
	goto loc_82604730;
loc_82604708:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82604718
	if (!cr6.lt) goto loc_82604718;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82604730
	goto loc_82604730;
loc_82604718:
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
	// clrlwi r29,r6,31
	ctx.r29.u64 = ctx.r6.u32 & 0x1;
loc_82604730:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82604740
	if (!cr6.lt) goto loc_82604740;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82604764
	goto loc_82604764;
loc_82604740:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x82604750
	if (!cr6.lt) goto loc_82604750;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x82604764
	goto loc_82604764;
loc_82604750:
	// li r10,22
	ctx.r10.s64 = 22;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r31,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82604764:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82642ec0
	ctx.lr = 0x82604774;
	sub_82642EC0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// ori r9,r11,22588
	ctx.r9.u64 = ctx.r11.u64 | 22588;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// stfsx f1,r10,r9
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x8260492c
	if (cr6.lt) goto loc_8260492C;
	// lfs f0,8144(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8152(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,-11316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmuls f29,f6,f0
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82644cf8
	ctx.lr = 0x826047D0;
	sub_82644CF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82643068
	ctx.lr = 0x826047E0;
	sub_82643068(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8260492c
	if (!cr6.eq) goto loc_8260492C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260492c
	if (!cr6.eq) goto loc_8260492C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82642ec0
	ctx.lr = 0x82604808;
	sub_82642EC0(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x8260481c
	if (!cr6.lt) goto loc_8260481C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8260481C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82644cf8
	ctx.lr = 0x8260482C;
	sub_82644CF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260492c
	if (!cr6.eq) goto loc_8260492C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826434b0
	ctx.lr = 0x82604840;
	sub_826434B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260492c
	if (cr6.eq) goto loc_8260492C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f8,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-8308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8308);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,-7328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7328);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fadds f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f6,f8
	cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// fabs f13,f7
	ctx.f13.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f8,f5
	ctx.f8.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// bge cr6,0x826048b0
	if (!cr6.lt) goto loc_826048B0;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f7,f12
	cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// bge cr6,0x826048b0
	if (!cr6.lt) goto loc_826048B0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x826048c4
	goto loc_826048C4;
loc_826048B0:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x826048c0
	if (cr6.lt) goto loc_826048C0;
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x8260492c
	if (!cr6.lt) goto loc_8260492C;
loc_826048C0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_826048C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826048f8
	if (cr6.eq) goto loc_826048F8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r11,22592
	ctx.r9.u64 = ctx.r11.u64 | 22592;
	// stwx r27,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_826048F8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604914
	if (cr6.eq) goto loc_82604914;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r11,22596
	ctx.r9.u64 = ctx.r11.u64 | 22596;
	// stwx r27,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u32);
loc_82604914:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8260492C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604944"))) PPC_WEAK_FUNC(sub_82604944);
PPC_FUNC_IMPL(__imp__sub_82604944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604948"))) PPC_WEAK_FUNC(sub_82604948);
PPC_FUNC_IMPL(__imp__sub_82604948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82604950;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce764
	ctx.lr = 0x82604958;
	__savefpr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r9,r11,26180
	ctx.r9.u64 = ctx.r11.u64 | 26180;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8260498c
	if (cr6.eq) goto loc_8260498C;
loc_82604978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b0
	ctx.lr = 0x82604988;
	__restfpr_23(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8260498C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,199
	ctx.r4.s64 = 199;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82a44ac0
	ctx.lr = 0x8260499C;
	sub_82A44AC0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x826049cc
	if (cr6.gt) goto loc_826049CC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82604978
	if (!cr6.gt) goto loc_82604978;
loc_826049CC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r24,16(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f26,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
loc_826049E4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x826049F0;
	sub_82A44AC0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// bgt cr6,0x82604a30
	if (cr6.gt) goto loc_82604A30;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f25
	cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bgt cr6,0x82604a30
	if (cr6.gt) goto loc_82604A30;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,200
	cr6.compare<uint32_t>(ctx.r23.u32, 200, xer);
	// blt cr6,0x826049e4
	if (cr6.lt) goto loc_826049E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b0
	ctx.lr = 0x82604A2C;
	__restfpr_23(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82604A30:
	// cmplwi cr6,r23,200
	cr6.compare<uint32_t>(ctx.r23.u32, 200, xer);
	// bge cr6,0x82604978
	if (!cr6.lt) goto loc_82604978;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82604A44;
	sub_82A44AC0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f28,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f24,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f24.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f27,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fcmpu cr6,f24,f13
	cr6.compare(ctx.f24.f64, ctx.f13.f64);
	// bge cr6,0x82604aa0
	if (!cr6.lt) goto loc_82604AA0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f27
	ctx.f12.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// lfs f0,-11316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82604978
	if (cr6.lt) goto loc_82604978;
loc_82604AA0:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r9,20120
	ctx.r9.s64 = ctx.r9.s64 + 20120;
	// lfs f0,-11392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11392);
	ctx.f0.f64 = double(temp.f32);
loc_82604ABC:
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x82604acc
	if (cr6.lt) goto loc_82604ACC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82604ACC:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82604978
	if (!cr6.gt) goto loc_82604978;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,176
	cr6.compare<int32_t>(ctx.r11.s32, 176, xer);
	// blt cr6,0x82604abc
	if (cr6.lt) goto loc_82604ABC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82604AF4;
	sub_82A44AC0(ctx, base);
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82604B04;
	sub_82A44AC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82a44ac0
	ctx.lr = 0x82604B18;
	sub_82A44AC0(ctx, base);
	// lfs f29,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82604B28;
	sub_82A44AC0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x82604b50
	if (!cr6.eq) goto loc_82604B50;
	// fcmpu cr6,f30,f0
	cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x82604b50
	if (!cr6.eq) goto loc_82604B50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// b 0x82604b88
	goto loc_82604B88;
loc_82604B50:
	// fsubs f2,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// bl 0x82a5a9f8
	ctx.lr = 0x82604B5C;
	sub_82A5A9F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x82604b7c
	if (!cr6.lt) goto loc_82604B7C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f0,30216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30216);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_82604B7C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f0,30236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82604B88:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r26,r11,-7348
	ctx.r26.s64 = ctx.r11.s64 + -7348;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lfs f10,-7348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7348);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-6660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6660);
	ctx.f8.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// ori r8,r8,20320
	ctx.r8.u64 = ctx.r8.u64 | 20320;
	// lfs f9,20056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20056);
	ctx.f9.f64 = double(temp.f32);
	// ori r7,r5,20408
	ctx.r7.u64 = ctx.r5.u64 | 20408;
loc_82604BBC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82604bd0
	if (cr6.lt) goto loc_82604BD0;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82604bd4
	if (cr6.lt) goto loc_82604BD4;
loc_82604BD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604BD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604c98
	if (cr6.eq) goto loc_82604C98;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blt cr6,0x82604bfc
	if (cr6.lt) goto loc_82604BFC;
	// cmpwi cr6,r9,22
	cr6.compare<int32_t>(ctx.r9.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82604c00
	if (cr6.lt) goto loc_82604C00;
loc_82604BFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604C00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604c20
	if (cr6.eq) goto loc_82604C20;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r11,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82604c24
	goto loc_82604C24;
loc_82604C20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604C24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604c98
	if (cr6.eq) goto loc_82604C98;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// lfsx f0,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82604c4c
	if (!cr6.lt) goto loc_82604C4C;
	// fadds f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// b 0x82604c58
	goto loc_82604C58;
loc_82604C4C:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82604c58
	if (cr6.lt) goto loc_82604C58;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
loc_82604C58:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82604c68
	if (!cr6.lt) goto loc_82604C68;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82604c74
	goto loc_82604C74;
loc_82604C68:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82604c74
	if (cr6.lt) goto loc_82604C74;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82604C74:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f10
	cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x82604c8c
	if (!cr6.gt) goto loc_82604C8C;
	// fsel f12,f0,f28,f9
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f9.f64;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_82604C8C:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f8
	cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x82604978
	if (!cr6.gt) goto loc_82604978;
loc_82604C98:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x82604bbc
	if (cr6.lt) goto loc_82604BBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r27,r9,20428
	ctx.r27.u64 = ctx.r9.u64 | 20428;
	// lfs f31,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,21708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f30.f64 = double(temp.f32);
loc_82604CC4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82604CC8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bge cr6,0x82604cec
	if (!cr6.lt) goto loc_82604CEC;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bge cr6,0x82604cec
	if (!cr6.lt) goto loc_82604CEC;
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82604CEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82604d04
	if (cr6.lt) goto loc_82604D04;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82604d08
	if (cr6.lt) goto loc_82604D08;
loc_82604D04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604D08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604db8
	if (cr6.eq) goto loc_82604DB8;
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// bge cr6,0x82604db8
	if (!cr6.lt) goto loc_82604DB8;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82604db8
	if (cr6.eq) goto loc_82604DB8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82604db8
	if (cr6.eq) goto loc_82604DB8;
loc_82604D40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82604D4C;
	sub_82A44AC0(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82604dac
	if (!cr6.lt) goto loc_82604DAC;
	// lfs f0,1280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1288);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f23,f12,f11
	ctx.f23.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// bl 0x83740868
	ctx.lr = 0x82604D74;
	sub_83740868(ctx, base);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// fmuls f10,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f0,-24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f7,f23,f23,f10
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f10.f64));
	// fdivs f6,f31,f8
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// fsqrts f5,f7
	ctx.f5.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// fdivs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fcmpu cr6,f3,f2
	cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// ble cr6,0x82604978
	if (!cr6.gt) goto loc_82604978;
loc_82604DAC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// blt cr6,0x82604d40
	if (cr6.lt) goto loc_82604D40;
loc_82604DB8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82604cc8
	if (cr6.lt) goto loc_82604CC8;
	// addi r29,r29,11
	ctx.r29.s64 = ctx.r29.s64 + 11;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x82604cc4
	if (cr6.lt) goto loc_82604CC4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82604DD4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82604DE4;
	sub_82A22B40(ctx, base);
	// ld r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82604e1c
	if (cr6.lt) goto loc_82604E1C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82604e1c
	if (!cr6.lt) goto loc_82604E1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82604e1c
	if (cr6.lt) goto loc_82604E1C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82604e20
	if (cr6.lt) goto loc_82604E20;
loc_82604E1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604E20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604e98
	if (cr6.eq) goto loc_82604E98;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82604e48
	if (!cr6.lt) goto loc_82604E48;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x82604e4c
	goto loc_82604E4C;
loc_82604E48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82604E4C:
	// ld r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4);
	// bl 0x82a2a378
	ctx.lr = 0x82604E54;
	sub_82A2A378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82604e68
	if (cr6.lt) goto loc_82604E68;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82604e6c
	if (cr6.lt) goto loc_82604E6C;
loc_82604E68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604E6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82604ea0
	if (!cr6.eq) goto loc_82604EA0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x82604dd4
	if (cr6.lt) goto loc_82604DD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b0
	ctx.lr = 0x82604E94;
	__restfpr_23(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82604E98:
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82604e68
	goto loc_82604E68;
loc_82604EA0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82604eb0
	if (!cr6.lt) goto loc_82604EB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82604ed8
	goto loc_82604ED8;
loc_82604EB0:
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bge cr6,0x82604ec0
	if (!cr6.lt) goto loc_82604EC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82604ed8
	goto loc_82604ED8;
loc_82604EC0:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82604ED8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r11,600(r25)
	PPC_STORE_U32(ctx.r25.u32 + 600, ctx.r11.u32);
	// bge cr6,0x82604978
	if (!cr6.lt) goto loc_82604978;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,600(r25)
	PPC_STORE_U32(ctx.r25.u32 + 600, ctx.r11.u32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// bge cr6,0x82604f14
	if (!cr6.lt) goto loc_82604F14;
	// fabs f13,f27
	ctx.f13.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f25
	cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// ble cr6,0x82604f14
	if (!cr6.gt) goto loc_82604F14;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82604f7c
	goto loc_82604F7C;
loc_82604F14:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f26
	cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// ble cr6,0x82604f80
	if (!cr6.gt) goto loc_82604F80;
	// fabs f13,f27
	ctx.f13.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f25
	cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bge cr6,0x82604f80
	if (!cr6.lt) goto loc_82604F80;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82604f78
	if (cr6.eq) goto loc_82604F78;
	// lbz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f29
	cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// ble cr6,0x82604f70
	if (!cr6.gt) goto loc_82604F70;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82604f7c
	goto loc_82604F7C;
loc_82604F70:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82604f7c
	goto loc_82604F7C;
loc_82604F78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82604F7C:
	// stw r11,596(r25)
	PPC_STORE_U32(ctx.r25.u32 + 596, ctx.r11.u32);
loc_82604F80:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,592(r25)
	PPC_STORE_U8(ctx.r25.u32 + 592, ctx.r11.u8);
	// stfs f0,608(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 608, temp.u32);
	// stfs f24,612(r25)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r25.u32 + 612, temp.u32);
	// stfs f27,616(r25)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r25.u32 + 616, temp.u32);
	// lwz r11,4472(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4472);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r10,604(r25)
	PPC_STORE_U32(ctx.r25.u32 + 604, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce7b0
	ctx.lr = 0x82604FB0;
	__restfpr_23(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604FB4"))) PPC_WEAK_FUNC(sub_82604FB4);
PPC_FUNC_IMPL(__imp__sub_82604FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604FB8"))) PPC_WEAK_FUNC(sub_82604FB8);
PPC_FUNC_IMPL(__imp__sub_82604FB8) {
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
	// bl 0x825fe838
	ctx.lr = 0x82604FD0;
	sub_825FE838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fef00
	ctx.lr = 0x82604FD8;
	sub_825FEF00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82604ff8
	if (!cr6.eq) goto loc_82604FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fea78
	ctx.lr = 0x82604FEC;
	sub_825FEA78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fedc0
	ctx.lr = 0x82604FF4;
	sub_825FEDC0(ctx, base);
	// b 0x82605018
	goto loc_82605018;
loc_82604FF8:
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// bl 0x825fae68
	ctx.lr = 0x82605000;
	sub_825FAE68(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x825fae68
	ctx.lr = 0x82605008;
	sub_825FAE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_82605018:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// li r5,44
	ctx.r5.s64 = 44;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,24360
	ctx.r3.s64 = ctx.r3.s64 + 24360;
	// bl 0x831ce980
	ctx.lr = 0x82605030;
	sub_831CE980(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,664
	ctx.r4.s64 = ctx.r31.s64 + 664;
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r3,24404
	ctx.r3.s64 = ctx.r3.s64 + 24404;
	// bl 0x831ce980
	ctx.lr = 0x82605048;
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

__attribute__((alias("__imp__sub_8260505C"))) PPC_WEAK_FUNC(sub_8260505C);
PPC_FUNC_IMPL(__imp__sub_8260505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605060"))) PPC_WEAK_FUNC(sub_82605060);
PPC_FUNC_IMPL(__imp__sub_82605060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82605068;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x826056a4
	if (!cr6.eq) goto loc_826056A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a22c10
	ctx.lr = 0x82605098;
	sub_82A22C10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826050c8
	if (cr6.lt) goto loc_826050C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x826050c8
	if (!cr6.lt) goto loc_826050C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826050c8
	if (cr6.lt) goto loc_826050C8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826050cc
	if (cr6.lt) goto loc_826050CC;
loc_826050C8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826050CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826056a4
	if (!cr6.eq) goto loc_826056A4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// ori r25,r10,20120
	ctx.r25.u64 = ctx.r10.u64 | 20120;
	// add r22,r9,r25
	ctx.r22.u64 = ctx.r9.u64 + ctx.r25.u64;
	// lwz r19,8(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r21,16(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x83740868
	ctx.lr = 0x826050F8;
	sub_83740868(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,-11316(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,28(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82a22b40
	ctx.lr = 0x82605120;
	sub_82A22B40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a3e400
	ctx.lr = 0x8260512C;
	sub_82A3E400(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826056a4
	if (cr6.eq) goto loc_826056A4;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82605144:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82605154;
	sub_82A22B40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a3e400
	ctx.lr = 0x82605160;
	sub_82A3E400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82605184
	if (cr6.eq) goto loc_82605184;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82605144
	if (cr6.lt) goto loc_82605144;
loc_82605184:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi r31,r29,24
	ctx.r31.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82605198;
	sub_82A22B40(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x826051B0;
	sub_82A22B40(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826051e0
	if (cr6.lt) goto loc_826051E0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x826051e0
	if (!cr6.lt) goto loc_826051E0;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826051e0
	if (cr6.lt) goto loc_826051E0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826051e4
	if (cr6.lt) goto loc_826051E4;
loc_826051E0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826051E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826056a4
	if (cr6.eq) goto loc_826056A4;
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,4472(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4472);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfc r11,r27,r6
	xer.ca = ctx.r6.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r27.s64;
	// subfze r27,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r27.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82605218:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82605228
	if (cr6.lt) goto loc_82605228;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82605228:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82605240
	if (cr6.lt) goto loc_82605240;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605244
	if (cr6.lt) goto loc_82605244;
loc_82605240:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605244:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826056a4
	if (cr6.eq) goto loc_826056A4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825ca600
	ctx.lr = 0x82605258;
	sub_825CA600(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// lfs f13,8148(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82605278
	if (!cr6.lt) goto loc_82605278;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826056a4
	if (cr6.eq) goto loc_826056A4;
loc_82605278:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x82605218
	if (cr6.lt) goto loc_82605218;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// bl 0x82a227f0
	ctx.lr = 0x82605298;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x826053c4
	if (cr6.eq) goto loc_826053C4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82605314
	if (!cr6.gt) goto loc_82605314;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x826052d8
	if (!cr6.eq) goto loc_826052D8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x826052dc
	if (cr6.eq) goto loc_826052DC;
loc_826052D8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_826052DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605314
	if (cr6.eq) goto loc_82605314;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82605308
	if (!cr6.lt) goto loc_82605308;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// ld r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82605378
	goto loc_82605378;
loc_82605308:
	// ld r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r24.u32 + 4);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x82605378
	goto loc_82605378;
loc_82605314:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x826053c4
	if (!cr6.gt) goto loc_826053C4;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82605344
	if (!cr6.eq) goto loc_82605344;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82605348
	if (cr6.eq) goto loc_82605348;
loc_82605344:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605348:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826053c4
	if (cr6.eq) goto loc_826053C4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82605370
	if (!cr6.lt) goto loc_82605370;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82605374
	goto loc_82605374;
loc_82605370:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82605374:
	// ld r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 4);
loc_82605378:
	// bl 0x82a2a378
	ctx.lr = 0x8260537C;
	sub_82A2A378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82605394
	if (cr6.lt) goto loc_82605394;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// blt cr6,0x82605398
	if (cr6.lt) goto loc_82605398;
loc_82605394:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605398:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826053c4
	if (cr6.eq) goto loc_826053C4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x825ca600
	ctx.lr = 0x826053B0;
	sub_825CA600(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-6688(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6688);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x826053c4
	if (!cr6.lt) goto loc_826053C4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826053C4:
	// addi r30,r31,5
	ctx.r30.s64 = ctx.r31.s64 + 5;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// bge cr6,0x82605474
	if (!cr6.lt) goto loc_82605474;
loc_826053D4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x826053E4;
	sub_82A22B40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82605410
	if (cr6.lt) goto loc_82605410;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82605410
	if (!cr6.lt) goto loc_82605410;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605410
	if (cr6.lt) goto loc_82605410;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605414
	if (cr6.lt) goto loc_82605414;
loc_82605410:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605458
	if (cr6.eq) goto loc_82605458;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82605440
	if (!cr6.eq) goto loc_82605440;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82605444
	if (cr6.eq) goto loc_82605444;
loc_82605440:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605444:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82605468
	if (!cr6.eq) goto loc_82605468;
loc_82605458:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x826053d4
	if (cr6.lt) goto loc_826053D4;
	// b 0x82605474
	goto loc_82605474;
loc_82605468:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x82605480
	if (!cr6.eq) goto loc_82605480;
loc_82605474:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826056a4
	if (cr6.eq) goto loc_826056A4;
loc_82605480:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82605490;
	sub_82A22B40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83740858
	ctx.lr = 0x82605498;
	sub_83740858(ctx, base);
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// ble cr6,0x826054bc
	if (!cr6.gt) goto loc_826054BC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826056a4
	if (cr6.eq) goto loc_826056A4;
loc_826054BC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfs f13,8144(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,252(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 252);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82605500
	if (cr6.gt) goto loc_82605500;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82605500:
	// bl 0x83740858
	ctx.lr = 0x82605504;
	sub_83740858(ctx, base);
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a44ac0
	ctx.lr = 0x82605510;
	sub_82A44AC0(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82605520:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82605520
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82605520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f2,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a48068
	ctx.lr = 0x82605548;
	sub_82A48068(ctx, base);
	// rlwinm r10,r3,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 & ctx.r31.u64;
	// bge cr6,0x8260556c
	if (!cr6.lt) goto loc_8260556C;
	// mulli r11,r29,88
	ctx.r11.s64 = ctx.r29.s64 * 88;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// b 0x82605570
	goto loc_82605570;
loc_8260556C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82605570:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825ca600
	ctx.lr = 0x8260557C;
	sub_825CA600(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-6656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6656);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82605590
	if (!cr6.gt) goto loc_82605590;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82605590:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605694
	if (cr6.eq) goto loc_82605694;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r10,32
	ctx.r10.s64 = 32;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,26280
	ctx.r8.s64 = ctx.r8.s64 + 26280;
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// stw r20,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r20.u32);
	// stw r20,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r20.u32);
	// lwz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x826055ec
	if (cr6.lt) goto loc_826055EC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x826055ec
	if (!cr6.lt) goto loc_826055EC;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x826055ec
	if (cr6.lt) goto loc_826055EC;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x826055f0
	if (cr6.lt) goto loc_826055F0;
loc_826055EC:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_826055F0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82605688
	if (cr6.eq) goto loc_82605688;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x82605610
	if (!cr6.eq) goto loc_82605610;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x82605678
	goto loc_82605678;
loc_82605610:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82605634
	if (!cr6.gt) goto loc_82605634;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x8260562c
	if (!cr6.gt) goto loc_8260562C;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82605634
	if (!cr6.eq) goto loc_82605634;
loc_8260562C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82605638
	goto loc_82605638;
loc_82605634:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605638:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605660
	if (cr6.eq) goto loc_82605660;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82605658
	if (cr6.eq) goto loc_82605658;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x82605660
	if (!cr6.eq) goto loc_82605660;
loc_82605658:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82605664
	goto loc_82605664;
loc_82605660:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82605664:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82605678
	if (cr6.eq) goto loc_82605678;
	// li r11,38
	ctx.r11.s64 = 38;
loc_82605678:
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// beq cr6,0x82605688
	if (cr6.eq) goto loc_82605688;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
loc_82605688:
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825ff048
	ctx.lr = 0x82605694;
	sub_825FF048(ctx, base);
loc_82605694:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_826056A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826056B4"))) PPC_WEAK_FUNC(sub_826056B4);
PPC_FUNC_IMPL(__imp__sub_826056B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826056B8"))) PPC_WEAK_FUNC(sub_826056B8);
PPC_FUNC_IMPL(__imp__sub_826056B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x826056C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a23768
	ctx.lr = 0x826056E0;
	sub_82A23768(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82605714
	if (cr6.eq) goto loc_82605714;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x826056FC;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82605714
	if (!cr6.gt) goto loc_82605714;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bgt cr6,0x82605714
	if (cr6.gt) goto loc_82605714;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82605714:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addis r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 65536;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r29,r29,26280
	ctx.r29.s64 = ctx.r29.s64 + 26280;
	// bl 0x82a22c10
	ctx.lr = 0x82605734;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605760
	if (cr6.lt) goto loc_82605760;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82605760
	if (!cr6.lt) goto loc_82605760;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605760
	if (cr6.lt) goto loc_82605760;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605764
	if (cr6.lt) goto loc_82605764;
loc_82605760:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605764:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82605780
	if (!cr6.eq) goto loc_82605780;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605784
	if (cr6.eq) goto loc_82605784;
loc_82605780:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82605784:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x826057d0
	if (!cr6.eq) goto loc_826057D0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826057d0
	if (!cr6.eq) goto loc_826057D0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826057c4
	if (cr6.eq) goto loc_826057C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ff048
	ctx.lr = 0x826057C4;
	sub_825FF048(ctx, base);
loc_826057C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_826057D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x826057DC;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,252(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 252);
	// lfs f13,8144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82605820
	if (cr6.gt) goto loc_82605820;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82605820:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// beq cr6,0x82605884
	if (cr6.eq) goto loc_82605884;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82605860
	if (cr6.lt) goto loc_82605860;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x82605860
	if (!cr6.lt) goto loc_82605860;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605860
	if (cr6.lt) goto loc_82605860;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605864
	if (cr6.lt) goto loc_82605864;
loc_82605860:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605864:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605884
	if (cr6.eq) goto loc_82605884;
	// ori r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 1024;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// beq cr6,0x82605884
	if (cr6.eq) goto loc_82605884;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
loc_82605884:
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82605898;
	sub_82A22B40(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826058AC"))) PPC_WEAK_FUNC(sub_826058AC);
PPC_FUNC_IMPL(__imp__sub_826058AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826058B0"))) PPC_WEAK_FUNC(sub_826058B0);
PPC_FUNC_IMPL(__imp__sub_826058B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x826058B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82605930
	if (cr6.lt) goto loc_82605930;
	// beq cr6,0x82605914
	if (cr6.eq) goto loc_82605914;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x826058e8
	if (cr6.lt) goto loc_826058E8;
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// b 0x8260594c
	goto loc_8260594C;
loc_826058E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ff7f8
	ctx.lr = 0x826058F0;
	sub_825FF7F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605908
	if (cr6.eq) goto loc_82605908;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// b 0x8260594c
	goto loc_8260594C;
loc_82605908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645860
	ctx.lr = 0x82605910;
	sub_82645860(ctx, base);
	// b 0x8260594c
	goto loc_8260594C;
loc_82605914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ff630
	ctx.lr = 0x8260591C;
	sub_825FF630(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260594c
	if (cr6.eq) goto loc_8260594C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82605948
	goto loc_82605948;
loc_82605930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ff4a8
	ctx.lr = 0x82605938;
	sub_825FF4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260594c
	if (cr6.eq) goto loc_8260594C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82605948:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8260594C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// beq cr6,0x826059b0
	if (cr6.eq) goto loc_826059B0;
	// lbz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// ori r8,r11,26104
	ctx.r8.u64 = ctx.r11.u64 | 26104;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r11,r11,21832
	ctx.r11.s64 = ctx.r11.s64 + 21832;
	// addi r30,r11,768
	ctx.r30.s64 = ctx.r11.s64 + 768;
	// addi r3,r11,1580
	ctx.r3.s64 = ctx.r11.s64 + 1580;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825d6f20
	ctx.lr = 0x82605988;
	sub_825D6F20(ctx, base);
	// addi r4,r31,780
	ctx.r4.s64 = ctx.r31.s64 + 780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6f20
	ctx.lr = 0x82605994;
	sub_825D6F20(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,708
	ctx.r4.s64 = ctx.r31.s64 + 708;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r3,r3,26208
	ctx.r3.s64 = ctx.r3.s64 + 26208;
	// bl 0x831ce980
	ctx.lr = 0x826059AC;
	sub_831CE980(ctx, base);
	// b 0x826059bc
	goto loc_826059BC;
loc_826059B0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r11,26104
	ctx.r9.u64 = ctx.r11.u64 | 26104;
	// stbx r29,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u8);
loc_826059BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,780
	ctx.r4.s64 = ctx.r31.s64 + 780;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,22600
	ctx.r3.s64 = ctx.r3.s64 + 22600;
	// bl 0x825d6f20
	ctx.lr = 0x826059D0;
	sub_825D6F20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826059D8"))) PPC_WEAK_FUNC(sub_826059D8);
PPC_FUNC_IMPL(__imp__sub_826059D8) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82605a4c
	if (cr6.lt) goto loc_82605A4C;
	// beq cr6,0x82605a30
	if (cr6.eq) goto loc_82605A30;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82605a68
	if (!cr6.eq) goto loc_82605A68;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stb r11,1592(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1592, ctx.r11.u8);
	// stw r10,1596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1596, ctx.r10.u32);
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, ctx.r11.u32);
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
loc_82605A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ffd70
	ctx.lr = 0x82605A38;
	sub_825FFD70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605a68
	if (cr6.eq) goto loc_82605A68;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82605a64
	goto loc_82605A64;
loc_82605A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ffb18
	ctx.lr = 0x82605A54;
	sub_825FFB18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605a68
	if (cr6.eq) goto loc_82605A68;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82605A64:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82605A68:
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

__attribute__((alias("__imp__sub_82605A7C"))) PPC_WEAK_FUNC(sub_82605A7C);
PPC_FUNC_IMPL(__imp__sub_82605A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605A80"))) PPC_WEAK_FUNC(sub_82605A80);
PPC_FUNC_IMPL(__imp__sub_82605A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82605A88;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r31,32(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ld r26,40(r4)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// blt cr6,0x82605ad4
	if (cr6.lt) goto loc_82605AD4;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bge cr6,0x82605ad4
	if (!cr6.lt) goto loc_82605AD4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605ad4
	if (cr6.lt) goto loc_82605AD4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605ad8
	if (cr6.lt) goto loc_82605AD8;
loc_82605AD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605AD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605c8c
	if (cr6.eq) goto loc_82605C8C;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82605b10
	if (cr6.lt) goto loc_82605B10;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82605b10
	if (!cr6.lt) goto loc_82605B10;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605b10
	if (cr6.lt) goto loc_82605B10;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605b14
	if (cr6.lt) goto loc_82605B14;
loc_82605B10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605B14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605c8c
	if (cr6.eq) goto loc_82605C8C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bge cr6,0x82605c8c
	if (!cr6.lt) goto loc_82605C8C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,5868
	ctx.r3.s64 = ctx.r11.s64 + 5868;
	// lwz r4,5444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5444);
	// bl 0x82a49338
	ctx.lr = 0x82605B3C;
	sub_82A49338(ctx, base);
	// addi r10,r25,74
	ctx.r10.s64 = ctx.r25.s64 + 74;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82a2a378
	ctx.lr = 0x82605B58;
	sub_82A2A378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x82605b78
	if (!cr6.lt) goto loc_82605B78;
	// addi r11,r29,74
	ctx.r11.s64 = ctx.r29.s64 + 74;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82605b7c
	goto loc_82605B7C;
loc_82605B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605B7C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a2a378
	ctx.lr = 0x82605B84;
	sub_82A2A378(ctx, base);
	// mulli r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 * 44;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// lfs f2,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// bl 0x825c3ec0
	ctx.lr = 0x82605BB8;
	sub_825C3EC0(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r31,r9,1
	ctx.r31.u64 = ctx.r9.u64 | 1;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// bl 0x825cb910
	ctx.lr = 0x82605BD8;
	sub_825CB910(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,-20096(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82605bf0
	if (cr6.gt) goto loc_82605BF0;
	// ori r11,r31,8
	ctx.r11.u64 = ctx.r31.u64 | 8;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82605BF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(ctx.r29.s32, 11, xer);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// beq cr6,0x82605c04
	if (cr6.eq) goto loc_82605C04;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
loc_82605C04:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(ctx.r30.s32, 17, xer);
	// beq cr6,0x82605c18
	if (cr6.eq) goto loc_82605C18;
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(ctx.r30.s32, 15, xer);
	// bne cr6,0x82605c24
	if (!cr6.eq) goto loc_82605C24;
loc_82605C18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82605C24:
	// addi r11,r25,76
	ctx.r11.s64 = ctx.r25.s64 + 76;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r24,20
	ctx.r4.s64 = ctx.r24.s64 + 20;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r7,252(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 252);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x82a3fb88
	ctx.lr = 0x82605C4C;
	sub_82A3FB88(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a484f0
	ctx.lr = 0x82605C68;
	sub_82A484F0(ctx, base);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4ccf8
	ctx.lr = 0x82605C80;
	sub_82A4CCF8(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a4c650
	ctx.lr = 0x82605C8C;
	sub_82A4C650(ctx, base);
loc_82605C8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605C94"))) PPC_WEAK_FUNC(sub_82605C94);
PPC_FUNC_IMPL(__imp__sub_82605C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605C98"))) PPC_WEAK_FUNC(sub_82605C98);
PPC_FUNC_IMPL(__imp__sub_82605C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82605CA0;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r19,28(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82606174
	if (cr6.eq) goto loc_82606174;
	// ld r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x82605d00
	if (cr6.lt) goto loc_82605D00;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82605d00
	if (!cr6.lt) goto loc_82605D00;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82605d00
	if (cr6.lt) goto loc_82605D00;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82605d04
	if (cr6.lt) goto loc_82605D04;
loc_82605D00:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82605D04:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82606174
	if (cr6.eq) goto loc_82606174;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82606174
	if (!cr6.lt) goto loc_82606174;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// ld r9,32(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 32);
	// addi r8,r31,74
	ctx.r8.s64 = ctx.r31.s64 + 74;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwzx r20,r7,r11
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x82a2a378
	ctx.lr = 0x82605D40;
	sub_82A2A378(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82605D54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82605D60;
	sub_82A22B40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82605d8c
	if (cr6.lt) goto loc_82605D8C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82605d8c
	if (!cr6.lt) goto loc_82605D8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82605d8c
	if (cr6.lt) goto loc_82605D8C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82605d90
	if (cr6.lt) goto loc_82605D90;
loc_82605D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605D90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605dd4
	if (cr6.eq) goto loc_82605DD4;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// bne cr6,0x82605db4
	if (!cr6.eq) goto loc_82605DB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82605db8
	if (cr6.eq) goto loc_82605DB8;
loc_82605DB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605DB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82605dd4
	if (cr6.eq) goto loc_82605DD4;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, xer);
	// beq cr6,0x82605de4
	if (cr6.eq) goto loc_82605DE4;
loc_82605DD4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// blt cr6,0x82605d54
	if (cr6.lt) goto loc_82605D54;
	// b 0x82605de8
	goto loc_82605DE8;
loc_82605DE4:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82605DE8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,5868
	ctx.r3.s64 = ctx.r11.s64 + 5868;
	// lwz r4,5444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5444);
	// bl 0x82a49338
	ctx.lr = 0x82605DFC;
	sub_82A49338(ctx, base);
	// mulli r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 * 44;
	// add r25,r3,r10
	ctx.r25.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x82605e20
	if (!cr6.lt) goto loc_82605E20;
	// addi r11,r30,30
	ctx.r11.s64 = ctx.r30.s64 + 30;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82605e24
	goto loc_82605E24;
loc_82605E20:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82605E24:
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// bge cr6,0x82605e40
	if (!cr6.lt) goto loc_82605E40;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82605e44
	goto loc_82605E44;
loc_82605E40:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82605E44:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// lwz r28,8(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// blt cr6,0x82605eac
	if (cr6.lt) goto loc_82605EAC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82605E6C;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82605e90
	if (!cr6.gt) goto loc_82605E90;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x82605e88
	if (!cr6.gt) goto loc_82605E88;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x82605e90
	if (!cr6.eq) goto loc_82605E90;
loc_82605E88:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82605e94
	goto loc_82605E94;
loc_82605E90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605E94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82605eac
	if (cr6.eq) goto loc_82605EAC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82605EAC:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r6,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r4,r31,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r6,r31,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// and r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 & ctx.r31.u64;
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 & ctx.r31.u64;
	// and r3,r5,r31
	ctx.r3.u64 = ctx.r5.u64 & ctx.r31.u64;
	// addi r8,r10,5646
	ctx.r8.s64 = ctx.r10.s64 + 5646;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r3,r7,24796
	ctx.r3.u64 = ctx.r7.u64 | 24796;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r7,r6,24804
	ctx.r7.u64 = ctx.r6.u64 | 24804;
	// lis r6,-17874
	ctx.r6.s64 = -1171390464;
	// lwzx r10,r5,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ori r8,r6,35747
	ctx.r8.u64 = ctx.r6.u64 | 35747;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r7,r4,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// blt cr6,0x82605f50
	if (cr6.lt) goto loc_82605F50;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bge cr6,0x82605f50
	if (!cr6.lt) goto loc_82605F50;
	// mulhwu r11,r30,r8
	ctx.r11.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r6,r11,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r5,r6,11
	ctx.r5.s64 = ctx.r6.s64 * 11;
	// subf r11,r5,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r5.s64;
	// b 0x82605f54
	goto loc_82605F54;
loc_82605F50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605F54:
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82605f70
	if (cr6.eq) goto loc_82605F70;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82605F70:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82605f94
	if (cr6.lt) goto loc_82605F94;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bge cr6,0x82605f94
	if (!cr6.lt) goto loc_82605F94;
	// mulhwu r11,r30,r8
	ctx.r11.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r6,r10,11
	ctx.r6.s64 = ctx.r10.s64 * 11;
	// subf r11,r6,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r6.s64;
	// b 0x82605f98
	goto loc_82605F98;
loc_82605F94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605F98:
	// sraw r11,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82605fb4
	if (cr6.eq) goto loc_82605FB4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82605FB4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x82605fd8
	if (cr6.lt) goto loc_82605FD8;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// bge cr6,0x82605fd8
	if (!cr6.lt) goto loc_82605FD8;
	// mulhwu r11,r30,r8
	ctx.r11.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 * 11;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// b 0x82605fdc
	goto loc_82605FDC;
loc_82605FD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82605FDC:
	// sraw r11,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r11.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82605ff8
	if (cr6.eq) goto loc_82605FF8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82605FF8:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82606020
	if (cr6.lt) goto loc_82606020;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a36688
	ctx.lr = 0x8260600C;
	sub_82A36688(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82606020
	if (!cr6.eq) goto loc_82606020;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82606020:
	// lbz r11,65(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606038
	if (cr6.eq) goto loc_82606038;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82606038:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,248(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 248);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x82606058;
	sub_825C3EC0(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x82606064;
	sub_825CE9F8(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fabs f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,30328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30328);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a36180
	ctx.lr = 0x8260607C;
	sub_82A36180(ctx, base);
	// bl 0x825c2950
	ctx.lr = 0x82606080;
	sub_825C2950(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825ce9f8
	ctx.lr = 0x8260608C;
	sub_825CE9F8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fabs f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-6652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x826060bc
	if (!cr6.lt) goto loc_826060BC;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x826060bc
	if (!cr6.lt) goto loc_826060BC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_826060BC:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x826060d8
	if (!cr6.gt) goto loc_826060D8;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x826060d8
	if (!cr6.gt) goto loc_826060D8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_826060D8:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a227f0
	ctx.lr = 0x826060E4;
	sub_82A227F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x826060F4;
	sub_831CE980(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x8260616c
	if (cr6.eq) goto loc_8260616C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82a29160
	ctx.lr = 0x82606118;
	sub_82A29160(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bge cr6,0x8260616c
	if (!cr6.lt) goto loc_8260616C;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bge cr6,0x8260616c
	if (!cr6.lt) goto loc_8260616C;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8260616c
	if (cr6.gt) goto loc_8260616C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4cd40
	ctx.lr = 0x82606160;
	sub_82A4CD40(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
loc_8260616C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82606174;
	sub_83102DB0(ctx, base);
loc_82606174:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606184"))) PPC_WEAK_FUNC(sub_82606184);
PPC_FUNC_IMPL(__imp__sub_82606184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606188"))) PPC_WEAK_FUNC(sub_82606188);
PPC_FUNC_IMPL(__imp__sub_82606188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82606190;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826062e8
	if (cr6.eq) goto loc_826062E8;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x826062e8
	if (cr6.eq) goto loc_826062E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82a23768
	ctx.lr = 0x826061C4;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x826061D4;
	sub_831CE980(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x826062e4
	if (cr6.eq) goto loc_826062E4;
	// bl 0x82a23e98
	ctx.lr = 0x826061E8;
	sub_82A23E98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x83767d18
	ctx.lr = 0x826061F4;
	sub_83767D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82a23f00
	ctx.lr = 0x8260620C;
	sub_82A23F00(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a23f38
	ctx.lr = 0x82606220;
	sub_82A23F38(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r27,252(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x826062e0
	if (!cr6.lt) goto loc_826062E0;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826062e0
	if (cr6.eq) goto loc_826062E0;
	// lbz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 252);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f13,-9980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9980);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmsubs f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x826062e0
	if (!cr6.gt) goto loc_826062E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24552);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x826062e0
	if (!cr6.gt) goto loc_826062E0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r31,r11,27316
	ctx.r31.u64 = ctx.r11.u64 | 27316;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x82a4cd20
	ctx.lr = 0x826062AC;
	sub_82A4CD20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a4c8c8
	ctx.lr = 0x826062B8;
	sub_82A4C8C8(ctx, base);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826062e0
	if (cr6.eq) goto loc_826062E0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82a4cd20
	ctx.lr = 0x826062D4;
	sub_82A4CD20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a4c8f0
	ctx.lr = 0x826062E0;
	sub_82A4C8F0(ctx, base);
loc_826062E0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_826062E4:
	// bl 0x83102db0
	ctx.lr = 0x826062E8;
	sub_83102DB0(ctx, base);
loc_826062E8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826062F4"))) PPC_WEAK_FUNC(sub_826062F4);
PPC_FUNC_IMPL(__imp__sub_826062F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826062F8"))) PPC_WEAK_FUNC(sub_826062F8);
PPC_FUNC_IMPL(__imp__sub_826062F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82606300;
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
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// bl 0x825fa868
	ctx.lr = 0x82606314;
	sub_825FA868(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r28,2
	ctx.r28.s64 = 2;
	// stb r30,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r30.u8);
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// li r9,115
	ctx.r9.s64 = 115;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stw r28,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r28.u32);
	// stfs f31,332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// stfs f31,340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stfs f31,344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stb r30,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r30.u8);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// stw r29,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r29.u32);
	// stw r9,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
	// stfs f31,332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f31,340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stfs f31,368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// stb r30,373(r31)
	PPC_STORE_U8(ctx.r31.u32 + 373, ctx.r30.u8);
	// stw r28,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r28.u32);
	// bl 0x82600fc8
	ctx.lr = 0x826063C8;
	sub_82600FC8(ctx, base);
	// addi r8,r31,456
	ctx.r8.s64 = ctx.r31.s64 + 456;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826063D0:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stbx r30,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r30.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r30.u8);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stb r30,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r30.u8);
	// blt cr6,0x826063d0
	if (cr6.lt) goto loc_826063D0;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x82601088
	ctx.lr = 0x82606400;
	sub_82601088(ctx, base);
	// stfs f31,608(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// stfs f31,616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stb r30,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r30.u8);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// stw r28,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f31,616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f31,632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f31,636(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stfs f31,640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// bl 0x825fae68
	ctx.lr = 0x82606444;
	sub_825FAE68(ctx, base);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stfs f31,676(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f31,684(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// bl 0x825fae68
	ctx.lr = 0x82606458;
	sub_825FAE68(ctx, base);
	// addi r3,r31,708
	ctx.r3.s64 = ctx.r31.s64 + 708;
	// bl 0x826010e0
	ctx.lr = 0x82606460;
	sub_826010E0(ctx, base);
	// addi r3,r31,780
	ctx.r3.s64 = ctx.r31.s64 + 780;
	// bl 0x82600e10
	ctx.lr = 0x82606468;
	sub_82600E10(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,1592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1592, ctx.r30.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r28,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r28.u32);
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r30,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// stfs f31,1652(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// stfs f31,1656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stfs f31,1660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
	// stw r28,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r28.u32);
	// stfs f31,1616(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stb r30,1620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1620, ctx.r30.u8);
	// addi r11,r31,1608
	ctx.r11.s64 = ctx.r31.s64 + 1608;
	// stb r30,1621(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1621, ctx.r30.u8);
	// addi r5,r7,21716
	ctx.r5.s64 = ctx.r7.s64 + 21716;
	// stb r30,1622(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1622, ctx.r30.u8);
	// addi r3,r31,1700
	ctx.r3.s64 = ctx.r31.s64 + 1700;
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// stw r30,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// stw r29,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r29.u32);
	// stw r29,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r29.u32);
	// stfs f31,1652(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// stfs f31,1656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// stfs f31,1660(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
	// stw r8,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r8.u32);
	// stw r9,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r9.u32);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r28,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r28.u32);
	// stw r29,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r29.u32);
	// stw r28,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r28.u32);
	// stw r6,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r6.u32);
	// stw r30,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stb r30,1680(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1680, ctx.r30.u8);
	// stw r5,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r5.u32);
	// bl 0x825fac70
	ctx.lr = 0x82606518;
	sub_825FAC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x825fafe0
	ctx.lr = 0x8260655C;
	sub_825FAFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260656C"))) PPC_WEAK_FUNC(sub_8260656C);
PPC_FUNC_IMPL(__imp__sub_8260656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606570"))) PPC_WEAK_FUNC(sub_82606570);
PPC_FUNC_IMPL(__imp__sub_82606570) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a22b40
	ctx.lr = 0x82606594;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x826065bc
	if (!cr6.gt) goto loc_826065BC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x826065b4
	if (!cr6.gt) goto loc_826065B4;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x826065bc
	if (!cr6.eq) goto loc_826065BC;
loc_826065B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826065c0
	goto loc_826065C0;
loc_826065BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826065C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826065d4
	if (cr6.eq) goto loc_826065D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82601228
	ctx.lr = 0x826065D4;
	sub_82601228(ctx, base);
loc_826065D4:
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

__attribute__((alias("__imp__sub_826065E8"))) PPC_WEAK_FUNC(sub_826065E8);
PPC_FUNC_IMPL(__imp__sub_826065E8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x825fa938
	ctx.lr = 0x82606640;
	sub_825FA938(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82601688
	ctx.lr = 0x8260664C;
	sub_82601688(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82606670
	if (cr6.eq) goto loc_82606670;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,136
	ctx.r5.s64 = 136;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,22272
	ctx.r3.s64 = ctx.r3.s64 + 22272;
	// bl 0x831ce980
	ctx.lr = 0x82606670;
	sub_831CE980(ctx, base);
loc_82606670:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r10,22280
	ctx.r9.u64 = ctx.r10.u64 | 22280;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826066bc
	if (cr6.eq) goto loc_826066BC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r31,r10,22361
	ctx.r31.u64 = ctx.r10.u64 | 22361;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826066bc
	if (!cr6.eq) goto loc_826066BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82601c58
	ctx.lr = 0x826066A4;
	sub_82601C58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826066bc
	if (cr6.eq) goto loc_826066BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
loc_826066BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_826066D4"))) PPC_WEAK_FUNC(sub_826066D4);
PPC_FUNC_IMPL(__imp__sub_826066D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826066D8"))) PPC_WEAK_FUNC(sub_826066D8);
PPC_FUNC_IMPL(__imp__sub_826066D8) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82606714
	if (cr6.lt) goto loc_82606714;
	// bne cr6,0x82606730
	if (!cr6.eq) goto loc_82606730;
	// bl 0x82602788
	ctx.lr = 0x82606700;
	sub_82602788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606730
	if (cr6.eq) goto loc_82606730;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8260672c
	goto loc_8260672C;
loc_82606714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fca70
	ctx.lr = 0x8260671C;
	sub_825FCA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606730
	if (cr6.eq) goto loc_82606730;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260672C:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82606730:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82a23768
	ctx.lr = 0x82606744;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82606754;
	sub_831CE980(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// cmpwi cr6,r9,55
	cr6.compare<int32_t>(ctx.r9.s32, 55, xer);
	// addi r11,r11,26104
	ctx.r11.s64 = ctx.r11.s64 + 26104;
	// bne cr6,0x82606788
	if (!cr6.eq) goto loc_82606788;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82606810
	if (cr6.eq) goto loc_82606810;
	// lwz r9,1668(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82606810
	if (cr6.eq) goto loc_82606810;
loc_82606788:
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// lwz r8,1668(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// addi r10,r31,1664
	ctx.r10.s64 = ctx.r31.s64 + 1664;
	// addi r7,r7,22424
	ctx.r7.s64 = ctx.r7.s64 + 22424;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r4,1672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// lwz r10,1676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lbz r8,1680(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1680);
	// stb r8,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, ctx.r8.u8);
	// lwz r4,1684(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// stw r4,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r4.u32);
	// lwz r10,1688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	// stw r10,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// lwz r8,1692(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// stw r8,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r8.u32);
	// lwz r4,1696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// stw r4,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r4.u32);
	// stw r6,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r6.u32);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// stw r9,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r9.u32);
	// stw r5,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r5.u32);
	// stw r9,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r9.u32);
	// stw r3,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r3.u32);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// stb r11,1680(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1680, ctx.r11.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82606810:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82606818;
	sub_83102DB0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260682C"))) PPC_WEAK_FUNC(sub_8260682C);
PPC_FUNC_IMPL(__imp__sub_8260682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606830"))) PPC_WEAK_FUNC(sub_82606830);
PPC_FUNC_IMPL(__imp__sub_82606830) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x826068b8
	if (cr6.lt) goto loc_826068B8;
	// bne cr6,0x826068d4
	if (!cr6.eq) goto loc_826068D4;
	// bl 0x826032d8
	ctx.lr = 0x8260685C;
	sub_826032D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826068d4
	if (cr6.eq) goto loc_826068D4;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826068a8
	if (cr6.eq) goto loc_826068A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,80
	ctx.r5.s64 = 80;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,24224
	ctx.r11.s64 = ctx.r11.s64 + 24224;
	// addi r30,r11,224
	ctx.r30.s64 = ctx.r11.s64 + 224;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82606898;
	sub_831CE980(ctx, base);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x826068A8;
	sub_831CE980(ctx, base);
loc_826068A8:
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x825face8
	ctx.lr = 0x826068B0;
	sub_825FACE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826068d0
	goto loc_826068D0;
loc_826068B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fd1c8
	ctx.lr = 0x826068C0;
	sub_825FD1C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826068d4
	if (cr6.eq) goto loc_826068D4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_826068D0:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_826068D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// li r5,80
	ctx.r5.s64 = 80;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,24448
	ctx.r3.s64 = ctx.r3.s64 + 24448;
	// bl 0x831ce980
	ctx.lr = 0x826068EC;
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

__attribute__((alias("__imp__sub_82606904"))) PPC_WEAK_FUNC(sub_82606904);
PPC_FUNC_IMPL(__imp__sub_82606904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606908"))) PPC_WEAK_FUNC(sub_82606908);
PPC_FUNC_IMPL(__imp__sub_82606908) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82606944
	if (!cr6.eq) goto loc_82606944;
	// bl 0x8263ada0
	ctx.lr = 0x82606934;
	sub_8263ADA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606944
	if (cr6.eq) goto loc_82606944;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82606944:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82606970
	if (cr6.lt) goto loc_82606970;
	// bne cr6,0x82606968
	if (!cr6.eq) goto loc_82606968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fd4c0
	ctx.lr = 0x8260695C;
	sub_825FD4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260698c
	if (cr6.eq) goto loc_8260698C;
loc_82606968:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x8260698c
	goto loc_8260698C;
loc_82606970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82603ce0
	ctx.lr = 0x82606978;
	sub_82603CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260698c
	if (cr6.eq) goto loc_8260698C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8260698C:
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

__attribute__((alias("__imp__sub_826069A4"))) PPC_WEAK_FUNC(sub_826069A4);
PPC_FUNC_IMPL(__imp__sub_826069A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826069A8"))) PPC_WEAK_FUNC(sub_826069A8);
PPC_FUNC_IMPL(__imp__sub_826069A8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82606ac4
	if (cr6.lt) goto loc_82606AC4;
	// bne cr6,0x82606ae8
	if (!cr6.eq) goto loc_82606AE8;
	// bl 0x825fe5b0
	ctx.lr = 0x826069D0;
	sub_825FE5B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606a2c
	if (cr6.eq) goto loc_82606A2C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r8,r8,22552
	ctx.r8.s64 = ctx.r8.s64 + 22552;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// b 0x82606ae4
	goto loc_82606AE4;
loc_82606A2C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r10,22592
	ctx.r9.u64 = ctx.r10.u64 | 22592;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x82606a6c
	if (!cr6.gt) goto loc_82606A6C;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,22552
	ctx.r10.s64 = ctx.r10.s64 + 22552;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
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
loc_82606A6C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22596
	ctx.r9.u64 = ctx.r10.u64 | 22596;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x82606aa8
	if (!cr6.gt) goto loc_82606AA8;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,22552
	ctx.r10.s64 = ctx.r10.s64 + 22552;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
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
loc_82606AA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826045e8
	ctx.lr = 0x82606AB0;
	sub_826045E8(ctx, base);
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
loc_82606AC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fe420
	ctx.lr = 0x82606ACC;
	sub_825FE420(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606ae8
	if (cr6.eq) goto loc_82606AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826045e8
	ctx.lr = 0x82606AE0;
	sub_826045E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82606AE4:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82606AE8:
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

__attribute__((alias("__imp__sub_82606AFC"))) PPC_WEAK_FUNC(sub_82606AFC);
PPC_FUNC_IMPL(__imp__sub_82606AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606B00"))) PPC_WEAK_FUNC(sub_82606B00);
PPC_FUNC_IMPL(__imp__sub_82606B00) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82606b68
	if (cr6.lt) goto loc_82606B68;
	// bne cr6,0x82606bb0
	if (!cr6.eq) goto loc_82606BB0;
	// bl 0x825fe748
	ctx.lr = 0x82606B28;
	sub_825FE748(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606b84
	if (cr6.eq) goto loc_82606B84;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stb r11,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r9,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// b 0x82606b84
	goto loc_82606B84;
loc_82606B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82604948
	ctx.lr = 0x82606B70;
	sub_82604948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606b84
	if (cr6.eq) goto loc_82606B84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82606B84:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,26180
	ctx.r10.s64 = ctx.r10.s64 + 26180;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82606BA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82606ba4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82606BA4;
loc_82606BB0:
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

__attribute__((alias("__imp__sub_82606BC4"))) PPC_WEAK_FUNC(sub_82606BC4);
PPC_FUNC_IMPL(__imp__sub_82606BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606BC8"))) PPC_WEAK_FUNC(sub_82606BC8);
PPC_FUNC_IMPL(__imp__sub_82606BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addic. r10,r10,26280
	xer.ca = ctx.r10.u32 > 4294941015;
	ctx.r10.s64 = ctx.r10.s64 + 26280;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82606c48
	if (cr0.eq) goto loc_82606C48;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82606c2c
	if (cr6.lt) goto loc_82606C2C;
	// beq cr6,0x82606c10
	if (cr6.eq) goto loc_82606C10;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82606c48
	if (!cr6.eq) goto loc_82606C48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82606c44
	goto loc_82606C44;
loc_82606C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826056b8
	ctx.lr = 0x82606C18;
	sub_826056B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606c48
	if (cr6.eq) goto loc_82606C48;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82606c44
	goto loc_82606C44;
loc_82606C2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82605060
	ctx.lr = 0x82606C34;
	sub_82605060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606c48
	if (cr6.eq) goto loc_82606C48;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82606C44:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82606C48:
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

__attribute__((alias("__imp__sub_82606C5C"))) PPC_WEAK_FUNC(sub_82606C5C);
PPC_FUNC_IMPL(__imp__sub_82606C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606C60"))) PPC_WEAK_FUNC(sub_82606C60);
PPC_FUNC_IMPL(__imp__sub_82606C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82606C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82606da0
	if (cr6.eq) goto loc_82606DA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a229e8
	ctx.lr = 0x82606C8C;
	sub_82A229E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82606C9C;
	sub_831CE980(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,55
	cr6.compare<int32_t>(ctx.r10.s32, 55, xer);
	// beq cr6,0x82606d98
	if (cr6.eq) goto loc_82606D98;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82606cdc
	if (cr6.lt) goto loc_82606CDC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82606cdc
	if (!cr6.lt) goto loc_82606CDC;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82606cdc
	if (cr6.lt) goto loc_82606CDC;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82606ce0
	if (cr6.lt) goto loc_82606CE0;
loc_82606CDC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82606CE0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82606d98
	if (cr6.eq) goto loc_82606D98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82606d98
	if (!cr6.lt) goto loc_82606D98;
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82a2a378
	ctx.lr = 0x82606D0C;
	sub_82A2A378(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82606d48
	if (!cr6.eq) goto loc_82606D48;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82605c98
	ctx.lr = 0x82606D3C;
	sub_82605C98(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82606d70
	goto loc_82606D70;
loc_82606D48:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82606d58
	if (!cr6.eq) goto loc_82606D58;
	// li r31,32
	ctx.r31.s64 = 32;
	// b 0x82606d70
	goto loc_82606D70;
loc_82606D58:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82605a80
	ctx.lr = 0x82606D6C;
	sub_82605A80(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82606D70:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,27316
	ctx.r3.s64 = ctx.r3.s64 + 27316;
	// bl 0x82a4ccf8
	ctx.lr = 0x82606D88;
	sub_82A4CCF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82a4c600
	ctx.lr = 0x82606D98;
	sub_82A4C600(ctx, base);
loc_82606D98:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83102db0
	ctx.lr = 0x82606DA0;
	sub_83102DB0(ctx, base);
loc_82606DA0:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606DA8"))) PPC_WEAK_FUNC(sub_82606DA8);
PPC_FUNC_IMPL(__imp__sub_82606DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82606DB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stfs f31,24(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x825cea80
	ctx.lr = 0x82606DFC;
	sub_825CEA80(ctx, base);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stfs f31,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606E34"))) PPC_WEAK_FUNC(sub_82606E34);
PPC_FUNC_IMPL(__imp__sub_82606E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606E38"))) PPC_WEAK_FUNC(sub_82606E38);
PPC_FUNC_IMPL(__imp__sub_82606E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82606E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82607014
	if (cr6.eq) goto loc_82607014;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82607014
	if (cr6.eq) goto loc_82607014;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23768
	ctx.lr = 0x82606E74;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82606E84;
	sub_831CE980(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23768
	ctx.lr = 0x82606E94;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82606EA4;
	sub_831CE980(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23768
	ctx.lr = 0x82606EB4;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82606EC4;
	sub_831CE980(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a23768
	ctx.lr = 0x82606ED4;
	sub_82A23768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// li r5,340
	ctx.r5.s64 = 340;
	// bl 0x831ce980
	ctx.lr = 0x82606EE4;
	sub_831CE980(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,1136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,55
	cr6.compare<int32_t>(ctx.r9.s32, 55, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4472(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4472);
	// beq cr6,0x82606f1c
	if (cr6.eq) goto loc_82606F1C;
	// lwz r10,4460(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82606f1c
	if (!cr6.eq) goto loc_82606F1C;
	// lwz r11,5388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5388);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82606F1C:
	// lwz r10,4460(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4460);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82606f88
	if (!cr6.eq) goto loc_82606F88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82600438
	ctx.lr = 0x82606F30;
	sub_82600438(ctx, base);
	// lbz r11,1621(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1621);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606f5c
	if (cr6.eq) goto loc_82606F5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1608
	ctx.r3.s64 = ctx.r30.s64 + 1608;
	// bl 0x82a454e0
	ctx.lr = 0x82606F48;
	sub_82A454E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82606f5c
	if (!cr6.eq) goto loc_82606F5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82600260
	ctx.lr = 0x82606F5C;
	sub_82600260(ctx, base);
loc_82606F5C:
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606f70
	if (cr6.eq) goto loc_82606F70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825fffe8
	ctx.lr = 0x82606F70;
	sub_825FFFE8(ctx, base);
loc_82606F70:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82606fc4
	if (cr6.eq) goto loc_82606FC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82606188
	ctx.lr = 0x82606F84;
	sub_82606188(ctx, base);
	// b 0x82606fc4
	goto loc_82606FC4;
loc_82606F88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82606f9c
	if (cr6.eq) goto loc_82606F9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82606c60
	ctx.lr = 0x82606F9C;
	sub_82606C60(ctx, base);
loc_82606F9C:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82606fb0
	if (cr6.eq) goto loc_82606FB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82600bd0
	ctx.lr = 0x82606FB0;
	sub_82600BD0(ctx, base);
loc_82606FB0:
	// lwz r11,784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82606fc4
	if (cr6.eq) goto loc_82606FC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826008e0
	ctx.lr = 0x82606FC4;
	sub_826008E0(ctx, base);
loc_82606FC4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r11,26104
	ctx.r9.u64 = ctx.r11.u64 | 26104;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82606fec
	if (cr6.eq) goto loc_82606FEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82600318
	ctx.lr = 0x82606FE4;
	sub_82600318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826004c0
	ctx.lr = 0x82606FEC;
	sub_826004C0(ctx, base);
loc_82606FEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82600768
	ctx.lr = 0x82606FF4;
	sub_82600768(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x83102db0
	ctx.lr = 0x82606FFC;
	sub_83102DB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x82607004;
	sub_83102DB0(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83102db0
	ctx.lr = 0x8260700C;
	sub_83102DB0(ctx, base);
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// bl 0x83102db0
	ctx.lr = 0x82607014;
	sub_83102DB0(ctx, base);
loc_82607014:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260701C"))) PPC_WEAK_FUNC(sub_8260701C);
PPC_FUNC_IMPL(__imp__sub_8260701C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607020"))) PPC_WEAK_FUNC(sub_82607020);
PPC_FUNC_IMPL(__imp__sub_82607020) {
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
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x826070e0
	if (!cr6.lt) goto loc_826070E0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x826070e0
	if (cr6.eq) goto loc_826070E0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r10,21452
	ctx.r10.u64 = ctx.r10.u64 | 21452;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x826070a4
	if (cr6.eq) goto loc_826070A4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x826070a4
	if (cr0.eq) goto loc_826070A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stb r30,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r30.u8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_826070A4:
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bge cr6,0x826070c4
	if (!cr6.lt) goto loc_826070C4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r8,152
	ctx.r11.s64 = ctx.r8.s64 * 152;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x826070c4
	if (cr0.eq) goto loc_826070C4;
	// bl 0x82606da8
	ctx.lr = 0x826070C4;
	sub_82606DA8(ctx, base);
loc_826070C4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
loc_826070E0:
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

__attribute__((alias("__imp__sub_826070F8"))) PPC_WEAK_FUNC(sub_826070F8);
PPC_FUNC_IMPL(__imp__sub_826070F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82607100;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82607664
	if (cr6.eq) goto loc_82607664;
	// lwz r18,0(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82607664
	if (cr6.eq) goto loc_82607664;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// ori r9,r11,21452
	ctx.r9.u64 = ctx.r11.u64 | 21452;
loc_82607140:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// blt cr6,0x82607150
	if (cr6.lt) goto loc_82607150;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x8260715c
	goto loc_8260715C;
loc_82607150:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8260715C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607664
	if (cr6.eq) goto loc_82607664;
	// addi r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 + 152;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r10,304
	cr6.compare<int32_t>(ctx.r10.s32, 304, xer);
	// blt cr6,0x82607140
	if (cr6.lt) goto loc_82607140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82607198;
	sub_82A22B40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x826071A8;
	sub_82A22B40(ctx, base);
	// lwz r11,4460(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4460);
	// li r19,1
	ctx.r19.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82607204
	if (cr6.eq) goto loc_82607204;
	// lbz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x826071e0
	if (!cr6.eq) goto loc_826071E0;
	// stb r22,200(r25)
	PPC_STORE_U8(ctx.r25.u32 + 200, ctx.r22.u8);
	// lwz r11,5388(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5388);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x826071dc
	if (cr6.eq) goto loc_826071DC;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// b 0x826071e0
	goto loc_826071E0;
loc_826071DC:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_826071E0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// ori r9,r11,22420
	ctx.r9.u64 = ctx.r11.u64 | 22420;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x826072a8
	if (!cr6.eq) goto loc_826072A8;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// b 0x826072a8
	goto loc_826072A8;
loc_82607204:
	// lbz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82607280
	if (cr6.eq) goto loc_82607280;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82607250
	if (!cr6.eq) goto loc_82607250;
	// stb r19,200(r25)
	PPC_STORE_U8(ctx.r25.u32 + 200, ctx.r19.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a22b40
	ctx.lr = 0x8260722C;
	sub_82A22B40(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82607664
	if (!cr6.lt) goto loc_82607664;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r8.u32);
	// b 0x826072a8
	goto loc_826072A8;
loc_82607250:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x82607268
	if (!cr6.eq) goto loc_82607268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x82607268
	if (!cr6.eq) goto loc_82607268;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82607268:
	// lbz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x826072a8
	if (!cr6.eq) goto loc_826072A8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x8260729c
	goto loc_8260729C;
loc_82607280:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x826072a8
	if (!cr6.eq) goto loc_826072A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x826072a8
	if (!cr6.eq) goto loc_826072A8;
	// lbz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
loc_8260729C:
	// bne cr6,0x826072a8
	if (!cr6.eq) goto loc_826072A8;
	// stb r22,200(r25)
	PPC_STORE_U8(ctx.r25.u32 + 200, ctx.r22.u8);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_826072A8:
	// lbz r11,200(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82607644
	if (!cr6.eq) goto loc_82607644;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82607644
	if (!cr6.eq) goto loc_82607644;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// addi r31,r1,196
	ctx.r31.s64 = ctx.r1.s64 + 196;
	// li r24,255
	ctx.r24.s64 = 255;
	// li r23,6
	ctx.r23.s64 = 6;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_826072D8:
	// stfs f31,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// lis r11,-31912
	ctx.r11.s64 = -2091384832;
	// stfs f31,-40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -40, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f31,-36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -36, temp.u32);
	// addi r6,r11,-3648
	ctx.r6.s64 = ctx.r11.s64 + -3648;
	// stfs f31,-32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x823fca98
	ctx.lr = 0x82607300;
	sub_823FCA98(ctx, base);
	// lis r10,-31912
	ctx.r10.s64 = -2091384832;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r10,-3648
	ctx.r6.s64 = ctx.r10.s64 + -3648;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x823fca98
	ctx.lr = 0x82607318;
	sub_823FCA98(ctx, base);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lis r9,-32144
	ctx.r9.s64 = -2106589184;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r9,22320
	ctx.r6.s64 = ctx.r9.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x8260733C;
	sub_823FCA98(ctx, base);
	// lis r8,-32144
	ctx.r8.s64 = -2106589184;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r8,22320
	ctx.r6.s64 = ctx.r8.s64 + 22320;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823fca98
	ctx.lr = 0x82607354;
	sub_823FCA98(ctx, base);
	// addi r29,r31,-28
	ctx.r29.s64 = ctx.r31.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cea80
	ctx.lr = 0x82607360;
	sub_825CEA80(ctx, base);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r22,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r22.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r23,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r23.u32);
	// stw r24,-48(r31)
	PPC_STORE_U32(ctx.r31.u32 + -48, ctx.r24.u32);
	// stfs f31,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// stfs f31,-40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -40, temp.u32);
	// stfs f31,-36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -36, temp.u32);
	// stfs f31,-32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// bl 0x825cea80
	ctx.lr = 0x82607388;
	sub_825CEA80(ctx, base);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r22,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r22.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bge 0x826072d8
	if (!cr0.lt) goto loc_826072D8;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_826073AC:
	// stw r24,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r24.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r23,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r23.u32);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// addi r29,r31,-16
	ctx.r29.s64 = ctx.r31.s64 + -16;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x825cea80
	ctx.lr = 0x826073D0;
	sub_825CEA80(ctx, base);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// stw r22,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r22.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8264e088
	ctx.lr = 0x826073EC;
	sub_8264E088(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r8,7
	cr6.compare<int32_t>(ctx.r8.s32, 7, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bne cr6,0x82607414
	if (!cr6.eq) goto loc_82607414;
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_82607414:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r26,r28,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x831ce980
	ctx.lr = 0x8260742C;
	sub_831CE980(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82607470
	if (cr6.eq) goto loc_82607470;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82607470
	if (!cr6.eq) goto loc_82607470;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82648410
	ctx.lr = 0x82607468;
	sub_82648410(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x8260747c
	goto loc_8260747C;
loc_82607470:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwx r22,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r22.u32);
loc_8260747C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// stw r11,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r11.u32);
	// blt cr6,0x826073ac
	if (cr6.lt) goto loc_826073AC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// bne cr6,0x826074c0
	if (!cr6.eq) goto loc_826074C0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x826074d0
	goto loc_826074D0;
loc_826074C0:
	// bl 0x82a40f18
	ctx.lr = 0x826074C4;
	sub_82A40F18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_826074D0:
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x826074fc
	if (cr6.eq) goto loc_826074FC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x826074fc
	if (!cr6.lt) goto loc_826074FC;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x826074f8
	if (cr6.lt) goto loc_826074F8;
	// stw r11,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r11.u32);
	// b 0x826074fc
	goto loc_826074FC;
loc_826074F8:
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
loc_826074FC:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82607644
	if (cr6.eq) goto loc_82607644;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82607630
	if (!cr6.eq) goto loc_82607630;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82607630
	if (!cr6.eq) goto loc_82607630;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,212(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 212);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r5,208(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r31,r11,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x826486d8
	ctx.lr = 0x8260755C;
	sub_826486D8(ctx, base);
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r31,208(r25)
	PPC_STORE_U32(ctx.r25.u32 + 208, ctx.r31.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,212(r25)
	PPC_STORE_U32(ctx.r25.u32 + 212, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r3
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, xer);
	// beq cr6,0x82607618
	if (cr6.eq) goto loc_82607618;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r4,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// stb r9,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r9.u8);
	// lwz r8,204(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r19,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r19.u32);
	// lwz r5,204(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r4,140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// bl 0x82a40f18
	ctx.lr = 0x826075D4;
	sub_82A40F18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82607664
	if (cr6.eq) goto loc_82607664;
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r31,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r31.u32);
	// lfs f0,4464(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 4464);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,204(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82607618:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82607630:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82607020
	ctx.lr = 0x82607638;
	sub_82607020(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82607644:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82607664:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607670"))) PPC_WEAK_FUNC(sub_82607670);
PPC_FUNC_IMPL(__imp__sub_82607670) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826078a4
	if (cr6.eq) goto loc_826078A4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826078a4
	if (cr6.eq) goto loc_826078A4;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x826078a4
	if (cr6.eq) goto loc_826078A4;
	// lwz r30,28(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a23768
	ctx.lr = 0x826076C0;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x82607764
	if (cr6.eq) goto loc_82607764;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// bl 0x82a225f0
	ctx.lr = 0x826076DC;
	sub_82A225F0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82607718
	if (cr6.lt) goto loc_82607718;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82607718
	if (!cr6.lt) goto loc_82607718;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82607718
	if (cr6.lt) goto loc_82607718;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260771c
	if (cr6.lt) goto loc_8260771C;
loc_82607718:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8260771C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260776c
	if (cr6.eq) goto loc_8260776C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x82607750
	if (!cr6.lt) goto loc_82607750;
	// addi r11,r10,74
	ctx.r11.s64 = ctx.r10.s64 + 74;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82a2a378
	ctx.lr = 0x82607748;
	sub_82A2A378(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// b 0x8260776c
	goto loc_8260776C;
loc_82607750:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x82a2a378
	ctx.lr = 0x8260775C;
	sub_82A2A378(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// b 0x8260776c
	goto loc_8260776C;
loc_82607764:
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
loc_8260776C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fb2d0
	ctx.lr = 0x82607774;
	sub_825FB2D0(ctx, base);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607788
	if (cr6.eq) goto loc_82607788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82606570
	ctx.lr = 0x82607788;
	sub_82606570(ctx, base);
loc_82607788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82606bc8
	ctx.lr = 0x82607790;
	sub_82606BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826024b8
	ctx.lr = 0x82607798;
	sub_826024B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fb488
	ctx.lr = 0x826077A0;
	sub_825FB488(ctx, base);
	// bl 0x825fb4d8
	ctx.lr = 0x826077A4;
	sub_825FB4D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826015f8
	ctx.lr = 0x826077AC;
	sub_826015F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826065e8
	ctx.lr = 0x826077B4;
	sub_826065E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82602370
	ctx.lr = 0x826077BC;
	sub_82602370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826025b8
	ctx.lr = 0x826077C4;
	sub_826025B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82602708
	ctx.lr = 0x826077CC;
	sub_82602708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fc8e0
	ctx.lr = 0x826077D4;
	sub_825FC8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82606830
	ctx.lr = 0x826077DC;
	sub_82606830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825fd388
	ctx.lr = 0x826077E4;
	sub_825FD388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826039b8
	ctx.lr = 0x826077EC;
	sub_826039B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82606908
	ctx.lr = 0x826077F4;
	sub_82606908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82604058
	ctx.lr = 0x826077FC;
	sub_82604058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826069a8
	ctx.lr = 0x82607804;
	sub_826069A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82606b00
	ctx.lr = 0x8260780C;
	sub_82606B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82604fb8
	ctx.lr = 0x82607814;
	sub_82604FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826058b0
	ctx.lr = 0x8260781C;
	sub_826058B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826059d8
	ctx.lr = 0x82607824;
	sub_826059D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ffde8
	ctx.lr = 0x8260782C;
	sub_825FFDE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826066d8
	ctx.lr = 0x82607834;
	sub_826066D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82602f60
	ctx.lr = 0x8260783C;
	sub_82602F60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r3,20832
	ctx.r3.s64 = ctx.r3.s64 + 20832;
	// bl 0x82a4a198
	ctx.lr = 0x82607854;
	sub_82A4A198(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 65536;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r3,20856
	ctx.r3.s64 = ctx.r3.s64 + 20856;
	// bl 0x82a4a868
	ctx.lr = 0x8260786C;
	sub_82A4A868(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r3,r3,26988
	ctx.r3.s64 = ctx.r3.s64 + 26988;
	// bl 0x82a4c500
	ctx.lr = 0x82607884;
	sub_82A4C500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826070f8
	ctx.lr = 0x8260788C;
	sub_826070F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ffed0
	ctx.lr = 0x82607894;
	sub_825FFED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82606e38
	ctx.lr = 0x8260789C;
	sub_82606E38(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_826078A4:
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

__attribute__((alias("__imp__sub_826078BC"))) PPC_WEAK_FUNC(sub_826078BC);
PPC_FUNC_IMPL(__imp__sub_826078BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826078C0"))) PPC_WEAK_FUNC(sub_826078C0);
PPC_FUNC_IMPL(__imp__sub_826078C0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225f0
	ctx.lr = 0x826078E0;
	sub_82A225F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x826078F0;
	sub_82A22C10(ctx, base);
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x83572958
	ctx.lr = 0x826078F8;
	sub_83572958(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260790c
	if (cr6.eq) goto loc_8260790C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a225f0
	ctx.lr = 0x8260790C;
	sub_82A225F0(ctx, base);
loc_8260790C:
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

__attribute__((alias("__imp__sub_82607920"))) PPC_WEAK_FUNC(sub_82607920);
PPC_FUNC_IMPL(__imp__sub_82607920) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r11.u8);
	// bl 0x82624b18
	ctx.lr = 0x82607948;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82607950;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82607958;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260796C"))) PPC_WEAK_FUNC(sub_8260796C);
PPC_FUNC_IMPL(__imp__sub_8260796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607970"))) PPC_WEAK_FUNC(sub_82607970);
PPC_FUNC_IMPL(__imp__sub_82607970) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260798C;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82607994;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_826079A8"))) PPC_WEAK_FUNC(sub_826079A8);
PPC_FUNC_IMPL(__imp__sub_826079A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826079B0;
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
	// bl 0x82624970
	ctx.lr = 0x826079C8;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826079D4;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x826079DC;
	sub_82A2F4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x826079E4;
	sub_82628110(ctx, base);
	// stb r3,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r3.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x826079FC;
	sub_82627B88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607A04"))) PPC_WEAK_FUNC(sub_82607A04);
PPC_FUNC_IMPL(__imp__sub_82607A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607A08"))) PPC_WEAK_FUNC(sub_82607A08);
PPC_FUNC_IMPL(__imp__sub_82607A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82607A10;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82607aac
	if (cr6.eq) goto loc_82607AAC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82607aac
	if (cr6.eq) goto loc_82607AAC;
	// bl 0x82624b08
	ctx.lr = 0x82607A34;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607a50
	if (cr6.eq) goto loc_82607A50;
	// bl 0x82624b10
	ctx.lr = 0x82607A48;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82607a88
	goto loc_82607A88;
loc_82607A50:
	// bl 0x826249f0
	ctx.lr = 0x82607A54;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607a68
	if (cr6.eq) goto loc_82607A68;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82607a88
	goto loc_82607A88;
loc_82607A68:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626408
	ctx.lr = 0x82607A78;
	sub_82626408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607aac
	if (cr6.eq) goto loc_82607AAC;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82607A88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x82607A90;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82607AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82607AAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607AB4"))) PPC_WEAK_FUNC(sub_82607AB4);
PPC_FUNC_IMPL(__imp__sub_82607AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607AB8"))) PPC_WEAK_FUNC(sub_82607AB8);
PPC_FUNC_IMPL(__imp__sub_82607AB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r11.u8);
	// b 0x826285d8
	sub_826285D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607AC4"))) PPC_WEAK_FUNC(sub_82607AC4);
PPC_FUNC_IMPL(__imp__sub_82607AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607AC8"))) PPC_WEAK_FUNC(sub_82607AC8);
PPC_FUNC_IMPL(__imp__sub_82607AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82607AD0;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
	// bl 0x82624608
	ctx.lr = 0x82607B00;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82607B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82607B28;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82607B2C;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82607b40
	if (cr6.lt) goto loc_82607B40;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82607b44
	if (cr6.lt) goto loc_82607B44;
loc_82607B40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82607B44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82607B58;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82607b78
	if (!cr6.eq) goto loc_82607B78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82607B6C;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
loc_82607B78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82607B8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82607BA0;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607bc0
	if (cr6.eq) goto loc_82607BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82607BB4;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82607BC0;
	sub_82628658(ctx, base);
loc_82607BC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607BC8"))) PPC_WEAK_FUNC(sub_82607BC8);
PPC_FUNC_IMPL(__imp__sub_82607BC8) {
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
	// bl 0x82624a68
	ctx.lr = 0x82607BE0;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82607c14
	if (!cr6.eq) goto loc_82607C14;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607c0c
	if (cr6.eq) goto loc_82607C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82607C00;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82607c14
	if (!cr6.eq) goto loc_82607C14;
loc_82607C0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82607c18
	goto loc_82607C18;
loc_82607C14:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82607C18:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82607C30"))) PPC_WEAK_FUNC(sub_82607C30);
PPC_FUNC_IMPL(__imp__sub_82607C30) {
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
	// bl 0x8264ecf8
	ctx.lr = 0x82607C48;
	sub_8264ECF8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5760
	ctx.r9.s64 = ctx.r10.s64 + -5760;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// bl 0x82624b18
	ctx.lr = 0x82607C6C;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82607C74;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82607C7C;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82607C94"))) PPC_WEAK_FUNC(sub_82607C94);
PPC_FUNC_IMPL(__imp__sub_82607C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607C98"))) PPC_WEAK_FUNC(sub_82607C98);
PPC_FUNC_IMPL(__imp__sub_82607C98) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5760
	ctx.r10.s64 = ctx.r11.s64 + -5760;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x82607CBC;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x82607CC4;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_82607CD8"))) PPC_WEAK_FUNC(sub_82607CD8);
PPC_FUNC_IMPL(__imp__sub_82607CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82607CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82607d9c
	if (cr6.eq) goto loc_82607D9C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82607d9c
	if (cr6.eq) goto loc_82607D9C;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82607d9c
	if (cr6.eq) goto loc_82607D9C;
	// bl 0x82a181b8
	ctx.lr = 0x82607D14;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82607D18;
	sub_82A2E7C0(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c788
	ctx.lr = 0x82607D28;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82607d9c
	if (cr6.eq) goto loc_82607D9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x82607D3C;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82607d6c
	if (cr6.lt) goto loc_82607D6C;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82607d6c
	if (cr6.lt) goto loc_82607D6C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x82607d6c
	if (!cr6.lt) goto loc_82607D6C;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// beq cr6,0x82607d68
	if (cr6.eq) goto loc_82607D68;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82607D68:
	// bl 0x82624af8
	ctx.lr = 0x82607D6C;
	sub_82624AF8(ctx, base);
loc_82607D6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82607d9c
	if (cr6.eq) goto loc_82607D9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x82607D84;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82607d9c
	if (!cr6.eq) goto loc_82607D9C;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82624af8
	ctx.lr = 0x82607D9C;
	sub_82624AF8(ctx, base);
loc_82607D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607DA4"))) PPC_WEAK_FUNC(sub_82607DA4);
PPC_FUNC_IMPL(__imp__sub_82607DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607DA8"))) PPC_WEAK_FUNC(sub_82607DA8);
PPC_FUNC_IMPL(__imp__sub_82607DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82607DB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82607eec
	if (cr6.eq) goto loc_82607EEC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82607eec
	if (cr6.eq) goto loc_82607EEC;
	// bl 0x826249d8
	ctx.lr = 0x82607DD4;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607eec
	if (cr6.eq) goto loc_82607EEC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,432(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82607DF4;
	sub_82A181B8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,132(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// bl 0x826249e8
	ctx.lr = 0x82607E08;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82607eb4
	if (!cr6.eq) goto loc_82607EB4;
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607e50
	if (cr6.eq) goto loc_82607E50;
	// bl 0x82a2ee50
	ctx.lr = 0x82607E24;
	sub_82A2EE50(ctx, base);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82607E30;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82627ef8
	ctx.lr = 0x82607E4C;
	sub_82627EF8(ctx, base);
	// b 0x82607e70
	goto loc_82607E70;
loc_82607E50:
	// bl 0x82a2ee50
	ctx.lr = 0x82607E54;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x82607E68;
	sub_82627EF8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r10.u8);
loc_82607E70:
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82607e98
	if (cr6.eq) goto loc_82607E98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82607E84;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x82607E98;
	sub_82627F98(ctx, base);
loc_82607E98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82607EA0;
	sub_82624A08(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c98
	ctx.lr = 0x82607EAC;
	sub_82624C98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82607EB4:
	// bl 0x82a2e7e0
	ctx.lr = 0x82607EB8;
	sub_82A2E7E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a225e0
	ctx.lr = 0x82607EC8;
	sub_82A225E0(ctx, base);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b388
	ctx.lr = 0x82607ED4;
	sub_82A2B388(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// beq cr6,0x82607ee8
	if (cr6.eq) goto loc_82607EE8;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82607EE8:
	// bl 0x82624af8
	ctx.lr = 0x82607EEC;
	sub_82624AF8(ctx, base);
loc_82607EEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607EF4"))) PPC_WEAK_FUNC(sub_82607EF4);
PPC_FUNC_IMPL(__imp__sub_82607EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607EF8"))) PPC_WEAK_FUNC(sub_82607EF8);
PPC_FUNC_IMPL(__imp__sub_82607EF8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5760
	ctx.r10.s64 = ctx.r11.s64 + -5760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x82607F24;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x82607F2C;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82607f44
	if (cr6.eq) goto loc_82607F44;
	// bl 0x82416268
	ctx.lr = 0x82607F40;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82607F44:
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

__attribute__((alias("__imp__sub_82607F5C"))) PPC_WEAK_FUNC(sub_82607F5C);
PPC_FUNC_IMPL(__imp__sub_82607F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607F60"))) PPC_WEAK_FUNC(sub_82607F60);
PPC_FUNC_IMPL(__imp__sub_82607F60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r11.u32);
	// stw r11,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r11.u32);
	// stb r11,1012(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1012, ctx.r11.u8);
	// stb r11,1013(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1013, ctx.r11.u8);
	// bl 0x82624b18
	ctx.lr = 0x82607F94;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82607F9C;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82607FA4;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82607FB8"))) PPC_WEAK_FUNC(sub_82607FB8);
PPC_FUNC_IMPL(__imp__sub_82607FB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1012(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1012, ctx.r11.u8);
	// stb r11,1013(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1013, ctx.r11.u8);
	// b 0x82624ae8
	sub_82624AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607FC8"))) PPC_WEAK_FUNC(sub_82607FC8);
PPC_FUNC_IMPL(__imp__sub_82607FC8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82624490
	ctx.lr = 0x82607FEC;
	sub_82624490(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82608004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,1000(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r9,-5468
	ctx.r8.s64 = ctx.r9.s64 + -5468;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x825832f8
	ctx.lr = 0x82608020;
	sub_825832F8(ctx, base);
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

__attribute__((alias("__imp__sub_82608038"))) PPC_WEAK_FUNC(sub_82608038);
PPC_FUNC_IMPL(__imp__sub_82608038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82608040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826080b4
	if (cr6.eq) goto loc_826080B4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826080b4
	if (cr6.eq) goto loc_826080B4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826080b4
	if (cr6.eq) goto loc_826080B4;
	// bl 0x82624f78
	ctx.lr = 0x82608070;
	sub_82624F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82608090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82608098;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x8260809C;
	sub_82A2E7E0(ctx, base);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-3564(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x826080AC;
	sub_82A0C7B0(ctx, base);
	// lwz r8,440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// stw r8,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r8.u32);
loc_826080B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826080BC"))) PPC_WEAK_FUNC(sub_826080BC);
PPC_FUNC_IMPL(__imp__sub_826080BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826080C0"))) PPC_WEAK_FUNC(sub_826080C0);
PPC_FUNC_IMPL(__imp__sub_826080C0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5496
	ctx.r9.s64 = ctx.r11.s64 + -5496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82608118
	if (cr6.lt) goto loc_82608118;
	// beq cr6,0x8260810c
	if (cr6.eq) goto loc_8260810C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82608120
	if (!cr6.lt) goto loc_82608120;
	// bl 0x82a2ee50
	ctx.lr = 0x82608104;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82608120
	goto loc_82608120;
loc_8260810C:
	// bl 0x82a2ee50
	ctx.lr = 0x82608110;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82608120
	goto loc_82608120;
loc_82608118:
	// bl 0x82a2ee50
	ctx.lr = 0x8260811C;
	sub_82A2EE50(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82608120:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627ef8
	ctx.lr = 0x8260812C;
	sub_82627EF8(ctx, base);
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

__attribute__((alias("__imp__sub_82608140"))) PPC_WEAK_FUNC(sub_82608140);
PPC_FUNC_IMPL(__imp__sub_82608140) {
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
	// bl 0x82624a50
	ctx.lr = 0x82608158;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260817c
	if (cr6.eq) goto loc_8260817C;
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
loc_8260817C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a68
	ctx.lr = 0x82608184;
	sub_82624A68(ctx, base);
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

__attribute__((alias("__imp__sub_82608198"))) PPC_WEAK_FUNC(sub_82608198);
PPC_FUNC_IMPL(__imp__sub_82608198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,45
	cr6.compare<int32_t>(ctx.r4.s32, 45, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,46
	cr6.compare<int32_t>(ctx.r4.s32, 46, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,47
	cr6.compare<int32_t>(ctx.r4.s32, 47, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,48
	cr6.compare<int32_t>(ctx.r4.s32, 48, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,65
	cr6.compare<int32_t>(ctx.r4.s32, 65, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,66
	cr6.compare<int32_t>(ctx.r4.s32, 66, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,67
	cr6.compare<int32_t>(ctx.r4.s32, 67, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,68
	cr6.compare<int32_t>(ctx.r4.s32, 68, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,69
	cr6.compare<int32_t>(ctx.r4.s32, 69, xer);
	// beq cr6,0x82608204
	if (cr6.eq) goto loc_82608204;
	// cmpwi cr6,r4,70
	cr6.compare<int32_t>(ctx.r4.s32, 70, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82608208
	if (!cr6.eq) goto loc_82608208;
loc_82608204:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82608208:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82608210"))) PPC_WEAK_FUNC(sub_82608210);
PPC_FUNC_IMPL(__imp__sub_82608210) {
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
	// bl 0x82628820
	ctx.lr = 0x82608228;
	sub_82628820(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5328
	ctx.r9.s64 = ctx.r10.s64 + -5328;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stb r11,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r11.u8);
	// stb r11,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r11.u8);
	// bl 0x82624b18
	ctx.lr = 0x82608258;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82608260;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82608268;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x82608274;
	sub_82624B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8260827C;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_82608294"))) PPC_WEAK_FUNC(sub_82608294);
PPC_FUNC_IMPL(__imp__sub_82608294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608298"))) PPC_WEAK_FUNC(sub_82608298);
PPC_FUNC_IMPL(__imp__sub_82608298) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5328
	ctx.r10.s64 = ctx.r11.s64 + -5328;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x826082BC;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x826082C4;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_826082D8"))) PPC_WEAK_FUNC(sub_826082D8);
PPC_FUNC_IMPL(__imp__sub_826082D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826082E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826082F4;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x826082F8;
	sub_82A2E7E0(ctx, base);
	// lis r28,-31763
	ctx.r28.s64 = -2081619968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-3564(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x825ca6b8
	ctx.lr = 0x82608310;
	sub_825CA6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x826085e4
	if (!cr6.lt) goto loc_826085E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82a31458
	ctx.lr = 0x82608328;
	sub_82A31458(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826085e4
	if (cr6.eq) goto loc_826085E4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x826085e4
	if (!cr6.lt) goto loc_826085E4;
	// clrlwi r31,r11,25
	ctx.r31.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x826085e4
	if (cr6.eq) goto loc_826085E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x82608358;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi cr6,r8,88
	cr6.compare<uint32_t>(ctx.r8.u32, 88, xer);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// beq cr6,0x82608398
	if (cr6.eq) goto loc_82608398;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82608398
	if (!cr6.eq) goto loc_82608398;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1012, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82608398:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// li r4,115
	ctx.r4.s64 = 115;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x826083b8
	if (!cr6.eq) goto loc_826083B8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a30b40
	ctx.lr = 0x826083B4;
	sub_82A30B40(ctx, base);
	// lbz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
loc_826083B8:
	// lwz r11,1000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x826085e4
	if (cr6.gt) goto loc_826085E4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8260841c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260841C;
	// bdzf 4*cr6+eq,0x82608470
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608470;
	// bdzf 4*cr6+eq,0x826084b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826084B0;
	// bdzf 4*cr6+eq,0x826084e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826084E0;
	// bdzf 4*cr6+eq,0x82608518
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608518;
	// bne cr6,0x82608568
	if (!cr6.eq) goto loc_82608568;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// beq cr6,0x82608404
	if (cr6.eq) goto loc_82608404;
	// cmpwi cr6,r4,49
	cr6.compare<int32_t>(ctx.r4.s32, 49, xer);
	// beq cr6,0x82608404
	if (cr6.eq) goto loc_82608404;
	// cmpwi cr6,r4,50
	cr6.compare<int32_t>(ctx.r4.s32, 50, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82608408
	if (!cr6.eq) goto loc_82608408;
loc_82608404:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82608408:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826085a8
	if (!cr6.eq) goto loc_826085A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x826085b8
	goto loc_826085B8;
loc_8260841C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82608434
	if (cr6.eq) goto loc_82608434;
loc_82608424:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1013(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1013, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82608434:
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825832f8
	ctx.lr = 0x82608440;
	sub_825832F8(ctx, base);
	// lbz r11,1012(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1012);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608550
	if (!cr6.eq) goto loc_82608550;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627d48
	ctx.lr = 0x82608458;
	sub_82627D48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1012, ctx.r11.u8);
	// stb r10,1013(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1013, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82608470:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r4,26
	cr6.compare<int32_t>(ctx.r4.s32, 26, xer);
	// beq cr6,0x82608490
	if (cr6.eq) goto loc_82608490;
	// cmpwi cr6,r4,83
	cr6.compare<int32_t>(ctx.r4.s32, 83, xer);
	// beq cr6,0x82608490
	if (cr6.eq) goto loc_82608490;
	// cmpwi cr6,r4,84
	cr6.compare<int32_t>(ctx.r4.s32, 84, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82608494
	if (!cr6.eq) goto loc_82608494;
loc_82608490:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82608494:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826085a8
	if (!cr6.eq) goto loc_826085A8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x826085e4
	if (!cr6.eq) goto loc_826085E4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x826085b8
	goto loc_826085B8;
loc_826084B0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// beq cr6,0x826084c8
	if (cr6.eq) goto loc_826084C8;
	// cmpwi cr6,r4,29
	cr6.compare<int32_t>(ctx.r4.s32, 29, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826084cc
	if (!cr6.eq) goto loc_826084CC;
loc_826084C8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826084CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826085a8
	if (!cr6.eq) goto loc_826085A8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x826085b8
	goto loc_826085B8;
loc_826084E0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// beq cr6,0x82608500
	if (cr6.eq) goto loc_82608500;
	// cmpwi cr6,r4,55
	cr6.compare<int32_t>(ctx.r4.s32, 55, xer);
	// beq cr6,0x82608500
	if (cr6.eq) goto loc_82608500;
	// cmpwi cr6,r4,56
	cr6.compare<int32_t>(ctx.r4.s32, 56, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82608504
	if (!cr6.eq) goto loc_82608504;
loc_82608500:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82608504:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826085a8
	if (!cr6.eq) goto loc_826085A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x826085b8
	goto loc_826085B8;
loc_82608518:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82608198
	ctx.lr = 0x82608520;
	sub_82608198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608424
	if (!cr6.eq) goto loc_82608424;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825832f8
	ctx.lr = 0x82608538;
	sub_825832F8(ctx, base);
	// lbz r11,1012(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1012);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608550
	if (!cr6.eq) goto loc_82608550;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627d48
	ctx.lr = 0x82608550;
	sub_82627D48(ctx, base);
loc_82608550:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1012, ctx.r11.u8);
	// stb r10,1013(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1013, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82608568:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// beq cr6,0x82608598
	if (cr6.eq) goto loc_82608598;
	// cmpwi cr6,r4,37
	cr6.compare<int32_t>(ctx.r4.s32, 37, xer);
	// beq cr6,0x82608598
	if (cr6.eq) goto loc_82608598;
	// cmpwi cr6,r4,38
	cr6.compare<int32_t>(ctx.r4.s32, 38, xer);
	// beq cr6,0x82608598
	if (cr6.eq) goto loc_82608598;
	// cmpwi cr6,r4,39
	cr6.compare<int32_t>(ctx.r4.s32, 39, xer);
	// beq cr6,0x82608598
	if (cr6.eq) goto loc_82608598;
	// cmpwi cr6,r4,40
	cr6.compare<int32_t>(ctx.r4.s32, 40, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8260859c
	if (!cr6.eq) goto loc_8260859C;
loc_82608598:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8260859C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826085b4
	if (cr6.eq) goto loc_826085B4;
loc_826085A8:
	// stb r29,1013(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1013, ctx.r29.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826085B4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_826085B8:
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x825832f8
	ctx.lr = 0x826085C0;
	sub_825832F8(ctx, base);
	// lbz r11,1012(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1012);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826085d8
	if (!cr6.eq) goto loc_826085D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82627d48
	ctx.lr = 0x826085D8;
	sub_82627D48(ctx, base);
loc_826085D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,1012(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1012, ctx.r29.u8);
	// stb r11,1013(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1013, ctx.r11.u8);
loc_826085E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826085EC"))) PPC_WEAK_FUNC(sub_826085EC);
PPC_FUNC_IMPL(__imp__sub_826085EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826085F0"))) PPC_WEAK_FUNC(sub_826085F0);
PPC_FUNC_IMPL(__imp__sub_826085F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x826085F8;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82608664
	if (cr6.eq) goto loc_82608664;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82608664
	if (cr6.eq) goto loc_82608664;
	// bl 0x82624b20
	ctx.lr = 0x8260861C;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608664
	if (cr6.eq) goto loc_82608664;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x8260865c
	if (cr6.lt) goto loc_8260865C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82a181b8
	ctx.lr = 0x82608644;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x82608648;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x8260865C;
	sub_82627F98(ctx, base);
loc_8260865C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82608664;
	sub_82624A08(ctx, base);
loc_82608664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260866C"))) PPC_WEAK_FUNC(sub_8260866C);
PPC_FUNC_IMPL(__imp__sub_8260866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608670"))) PPC_WEAK_FUNC(sub_82608670);
PPC_FUNC_IMPL(__imp__sub_82608670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82608678;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826087d0
	if (cr6.eq) goto loc_826087D0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826087d0
	if (cr6.eq) goto loc_826087D0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826087d0
	if (cr6.eq) goto loc_826087D0;
	// bl 0x82624608
	ctx.lr = 0x826086A8;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826086C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826086D0;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e760
	ctx.lr = 0x826086D8;
	sub_82A2E760(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826087d0
	if (cr6.eq) goto loc_826087D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x826086EC;
	sub_82A2E7E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82608704
	if (cr6.lt) goto loc_82608704;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82608708
	if (cr6.lt) goto loc_82608708;
loc_82608704:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82608708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826087d0
	if (cr6.eq) goto loc_826087D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260871C;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260879c
	if (!cr6.eq) goto loc_8260879C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82608730;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260879c
	if (!cr6.eq) goto loc_8260879C;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4476);
	// subf r30,r10,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r10.s64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260875C;
	sub_82A2EE50(ctx, base);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r30,r7
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, xer);
	// bgt cr6,0x82608774
	if (cr6.gt) goto loc_82608774;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x826087c4
	if (!cr6.eq) goto loc_826087C4;
loc_82608774:
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r9,r10,-5440
	ctx.r9.s64 = ctx.r10.s64 + -5440;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82a18350
	ctx.lr = 0x82608794;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8260879C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x826087A4;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826087c4
	if (cr6.eq) goto loc_826087C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x826087B8;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x826087C4;
	sub_82628658(ctx, base);
loc_826087C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18368
	ctx.lr = 0x826087D0;
	sub_82A18368(ctx, base);
loc_826087D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826087D8"))) PPC_WEAK_FUNC(sub_826087D8);
PPC_FUNC_IMPL(__imp__sub_826087D8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5328
	ctx.r10.s64 = ctx.r11.s64 + -5328;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82608804;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260880C;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82608824
	if (cr6.eq) goto loc_82608824;
	// bl 0x82416268
	ctx.lr = 0x82608820;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82608824:
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

__attribute__((alias("__imp__sub_8260883C"))) PPC_WEAK_FUNC(sub_8260883C);
PPC_FUNC_IMPL(__imp__sub_8260883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608840"))) PPC_WEAK_FUNC(sub_82608840);
PPC_FUNC_IMPL(__imp__sub_82608840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82608848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,1000(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x826080c0
	ctx.lr = 0x82608860;
	sub_826080C0(ctx, base);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// addi r30,r31,444
	ctx.r30.s64 = ctx.r31.s64 + 444;
	// lbz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260887c
	if (!cr6.eq) goto loc_8260887C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa080
	ctx.lr = 0x8260887C;
	sub_825AA080(ctx, base);
loc_8260887C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260889c
	if (!cr6.eq) goto loc_8260889C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-10208
	ctx.r9.s64 = ctx.r9.s64 + -10208;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
loc_8260889C:
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r10,-5468
	ctx.r9.s64 = ctx.r10.s64 + -5468;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x825832f8
	ctx.lr = 0x826088B8;
	sub_825832F8(ctx, base);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826088d4
	if (cr6.eq) goto loc_826088D4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x826088D0;
	sub_825A8CA0(ctx, base);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_826088D4:
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4476);
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
	// bl 0x82a2e7e0
	ctx.lr = 0x826088F0;
	sub_82A2E7E0(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c7b0
	ctx.lr = 0x82608900;
	sub_82A0C7B0(ctx, base);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82608998
	if (cr6.gt) goto loc_82608998;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82608940
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608940;
	// bdzf 4*cr6+eq,0x8260895c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260895C;
	// bdzf 4*cr6+eq,0x82608974
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608974;
	// bne cr6,0x82608988
	if (!cr6.eq) goto loc_82608988;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// stb r28,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r28.u8);
	// stb r28,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r28.u8);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608940:
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lwz r9,488(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82608990
	goto loc_82608990;
loc_8260895C:
	// lwz r11,508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// stb r28,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r28.u8);
	// stb r28,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r28.u8);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608974:
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r9,460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r10,452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82608990
	goto loc_82608990;
loc_82608988:
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lwz r10,500(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
loc_82608990:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
loc_82608998:
	// stb r28,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r28.u8);
	// stb r28,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826089A8"))) PPC_WEAK_FUNC(sub_826089A8);
PPC_FUNC_IMPL(__imp__sub_826089A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x826089B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1013(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1013);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82a181b8
	ctx.lr = 0x826089D0;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x826089D8;
	sub_82A2E7E0(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x826089E8;
	sub_82A0C7B0(ctx, base);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82608b94
	if (cr6.gt) goto loc_82608B94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82608a40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608A40;
	// bdzf 4*cr6+eq,0x82608a88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608A88;
	// bdzf 4*cr6+eq,0x82608ab4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608AB4;
	// bdzf 4*cr6+eq,0x82608af8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608AF8;
	// bdzf 4*cr6+eq,0x82608b24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82608B24;
	// bne cr6,0x82608b60
	if (!cr6.eq) goto loc_82608B60;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82608840
	ctx.lr = 0x82608A38;
	sub_82608840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608A40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82608A48;
	sub_82A2E7E0(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a0c760
	ctx.lr = 0x82608A58;
	sub_82A0C760(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x82608b94
	if (!cr6.eq) goto loc_82608B94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82608840
	ctx.lr = 0x82608A80;
	sub_82608840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608A88:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r10,528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82608840
	ctx.lr = 0x82608AAC;
	sub_82608840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608AB4:
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lwz r9,488(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// lwz r8,1008(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82608840
	ctx.lr = 0x82608AF0;
	sub_82608840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608AF8:
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r10,508(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82608840
	ctx.lr = 0x82608B1C;
	sub_82608840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608B24:
	// lwz r9,460(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r10,452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,1008(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82608840
	ctx.lr = 0x82608B58;
	sub_82608840(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82608B60:
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lwz r10,500(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// lwz r9,1008(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82608b94
	if (cr6.eq) goto loc_82608B94;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826080c0
	ctx.lr = 0x82608B88;
	sub_826080C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x82608B94;
	sub_82624B18(ctx, base);
loc_82608B94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82608B9C"))) PPC_WEAK_FUNC(sub_82608B9C);
PPC_FUNC_IMPL(__imp__sub_82608B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608BA0"))) PPC_WEAK_FUNC(sub_82608BA0);
PPC_FUNC_IMPL(__imp__sub_82608BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82608BA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82608cec
	if (cr6.eq) goto loc_82608CEC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82608cec
	if (cr6.eq) goto loc_82608CEC;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,432(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82608cec
	if (cr6.eq) goto loc_82608CEC;
	// addi r30,r3,464
	ctx.r30.s64 = ctx.r3.s64 + 464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b4950
	ctx.lr = 0x82608BE8;
	sub_825B4950(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82625b98
	ctx.lr = 0x82608BFC;
	sub_82625B98(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608c18
	if (cr6.eq) goto loc_82608C18;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x82608C14;
	sub_825B3120(ctx, base);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
loc_82608C18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826082d8
	ctx.lr = 0x82608C28;
	sub_826082D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826089a8
	ctx.lr = 0x82608C38;
	sub_826089A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249f0
	ctx.lr = 0x82608C40;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608c7c
	if (!cr6.eq) goto loc_82608C7C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626408
	ctx.lr = 0x82608C5C;
	sub_82626408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608c7c
	if (!cr6.eq) goto loc_82608C7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x82608C70;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608ca8
	if (cr6.eq) goto loc_82608CA8;
loc_82608C7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82608C84;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x82608C88;
	sub_82A2EE50(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r26,1012(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1012, ctx.r26.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// stb r26,1013(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1013, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
	// bl 0x82624af8
	ctx.lr = 0x82608CA8;
	sub_82624AF8(ctx, base);
loc_82608CA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x82608CB0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608cec
	if (cr6.eq) goto loc_82608CEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82608CC4;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608ce4
	if (cr6.eq) goto loc_82608CE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x82608CDC;
	sub_82624B18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82608CE4:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82624af8
	ctx.lr = 0x82608CEC;
	sub_82624AF8(ctx, base);
loc_82608CEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82608CF4"))) PPC_WEAK_FUNC(sub_82608CF4);
PPC_FUNC_IMPL(__imp__sub_82608CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608CF8"))) PPC_WEAK_FUNC(sub_82608CF8);
PPC_FUNC_IMPL(__imp__sub_82608CF8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82624ae8
	ctx.lr = 0x82608D10;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x82608D1C;
	sub_82624B18(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r11.u8);
	// stb r11,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r11.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x82627e68
	ctx.lr = 0x82608D44;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82608D4C;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_82608D60"))) PPC_WEAK_FUNC(sub_82608D60);
PPC_FUNC_IMPL(__imp__sub_82608D60) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82624ae8
	ctx.lr = 0x82608D78;
	sub_82624AE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x82608D84;
	sub_82624B18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r10.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
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

__attribute__((alias("__imp__sub_82608DB4"))) PPC_WEAK_FUNC(sub_82608DB4);
PPC_FUNC_IMPL(__imp__sub_82608DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608DB8"))) PPC_WEAK_FUNC(sub_82608DB8);
PPC_FUNC_IMPL(__imp__sub_82608DB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82624ed8
	ctx.lr = 0x82608DD8;
	sub_82624ED8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82608DF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82608E08"))) PPC_WEAK_FUNC(sub_82608E08);
PPC_FUNC_IMPL(__imp__sub_82608E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82608E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82608e94
	if (cr6.eq) goto loc_82608E94;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82608e94
	if (cr6.eq) goto loc_82608E94;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82608e94
	if (cr6.eq) goto loc_82608E94;
	// bl 0x82624608
	ctx.lr = 0x82608E40;
	sub_82624608(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82608E60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82608E68;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82608E70;
	sub_82A2E7C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8264f710
	ctx.lr = 0x82608E78;
	sub_8264F710(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82608e94
	if (cr6.eq) goto loc_82608E94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82608E88;
	sub_82A2E7C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18368
	ctx.lr = 0x82608E94;
	sub_82A18368(ctx, base);
loc_82608E94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82608E9C"))) PPC_WEAK_FUNC(sub_82608E9C);
PPC_FUNC_IMPL(__imp__sub_82608E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608EA0"))) PPC_WEAK_FUNC(sub_82608EA0);
PPC_FUNC_IMPL(__imp__sub_82608EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608eb4
	if (cr6.eq) goto loc_82608EB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82608EB4:
	// b 0x82624a68
	sub_82624A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82608EB8"))) PPC_WEAK_FUNC(sub_82608EB8);
PPC_FUNC_IMPL(__imp__sub_82608EB8) {
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
	// bl 0x82624a58
	ctx.lr = 0x82608ED0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608ee8
	if (!cr6.eq) goto loc_82608EE8;
	// lbz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82608f14
	if (cr6.eq) goto loc_82608F14;
loc_82608EE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82608EF0;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82608EFC;
	sub_82628658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e58
	ctx.lr = 0x82608F04;
	sub_82627E58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82608f18
	if (!cr6.eq) goto loc_82608F18;
loc_82608F14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82608F18:
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

__attribute__((alias("__imp__sub_82608F2C"))) PPC_WEAK_FUNC(sub_82608F2C);
PPC_FUNC_IMPL(__imp__sub_82608F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608F30"))) PPC_WEAK_FUNC(sub_82608F30);
PPC_FUNC_IMPL(__imp__sub_82608F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8264ecf8
	ctx.lr = 0x82608F4C;
	sub_8264ECF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-4976
	ctx.r9.s64 = ctx.r11.s64 + -4976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,1144
	ctx.r11.s64 = ctx.r31.s64 + 1144;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f31,1148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f31,1152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x82624ae8
	ctx.lr = 0x82608F78;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82624b18
	ctx.lr = 0x82608F84;
	sub_82624B18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r11.u8);
	// stb r11,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r11.u8);
	// stfs f31,1144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f31,1148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f31,1152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x82627e68
	ctx.lr = 0x82608FA4;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x82608FAC;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82608FB4;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82608FD0"))) PPC_WEAK_FUNC(sub_82608FD0);
PPC_FUNC_IMPL(__imp__sub_82608FD0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4976
	ctx.r10.s64 = ctx.r11.s64 + -4976;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x82608FF4;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x82608FFC;
	sub_8264F1C0(ctx, base);
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

__attribute__((alias("__imp__sub_82609010"))) PPC_WEAK_FUNC(sub_82609010);
PPC_FUNC_IMPL(__imp__sub_82609010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82609018;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826090b4
	if (cr6.eq) goto loc_826090B4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826090b4
	if (cr6.eq) goto loc_826090B4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826090b4
	if (cr6.eq) goto loc_826090B4;
	// bl 0x82624f78
	ctx.lr = 0x82609048;
	sub_82624F78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82609068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609070;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x82609074;
	sub_82A2E7E0(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,439
	ctx.r5.u64 = ctx.r5.u64 | 439;
	// bl 0x82a18350
	ctx.lr = 0x82609088;
	sub_82A18350(ctx, base);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826090b4
	if (cr6.eq) goto loc_826090B4;
	// lfs f0,8144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1144, temp.u32);
	// lfs f13,8148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1148(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1148, temp.u32);
	// lfs f12,8152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1152(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1152, temp.u32);
loc_826090B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826090BC"))) PPC_WEAK_FUNC(sub_826090BC);
PPC_FUNC_IMPL(__imp__sub_826090BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826090C0"))) PPC_WEAK_FUNC(sub_826090C0);
PPC_FUNC_IMPL(__imp__sub_826090C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826090C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826091e0
	if (cr6.eq) goto loc_826091E0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826091e0
	if (cr6.eq) goto loc_826091E0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826091e0
	if (cr6.eq) goto loc_826091E0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x826091e0
	if (cr6.eq) goto loc_826091E0;
	// bl 0x82a181b8
	ctx.lr = 0x8260910C;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82609110;
	sub_82A2E7C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82609128
	if (cr6.lt) goto loc_82609128;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260912c
	if (cr6.lt) goto loc_8260912C;
loc_82609128:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260912C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826091e0
	if (cr6.eq) goto loc_826091E0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,132(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x826091e0
	if (cr6.eq) goto loc_826091E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264f470
	ctx.lr = 0x82609150;
	sub_8264F470(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82609160;
	sub_82A22B40(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// bne cr6,0x826091d4
	if (!cr6.eq) goto loc_826091D4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82609180
	if (!cr6.gt) goto loc_82609180;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82609184
	if (!cr6.gt) goto loc_82609184;
loc_82609180:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82609184:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826091d4
	if (cr6.eq) goto loc_826091D4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x826091a8
	if (!cr6.eq) goto loc_826091A8;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826091A8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826091d4
	if (cr6.eq) goto loc_826091D4;
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// beq cr6,0x826091d4
	if (cr6.eq) goto loc_826091D4;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x826091d4
	if (cr6.eq) goto loc_826091D4;
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// beq cr6,0x826091d4
	if (cr6.eq) goto loc_826091D4;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x826091D4;
	sub_82624AF8(ctx, base);
loc_826091D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826091E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826091EC"))) PPC_WEAK_FUNC(sub_826091EC);
PPC_FUNC_IMPL(__imp__sub_826091EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826091F0"))) PPC_WEAK_FUNC(sub_826091F0);
PPC_FUNC_IMPL(__imp__sub_826091F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826091F8;
	__savegprlr_27(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82609424
	if (cr6.eq) goto loc_82609424;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82609424
	if (cr6.eq) goto loc_82609424;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82609424
	if (cr6.eq) goto loc_82609424;
	// bl 0x82a181b8
	ctx.lr = 0x82609230;
	sub_82A181B8(ctx, base);
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lbz r10,1157(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bne cr6,0x82609298
	if (!cr6.eq) goto loc_82609298;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264efe8
	ctx.lr = 0x82609258;
	sub_8264EFE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609288
	if (cr6.eq) goto loc_82609288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609270;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x82609284;
	sub_82627EF8(ctx, base);
	// b 0x82609298
	goto loc_82609298;
loc_82609288:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826090c0
	ctx.lr = 0x82609298;
	sub_826090C0(ctx, base);
loc_82609298:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x826092b8
	if (cr6.eq) goto loc_826092B8;
	// lfs f0,8144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// lfs f13,8148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// lfs f12,8152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
loc_826092B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x826092C0;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260931c
	if (cr6.eq) goto loc_8260931C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249e8
	ctx.lr = 0x826092D4;
	sub_826249E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260931c
	if (!cr6.eq) goto loc_8260931C;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609310
	if (cr6.eq) goto loc_82609310;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x826092F4;
	sub_82624B18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x826092FC;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260930C;
	sub_82627EF8(ctx, base);
	// b 0x82609354
	goto loc_82609354;
loc_82609310:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82624af8
	ctx.lr = 0x82609318;
	sub_82624AF8(ctx, base);
	// b 0x82609354
	goto loc_82609354;
loc_8260931C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249f0
	ctx.lr = 0x82609324;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609354
	if (cr6.eq) goto loc_82609354;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260934c
	if (!cr6.eq) goto loc_8260934C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82624af8
	ctx.lr = 0x82609348;
	sub_82624AF8(ctx, base);
	// b 0x82609354
	goto loc_82609354;
loc_8260934C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x82609354;
	sub_82624B18(ctx, base);
loc_82609354:
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260938c
	if (cr6.eq) goto loc_8260938C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260936C;
	sub_82A2B4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x82609378;
	sub_82A2E7E0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x8260938c
	if (!cr6.eq) goto loc_8260938C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b18
	ctx.lr = 0x8260938C;
	sub_82624B18(ctx, base);
loc_8260938C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b20
	ctx.lr = 0x82609394;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82609424
	if (!cr6.eq) goto loc_82609424;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
loc_826093A8:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826093c4
	if (cr6.eq) goto loc_826093C4;
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lbz r9,584(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 584);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826093d8
	if (!cr6.eq) goto loc_826093D8;
loc_826093C4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x826093a8
	if (cr6.lt) goto loc_826093A8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_826093D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ea60
	ctx.lr = 0x826093E0;
	sub_82A2EA60(ctx, base);
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260941c
	if (cr6.eq) goto loc_8260941C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82624b18
	ctx.lr = 0x826093F8;
	sub_82624B18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609400;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x82609414;
	sub_82627EF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8260941C:
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82624af8
	ctx.lr = 0x82609424;
	sub_82624AF8(ctx, base);
loc_82609424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260942C"))) PPC_WEAK_FUNC(sub_8260942C);
PPC_FUNC_IMPL(__imp__sub_8260942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609430"))) PPC_WEAK_FUNC(sub_82609430);
PPC_FUNC_IMPL(__imp__sub_82609430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82609438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,1156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1156, ctx.r10.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82609480
	if (cr6.eq) goto loc_82609480;
	// bl 0x82a181b8
	ctx.lr = 0x82609468;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260946C;
	sub_82A2EE50(ctx, base);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627f98
	ctx.lr = 0x82609480;
	sub_82627F98(ctx, base);
loc_82609480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82609488"))) PPC_WEAK_FUNC(sub_82609488);
PPC_FUNC_IMPL(__imp__sub_82609488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82609490;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82609504
	if (cr6.eq) goto loc_82609504;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82609504
	if (cr6.eq) goto loc_82609504;
	// bl 0x82624b20
	ctx.lr = 0x826094B4;
	sub_82624B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609504
	if (cr6.eq) goto loc_82609504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x826094C8;
	sub_82624A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x826094D0;
	sub_82628110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826094f4
	if (cr6.eq) goto loc_826094F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82609430
	ctx.lr = 0x826094EC;
	sub_82609430(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_826094F4:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x82609504;
	sub_82624C98(ctx, base);
loc_82609504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260950C"))) PPC_WEAK_FUNC(sub_8260950C);
PPC_FUNC_IMPL(__imp__sub_8260950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609510"))) PPC_WEAK_FUNC(sub_82609510);
PPC_FUNC_IMPL(__imp__sub_82609510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82609518;
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826095d4
	if (cr6.eq) goto loc_826095D4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826095d4
	if (cr6.eq) goto loc_826095D4;
	// bl 0x82624b08
	ctx.lr = 0x8260953C;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609578
	if (cr6.eq) goto loc_82609578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x82609550;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260955C;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82609578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82609578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82609580;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826095d4
	if (cr6.eq) goto loc_826095D4;
	// lbz r11,1157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826095d4
	if (cr6.eq) goto loc_826095D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x826095A0;
	sub_82628110(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826095c4
	if (cr6.eq) goto loc_826095C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82609430
	ctx.lr = 0x826095BC;
	sub_82609430(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_826095C4:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x826095D4;
	sub_82624C98(ctx, base);
loc_826095D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826095DC"))) PPC_WEAK_FUNC(sub_826095DC);
PPC_FUNC_IMPL(__imp__sub_826095DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826095E0"))) PPC_WEAK_FUNC(sub_826095E0);
PPC_FUNC_IMPL(__imp__sub_826095E0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4976
	ctx.r10.s64 = ctx.r11.s64 + -4976;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8264ed98
	ctx.lr = 0x8260960C;
	sub_8264ED98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264f1c0
	ctx.lr = 0x82609614;
	sub_8264F1C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260962c
	if (cr6.eq) goto loc_8260962C;
	// bl 0x82416268
	ctx.lr = 0x82609628;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260962C:
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

__attribute__((alias("__imp__sub_82609644"))) PPC_WEAK_FUNC(sub_82609644);
PPC_FUNC_IMPL(__imp__sub_82609644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609648"))) PPC_WEAK_FUNC(sub_82609648);
PPC_FUNC_IMPL(__imp__sub_82609648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82609650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x82624970
	ctx.lr = 0x82609668;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609674;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8260967C;
	sub_82A2F4E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x82609690;
	sub_82627B88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609698;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260969C;
	sub_82A2E7C0(ctx, base);
	// lbz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 488);
	// addi r29,r31,484
	ctx.r29.s64 = ctx.r31.s64 + 484;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826096b8
	if (!cr6.eq) goto loc_826096B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b87b8
	ctx.lr = 0x826096B8;
	sub_825B87B8(ctx, base);
loc_826096B8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826096d4
	if (!cr6.eq) goto loc_826096D4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,8540
	ctx.r10.s64 = ctx.r11.s64 + 8540;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_826096D4:
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82609754
	if (cr6.eq) goto loc_82609754;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r6,r31,8144
	ctx.r6.s64 = ctx.r31.s64 + 8144;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r5,6112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// bl 0x82665d10
	ctx.lr = 0x82609700;
	sub_82665D10(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8144, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8148, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8152, temp.u32);
	// bl 0x82a181b8
	ctx.lr = 0x82609724;
	sub_82A181B8(ctx, base);
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfs f11,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,-12688
	ctx.r8.s64 = ctx.r8.s64 + -12688;
	// ori r7,r9,52860
	ctx.r7.u64 = ctx.r9.u64 | 52860;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f10,8148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f9,8152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stbx r6,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r6.u8);
loc_82609754:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609770
	if (cr6.eq) goto loc_82609770;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x825b8218
	ctx.lr = 0x82609768;
	sub_825B8218(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82609770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82609778"))) PPC_WEAK_FUNC(sub_82609778);
PPC_FUNC_IMPL(__imp__sub_82609778) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82624ae8
	ctx.lr = 0x82609790;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e68
	ctx.lr = 0x82609798;
	sub_82627E68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stfs f0,1004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f0,1008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stb r11,1016(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1016, ctx.r11.u8);
	// bl 0x82628208
	ctx.lr = 0x826097C0;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_826097D4"))) PPC_WEAK_FUNC(sub_826097D4);
PPC_FUNC_IMPL(__imp__sub_826097D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826097D8"))) PPC_WEAK_FUNC(sub_826097D8);
PPC_FUNC_IMPL(__imp__sub_826097D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1016(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1016, ctx.r11.u8);
	// b 0x82624ae8
	sub_82624AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826097E4"))) PPC_WEAK_FUNC(sub_826097E4);
PPC_FUNC_IMPL(__imp__sub_826097E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826097E8"))) PPC_WEAK_FUNC(sub_826097E8);
PPC_FUNC_IMPL(__imp__sub_826097E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x826097F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82609848
	if (cr6.eq) goto loc_82609848;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82609848
	if (cr6.eq) goto loc_82609848;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82609848
	if (cr6.eq) goto loc_82609848;
	// bl 0x82624f78
	ctx.lr = 0x82609820;
	sub_82624F78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82609840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18af0
	ctx.lr = 0x82609848;
	sub_82A18AF0(ctx, base);
loc_82609848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82609850"))) PPC_WEAK_FUNC(sub_82609850);
PPC_FUNC_IMPL(__imp__sub_82609850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82609858;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826099ac
	if (cr6.eq) goto loc_826099AC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826099ac
	if (cr6.eq) goto loc_826099AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,568
	ctx.r10.s64 = ctx.r3.s64 + 568;
loc_82609880:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260989c
	if (cr6.eq) goto loc_8260989C;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,584(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 584);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826098ac
	if (!cr6.eq) goto loc_826098AC;
loc_8260989C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82609880
	if (cr6.lt) goto loc_82609880;
	// b 0x826098b0
	goto loc_826098B0;
loc_826098AC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_826098B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249f0
	ctx.lr = 0x826098B8;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260996c
	if (!cr6.eq) goto loc_8260996C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a00
	ctx.lr = 0x826098CC;
	sub_82624A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260996c
	if (!cr6.eq) goto loc_8260996C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x826098E0;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826098f4
	if (cr6.eq) goto loc_826098F4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82609980
	goto loc_82609980;
loc_826098F4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609908
	if (cr6.eq) goto loc_82609908;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82609980
	goto loc_82609980;
loc_82609908:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626258
	ctx.lr = 0x82609914;
	sub_82626258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260996c
	if (!cr6.eq) goto loc_8260996C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b08
	ctx.lr = 0x82609928;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826099ac
	if (cr6.eq) goto loc_826099AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260993C;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x82609948;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82609964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8260996C:
	// lbz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1016);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,9
	ctx.r4.s64 = ctx.r11.s64 + 9;
loc_82609980:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x82609988;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826099A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r8.u32);
loc_826099AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826099B4"))) PPC_WEAK_FUNC(sub_826099B4);
PPC_FUNC_IMPL(__imp__sub_826099B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826099B8"))) PPC_WEAK_FUNC(sub_826099B8);
PPC_FUNC_IMPL(__imp__sub_826099B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x826099C0;
	__savegprlr_27(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82609ae4
	if (cr6.eq) goto loc_82609AE4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82609ae4
	if (cr6.eq) goto loc_82609AE4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82609ae4
	if (cr6.eq) goto loc_82609AE4;
	// bl 0x82624608
	ctx.lr = 0x826099F0;
	sub_82624608(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82609A10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609A18;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82609A20;
	sub_82A2E7C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x82609A2C;
	sub_82624A50(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82609a4c
	if (!cr6.eq) goto loc_82609A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x82609A40;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609a9c
	if (cr6.eq) goto loc_82609A9C;
loc_82609A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82609A60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82609a9c
	if (cr6.eq) goto loc_82609A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82609A74;
	sub_82624AE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2f370
	ctx.lr = 0x82609A80;
	sub_82A2F370(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x82609a9c
	if (cr6.lt) goto loc_82609A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x82609A90;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x82609A9C;
	sub_82628658(ctx, base);
loc_82609A9C:
	// lbz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82609ad8
	if (!cr6.eq) goto loc_82609AD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c70
	ctx.lr = 0x82609AB0;
	sub_82624C70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609ad8
	if (cr6.eq) goto loc_82609AD8;
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,438
	ctx.r5.u64 = ctx.r5.u64 | 438;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18350
	ctx.lr = 0x82609AD0;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82609AD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18368
	ctx.lr = 0x82609AE4;
	sub_82A18368(ctx, base);
loc_82609AE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82609AEC"))) PPC_WEAK_FUNC(sub_82609AEC);
PPC_FUNC_IMPL(__imp__sub_82609AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609AF0"))) PPC_WEAK_FUNC(sub_82609AF0);
PPC_FUNC_IMPL(__imp__sub_82609AF0) {
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
	// bl 0x82a181b8
	ctx.lr = 0x82609B0C;
	sub_82A181B8(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1012);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82609b24
	if (!cr6.eq) goto loc_82609B24;
	// bl 0x82a2ee50
	ctx.lr = 0x82609B1C;
	sub_82A2EE50(ctx, base);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82609b5c
	goto loc_82609B5C;
loc_82609B24:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82609b38
	if (!cr6.eq) goto loc_82609B38;
	// bl 0x82a2ee50
	ctx.lr = 0x82609B30;
	sub_82A2EE50(ctx, base);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82609b5c
	goto loc_82609B5C;
loc_82609B38:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82609b4c
	if (!cr6.eq) goto loc_82609B4C;
	// bl 0x82a2ee50
	ctx.lr = 0x82609B44;
	sub_82A2EE50(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x82609b5c
	goto loc_82609B5C;
loc_82609B4C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x82609b68
	if (cr6.lt) goto loc_82609B68;
	// bl 0x82a2ee50
	ctx.lr = 0x82609B58;
	sub_82A2EE50(ctx, base);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_82609B5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627ef8
	ctx.lr = 0x82609B68;
	sub_82627EF8(ctx, base);
loc_82609B68:
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

__attribute__((alias("__imp__sub_82609B7C"))) PPC_WEAK_FUNC(sub_82609B7C);
PPC_FUNC_IMPL(__imp__sub_82609B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609B80"))) PPC_WEAK_FUNC(sub_82609B80);
PPC_FUNC_IMPL(__imp__sub_82609B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82628820
	ctx.lr = 0x82609B9C;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-4624
	ctx.r9.s64 = ctx.r11.s64 + -4624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,1000
	ctx.r11.s64 = ctx.r31.s64 + 1000;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1000(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// stfs f31,1004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f31,1008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// bl 0x82624ae8
	ctx.lr = 0x82609BC8;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627e68
	ctx.lr = 0x82609BD0;
	sub_82627E68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,1000(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,1004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// stfs f31,1008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stb r11,1016(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1016, ctx.r11.u8);
	// bl 0x82628208
	ctx.lr = 0x82609BF0;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x82609BF8;
	sub_82624AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82609C14"))) PPC_WEAK_FUNC(sub_82609C14);
PPC_FUNC_IMPL(__imp__sub_82609C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609C18"))) PPC_WEAK_FUNC(sub_82609C18);
PPC_FUNC_IMPL(__imp__sub_82609C18) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4624
	ctx.r10.s64 = ctx.r11.s64 + -4624;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x82609C3C;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x82609C44;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_82609C58"))) PPC_WEAK_FUNC(sub_82609C58);
PPC_FUNC_IMPL(__imp__sub_82609C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82609C60;
	__savegprlr_27(ctx, base);
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
	// bl 0x82624970
	ctx.lr = 0x82609C78;
	sub_82624970(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609C84;
	sub_82A181B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x82609C8C;
	sub_82A2F4E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x82609CA0;
	sub_82627B88(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,6112(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82609d3c
	if (cr6.eq) goto loc_82609D3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609CBC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x82609CC0;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82609cd4
	if (cr6.lt) goto loc_82609CD4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82609cd8
	if (cr6.lt) goto loc_82609CD8;
loc_82609CD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82609CD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609d3c
	if (cr6.eq) goto loc_82609D3C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82609cfc
	if (cr6.lt) goto loc_82609CFC;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x82609cfc
	if (cr6.lt) goto loc_82609CFC;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// blt cr6,0x82609d20
	if (cr6.lt) goto loc_82609D20;
loc_82609CFC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1004(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,1008(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82609D20:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,1000(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1004(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1008(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
loc_82609D3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82609D44"))) PPC_WEAK_FUNC(sub_82609D44);
PPC_FUNC_IMPL(__imp__sub_82609D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609D48"))) PPC_WEAK_FUNC(sub_82609D48);
PPC_FUNC_IMPL(__imp__sub_82609D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82609D50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r26,432(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// lwz r10,6112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a181b8
	ctx.lr = 0x82609DA0;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x82609DA8;
	sub_82A2E7C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82609dc0
	if (cr6.lt) goto loc_82609DC0;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82609dc4
	if (cr6.lt) goto loc_82609DC4;
loc_82609DC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82609DC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826249d8
	ctx.lr = 0x82609DD8;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609efc
	if (cr6.eq) goto loc_82609EFC;
	// lbz r11,1016(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609ee8
	if (cr6.eq) goto loc_82609EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a2ea90
	ctx.lr = 0x82609E00;
	sub_82A2EA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82609ea4
	if (cr6.eq) goto loc_82609EA4;
loc_82609E08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a18ac0
	ctx.lr = 0x82609E14;
	sub_82A18AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82609e38
	if (!cr6.eq) goto loc_82609E38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a2ea90
	ctx.lr = 0x82609E2C;
	sub_82A2EA90(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82609e08
	if (cr6.lt) goto loc_82609E08;
	// b 0x82609ea4
	goto loc_82609EA4;
loc_82609E38:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x82609ea4
	if (cr6.gt) goto loc_82609EA4;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82609e6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82609E6C;
	// bdzf 4*cr6+eq,0x82609e7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82609E7C;
	// bne cr6,0x82609e8c
	if (!cr6.eq) goto loc_82609E8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609E60;
	sub_82A2EE50(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82609e98
	goto loc_82609E98;
loc_82609E6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609E74;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82609e98
	goto loc_82609E98;
loc_82609E7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609E84;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82609e98
	goto loc_82609E98;
loc_82609E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609E94;
	sub_82A2EE50(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82609E98:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82627ef8
	ctx.lr = 0x82609EA4;
	sub_82627EF8(ctx, base);
loc_82609EA4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82609ec8
	if (!cr6.eq) goto loc_82609EC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x82609EB8;
	sub_82A2EE50(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x82609EC8;
	sub_82627EF8(ctx, base);
loc_82609EC8:
	// lwz r11,1012(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1012);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1012(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1012, ctx.r11.u32);
	// bl 0x82609af0
	ctx.lr = 0x82609EE0;
	sub_82609AF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82609EE8:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x82609EF4;
	sub_82624AF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82609EFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624b08
	ctx.lr = 0x82609F04;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82609f5c
	if (!cr6.eq) goto loc_82609F5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a0c738
	ctx.lr = 0x82609F24;
	sub_82A0C738(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22b40
	ctx.lr = 0x82609F34;
	sub_82A22B40(ctx, base);
	// ld r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2a378
	ctx.lr = 0x82609F40;
	sub_82A2A378(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x82609f5c
	if (cr6.eq) goto loc_82609F5C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x82609F5C;
	sub_82624AF8(ctx, base);
loc_82609F5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82609F64"))) PPC_WEAK_FUNC(sub_82609F64);
PPC_FUNC_IMPL(__imp__sub_82609F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82609F68"))) PPC_WEAK_FUNC(sub_82609F68);
PPC_FUNC_IMPL(__imp__sub_82609F68) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82609fc4
	if (cr6.eq) goto loc_82609FC4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82609fc4
	if (cr6.eq) goto loc_82609FC4;
	// bl 0x826249d8
	ctx.lr = 0x82609F90;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609fc4
	if (cr6.eq) goto loc_82609FC4;
	// lbz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82609fc4
	if (cr6.eq) goto loc_82609FC4;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82624c98
	ctx.lr = 0x82609FBC;
	sub_82624C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x82609FC4;
	sub_82624A08(ctx, base);
loc_82609FC4:
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

__attribute__((alias("__imp__sub_82609FD8"))) PPC_WEAK_FUNC(sub_82609FD8);
PPC_FUNC_IMPL(__imp__sub_82609FD8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260a044
	if (cr6.eq) goto loc_8260A044;
	// bl 0x82627390
	ctx.lr = 0x8260A00C;
	sub_82627390(ctx, base);
	// lbz r11,1016(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a044
	if (!cr6.eq) goto loc_8260A044;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260a044
	if (cr6.eq) goto loc_8260A044;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22b40
	ctx.lr = 0x8260A030;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8260a044
	if (!cr6.eq) goto loc_8260A044;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1016(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1016, ctx.r11.u8);
loc_8260A044:
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

__attribute__((alias("__imp__sub_8260A05C"))) PPC_WEAK_FUNC(sub_8260A05C);
PPC_FUNC_IMPL(__imp__sub_8260A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A060"))) PPC_WEAK_FUNC(sub_8260A060);
PPC_FUNC_IMPL(__imp__sub_8260A060) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4624
	ctx.r10.s64 = ctx.r11.s64 + -4624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260A08C;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260A094;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260a0ac
	if (cr6.eq) goto loc_8260A0AC;
	// bl 0x82416268
	ctx.lr = 0x8260A0A8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260A0AC:
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

__attribute__((alias("__imp__sub_8260A0C4"))) PPC_WEAK_FUNC(sub_8260A0C4);
PPC_FUNC_IMPL(__imp__sub_8260A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A0C8"))) PPC_WEAK_FUNC(sub_8260A0C8);
PPC_FUNC_IMPL(__imp__sub_8260A0C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82627e68
	ctx.lr = 0x8260A0E0;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ad0
	ctx.lr = 0x8260A0E8;
	sub_82624AD0(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r3.u32);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// addi r11,r31,996
	ctx.r11.s64 = ctx.r31.s64 + 996;
	// stb r9,1052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1052, ctx.r9.u8);
	// stw r8,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8260A10C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8260a10c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260A10C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260A11C;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260A130"))) PPC_WEAK_FUNC(sub_8260A130);
PPC_FUNC_IMPL(__imp__sub_8260A130) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627390
	sub_82627390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260A134"))) PPC_WEAK_FUNC(sub_8260A134);
PPC_FUNC_IMPL(__imp__sub_8260A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A138"))) PPC_WEAK_FUNC(sub_8260A138);
PPC_FUNC_IMPL(__imp__sub_8260A138) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82628820
	ctx.lr = 0x8260A150;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4272
	ctx.r10.s64 = ctx.r11.s64 + -4272;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82627e68
	ctx.lr = 0x8260A164;
	sub_82627E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ad0
	ctx.lr = 0x8260A16C;
	sub_82624AD0(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r3.u32);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r9,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r9.u32);
	// addi r11,r31,996
	ctx.r11.s64 = ctx.r31.s64 + 996;
	// stb r9,1052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1052, ctx.r9.u8);
	// stw r8,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8260A190:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8260a190
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260A190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628208
	ctx.lr = 0x8260A1A0;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260A1B8"))) PPC_WEAK_FUNC(sub_8260A1B8);
PPC_FUNC_IMPL(__imp__sub_8260A1B8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4272
	ctx.r10.s64 = ctx.r11.s64 + -4272;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260A1DC;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260A1E4;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_8260A1F8"))) PPC_WEAK_FUNC(sub_8260A1F8);
PPC_FUNC_IMPL(__imp__sub_8260A1F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260A200;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260a278
	if (cr6.eq) goto loc_8260A278;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260a278
	if (cr6.eq) goto loc_8260A278;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,132(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8260a278
	if (cr6.eq) goto loc_8260A278;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22860
	ctx.lr = 0x8260A230;
	sub_82A22860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8260a278
	if (!cr6.gt) goto loc_8260A278;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8260A244:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x8260A250;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x8260a26c
	if (!cr6.eq) goto loc_8260A26C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8260a26c
	if (!cr6.eq) goto loc_8260A26C;
	// stb r28,1052(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1052, ctx.r28.u8);
loc_8260A26C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x8260a244
	if (cr6.lt) goto loc_8260A244;
loc_8260A278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260A280"))) PPC_WEAK_FUNC(sub_8260A280);
PPC_FUNC_IMPL(__imp__sub_8260A280) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4272
	ctx.r10.s64 = ctx.r11.s64 + -4272;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260A2AC;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260A2B4;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260a2cc
	if (cr6.eq) goto loc_8260A2CC;
	// bl 0x82416268
	ctx.lr = 0x8260A2C8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260A2CC:
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

__attribute__((alias("__imp__sub_8260A2E4"))) PPC_WEAK_FUNC(sub_8260A2E4);
PPC_FUNC_IMPL(__imp__sub_8260A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A2E8"))) PPC_WEAK_FUNC(sub_8260A2E8);
PPC_FUNC_IMPL(__imp__sub_8260A2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24636
	ctx.r9.s64 = ctx.r10.s64 + -24636;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825aa080
	ctx.lr = 0x8260A32C;
	sub_825AA080(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8260a34c
	if (!cr6.eq) goto loc_8260A34C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r3,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r3.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq 0x8260a37c
	if (cr0.eq) goto loc_8260A37C;
loc_8260A34C:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// blt cr6,0x8260a36c
	if (cr6.lt) goto loc_8260A36C;
	// bl 0x82a181b8
	ctx.lr = 0x8260A358;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260A35C;
	sub_82A2E7C0(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8260A36C:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
loc_8260A37C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x8260A390;
	sub_825E0CF8(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260a3b0
	if (cr6.eq) goto loc_8260A3B0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x8260A3B0;
	sub_8353F3B8(ctx, base);
loc_8260A3B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8260A3CC"))) PPC_WEAK_FUNC(sub_8260A3CC);
PPC_FUNC_IMPL(__imp__sub_8260A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A3D0"))) PPC_WEAK_FUNC(sub_8260A3D0);
PPC_FUNC_IMPL(__imp__sub_8260A3D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 428);
	// addi r31,r3,424
	ctx.r31.s64 = ctx.r3.s64 + 424;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a3fc
	if (!cr6.eq) goto loc_8260A3FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b4670
	ctx.lr = 0x8260A3FC;
	sub_825B4670(ctx, base);
loc_8260A3FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a418
	if (!cr6.eq) goto loc_8260A418;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,3312
	ctx.r10.s64 = ctx.r11.s64 + 3312;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_8260A418:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8260A434:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8260a434
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260A434;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260a480
	if (cr6.eq) goto loc_8260A480;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x8260A47C;
	sub_825B33F0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8260A480:
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

__attribute__((alias("__imp__sub_8260A498"))) PPC_WEAK_FUNC(sub_8260A498);
PPC_FUNC_IMPL(__imp__sub_8260A498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260A4A0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce778
	ctx.lr = 0x8260A4A8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260A4BC;
	sub_82A181B8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,6112(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260a640
	if (cr6.eq) goto loc_8260A640;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260A4D4;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260a4e8
	if (cr6.lt) goto loc_8260A4E8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260a4ec
	if (cr6.lt) goto loc_8260A4EC;
loc_8260A4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260A4EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260a640
	if (cr6.eq) goto loc_8260A640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18a48
	ctx.lr = 0x8260A500;
	sub_82A18A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260a640
	if (cr6.eq) goto loc_8260A640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r3,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,24552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24552);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// beq cr6,0x8260a56c
	if (cr6.eq) goto loc_8260A56C;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// b 0x8260a594
	goto loc_8260A594;
loc_8260A56C:
	// rlwinm r11,r3,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000000;
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-11304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11304);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f12,f13
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// beq cr6,0x8260a590
	if (cr6.eq) goto loc_8260A590;
	// fneg f29,f12
	ctx.f29.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x8260a594
	goto loc_8260A594;
loc_8260A590:
	// fmuls f29,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8260A594:
	// rlwinm r11,r3,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260a5b4
	if (cr6.eq) goto loc_8260A5B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,22396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22396);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// b 0x8260a5d4
	goto loc_8260A5D4;
loc_8260A5B4:
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a5d0
	if (!cr6.eq) goto loc_8260A5D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,22396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22396);
	ctx.f0.f64 = double(temp.f32);
loc_8260A5D0:
	// fmuls f31,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8260A5D4:
	// addi r31,r29,424
	ctx.r31.s64 = ctx.r29.s64 + 424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b46f0
	ctx.lr = 0x8260A5E0;
	sub_825B46F0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f10,f28,f29
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stb r9,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r9.u8);
	// lfs f0,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,164(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,160(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,168(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lwz r8,440(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8260a640
	if (cr6.eq) goto loc_8260A640;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825b33f0
	ctx.lr = 0x8260A638;
	sub_825B33F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8260A640:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7c4
	ctx.lr = 0x8260A64C;
	__restfpr_28(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260A650"))) PPC_WEAK_FUNC(sub_8260A650);
PPC_FUNC_IMPL(__imp__sub_8260A650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260A658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,444
	ctx.r30.s64 = ctx.r3.s64 + 444;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a678
	if (!cr6.eq) goto loc_8260A678;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825aa080
	ctx.lr = 0x8260A678;
	sub_825AA080(ctx, base);
loc_8260A678:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a694
	if (!cr6.eq) goto loc_8260A694;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_8260A694:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260A6A0;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260A6A4;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260A6B4;
	sub_82627EF8(ctx, base);
	// lwz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// lwz r10,1040(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x8260a6e4
	if (!cr6.eq) goto loc_8260A6E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260A6D0;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260A6D4;
	sub_82A2EE50(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260A6E4;
	sub_82627EF8(ctx, base);
loc_8260A6E4:
	// lwz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260a708
	if (cr6.eq) goto loc_8260A708;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_8260A708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260A710"))) PPC_WEAK_FUNC(sub_8260A710);
PPC_FUNC_IMPL(__imp__sub_8260A710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260A718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2114
	ctx.r11.s64 = 138543104;
	// lwz r9,1048(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// ori r30,r11,4229
	ctx.r30.u64 = ctx.r11.u64 | 4229;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r11,r9,r30
	ctx.r11.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// clrlwi r28,r11,30
	ctx.r28.u64 = ctx.r11.u32 & 0x3;
	// bl 0x82624ad0
	ctx.lr = 0x8260A758;
	sub_82624AD0(ctx, base);
	// mulhwu r11,r3,r30
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// stw r3,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r3.u32);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r9,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, xer);
	// bne cr6,0x8260a790
	if (!cr6.eq) goto loc_8260A790;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
loc_8260A790:
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulhwu r11,r9,r30
	ctx.r11.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8260a800
	if (cr6.gt) goto loc_8260A800;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8260a7e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260A7E4;
	// bdzf 4*cr6+eq,0x8260a7f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260A7F0;
	// bne cr6,0x8260a7f8
	if (!cr6.eq) goto loc_8260A7F8;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x8260a800
	goto loc_8260A800;
loc_8260A7E4:
	// lis r4,256
	ctx.r4.s64 = 16777216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x8260a800
	goto loc_8260A800;
loc_8260A7F0:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x8260a7fc
	goto loc_8260A7FC;
loc_8260A7F8:
	// lis r4,256
	ctx.r4.s64 = 16777216;
loc_8260A7FC:
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
loc_8260A800:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a18a38
	ctx.lr = 0x8260A808;
	sub_82A18A38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260a3d0
	ctx.lr = 0x8260A810;
	sub_8260A3D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260A818;
	sub_82A181B8(ctx, base);
	// bl 0x82a2ee50
	ctx.lr = 0x8260A81C;
	sub_82A2EE50(ctx, base);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1000, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1004(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1004, temp.u32);
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1008(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1012(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1016(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1020(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// lfs f8,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1024(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// lfs f7,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1028(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// lfs f6,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1032(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// lfs f5,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// stb r11,1052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1052, ctx.r11.u8);
	// stfs f5,1036(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1036, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260A87C"))) PPC_WEAK_FUNC(sub_8260A87C);
PPC_FUNC_IMPL(__imp__sub_8260A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A880"))) PPC_WEAK_FUNC(sub_8260A880);
PPC_FUNC_IMPL(__imp__sub_8260A880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260A888;
	__savegprlr_25(ctx, base);
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260ab88
	if (cr6.eq) goto loc_8260AB88;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260ab88
	if (cr6.eq) goto loc_8260AB88;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ab88
	if (cr6.eq) goto loc_8260AB88;
	// bl 0x82a181b8
	ctx.lr = 0x8260A8C0;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7e0
	ctx.lr = 0x8260A8C4;
	sub_82A2E7E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260A8D0;
	sub_8264F470(ctx, base);
	// subf r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82a2b4e0
	ctx.lr = 0x8260A8E8;
	sub_82A2B4E0(ctx, base);
	// subf r9,r3,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x8260a9c0
	if (cr6.eq) goto loc_8260A9C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260A908;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a9c0
	if (!cr6.eq) goto loc_8260A9C0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a974
	if (!cr6.eq) goto loc_8260A974;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260A934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8260a974
	if (!cr6.eq) goto loc_8260A974;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82626408
	ctx.lr = 0x8260A950;
	sub_82626408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a974
	if (!cr6.eq) goto loc_8260A974;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826262a8
	ctx.lr = 0x8260A968;
	sub_826262A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260a9c0
	if (cr6.eq) goto loc_8260A9C0;
loc_8260A974:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8260a650
	ctx.lr = 0x8260A97C;
	sub_8260A650(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260A984;
	sub_82624A08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8260a3d0
	ctx.lr = 0x8260A98C;
	sub_8260A3D0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260A9A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260a9c0
	if (cr6.eq) goto loc_8260A9C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260A9B4;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82628658
	ctx.lr = 0x8260A9C0;
	sub_82628658(ctx, base);
loc_8260A9C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826249f0
	ctx.lr = 0x8260A9C8;
	sub_826249F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8260a9f0
	if (!cr6.eq) goto loc_8260A9F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826262a8
	ctx.lr = 0x8260A9E0;
	sub_826262A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260a9f4
	if (!cr6.eq) goto loc_8260A9F4;
loc_8260A9F0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8260A9F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260A9FC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260aa20
	if (!cr6.eq) goto loc_8260AA20;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260aa20
	if (!cr6.eq) goto loc_8260AA20;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ab88
	if (cr6.eq) goto loc_8260AB88;
loc_8260AA20:
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ab88
	if (cr6.eq) goto loc_8260AB88;
	// bl 0x82a181b8
	ctx.lr = 0x8260AA34;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260AA3C;
	sub_82A2E7E0(ctx, base);
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a0c788
	ctx.lr = 0x8260AA50;
	sub_82A0C788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ab88
	if (cr6.eq) goto loc_8260AB88;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,1388(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f10,8152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8152);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f0,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f9
	cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// beq cr6,0x8260aa90
	if (cr6.eq) goto loc_8260AA90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260AA90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ab10
	if (cr6.eq) goto loc_8260AB10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x826249d8
	ctx.lr = 0x8260AAA8;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260aac0
	if (!cr6.eq) goto loc_8260AAC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8260a650
	ctx.lr = 0x8260AABC;
	sub_8260A650(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_8260AAC0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ab10
	if (!cr6.eq) goto loc_8260AB10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x8260AAD8;
	sub_82A0C760(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8260ab10
	if (cr6.eq) goto loc_8260AB10;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x8260ab10
	if (cr6.eq) goto loc_8260AB10;
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(ctx.r11.s32, 67, xer);
	// beq cr6,0x8260ab10
	if (cr6.eq) goto loc_8260AB10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260AB00;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260AB10;
	sub_82627EF8(ctx, base);
loc_8260AB10:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ab28
	if (!cr6.eq) goto loc_8260AB28;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ab30
	if (cr6.eq) goto loc_8260AB30;
loc_8260AB28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260AB30;
	sub_82624A08(ctx, base);
loc_8260AB30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260AB38;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ab4c
	if (cr6.eq) goto loc_8260AB4C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,1040(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1040, ctx.r11.u32);
loc_8260AB4C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260AB60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260ab80
	if (cr6.eq) goto loc_8260AB80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260AB74;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82628658
	ctx.lr = 0x8260AB80;
	sub_82628658(ctx, base);
loc_8260AB80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8260a3d0
	ctx.lr = 0x8260AB88;
	sub_8260A3D0(ctx, base);
loc_8260AB88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AB90"))) PPC_WEAK_FUNC(sub_8260AB90);
PPC_FUNC_IMPL(__imp__sub_8260AB90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260ac08
	if (cr6.eq) goto loc_8260AC08;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260ac08
	if (cr6.eq) goto loc_8260AC08;
	// bl 0x82624a50
	ctx.lr = 0x8260ABB8;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ac08
	if (!cr6.eq) goto loc_8260AC08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260ABCC;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ac08
	if (cr6.eq) goto loc_8260AC08;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260ABE4;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260AC00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8260a3d0
	ctx.lr = 0x8260AC08;
	sub_8260A3D0(ctx, base);
loc_8260AC08:
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

__attribute__((alias("__imp__sub_8260AC1C"))) PPC_WEAK_FUNC(sub_8260AC1C);
PPC_FUNC_IMPL(__imp__sub_8260AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AC20"))) PPC_WEAK_FUNC(sub_8260AC20);
PPC_FUNC_IMPL(__imp__sub_8260AC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8260AC28;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260ad4c
	if (cr6.eq) goto loc_8260AD4C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260ad4c
	if (cr6.eq) goto loc_8260AD4C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260ad4c
	if (cr6.eq) goto loc_8260AD4C;
	// lbz r11,1052(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1052);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ad44
	if (!cr6.eq) goto loc_8260AD44;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// lwz r28,6112(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8260ad4c
	if (cr6.eq) goto loc_8260AD4C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260AC80;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260AC84;
	sub_82A2E7C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260ac9c
	if (cr6.lt) goto loc_8260AC9C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260aca0
	if (cr6.lt) goto loc_8260ACA0;
loc_8260AC9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260ACA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260ad4c
	if (cr6.eq) goto loc_8260AD4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x8260ACB8;
	sub_82A0C788(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260ad4c
	if (cr6.eq) goto loc_8260AD4C;
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,1380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// bl 0x82a182e0
	ctx.lr = 0x8260ACDC;
	sub_82A182E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260ad44
	if (!cr6.eq) goto loc_8260AD44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8260ad44
	if (!cr6.gt) goto loc_8260AD44;
	// lwz r11,1044(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1044);
	// addi r11,r11,250
	ctx.r11.s64 = ctx.r11.s64 + 250;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8260ad44
	if (cr6.gt) goto loc_8260AD44;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,139
	ctx.r5.u64 = ctx.r5.u64 | 139;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260AD24;
	sub_82A18350(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8260a498
	ctx.lr = 0x8260AD38;
	sub_8260A498(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8260AD44:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8260a3d0
	ctx.lr = 0x8260AD4C;
	sub_8260A3D0(ctx, base);
loc_8260AD4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AD58"))) PPC_WEAK_FUNC(sub_8260AD58);
PPC_FUNC_IMPL(__imp__sub_8260AD58) {
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
	// bl 0x82627e68
	ctx.lr = 0x8260AD70;
	sub_82627E68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1000, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8260AD8C"))) PPC_WEAK_FUNC(sub_8260AD8C);
PPC_FUNC_IMPL(__imp__sub_8260AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AD90"))) PPC_WEAK_FUNC(sub_8260AD90);
PPC_FUNC_IMPL(__imp__sub_8260AD90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1000, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AD9C"))) PPC_WEAK_FUNC(sub_8260AD9C);
PPC_FUNC_IMPL(__imp__sub_8260AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260ADA0"))) PPC_WEAK_FUNC(sub_8260ADA0);
PPC_FUNC_IMPL(__imp__sub_8260ADA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826250b8
	sub_826250B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260ADA4"))) PPC_WEAK_FUNC(sub_8260ADA4);
PPC_FUNC_IMPL(__imp__sub_8260ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260ADA8"))) PPC_WEAK_FUNC(sub_8260ADA8);
PPC_FUNC_IMPL(__imp__sub_8260ADA8) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260adec
	if (cr6.eq) goto loc_8260ADEC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260adec
	if (cr6.eq) goto loc_8260ADEC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260adec
	if (cr6.eq) goto loc_8260ADEC;
	// bl 0x826256c8
	ctx.lr = 0x8260ADD8;
	sub_826256C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18af0
	ctx.lr = 0x8260ADE0;
	sub_82A18AF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a18a38
	ctx.lr = 0x8260ADEC;
	sub_82A18A38(ctx, base);
loc_8260ADEC:
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

__attribute__((alias("__imp__sub_8260AE00"))) PPC_WEAK_FUNC(sub_8260AE00);
PPC_FUNC_IMPL(__imp__sub_8260AE00) {
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
	// bl 0x82628820
	ctx.lr = 0x8260AE18;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3920
	ctx.r10.s64 = ctx.r11.s64 + -3920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82627e68
	ctx.lr = 0x8260AE2C;
	sub_82627E68(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,1000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1000, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8260AE4C"))) PPC_WEAK_FUNC(sub_8260AE4C);
PPC_FUNC_IMPL(__imp__sub_8260AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AE50"))) PPC_WEAK_FUNC(sub_8260AE50);
PPC_FUNC_IMPL(__imp__sub_8260AE50) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3920
	ctx.r10.s64 = ctx.r11.s64 + -3920;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260AE74;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260AE7C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_8260AE90"))) PPC_WEAK_FUNC(sub_8260AE90);
PPC_FUNC_IMPL(__imp__sub_8260AE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260AE98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260AED8;
	sub_82A181B8(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260AEEC;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260af00
	if (cr6.lt) goto loc_8260AF00;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260af04
	if (cr6.lt) goto loc_8260AF04;
loc_8260AF00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260AF04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260AF18;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260AF3C;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260AF44;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260af58
	if (cr6.lt) goto loc_8260AF58;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260af5c
	if (cr6.lt) goto loc_8260AF5C;
loc_8260AF58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260AF5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b040
	if (cr6.eq) goto loc_8260B040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a2ea90
	ctx.lr = 0x8260AF78;
	sub_82A2EA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260b01c
	if (cr6.eq) goto loc_8260B01C;
loc_8260AF80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18ac0
	ctx.lr = 0x8260AF8C;
	sub_82A18AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260afb0
	if (!cr6.eq) goto loc_8260AFB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a2ea90
	ctx.lr = 0x8260AFA4;
	sub_82A2EA90(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8260af80
	if (cr6.lt) goto loc_8260AF80;
	// b 0x8260b01c
	goto loc_8260B01C;
loc_8260AFB0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bgt cr6,0x8260b01c
	if (cr6.gt) goto loc_8260B01C;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8260afe4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260AFE4;
	// bdzf 4*cr6+eq,0x8260aff4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8260AFF4;
	// bne cr6,0x8260b004
	if (!cr6.eq) goto loc_8260B004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260AFD8;
	sub_82A2EE50(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8260b010
	goto loc_8260B010;
loc_8260AFE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260AFEC;
	sub_82A2EE50(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8260b010
	goto loc_8260B010;
loc_8260AFF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260AFFC;
	sub_82A2EE50(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8260b010
	goto loc_8260B010;
loc_8260B004:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260B00C;
	sub_82A2EE50(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8260B010:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82627ef8
	ctx.lr = 0x8260B01C;
	sub_82627EF8(ctx, base);
loc_8260B01C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b040
	if (!cr6.eq) goto loc_8260B040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260B030;
	sub_82A2EE50(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82627ef8
	ctx.lr = 0x8260B040;
	sub_82627EF8(ctx, base);
loc_8260B040:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B048"))) PPC_WEAK_FUNC(sub_8260B048);
PPC_FUNC_IMPL(__imp__sub_8260B048) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260b098
	if (cr6.eq) goto loc_8260B098;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260b098
	if (cr6.eq) goto loc_8260B098;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260b098
	if (cr6.eq) goto loc_8260B098;
	// bl 0x826249d8
	ctx.lr = 0x8260B084;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b098
	if (cr6.eq) goto loc_8260B098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260B098;
	sub_82624A08(ctx, base);
loc_8260B098:
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

__attribute__((alias("__imp__sub_8260B0AC"))) PPC_WEAK_FUNC(sub_8260B0AC);
PPC_FUNC_IMPL(__imp__sub_8260B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B0B0"))) PPC_WEAK_FUNC(sub_8260B0B0);
PPC_FUNC_IMPL(__imp__sub_8260B0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260B0B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260b238
	if (cr6.eq) goto loc_8260B238;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260b238
	if (cr6.eq) goto loc_8260B238;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260b238
	if (cr6.eq) goto loc_8260B238;
	// bl 0x82a181b8
	ctx.lr = 0x8260B0EC;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260B0F4;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260b108
	if (cr6.lt) goto loc_8260B108;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260b10c
	if (cr6.lt) goto loc_8260B10C;
loc_8260B108:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260B10C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b238
	if (cr6.eq) goto loc_8260B238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249f0
	ctx.lr = 0x8260B120;
	sub_826249F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b1b4
	if (!cr6.eq) goto loc_8260B1B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a00
	ctx.lr = 0x8260B134;
	sub_82624A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b1b4
	if (!cr6.eq) goto loc_8260B1B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a58
	ctx.lr = 0x8260B148;
	sub_82624A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b15c
	if (cr6.eq) goto loc_8260B15C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8260b1b8
	goto loc_8260B1B8;
loc_8260B15C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826249d8
	ctx.lr = 0x8260B164;
	sub_826249D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b1dc
	if (!cr6.eq) goto loc_8260B1DC;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,20048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// lfs f13,8152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x8260b1b4
	if (cr6.gt) goto loc_8260B1B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82626258
	ctx.lr = 0x8260B1A8;
	sub_82626258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b1dc
	if (cr6.eq) goto loc_8260B1DC;
loc_8260B1B4:
	// li r4,5
	ctx.r4.s64 = 5;
loc_8260B1B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260B1C0;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260B1DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260B1DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260B1E8;
	sub_82A2B4E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260B1F4;
	sub_82A2E7E0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x8260b238
	if (cr6.eq) goto loc_8260B238;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260B208;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x8260b238
	if (cr6.eq) goto loc_8260B238;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260B21C;
	sub_825832F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260B238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260B238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B240"))) PPC_WEAK_FUNC(sub_8260B240);
PPC_FUNC_IMPL(__imp__sub_8260B240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260B248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260b390
	if (cr6.eq) goto loc_8260B390;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260b390
	if (cr6.eq) goto loc_8260B390;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260b390
	if (cr6.eq) goto loc_8260B390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260B27C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r11,-3564(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3564);
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8260b390
	if (cr6.eq) goto loc_8260B390;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260B298;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260B2A0;
	sub_82A2E7C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260b2b8
	if (cr6.lt) goto loc_8260B2B8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260b2bc
	if (cr6.lt) goto loc_8260B2BC;
loc_8260B2B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260B2BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b390
	if (cr6.eq) goto loc_8260B390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260B2D0;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b2f0
	if (!cr6.eq) goto loc_8260B2F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260B2E4;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b34c
	if (cr6.eq) goto loc_8260B34C;
loc_8260B2F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260B304;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260b34c
	if (cr6.eq) goto loc_8260B34C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260B318;
	sub_82624AE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2f370
	ctx.lr = 0x8260B324;
	sub_82A2F370(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x8260b340
	if (cr6.lt) goto loc_8260B340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260B334;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628658
	ctx.lr = 0x8260B340;
	sub_82628658(ctx, base);
loc_8260B340:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18a38
	ctx.lr = 0x8260B34C;
	sub_82A18A38(ctx, base);
loc_8260B34C:
	// lbz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b384
	if (!cr6.eq) goto loc_8260B384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ac8
	ctx.lr = 0x8260B360;
	sub_82624AC8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bgt cr6,0x8260b384
	if (cr6.gt) goto loc_8260B384;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260B37C;
	sub_82A18350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8260B384:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260B390;
	sub_82A18368(ctx, base);
loc_8260B390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B398"))) PPC_WEAK_FUNC(sub_8260B398);
PPC_FUNC_IMPL(__imp__sub_8260B398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260B3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260b448
	if (cr6.eq) goto loc_8260B448;
	// bl 0x82a181b8
	ctx.lr = 0x8260B3C8;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260B3CC;
	sub_82A2E7C0(ctx, base);
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// bl 0x825ca6b8
	ctx.lr = 0x8260B3DC;
	sub_825CA6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x8260b448
	if (!cr6.lt) goto loc_8260B448;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82627390
	ctx.lr = 0x8260B3F8;
	sub_82627390(ctx, base);
	// lbz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b448
	if (!cr6.eq) goto loc_8260B448;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82a31458
	ctx.lr = 0x8260B414;
	sub_82A31458(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260b448
	if (cr6.eq) goto loc_8260B448;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x8260b448
	if (!cr6.lt) goto loc_8260B448;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8260b448
	if (cr6.eq) goto loc_8260B448;
	// bl 0x82a301e0
	ctx.lr = 0x8260B438;
	sub_82A301E0(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x8260b448
	if (!cr6.eq) goto loc_8260B448;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1000(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1000, ctx.r11.u8);
loc_8260B448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B450"))) PPC_WEAK_FUNC(sub_8260B450);
PPC_FUNC_IMPL(__imp__sub_8260B450) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3920
	ctx.r10.s64 = ctx.r11.s64 + -3920;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82624cf8
	ctx.lr = 0x8260B47C;
	sub_82624CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260B484;
	sub_82627660(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260b49c
	if (cr6.eq) goto loc_8260B49C;
	// bl 0x82416268
	ctx.lr = 0x8260B498;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8260B49C:
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

__attribute__((alias("__imp__sub_8260B4B4"))) PPC_WEAK_FUNC(sub_8260B4B4);
PPC_FUNC_IMPL(__imp__sub_8260B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B4B8"))) PPC_WEAK_FUNC(sub_8260B4B8);
PPC_FUNC_IMPL(__imp__sub_8260B4B8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,1021(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1021, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// stb r30,1020(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1020, ctx.r30.u8);
	// bl 0x82624ae8
	ctx.lr = 0x8260B4E8;
	sub_82624AE8(ctx, base);
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// addi r11,r31,1004
	ctx.r11.s64 = ctx.r31.s64 + 1004;
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// bl 0x82628208
	ctx.lr = 0x8260B504;
	sub_82628208(ctx, base);
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

__attribute__((alias("__imp__sub_8260B51C"))) PPC_WEAK_FUNC(sub_8260B51C);
PPC_FUNC_IMPL(__imp__sub_8260B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B520"))) PPC_WEAK_FUNC(sub_8260B520);
PPC_FUNC_IMPL(__imp__sub_8260B520) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r11.u32);
	// stb r10,1021(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1021, ctx.r10.u8);
	// b 0x82624ae8
	sub_82624AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B534"))) PPC_WEAK_FUNC(sub_8260B534);
PPC_FUNC_IMPL(__imp__sub_8260B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B538"))) PPC_WEAK_FUNC(sub_8260B538);
PPC_FUNC_IMPL(__imp__sub_8260B538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82624cf8
	ctx.lr = 0x8260B554;
	sub_82624CF8(ctx, base);
	// addi r30,r31,1004
	ctx.r30.s64 = ctx.r31.s64 + 1004;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8260B55C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8264fdf8
	ctx.lr = 0x8260B564;
	sub_8264FDF8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8260b55c
	if (!cr0.eq) goto loc_8260B55C;
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

__attribute__((alias("__imp__sub_8260B588"))) PPC_WEAK_FUNC(sub_8260B588);
PPC_FUNC_IMPL(__imp__sub_8260B588) {
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
	// bl 0x82624ed8
	ctx.lr = 0x8260B5A8;
	sub_82624ED8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826250b8
	ctx.lr = 0x8260B5B4;
	sub_826250B8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,1004
	ctx.r30.s64 = ctx.r30.s64 + 1004;
loc_8260B5BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82650570
	ctx.lr = 0x8260B5CC;
	sub_82650570(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// blt cr6,0x8260b5bc
	if (cr6.lt) goto loc_8260B5BC;
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

__attribute__((alias("__imp__sub_8260B5F4"))) PPC_WEAK_FUNC(sub_8260B5F4);
PPC_FUNC_IMPL(__imp__sub_8260B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B5F8"))) PPC_WEAK_FUNC(sub_8260B5F8);
PPC_FUNC_IMPL(__imp__sub_8260B5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8260B600;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82624970
	ctx.lr = 0x8260B618;
	sub_82624970(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624970
	ctx.lr = 0x8260B624;
	sub_82624970(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260B630;
	sub_82A181B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a2f4e8
	ctx.lr = 0x8260B638;
	sub_82A2F4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628110
	ctx.lr = 0x8260B640;
	sub_82628110(ctx, base);
	// stb r3,1020(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1020, ctx.r3.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8260b654
	if (!cr6.eq) goto loc_8260B654;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8260b688
	goto loc_8260B688;
loc_8260B654:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// beq cr6,0x8260b684
	if (cr6.eq) goto loc_8260B684;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// beq cr6,0x8260b684
	if (cr6.eq) goto loc_8260B684;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// beq cr6,0x8260b67c
	if (cr6.eq) goto loc_8260B67C;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// beq cr6,0x8260b67c
	if (cr6.eq) goto loc_8260B67C;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8260b688
	goto loc_8260B688;
loc_8260B67C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8260b688
	goto loc_8260B688;
loc_8260B684:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8260B688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a189e0
	ctx.lr = 0x8260B690;
	sub_82A189E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627b88
	ctx.lr = 0x8260B6A4;
	sub_82627B88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B6AC"))) PPC_WEAK_FUNC(sub_8260B6AC);
PPC_FUNC_IMPL(__imp__sub_8260B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B6B0"))) PPC_WEAK_FUNC(sub_8260B6B0);
PPC_FUNC_IMPL(__imp__sub_8260B6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8260B6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260b708
	if (cr6.eq) goto loc_8260B708;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260b708
	if (cr6.eq) goto loc_8260B708;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260b708
	if (cr6.eq) goto loc_8260B708;
	// bl 0x82624f78
	ctx.lr = 0x8260B6E8;
	sub_82624F78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260B708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260B708:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B710"))) PPC_WEAK_FUNC(sub_8260B710);
PPC_FUNC_IMPL(__imp__sub_8260B710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8260B718;
	__savegprlr_27(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
	// bl 0x82624608
	ctx.lr = 0x8260B748;
	sub_82624608(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260B768;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260B770;
	sub_82A181B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260B778;
	sub_82A2E7C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260B784;
	sub_82A2E7E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8260b79c
	if (cr6.lt) goto loc_8260B79C;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260b7a0
	if (cr6.lt) goto loc_8260B7A0;
loc_8260B79C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260B7A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x8260b7c0
	if (cr6.lt) goto loc_8260B7C0;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260b7c4
	if (cr6.lt) goto loc_8260B7C4;
loc_8260B7C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260B7C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260B7D8;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b8c0
	if (!cr6.eq) goto loc_8260B8C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260B7EC;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b8c0
	if (!cr6.eq) goto loc_8260B8C0;
	// lis r5,103
	ctx.r5.s64 = 6750208;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r5,r5,130
	ctx.r5.u64 = ctx.r5.u64 | 130;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18350
	ctx.lr = 0x8260B80C;
	sub_82A18350(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B818;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B828;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1004(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1004);
	// bl 0x8264fb38
	ctx.lr = 0x8260B838;
	sub_8264FB38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B844;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B854;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1008(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1008);
	// bl 0x8264fb38
	ctx.lr = 0x8260B864;
	sub_8264FB38(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B870;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B880;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1012(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1012);
	// bl 0x8264fb38
	ctx.lr = 0x8260B890;
	sub_8264FB38(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B89C;
	sub_82A2E8A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260B8AC;
	sub_82A2E8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,1016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// bl 0x8264fb38
	ctx.lr = 0x8260B8BC;
	sub_8264FB38(ctx, base);
	// b 0x8260b8cc
	goto loc_8260B8CC;
loc_8260B8C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a18368
	ctx.lr = 0x8260B8CC;
	sub_82A18368(ctx, base);
loc_8260B8CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260B8D4;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b8f4
	if (!cr6.eq) goto loc_8260B8F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624a60
	ctx.lr = 0x8260B8E8;
	sub_82624A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
loc_8260B8F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8260B908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8260b944
	if (cr6.eq) goto loc_8260B944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260B91C;
	sub_82624AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f370
	ctx.lr = 0x8260B928;
	sub_82A2F370(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x8260b944
	if (cr6.lt) goto loc_8260B944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624ae0
	ctx.lr = 0x8260B938;
	sub_82624AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82628658
	ctx.lr = 0x8260B944;
	sub_82628658(ctx, base);
loc_8260B944:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260B94C"))) PPC_WEAK_FUNC(sub_8260B94C);
PPC_FUNC_IMPL(__imp__sub_8260B94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B950"))) PPC_WEAK_FUNC(sub_8260B950);
PPC_FUNC_IMPL(__imp__sub_8260B950) {
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
	// bl 0x82624a68
	ctx.lr = 0x8260B968;
	sub_82624A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b99c
	if (!cr6.eq) goto loc_8260B99C;
	// lbz r11,1020(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260b994
	if (cr6.eq) goto loc_8260B994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260B988;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260b99c
	if (!cr6.eq) goto loc_8260B99C;
loc_8260B994:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8260b9a0
	goto loc_8260B9A0;
loc_8260B99C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260B9A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8260B9B8"))) PPC_WEAK_FUNC(sub_8260B9B8);
PPC_FUNC_IMPL(__imp__sub_8260B9B8) {
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
	// bl 0x82628820
	ctx.lr = 0x8260B9D4;
	sub_82628820(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-3568
	ctx.r9.s64 = ctx.r11.s64 + -3568;
	// stb r30,1021(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1021, ctx.r30.u8);
	// stw r10,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r30,1020(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1020, ctx.r30.u8);
	// bl 0x82624ae8
	ctx.lr = 0x8260B9FC;
	sub_82624AE8(ctx, base);
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// addi r11,r31,1004
	ctx.r11.s64 = ctx.r31.s64 + 1004;
	// stw r30,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r30.u32);
	// bl 0x82628208
	ctx.lr = 0x8260BA18;
	sub_82628208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624ae8
	ctx.lr = 0x8260BA20;
	sub_82624AE8(ctx, base);
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

__attribute__((alias("__imp__sub_8260BA3C"))) PPC_WEAK_FUNC(sub_8260BA3C);
PPC_FUNC_IMPL(__imp__sub_8260BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260BA40"))) PPC_WEAK_FUNC(sub_8260BA40);
PPC_FUNC_IMPL(__imp__sub_8260BA40) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3568
	ctx.r10.s64 = ctx.r11.s64 + -3568;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8260b538
	ctx.lr = 0x8260BA64;
	sub_8260B538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82627660
	ctx.lr = 0x8260BA6C;
	sub_82627660(ctx, base);
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

__attribute__((alias("__imp__sub_8260BA80"))) PPC_WEAK_FUNC(sub_8260BA80);
PPC_FUNC_IMPL(__imp__sub_8260BA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8260BA88;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// bl 0x82a181b8
	ctx.lr = 0x8260BAC8;
	sub_82A181B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260BAD0;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260bae4
	if (cr6.lt) goto loc_8260BAE4;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260bae8
	if (cr6.lt) goto loc_8260BAE8;
loc_8260BAE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260BAE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260bbc8
	if (cr6.eq) goto loc_8260BBC8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f13,8152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r9,31216
	ctx.r11.s64 = ctx.r9.s64 + 31216;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1000(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1000, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_8260BB40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r23,-8(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r22,-4(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r21,0(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2e8a0
	ctx.lr = 0x8260BB58;
	sub_82A2E8A0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260BB68;
	sub_82A2E8A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260BB78;
	sub_82A2E8A0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e8a0
	ctx.lr = 0x8260BB88;
	sub_82A2E8A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// bl 0x8264fe78
	ctx.lr = 0x8260BBA4;
	sub_8264FE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260bbc4
	if (!cr6.eq) goto loc_8260BBC4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x8260bb40
	if (cr6.lt) goto loc_8260BB40;
	// b 0x8260bbc8
	goto loc_8260BBC8;
loc_8260BBC4:
	// stw r29,1000(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1000, ctx.r29.u32);
loc_8260BBC8:
	// lbz r11,1021(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1021);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8260bc3c
	if (!cr6.eq) goto loc_8260BC3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260BBDC;
	sub_82A2E7E0(ctx, base);
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r31,52(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x825ca6b8
	ctx.lr = 0x8260BBF4;
	sub_825CA6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,24
	cr6.compare<uint32_t>(ctx.r3.u32, 24, xer);
	// bge cr6,0x8260bc3c
	if (!cr6.lt) goto loc_8260BC3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a31458
	ctx.lr = 0x8260BC08;
	sub_82A31458(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(ctx.r11.u32, 248, xer);
	// bge cr6,0x8260bc3c
	if (!cr6.lt) goto loc_8260BC3C;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8260bc3c
	if (cr6.eq) goto loc_8260BC3C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8260bc3c
	if (!cr6.eq) goto loc_8260BC3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1021(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1021, ctx.r11.u8);
loc_8260BC3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260BC44"))) PPC_WEAK_FUNC(sub_8260BC44);
PPC_FUNC_IMPL(__imp__sub_8260BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260BC48"))) PPC_WEAK_FUNC(sub_8260BC48);
PPC_FUNC_IMPL(__imp__sub_8260BC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8260BC50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260be14
	if (cr6.eq) goto loc_8260BE14;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260be14
	if (cr6.eq) goto loc_8260BE14;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8260be14
	if (cr6.eq) goto loc_8260BE14;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r25,432(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8260be14
	if (cr6.eq) goto loc_8260BE14;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a181b8
	ctx.lr = 0x8260BC9C;
	sub_82A181B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a2e7c0
	ctx.lr = 0x8260BCA4;
	sub_82A2E7C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260bcb8
	if (cr6.lt) goto loc_8260BCB8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260bcbc
	if (cr6.lt) goto loc_8260BCBC;
loc_8260BCB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260BCBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260be14
	if (cr6.eq) goto loc_8260BE14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260BCD0;
	sub_82A2E7E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260BCDC;
	sub_82A2B4E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x8260bd24
	if (cr6.eq) goto loc_8260BD24;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260bd00
	if (cr6.lt) goto loc_8260BD00;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x8260bd00
	if (cr6.lt) goto loc_8260BD00;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// blt cr6,0x8260bd24
	if (cr6.lt) goto loc_8260BD24;
loc_8260BD00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260BD08;
	sub_82A2E7E0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x8260bd1c
	if (cr6.eq) goto loc_8260BD1C;
	// bl 0x82624a08
	ctx.lr = 0x8260BD18;
	sub_82624A08(ctx, base);
	// b 0x8260bd24
	goto loc_8260BD24;
loc_8260BD1C:
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82624af8
	ctx.lr = 0x8260BD24;
	sub_82624AF8(ctx, base);
loc_8260BD24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a22860
	ctx.lr = 0x8260BD2C;
	sub_82A22860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8260bdb0
	if (!cr6.gt) goto loc_8260BDB0;
loc_8260BD3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a236f8
	ctx.lr = 0x8260BD48;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x8260bd60
	if (!cr6.eq) goto loc_8260BD60;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8260bd70
	if (cr6.eq) goto loc_8260BD70;
loc_8260BD60:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x8260bd3c
	if (cr6.lt) goto loc_8260BD3C;
	// b 0x8260bdb0
	goto loc_8260BDB0;
loc_8260BD70:
	// lbz r11,1021(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1021);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260bda4
	if (cr6.eq) goto loc_8260BDA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2e7e0
	ctx.lr = 0x8260BD84;
	sub_82A2E7E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8264f470
	ctx.lr = 0x8260BD90;
	sub_8264F470(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x8260bda4
	if (cr6.eq) goto loc_8260BDA4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624a08
	ctx.lr = 0x8260BDA0;
	sub_82624A08(ctx, base);
	// b 0x8260bdb0
	goto loc_8260BDB0;
loc_8260BDA4:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624af8
	ctx.lr = 0x8260BDB0;
	sub_82624AF8(ctx, base);
loc_8260BDB0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624a50
	ctx.lr = 0x8260BDB8;
	sub_82624A50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260be14
	if (cr6.eq) goto loc_8260BE14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260BDCC;
	sub_82A2EE50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82627ef8
	ctx.lr = 0x8260BDE0;
	sub_82627EF8(ctx, base);
	// lbz r10,1020(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1020);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260be08
	if (cr6.eq) goto loc_8260BE08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2ee50
	ctx.lr = 0x8260BDF4;
	sub_82A2EE50(ctx, base);
	// lfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82627f98
	ctx.lr = 0x8260BE08;
	sub_82627F98(ctx, base);
loc_8260BE08:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82624c98
	ctx.lr = 0x8260BE14;
	sub_82624C98(ctx, base);
loc_8260BE14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260BE1C"))) PPC_WEAK_FUNC(sub_8260BE1C);
PPC_FUNC_IMPL(__imp__sub_8260BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260BE20"))) PPC_WEAK_FUNC(sub_8260BE20);
PPC_FUNC_IMPL(__imp__sub_8260BE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8260BE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260bf98
	if (cr6.eq) goto loc_8260BF98;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260bf98
	if (cr6.eq) goto loc_8260BF98;
	// lwz r11,1000(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1000);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8260be78
	if (!cr6.eq) goto loc_8260BE78;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260BE5C;
	sub_825832F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260BE78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BE78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826249f8
	ctx.lr = 0x8260BE80;
	sub_826249F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260beb4
	if (cr6.eq) goto loc_8260BEB4;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260BE98;
	sub_825832F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260BEB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BEB4:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260bf98
	if (cr6.eq) goto loc_8260BF98;
	// bl 0x82a181b8
	ctx.lr = 0x8260BECC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2e7c0
	ctx.lr = 0x8260BED0;
	sub_82A2E7C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260bee8
	if (cr6.lt) goto loc_8260BEE8;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8260beec
	if (cr6.lt) goto loc_8260BEEC;
loc_8260BEE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260BEEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260bf98
	if (cr6.eq) goto loc_8260BF98;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a2b4e0
	ctx.lr = 0x8260BF04;
	sub_82A2B4E0(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// beq cr6,0x8260bf54
	if (cr6.eq) goto loc_8260BF54;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x8260bf54
	if (cr6.eq) goto loc_8260BF54;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260bf54
	if (cr6.lt) goto loc_8260BF54;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// blt cr6,0x8260bf54
	if (cr6.lt) goto loc_8260BF54;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// bge cr6,0x8260bf54
	if (!cr6.lt) goto loc_8260BF54;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260BF38;
	sub_825832F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260BF54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624b08
	ctx.lr = 0x8260BF5C;
	sub_82624B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8260bf98
	if (cr6.eq) goto loc_8260BF98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82624b10
	ctx.lr = 0x8260BF70;
	sub_82624B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832f8
	ctx.lr = 0x8260BF7C;
	sub_825832F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8260BF98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BF98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260BFA0"))) PPC_WEAK_FUNC(sub_8260BFA0);
PPC_FUNC_IMPL(__imp__sub_8260BFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82627390
	sub_82627390(ctx, base);
	return;
}

