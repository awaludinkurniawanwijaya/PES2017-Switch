#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831F3AD4"))) PPC_WEAK_FUNC(sub_831F3AD4);
PPC_FUNC_IMPL(__imp__sub_831F3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3AD8"))) PPC_WEAK_FUNC(sub_831F3AD8);
PPC_FUNC_IMPL(__imp__sub_831F3AD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F3AE8"))) PPC_WEAK_FUNC(sub_831F3AE8);
PPC_FUNC_IMPL(__imp__sub_831F3AE8) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ld r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bne 0x831f3b50
	if (!cr0.eq) goto loc_831F3B50;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f3b50
	if (cr6.eq) goto loc_831F3B50;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_831F3B38:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831f3b38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F3B38;
loc_831F3B50:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F3B58;
	sub_83A77A38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f3b70
	if (!cr0.eq) goto loc_831F3B70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// b 0x831f3b80
	goto loc_831F3B80;
loc_831F3B70:
	// bl 0x824ce1d8
	ctx.lr = 0x831F3B74;
	sub_824CE1D8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F3B80:
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

__attribute__((alias("__imp__sub_831F3B98"))) PPC_WEAK_FUNC(sub_831F3B98);
PPC_FUNC_IMPL(__imp__sub_831F3B98) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f3bc4
	if (cr6.eq) goto loc_831F3BC4;
	// bl 0x83a777f8
	ctx.lr = 0x831F3BBC;
	sub_83A777F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F3BC4:
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

__attribute__((alias("__imp__sub_831F3BD8"))) PPC_WEAK_FUNC(sub_831F3BD8);
PPC_FUNC_IMPL(__imp__sub_831F3BD8) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3c08
	if (!cr6.eq) goto loc_831F3C08;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19240
	ctx.r4.s64 = ctx.r11.s64 + 19240;
	// bl 0x831ea3f0
	ctx.lr = 0x831F3C00;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f3c0c
	goto loc_831F3C0C;
loc_831F3C08:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_831F3C0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F3C1C"))) PPC_WEAK_FUNC(sub_831F3C1C);
PPC_FUNC_IMPL(__imp__sub_831F3C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3C20"))) PPC_WEAK_FUNC(sub_831F3C20);
PPC_FUNC_IMPL(__imp__sub_831F3C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F3C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3C48;
	sub_83A77098(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3C5C;
	sub_83A77098(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne 0x831f3c78
	if (!cr0.eq) goto loc_831F3C78;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f3c78
	if (cr6.eq) goto loc_831F3C78;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F3C78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3C84"))) PPC_WEAK_FUNC(sub_831F3C84);
PPC_FUNC_IMPL(__imp__sub_831F3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3C88"))) PPC_WEAK_FUNC(sub_831F3C88);
PPC_FUNC_IMPL(__imp__sub_831F3C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F3C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3CB0;
	sub_83A77098(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83a77098
	ctx.lr = 0x831F3CC4;
	sub_83A77098(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a77240
	ctx.lr = 0x831F3CD8;
	sub_83A77240(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F3CEC;
	sub_83A77240(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3d0c
	if (!cr6.eq) goto loc_831F3D0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f3d0c
	if (cr6.eq) goto loc_831F3D0C;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F3D0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3D18"))) PPC_WEAK_FUNC(sub_831F3D18);
PPC_FUNC_IMPL(__imp__sub_831F3D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F3D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3D40;
	sub_83A77098(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83a77098
	ctx.lr = 0x831F3D54;
	sub_83A77098(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3D68;
	sub_83A77098(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3d88
	if (!cr6.eq) goto loc_831F3D88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f3d88
	if (cr6.eq) goto loc_831F3D88;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F3D88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3D94"))) PPC_WEAK_FUNC(sub_831F3D94);
PPC_FUNC_IMPL(__imp__sub_831F3D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3D98"))) PPC_WEAK_FUNC(sub_831F3D98);
PPC_FUNC_IMPL(__imp__sub_831F3D98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F3DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831f3dd0
	if (!cr6.eq) goto loc_831F3DD0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,19356
	ctx.r4.s64 = ctx.r11.s64 + 19356;
loc_831F3DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F3DC8;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f3ed4
	goto loc_831F3ED4;
loc_831F3DD0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bgt cr6,0x831f3de8
	if (cr6.gt) goto loc_831F3DE8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,19280
	ctx.r4.s64 = ctx.r11.s64 + 19280;
	// b 0x831f3dc0
	goto loc_831F3DC0;
loc_831F3DE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F3DF8;
	sub_83A77240(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F3E0C;
	sub_83A77240(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3E20;
	sub_83A77098(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3E34;
	sub_83A77098(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77188
	ctx.lr = 0x831F3E48;
	sub_83A77188(ctx, base);
	// addi r11,r3,2048
	ctx.r11.s64 = ctx.r3.s64 + 2048;
	// li r5,5
	ctx.r5.s64 = 5;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3E60;
	sub_83A77098(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F3E74;
	sub_83A77240(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a76f48
	ctx.lr = 0x831F3E80;
	sub_83A76F48(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// ble cr6,0x831f3ea4
	if (!cr6.gt) goto loc_831F3EA4;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F3E9C;
	sub_83A77098(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x831f3ea8
	goto loc_831F3EA8;
loc_831F3EA4:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_831F3EA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3eb8
	if (!cr6.eq) goto loc_831F3EB8;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_831F3EB8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831f3ed0
	if (!cr6.eq) goto loc_831F3ED0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f3ed0
	if (cr6.eq) goto loc_831F3ED0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F3ED0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F3ED4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3EDC"))) PPC_WEAK_FUNC(sub_831F3EDC);
PPC_FUNC_IMPL(__imp__sub_831F3EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3EE0"))) PPC_WEAK_FUNC(sub_831F3EE0);
PPC_FUNC_IMPL(__imp__sub_831F3EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831F3EE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x831f3bd8
	ctx.lr = 0x831F3EFC;
	sub_831F3BD8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x831f3f54
	if (!cr0.gt) goto loc_831F3F54;
loc_831F3F08:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F3F18;
	sub_83A77240(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a77240
	ctx.lr = 0x831F3F2C;
	sub_83A77240(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831f39a8
	ctx.lr = 0x831F3F40;
	sub_831F39A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f3f60
	if (cr0.eq) goto loc_831F3F60;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// blt cr6,0x831f3f08
	if (cr6.lt) goto loc_831F3F08;
loc_831F3F54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F3F58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831F3F60:
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f3d98
	ctx.lr = 0x831F3F78;
	sub_831F3D98(ctx, base);
	// b 0x831f3f58
	goto loc_831F3F58;
}

__attribute__((alias("__imp__sub_831F3F7C"))) PPC_WEAK_FUNC(sub_831F3F7C);
PPC_FUNC_IMPL(__imp__sub_831F3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3F80"))) PPC_WEAK_FUNC(sub_831F3F80);
PPC_FUNC_IMPL(__imp__sub_831F3F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F3F88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x831f3bd8
	ctx.lr = 0x831F3F9C;
	sub_831F3BD8(ctx, base);
	// addi r27,r3,-1
	ctx.r27.s64 = ctx.r3.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// srawi r11,r27,1
	xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// b 0x831f3fe4
	goto loc_831F3FE4;
loc_831F3FAC:
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, xer);
	// bge cr6,0x831f4044
	if (!cr6.lt) goto loc_831F4044;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x831f3fd8
	if (!cr6.lt) goto loc_831F3FD8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x831f3fd0
	if (!cr6.gt) goto loc_831F3FD0;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// beq cr6,0x831f4044
	if (cr6.eq) goto loc_831F4044;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_831F3FD0:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x831f3fdc
	goto loc_831F3FDC;
loc_831F3FD8:
	// addi r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 1;
loc_831F3FDC:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
loc_831F3FE4:
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F3FF8;
	sub_83A77240(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a77240
	ctx.lr = 0x831F400C;
	sub_83A77240(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f39a8
	ctx.lr = 0x831F4020;
	sub_831F39A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f3fac
	if (!cr0.eq) goto loc_831F3FAC;
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f3d98
	ctx.lr = 0x831F4040;
	sub_831F3D98(ctx, base);
	// b 0x831f4048
	goto loc_831F4048;
loc_831F4044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F4048:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F4050"))) PPC_WEAK_FUNC(sub_831F4050);
PPC_FUNC_IMPL(__imp__sub_831F4050) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F407C"))) PPC_WEAK_FUNC(sub_831F407C);
PPC_FUNC_IMPL(__imp__sub_831F407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4080"))) PPC_WEAK_FUNC(sub_831F4080);
PPC_FUNC_IMPL(__imp__sub_831F4080) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f40b0
	if (cr6.eq) goto loc_831F40B0;
	// bl 0x83a777f8
	ctx.lr = 0x831F40AC;
	sub_83A777F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F40B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f40c4
	if (cr6.eq) goto loc_831F40C4;
	// bl 0x83a777f8
	ctx.lr = 0x831F40C0;
	sub_83A777F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_831F40C4:
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

__attribute__((alias("__imp__sub_831F40DC"))) PPC_WEAK_FUNC(sub_831F40DC);
PPC_FUNC_IMPL(__imp__sub_831F40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F40E0"))) PPC_WEAK_FUNC(sub_831F40E0);
PPC_FUNC_IMPL(__imp__sub_831F40E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831F40E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r11,r5,r25
	ctx.r11.u64 = ctx.r5.u64 + ctx.r25.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bgt cr6,0x831f4118
	if (cr6.gt) goto loc_831F4118;
loc_831F4110:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// b 0x831f41e0
	goto loc_831F41E0;
loc_831F4118:
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// srawi r11,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// b 0x831f4170
	goto loc_831F4170;
loc_831F4124:
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bge cr6,0x831f419c
	if (!cr6.lt) goto loc_831F419C;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// ble cr6,0x831f4158
	if (!cr6.gt) goto loc_831F4158;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f4150
	if (cr6.eq) goto loc_831F4150;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x831f419c
	if (cr6.eq) goto loc_831F419C;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_831F4150:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x831f4160
	goto loc_831F4160;
loc_831F4158:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
loc_831F4160:
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
loc_831F4170:
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F4188;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bne cr6,0x831f4124
	if (!cr6.eq) goto loc_831F4124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f41e0
	goto loc_831F41E0;
loc_831F419C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831f41ac
	if (!cr6.eq) goto loc_831F41AC;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bgt cr6,0x831f4110
	if (cr6.gt) goto loc_831F4110;
loc_831F41AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f41d8
	if (cr6.eq) goto loc_831F41D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F41C4;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// ble cr6,0x831f41d8
	if (!cr6.gt) goto loc_831F41D8;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_831F41D8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// subfic r3,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r3.s64 = -1 - ctx.r11.s64;
loc_831F41E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F41E8"))) PPC_WEAK_FUNC(sub_831F41E8);
PPC_FUNC_IMPL(__imp__sub_831F41E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F41F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// subfic r24,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r24.s64 = -1 - ctx.r11.s64;
	// ble cr6,0x831f425c
	if (!cr6.gt) goto loc_831F425C;
	// clrldi r26,r24,32
	ctx.r26.u64 = ctx.r24.u64 & 0xFFFFFFFF;
loc_831F422C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F423C;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x831f422c
	if (cr6.lt) goto loc_831F422C;
loc_831F425C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x831f4298
	if (!cr6.gt) goto loc_831F4298;
	// clrldi r28,r24,32
	ctx.r28.u64 = ctx.r24.u64 & 0xFFFFFFFF;
loc_831F426C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F427C;
	sub_83A77098(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpw cr6,r31,r25
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, xer);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x831f426c
	if (cr6.lt) goto loc_831F426C;
loc_831F4298:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F42A4"))) PPC_WEAK_FUNC(sub_831F42A4);
PPC_FUNC_IMPL(__imp__sub_831F42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F42A8"))) PPC_WEAK_FUNC(sub_831F42A8);
PPC_FUNC_IMPL(__imp__sub_831F42A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831F42B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// subfic r23,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r23.s64 = -1 - ctx.r11.s64;
	// rlwinm r26,r8,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x831f4360
	if (cr6.eq) goto loc_831F4360;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831f4360
	if (cr6.eq) goto loc_831F4360;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f4360
	if (cr6.lt) goto loc_831F4360;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// twllei r8,0
	// divw r7,r11,r8
	ctx.r7.s32 = PPCDivide(ctx.r11.s32, ctx.r8.s32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// divw r6,r11,r8
	ctx.r6.s32 = PPCDivide(ctx.r11.s32, ctx.r8.s32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// subf r6,r26,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r26.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// twllei r8,0
	// twlgei r7,-1
	// ldx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// twlgei r9,-1
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x831f4364
	goto loc_831F4364;
loc_831F4360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F4364:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bge cr6,0x831f43a4
	if (!cr6.lt) goto loc_831F43A4;
	// clrldi r27,r23,32
	ctx.r27.u64 = ctx.r23.u64 & 0xFFFFFFFF;
loc_831F4374:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F4384;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x831f4374
	if (cr6.lt) goto loc_831F4374;
loc_831F43A4:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831f441c
	if (cr6.eq) goto loc_831F441C;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831f441c
	if (cr6.eq) goto loc_831F441C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f441c
	if (cr6.lt) goto loc_831F441C;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// divw r7,r11,r8
	ctx.r7.s32 = PPCDivide(ctx.r11.s32, ctx.r8.s32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// divw r6,r11,r8
	ctx.r6.s32 = PPCDivide(ctx.r11.s32, ctx.r8.s32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// subf r6,r26,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r26.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// andc r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// twlgei r10,-1
	// twllei r8,0
	// ldx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r9.u32);
	// twllei r8,0
	// twlgei r7,-1
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x831f4420
	goto loc_831F4420;
loc_831F441C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F4420:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bge cr6,0x831f445c
	if (!cr6.lt) goto loc_831F445C;
	// clrldi r28,r23,32
	ctx.r28.u64 = ctx.r23.u64 & 0xFFFFFFFF;
loc_831F4430:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F4440;
	sub_83A77098(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpw cr6,r29,r25
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, xer);
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x831f4430
	if (cr6.lt) goto loc_831F4430;
loc_831F445C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F4468"))) PPC_WEAK_FUNC(sub_831F4468);
PPC_FUNC_IMPL(__imp__sub_831F4468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831F4470;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r31,r29,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x831f44d0
	goto loc_831F44D0;
loc_831F4498:
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// bge cr6,0x831f4514
	if (!cr6.lt) goto loc_831F4514;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// ble cr6,0x831f44c4
	if (!cr6.gt) goto loc_831F44C4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f44bc
	if (cr6.eq) goto loc_831F44BC;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x831f4514
	if (cr6.eq) goto loc_831F4514;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_831F44BC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x831f44c8
	goto loc_831F44C8;
loc_831F44C4:
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
loc_831F44C8:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_831F44D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77180
	ctx.lr = 0x831F44E0;
	sub_83A77180(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// bne cr6,0x831f4498
	if (!cr6.eq) goto loc_831F4498;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F44F8;
	sub_83A77098(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f3d98
	ctx.lr = 0x831F4508;
	sub_831F3D98(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x831f4518
	goto loc_831F4518;
loc_831F4514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F4518:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F4520"))) PPC_WEAK_FUNC(sub_831F4520);
PPC_FUNC_IMPL(__imp__sub_831F4520) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// twllei r4,0
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r4
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r4.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// andc r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F454C"))) PPC_WEAK_FUNC(sub_831F454C);
PPC_FUNC_IMPL(__imp__sub_831F454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4550"))) PPC_WEAK_FUNC(sub_831F4550);
PPC_FUNC_IMPL(__imp__sub_831F4550) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F4580"))) PPC_WEAK_FUNC(sub_831F4580);
PPC_FUNC_IMPL(__imp__sub_831F4580) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F458C"))) PPC_WEAK_FUNC(sub_831F458C);
PPC_FUNC_IMPL(__imp__sub_831F458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4590"))) PPC_WEAK_FUNC(sub_831F4590);
PPC_FUNC_IMPL(__imp__sub_831F4590) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f45c0
	if (cr6.eq) goto loc_831F45C0;
	// bl 0x83a777f8
	ctx.lr = 0x831F45BC;
	sub_83A777F8(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_831F45C0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f45d4
	if (cr6.eq) goto loc_831F45D4;
	// bl 0x83a777f8
	ctx.lr = 0x831F45D0;
	sub_83A777F8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_831F45D4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f45e8
	if (cr6.eq) goto loc_831F45E8;
	// bl 0x83a777f8
	ctx.lr = 0x831F45E4;
	sub_83A777F8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_831F45E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f45fc
	if (cr6.eq) goto loc_831F45FC;
	// bl 0x83a777f8
	ctx.lr = 0x831F45F8;
	sub_83A777F8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F45FC:
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

__attribute__((alias("__imp__sub_831F4614"))) PPC_WEAK_FUNC(sub_831F4614);
PPC_FUNC_IMPL(__imp__sub_831F4614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4618"))) PPC_WEAK_FUNC(sub_831F4618);
PPC_FUNC_IMPL(__imp__sub_831F4618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x831F4620;
	__savegprlr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,80(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 80);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r10,-16
	ctx.r5.s64 = ctx.r10.s64 + -16;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lhz r10,128(r19)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r19.u32 + 128);
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f4690
	if (!cr0.eq) goto loc_831F4690;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f4690
	if (cr6.eq) goto loc_831F4690;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_831F4678:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831f4678
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F4678;
loc_831F4690:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F4698;
	sub_83A77A38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831f46b0
	if (!cr0.eq) goto loc_831F46B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r19)
	PPC_STORE_U32(ctx.r19.u32 + 96, ctx.r11.u32);
	// b 0x831f4874
	goto loc_831F4874;
loc_831F46B0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19424
	ctx.r4.s64 = ctx.r11.s64 + 19424;
	// bl 0x83a76f50
	ctx.lr = 0x831F46C0;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// li r20,0
	ctx.r20.s64 = 0;
	// bge 0x831f46d8
	if (!cr0.lt) goto loc_831F46D8;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// b 0x831f46f0
	goto loc_831F46F0;
loc_831F46D8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F46E8;
	sub_83A77668(ctx, base);
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831F46F0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19416
	ctx.r4.s64 = ctx.r11.s64 + 19416;
	// bl 0x83a76f50
	ctx.lr = 0x831F4700;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f4714
	if (!cr0.lt) goto loc_831F4714;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// b 0x831f472c
	goto loc_831F472C;
loc_831F4714:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F4724;
	sub_83A77668(ctx, base);
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_831F472C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19404
	ctx.r4.s64 = ctx.r11.s64 + 19404;
	// bl 0x83a76f50
	ctx.lr = 0x831F473C;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f4750
	if (!cr0.lt) goto loc_831F4750;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// b 0x831f4768
	goto loc_831F4768;
loc_831F4750:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F4760;
	sub_83A77668(ctx, base);
	// lwz r27,156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_831F4768:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19392
	ctx.r4.s64 = ctx.r11.s64 + 19392;
	// bl 0x83a76f50
	ctx.lr = 0x831F4778;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f478c
	if (!cr0.lt) goto loc_831F478C;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x831f47a4
	goto loc_831F47A4;
loc_831F478C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F479C;
	sub_83A77668(ctx, base);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_831F47A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x831F47AC;
	sub_83A777F8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F47BC;
	sub_83A77A38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne 0x831f47dc
	if (!cr0.eq) goto loc_831F47DC;
loc_831F47C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f4590
	ctx.lr = 0x831F47D0;
	sub_831F4590(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r20,96(r19)
	PPC_STORE_U32(ctx.r19.u32 + 96, ctx.r20.u32);
	// b 0x831f4874
	goto loc_831F4874;
loc_831F47DC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F47EC;
	sub_83A77A38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq 0x831f47c8
	if (cr0.eq) goto loc_831F47C8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F4808;
	sub_83A77A38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// beq 0x831f47c8
	if (cr0.eq) goto loc_831F47C8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824ce1d8
	ctx.lr = 0x831F481C;
	sub_824CE1D8(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x824ce1d8
	ctx.lr = 0x831F4828;
	sub_824CE1D8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x824ce1d8
	ctx.lr = 0x831F4834;
	sub_824CE1D8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x831f4868
	if (!cr6.gt) goto loc_831F4868;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F4850;
	sub_83A77A38(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f47c8
	if (cr0.eq) goto loc_831F47C8;
	// bl 0x824ce1d8
	ctx.lr = 0x831F4860;
	sub_824CE1D8(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// b 0x831f4870
	goto loc_831F4870;
loc_831F4868:
	// stw r20,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r20.u32);
	// stw r20,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r20.u32);
loc_831F4870:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F4874:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F487C"))) PPC_WEAK_FUNC(sub_831F487C);
PPC_FUNC_IMPL(__imp__sub_831F487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4880"))) PPC_WEAK_FUNC(sub_831F4880);
PPC_FUNC_IMPL(__imp__sub_831F4880) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f4590
	sub_831F4590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F4884"))) PPC_WEAK_FUNC(sub_831F4884);
PPC_FUNC_IMPL(__imp__sub_831F4884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4888"))) PPC_WEAK_FUNC(sub_831F4888);
PPC_FUNC_IMPL(__imp__sub_831F4888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F4890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a77240
	ctx.lr = 0x831F48B0;
	sub_83A77240(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83a77180
	ctx.lr = 0x831F48C4;
	sub_83A77180(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a77180
	ctx.lr = 0x831F48D8;
	sub_83A77180(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F48E8"))) PPC_WEAK_FUNC(sub_831F48E8);
PPC_FUNC_IMPL(__imp__sub_831F48E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F48F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x831f4924
	if (cr6.lt) goto loc_831F4924;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x831f49c4
	goto loc_831F49C4;
loc_831F4924:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,129(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 129);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831f4988
	if (!cr0.eq) goto loc_831F4988;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F4944;
	sub_83A76FC8(ctx, base);
	// sth r3,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r3.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77180
	ctx.lr = 0x831F4958;
	sub_83A77180(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77180
	ctx.lr = 0x831F496C;
	sub_83A77180(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77180
	ctx.lr = 0x831F4980;
	sub_83A77180(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// b 0x831f49c4
	goto loc_831F49C4;
loc_831F4988:
	// lhz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x831f49b0
	if (cr0.eq) goto loc_831F49B0;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// b 0x831f49c0
	goto loc_831F49C0;
loc_831F49B0:
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
loc_831F49C0:
	// bl 0x831ce980
	ctx.lr = 0x831F49C4;
	sub_831CE980(ctx, base);
loc_831F49C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F49D0"))) PPC_WEAK_FUNC(sub_831F49D0);
PPC_FUNC_IMPL(__imp__sub_831F49D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831F49D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x831f4a00
	if (cr6.eq) goto loc_831F4A00;
	// stw r25,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r25.u32);
loc_831F4A00:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x831f4a1c
	if (!cr6.eq) goto loc_831F4A1C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x831f4abc
	goto loc_831F4ABC;
loc_831F4A1C:
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F4A28;
	sub_839F8330(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f4ab8
	if (!cr6.gt) goto loc_831F4AB8;
loc_831F4A3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F4A4C;
	sub_83A77240(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x831f4aa8
	if (cr0.eq) goto loc_831F4AA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F4A5C;
	sub_839F8330(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bne cr6,0x831f4aa8
	if (!cr6.eq) goto loc_831F4AA8;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f4a9c
	if (cr6.eq) goto loc_831F4A9C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// subf r7,r29,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r29.s64;
loc_831F4A78:
	// lbzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x831f3920
	ctx.lr = 0x831F4A84;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f4aa0
	if (!cr0.eq) goto loc_831F4AA0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// blt cr6,0x831f4a78
	if (cr6.lt) goto loc_831F4A78;
loc_831F4A9C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_831F4AA0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831f4ac4
	if (cr6.eq) goto loc_831F4AC4;
loc_831F4AA8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f4a3c
	if (cr6.lt) goto loc_831F4A3C;
loc_831F4AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F4ABC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_831F4AC4:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83a76fc8
	ctx.lr = 0x831F4AD8;
	sub_83A76FC8(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bgt 0x831f4aec
	if (cr0.gt) goto loc_831F4AEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_831F4AEC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831f4af8
	if (cr6.eq) goto loc_831F4AF8;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
loc_831F4AF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f4abc
	goto loc_831F4ABC;
}

__attribute__((alias("__imp__sub_831F4B00"))) PPC_WEAK_FUNC(sub_831F4B00);
PPC_FUNC_IMPL(__imp__sub_831F4B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F4B08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f4b38
	if (cr6.lt) goto loc_831F4B38;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x831f4b64
	goto loc_831F4B64;
loc_831F4B38:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F4B48;
	sub_83A77240(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F4B5C;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F4B64:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F4B70"))) PPC_WEAK_FUNC(sub_831F4B70);
PPC_FUNC_IMPL(__imp__sub_831F4B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F4B78;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831f4b98
	if (!cr6.eq) goto loc_831F4B98;
loc_831F4B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f4c9c
	goto loc_831F4C9C;
loc_831F4B98:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f4b90
	if (cr0.eq) goto loc_831F4B90;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F4BAC;
	sub_839F8330(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f4888
	ctx.lr = 0x831F4BC0;
	sub_831F4888(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// neg r27,r11
	ctx.r27.s64 = -ctx.r11.s64;
loc_831F4BC8:
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x831f4bdc
	if (!cr6.eq) goto loc_831F4BDC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_831F4BDC:
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// add r29,r28,r26
	ctx.r29.u64 = ctx.r28.u64 + ctx.r26.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x831f4c98
	if (cr6.eq) goto loc_831F4C98;
loc_831F4BF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f4c0c
	if (cr6.eq) goto loc_831F4C0C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x831f4bf0
	if (!cr6.eq) goto loc_831F4BF0;
loc_831F4C0C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831f4c98
	if (cr6.eq) goto loc_831F4C98;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x831f4c98
	if (!cr6.gt) goto loc_831F4C98;
loc_831F4C1C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f4888
	ctx.lr = 0x831F4C2C;
	sub_831F4888(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F4C38;
	sub_839F8330(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bne cr6,0x831f4c88
	if (!cr6.eq) goto loc_831F4C88;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f4c7c
	if (cr6.eq) goto loc_831F4C7C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// subf r6,r31,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_831F4C58:
	// lbzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// bl 0x831f3920
	ctx.lr = 0x831F4C64;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f4c80
	if (!cr0.eq) goto loc_831F4C80;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// blt cr6,0x831f4c58
	if (cr6.lt) goto loc_831F4C58;
loc_831F4C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F4C80:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831f4ca4
	if (cr6.eq) goto loc_831F4CA4;
loc_831F4C88:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831f4c1c
	if (cr6.gt) goto loc_831F4C1C;
loc_831F4C98:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F4C9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_831F4CA4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x831f4cc8
	if (!cr6.lt) goto loc_831F4CC8;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x831f4cc8
	if (!cr6.lt) goto loc_831F4CC8;
	// neg r27,r10
	ctx.r27.s64 = -ctx.r10.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x831f4bc8
	goto loc_831F4BC8;
loc_831F4CC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x831f4c9c
	goto loc_831F4C9C;
}

__attribute__((alias("__imp__sub_831F4CD0"))) PPC_WEAK_FUNC(sub_831F4CD0);
PPC_FUNC_IMPL(__imp__sub_831F4CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x831F4CD8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// lhz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 24);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,19208
	ctx.r10.s64 = ctx.r10.s64 + 19208;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r25,r9,r8
	ctx.r25.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// bctrl 
	ctx.lr = 0x831F4D38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f4d48
	if (!cr0.eq) goto loc_831F4D48;
loc_831F4D40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f4ef4
	goto loc_831F4EF4;
loc_831F4D48:
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x831f4d70
	if (cr0.eq) goto loc_831F4D70;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f39a8
	ctx.lr = 0x831F4D64;
	sub_831F39A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f4d88
	if (cr0.eq) goto loc_831F4D88;
	// b 0x831f4d40
	goto loc_831F4D40;
loc_831F4D70:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831f4d90
	if (cr0.eq) goto loc_831F4D90;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831f4d40
	if (!cr6.eq) goto loc_831F4D40;
loc_831F4D88:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x831f4d94
	goto loc_831F4D94;
loc_831F4D90:
	// li r31,1
	ctx.r31.s64 = 1;
loc_831F4D94:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f4da8
	if (!cr6.gt) goto loc_831F4DA8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
loc_831F4DA8:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// bne cr6,0x831f4dc8
	if (!cr6.eq) goto loc_831F4DC8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f4b00
	ctx.lr = 0x831F4DC4;
	sub_831F4B00(ctx, base);
	// lwz r30,300(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
loc_831F4DC8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x831f4e04
	if (cr6.eq) goto loc_831F4E04;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x831f4e04
	if (!cr6.eq) goto loc_831F4E04;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831f4e04
	if (cr6.eq) goto loc_831F4E04;
	// li r22,1
	ctx.r22.s64 = 1;
loc_831F4E04:
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831f4ed0
	if (cr6.eq) goto loc_831F4ED0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// stw r25,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r25.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// stw r10,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r10.u32);
	// bne cr6,0x831f4e50
	if (!cr6.eq) goto loc_831F4E50;
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// b 0x831f4e64
	goto loc_831F4E64;
loc_831F4E50:
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_831F4E64:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x831f4ed0
	if (cr6.eq) goto loc_831F4ED0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831f4ed0
	if (!cr6.eq) goto loc_831F4ED0;
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r6,r9
	cr6.compare<int64_t>(ctx.r6.s64, ctx.r9.s64, xer);
	// blt cr6,0x831f4ed0
	if (cr6.lt) goto loc_831F4ED0;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x831f4ed0
	if (cr6.lt) goto loc_831F4ED0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831f4ed0
	if (!cr6.eq) goto loc_831F4ED0;
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_831F4ED0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r7,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r7.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
loc_831F4EF4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F4EFC"))) PPC_WEAK_FUNC(sub_831F4EFC);
PPC_FUNC_IMPL(__imp__sub_831F4EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F4F00"))) PPC_WEAK_FUNC(sub_831F4F00);
PPC_FUNC_IMPL(__imp__sub_831F4F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F4F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x831f4888
	ctx.lr = 0x831F4F2C;
	sub_831F4888(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831f4f50
	if (cr6.eq) goto loc_831F4F50;
	// neg r10,r30
	ctx.r10.s64 = -ctx.r30.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831f4f50
	if (!cr6.eq) goto loc_831F4F50;
loc_831F4F48:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f4ff8
	goto loc_831F4FF8;
loc_831F4F50:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x831f4f60
	if (!cr6.eq) goto loc_831F4F60;
loc_831F4F58:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f4ff8
	goto loc_831F4FF8;
loc_831F4F60:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x831f4f8c
	if (!cr6.lt) goto loc_831F4F8C;
	// neg r10,r8
	ctx.r10.s64 = -ctx.r8.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// bne cr6,0x831f4f8c
	if (!cr6.eq) goto loc_831F4F8C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x831f4f58
	if (!cr6.lt) goto loc_831F4F58;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831f4f48
	if (cr6.eq) goto loc_831F4F48;
loc_831F4F8C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x831f4fec
	if (!cr6.lt) goto loc_831F4FEC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831f4fcc
	if (cr6.eq) goto loc_831F4FCC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x831f4fcc
	if (!cr6.eq) goto loc_831F4FCC;
	// srawi r11,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// xor r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// subf r3,r11,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x831f4ff8
	goto loc_831F4FF8;
loc_831F4FCC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// b 0x831f4ff8
	goto loc_831F4FF8;
loc_831F4FEC:
	// srawi r11,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// xor r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_831F4FF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F5000"))) PPC_WEAK_FUNC(sub_831F5000);
PPC_FUNC_IMPL(__imp__sub_831F5000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831F5008;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// std r20,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r20.u64);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f50c0
	if (cr6.eq) goto loc_831F50C0;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r7,72
	ctx.r4.s64 = ctx.r7.s64 + 72;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// ld r9,48(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// ld r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 56);
	// lwz r16,20(r7)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r25,24(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r26,28(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r19,32(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r15,36(r7)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r24,40(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r28,44(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// lwz r18,64(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r17,68(r7)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// bl 0x831ce980
	ctx.lr = 0x831F50A4;
	sub_831CE980(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r22,140(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r21,144(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x831f51cc
	goto loc_831F51CC;
loc_831F50C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// li r15,-1
	ctx.r15.s64 = -1;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f50e8
	if (!cr6.eq) goto loc_831F50E8;
loc_831F50E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f5320
	goto loc_831F5320;
loc_831F50E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f49d0
	ctx.lr = 0x831F5100;
	sub_831F49D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f50e0
	if (cr0.eq) goto loc_831F50E0;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// bgt cr6,0x831f5124
	if (cr6.gt) goto loc_831F5124;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x831f4b70
	ctx.lr = 0x831F511C;
	sub_831F4B70(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// blt 0x831f50e0
	if (cr0.lt) goto loc_831F50E0;
loc_831F5124:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// bl 0x831f4888
	ctx.lr = 0x831F5138;
	sub_831F4888(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r16,120(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r17,r10,1,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831F5150:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f4f00
	ctx.lr = 0x831F5170;
	sub_831F4F00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// blt cr6,0x831f5308
	if (cr6.lt) goto loc_831F5308;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831f52f8
	if (cr6.lt) goto loc_831F52F8;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_831F518C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f48e8
	ctx.lr = 0x831F519C;
	sub_831F48E8(ctx, base);
	// lhz r11,162(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, xer);
	// neg r29,r10
	ctx.r29.s64 = -ctx.r10.s64;
	// lwz r21,164(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// beq cr6,0x831f51bc
	if (cr6.eq) goto loc_831F51BC;
	// cmpwi cr6,r16,-1
	cr6.compare<int32_t>(ctx.r16.s32, -1, xer);
	// bne cr6,0x831f52e8
	if (!cr6.eq) goto loc_831F52E8;
loc_831F51BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f5328
	if (!cr6.lt) goto loc_831F5328;
loc_831F51CC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x831f48e8
	ctx.lr = 0x831F51E8;
	sub_831F48E8(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f5278
	if (cr6.eq) goto loc_831F5278;
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpw cr6,r19,r10
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r10.s32, xer);
	// bge cr6,0x831f50e0
	if (!cr6.lt) goto loc_831F50E0;
	// mulli r29,r19,28
	ctx.r29.s64 = ctx.r19.s64 * 28;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lhz r9,162(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f4cd0
	ctx.lr = 0x831F5248;
	sub_831F4CD0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831f53ac
	if (cr6.eq) goto loc_831F53AC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831f5264
	if (cr6.eq) goto loc_831F5264;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831f526c
	if (!cr0.eq) goto loc_831F526C;
loc_831F5264:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_831F526C:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r24,r29,r11
	ctx.r24.u64 = ctx.r29.u64 + ctx.r11.u64;
	// b 0x831f52c0
	goto loc_831F52C0;
loc_831F5278:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r9,162(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f4cd0
	ctx.lr = 0x831F52B8;
	sub_831F4CD0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831f53ac
	if (cr6.eq) goto loc_831F53AC;
loc_831F52C0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f52d0
	if (!cr6.lt) goto loc_831F52D0;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
loc_831F52D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831f52dc
	if (cr6.eq) goto loc_831F52DC;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_831F52DC:
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x831f51bc
	if (cr6.gt) goto loc_831F51BC;
loc_831F52E8:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x831f52f8
	if (!cr6.gt) goto loc_831F52F8;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x831f518c
	goto loc_831F518C;
loc_831F52F8:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x831f5308
	if (!cr6.gt) goto loc_831F5308;
	// cmpw cr6,r18,r26
	cr6.compare<int32_t>(ctx.r18.s32, ctx.r26.s32, xer);
	// bne cr6,0x831f5150
	if (!cr6.eq) goto loc_831F5150;
loc_831F5308:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// ble cr6,0x831f531c
	if (!cr6.gt) goto loc_831F531C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831F531C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_831F5320:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_831F5328:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r16,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r16.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// stw r15,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r15.u32);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// stw r18,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r18.u32);
	// stw r17,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r17.u32);
	// bl 0x831ce980
	ctx.lr = 0x831F5388;
	sub_831CE980(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r22.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r21,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r21.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x831f5320
	goto loc_831F5320;
loc_831F53AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f5320
	goto loc_831F5320;
}

__attribute__((alias("__imp__sub_831F53B4"))) PPC_WEAK_FUNC(sub_831F53B4);
PPC_FUNC_IMPL(__imp__sub_831F53B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F53B8"))) PPC_WEAK_FUNC(sub_831F53B8);
PPC_FUNC_IMPL(__imp__sub_831F53B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// std r11,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F53E4"))) PPC_WEAK_FUNC(sub_831F53E4);
PPC_FUNC_IMPL(__imp__sub_831F53E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F53E8"))) PPC_WEAK_FUNC(sub_831F53E8);
PPC_FUNC_IMPL(__imp__sub_831F53E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,2088
	ctx.r3.s64 = ctx.r3.s64 + 2088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F53F0"))) PPC_WEAK_FUNC(sub_831F53F0);
PPC_FUNC_IMPL(__imp__sub_831F53F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f5404
	if (cr6.eq) goto loc_831F5404;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_831F5404:
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F540C"))) PPC_WEAK_FUNC(sub_831F540C);
PPC_FUNC_IMPL(__imp__sub_831F540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F5410"))) PPC_WEAK_FUNC(sub_831F5410);
PPC_FUNC_IMPL(__imp__sub_831F5410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5418"))) PPC_WEAK_FUNC(sub_831F5418);
PPC_FUNC_IMPL(__imp__sub_831F5418) {
	PPC_FUNC_PROLOGUE();
	// ld r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5420"))) PPC_WEAK_FUNC(sub_831F5420);
PPC_FUNC_IMPL(__imp__sub_831F5420) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x831f3ae8
	sub_831F3AE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F5434"))) PPC_WEAK_FUNC(sub_831F5434);
PPC_FUNC_IMPL(__imp__sub_831F5434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F5438"))) PPC_WEAK_FUNC(sub_831F5438);
PPC_FUNC_IMPL(__imp__sub_831F5438) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x831f4618
	sub_831F4618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F544C"))) PPC_WEAK_FUNC(sub_831F544C);
PPC_FUNC_IMPL(__imp__sub_831F544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F5450"))) PPC_WEAK_FUNC(sub_831F5450);
PPC_FUNC_IMPL(__imp__sub_831F5450) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,130(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 130);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5458"))) PPC_WEAK_FUNC(sub_831F5458);
PPC_FUNC_IMPL(__imp__sub_831F5458) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5460"))) PPC_WEAK_FUNC(sub_831F5460);
PPC_FUNC_IMPL(__imp__sub_831F5460) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,143(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 143);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5468"))) PPC_WEAK_FUNC(sub_831F5468);
PPC_FUNC_IMPL(__imp__sub_831F5468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r11,r11,19104
	ctx.r11.s64 = ctx.r11.s64 + 19104;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,5416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5484"))) PPC_WEAK_FUNC(sub_831F5484);
PPC_FUNC_IMPL(__imp__sub_831F5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F5488"))) PPC_WEAK_FUNC(sub_831F5488);
PPC_FUNC_IMPL(__imp__sub_831F5488) {
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
	ctx.lr = 0x831F5490;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x831f54d8
	if (!cr6.eq) goto loc_831F54D8;
	// lbz r10,1(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r10,80
	cr6.compare<uint32_t>(ctx.r10.u32, 80, xer);
	// bne cr6,0x831f54d8
	if (!cr6.eq) goto loc_831F54D8;
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r10,75
	cr6.compare<uint32_t>(ctx.r10.u32, 75, xer);
	// bne cr6,0x831f54d8
	if (!cr6.eq) goto loc_831F54D8;
	// lbz r10,3(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x831f54e0
	if (cr6.eq) goto loc_831F54E0;
loc_831F54D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831f5ae8
	goto loc_831F5AE8;
loc_831F54E0:
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// cmplwi cr6,r10,2048
	cr6.compare<uint32_t>(ctx.r10.u32, 2048, xer);
	// ble cr6,0x831f551c
	if (!cr6.gt) goto loc_831F551C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f5ae8
	goto loc_831F5AE8;
loc_831F551C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f5554
	if (!cr0.eq) goto loc_831F5554;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f5554
	if (cr6.eq) goto loc_831F5554;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_831F553C:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831f553c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F553C;
loc_831F5554:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F555C;
	sub_83A77A38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831f556c
	if (!cr0.eq) goto loc_831F556C;
loc_831F5564:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x831f5ae8
	goto loc_831F5AE8;
loc_831F556C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19744
	ctx.r5.s64 = ctx.r11.s64 + 19744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5580;
	sub_831F3818(ctx, base);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19728
	ctx.r5.s64 = ctx.r11.s64 + 19728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5598;
	sub_831F3818(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,19716
	ctx.r5.s64 = ctx.r10.s64 + 19716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F55B0;
	sub_831F3818(ctx, base);
	// std r3,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19704
	ctx.r5.s64 = ctx.r11.s64 + 19704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F55C8;
	sub_831F3818(ctx, base);
	// std r3,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19696
	ctx.r5.s64 = ctx.r11.s64 + 19696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F55E0;
	sub_831F3818(ctx, base);
	// std r3,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19684
	ctx.r5.s64 = ctx.r11.s64 + 19684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F55F8;
	sub_831F3818(ctx, base);
	// std r3,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19672
	ctx.r5.s64 = ctx.r11.s64 + 19672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5610;
	sub_831F3818(ctx, base);
	// std r3,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19660
	ctx.r5.s64 = ctx.r11.s64 + 19660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5628;
	sub_831F3818(ctx, base);
	// std r3,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19648
	ctx.r5.s64 = ctx.r11.s64 + 19648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5640;
	sub_831F3818(ctx, base);
	// std r3,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19636
	ctx.r5.s64 = ctx.r11.s64 + 19636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5658;
	sub_831F3818(ctx, base);
	// std r3,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19624
	ctx.r5.s64 = ctx.r11.s64 + 19624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3818
	ctx.lr = 0x831F5670;
	sub_831F3818(ctx, base);
	// std r3,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r3.u64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19616
	ctx.r5.s64 = ctx.r11.s64 + 19616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5688;
	sub_831F3870(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19608
	ctx.r5.s64 = ctx.r11.s64 + 19608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F56A0;
	sub_831F38C8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// sth r3,116(r30)
	PPC_STORE_U16(ctx.r30.u32 + 116, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19596
	ctx.r5.s64 = ctx.r11.s64 + 19596;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F56B8;
	sub_831F38C8(ctx, base);
	// sth r3,118(r30)
	PPC_STORE_U16(ctx.r30.u32 + 118, ctx.r3.u16);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19588
	ctx.r5.s64 = ctx.r11.s64 + 19588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F56D0;
	sub_831F38C8(ctx, base);
	// sth r3,128(r30)
	PPC_STORE_U16(ctx.r30.u32 + 128, ctx.r3.u16);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19580
	ctx.r5.s64 = ctx.r11.s64 + 19580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F56E8;
	sub_831F38C8(ctx, base);
	// sth r3,130(r30)
	PPC_STORE_U16(ctx.r30.u32 + 130, ctx.r3.u16);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19576
	ctx.r5.s64 = ctx.r11.s64 + 19576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F5700;
	sub_831F38C8(ctx, base);
	// sth r3,132(r30)
	PPC_STORE_U16(ctx.r30.u32 + 132, ctx.r3.u16);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19568
	ctx.r4.s64 = ctx.r11.s64 + 19568;
	// bl 0x83a76f50
	ctx.lr = 0x831F5714;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f5724
	if (!cr0.lt) goto loc_831F5724;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f5730
	goto loc_831F5730;
loc_831F5724:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F5730;
	sub_83A77240(ctx, base);
loc_831F5730:
	// stw r3,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19560
	ctx.r4.s64 = ctx.r11.s64 + 19560;
	// bl 0x83a76f50
	ctx.lr = 0x831F5744;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f5754
	if (!cr0.lt) goto loc_831F5754;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f5760
	goto loc_831F5760;
loc_831F5754:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77240
	ctx.lr = 0x831F5760;
	sub_83A77240(ctx, base);
loc_831F5760:
	// stw r3,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,19552
	ctx.r29.s64 = ctx.r11.s64 + 19552;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F5778;
	sub_83A76F50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831f5798
	if (cr0.lt) goto loc_831F5798;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5790;
	sub_831F3870(ctx, base);
	// stw r3,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r3.u32);
	// b 0x831f582c
	goto loc_831F582C;
loc_831F5798:
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x831f57ac
	if (!cr6.eq) goto loc_831F57AC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_831F57AC:
	// ld r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x831f57c0
	if (!cr6.eq) goto loc_831F57C0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831F57C0:
	// ld r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 80);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x831f57d4
	if (!cr6.eq) goto loc_831F57D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F57D4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831f5818
	if (cr6.eq) goto loc_831F5818;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831f57f4
	if (cr6.eq) goto loc_831F57F4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f5804
	if (cr6.eq) goto loc_831F5804;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831f5828
	goto loc_831F5828;
loc_831F57F4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f5804
	if (cr6.eq) goto loc_831F5804;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x831f5828
	goto loc_831F5828;
loc_831F5804:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x831f5828
	goto loc_831F5828;
loc_831F5818:
	// addic r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_831F5828:
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
loc_831F582C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,19536
	ctx.r29.s64 = ctx.r11.s64 + 19536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F5840;
	sub_83A76F50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831f5860
	if (cr0.lt) goto loc_831F5860;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F5858;
	sub_831F38C8(ctx, base);
	// sth r3,134(r30)
	PPC_STORE_U16(ctx.r30.u32 + 134, ctx.r3.u16);
	// b 0x831f5894
	goto loc_831F5894;
loc_831F5860:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831f588c
	if (cr6.lt) goto loc_831F588C;
	// beq cr6,0x831f5884
	if (cr6.eq) goto loc_831F5884;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831f5884
	if (cr6.lt) goto loc_831F5884;
	// beq cr6,0x831f5884
	if (cr6.eq) goto loc_831F5884;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// blt cr6,0x831f588c
	if (cr6.lt) goto loc_831F588C;
loc_831F5884:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831f5890
	goto loc_831F5890;
loc_831F588C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F5890:
	// sth r11,134(r30)
	PPC_STORE_U16(ctx.r30.u32 + 134, ctx.r11.u16);
loc_831F5894:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19528
	ctx.r5.s64 = ctx.r11.s64 + 19528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F58A8;
	sub_831F3870(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19520
	ctx.r5.s64 = ctx.r11.s64 + 19520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F58C0;
	sub_831F3870(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19512
	ctx.r5.s64 = ctx.r11.s64 + 19512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F58D8;
	sub_831F3870(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19504
	ctx.r5.s64 = ctx.r11.s64 + 19504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F58F0;
	sub_831F3870(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19496
	ctx.r5.s64 = ctx.r11.s64 + 19496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5908;
	sub_831F3870(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,19488
	ctx.r5.s64 = ctx.r11.s64 + 19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5920;
	sub_831F3870(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,19472
	ctx.r29.s64 = ctx.r11.s64 + 19472;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F5940;
	sub_83A76F50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831f5960
	if (cr0.lt) goto loc_831F5960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F5958;
	sub_831F38C8(ctx, base);
	// sth r3,156(r30)
	PPC_STORE_U16(ctx.r30.u32 + 156, ctx.r3.u16);
	// b 0x831f5990
	goto loc_831F5990;
loc_831F5960:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f5988
	if (!cr6.eq) goto loc_831F5988;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f5988
	if (!cr6.eq) goto loc_831F5988;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x831f598c
	if (cr6.eq) goto loc_831F598C;
loc_831F5988:
	// li r11,1
	ctx.r11.s64 = 1;
loc_831F598C:
	// sth r11,156(r30)
	PPC_STORE_U16(ctx.r30.u32 + 156, ctx.r11.u16);
loc_831F5990:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,19456
	ctx.r29.s64 = ctx.r11.s64 + 19456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F59A4;
	sub_83A76F50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831f59c4
	if (cr0.lt) goto loc_831F59C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f38c8
	ctx.lr = 0x831F59BC;
	sub_831F38C8(ctx, base);
	// sth r3,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r3.u16);
	// b 0x831f59cc
	goto loc_831F59CC;
loc_831F59C4:
	// lhz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 156);
	// sth r11,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r11.u16);
loc_831F59CC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,19448
	ctx.r29.s64 = ctx.r11.s64 + 19448;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F59E0;
	sub_83A76F50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831f5a00
	if (cr0.lt) goto loc_831F5A00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F59F8;
	sub_831F3870(ctx, base);
	// stw r3,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r3.u32);
	// b 0x831f5a08
	goto loc_831F5A08;
loc_831F5A00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
loc_831F5A08:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,19436
	ctx.r29.s64 = ctx.r11.s64 + 19436;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F5A1C;
	sub_83A76F50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x831f5a5c
	if (cr0.lt) goto loc_831F5A5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F5A30;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f5a40
	if (!cr0.lt) goto loc_831F5A40;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x831f5a60
	goto loc_831F5A60;
loc_831F5A40:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F5A50;
	sub_83A77668(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x831f5a64
	goto loc_831F5A64;
loc_831F5A5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831F5A60:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831F5A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x831F5A6C;
	sub_83A777F8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x831f5ae4
	if (cr6.eq) goto loc_831F5AE4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F5A84;
	sub_83A77A38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831f5564
	if (cr0.eq) goto loc_831F5564;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f5adc
	if (!cr6.eq) goto loc_831F5ADC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,19432
	ctx.r29.s64 = ctx.r11.s64 + 19432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5AB0;
	sub_831F3870(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5AC4;
	sub_831F3870(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3870
	ctx.lr = 0x831F5AD8;
	sub_831F3870(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
loc_831F5ADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x831F5AE4;
	sub_83A777F8(ctx, base);
loc_831F5AE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F5AE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F5AF0"))) PPC_WEAK_FUNC(sub_831F5AF0);
PPC_FUNC_IMPL(__imp__sub_831F5AF0) {
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
	// bl 0x831f5488
	ctx.lr = 0x831F5B00;
	sub_831F5488(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F5B18"))) PPC_WEAK_FUNC(sub_831F5B18);
PPC_FUNC_IMPL(__imp__sub_831F5B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831F5B20;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r10,64(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 64);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lhz r9,128(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 128);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r10,-16
	ctx.r5.s64 = ctx.r10.s64 + -16;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f5b8c
	if (!cr0.eq) goto loc_831F5B8C;
	// li r10,25951
	ctx.r10.s64 = 25951;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f5b8c
	if (cr6.eq) goto loc_831F5B8C;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_831F5B74:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// mulli r10,r10,16661
	ctx.r10.s64 = ctx.r10.s64 * 16661;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831f5b74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F5B74;
loc_831F5B8C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F5B94;
	sub_83A77A38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831f5bac
	if (!cr0.eq) goto loc_831F5BAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r11.u32);
	// b 0x831f5cc0
	goto loc_831F5CC0;
loc_831F5BAC:
	// lhz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 132);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f5ca4
	if (!cr0.eq) goto loc_831F5CA4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19768
	ctx.r4.s64 = ctx.r11.s64 + 19768;
	// bl 0x83a76f50
	ctx.lr = 0x831F5BC8;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// bge 0x831f5be0
	if (!cr0.lt) goto loc_831F5BE0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x831f5bf8
	goto loc_831F5BF8;
loc_831F5BE0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F5BF0;
	sub_83A77668(ctx, base);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_831F5BF8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19760
	ctx.r4.s64 = ctx.r11.s64 + 19760;
	// bl 0x83a76f50
	ctx.lr = 0x831F5C08;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f5c1c
	if (!cr0.lt) goto loc_831F5C1C;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x831f5c34
	goto loc_831F5C34;
loc_831F5C1C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77668
	ctx.lr = 0x831F5C2C;
	sub_83A77668(ctx, base);
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_831F5C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a777f8
	ctx.lr = 0x831F5C3C;
	sub_83A777F8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F5C4C;
	sub_83A77A38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f5c60
	if (!cr0.eq) goto loc_831F5C60;
	// stw r23,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r23.u32);
	// b 0x831f5cc0
	goto loc_831F5CC0;
loc_831F5C60:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a77a38
	ctx.lr = 0x831F5C70;
	sub_83A77A38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne 0x831f5c90
	if (!cr0.eq) goto loc_831F5C90;
	// stw r23,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r23.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a777f8
	ctx.lr = 0x831F5C88;
	sub_83A777F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f5cc0
	goto loc_831F5CC0;
loc_831F5C90:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824ce1d8
	ctx.lr = 0x831F5C98;
	sub_824CE1D8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x831f5cb4
	goto loc_831F5CB4;
loc_831F5CA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_831F5CB4:
	// bl 0x824ce1d8
	ctx.lr = 0x831F5CB8;
	sub_824CE1D8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F5CC0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F5CC8"))) PPC_WEAK_FUNC(sub_831F5CC8);
PPC_FUNC_IMPL(__imp__sub_831F5CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F5CD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831f40e0
	ctx.lr = 0x831F5CF0;
	sub_831F40E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f40e0
	ctx.lr = 0x831F5D04;
	sub_831F40E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831f5dc8
	if (cr6.lt) goto loc_831F5DC8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// beq cr6,0x831f5d24
	if (cr6.eq) goto loc_831F5D24;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_831F5D24:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x831f5d48
	if (!cr6.gt) goto loc_831F5D48;
	// bl 0x831f42a8
	ctx.lr = 0x831F5D44;
	sub_831F42A8(ctx, base);
	// b 0x831f5d4c
	goto loc_831F5D4C;
loc_831F5D48:
	// bl 0x831f41e8
	ctx.lr = 0x831F5D4C;
	sub_831F41E8(ctx, base);
loc_831F5D4C:
	// std r3,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r3.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a76fc8
	ctx.lr = 0x831F5D60;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a76fc8
	ctx.lr = 0x831F5D78;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a76f48
	ctx.lr = 0x831F5D88;
	sub_83A76F48(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// ble cr6,0x831f5dac
	if (!cr6.gt) goto loc_831F5DAC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_831F5D9C:
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83a77098
	ctx.lr = 0x831F5DA4;
	sub_83A77098(ctx, base);
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// b 0x831f5db0
	goto loc_831F5DB0;
loc_831F5DAC:
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
loc_831F5DB0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f5dc0
	if (!cr6.eq) goto loc_831F5DC0;
	// stw r27,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r27.u32);
loc_831F5DC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f5e58
	goto loc_831F5E58;
loc_831F5DC8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x831f5e54
	if (cr6.lt) goto loc_831F5E54;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// beq cr6,0x831f5de0
	if (cr6.eq) goto loc_831F5DE0;
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
loc_831F5DE0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x831f5e04
	if (!cr6.gt) goto loc_831F5E04;
	// bl 0x831f42a8
	ctx.lr = 0x831F5E00;
	sub_831F42A8(ctx, base);
	// b 0x831f5e08
	goto loc_831F5E08;
loc_831F5E04:
	// bl 0x831f41e8
	ctx.lr = 0x831F5E08;
	sub_831F41E8(ctx, base);
loc_831F5E08:
	// std r3,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r3.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a77098
	ctx.lr = 0x831F5E1C;
	sub_83A77098(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F5E30;
	sub_83A77098(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a76f48
	ctx.lr = 0x831F5E3C;
	sub_83A76F48(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// ble cr6,0x831f5dac
	if (!cr6.gt) goto loc_831F5DAC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x831f5d9c
	goto loc_831F5D9C;
loc_831F5E54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F5E58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F5E60"))) PPC_WEAK_FUNC(sub_831F5E60);
PPC_FUNC_IMPL(__imp__sub_831F5E60) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f5e94
	if (!cr6.lt) goto loc_831F5E94;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831f5eac
	goto loc_831F5EAC;
loc_831F5E94:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x831f5ec8
	if (!cr6.lt) goto loc_831F5EC8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_831F5EAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83a76fc8
	ctx.lr = 0x831F5EB4;
	sub_83A76FC8(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f5cc8
	ctx.lr = 0x831F5EC4;
	sub_831F5CC8(ctx, base);
	// b 0x831f5ecc
	goto loc_831F5ECC;
loc_831F5EC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F5ECC:
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

__attribute__((alias("__imp__sub_831F5EE4"))) PPC_WEAK_FUNC(sub_831F5EE4);
PPC_FUNC_IMPL(__imp__sub_831F5EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F5EE8"))) PPC_WEAK_FUNC(sub_831F5EE8);
PPC_FUNC_IMPL(__imp__sub_831F5EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x831F5EF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r27,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r27.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// subfic r22,r24,-1
	xer.ca = ctx.r24.u32 <= 4294967295;
	ctx.r22.s64 = -1 - ctx.r24.s64;
	// bgt cr6,0x831f5f34
	if (cr6.gt) goto loc_831F5F34;
loc_831F5F2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f6078
	goto loc_831F6078;
loc_831F5F34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// ble cr6,0x831f5fcc
	if (!cr6.gt) goto loc_831F5FCC;
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f5fc4
	if (!cr6.gt) goto loc_831F5FC4;
	// clrldi r26,r22,32
	ctx.r26.u64 = ctx.r22.u64 & 0xFFFFFFFF;
loc_831F5F58:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831f5f90
	if (!cr6.gt) goto loc_831F5F90;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// twllei r25,0
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r25
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// andc r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 & ~ctx.r11.u64;
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twlgei r11,-1
	// bne 0x831f5f90
	if (!cr0.eq) goto loc_831F5F90;
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_831F5F90:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F5FA0;
	sub_83A76FC8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x831f5f58
	if (cr6.lt) goto loc_831F5F58;
loc_831F5FC4:
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_831F5FCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// ble cr6,0x831f6060
	if (!cr6.gt) goto loc_831F6060;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f6058
	if (!cr6.gt) goto loc_831F6058;
	// clrldi r27,r22,32
	ctx.r27.u64 = ctx.r22.u64 & 0xFFFFFFFF;
loc_831F5FF0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831f6028
	if (!cr6.gt) goto loc_831F6028;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// twllei r25,0
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r25
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// andc r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 & ~ctx.r11.u64;
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twlgei r11,-1
	// bne 0x831f6028
	if (!cr0.eq) goto loc_831F6028;
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_831F6028:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F6038;
	sub_83A77098(ctx, base);
	// add r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x831f5ff0
	if (cr6.lt) goto loc_831F5FF0;
loc_831F6058:
	// std r29,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r29.u64);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_831F6060:
	// subf r11,r23,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r23.s64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// bgt cr6,0x831f5f2c
	if (cr6.gt) goto loc_831F5F2C;
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F6078:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6080"))) PPC_WEAK_FUNC(sub_831F6080);
PPC_FUNC_IMPL(__imp__sub_831F6080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x831f5000
	ctx.lr = 0x831F60AC;
	sub_831F5000(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F60BC"))) PPC_WEAK_FUNC(sub_831F60BC);
PPC_FUNC_IMPL(__imp__sub_831F60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F60C0"))) PPC_WEAK_FUNC(sub_831F60C0);
PPC_FUNC_IMPL(__imp__sub_831F60C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f60d4
	if (cr6.eq) goto loc_831F60D4;
	// ld r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_831F60D4:
	// addi r3,r11,1840
	ctx.r3.s64 = ctx.r11.s64 + 1840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F60DC"))) PPC_WEAK_FUNC(sub_831F60DC);
PPC_FUNC_IMPL(__imp__sub_831F60DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F60E0"))) PPC_WEAK_FUNC(sub_831F60E0);
PPC_FUNC_IMPL(__imp__sub_831F60E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f60f4
	if (cr6.eq) goto loc_831F60F4;
	// ld r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_831F60F4:
	// addi r3,r11,1024
	ctx.r3.s64 = ctx.r11.s64 + 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F60FC"))) PPC_WEAK_FUNC(sub_831F60FC);
PPC_FUNC_IMPL(__imp__sub_831F60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6100"))) PPC_WEAK_FUNC(sub_831F6100);
PPC_FUNC_IMPL(__imp__sub_831F6100) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x831f5b18
	sub_831F5B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6114"))) PPC_WEAK_FUNC(sub_831F6114);
PPC_FUNC_IMPL(__imp__sub_831F6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6118"))) PPC_WEAK_FUNC(sub_831F6118);
PPC_FUNC_IMPL(__imp__sub_831F6118) {
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
	// lwz r3,380(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6144
	if (cr6.eq) goto loc_831F6144;
	// bl 0x83a75c60
	ctx.lr = 0x831F613C;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
loc_831F6144:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f616c
	if (!cr6.eq) goto loc_831F616C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19848
	ctx.r4.s64 = ctx.r11.s64 + 19848;
	// bl 0x831ea3f0
	ctx.lr = 0x831F6164;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f617c
	goto loc_831F617C;
loc_831F616C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x83a76e98
	ctx.lr = 0x831F6178;
	sub_83A76E98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F617C:
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

__attribute__((alias("__imp__sub_831F6190"))) PPC_WEAK_FUNC(sub_831F6190);
PPC_FUNC_IMPL(__imp__sub_831F6190) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6218
	if (cr6.eq) goto loc_831F6218;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x831f61f8
	if (!cr6.eq) goto loc_831F61F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831effb8
	ctx.lr = 0x831F61C8;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f61fc
	if (!cr6.eq) goto loc_831F61FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f61f0
	if (!cr6.eq) goto loc_831F61F0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f08d0
	ctx.lr = 0x831F61E8;
	sub_831F08D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831F61F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f623c
	goto loc_831F623C;
loc_831F61F8:
	// bl 0x831f08d0
	ctx.lr = 0x831F61FC;
	sub_831F08D0(ctx, base);
loc_831F61FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f11e8
	ctx.lr = 0x831F6204;
	sub_831F11E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
loc_831F6218:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f6238
	if (cr6.eq) goto loc_831F6238;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x83a76e98
	ctx.lr = 0x831F6238;
	sub_83A76E98(ctx, base);
loc_831F6238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F623C:
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

__attribute__((alias("__imp__sub_831F6254"))) PPC_WEAK_FUNC(sub_831F6254);
PPC_FUNC_IMPL(__imp__sub_831F6254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6258"))) PPC_WEAK_FUNC(sub_831F6258);
PPC_FUNC_IMPL(__imp__sub_831F6258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x831f6280
	if (!cr6.eq) goto loc_831F6280;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// blr 
	return;
loc_831F6280:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_831F628C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x831f62ac
	if (cr6.eq) goto loc_831F62AC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831f628c
	if (!cr6.eq) goto loc_831F628C;
	// blr 
	return;
loc_831F62AC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F62B8"))) PPC_WEAK_FUNC(sub_831F62B8);
PPC_FUNC_IMPL(__imp__sub_831F62B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f62dc
	if (!cr6.eq) goto loc_831F62DC;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_831F62DC:
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// stw r10,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F62F8"))) PPC_WEAK_FUNC(sub_831F62F8);
PPC_FUNC_IMPL(__imp__sub_831F62F8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6324
	if (cr6.eq) goto loc_831F6324;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f6340
	if (!cr6.eq) goto loc_831F6340;
loc_831F6324:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,19948
	ctx.r4.s64 = ctx.r11.s64 + 19948;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F6338;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f6374
	goto loc_831F6374;
loc_831F6340:
	// lwz r31,360(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// b 0x831f6364
	goto loc_831F6364;
loc_831F6348:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x831f6258
	ctx.lr = 0x831F6358;
	sub_831F6258(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f6190
	ctx.lr = 0x831F6364;
	sub_831F6190(ctx, base);
loc_831F6364:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x831f6348
	if (!cr6.eq) goto loc_831F6348;
	// bl 0x831f6118
	ctx.lr = 0x831F6374;
	sub_831F6118(ctx, base);
loc_831F6374:
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

__attribute__((alias("__imp__sub_831F638C"))) PPC_WEAK_FUNC(sub_831F638C);
PPC_FUNC_IMPL(__imp__sub_831F638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6390"))) PPC_WEAK_FUNC(sub_831F6390);
PPC_FUNC_IMPL(__imp__sub_831F6390) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831f63c4
	if (!cr6.gt) goto loc_831F63C4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,656
	ctx.r3.s64 = 656;
	// bl 0x83a76b90
	ctx.lr = 0x831F63C0;
	sub_83A76B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831F63C4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831f63dc
	if (!cr6.gt) goto loc_831F63DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83a76b90
	ctx.lr = 0x831F63D8;
	sub_83A76B90(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_831F63DC:
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

__attribute__((alias("__imp__sub_831F63F8"))) PPC_WEAK_FUNC(sub_831F63F8);
PPC_FUNC_IMPL(__imp__sub_831F63F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x831f6408
	if (cr6.gt) goto loc_831F6408;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831F6408:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,5948
	ctx.r11.s64 = ctx.r11.s64 + 5948;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x831f6424
	if (!cr6.gt) goto loc_831F6424;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_831F6424:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831f6434
	if (cr6.gt) goto loc_831F6434;
	// li r11,8
	ctx.r11.s64 = 8;
loc_831F6434:
	// mullw r3,r11,r3
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F643C"))) PPC_WEAK_FUNC(sub_831F643C);
PPC_FUNC_IMPL(__imp__sub_831F643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6440"))) PPC_WEAK_FUNC(sub_831F6440);
PPC_FUNC_IMPL(__imp__sub_831F6440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F6448;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r11,5936
	ctx.r31.s64 = ctx.r11.s64 + 5936;
	// addi r10,r10,20032
	ctx.r10.s64 = ctx.r10.s64 + 20032;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f6488
	if (cr6.eq) goto loc_831F6488;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,20272
	ctx.r4.s64 = ctx.r11.s64 + 20272;
	// b 0x831f65b8
	goto loc_831F65B8;
loc_831F6488:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x831f64a0
	if (!cr6.eq) goto loc_831F64A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f65c4
	goto loc_831F65C4;
loc_831F64A0:
	// lis r24,-31750
	ctx.r24.s64 = -2080768000;
	// lwz r11,5952(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f65c0
	if (!cr6.eq) goto loc_831F65C0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831f65b0
	if (!cr6.gt) goto loc_831F65B0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831f65b0
	if (!cr6.gt) goto loc_831F65B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,656
	ctx.r3.s64 = 656;
	// bl 0x83a76b90
	ctx.lr = 0x831F64CC;
	sub_83A76B90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83a76b90
	ctx.lr = 0x831F64DC;
	sub_83A76B90(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f64f8
	if (!cr6.lt) goto loc_831F64F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,20212
	ctx.r4.s64 = ctx.r11.s64 + 20212;
	// b 0x831f65b8
	goto loc_831F65B8;
loc_831F64F8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,656
	ctx.r3.s64 = 656;
	// bl 0x83a76d20
	ctx.lr = 0x831F650C;
	sub_83A76D20(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// add r5,r29,r26
	ctx.r5.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83a76d20
	ctx.lr = 0x831F6528;
	sub_83A76D20(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// beq cr6,0x831f656c
	if (cr6.eq) goto loc_831F656C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f658c
	if (cr6.eq) goto loc_831F658C;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,5952(r24)
	PPC_STORE_U32(ctx.r24.u32 + 5952, ctx.r11.u32);
	// b 0x831f65c4
	goto loc_831F65C4;
loc_831F656C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f658c
	if (cr6.eq) goto loc_831F658C;
	// bl 0x83a76bc0
	ctx.lr = 0x831F6578;
	sub_83A76BC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_831F658C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f65c0
	if (cr6.eq) goto loc_831F65C0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a76bc0
	ctx.lr = 0x831F659C;
	sub_83A76BC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x831f65c0
	goto loc_831F65C0;
loc_831F65B0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,20136
	ctx.r4.s64 = ctx.r11.s64 + 20136;
loc_831F65B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F65C0;
	sub_831EA3F0(ctx, base);
loc_831F65C0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F65C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F65CC"))) PPC_WEAK_FUNC(sub_831F65CC);
PPC_FUNC_IMPL(__imp__sub_831F65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F65D0"))) PPC_WEAK_FUNC(sub_831F65D0);
PPC_FUNC_IMPL(__imp__sub_831F65D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F65D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31750
	ctx.r28.s64 = -2080768000;
	// lwz r11,5940(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5940);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f6604
	if (!cr6.eq) goto loc_831F6604;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20328
	ctx.r4.s64 = ctx.r11.s64 + 20328;
	// bl 0x831ea3f0
	ctx.lr = 0x831F65FC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f6658
	goto loc_831F6658;
loc_831F6604:
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,5952(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5952);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f6650
	if (cr6.eq) goto loc_831F6650;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6630
	if (cr6.eq) goto loc_831F6630;
	// bl 0x83a76bc0
	ctx.lr = 0x831F6628;
	sub_83A76BC0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F6630:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6648
	if (cr6.eq) goto loc_831F6648;
	// bl 0x83a76bc0
	ctx.lr = 0x831F6640;
	sub_83A76BC0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_831F6648:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,5952(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5952, ctx.r30.u32);
loc_831F6650:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,5940(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5940, ctx.r30.u32);
loc_831F6658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6660"))) PPC_WEAK_FUNC(sub_831F6660);
PPC_FUNC_IMPL(__imp__sub_831F6660) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// b 0x831f11e8
	sub_831F11E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6668"))) PPC_WEAK_FUNC(sub_831F6668);
PPC_FUNC_IMPL(__imp__sub_831F6668) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831f62f8
	sub_831F62F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6670"))) PPC_WEAK_FUNC(sub_831F6670);
PPC_FUNC_IMPL(__imp__sub_831F6670) {
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
	// lis r31,-31750
	ctx.r31.s64 = -2080768000;
	// lwz r11,5952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f66d4
	if (cr6.eq) goto loc_831F66D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f66b4
	if (cr6.eq) goto loc_831F66B4;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,26216
	ctx.r5.s64 = ctx.r10.s64 + 26216;
	// bl 0x83a76cb0
	ctx.lr = 0x831F66B0;
	sub_83A76CB0(ctx, base);
	// lwz r11,5952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5952);
loc_831F66B4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f66d4
	if (cr6.eq) goto loc_831F66D4;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,26208
	ctx.r5.s64 = ctx.r10.s64 + 26208;
	// bl 0x83a76cb0
	ctx.lr = 0x831F66D4;
	sub_83A76CB0(ctx, base);
loc_831F66D4:
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

__attribute__((alias("__imp__sub_831F66E8"))) PPC_WEAK_FUNC(sub_831F66E8);
PPC_FUNC_IMPL(__imp__sub_831F66E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831f6708
	if (!cr6.eq) goto loc_831F6708;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_831F6708:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge cr6,0x831f6734
	if (!cr6.lt) goto loc_831F6734;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20468
	ctx.r4.s64 = ctx.r11.s64 + 20468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F672C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f6758
	goto loc_831F6758;
loc_831F6734:
	// bne cr6,0x831f6744
	if (!cr6.eq) goto loc_831F6744;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831f6754
	goto loc_831F6754;
loc_831F6744:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83a76b90
	ctx.lr = 0x831F6750;
	sub_83A76B90(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_831F6754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F6758:
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

__attribute__((alias("__imp__sub_831F676C"))) PPC_WEAK_FUNC(sub_831F676C);
PPC_FUNC_IMPL(__imp__sub_831F676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6770"))) PPC_WEAK_FUNC(sub_831F6770);
PPC_FUNC_IMPL(__imp__sub_831F6770) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831fa7a0
	sub_831FA7A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6778"))) PPC_WEAK_FUNC(sub_831F6778);
PPC_FUNC_IMPL(__imp__sub_831F6778) {
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
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// lwz r11,5984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5984);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f67b4
	if (!cr6.eq) goto loc_831F67B4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20492
	ctx.r4.s64 = ctx.r11.s64 + 20492;
	// bl 0x831ea3f0
	ctx.lr = 0x831F67AC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f67dc
	goto loc_831F67DC;
loc_831F67B4:
	// lis r31,-31750
	ctx.r31.s64 = -2080768000;
	// lwz r3,5988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5988);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f67d0
	if (cr6.eq) goto loc_831F67D0;
	// bl 0x83a76bc0
	ctx.lr = 0x831F67C8;
	sub_83A76BC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5988, ctx.r11.u32);
loc_831F67D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,5984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5984, ctx.r11.u32);
loc_831F67DC:
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

__attribute__((alias("__imp__sub_831F67F4"))) PPC_WEAK_FUNC(sub_831F67F4);
PPC_FUNC_IMPL(__imp__sub_831F67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F67F8"))) PPC_WEAK_FUNC(sub_831F67F8);
PPC_FUNC_IMPL(__imp__sub_831F67F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5988);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,26480
	ctx.r5.s64 = ctx.r11.s64 + 26480;
	// b 0x83a76cb0
	sub_83A76CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6818"))) PPC_WEAK_FUNC(sub_831F6818);
PPC_FUNC_IMPL(__imp__sub_831F6818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F681C"))) PPC_WEAK_FUNC(sub_831F681C);
PPC_FUNC_IMPL(__imp__sub_831F681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6820"))) PPC_WEAK_FUNC(sub_831F6820);
PPC_FUNC_IMPL(__imp__sub_831F6820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F6828;
	__savegprlr_29(ctx, base);
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831f68f8
	if (cr6.lt) goto loc_831F68F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f68f8
	if (cr6.eq) goto loc_831F68F8;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r10,5984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5984);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831f6870
	if (cr6.eq) goto loc_831F6870;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20564
	ctx.r4.s64 = ctx.r11.s64 + 20564;
	// bl 0x831ea3f0
	ctx.lr = 0x831F6868;
	sub_831EA3F0(ctx, base);
loc_831F6868:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f6910
	goto loc_831F6910;
loc_831F6870:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,5984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5984, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f66e8
	ctx.lr = 0x831F6884;
	sub_831F66E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f68dc
	if (!cr0.eq) goto loc_831F68DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f68dc
	if (cr6.lt) goto loc_831F68DC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831f68d4
	if (cr6.eq) goto loc_831F68D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea798
	ctx.lr = 0x831F68B0;
	sub_831EA798(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x83a76d20
	ctx.lr = 0x831F68C4;
	sub_83A76D20(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,5988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5988, ctx.r3.u32);
	// beq 0x831f68f0
	if (cr0.eq) goto loc_831F68F0;
loc_831F68D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f6910
	goto loc_831F6910;
loc_831F68DC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,20480
	ctx.r4.s64 = ctx.r11.s64 + 20480;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F68F0;
	sub_831EA418(ctx, base);
loc_831F68F0:
	// bl 0x831f6778
	ctx.lr = 0x831F68F4;
	sub_831F6778(ctx, base);
	// b 0x831f6868
	goto loc_831F6868;
loc_831F68F8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20552
	ctx.r4.s64 = ctx.r11.s64 + 20552;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F690C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F6910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6918"))) PPC_WEAK_FUNC(sub_831F6918);
PPC_FUNC_IMPL(__imp__sub_831F6918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83a77a98
	sub_83A77A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6920"))) PPC_WEAK_FUNC(sub_831F6920);
PPC_FUNC_IMPL(__imp__sub_831F6920) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83a77ad8
	sub_83A77AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F6928"))) PPC_WEAK_FUNC(sub_831F6928);
PPC_FUNC_IMPL(__imp__sub_831F6928) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6958
	if (cr6.eq) goto loc_831F6958;
	// bl 0x831fae58
	ctx.lr = 0x831F6954;
	sub_831FAE58(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_831F6958:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f696c
	if (cr6.eq) goto loc_831F696C;
	// bl 0x831f11e8
	ctx.lr = 0x831F6968;
	sub_831F11E8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_831F696C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6980
	if (cr6.eq) goto loc_831F6980;
	// bl 0x83a75c60
	ctx.lr = 0x831F697C;
	sub_83A75C60(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F6980:
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

__attribute__((alias("__imp__sub_831F6998"))) PPC_WEAK_FUNC(sub_831F6998);
PPC_FUNC_IMPL(__imp__sub_831F6998) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831effb8
	ctx.lr = 0x831F69C0;
	sub_831EFFB8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f6a80
	if (cr6.eq) goto loc_831F6A80;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f6c0c
	if (!cr6.gt) goto loc_831F6C0C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x831f6a00
	if (!cr6.gt) goto loc_831F6A00;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831f6a30
	if (cr6.eq) goto loc_831F6A30;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831f6a14
	if (cr6.eq) goto loc_831F6A14;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831f6a28
	if (cr6.eq) goto loc_831F6A28;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x831f6c0c
	if (!cr6.eq) goto loc_831F6C0C;
loc_831F6A00:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f08d0
	ctx.lr = 0x831F6A08;
	sub_831F08D0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_831F6A0C:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x831f6c08
	goto loc_831F6C08;
loc_831F6A14:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f6a28
	if (cr6.eq) goto loc_831F6A28;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f6c0c
	if (!cr6.eq) goto loc_831F6C0C;
loc_831F6A28:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// b 0x831f6c0c
	goto loc_831F6C0C;
loc_831F6A30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f6c0c
	if (!cr6.eq) goto loc_831F6C0C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f00e0
	ctx.lr = 0x831F6A48;
	sub_831F00E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f6a28
	if (cr6.eq) goto loc_831F6A28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f00c0
	ctx.lr = 0x831F6A60;
	sub_831F00C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1170
	ctx.lr = 0x831F6A78;
	sub_831F1170(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831f6c08
	goto loc_831F6C08;
loc_831F6A80:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x831f6a9c
	if (!cr6.eq) goto loc_831F6A9C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x831f6c10
	goto loc_831F6C10;
loc_831F6A9C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f6ab0
	if (!cr6.eq) goto loc_831F6AB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f6c10
	goto loc_831F6C10;
loc_831F6AB0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831f6be0
	if (cr6.lt) goto loc_831F6BE0;
	// beq cr6,0x831f6bbc
	if (cr6.eq) goto loc_831F6BBC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831f6ae0
	if (cr6.lt) goto loc_831F6AE0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x831f6c0c
	if (!cr6.eq) goto loc_831F6C0C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f6c0c
	if (!cr6.eq) goto loc_831F6C0C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831f6c08
	goto loc_831F6C08;
loc_831F6AE0:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f6b64
	if (!cr6.eq) goto loc_831F6B64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f09a0
	ctx.lr = 0x831F6AF4;
	sub_831F09A0(ctx, base);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r10,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// blt cr6,0x831f6b20
	if (cr6.lt) goto loc_831F6B20;
	// std r30,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
loc_831F6B20:
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x831f6b38
	if (!cr6.lt) goto loc_831F6B38;
	// bl 0x831f08d0
	ctx.lr = 0x831F6B34;
	sub_831F08D0(ctx, base);
	// b 0x831f6b60
	goto loc_831F6B60;
loc_831F6B38:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831f00c0
	ctx.lr = 0x831F6B40;
	sub_831F00C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1170
	ctx.lr = 0x831F6B58;
	sub_831F1170(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831F6B60:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831F6B64:
	// ld r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, xer);
	// bge cr6,0x831f6c0c
	if (!cr6.lt) goto loc_831F6C0C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x831f6c0c
	if (cr6.eq) goto loc_831F6C0C;
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// rldicl r10,r11,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sradi r7,r11,1
	xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s64 >> 1;
	// cmpd cr6,r9,r7
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, xer);
	// bgt cr6,0x831f6c0c
	if (cr6.gt) goto loc_831F6C0C;
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831f1170
	ctx.lr = 0x831F6BB8;
	sub_831F1170(ctx, base);
	// b 0x831f6c0c
	goto loc_831F6C0C;
loc_831F6BBC:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f6c0c
	if (!cr6.eq) goto loc_831F6C0C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f08d0
	ctx.lr = 0x831F6BCC;
	sub_831F08D0(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f0278
	ctx.lr = 0x831F6BD8;
	sub_831F0278(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831f6a0c
	goto loc_831F6A0C;
loc_831F6BE0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1170
	ctx.lr = 0x831F6BF8;
	sub_831F1170(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831F6C08:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831F6C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831F6C10:
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

__attribute__((alias("__imp__sub_831F6C28"))) PPC_WEAK_FUNC(sub_831F6C28);
PPC_FUNC_IMPL(__imp__sub_831F6C28) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831fa8c0
	ctx.lr = 0x831F6C50;
	sub_831FA8C0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f6d20
	if (cr6.eq) goto loc_831F6D20;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f6e9c
	if (!cr6.gt) goto loc_831F6E9C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x831f6c90
	if (!cr6.gt) goto loc_831F6C90;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831f6cd0
	if (cr6.eq) goto loc_831F6CD0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831f6cb4
	if (cr6.eq) goto loc_831F6CB4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831f6cc8
	if (cr6.eq) goto loc_831F6CC8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x831f6e9c
	if (!cr6.eq) goto loc_831F6E9C;
loc_831F6C90:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831faa48
	ctx.lr = 0x831F6CA0;
	sub_831FAA48(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fac98
	ctx.lr = 0x831F6CA8;
	sub_831FAC98(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_831F6CAC:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x831f6e98
	goto loc_831F6E98;
loc_831F6CB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f6cc8
	if (cr6.eq) goto loc_831F6CC8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f6e9c
	if (!cr6.eq) goto loc_831F6E9C;
loc_831F6CC8:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x831f6e9c
	goto loc_831F6E9C;
loc_831F6CD0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f6e9c
	if (!cr6.eq) goto loc_831F6E9C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831faab0
	ctx.lr = 0x831F6CE8;
	sub_831FAAB0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f6cc8
	if (cr6.eq) goto loc_831F6CC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831faa00
	ctx.lr = 0x831F6D00;
	sub_831FAA00(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fae18
	ctx.lr = 0x831F6D18;
	sub_831FAE18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831f6e98
	goto loc_831F6E98;
loc_831F6D20:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x831f6d3c
	if (!cr6.eq) goto loc_831F6D3C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x831f6ea0
	goto loc_831F6EA0;
loc_831F6D3C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f6d50
	if (!cr6.eq) goto loc_831F6D50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f6ea0
	goto loc_831F6EA0;
loc_831F6D50:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831f6e70
	if (cr6.lt) goto loc_831F6E70;
	// beq cr6,0x831f6e4c
	if (cr6.eq) goto loc_831F6E4C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x831f6d80
	if (cr6.lt) goto loc_831F6D80;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x831f6e9c
	if (!cr6.eq) goto loc_831F6E9C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f6e9c
	if (!cr6.eq) goto loc_831F6E9C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831f6e98
	goto loc_831F6E98;
loc_831F6D80:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f6e10
	if (!cr6.eq) goto loc_831F6E10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fa940
	ctx.lr = 0x831F6D94;
	sub_831FA940(ctx, base);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// std r11,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// blt cr6,0x831f6dc0
	if (cr6.lt) goto loc_831F6DC0;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
loc_831F6DC0:
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x831f6dd8
	if (!cr6.lt) goto loc_831F6DD8;
	// bl 0x831fac98
	ctx.lr = 0x831F6DD4;
	sub_831FAC98(ctx, base);
	// b 0x831f6e0c
	goto loc_831F6E0C;
loc_831F6DD8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831faa00
	ctx.lr = 0x831F6DE0;
	sub_831FAA00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fa9b8
	ctx.lr = 0x831F6DEC;
	sub_831FA9B8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fae18
	ctx.lr = 0x831F6E04;
	sub_831FAE18(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_831F6E0C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831F6E10:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x831f6e9c
	if (cr6.eq) goto loc_831F6E9C;
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// subf r7,r4,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// ble cr6,0x831f6e9c
	if (!cr6.gt) goto loc_831F6E9C;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831fae18
	ctx.lr = 0x831F6E48;
	sub_831FAE18(ctx, base);
	// b 0x831f6e9c
	goto loc_831F6E9C;
loc_831F6E4C:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f6e9c
	if (!cr6.eq) goto loc_831F6E9C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831fac98
	ctx.lr = 0x831F6E5C;
	sub_831FAC98(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831faab0
	ctx.lr = 0x831F6E68;
	sub_831FAAB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831f6cac
	goto loc_831F6CAC;
loc_831F6E70:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fae18
	ctx.lr = 0x831F6E88;
	sub_831FAE18(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_831F6E98:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_831F6E9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831F6EA0:
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

__attribute__((alias("__imp__sub_831F6EB8"))) PPC_WEAK_FUNC(sub_831F6EB8);
PPC_FUNC_IMPL(__imp__sub_831F6EB8) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x831f6f00
	if (!cr6.lt) goto loc_831F6F00;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,20696
	ctx.r4.s64 = ctx.r11.s64 + 20696;
loc_831F6EEC:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F6EF8;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f6f10
	goto loc_831F6F10;
loc_831F6F00:
	// bne cr6,0x831f6f28
	if (!cr6.eq) goto loc_831F6F28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F6F08:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F6F10:
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
loc_831F6F28:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r31,40
	ctx.r31.s64 = 40;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blt cr6,0x831f6f70
	if (cr6.lt) goto loc_831F6F70;
	// beq cr6,0x831f6f68
	if (cr6.eq) goto loc_831F6F68;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x831f6f78
	if (cr6.lt) goto loc_831F6F78;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,20684
	ctx.r4.s64 = ctx.r11.s64 + 20684;
	// b 0x831f6eec
	goto loc_831F6EEC;
loc_831F6F68:
	// li r31,112
	ctx.r31.s64 = 112;
	// b 0x831f6f74
	goto loc_831F6F74;
loc_831F6F70:
	// li r31,340
	ctx.r31.s64 = 340;
loc_831F6F74:
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
loc_831F6F78:
	// bl 0x83a76b90
	ctx.lr = 0x831F6F7C;
	sub_83A76B90(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x831f6f08
	goto loc_831F6F08;
}

__attribute__((alias("__imp__sub_831F6F84"))) PPC_WEAK_FUNC(sub_831F6F84);
PPC_FUNC_IMPL(__imp__sub_831F6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F6F88"))) PPC_WEAK_FUNC(sub_831F6F88);
PPC_FUNC_IMPL(__imp__sub_831F6F88) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f7094
	if (cr6.eq) goto loc_831F7094;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f7094
	if (cr6.eq) goto loc_831F7094;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f6fc4
	if (cr6.eq) goto loc_831F6FC4;
	// bl 0x83a75cd8
	ctx.lr = 0x831F6FC4;
	sub_83A75CD8(ctx, base);
loc_831F6FC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6998
	ctx.lr = 0x831F6FCC;
	sub_831F6998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6c28
	ctx.lr = 0x831F6FD8;
	sub_831F6C28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f6ff0
	if (cr6.eq) goto loc_831F6FF0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a75d58
	ctx.lr = 0x831F6FF0;
	sub_83A75D58(ctx, base);
loc_831F6FF0:
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// bne cr6,0x831f700c
	if (!cr6.eq) goto loc_831F700C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_831F700C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x831f7024
	if (!cr6.eq) goto loc_831F7024;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_831F7024:
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x831f7048
	if (!cr6.eq) goto loc_831F7048;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831f705c
	if (!cr6.eq) goto loc_831F705C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f705c
	if (!cr6.eq) goto loc_831F705C;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x831f705c
	goto loc_831F705C;
loc_831F7048:
	// cmpwi cr6,r8,5
	cr6.compare<int32_t>(ctx.r8.s32, 5, xer);
	// bne cr6,0x831f705c
	if (!cr6.eq) goto loc_831F705C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831f705c
	if (!cr6.eq) goto loc_831F705C;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_831F705C:
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x831f708c
	if (cr6.eq) goto loc_831F708C;
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
loc_831F708C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831f7098
	goto loc_831F7098;
loc_831F7094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7098:
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

__attribute__((alias("__imp__sub_831F70B0"))) PPC_WEAK_FUNC(sub_831F70B0);
PPC_FUNC_IMPL(__imp__sub_831F70B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F70B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x831f7130
	if (cr6.lt) goto loc_831F7130;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x831f7138
	if (!cr6.lt) goto loc_831F7138;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f70e4
	if (cr6.eq) goto loc_831F70E4;
	// bl 0x83a75cd8
	ctx.lr = 0x831F70E4;
	sub_83A75CD8(ctx, base);
loc_831F70E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x831F70EC;
	sub_831F8200(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x831f711c
	if (!cr0.gt) goto loc_831F711C;
loc_831F70F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a76c48
	ctx.lr = 0x831F7104;
	sub_83A76C48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f7110
	if (cr0.eq) goto loc_831F7110;
	// bl 0x831f6f88
	ctx.lr = 0x831F7110;
	sub_831F6F88(ctx, base);
loc_831F7110:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x831f70f8
	if (cr6.lt) goto loc_831F70F8;
loc_831F711C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f7138
	if (cr6.eq) goto loc_831F7138;
	// bl 0x83a75d58
	ctx.lr = 0x831F712C;
	sub_83A75D58(ctx, base);
	// b 0x831f7138
	goto loc_831F7138;
loc_831F7130:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a769c8
	ctx.lr = 0x831F7138;
	sub_83A769C8(ctx, base);
loc_831F7138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7144"))) PPC_WEAK_FUNC(sub_831F7144);
PPC_FUNC_IMPL(__imp__sub_831F7144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7148"))) PPC_WEAK_FUNC(sub_831F7148);
PPC_FUNC_IMPL(__imp__sub_831F7148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F7150;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f716c
	if (cr6.eq) goto loc_831F716C;
	// bl 0x83a75cd8
	ctx.lr = 0x831F716C;
	sub_83A75CD8(ctx, base);
loc_831F716C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x831F7174;
	sub_831F8200(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// ble 0x831f71b0
	if (!cr0.gt) goto loc_831F71B0;
loc_831F7180:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a76c48
	ctx.lr = 0x831F718C;
	sub_83A76C48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f71a4
	if (cr0.eq) goto loc_831F71A4;
	// bl 0x831f6f88
	ctx.lr = 0x831F7198;
	sub_831F6F88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f71a4
	if (cr0.eq) goto loc_831F71A4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_831F71A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x831f7180
	if (cr6.lt) goto loc_831F7180;
loc_831F71B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f71c0
	if (cr6.eq) goto loc_831F71C0;
	// bl 0x83a75d58
	ctx.lr = 0x831F71C0;
	sub_83A75D58(ctx, base);
loc_831F71C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F71CC"))) PPC_WEAK_FUNC(sub_831F71CC);
PPC_FUNC_IMPL(__imp__sub_831F71CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F71D0"))) PPC_WEAK_FUNC(sub_831F71D0);
PPC_FUNC_IMPL(__imp__sub_831F71D0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f7200
	if (!cr6.eq) goto loc_831F7200;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20708
	ctx.r4.s64 = ctx.r11.s64 + 20708;
	// bl 0x831ea418
	ctx.lr = 0x831F71F8;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f7230
	goto loc_831F7230;
loc_831F7200:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x831f7218
	if (!cr6.eq) goto loc_831F7218;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x831f722c
	goto loc_831F722C;
loc_831F7218:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r3,5996(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5996);
	// bl 0x831f70b0
	ctx.lr = 0x831F722C;
	sub_831F70B0(ctx, base);
loc_831F722C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7230:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7240"))) PPC_WEAK_FUNC(sub_831F7240);
PPC_FUNC_IMPL(__imp__sub_831F7240) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,5992
	ctx.r30.s64 = ctx.r11.s64 + 5992;
	// lwz r11,5992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5992);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f7288
	if (!cr6.eq) goto loc_831F7288;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,20780
	ctx.r4.s64 = ctx.r11.s64 + 20780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7280;
	sub_831EA418(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x831f7354
	goto loc_831F7354;
loc_831F7288:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831f72ac
	if (!cr6.eq) goto loc_831F72AC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20768
	ctx.r4.s64 = ctx.r11.s64 + 20768;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F72A4;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f7354
	goto loc_831F7354;
loc_831F72AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f72e0
	if (!cr6.eq) goto loc_831F72E0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20720
	ctx.r4.s64 = ctx.r11.s64 + 20720;
	// bl 0x831ea3f0
	ctx.lr = 0x831F72C8;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f7354
	goto loc_831F7354;
loc_831F72D0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831f70b0
	ctx.lr = 0x831F72D8;
	sub_831F70B0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x831F72E0;
	sub_83A75E98(ctx, base);
loc_831F72E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f71d0
	ctx.lr = 0x831F72E8;
	sub_831F71D0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f72d0
	if (!cr6.eq) goto loc_831F72D0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f7318
	if (!cr6.eq) goto loc_831F7318;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x831eef98
	ctx.lr = 0x831F7308;
	sub_831EEF98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_831F7318:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f732c
	if (cr6.eq) goto loc_831F732C;
	// bl 0x83a75cd8
	ctx.lr = 0x831F732C;
	sub_83A75CD8(ctx, base);
loc_831F732C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f6928
	ctx.lr = 0x831F7334;
	sub_831F6928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a76e98
	ctx.lr = 0x831F7340;
	sub_83A76E98(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f7350
	if (cr6.eq) goto loc_831F7350;
	// bl 0x83a75d58
	ctx.lr = 0x831F7350;
	sub_83A75D58(ctx, base);
loc_831F7350:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7354:
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

__attribute__((alias("__imp__sub_831F736C"))) PPC_WEAK_FUNC(sub_831F736C);
PPC_FUNC_IMPL(__imp__sub_831F736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7370"))) PPC_WEAK_FUNC(sub_831F7370);
PPC_FUNC_IMPL(__imp__sub_831F7370) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831f7240
	sub_831F7240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7378"))) PPC_WEAK_FUNC(sub_831F7378);
PPC_FUNC_IMPL(__imp__sub_831F7378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,5996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,29552
	ctx.r5.s64 = ctx.r10.s64 + 29552;
	// b 0x83a76cb0
	sub_83A76CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F73A8"))) PPC_WEAK_FUNC(sub_831F73A8);
PPC_FUNC_IMPL(__imp__sub_831F73A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F73AC"))) PPC_WEAK_FUNC(sub_831F73AC);
PPC_FUNC_IMPL(__imp__sub_831F73AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F73B0"))) PPC_WEAK_FUNC(sub_831F73B0);
PPC_FUNC_IMPL(__imp__sub_831F73B0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f73f4
	if (cr6.eq) goto loc_831F73F4;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29552
	ctx.r5.s64 = ctx.r11.s64 + 29552;
	// bl 0x83a76cb0
	ctx.lr = 0x831F73E8;
	sub_83A76CB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a76bc0
	ctx.lr = 0x831F73F0;
	sub_83A76BC0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F73F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f7408
	if (cr6.eq) goto loc_831F7408;
	// bl 0x83a76938
	ctx.lr = 0x831F7404;
	sub_83A76938(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_831F7408:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f741c
	if (cr6.eq) goto loc_831F741C;
	// bl 0x83a77a48
	ctx.lr = 0x831F7418;
	sub_83A77A48(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_831F741C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f7430
	if (cr6.eq) goto loc_831F7430;
	// bl 0x83a75c60
	ctx.lr = 0x831F742C;
	sub_83A75C60(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_831F7430:
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

__attribute__((alias("__imp__sub_831F7448"))) PPC_WEAK_FUNC(sub_831F7448);
PPC_FUNC_IMPL(__imp__sub_831F7448) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r31,r11,5992
	ctx.r31.s64 = ctx.r11.s64 + 5992;
	// lwz r11,5992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5992);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f7484
	if (!cr6.eq) goto loc_831F7484;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20792
	ctx.r4.s64 = ctx.r11.s64 + 20792;
	// bl 0x831ea3f0
	ctx.lr = 0x831F747C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f74ac
	goto loc_831F74AC;
loc_831F7484:
	// bl 0x83102db0
	ctx.lr = 0x831F7488;
	sub_83102DB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f74a0
	if (cr6.eq) goto loc_831F74A0;
	// bl 0x831f73b0
	ctx.lr = 0x831F7498;
	sub_831F73B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831F74A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F74AC:
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

__attribute__((alias("__imp__sub_831F74C0"))) PPC_WEAK_FUNC(sub_831F74C0);
PPC_FUNC_IMPL(__imp__sub_831F74C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F74C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f7660
	if (cr6.eq) goto loc_831F7660;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r5,7
	ctx.r10.s64 = ctx.r5.s64 + 7;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r31,r10,0,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831cdcf0
	ctx.lr = 0x831F7510;
	sub_831CDCF0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f7528
	if (cr6.eq) goto loc_831F7528;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f7558
	if (!cr6.eq) goto loc_831F7558;
loc_831F7528:
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// bl 0x83a75be8
	ctx.lr = 0x831F7538;
	sub_83A75BE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f7554
	if (!cr0.eq) goto loc_831F7554;
loc_831F7544:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f73b0
	ctx.lr = 0x831F754C;
	sub_831F73B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f7664
	goto loc_831F7664;
loc_831F7554:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
loc_831F7558:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f7618
	if (!cr6.eq) goto loc_831F7618;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77ae0
	ctx.lr = 0x831F7570;
	sub_83A77AE0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f7544
	if (cr0.eq) goto loc_831F7544;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// bl 0x831cdcf0
	ctx.lr = 0x831F7590;
	sub_831CDCF0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r11,r11,29000
	ctx.r11.s64 = ctx.r11.s64 + 29000;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,26912
	ctx.r10.s64 = ctx.r10.s64 + 26912;
	// addi r9,r9,26904
	ctx.r9.s64 = ctx.r9.s64 + 26904;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r4,156
	ctx.r4.s64 = 156;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83a76aa8
	ctx.lr = 0x831F75F4;
	sub_83A76AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f7544
	if (cr0.eq) goto loc_831F7544;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r30,156
	ctx.r30.s64 = ctx.r30.s64 + 156;
	// bl 0x83a769e8
	ctx.lr = 0x831F760C;
	sub_83A769E8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a77b60
	ctx.lr = 0x831F7618;
	sub_83A77B60(ctx, base);
loc_831F7618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83a76b90
	ctx.lr = 0x831F7624;
	sub_83A76B90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a76d20
	ctx.lr = 0x831F7638;
	sub_83A76D20(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f7544
	if (cr0.eq) goto loc_831F7544;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_831F7660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7664:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F766C"))) PPC_WEAK_FUNC(sub_831F766C);
PPC_FUNC_IMPL(__imp__sub_831F766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7670"))) PPC_WEAK_FUNC(sub_831F7670);
PPC_FUNC_IMPL(__imp__sub_831F7670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F7678;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,5992
	ctx.r31.s64 = ctx.r11.s64 + 5992;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,5992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5992);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f76b8
	if (cr6.eq) goto loc_831F76B8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20852
	ctx.r4.s64 = ctx.r11.s64 + 20852;
	// bl 0x831ea3f0
	ctx.lr = 0x831F76B0;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f772c
	goto loc_831F772C;
loc_831F76B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rldicr r4,r10,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x831f6eb8
	ctx.lr = 0x831F76D0;
	sub_831F6EB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f76e8
	if (cr0.eq) goto loc_831F76E8;
loc_831F76D8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831F76DC:
	// bl 0x831f7448
	ctx.lr = 0x831F76E0;
	sub_831F7448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f772c
	goto loc_831F772C;
loc_831F76E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f7710
	if (!cr6.lt) goto loc_831F7710;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,20840
	ctx.r4.s64 = ctx.r11.s64 + 20840;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7708;
	sub_831EA418(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// b 0x831f76dc
	goto loc_831F76DC;
loc_831F7710:
	// bl 0x83102db0
	ctx.lr = 0x831F7714;
	sub_83102DB0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x831f74c0
	ctx.lr = 0x831F7724;
	sub_831F74C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f76d8
	if (!cr0.eq) goto loc_831F76D8;
loc_831F772C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7734"))) PPC_WEAK_FUNC(sub_831F7734);
PPC_FUNC_IMPL(__imp__sub_831F7734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7738"))) PPC_WEAK_FUNC(sub_831F7738);
PPC_FUNC_IMPL(__imp__sub_831F7738) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7748"))) PPC_WEAK_FUNC(sub_831F7748);
PPC_FUNC_IMPL(__imp__sub_831F7748) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F7768;
	sub_839F8330(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bge cr6,0x831f7778
	if (!cr6.lt) goto loc_831F7778;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831f779c
	goto loc_831F779C;
loc_831F7778:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,15244
	ctx.r4.s64 = ctx.r11.s64 + 15244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cef50
	ctx.lr = 0x831F778C;
	sub_831CEF50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x831f779c
	if (!cr0.eq) goto loc_831F779C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_831F779C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831F77BC"))) PPC_WEAK_FUNC(sub_831F77BC);
PPC_FUNC_IMPL(__imp__sub_831F77BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F77C0"))) PPC_WEAK_FUNC(sub_831F77C0);
PPC_FUNC_IMPL(__imp__sub_831F77C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F77C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r10,3160
	ctx.r4.s64 = ctx.r10.s64 + 3160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832e31e8
	ctx.lr = 0x831F77EC;
	sub_832E31E8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f77fc
	if (!cr0.eq) goto loc_831F77FC;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F77FC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,20972
	ctx.r4.s64 = ctx.r11.s64 + 20972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832e31e8
	ctx.lr = 0x831F7810;
	sub_832E31E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f781c
	if (!cr0.eq) goto loc_831F781C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_831F781C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7828"))) PPC_WEAK_FUNC(sub_831F7828);
PPC_FUNC_IMPL(__imp__sub_831F7828) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x831f77c0
	ctx.lr = 0x831F784C;
	sub_831F77C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f7860
	if (!cr6.eq) goto loc_831F7860;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F7860:
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

__attribute__((alias("__imp__sub_831F7878"))) PPC_WEAK_FUNC(sub_831F7878);
PPC_FUNC_IMPL(__imp__sub_831F7878) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// blt cr6,0x831f78ac
	if (cr6.lt) goto loc_831F78AC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r4,r11,20980
	ctx.r4.s64 = ctx.r11.s64 + 20980;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x831F78A4;
	sub_831EA410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f78c4
	goto loc_831F78C4;
loc_831F78AC:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6000
	ctx.r11.s64 = ctx.r11.s64 + 6000;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_831F78C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F78D4"))) PPC_WEAK_FUNC(sub_831F78D4);
PPC_FUNC_IMPL(__imp__sub_831F78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F78D8"))) PPC_WEAK_FUNC(sub_831F78D8);
PPC_FUNC_IMPL(__imp__sub_831F78D8) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831f7924
	if (cr6.lt) goto loc_831F7924;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x831f7924
	if (!cr6.lt) goto loc_831F7924;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6000
	ctx.r11.s64 = ctx.r11.s64 + 6000;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f791c
	if (!cr6.eq) goto loc_831F791C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,21040
	ctx.r4.s64 = ctx.r11.s64 + 21040;
	// b 0x831f7930
	goto loc_831F7930;
loc_831F791C:
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x831f793c
	goto loc_831F793C;
loc_831F7924:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,21028
	ctx.r4.s64 = ctx.r11.s64 + 21028;
loc_831F7930:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7938;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F793C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F794C"))) PPC_WEAK_FUNC(sub_831F794C);
PPC_FUNC_IMPL(__imp__sub_831F794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7950"))) PPC_WEAK_FUNC(sub_831F7950);
PPC_FUNC_IMPL(__imp__sub_831F7950) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r11,6000
	ctx.r30.s64 = ctx.r11.s64 + 6000;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_831F7970:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f7984
	if (cr6.eq) goto loc_831F7984;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x831f9ce8
	ctx.lr = 0x831F7984;
	sub_831F9CE8(ctx, base);
loc_831F7984:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f7970
	if (cr6.lt) goto loc_831F7970;
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

__attribute__((alias("__imp__sub_831F79AC"))) PPC_WEAK_FUNC(sub_831F79AC);
PPC_FUNC_IMPL(__imp__sub_831F79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F79B0"))) PPC_WEAK_FUNC(sub_831F79B0);
PPC_FUNC_IMPL(__imp__sub_831F79B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f9ca0
	sub_831F9CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F79B4"))) PPC_WEAK_FUNC(sub_831F79B4);
PPC_FUNC_IMPL(__imp__sub_831F79B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F79B8"))) PPC_WEAK_FUNC(sub_831F79B8);
PPC_FUNC_IMPL(__imp__sub_831F79B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f79d8
	if (!cr6.eq) goto loc_831F79D8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21100
	ctx.r4.s64 = ctx.r11.s64 + 21100;
	// b 0x831f7a44
	goto loc_831F7A44;
loc_831F79D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831f7a3c
	if (cr6.lt) goto loc_831F7A3C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x831f7a3c
	if (!cr6.lt) goto loc_831F7A3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f7a04
	if (!cr6.eq) goto loc_831F7A04;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21088
	ctx.r4.s64 = ctx.r11.s64 + 21088;
	// b 0x831f7a44
	goto loc_831F7A44;
loc_831F7A04:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f7a1c
	if (!cr6.eq) goto loc_831F7A1C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21076
	ctx.r4.s64 = ctx.r11.s64 + 21076;
	// b 0x831f7a44
	goto loc_831F7A44;
loc_831F7A1C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f7a34
	if (!cr6.eq) goto loc_831F7A34;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21064
	ctx.r4.s64 = ctx.r11.s64 + 21064;
	// b 0x831f7a44
	goto loc_831F7A44;
loc_831F7A34:
	// li r3,16600
	ctx.r3.s64 = 16600;
	// b 0x831f7a54
	goto loc_831F7A54;
loc_831F7A3C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21052
	ctx.r4.s64 = ctx.r11.s64 + 21052;
loc_831F7A44:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7A50;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F7A54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7A64"))) PPC_WEAK_FUNC(sub_831F7A64);
PPC_FUNC_IMPL(__imp__sub_831F7A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7A68"))) PPC_WEAK_FUNC(sub_831F7A68);
PPC_FUNC_IMPL(__imp__sub_831F7A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831F7A70;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,6000
	ctx.r29.s64 = ctx.r11.s64 + 6000;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
loc_831F7A8C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f7ac4
	if (cr6.eq) goto loc_831F7AC4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f7ac4
	if (cr6.eq) goto loc_831F7AC4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F7AB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f7ad0
	if (!cr0.eq) goto loc_831F7AD0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x831f7ac8
	goto loc_831F7AC8;
loc_831F7AC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F7AC8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f7adc
	if (!cr6.eq) goto loc_831F7ADC;
loc_831F7AD0:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// bge cr6,0x831f7a8c
	if (!cr6.lt) goto loc_831F7A8C;
loc_831F7ADC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831f7aec
	if (!cr6.eq) goto loc_831F7AEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f7b7c
	goto loc_831F7B7C;
loc_831F7AEC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f7b68
	if (cr6.eq) goto loc_831F7B68;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F7B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f7b34
	if (cr0.eq) goto loc_831F7B34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x831f7b5c
	goto loc_831F7B5C;
loc_831F7B34:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x831f7b48
	if (cr6.lt) goto loc_831F7B48;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x831f7b50
	if (cr6.lt) goto loc_831F7B50;
loc_831F7B48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_831F7B50:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f7b60
	if (!cr6.eq) goto loc_831F7B60;
loc_831F7B5C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_831F7B60:
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x831f7b74
	goto loc_831F7B74;
loc_831F7B68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_831F7B74:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F7B7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7B84"))) PPC_WEAK_FUNC(sub_831F7B84);
PPC_FUNC_IMPL(__imp__sub_831F7B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7B88"))) PPC_WEAK_FUNC(sub_831F7B88);
PPC_FUNC_IMPL(__imp__sub_831F7B88) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831f7bdc
	if (cr6.lt) goto loc_831F7BDC;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x831f7bdc
	if (!cr6.lt) goto loc_831F7BDC;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6000
	ctx.r11.s64 = ctx.r11.s64 + 6000;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831f7bd0
	if (!cr6.eq) goto loc_831F7BD0;
loc_831F7BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f7bf4
	goto loc_831F7BF4;
loc_831F7BD0:
	// lwz r3,68(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// bl 0x831f9be0
	ctx.lr = 0x831F7BD8;
	sub_831F9BE0(ctx, base);
	// b 0x831f7bc8
	goto loc_831F7BC8;
loc_831F7BDC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r4,r11,21172
	ctx.r4.s64 = ctx.r11.s64 + 21172;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x831F7BF0;
	sub_831EA410(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F7BF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F7C04"))) PPC_WEAK_FUNC(sub_831F7C04);
PPC_FUNC_IMPL(__imp__sub_831F7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7C08"))) PPC_WEAK_FUNC(sub_831F7C08);
PPC_FUNC_IMPL(__imp__sub_831F7C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r31,7
	ctx.r31.s64 = 7;
loc_831F7C1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f7b88
	ctx.lr = 0x831F7C24;
	sub_831F7B88(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x831f7c1c
	if (!cr0.lt) goto loc_831F7C1C;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// ori r4,r4,1728
	ctx.r4.u64 = ctx.r4.u64 | 1728;
	// bl 0x831ea7a0
	ctx.lr = 0x831F7C40;
	sub_831EA7A0(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,7768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7768, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831F7C64"))) PPC_WEAK_FUNC(sub_831F7C64);
PPC_FUNC_IMPL(__imp__sub_831F7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7C68"))) PPC_WEAK_FUNC(sub_831F7C68);
PPC_FUNC_IMPL(__imp__sub_831F7C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F7C70;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// blt cr6,0x831f7ca8
	if (cr6.lt) goto loc_831F7CA8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r4,r11,21376
	ctx.r4.s64 = ctx.r11.s64 + 21376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea410
	ctx.lr = 0x831F7CA4;
	sub_831EA410(ctx, base);
	// b 0x831f7dec
	goto loc_831F7DEC;
loc_831F7CA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7878
	ctx.lr = 0x831F7CB0;
	sub_831F7878(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f7cd0
	if (cr0.eq) goto loc_831F7CD0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,21332
	ctx.r4.s64 = ctx.r11.s64 + 21332;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F7CCC;
	sub_831EA400(ctx, base);
	// b 0x831f7dec
	goto loc_831F7DEC;
loc_831F7CD0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f7dd8
	if (cr6.eq) goto loc_831F7DD8;
	// cmpwi cr6,r31,16508
	cr6.compare<int32_t>(ctx.r31.s32, 16508, xer);
	// blt cr6,0x831f7dd8
	if (cr6.lt) goto loc_831F7DD8;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x831f7d08
	if (!cr6.eq) goto loc_831F7D08;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r6,r11,21304
	ctx.r6.s64 = ctx.r11.s64 + 21304;
	// addi r5,r10,13664
	ctx.r5.s64 = ctx.r10.s64 + 13664;
	// bl 0x831ea730
	ctx.lr = 0x831F7D04;
	sub_831EA730(ctx, base);
	// b 0x831f7d20
	goto loc_831F7D20;
loc_831F7D08:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r6,r11,21284
	ctx.r6.s64 = ctx.r11.s64 + 21284;
	// addi r5,r10,21276
	ctx.r5.s64 = ctx.r10.s64 + 21276;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831ea730
	ctx.lr = 0x831F7D20;
	sub_831EA730(ctx, base);
loc_831F7D20:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x831F7D30;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bne cr6,0x831f7d54
	if (!cr6.eq) goto loc_831F7D54;
	// li r11,-2
	ctx.r11.s64 = -2;
	// b 0x831f7d74
	goto loc_831F7D74;
loc_831F7D54:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,7764
	ctx.r11.s64 = ctx.r11.s64 + 7764;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x831f7d70
	if (!cr6.eq) goto loc_831F7D70;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831f7d74
	goto loc_831F7D74;
loc_831F7D70:
	// li r11,2
	ctx.r11.s64 = 2;
loc_831F7D74:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r5,16508
	ctx.r5.s64 = 16508;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f9d10
	ctx.lr = 0x831F7D90;
	sub_831F9D10(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831f7dac
	if (!cr0.eq) goto loc_831F7DAC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21232
	ctx.r4.s64 = ctx.r11.s64 + 21232;
	// bl 0x831ea3f0
	ctx.lr = 0x831F7DA8;
	sub_831EA3F0(ctx, base);
	// b 0x831f7dec
	goto loc_831F7DEC;
loc_831F7DAC:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// beq cr6,0x831f7dc0
	if (cr6.eq) goto loc_831F7DC0;
	// li r4,2
	ctx.r4.s64 = 2;
loc_831F7DC0:
	// bl 0x831f9ab0
	ctx.lr = 0x831F7DC4;
	sub_831F9AB0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f9ac8
	ctx.lr = 0x831F7DD0;
	sub_831F9AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f7df0
	goto loc_831F7DF0;
loc_831F7DD8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,21220
	ctx.r4.s64 = ctx.r11.s64 + 21220;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7DEC;
	sub_831EA418(ctx, base);
loc_831F7DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7DF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7DF8"))) PPC_WEAK_FUNC(sub_831F7DF8);
PPC_FUNC_IMPL(__imp__sub_831F7DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F7E00;
	__savegprlr_29(ctx, base);
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
	// bl 0x831f79b8
	ctx.lr = 0x831F7E14;
	sub_831F79B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x831f7ee0
	if (!cr0.gt) goto loc_831F7EE0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f7ecc
	if (cr6.eq) goto loc_831F7ECC;
	// cmpw cr6,r29,r4
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, xer);
	// blt cr6,0x831f7ecc
	if (cr6.lt) goto loc_831F7ECC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77b68
	ctx.lr = 0x831F7E38;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x831F7E48;
	sub_83A77B78(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831ce980
	ctx.lr = 0x831F7E64;
	sub_831CE980(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lwz r29,7760(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7760);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16508
	ctx.r4.s64 = 16508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x83a77b78
	ctx.lr = 0x831F7E94;
	sub_83A77B78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,16508
	ctx.r6.s64 = 16508;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831f7c68
	ctx.lr = 0x831F7EA8;
	sub_831F7C68(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f7ec4
	if (!cr0.eq) goto loc_831F7EC4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21436
	ctx.r4.s64 = ctx.r11.s64 + 21436;
	// bl 0x831ea3f0
	ctx.lr = 0x831F7EC0;
	sub_831EA3F0(ctx, base);
	// b 0x831f7ee0
	goto loc_831F7EE0;
loc_831F7EC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f7ee4
	goto loc_831F7EE4;
loc_831F7ECC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,21424
	ctx.r4.s64 = ctx.r11.s64 + 21424;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7EE0;
	sub_831EA418(ctx, base);
loc_831F7EE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7EE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7EEC"))) PPC_WEAK_FUNC(sub_831F7EEC);
PPC_FUNC_IMPL(__imp__sub_831F7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7EF0"))) PPC_WEAK_FUNC(sub_831F7EF0);
PPC_FUNC_IMPL(__imp__sub_831F7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F7EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,7768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7768);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f7f2c
	if (!cr6.eq) goto loc_831F7F2C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,21568
	ctx.r4.s64 = ctx.r11.s64 + 21568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F7F24;
	sub_831EA418(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x831f7fdc
	goto loc_831F7FDC;
loc_831F7F2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f7df8
	ctx.lr = 0x831F7F34;
	sub_831F7DF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831f7f54
	if (!cr0.eq) goto loc_831F7F54;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21524
	ctx.r4.s64 = ctx.r11.s64 + 21524;
loc_831F7F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F7F4C;
	sub_831EA3F0(ctx, base);
loc_831F7F4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f7fdc
	goto loc_831F7FDC;
loc_831F7F54:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,6000
	ctx.r30.s64 = ctx.r11.s64 + 6000;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f7f8c
	if (cr6.eq) goto loc_831F7F8C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21112
	ctx.r4.s64 = ctx.r11.s64 + 21112;
	// bl 0x831ea3f0
	ctx.lr = 0x831F7F80;
	sub_831EA3F0(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x831f9be0
	ctx.lr = 0x831F7F88;
	sub_831F9BE0(ctx, base);
	// b 0x831f7f4c
	goto loc_831F7F4C;
loc_831F7F8C:
	// stwx r31,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// bl 0x831eeea0
	ctx.lr = 0x831F7FAC;
	sub_831EEEA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f7fd8
	if (cr0.eq) goto loc_831F7FD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x831f9be0
	ctx.lr = 0x831F7FCC;
	sub_831F9BE0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21480
	ctx.r4.s64 = ctx.r11.s64 + 21480;
	// b 0x831f7f44
	goto loc_831F7F44;
loc_831F7FD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F7FDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F7FE4"))) PPC_WEAK_FUNC(sub_831F7FE4);
PPC_FUNC_IMPL(__imp__sub_831F7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F7FE8"))) PPC_WEAK_FUNC(sub_831F7FE8);
PPC_FUNC_IMPL(__imp__sub_831F7FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F7FF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// addi r8,r10,7760
	ctx.r8.s64 = ctx.r10.s64 + 7760;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r3,7760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7760, ctx.r3.u32);
	// addi r10,r9,6000
	ctx.r10.s64 = ctx.r9.s64 + 6000;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831F8024:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831f8024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F8024;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r30,r11,6032
	ctx.r30.s64 = ctx.r11.s64 + 6032;
	// ori r4,r4,1728
	ctx.r4.u64 = ctx.r4.u64 | 1728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x831F8044;
	sub_831EA7A0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831F8054:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831f8054
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F8054;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_831F8074:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x831f811c
	if (cr6.eq) goto loc_831F811C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831eee28
	ctx.lr = 0x831F808C;
	sub_831EEE28(ctx, base);
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// bne cr6,0x831f80a8
	if (!cr6.eq) goto loc_831F80A8;
	// bl 0x831fa288
	ctx.lr = 0x831F8098;
	sub_831FA288(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,30536
	ctx.r11.s64 = ctx.r11.s64 + 30536;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x831f80dc
	goto loc_831F80DC;
loc_831F80A8:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x831f80cc
	if (cr6.lt) goto loc_831F80CC;
	// beq cr6,0x831f80c0
	if (cr6.eq) goto loc_831F80C0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// b 0x831f80d4
	goto loc_831F80D4;
loc_831F80C0:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,30760
	ctx.r11.s64 = ctx.r11.s64 + 30760;
	// b 0x831f80d4
	goto loc_831F80D4;
loc_831F80CC:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,30656
	ctx.r11.s64 = ctx.r11.s64 + 30656;
loc_831F80D4:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x831f9380
	ctx.lr = 0x831F80DC;
	sub_831F9380(ctx, base);
loc_831F80DC:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mulli r11,r31,16600
	ctx.r11.s64 = ctx.r31.s64 * 16600;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,16600
	ctx.r5.s64 = 16600;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f7ef0
	ctx.lr = 0x831F8104;
	sub_831F7EF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f8128
	if (!cr0.eq) goto loc_831F8128;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(ctx.r28.u32, 8, xer);
	// blt cr6,0x831f8074
	if (cr6.lt) goto loc_831F8074;
loc_831F811C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F8120:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831F8128:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f8120
	goto loc_831F8120;
}

__attribute__((alias("__imp__sub_831F8130"))) PPC_WEAK_FUNC(sub_831F8130);
PPC_FUNC_IMPL(__imp__sub_831F8130) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F8140"))) PPC_WEAK_FUNC(sub_831F8140);
PPC_FUNC_IMPL(__imp__sub_831F8140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,5148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F814C"))) PPC_WEAK_FUNC(sub_831F814C);
PPC_FUNC_IMPL(__imp__sub_831F814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8150"))) PPC_WEAK_FUNC(sub_831F8150);
PPC_FUNC_IMPL(__imp__sub_831F8150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r3,5148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5148, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F815C"))) PPC_WEAK_FUNC(sub_831F815C);
PPC_FUNC_IMPL(__imp__sub_831F815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8160"))) PPC_WEAK_FUNC(sub_831F8160);
PPC_FUNC_IMPL(__imp__sub_831F8160) {
	PPC_FUNC_PROLOGUE();
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F816C"))) PPC_WEAK_FUNC(sub_831F816C);
PPC_FUNC_IMPL(__imp__sub_831F816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8170"))) PPC_WEAK_FUNC(sub_831F8170);
PPC_FUNC_IMPL(__imp__sub_831F8170) {
	PPC_FUNC_PROLOGUE();
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F817C"))) PPC_WEAK_FUNC(sub_831F817C);
PPC_FUNC_IMPL(__imp__sub_831F817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8180"))) PPC_WEAK_FUNC(sub_831F8180);
PPC_FUNC_IMPL(__imp__sub_831F8180) {
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
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831F81A0;
	sub_831CDCF0(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r11,5148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5148);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831F81CC"))) PPC_WEAK_FUNC(sub_831F81CC);
PPC_FUNC_IMPL(__imp__sub_831F81CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F81D0"))) PPC_WEAK_FUNC(sub_831F81D0);
PPC_FUNC_IMPL(__imp__sub_831F81D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f81e0
	if (cr6.eq) goto loc_831F81E0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_831F81E0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F81F4"))) PPC_WEAK_FUNC(sub_831F81F4);
PPC_FUNC_IMPL(__imp__sub_831F81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F81F8"))) PPC_WEAK_FUNC(sub_831F81F8);
PPC_FUNC_IMPL(__imp__sub_831F81F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F8200"))) PPC_WEAK_FUNC(sub_831F8200);
PPC_FUNC_IMPL(__imp__sub_831F8200) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F8208"))) PPC_WEAK_FUNC(sub_831F8208);
PPC_FUNC_IMPL(__imp__sub_831F8208) {
	PPC_FUNC_PROLOGUE();
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F8210"))) PPC_WEAK_FUNC(sub_831F8210);
PPC_FUNC_IMPL(__imp__sub_831F8210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831F8218;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f8254
	if (cr6.eq) goto loc_831F8254;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x831f8254
	if (cr6.eq) goto loc_831F8254;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x831f8254
	if (cr6.eq) goto loc_831F8254;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21744
	ctx.r4.s64 = ctx.r11.s64 + 21744;
loc_831F8244:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F824C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f83b8
	goto loc_831F83B8;
loc_831F8254:
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f8270
	if (!cr6.lt) goto loc_831F8270;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21688
	ctx.r4.s64 = ctx.r11.s64 + 21688;
	// b 0x831f8244
	goto loc_831F8244;
loc_831F8270:
	// ld r29,248(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(ctx.r29.s64, 0, xer);
	// bge cr6,0x831f8288
	if (!cr6.lt) goto loc_831F8288;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21652
	ctx.r4.s64 = ctx.r11.s64 + 21652;
	// b 0x831f8244
	goto loc_831F8244;
loc_831F8288:
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,228(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r26,244(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r28,236(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ld r25,280(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// std r29,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r29.u64);
	// stb r30,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stb r26,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r26.u8);
	// stb r4,106(r31)
	PPC_STORE_U8(ctx.r31.u32 + 106, ctx.r4.u8);
	// stb r7,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r7.u8);
	// stb r10,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r10.u8);
	// stb r30,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// std r25,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r25.u64);
	// stb r30,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ble cr6,0x831f8314
	if (!cr6.gt) goto loc_831F8314;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x831f83c0
	if (cr6.gt) goto loc_831F83C0;
loc_831F8314:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f832c
	if (cr6.eq) goto loc_831F832C;
	// extsb. r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831f83ac
	if (cr0.eq) goto loc_831F83AC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831f833c
	if (!cr6.eq) goto loc_831F833C;
loc_831F832C:
	// extsb. r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831f83ac
	if (!cr0.eq) goto loc_831F83AC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f83c0
	if (cr6.eq) goto loc_831F83C0;
loc_831F833C:
	// extsb. r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831f83c0
	if (cr0.eq) goto loc_831F83C0;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8370
	if (cr6.eq) goto loc_831F8370;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831F8370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F8370:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831f3468
	ctx.lr = 0x831F837C;
	sub_831F3468(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f83a8
	if (cr6.eq) goto loc_831F83A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831F83A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F83A8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F83AC:
	// li r11,7
	ctx.r11.s64 = 7;
loc_831F83B0:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F83B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831F83C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831f83b0
	goto loc_831F83B0;
}

__attribute__((alias("__imp__sub_831F83C8"))) PPC_WEAK_FUNC(sub_831F83C8);
PPC_FUNC_IMPL(__imp__sub_831F83C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stb r11,111(r3)
	PPC_STORE_U8(ctx.r3.u32 + 111, ctx.r11.u8);
	// std r6,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r6.u64);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F8400"))) PPC_WEAK_FUNC(sub_831F8400);
PPC_FUNC_IMPL(__imp__sub_831F8400) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f8494
	if (cr6.eq) goto loc_831F8494;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f8480
	if (cr6.eq) goto loc_831F8480;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x831f8450
	if (cr6.eq) goto loc_831F8450;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bne cr6,0x831f8494
	if (!cr6.eq) goto loc_831F8494;
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// b 0x831f8494
	goto loc_831F8494;
loc_831F8450:
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f8468
	if (!cr0.eq) goto loc_831F8468;
	// lbz r11,111(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 111);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8478
	if (cr0.eq) goto loc_831F8478;
loc_831F8468:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831f3468
	ctx.lr = 0x831F8474;
	sub_831F3468(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831F8478:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x831f8494
	goto loc_831F8494;
loc_831F8480:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f8494
	if (!cr6.eq) goto loc_831F8494;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F8494:
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

__attribute__((alias("__imp__sub_831F84AC"))) PPC_WEAK_FUNC(sub_831F84AC);
PPC_FUNC_IMPL(__imp__sub_831F84AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F84B0"))) PPC_WEAK_FUNC(sub_831F84B0);
PPC_FUNC_IMPL(__imp__sub_831F84B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F84B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f84f4
	if (cr6.eq) goto loc_831F84F4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831f34a8
	ctx.lr = 0x831F84DC;
	sub_831F34A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x831f860c
	goto loc_831F860C;
loc_831F84F4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r11,7780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7780);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f8608
	if (!cr6.eq) goto loc_831F8608;
	// lbz r11,105(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 105);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8534
	if (cr0.eq) goto loc_831F8534;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831f33b8
	ctx.lr = 0x831F8520;
	sub_831F33B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f8534
	if (!cr6.eq) goto loc_831F8534;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x831f85fc
	goto loc_831F85FC;
loc_831F8534:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8560
	if (cr6.eq) goto loc_831F8560;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831F8560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F8560:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// li r5,10
	ctx.r5.s64 = 10;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x831f8574
	if (cr6.eq) goto loc_831F8574;
	// li r5,3
	ctx.r5.s64 = 3;
loc_831F8574:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x831f3430
	ctx.lr = 0x831F8588;
	sub_831F3430(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f85b8
	if (cr6.eq) goto loc_831F85B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,2
	ctx.r5.s64 = 2;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831F85B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F85B8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831f85f4
	if (!cr6.eq) goto loc_831F85F4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f85f4
	if (cr6.eq) goto loc_831F85F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// bl 0x831f34a8
	ctx.lr = 0x831F85E0;
	sub_831F34A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x831f8608
	goto loc_831F8608;
loc_831F85F4:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
loc_831F85FC:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F8608:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F860C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8614"))) PPC_WEAK_FUNC(sub_831F8614);
PPC_FUNC_IMPL(__imp__sub_831F8614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8618"))) PPC_WEAK_FUNC(sub_831F8618);
PPC_FUNC_IMPL(__imp__sub_831F8618) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F8640;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,129
	cr6.compare<int32_t>(ctx.r3.s32, 129, xer);
	// bne cr6,0x831f8654
	if (!cr6.eq) goto loc_831F8654;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bgt cr6,0x831f8668
	if (cr6.gt) goto loc_831F8668;
loc_831F8654:
	// cmpwi cr6,r3,130
	cr6.compare<int32_t>(ctx.r3.s32, 130, xer);
	// bne cr6,0x831f8674
	if (!cr6.eq) goto loc_831F8674;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x831f8674
	if (!cr6.gt) goto loc_831F8674;
loc_831F8668:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x831f8698
	goto loc_831F8698;
loc_831F8674:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F8694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831F8698:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831f86c4
	if (cr6.gt) goto loc_831F86C4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21980
	ctx.r4.s64 = ctx.r11.s64 + 21980;
loc_831F86A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F86B0;
	sub_831EA3F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x831f8728
	goto loc_831F8728;
loc_831F86C4:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x831f86dc
	if (!cr6.gt) goto loc_831F86DC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21920
	ctx.r4.s64 = ctx.r11.s64 + 21920;
	// b 0x831f86a8
	goto loc_831F86A8;
loc_831F86DC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwa r5,84(r31)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 84));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F8700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x831f871c
	if (cr6.eq) goto loc_831F871C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,21880
	ctx.r4.s64 = ctx.r11.s64 + 21880;
	// b 0x831f86a8
	goto loc_831F86A8;
loc_831F871C:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_831F8728:
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

__attribute__((alias("__imp__sub_831F8740"))) PPC_WEAK_FUNC(sub_831F8740);
PPC_FUNC_IMPL(__imp__sub_831F8740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r10.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831f3540
	sub_831F3540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8768"))) PPC_WEAK_FUNC(sub_831F8768);
PPC_FUNC_IMPL(__imp__sub_831F8768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F876C"))) PPC_WEAK_FUNC(sub_831F876C);
PPC_FUNC_IMPL(__imp__sub_831F876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8770"))) PPC_WEAK_FUNC(sub_831F8770);
PPC_FUNC_IMPL(__imp__sub_831F8770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F8778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f88ec
	if (!cr6.eq) goto loc_831F88EC;
	// lbz r11,107(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 107);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f88ec
	if (!cr0.eq) goto loc_831F88EC;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ld r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// ld r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x831f87c8
	if (cr6.lt) goto loc_831F87C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F87C8:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lbz r7,110(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bne 0x831f87f8
	if (!cr0.eq) goto loc_831F87F8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831f87f4
	if (cr6.lt) goto loc_831F87F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F87F4:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831F87F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x831f8808
	if (!cr6.lt) goto loc_831F8808;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_831F8808:
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831f8824
	if (!cr6.eq) goto loc_831F8824;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F8818:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x831f89f8
	goto loc_831F89F8;
loc_831F8824:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,7784
	ctx.r10.s64 = ctx.r11.s64 + 7784;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f8840
	if (cr6.eq) goto loc_831F8840;
loc_831F8838:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f89f8
	goto loc_831F89F8;
loc_831F8840:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,5152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5152);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bge cr6,0x831f8838
	if (!cr6.lt) goto loc_831F8838;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8884
	if (cr6.eq) goto loc_831F8884;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F8884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F8884:
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83572958
	ctx.lr = 0x831F8894;
	sub_83572958(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwa r6,80(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 80));
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// bl 0x831f34d8
	ctx.lr = 0x831F88C4;
	sub_831F34D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f88e8
	if (cr0.eq) goto loc_831F88E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
loc_831F88D8:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x831f89f8
	goto loc_831F89F8;
loc_831F88E8:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_831F88EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f89e8
	if (!cr6.eq) goto loc_831F89E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f3510
	ctx.lr = 0x831F8908;
	sub_831F3510(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f8920
	if (cr0.eq) goto loc_831F8920;
loc_831F8910:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// b 0x831f8818
	goto loc_831F8818;
loc_831F8920:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f89e8
	if (cr6.eq) goto loc_831F89E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x831f3560
	ctx.lr = 0x831F8944;
	sub_831F3560(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f8910
	if (!cr0.eq) goto loc_831F8910;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8984
	if (cr6.eq) goto loc_831F8984;
	// lwa r9,84(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 84));
	// li r5,4
	ctx.r5.s64 = 4;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bctrl 
	ctx.lr = 0x831F8984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F8984:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x831f89a0
	if (!cr6.lt) goto loc_831F89A0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x831f88d8
	goto loc_831F88D8;
loc_831F89A0:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x831f89e0
	if (!cr6.lt) goto loc_831F89E0;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x831f89e0
	if (!cr6.lt) goto loc_831F89E0;
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, xer);
	// blt cr6,0x831f89e8
	if (cr6.lt) goto loc_831F89E8;
loc_831F89E0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F89E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831F89F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F8A00"))) PPC_WEAK_FUNC(sub_831F8A00);
PPC_FUNC_IMPL(__imp__sub_831F8A00) {
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
	// lbz r11,106(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 106);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f8a38
	if (!cr0.eq) goto loc_831F8A38;
	// lbz r11,111(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 111);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8aa8
	if (cr0.eq) goto loc_831F8AA8;
	// lbz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8aa8
	if (cr0.eq) goto loc_831F8AA8;
loc_831F8A38:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8a64
	if (cr6.eq) goto loc_831F8A64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,5
	ctx.r5.s64 = 5;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831F8A64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F8A64:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f3468
	ctx.lr = 0x831F8A70;
	sub_831F3468(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8a9c
	if (cr6.eq) goto loc_831F8A9C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831F8A9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F8A9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
loc_831F8AA8:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8ac8
	if (cr0.eq) goto loc_831F8AC8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x831f8b7c
	goto loc_831F8B7C;
loc_831F8AC8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f8adc
	if (cr6.eq) goto loc_831F8ADC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x831f8b00
	goto loc_831F8B00;
loc_831F8ADC:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8af0
	if (cr0.eq) goto loc_831F8AF0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831f8b00
	goto loc_831F8B00;
loc_831F8AF0:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8b08
	if (cr0.eq) goto loc_831F8B08;
	// li r11,6
	ctx.r11.s64 = 6;
loc_831F8B00:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x831f8b7c
	goto loc_831F8B7C;
loc_831F8B08:
	// lbz r11,110(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8b1c
	if (cr0.eq) goto loc_831F8B1C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x831f8b70
	goto loc_831F8B70;
loc_831F8B1C:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x831f8b3c
	if (cr6.lt) goto loc_831F8B3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F8B3C:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x831f8b58
	if (!cr6.gt) goto loc_831F8B58;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F8B58:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x831f8b64
	if (!cr6.gt) goto loc_831F8B64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_831F8B64:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x831f8b70
	if (!cr6.gt) goto loc_831F8B70;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831F8B70:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_831F8B7C:
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

__attribute__((alias("__imp__sub_831F8B94"))) PPC_WEAK_FUNC(sub_831F8B94);
PPC_FUNC_IMPL(__imp__sub_831F8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8B98"))) PPC_WEAK_FUNC(sub_831F8B98);
PPC_FUNC_IMPL(__imp__sub_831F8B98) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwa r5,84(r3)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 84));
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bctrl 
	ctx.lr = 0x831F8BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f8bf4
	if (cr0.eq) goto loc_831F8BF4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22028
	ctx.r4.s64 = ctx.r11.s64 + 22028;
	// bl 0x831ea3f0
	ctx.lr = 0x831F8BDC;
	sub_831EA3F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x831f8c98
	goto loc_831F8C98;
loc_831F8BF4:
	// lbz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8c08
	if (cr0.eq) goto loc_831F8C08;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x831f8c18
	goto loc_831F8C18;
loc_831F8C08:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8c20
	if (cr0.eq) goto loc_831F8C20;
	// li r11,6
	ctx.r11.s64 = 6;
loc_831F8C18:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x831f8c94
	goto loc_831F8C94;
loc_831F8C20:
	// lbz r11,110(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 110);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8c34
	if (cr0.eq) goto loc_831F8C34;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x831f8c88
	goto loc_831F8C88;
loc_831F8C34:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x831f8c54
	if (cr6.lt) goto loc_831F8C54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F8C54:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x831f8c70
	if (!cr6.gt) goto loc_831F8C70;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F8C70:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x831f8c7c
	if (!cr6.gt) goto loc_831F8C7C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_831F8C7C:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x831f8c88
	if (!cr6.gt) goto loc_831F8C88;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831F8C88:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_831F8C94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F8C98:
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

__attribute__((alias("__imp__sub_831F8CAC"))) PPC_WEAK_FUNC(sub_831F8CAC);
PPC_FUNC_IMPL(__imp__sub_831F8CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8CB0"))) PPC_WEAK_FUNC(sub_831F8CB0);
PPC_FUNC_IMPL(__imp__sub_831F8CB0) {
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
	// lbz r11,107(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 107);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8cd4
	if (cr0.eq) goto loc_831F8CD4;
	// bl 0x831f8400
	ctx.lr = 0x831F8CD4;
	sub_831F8400(ctx, base);
loc_831F8CD4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f8cf0
	if (!cr6.eq) goto loc_831F8CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f84b0
	ctx.lr = 0x831F8CE8;
	sub_831F84B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f8d84
	if (cr0.eq) goto loc_831F8D84;
loc_831F8CF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831f8d0c
	if (!cr6.eq) goto loc_831F8D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8770
	ctx.lr = 0x831F8D04;
	sub_831F8770(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f8d84
	if (cr0.eq) goto loc_831F8D84;
loc_831F8D0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f8d28
	if (!cr6.eq) goto loc_831F8D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8a00
	ctx.lr = 0x831F8D20;
	sub_831F8A00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f8d84
	if (cr0.eq) goto loc_831F8D84;
loc_831F8D28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x831f8d44
	if (!cr6.eq) goto loc_831F8D44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8b98
	ctx.lr = 0x831F8D3C;
	sub_831F8B98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f8d84
	if (cr0.eq) goto loc_831F8D84;
loc_831F8D44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831f8d74
	if (!cr6.eq) goto loc_831F8D74;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21824
	ctx.r4.s64 = ctx.r11.s64 + 21824;
	// bl 0x831ea3f0
	ctx.lr = 0x831F8D60;
	sub_831EA3F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x831f8d84
	goto loc_831F8D84;
loc_831F8D74:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x831f8d84
	if (!cr6.eq) goto loc_831F8D84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8618
	ctx.lr = 0x831F8D84;
	sub_831F8618(ctx, base);
loc_831F8D84:
	// lbz r11,107(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 107);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f8d98
	if (cr0.eq) goto loc_831F8D98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8400
	ctx.lr = 0x831F8D98;
	sub_831F8400(ctx, base);
loc_831F8D98:
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

__attribute__((alias("__imp__sub_831F8DAC"))) PPC_WEAK_FUNC(sub_831F8DAC);
PPC_FUNC_IMPL(__imp__sub_831F8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8DB0"))) PPC_WEAK_FUNC(sub_831F8DB0);
PPC_FUNC_IMPL(__imp__sub_831F8DB0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f8df8
	if (cr6.eq) goto loc_831F8DF8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f8df8
	if (cr6.eq) goto loc_831F8DF8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831f8df8
	if (cr6.eq) goto loc_831F8DF8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831f8df8
	if (cr6.eq) goto loc_831F8DF8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831f8df8
	if (cr6.eq) goto loc_831F8DF8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x831f8e48
	if (!cr6.eq) goto loc_831F8E48;
loc_831F8DF8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,22064
	ctx.r4.s64 = ctx.r11.s64 + 22064;
	// bl 0x831ea3f0
	ctx.lr = 0x831F8E08;
	sub_831EA3F0(ctx, base);
	// b 0x831f8e3c
	goto loc_831F8E3C;
loc_831F8E0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r10.u8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831f8e34
	if (!cr6.eq) goto loc_831F8E34;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f8e34
	if (cr6.eq) goto loc_831F8E34;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831f3540
	ctx.lr = 0x831F8E34;
	sub_831F3540(ctx, base);
loc_831F8E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f8cb0
	ctx.lr = 0x831F8E3C;
	sub_831F8CB0(ctx, base);
loc_831F8E3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f8e0c
	if (!cr6.eq) goto loc_831F8E0C;
loc_831F8E48:
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

__attribute__((alias("__imp__sub_831F8E5C"))) PPC_WEAK_FUNC(sub_831F8E5C);
PPC_FUNC_IMPL(__imp__sub_831F8E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F8E60"))) PPC_WEAK_FUNC(sub_831F8E60);
PPC_FUNC_IMPL(__imp__sub_831F8E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x831F8E68;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831fb080
	ctx.lr = 0x831F8E74;
	sub_831FB080(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,7792
	ctx.r31.s64 = ctx.r11.s64 + 7792;
	// li r5,16336
	ctx.r5.s64 = 16336;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,16800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16800, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x831F8E94;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x831F8EA4;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,301
	ctx.r3.s64 = ctx.r31.s64 + 301;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x831F8EB4;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x831F8EC4;
	sub_831CDCF0(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// addi r25,r31,464
	ctx.r25.s64 = ctx.r31.s64 + 464;
	// addi r26,r31,304
	ctx.r26.s64 = ctx.r31.s64 + 304;
	// addi r29,r31,16820
	ctx.r29.s64 = ctx.r31.s64 + 16820;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r22,r10,22276
	ctx.r22.s64 = ctx.r10.s64 + 22276;
	// addi r21,r11,22248
	ctx.r21.s64 = ctx.r11.s64 + 22248;
loc_831F8EEC:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x831F8EFC;
	sub_831CDCF0(ctx, base);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea730
	ctx.lr = 0x831F8F18;
	sub_831EA730(ctx, base);
	// li r11,156
	ctx.r11.s64 = 156;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x831f9e18
	ctx.lr = 0x831F8F4C;
	sub_831F9E18(ctx, base);
	// addi r27,r31,16804
	ctx.r27.s64 = ctx.r31.s64 + 16804;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u32);
	// beq 0x831f8fec
	if (cr0.eq) goto loc_831F8FEC;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831faf50
	ctx.lr = 0x831F8F68;
	sub_831FAF50(ctx, base);
	// addi r10,r31,16808
	ctx.r10.s64 = ctx.r31.s64 + 16808;
	// addi r11,r31,301
	ctx.r11.s64 = ctx.r31.s64 + 301;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x831faf78
	ctx.lr = 0x831F8F80;
	sub_831FAF78(ctx, base);
	// addi r10,r31,16812
	ctx.r10.s64 = ctx.r31.s64 + 16812;
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x831fafa0
	ctx.lr = 0x831F8F98;
	sub_831FAFA0(ctx, base);
	// addi r11,r31,16816
	ctx.r11.s64 = ctx.r31.s64 + 16816;
	// li r4,-2
	ctx.r4.s64 = -2;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x831f9ab0
	ctx.lr = 0x831F8FAC;
	sub_831F9AB0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x831f9ac8
	ctx.lr = 0x831F8FB8;
	sub_831F9AC8(ctx, base);
	// addi r11,r31,16820
	ctx.r11.s64 = ctx.r31.s64 + 16820;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,156
	ctx.r26.s64 = ctx.r26.s64 + 156;
	// addi r25,r25,16336
	ctx.r25.s64 = ctx.r25.s64 + 16336;
	// addi r24,r24,300
	ctx.r24.s64 = ctx.r24.s64 + 300;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x831f8eec
	if (cr6.lt) goto loc_831F8EEC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F8FE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_831F8FEC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22204
	ctx.r4.s64 = ctx.r11.s64 + 22204;
	// bl 0x831ea3f0
	ctx.lr = 0x831F8FFC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f8fe4
	goto loc_831F8FE4;
}

__attribute__((alias("__imp__sub_831F9004"))) PPC_WEAK_FUNC(sub_831F9004);
PPC_FUNC_IMPL(__imp__sub_831F9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9008"))) PPC_WEAK_FUNC(sub_831F9008);
PPC_FUNC_IMPL(__imp__sub_831F9008) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,24592
	ctx.r31.s64 = ctx.r11.s64 + 24592;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9044
	if (cr6.eq) goto loc_831F9044;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F903C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831F9044:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9068
	if (cr6.eq) goto loc_831F9068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F9060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F9068:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f908c
	if (cr6.eq) goto loc_831F908C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F9084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_831F908C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f90a4
	if (cr6.eq) goto loc_831F90A4;
	// bl 0x831f9be0
	ctx.lr = 0x831F909C;
	sub_831F9BE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831F90A4:
	// addi r3,r31,-16336
	ctx.r3.s64 = ctx.r31.s64 + -16336;
	// li r5,16336
	ctx.r5.s64 = 16336;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x831F90B4;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831F90D4"))) PPC_WEAK_FUNC(sub_831F90D4);
PPC_FUNC_IMPL(__imp__sub_831F90D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F90D8"))) PPC_WEAK_FUNC(sub_831F90D8);
PPC_FUNC_IMPL(__imp__sub_831F90D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24596
	ctx.r11.s64 = ctx.r11.s64 + 24596;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F90EC"))) PPC_WEAK_FUNC(sub_831F90EC);
PPC_FUNC_IMPL(__imp__sub_831F90EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F90F0"))) PPC_WEAK_FUNC(sub_831F90F0);
PPC_FUNC_IMPL(__imp__sub_831F90F0) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r4,128
	cr6.compare<int32_t>(ctx.r4.s32, 128, xer);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24608
	ctx.r11.s64 = ctx.r11.s64 + 24608;
	// beq cr6,0x831f9124
	if (cr6.eq) goto loc_831F9124;
	// cmpwi cr6,r4,129
	cr6.compare<int32_t>(ctx.r4.s32, 129, xer);
	// beq cr6,0x831f9128
	if (cr6.eq) goto loc_831F9128;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// b 0x831f9128
	goto loc_831F9128;
loc_831F9124:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_831F9128:
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831f9144
	if (!cr6.eq) goto loc_831F9144;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22284
	ctx.r4.s64 = ctx.r11.s64 + 22284;
	// bl 0x831ea3f0
	ctx.lr = 0x831F9144;
	sub_831EA3F0(ctx, base);
loc_831F9144:
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

__attribute__((alias("__imp__sub_831F915C"))) PPC_WEAK_FUNC(sub_831F915C);
PPC_FUNC_IMPL(__imp__sub_831F915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9160"))) PPC_WEAK_FUNC(sub_831F9160);
PPC_FUNC_IMPL(__imp__sub_831F9160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,24596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24596);
	// b 0x831f9ce8
	sub_831F9CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F916C"))) PPC_WEAK_FUNC(sub_831F916C);
PPC_FUNC_IMPL(__imp__sub_831F916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9170"))) PPC_WEAK_FUNC(sub_831F9170);
PPC_FUNC_IMPL(__imp__sub_831F9170) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9178"))) PPC_WEAK_FUNC(sub_831F9178);
PPC_FUNC_IMPL(__imp__sub_831F9178) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f91cc
	if (cr6.eq) goto loc_831F91CC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f91cc
	if (cr6.eq) goto loc_831F91CC;
	// bl 0x832d4520
	ctx.lr = 0x831F91A0;
	sub_832D4520(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f91b8
	if (!cr6.eq) goto loc_831F91B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F91AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831F91B0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831f91e4
	goto loc_831F91E4;
loc_831F91B8:
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x831f91ac
	if (!cr0.eq) goto loc_831F91AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831f91b0
	goto loc_831F91B0;
loc_831F91CC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,22412
	ctx.r4.s64 = ctx.r11.s64 + 22412;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F91E0;
	sub_831EA418(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F91E4:
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

__attribute__((alias("__imp__sub_831F91F8"))) PPC_WEAK_FUNC(sub_831F91F8);
PPC_FUNC_IMPL(__imp__sub_831F91F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f922c
	if (!cr6.eq) goto loc_831F922C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,22480
	ctx.r4.s64 = ctx.r11.s64 + 22480;
	// bl 0x831ea418
	ctx.lr = 0x831F9224;
	sub_831EA418(ctx, base);
loc_831F9224:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f9260
	goto loc_831F9260;
loc_831F922C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d3920
	ctx.lr = 0x831F9234;
	sub_832D3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f925c
	if (!cr0.eq) goto loc_831F925C;
	// bl 0x82417100
	ctx.lr = 0x831F9240;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22424
	ctx.r4.s64 = ctx.r11.s64 + 22424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea410
	ctx.lr = 0x831F9258;
	sub_831EA410(ctx, base);
	// b 0x831f9224
	goto loc_831F9224;
loc_831F925C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F9260:
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

__attribute__((alias("__imp__sub_831F9274"))) PPC_WEAK_FUNC(sub_831F9274);
PPC_FUNC_IMPL(__imp__sub_831F9274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9278"))) PPC_WEAK_FUNC(sub_831F9278);
PPC_FUNC_IMPL(__imp__sub_831F9278) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24644);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f92a8
	if (cr6.eq) goto loc_831F92A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F92A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F92A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831f92c0
	if (cr6.eq) goto loc_831F92C0;
	// bl 0x832d1a68
	ctx.lr = 0x831F92B8;
	sub_832D1A68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F92C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f3398
	ctx.lr = 0x831F92C8;
	sub_831F3398(ctx, base);
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

__attribute__((alias("__imp__sub_831F92E0"))) PPC_WEAK_FUNC(sub_831F92E0);
PPC_FUNC_IMPL(__imp__sub_831F92E0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F92F0"))) PPC_WEAK_FUNC(sub_831F92F0);
PPC_FUNC_IMPL(__imp__sub_831F92F0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9300"))) PPC_WEAK_FUNC(sub_831F9300);
PPC_FUNC_IMPL(__imp__sub_831F9300) {
	PPC_FUNC_PROLOGUE();
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9310"))) PPC_WEAK_FUNC(sub_831F9310);
PPC_FUNC_IMPL(__imp__sub_831F9310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x832d4820
	ctx.lr = 0x831F9324;
	sub_832D4820(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f934c
	if (!cr0.eq) goto loc_831F934C;
	// bl 0x82417100
	ctx.lr = 0x831F9330;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22492
	ctx.r4.s64 = ctx.r11.s64 + 22492;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F9344;
	sub_831EA400(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f9354
	goto loc_831F9354;
loc_831F934C:
	// bl 0x832d4d90
	ctx.lr = 0x831F9350;
	sub_832D4D90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F9354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9364"))) PPC_WEAK_FUNC(sub_831F9364);
PPC_FUNC_IMPL(__imp__sub_831F9364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9368"))) PPC_WEAK_FUNC(sub_831F9368);
PPC_FUNC_IMPL(__imp__sub_831F9368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f9378
	if (cr6.eq) goto loc_831F9378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_831F9378:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9380"))) PPC_WEAK_FUNC(sub_831F9380);
PPC_FUNC_IMPL(__imp__sub_831F9380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F938C"))) PPC_WEAK_FUNC(sub_831F938C);
PPC_FUNC_IMPL(__imp__sub_831F938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9390"))) PPC_WEAK_FUNC(sub_831F9390);
PPC_FUNC_IMPL(__imp__sub_831F9390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F9398;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x831cdcf0
	ctx.lr = 0x831F93B8;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F93C0;
	sub_839F8330(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x831f9444
	if (cr6.lt) goto loc_831F9444;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// ble cr6,0x831f9444
	if (!cr6.gt) goto loc_831F9444;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// subf r27,r29,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_831F93EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// bne cr6,0x831f942c
	if (!cr6.eq) goto loc_831F942C;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x831f942c
	if (cr6.eq) goto loc_831F942C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d4520
	ctx.lr = 0x831F9410;
	sub_832D4520(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f942c
	if (!cr6.eq) goto loc_831F942C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d4ea8
	ctx.lr = 0x831F9424;
	sub_832D4EA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f9450
	if (cr0.eq) goto loc_831F9450;
loc_831F942C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// stbx r11,r27,r31
	PPC_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// blt cr6,0x831f93ec
	if (cr6.lt) goto loc_831F93EC;
loc_831F9444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F9448:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831F9450:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f9448
	goto loc_831F9448;
}

__attribute__((alias("__imp__sub_831F9458"))) PPC_WEAK_FUNC(sub_831F9458);
PPC_FUNC_IMPL(__imp__sub_831F9458) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f94bc
	if (cr6.eq) goto loc_831F94BC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f94bc
	if (cr6.eq) goto loc_831F94BC;
	// bl 0x832d39d8
	ctx.lr = 0x831F9488;
	sub_832D39D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f94b4
	if (!cr0.eq) goto loc_831F94B4;
	// bl 0x82417100
	ctx.lr = 0x831F9494;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22560
	ctx.r4.s64 = ctx.r11.s64 + 22560;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea308
	ctx.lr = 0x831F94B0;
	sub_831EA308(ctx, base);
	// b 0x831f94d0
	goto loc_831F94D0;
loc_831F94B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f94d4
	goto loc_831F94D4;
loc_831F94BC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,22548
	ctx.r4.s64 = ctx.r11.s64 + 22548;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F94D0;
	sub_831EA418(ctx, base);
loc_831F94D0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F94D4:
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

__attribute__((alias("__imp__sub_831F94EC"))) PPC_WEAK_FUNC(sub_831F94EC);
PPC_FUNC_IMPL(__imp__sub_831F94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F94F0"))) PPC_WEAK_FUNC(sub_831F94F0);
PPC_FUNC_IMPL(__imp__sub_831F94F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F94F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpd cr6,r5,r7
	cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// blt cr6,0x831f9520
	if (cr6.lt) goto loc_831F9520;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_831F9520:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpd cr6,r30,r11
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, xer);
	// blt cr6,0x831f9534
	if (cr6.lt) goto loc_831F9534;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_831F9534:
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// ble cr6,0x831f95b8
	if (!cr6.gt) goto loc_831F95B8;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x832d4860
	ctx.lr = 0x831F955C;
	sub_832D4860(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f9568
	if (!cr6.eq) goto loc_831F9568;
	// bl 0x82417100
	ctx.lr = 0x831F9568;
	sub_82417100(ctx, base);
loc_831F9568:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832d1dd0
	ctx.lr = 0x831F9580;
	sub_832D1DD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f95b0
	if (!cr0.eq) goto loc_831F95B0;
	// bl 0x82417100
	ctx.lr = 0x831F958C;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22636
	ctx.r4.s64 = ctx.r11.s64 + 22636;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x831F95A0;
	sub_831EA400(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x831f95bc
	goto loc_831F95BC;
loc_831F95B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_831F95B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F95BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F95C4"))) PPC_WEAK_FUNC(sub_831F95C4);
PPC_FUNC_IMPL(__imp__sub_831F95C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F95C8"))) PPC_WEAK_FUNC(sub_831F95C8);
PPC_FUNC_IMPL(__imp__sub_831F95C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F95D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpd cr6,r5,r7
	cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// blt cr6,0x831f95fc
	if (cr6.lt) goto loc_831F95FC;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_831F95FC:
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// ble cr6,0x831f9698
	if (!cr6.gt) goto loc_831F9698;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x832d4860
	ctx.lr = 0x831F9624;
	sub_832D4860(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f9630
	if (!cr6.eq) goto loc_831F9630;
	// bl 0x82417100
	ctx.lr = 0x831F9630;
	sub_82417100(ctx, base);
loc_831F9630:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r30,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832d1ab0
	ctx.lr = 0x831F9648;
	sub_832D1AB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f9678
	if (!cr0.eq) goto loc_831F9678;
	// bl 0x82417100
	ctx.lr = 0x831F9654;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22684
	ctx.r4.s64 = ctx.r11.s64 + 22684;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x831F9668;
	sub_831EA400(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x831f969c
	goto loc_831F969C;
loc_831F9678:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bgt cr6,0x831f9694
	if (cr6.gt) goto loc_831F9694;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831F9694:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_831F9698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F969C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F96A4"))) PPC_WEAK_FUNC(sub_831F96A4);
PPC_FUNC_IMPL(__imp__sub_831F96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F96A8"))) PPC_WEAK_FUNC(sub_831F96A8);
PPC_FUNC_IMPL(__imp__sub_831F96A8) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x832d4860
	ctx.lr = 0x831F96E4;
	sub_832D4860(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f96f0
	if (!cr6.eq) goto loc_831F96F0;
	// bl 0x82417100
	ctx.lr = 0x831F96F0;
	sub_82417100(ctx, base);
loc_831F96F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d4b58
	ctx.lr = 0x831F96F8;
	sub_832D4B58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f9720
	if (!cr0.eq) goto loc_831F9720;
	// bl 0x82417100
	ctx.lr = 0x831F9704;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22732
	ctx.r4.s64 = ctx.r11.s64 + 22732;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F9718;
	sub_831EA400(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f972c
	goto loc_831F972C;
loc_831F9720:
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x832d4d90
	ctx.lr = 0x831F9728;
	sub_832D4D90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F972C:
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

__attribute__((alias("__imp__sub_831F9744"))) PPC_WEAK_FUNC(sub_831F9744);
PPC_FUNC_IMPL(__imp__sub_831F9744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9748"))) PPC_WEAK_FUNC(sub_831F9748);
PPC_FUNC_IMPL(__imp__sub_831F9748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F9750;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9970
	if (cr6.eq) goto loc_831F9970;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831f9970
	if (cr6.eq) goto loc_831F9970;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831f3370
	ctx.lr = 0x831F977C;
	sub_831F3370(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x831f994c
	if (cr0.eq) goto loc_831F994C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x831f994c
	if (cr6.lt) goto loc_831F994C;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r28,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r28.u64);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// std r28,16(r25)
	PPC_STORE_U64(ctx.r25.u32 + 16, ctx.r28.u64);
	// std r28,24(r25)
	PPC_STORE_U64(ctx.r25.u32 + 24, ctx.r28.u64);
	// blt cr6,0x831f97f8
	if (cr6.lt) goto loc_831F97F8;
	// beq cr6,0x831f97f0
	if (cr6.eq) goto loc_831F97F0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x831f97e8
	if (cr6.lt) goto loc_831F97E8;
	// beq cr6,0x831f97d8
	if (cr6.eq) goto loc_831F97D8;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x831f97f8
	if (cr6.lt) goto loc_831F97F8;
	// beq cr6,0x831f97e0
	if (cr6.eq) goto loc_831F97E0;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// bne cr6,0x831f97fc
	if (!cr6.eq) goto loc_831F97FC;
loc_831F97D8:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x831f97fc
	goto loc_831F97FC;
loc_831F97E0:
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x831f97fc
	goto loc_831F97FC;
loc_831F97E8:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x831f97fc
	goto loc_831F97FC;
loc_831F97F0:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x831f97fc
	goto loc_831F97FC;
loc_831F97F8:
	// li r29,4
	ctx.r29.s64 = 4;
loc_831F97FC:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// blt cr6,0x831f9820
	if (cr6.lt) goto loc_831F9820;
	// beq cr6,0x831f9818
	if (cr6.eq) goto loc_831F9818;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// bge cr6,0x831f9824
	if (!cr6.lt) goto loc_831F9824;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// b 0x831f9824
	goto loc_831F9824;
loc_831F9818:
	// lis r30,16384
	ctx.r30.s64 = 1073741824;
	// b 0x831f9824
	goto loc_831F9824;
loc_831F9820:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
loc_831F9824:
	// lis r31,-31748
	ctx.r31.s64 = -2080636928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24648);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x831f9858
	if (!cr6.eq) goto loc_831F9858;
	// bl 0x832d4fd8
	ctx.lr = 0x831F9854;
	sub_832D4FD8(ctx, base);
	// b 0x831f985c
	goto loc_831F985C;
loc_831F9858:
	// bl 0x832d1bd8
	ctx.lr = 0x831F985C;
	sub_832D1BD8(ctx, base);
loc_831F985C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f98b4
	if (!cr6.eq) goto loc_831F98B4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x831f9878
	if (!cr6.eq) goto loc_831F9878;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x831f98b4
	goto loc_831F98B4;
loc_831F9878:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f9390
	ctx.lr = 0x831F9880;
	sub_831F9390(ctx, base);
	// lwz r11,24648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24648);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x831f98b0
	if (!cr6.eq) goto loc_831F98B0;
	// bl 0x832d4fd8
	ctx.lr = 0x831F98AC;
	sub_832D4FD8(ctx, base);
	// b 0x831f98b4
	goto loc_831F98B4;
loc_831F98B0:
	// bl 0x832d1bd8
	ctx.lr = 0x831F98B4;
	sub_832D1BD8(ctx, base);
loc_831F98B4:
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f98e8
	if (!cr6.eq) goto loc_831F98E8;
	// bl 0x82417100
	ctx.lr = 0x831F98C4;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22920
	ctx.r4.s64 = ctx.r11.s64 + 22920;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea410
	ctx.lr = 0x831F98DC;
	sub_831EA410(ctx, base);
loc_831F98DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f9278
	ctx.lr = 0x831F98E4;
	sub_831F9278(ctx, base);
	// b 0x831f9984
	goto loc_831F9984;
loc_831F98E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x832d4f70
	ctx.lr = 0x831F98F8;
	sub_832D4F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x831f9910
	if (!cr6.eq) goto loc_831F9910;
	// bl 0x82417100
	ctx.lr = 0x831F9908;
	sub_82417100(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f9930
	if (!cr0.eq) goto loc_831F9930;
loc_831F9910:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r11.u64);
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// b 0x831f9988
	goto loc_831F9988;
loc_831F9930:
	// bl 0x82417100
	ctx.lr = 0x831F9934;
	sub_82417100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,22872
	ctx.r4.s64 = ctx.r11.s64 + 22872;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F9948;
	sub_831EA400(ctx, base);
	// b 0x831f98dc
	goto loc_831F98DC;
loc_831F994C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22792
	ctx.r4.s64 = ctx.r11.s64 + 22792;
	// bl 0x831ea3f0
	ctx.lr = 0x831F995C;
	sub_831EA3F0(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x831f9984
	if (cr6.eq) goto loc_831F9984;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f3398
	ctx.lr = 0x831F996C;
	sub_831F3398(ctx, base);
	// b 0x831f9984
	goto loc_831F9984;
loc_831F9970:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,22776
	ctx.r4.s64 = ctx.r11.s64 + 22776;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F9984;
	sub_831EA418(ctx, base);
loc_831F9984:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F9988:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9990"))) PPC_WEAK_FUNC(sub_831F9990);
PPC_FUNC_IMPL(__imp__sub_831F9990) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f99bc
	if (!cr6.eq) goto loc_831F99BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23120
	ctx.r4.s64 = ctx.r11.s64 + 23120;
	// bl 0x831ea418
	ctx.lr = 0x831F99B4;
	sub_831EA418(ctx, base);
loc_831F99B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f99e8
	goto loc_831F99E8;
loc_831F99BC:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x839f8330
	ctx.lr = 0x831F99C4;
	sub_839F8330(ctx, base);
	// cmplwi cr6,r3,31
	cr6.compare<uint32_t>(ctx.r3.u32, 31, xer);
	// ble cr6,0x831f99e4
	if (!cr6.gt) goto loc_831F99E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r11,23048
	ctx.r4.s64 = ctx.r11.s64 + 23048;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F99E0;
	sub_831EA400(ctx, base);
	// b 0x831f99b4
	goto loc_831F99B4;
loc_831F99E4:
	// li r3,16508
	ctx.r3.s64 = 16508;
loc_831F99E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F99F8"))) PPC_WEAK_FUNC(sub_831F99F8);
PPC_FUNC_IMPL(__imp__sub_831F99F8) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f9a30
	if (!cr6.eq) goto loc_831F9A30;
	// stw r11,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r11.u32);
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// bl 0x83a77a98
	ctx.lr = 0x831F9A28;
	sub_83A77A98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r11.u32);
loc_831F9A30:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x831fb1c8
	ctx.lr = 0x831F9A38;
	sub_831FB1C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f9a7c
	if (cr0.eq) goto loc_831F9A7C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F9A54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x831f9a68
	if (cr6.lt) goto loc_831F9A68;
	// bne cr6,0x831f9a78
	if (!cr6.eq) goto loc_831F9A78;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x831f9a6c
	goto loc_831F9A6C;
loc_831F9A68:
	// li r5,0
	ctx.r5.s64 = 0;
loc_831F9A6C:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x831fb238
	ctx.lr = 0x831F9A78;
	sub_831FB238(ctx, base);
loc_831F9A78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F9A7C:
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

__attribute__((alias("__imp__sub_831F9A94"))) PPC_WEAK_FUNC(sub_831F9A94);
PPC_FUNC_IMPL(__imp__sub_831F9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9A98"))) PPC_WEAK_FUNC(sub_831F9A98);
PPC_FUNC_IMPL(__imp__sub_831F9A98) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f99f8
	sub_831F99F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9A9C"))) PPC_WEAK_FUNC(sub_831F9A9C);
PPC_FUNC_IMPL(__imp__sub_831F9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9AA0"))) PPC_WEAK_FUNC(sub_831F9AA0);
PPC_FUNC_IMPL(__imp__sub_831F9AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a77a98
	sub_83A77A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9AA4"))) PPC_WEAK_FUNC(sub_831F9AA4);
PPC_FUNC_IMPL(__imp__sub_831F9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9AA8"))) PPC_WEAK_FUNC(sub_831F9AA8);
PPC_FUNC_IMPL(__imp__sub_831F9AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a77ad8
	sub_83A77AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9AAC"))) PPC_WEAK_FUNC(sub_831F9AAC);
PPC_FUNC_IMPL(__imp__sub_831F9AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9AB0"))) PPC_WEAK_FUNC(sub_831F9AB0);
PPC_FUNC_IMPL(__imp__sub_831F9AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// b 0x83a769e8
	sub_83A769E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9AC4"))) PPC_WEAK_FUNC(sub_831F9AC4);
PPC_FUNC_IMPL(__imp__sub_831F9AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9AC8"))) PPC_WEAK_FUNC(sub_831F9AC8);
PPC_FUNC_IMPL(__imp__sub_831F9AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// b 0x83a77b60
	sub_83A77B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9ADC"))) PPC_WEAK_FUNC(sub_831F9ADC);
PPC_FUNC_IMPL(__imp__sub_831F9ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9AE0"))) PPC_WEAK_FUNC(sub_831F9AE0);
PPC_FUNC_IMPL(__imp__sub_831F9AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F9AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f9b0c
	if (!cr6.eq) goto loc_831F9B0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f9bd8
	goto loc_831F9BD8;
loc_831F9B0C:
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x83a77ae0
	ctx.lr = 0x831F9B18;
	sub_83A77AE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// bne 0x831f9b2c
	if (!cr0.eq) goto loc_831F9B2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f9bd8
	goto loc_831F9BD8;
loc_831F9B2C:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x831F9B3C;
	sub_831CDCF0(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r11,r11,-25960
	ctx.r11.s64 = ctx.r11.s64 + -25960;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,-25944
	ctx.r10.s64 = ctx.r10.s64 + -25944;
	// addi r9,r9,-25952
	ctx.r9.s64 = ctx.r9.s64 + -25952;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x831ea658
	ctx.lr = 0x831F9B84;
	sub_831EA658(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r29,124(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83a76aa8
	ctx.lr = 0x831F9BCC;
	sub_83A76AA8(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
loc_831F9BD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9BE0"))) PPC_WEAK_FUNC(sub_831F9BE0);
PPC_FUNC_IMPL(__imp__sub_831F9BE0) {
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
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9c28
	if (cr6.eq) goto loc_831F9C28;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bl 0x83a77ad8
	ctx.lr = 0x831F9C10;
	sub_83A77AD8(ctx, base);
	// b 0x831f9c1c
	goto loc_831F9C1C;
loc_831F9C14:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x831F9C1C;
	sub_83A75E98(ctx, base);
loc_831F9C1C:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f9c14
	if (!cr6.eq) goto loc_831F9C14;
loc_831F9C28:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9c3c
	if (cr6.eq) goto loc_831F9C3C;
	// bl 0x83a76938
	ctx.lr = 0x831F9C38;
	sub_83A76938(ctx, base);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
loc_831F9C3C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9c50
	if (cr6.eq) goto loc_831F9C50;
	// bl 0x83a77a48
	ctx.lr = 0x831F9C4C;
	sub_83A77A48(ctx, base);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
loc_831F9C50:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9c64
	if (cr6.eq) goto loc_831F9C64;
	// bl 0x83a77a48
	ctx.lr = 0x831F9C60;
	sub_83A77A48(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_831F9C64:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f9c78
	if (cr6.eq) goto loc_831F9C78;
	// bl 0x831fb090
	ctx.lr = 0x831F9C74;
	sub_831FB090(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_831F9C78:
	// li r5,16336
	ctx.r5.s64 = 16336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831F9C88;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_831F9CA0"))) PPC_WEAK_FUNC(sub_831F9CA0);
PPC_FUNC_IMPL(__imp__sub_831F9CA0) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x831fb178
	ctx.lr = 0x831F9CC0;
	sub_831FB178(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f9cd4
	if (!cr6.eq) goto loc_831F9CD4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83a77ad8
	ctx.lr = 0x831F9CD4;
	sub_83A77AD8(ctx, base);
loc_831F9CD4:
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

__attribute__((alias("__imp__sub_831F9CE8"))) PPC_WEAK_FUNC(sub_831F9CE8);
PPC_FUNC_IMPL(__imp__sub_831F9CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f9cfc
	if (!cr6.eq) goto loc_831F9CFC;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x83a77ad8
	sub_83A77AD8(ctx, base);
	return;
loc_831F9CFC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x831f99f8
	sub_831F99F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9D08"))) PPC_WEAK_FUNC(sub_831F9D08);
PPC_FUNC_IMPL(__imp__sub_831F9D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F9D0C"))) PPC_WEAK_FUNC(sub_831F9D0C);
PPC_FUNC_IMPL(__imp__sub_831F9D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9D10"))) PPC_WEAK_FUNC(sub_831F9D10);
PPC_FUNC_IMPL(__imp__sub_831F9D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F9D18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831f9990
	ctx.lr = 0x831F9D2C;
	sub_831F9990(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x831f9e0c
	if (cr0.lt) goto loc_831F9E0C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831f9df8
	if (cr6.eq) goto loc_831F9DF8;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, xer);
	// blt cr6,0x831f9df8
	if (cr6.lt) goto loc_831F9DF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x831F9D50;
	sub_831EA7A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a77b68
	ctx.lr = 0x831F9D60;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16336
	ctx.r4.s64 = 16336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x831F9D70;
	sub_83A77B78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fb100
	ctx.lr = 0x831F9D78;
	sub_831FB100(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f9d90
	if (!cr0.eq) goto loc_831F9D90;
loc_831F9D84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831F9D88:
	// bl 0x831f9be0
	ctx.lr = 0x831F9D8C;
	sub_831F9BE0(ctx, base);
	// b 0x831f9e0c
	goto loc_831F9E0C;
loc_831F9D90:
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x83a77ae0
	ctx.lr = 0x831F9D9C;
	sub_83A77AE0(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f9d84
	if (cr0.eq) goto loc_831F9D84;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x831F9DC4;
	sub_831CE980(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,156
	ctx.r4.s64 = 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x831F9DD4;
	sub_83A77B78(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f9ae0
	ctx.lr = 0x831F9DE8;
	sub_831F9AE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x831f9e10
	if (!cr0.eq) goto loc_831F9E10;
	// b 0x831f9d88
	goto loc_831F9D88;
loc_831F9DF8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23132
	ctx.r4.s64 = ctx.r11.s64 + 23132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F9E0C;
	sub_831EA418(ctx, base);
loc_831F9E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F9E10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9E18"))) PPC_WEAK_FUNC(sub_831F9E18);
PPC_FUNC_IMPL(__imp__sub_831F9E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F9E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16336
	ctx.r5.s64 = 16336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831F9E38;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fb100
	ctx.lr = 0x831F9E40;
	sub_831FB100(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f9e5c
	if (!cr0.eq) goto loc_831F9E5C;
loc_831F9E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f9be0
	ctx.lr = 0x831F9E54;
	sub_831F9BE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f9f54
	goto loc_831F9F54;
loc_831F9E5C:
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x83a77ae0
	ctx.lr = 0x831F9E68;
	sub_83A77AE0(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f9e4c
	if (cr0.eq) goto loc_831F9E4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x831F9E90;
	sub_831CE980(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f9f50
	if (cr6.eq) goto loc_831F9F50;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x83a77ae0
	ctx.lr = 0x831F9EA8;
	sub_83A77AE0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// beq 0x831f9e4c
	if (cr0.eq) goto loc_831F9E4C;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x831F9EC4;
	sub_831CDCF0(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r8,-31968
	ctx.r8.s64 = -2095054848;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,-25960
	ctx.r11.s64 = ctx.r11.s64 + -25960;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r10,r10,-25944
	ctx.r10.s64 = ctx.r10.s64 + -25944;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r8,r8,-25952
	ctx.r8.s64 = ctx.r8.s64 + -25952;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r29,124(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83a76aa8
	ctx.lr = 0x831F9F44;
	sub_83A76AA8(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f9e4c
	if (cr0.eq) goto loc_831F9E4C;
loc_831F9F50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831F9F54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F9F5C"))) PPC_WEAK_FUNC(sub_831F9F5C);
PPC_FUNC_IMPL(__imp__sub_831F9F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9F60"))) PPC_WEAK_FUNC(sub_831F9F60);
PPC_FUNC_IMPL(__imp__sub_831F9F60) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831f9fc8
	if (cr6.lt) goto loc_831F9FC8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x831f9fc8
	if (cr6.lt) goto loc_831F9FC8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f9fc0
	if (cr6.eq) goto loc_831F9FC0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831f9fa0
	if (!cr6.eq) goto loc_831F9FA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x831f9fc0
	goto loc_831F9FC0;
loc_831F9FA0:
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a76b90
	ctx.lr = 0x831F9FBC;
	sub_83A76B90(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_831F9FC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f9fe0
	goto loc_831F9FE0;
loc_831F9FC8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23212
	ctx.r4.s64 = ctx.r11.s64 + 23212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F9FDC;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F9FE0:
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

__attribute__((alias("__imp__sub_831F9FF4"))) PPC_WEAK_FUNC(sub_831F9FF4);
PPC_FUNC_IMPL(__imp__sub_831F9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F9FF8"))) PPC_WEAK_FUNC(sub_831F9FF8);
PPC_FUNC_IMPL(__imp__sub_831F9FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831FA000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831f9f60
	ctx.lr = 0x831FA01C;
	sub_831F9F60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831fa090
	if (!cr0.eq) goto loc_831FA090;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831fa090
	if (cr6.lt) goto loc_831FA090;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x831fa0a8
	if (cr6.eq) goto loc_831FA0A8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831FA048;
	sub_831CDCF0(ctx, base);
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a76d20
	ctx.lr = 0x831FA06C;
	sub_83A76D20(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r3,24656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24656, ctx.r3.u32);
	// lwz r11,24656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831fa0a4
	if (cr6.eq) goto loc_831FA0A4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,24660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24660, ctx.r30.u32);
	// b 0x831fa0a8
	goto loc_831FA0A8;
loc_831FA090:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,23224
	ctx.r4.s64 = ctx.r11.s64 + 23224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831FA0A4;
	sub_831EA418(ctx, base);
loc_831FA0A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831FA0A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FA0B0"))) PPC_WEAK_FUNC(sub_831FA0B0);
PPC_FUNC_IMPL(__imp__sub_831FA0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831FA0B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31748
	ctx.r29.s64 = -2080636928;
	// lwz r11,24652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24652);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831fa0e4
	if (!cr6.eq) goto loc_831FA0E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,23236
	ctx.r4.s64 = ctx.r11.s64 + 23236;
	// bl 0x831ea3f0
	ctx.lr = 0x831FA0DC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831fa118
	goto loc_831FA118;
loc_831FA0E4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r31,-31748
	ctx.r31.s64 = -2080636928;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,24660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24660, ctx.r30.u32);
	// lwz r11,24656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831fa10c
	if (cr6.eq) goto loc_831FA10C;
	// lwz r3,24656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24656);
	// bl 0x83a76bc0
	ctx.lr = 0x831FA108;
	sub_83A76BC0(ctx, base);
	// stw r30,24656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24656, ctx.r30.u32);
loc_831FA10C:
	// bl 0x83102db0
	ctx.lr = 0x831FA110;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,24652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24652, ctx.r30.u32);
loc_831FA118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FA120"))) PPC_WEAK_FUNC(sub_831FA120);
PPC_FUNC_IMPL(__imp__sub_831FA120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831FA128;
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831fa1b8
	if (cr6.lt) goto loc_831FA1B8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x831fa1b8
	if (cr6.lt) goto loc_831FA1B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831fa1b8
	if (cr6.eq) goto loc_831FA1B8;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r10,24652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24652);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831fa17c
	if (cr6.eq) goto loc_831FA17C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,23308
	ctx.r4.s64 = ctx.r11.s64 + 23308;
	// bl 0x831ea3f0
	ctx.lr = 0x831FA174;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831fa1d0
	goto loc_831FA1D0;
loc_831FA17C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24652, ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x831FA188;
	sub_83102DB0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f9ff8
	ctx.lr = 0x831FA19C;
	sub_831F9FF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831fa1b0
	if (cr0.eq) goto loc_831FA1B0;
	// bl 0x831fa0b0
	ctx.lr = 0x831FA1A8;
	sub_831FA0B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831fa1d0
	goto loc_831FA1D0;
loc_831FA1B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fa1d0
	goto loc_831FA1D0;
loc_831FA1B8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23296
	ctx.r4.s64 = ctx.r11.s64 + 23296;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831FA1CC;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831FA1D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FA1D8"))) PPC_WEAK_FUNC(sub_831FA1D8);
PPC_FUNC_IMPL(__imp__sub_831FA1D8) {
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
	// bl 0x831f3398
	ctx.lr = 0x831FA1E8;
	sub_831F3398(ctx, base);
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

__attribute__((alias("__imp__sub_831FA1FC"))) PPC_WEAK_FUNC(sub_831FA1FC);
PPC_FUNC_IMPL(__imp__sub_831FA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FA200"))) PPC_WEAK_FUNC(sub_831FA200);
PPC_FUNC_IMPL(__imp__sub_831FA200) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpd cr6,r5,r7
	cr6.compare<int64_t>(ctx.r5.s64, ctx.r7.s64, xer);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// blt cr6,0x831fa234
	if (cr6.lt) goto loc_831FA234;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_831FA234:
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpd cr6,r31,r11
	cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, xer);
	// blt cr6,0x831fa248
	if (cr6.lt) goto loc_831FA248;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_831FA248:
	// cmpdi cr6,r31,0
	cr6.compare<int64_t>(ctx.r31.s64, 0, xer);
	// ble cr6,0x831fa26c
	if (!cr6.gt) goto loc_831FA26C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// rotlwi r6,r31,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bl 0x831ea778
	ctx.lr = 0x831FA268;
	sub_831EA778(ctx, base);
	// std r31,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r31.u64);
loc_831FA26C:
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

__attribute__((alias("__imp__sub_831FA288"))) PPC_WEAK_FUNC(sub_831FA288);
PPC_FUNC_IMPL(__imp__sub_831FA288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831FA294"))) PPC_WEAK_FUNC(sub_831FA294);
PPC_FUNC_IMPL(__imp__sub_831FA294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831FA298"))) PPC_WEAK_FUNC(sub_831FA298);
PPC_FUNC_IMPL(__imp__sub_831FA298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831FA2A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831fa45c
	if (cr6.eq) goto loc_831FA45C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831fa45c
	if (cr6.eq) goto loc_831FA45C;
	// bl 0x831ea6f8
	ctx.lr = 0x831FA2C0;
	sub_831EA6F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831fa2e0
	if (!cr0.lt) goto loc_831FA2E0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,23600
	ctx.r4.s64 = ctx.r11.s64 + 23600;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831FA2DC;
	sub_831EA400(ctx, base);
	// b 0x831fa470
	goto loc_831FA470;
loc_831FA2E0:
	// addic. r8,r3,-10
	xer.ca = ctx.r3.u32 > 9;
	ctx.r8.s64 = ctx.r3.s64 + -10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r31,10
	ctx.r7.s64 = ctx.r31.s64 + 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x831fa364
	if (!cr0.gt) goto loc_831FA364;
loc_831FA2F4:
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x831fa314
	if (cr6.lt) goto loc_831FA314;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x831fa314
	if (cr6.gt) goto loc_831FA314;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x831fa340
	goto loc_831FA340;
loc_831FA314:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831fa32c
	if (cr6.lt) goto loc_831FA32C;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// bgt cr6,0x831fa32c
	if (cr6.gt) goto loc_831FA32C;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x831fa340
	goto loc_831FA340;
loc_831FA32C:
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x831fa35c
	if (cr6.lt) goto loc_831FA35C;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bgt cr6,0x831fa35c
	if (cr6.gt) goto loc_831FA35C;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
loc_831FA340:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x831fa2f4
	if (cr6.lt) goto loc_831FA2F4;
loc_831FA35C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x831fa378
	if (!cr6.eq) goto loc_831FA378;
loc_831FA364:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,23560
	ctx.r4.s64 = ctx.r11.s64 + 23560;
loc_831FA36C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831FA374;
	sub_831EA3F0(ctx, base);
	// b 0x831fa470
	goto loc_831FA470;
loc_831FA378:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r8,r10,-11
	xer.ca = ctx.r10.u32 > 10;
	ctx.r8.s64 = ctx.r10.s64 + -11;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x831fa3fc
	if (!cr0.gt) goto loc_831FA3FC;
loc_831FA394:
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x831fa3b4
	if (cr6.lt) goto loc_831FA3B4;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x831fa3b4
	if (cr6.gt) goto loc_831FA3B4;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x831fa3e0
	goto loc_831FA3E0;
loc_831FA3B4:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831fa3cc
	if (cr6.lt) goto loc_831FA3CC;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// bgt cr6,0x831fa3cc
	if (cr6.gt) goto loc_831FA3CC;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x831fa3e0
	goto loc_831FA3E0;
loc_831FA3CC:
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x831fa3fc
	if (cr6.lt) goto loc_831FA3FC;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bgt cr6,0x831fa3fc
	if (cr6.gt) goto loc_831FA3FC;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
loc_831FA3E0:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x831fa394
	if (cr6.lt) goto loc_831FA394;
loc_831FA3FC:
	// clrldi r30,r7,32
	ctx.r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// blt cr6,0x831fa450
	if (cr6.lt) goto loc_831FA450;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831fa450
	if (!cr6.gt) goto loc_831FA450;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f3370
	ctx.lr = 0x831FA418;
	sub_831F3370(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831fa42c
	if (!cr0.eq) goto loc_831FA42C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,23480
	ctx.r4.s64 = ctx.r11.s64 + 23480;
	// b 0x831fa36c
	goto loc_831FA36C;
loc_831FA42C:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea798
	ctx.lr = 0x831FA43C;
	sub_831EA798(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x831fa474
	goto loc_831FA474;
loc_831FA450:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,23440
	ctx.r4.s64 = ctx.r11.s64 + 23440;
	// b 0x831fa36c
	goto loc_831FA36C;
loc_831FA45C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,23428
	ctx.r4.s64 = ctx.r11.s64 + 23428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831FA470;
	sub_831EA418(ctx, base);
loc_831FA470:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831FA474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831FA47C"))) PPC_WEAK_FUNC(sub_831FA47C);
PPC_FUNC_IMPL(__imp__sub_831FA47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

