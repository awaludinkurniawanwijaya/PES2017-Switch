#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831EBED0"))) PPC_WEAK_FUNC(sub_831EBED0);
PPC_FUNC_IMPL(__imp__sub_831EBED0) {
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
	// beq cr6,0x831ebf3c
	if (cr6.eq) goto loc_831EBF3C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ebf3c
	if (cr6.eq) goto loc_831EBF3C;
	// bl 0x831eb6f8
	ctx.lr = 0x831EBEF8;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ebf08
	if (!cr0.eq) goto loc_831EBF08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ebf54
	goto loc_831EBF54;
loc_831EBF08:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ebf24
	if (cr6.eq) goto loc_831EBF24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831ebf54
	goto loc_831EBF54;
loc_831EBF24:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x831f2000
	ctx.lr = 0x831EBF30;
	sub_831F2000(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ebf54
	goto loc_831EBF54;
loc_831EBF3C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13376
	ctx.r4.s64 = ctx.r11.s64 + 13376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EBF50;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EBF54:
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

__attribute__((alias("__imp__sub_831EBF68"))) PPC_WEAK_FUNC(sub_831EBF68);
PPC_FUNC_IMPL(__imp__sub_831EBF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831EBF70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ebf90
	if (!cr6.eq) goto loc_831EBF90;
loc_831EBF88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ec088
	goto loc_831EC088;
loc_831EBF90:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ebf88
	if (cr6.eq) goto loc_831EBF88;
loc_831EBF9C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ec084
	if (cr6.eq) goto loc_831EC084;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ebfc8
	if (cr6.eq) goto loc_831EBFC8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ebf68
	ctx.lr = 0x831EBFC4;
	sub_831EBF68(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_831EBFC8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ec040
	if (cr6.eq) goto loc_831EC040;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831ec07c
	if (!cr6.eq) goto loc_831EC07C;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831ec038
	if (!cr6.gt) goto loc_831EC038;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_831EBFF8:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831eb6f8
	ctx.lr = 0x831EC000;
	sub_831EB6F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x831ec02c
	if (cr6.eq) goto loc_831EC02C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec02c
	if (cr6.eq) goto loc_831EC02C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831ec02c
	if (!cr6.eq) goto loc_831EC02C;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831EC02C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x831ebff8
	if (!cr0.eq) goto loc_831EBFF8;
loc_831EC038:
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// b 0x831ec07c
	goto loc_831EC07C;
loc_831EC040:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x831eb6f8
	ctx.lr = 0x831EC04C;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ec07c
	if (cr0.eq) goto loc_831EC07C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831ec07c
	if (!cr6.eq) goto loc_831EC07C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831ea988
	ctx.lr = 0x831EC06C;
	sub_831EA988(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea8e8
	ctx.lr = 0x831EC078;
	sub_831EA8E8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_831EC07C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x831ebf9c
	if (!cr6.eq) goto loc_831EBF9C;
loc_831EC084:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_831EC088:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC090"))) PPC_WEAK_FUNC(sub_831EC090);
PPC_FUNC_IMPL(__imp__sub_831EC090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EC098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831eb6f8
	ctx.lr = 0x831EC0A0;
	sub_831EB6F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x831ec0c0
	if (!cr0.eq) goto loc_831EC0C0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,13440
	ctx.r4.s64 = ctx.r11.s64 + 13440;
	// bl 0x831ea3f0
	ctx.lr = 0x831EC0B8;
	sub_831EA3F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ec16c
	goto loc_831EC16C;
loc_831EC0C0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ec0e4
	if (!cr6.eq) goto loc_831EC0E4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13388
	ctx.r4.s64 = ctx.r11.s64 + 13388;
	// bl 0x831ea3f0
	ctx.lr = 0x831EC0DC;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ec16c
	goto loc_831EC16C;
loc_831EC0E4:
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// lwz r3,4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4716);
	// bl 0x83a75cd8
	ctx.lr = 0x831EC0F0;
	sub_83A75CD8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x831ec118
	goto loc_831EC118;
loc_831EC0FC:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec110
	if (cr6.eq) goto loc_831EC110;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x831eaa70
	ctx.lr = 0x831EC110;
	sub_831EAA70(ctx, base);
loc_831EC110:
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_831EC118:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831ec0fc
	if (!cr6.eq) goto loc_831EC0FC;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// b 0x831ec150
	goto loc_831EC150;
loc_831EC12C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec144
	if (cr6.eq) goto loc_831EC144;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r11,-16960
	ctx.r4.s64 = ctx.r11.s64 + -16960;
	// bl 0x831eaad0
	ctx.lr = 0x831EC144;
	sub_831EAAD0(ctx, base);
loc_831EC144:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ebdc0
	ctx.lr = 0x831EC14C;
	sub_831EBDC0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831EC150:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ec12c
	if (!cr6.eq) goto loc_831EC12C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ebdc0
	ctx.lr = 0x831EC160;
	sub_831EBDC0(ctx, base);
	// lwz r3,4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4716);
	// bl 0x83a75d58
	ctx.lr = 0x831EC168;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EC16C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC174"))) PPC_WEAK_FUNC(sub_831EC174);
PPC_FUNC_IMPL(__imp__sub_831EC174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EC178"))) PPC_WEAK_FUNC(sub_831EC178);
PPC_FUNC_IMPL(__imp__sub_831EC178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831EC180;
	__savegprlr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// bl 0x831cdcf0
	ctx.lr = 0x831EC1A8;
	sub_831CDCF0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ec6a0
	if (!cr6.eq) goto loc_831EC6A0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831ec1e0
	if (!cr6.eq) goto loc_831EC1E0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x831ec6a0
	if (!cr6.eq) goto loc_831EC6A0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831ec1f0
	if (cr6.eq) goto loc_831EC1F0;
loc_831EC1E0:
	// li r4,260
	ctx.r4.s64 = 260;
	// lwz r5,40(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831f31a0
	ctx.lr = 0x831EC1F0;
	sub_831F31A0(ctx, base);
loc_831EC1F0:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831ec594
	if (cr6.eq) goto loc_831EC594;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ec2f8
	if (cr6.eq) goto loc_831EC2F8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x831ec6a0
	if (!cr6.eq) goto loc_831EC6A0;
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831f30d8
	ctx.lr = 0x831EC220;
	sub_831F30D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831ec6a0
	if (!cr6.gt) goto loc_831EC6A0;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
loc_831EC230:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ec270
	if (!cr6.eq) goto loc_831EC270;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x831ec270
	if (!cr6.eq) goto loc_831EC270;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831cdcf0
	ctx.lr = 0x831EC25C;
	sub_831CDCF0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831f3050
	ctx.lr = 0x831EC268;
	sub_831F3050(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ec284
	if (cr0.eq) goto loc_831EC284;
loc_831EC270:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x831ec230
	if (cr6.lt) goto loc_831EC230;
	// b 0x831ec6a0
	goto loc_831EC6A0;
loc_831EC284:
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ld r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -32);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// ld r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -24);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// ld r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// beq cr6,0x831ec2ec
	if (cr6.eq) goto loc_831EC2EC;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r26,-8
	ctx.r9.s64 = ctx.r26.s64 + -8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831EC2CC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831ec2cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EC2CC;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ec2ec
	if (!cr6.eq) goto loc_831EC2EC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
loc_831EC2EC:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x831ec64c
	if (cr6.lt) goto loc_831EC64C;
	// b 0x831ec6a0
	goto loc_831EC6A0;
loc_831EC2F8:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r30,60(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x831EC30C;
	sub_831CDCF0(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ec388
	if (!cr6.eq) goto loc_831EC388;
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ec388
	if (!cr6.eq) goto loc_831EC388;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ebd28
	ctx.lr = 0x831EC330;
	sub_831EBD28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ec388
	if (!cr0.eq) goto loc_831EC388;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x831eb6f8
	ctx.lr = 0x831EC340;
	sub_831EB6F8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ec374
	if (cr0.eq) goto loc_831EC374;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x831ec374
	if (!cr6.eq) goto loc_831EC374;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_831EC368:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831ec368
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EC368;
loc_831EC374:
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// stw r9,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
loc_831EC388:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ec430
	if (cr6.eq) goto loc_831EC430;
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// bne cr6,0x831ec3e8
	if (!cr6.eq) goto loc_831EC3E8;
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831EC3B0:
	// addi r9,r1,161
	ctx.r9.s64 = ctx.r1.s64 + 161;
	// mulli r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 * 10;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r10,-48
	ctx.r5.s64 = ctx.r10.s64 + -48;
	// bdnz 0x831ec3b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EC3B0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x831ec3e8
	if (cr6.lt) goto loc_831EC3E8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x831f2850
	ctx.lr = 0x831EC3E4;
	sub_831F2850(ctx, base);
	// b 0x831ec474
	goto loc_831EC474;
loc_831EC3E8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,4728
	ctx.r11.s64 = ctx.r11.s64 + 4728;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831ec41c
	if (cr6.eq) goto loc_831EC41C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x831f21e8
	ctx.lr = 0x831EC414;
	sub_831F21E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831ec47c
	if (cr6.eq) goto loc_831EC47C;
loc_831EC41C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x831f27a8
	ctx.lr = 0x831EC42C;
	sub_831F27A8(ctx, base);
	// b 0x831ec474
	goto loc_831EC474;
loc_831EC430:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,4728
	ctx.r11.s64 = ctx.r11.s64 + 4728;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831ec464
	if (cr6.eq) goto loc_831EC464;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x831f2240
	ctx.lr = 0x831EC45C;
	sub_831F2240(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831ec47c
	if (cr6.eq) goto loc_831EC47C;
loc_831EC464:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x831f2fb8
	ctx.lr = 0x831EC474;
	sub_831F2FB8(ctx, base);
loc_831EC474:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831ec6a0
	if (cr6.eq) goto loc_831EC6A0;
loc_831EC47C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831ec64c
	if (cr6.eq) goto loc_831EC64C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r10,24(r26)
	PPC_STORE_U64(ctx.r26.u32 + 24, ctx.r10.u64);
	// std r8,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r8.u64);
	// std r9,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r9.u64);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ec4bc
	if (!cr6.eq) goto loc_831EC4BC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
loc_831EC4BC:
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ebd28
	ctx.lr = 0x831EC4C8;
	sub_831EBD28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ec64c
	if (cr0.eq) goto loc_831EC64C;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ec568
	if (!cr6.eq) goto loc_831EC568;
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ec540
	if (!cr6.eq) goto loc_831EC540;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// b 0x831ec544
	goto loc_831EC544;
loc_831EC540:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
loc_831EC544:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ec64c
	if (!cr6.eq) goto loc_831EC64C;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// b 0x831ec64c
	goto loc_831EC64C;
loc_831EC568:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x831ec64c
	goto loc_831EC64C;
loc_831EC594:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831ec6a0
	if (!cr6.eq) goto loc_831EC6A0;
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec5c4
	if (cr6.eq) goto loc_831EC5C4;
	// bl 0x839f8330
	ctx.lr = 0x831EC5B8;
	sub_839F8330(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,260
	cr6.compare<uint32_t>(ctx.r3.u32, 260, xer);
	// bge cr6,0x831ec6a0
	if (!cr6.lt) goto loc_831EC6A0;
loc_831EC5C4:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r4,r10,260
	xer.ca = ctx.r10.u32 <= 260;
	ctx.r4.s64 = 260 - ctx.r10.s64;
	// lwz r5,36(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// bl 0x831f31a0
	ctx.lr = 0x831EC5E4;
	sub_831F31A0(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec654
	if (cr6.eq) goto loc_831EC654;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x831ed978
	ctx.lr = 0x831EC610;
	sub_831ED978(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ec654
	if (cr6.eq) goto loc_831EC654;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831ec640
	if (cr6.eq) goto loc_831EC640;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r26,-8
	ctx.r9.s64 = ctx.r26.s64 + -8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831EC634:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831ec634
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EC634;
loc_831EC640:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x831eb6f8
	ctx.lr = 0x831EC648;
	sub_831EB6F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_831EC64C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x831ec6a4
	goto loc_831EC6A4;
loc_831EC654:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bge cr6,0x831ec690
	if (!cr6.lt) goto loc_831EC690;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// b 0x831ec6a0
	goto loc_831EC6A0;
loc_831EC690:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,13508
	ctx.r4.s64 = ctx.r11.s64 + 13508;
	// bl 0x831ea3f0
	ctx.lr = 0x831EC6A0;
	sub_831EA3F0(ctx, base);
loc_831EC6A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EC6A4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC6AC"))) PPC_WEAK_FUNC(sub_831EC6AC);
PPC_FUNC_IMPL(__imp__sub_831EC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EC6B0"))) PPC_WEAK_FUNC(sub_831EC6B0);
PPC_FUNC_IMPL(__imp__sub_831EC6B0) {
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
	// b 0x831ec704
	goto loc_831EC704;
loc_831EC6D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ec178
	ctx.lr = 0x831EC6DC;
	sub_831EC178(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ec728
	if (!cr0.eq) goto loc_831EC728;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec700
	if (cr6.eq) goto loc_831EC700;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ec6b0
	ctx.lr = 0x831EC6F8;
	sub_831EC6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ec710
	if (!cr0.eq) goto loc_831EC710;
loc_831EC700:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831EC704:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ec6d0
	if (!cr6.eq) goto loc_831EC6D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EC710:
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
loc_831EC728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831ec710
	goto loc_831EC710;
}

__attribute__((alias("__imp__sub_831EC730"))) PPC_WEAK_FUNC(sub_831EC730);
PPC_FUNC_IMPL(__imp__sub_831EC730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x831EC738;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831ec75c
	if (cr6.eq) goto loc_831EC75C;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_831EC75C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ec76c
	if (!cr6.eq) goto loc_831EC76C;
loc_831EC764:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ec958
	goto loc_831EC958;
loc_831EC76C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831ec79c
	if (!cr6.eq) goto loc_831EC79C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ec79c
	if (!cr6.eq) goto loc_831EC79C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13560
	ctx.r4.s64 = ctx.r11.s64 + 13560;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EC798;
	sub_831EA418(ctx, base);
	// b 0x831ec764
	goto loc_831EC764;
loc_831EC79C:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r25,r11,4524
	ctx.r25.s64 = ctx.r11.s64 + 4524;
	// lwz r3,184(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// bl 0x83a75cd8
	ctx.lr = 0x831EC7AC;
	sub_83A75CD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ec178
	ctx.lr = 0x831EC7B8;
	sub_831EC178(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ec7c8
	if (cr0.eq) goto loc_831EC7C8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x831ec814
	goto loc_831EC814;
loc_831EC7C8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x831ec804
	goto loc_831EC804;
loc_831EC7D0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ec178
	ctx.lr = 0x831EC7DC;
	sub_831EC178(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ec810
	if (!cr0.eq) goto loc_831EC810;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec800
	if (cr6.eq) goto loc_831EC800;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ec6b0
	ctx.lr = 0x831EC7F8;
	sub_831EC6B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ec8ec
	if (!cr0.eq) goto loc_831EC8EC;
loc_831EC800:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831EC804:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ec7d0
	if (!cr6.eq) goto loc_831EC7D0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_831EC810:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_831EC814:
	// lwz r3,184(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// bl 0x83a75d58
	ctx.lr = 0x831EC81C;
	sub_83A75D58(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831ec930
	if (!cr6.gt) goto loc_831EC930;
	// addi r28,r29,44
	ctx.r28.s64 = ctx.r29.s64 + 44;
loc_831EC830:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x831ec930
	if (cr6.gt) goto loc_831EC930;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ec8d4
	if (cr6.eq) goto loc_831EC8D4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ec8d4
	if (!cr6.eq) goto loc_831EC8D4;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ec880
	if (cr6.eq) goto loc_831EC880;
	// bl 0x839f8330
	ctx.lr = 0x831EC874;
	sub_839F8330(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,260
	cr6.compare<uint32_t>(ctx.r3.u32, 260, xer);
	// bge cr6,0x831ec8d4
	if (!cr6.lt) goto loc_831EC8D4;
loc_831EC880:
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,260
	ctx.r4.s64 = 260;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831f31a0
	ctx.lr = 0x831EC898;
	sub_831F31A0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r26,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subfic r4,r30,260
	xer.ca = ctx.r30.u32 <= 260;
	ctx.r4.s64 = 260 - ctx.r30.s64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x831f31a0
	ctx.lr = 0x831EC8B4;
	sub_831F31A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831eb378
	ctx.lr = 0x831EC8C0;
	sub_831EB378(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// blt cr6,0x831ec8d4
	if (cr6.lt) goto loc_831EC8D4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831ec8f4
	if (cr6.eq) goto loc_831EC8F4;
loc_831EC8D4:
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x831ec830
	if (cr6.lt) goto loc_831EC830;
	// b 0x831ec930
	goto loc_831EC930;
loc_831EC8EC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831ec810
	goto loc_831EC810;
loc_831EC8F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ec928
	if (cr6.eq) goto loc_831EC928;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_831EC928:
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
	// stw r26,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r26.u32);
loc_831EC930:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x831ec948
	if (cr6.eq) goto loc_831EC948;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831ec948
	if (cr6.eq) goto loc_831EC948;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_831EC948:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x831ec954
	if (cr6.eq) goto loc_831EC954;
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
loc_831EC954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EC958:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EC960"))) PPC_WEAK_FUNC(sub_831EC960);
PPC_FUNC_IMPL(__imp__sub_831EC960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EC968;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x831ec730
	ctx.lr = 0x831EC9A8;
	sub_831EC730(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x831eca1c
	if (!cr0.eq) goto loc_831ECA1C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831eca1c
	if (cr6.eq) goto loc_831ECA1C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ec9fc
	if (!cr6.eq) goto loc_831EC9FC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eca34
	if (cr6.eq) goto loc_831ECA34;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r10,r10,4524
	ctx.r10.s64 = ctx.r10.s64 + 4524;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831eca34
	if (cr6.eq) goto loc_831ECA34;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// b 0x831eca34
	goto loc_831ECA34;
loc_831EC9FC:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// b 0x831eca34
	goto loc_831ECA34;
loc_831ECA1C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831eca34
	if (cr6.eq) goto loc_831ECA34;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831ECA34;
	sub_831CDCF0(ctx, base);
loc_831ECA34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECA40"))) PPC_WEAK_FUNC(sub_831ECA40);
PPC_FUNC_IMPL(__imp__sub_831ECA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831ECA48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831eca6c
	if (cr6.eq) goto loc_831ECA6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_831ECA6C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x831eca90
	if (!cr6.lt) goto loc_831ECA90;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13572
	ctx.r4.s64 = ctx.r11.s64 + 13572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831ECA88;
	sub_831EA418(ctx, base);
loc_831ECA88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ecad0
	goto loc_831ECAD0;
loc_831ECA90:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831ecaa8
	if (cr6.eq) goto loc_831ECAA8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831ECAA8;
	sub_831CDCF0(ctx, base);
loc_831ECAA8:
	// bl 0x831ea7b0
	ctx.lr = 0x831ECAAC;
	sub_831EA7B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eca88
	if (!cr0.eq) goto loc_831ECA88;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ec960
	ctx.lr = 0x831ECAD0;
	sub_831EC960(ctx, base);
loc_831ECAD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECAD8"))) PPC_WEAK_FUNC(sub_831ECAD8);
PPC_FUNC_IMPL(__imp__sub_831ECAD8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ecafc
	if (cr6.eq) goto loc_831ECAFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_831ECAFC:
	// bl 0x831eb6f8
	ctx.lr = 0x831ECB00;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ecb20
	if (!cr0.eq) goto loc_831ECB20;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13584
	ctx.r4.s64 = ctx.r11.s64 + 13584;
	// bl 0x831ea418
	ctx.lr = 0x831ECB18;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ecb30
	goto loc_831ECB30;
loc_831ECB20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ecb2c
	if (cr6.eq) goto loc_831ECB2C;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_831ECB2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831ECB30:
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

__attribute__((alias("__imp__sub_831ECB44"))) PPC_WEAK_FUNC(sub_831ECB44);
PPC_FUNC_IMPL(__imp__sub_831ECB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831ECB48"))) PPC_WEAK_FUNC(sub_831ECB48);
PPC_FUNC_IMPL(__imp__sub_831ECB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831ECB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831ECB5C;
	sub_831EB6F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831ecb80
	if (!cr0.eq) goto loc_831ECB80;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13652
	ctx.r4.s64 = ctx.r11.s64 + 13652;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831ECB78;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ecbc8
	goto loc_831ECBC8;
loc_831ECB80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ecba4
	if (!cr6.eq) goto loc_831ECBA4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13596
	ctx.r4.s64 = ctx.r11.s64 + 13596;
	// bl 0x831ea3f0
	ctx.lr = 0x831ECB9C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ecbc8
	goto loc_831ECBC8;
loc_831ECBA4:
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// lwz r3,4708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4708);
	// bl 0x83a75cd8
	ctx.lr = 0x831ECBB0;
	sub_83A75CD8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7f8
	ctx.lr = 0x831ECBBC;
	sub_831EA7F8(ctx, base);
	// lwz r3,4708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4708);
	// bl 0x83a75d58
	ctx.lr = 0x831ECBC4;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831ECBC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECBD0"))) PPC_WEAK_FUNC(sub_831ECBD0);
PPC_FUNC_IMPL(__imp__sub_831ECBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831ECBD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831ecc00
	if (cr6.eq) goto loc_831ECC00;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
loc_831ECC00:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x831ECC10;
	sub_831CDCF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ec960
	ctx.lr = 0x831ECC2C;
	sub_831EC960(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831eccb8
	if (cr6.eq) goto loc_831ECCB8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831eccb8
	if (!cr6.eq) goto loc_831ECCB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ecc88
	if (cr6.eq) goto loc_831ECC88;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
loc_831ECC88:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831ecc98
	if (cr6.eq) goto loc_831ECC98;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_831ECC98:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831eccb0
	if (cr6.eq) goto loc_831ECCB0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831eccb0
	if (cr6.eq) goto loc_831ECCB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eccd4
	goto loc_831ECCD4;
loc_831ECCB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eccd4
	goto loc_831ECCD4;
loc_831ECCB8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831eccd0
	if (cr6.eq) goto loc_831ECCD0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831ECCD0;
	sub_831CDCF0(ctx, base);
loc_831ECCD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831ECCD4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECCDC"))) PPC_WEAK_FUNC(sub_831ECCDC);
PPC_FUNC_IMPL(__imp__sub_831ECCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831ECCE0"))) PPC_WEAK_FUNC(sub_831ECCE0);
PPC_FUNC_IMPL(__imp__sub_831ECCE0) {
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
	// beq cr6,0x831ecd40
	if (cr6.eq) goto loc_831ECD40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ecd10
	if (cr6.eq) goto loc_831ECD10;
loc_831ECD08:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ecd44
	goto loc_831ECD44;
loc_831ECD10:
	// bl 0x831ef038
	ctx.lr = 0x831ECD14;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831ecd40
	if (!cr6.eq) goto loc_831ECD40;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x831eb6f8
	ctx.lr = 0x831ECD24;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ecd40
	if (cr0.eq) goto loc_831ECD40;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831ecd08
	if (cr6.eq) goto loc_831ECD08;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831ecd08
	if (cr6.eq) goto loc_831ECD08;
loc_831ECD40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831ECD44:
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

__attribute__((alias("__imp__sub_831ECD58"))) PPC_WEAK_FUNC(sub_831ECD58);
PPC_FUNC_IMPL(__imp__sub_831ECD58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x831eb6f8
	ctx.lr = 0x831ECD68;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ecd78
	if (!cr0.eq) goto loc_831ECD78;
loc_831ECD70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ecd90
	goto loc_831ECD90;
loc_831ECD78:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x831ecd70
	if (!cr6.eq) goto loc_831ECD70;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// bl 0x831f5460
	ctx.lr = 0x831ECD90;
	sub_831F5460(ctx, base);
loc_831ECD90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831ECDA0"))) PPC_WEAK_FUNC(sub_831ECDA0);
PPC_FUNC_IMPL(__imp__sub_831ECDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831ECDA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831ECDBC;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ecddc
	if (!cr0.eq) goto loc_831ECDDC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13696
	ctx.r4.s64 = ctx.r11.s64 + 13696;
	// bl 0x831ea418
	ctx.lr = 0x831ECDD4;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ece80
	goto loc_831ECE80;
loc_831ECDDC:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831ecdf4
	if (cr6.eq) goto loc_831ECDF4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ecdfc
	if (!cr6.eq) goto loc_831ECDFC;
loc_831ECDF4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831ece14
	if (!cr6.eq) goto loc_831ECE14;
loc_831ECDFC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13668
	ctx.r4.s64 = ctx.r11.s64 + 13668;
	// bl 0x831ea3f0
	ctx.lr = 0x831ECE0C;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ece80
	goto loc_831ECE80;
loc_831ECE14:
	// add r28,r30,r31
	ctx.r28.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// bge cr6,0x831ece7c
	if (!cr6.lt) goto loc_831ECE7C;
	// addi r29,r10,40
	ctx.r29.s64 = ctx.r10.s64 + 40;
	// addi r31,r27,-4
	ctx.r31.s64 = ctx.r27.s64 + -4;
loc_831ECE28:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f2a60
	ctx.lr = 0x831ECE38;
	sub_831F2A60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// std r7,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r7.u64);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stwu r5,32(r31)
	ea = 32 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r31.u32 = ea;
	// blt cr6,0x831ece28
	if (cr6.lt) goto loc_831ECE28;
loc_831ECE7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831ECE80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ECE88"))) PPC_WEAK_FUNC(sub_831ECE88);
PPC_FUNC_IMPL(__imp__sub_831ECE88) {
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
	ctx.lr = 0x831ECE90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,4676
	ctx.r26.s64 = ctx.r11.s64 + 4676;
	// lwz r31,48(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831eceb4
	if (!cr6.eq) goto loc_831ECEB4;
loc_831ECEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ed020
	goto loc_831ED020;
loc_831ECEB4:
	// lwz r30,584(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 584);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x831eced8
	if (cr6.lt) goto loc_831ECED8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13708
	ctx.r4.s64 = ctx.r11.s64 + 13708;
	// bl 0x831ea3f0
	ctx.lr = 0x831ECED4;
	sub_831EA3F0(ctx, base);
	// b 0x831eceac
	goto loc_831ECEAC;
loc_831ECED8:
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,5124(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5124);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831eb688
	ctx.lr = 0x831ECEEC;
	sub_831EB688(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x831ecf20
	goto loc_831ECF20;
loc_831ECEF4:
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// blt cr6,0x831ecf04
	if (cr6.lt) goto loc_831ECF04;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x831ecf08
	goto loc_831ECF08;
loc_831ECF04:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_831ECF08:
	// cmpwi cr6,r4,1000
	cr6.compare<int32_t>(ctx.r4.s32, 1000, xer);
	// stw r5,5124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5124, ctx.r5.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt cr6,0x831eceac
	if (cr6.gt) goto loc_831ECEAC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831eb688
	ctx.lr = 0x831ECF20;
	sub_831EB688(ctx, base);
loc_831ECF20:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ecef4
	if (!cr0.eq) goto loc_831ECEF4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831ecf38
	if (!cr6.eq) goto loc_831ECF38;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x831ecff4
	goto loc_831ECFF4;
loc_831ECF38:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x831ecff4
	if (cr6.gt) goto loc_831ECFF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x831ecf7c
	if (!cr6.lt) goto loc_831ECF7C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831ecff4
	if (!cr6.gt) goto loc_831ECFF4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_831ECF68:
	// ldu r9,-8(r10)
	ea = -8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bdnz 0x831ecf68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831ECF68;
	// b 0x831ecff4
	goto loc_831ECFF4;
loc_831ECF7C:
	// addic. r9,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r9.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// blt 0x831ecfd4
	if (cr0.lt) goto loc_831ECFD4;
loc_831ECF8C:
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x831ecfc0
	if (!cr6.lt) goto loc_831ECFC0;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bgt cr6,0x831ecfd0
	if (cr6.gt) goto loc_831ECFD0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// b 0x831ecfc4
	goto loc_831ECFC4;
loc_831ECFC0:
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_831ECFC4:
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// ble cr6,0x831ecf8c
	if (!cr6.gt) goto loc_831ECF8C;
	// b 0x831ecfd4
	goto loc_831ECFD4;
loc_831ECFD0:
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
loc_831ECFD4:
	// subf. r10,r6,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x831ecff4
	if (!cr0.gt) goto loc_831ECFF4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831ECFE4:
	// ldu r10,-8(r9)
	ea = -8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bdnz 0x831ecfe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831ECFE4;
loc_831ECFF4:
	// stw r5,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r5.u32);
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// bge cr6,0x831ed010
	if (!cr6.lt) goto loc_831ED010;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
loc_831ED010:
	// stw r10,5124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5124, ctx.r10.u32);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,584(r26)
	PPC_STORE_U32(ctx.r26.u32 + 584, ctx.r10.u32);
loc_831ED020:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED028"))) PPC_WEAK_FUNC(sub_831ED028);
PPC_FUNC_IMPL(__imp__sub_831ED028) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed068
	if (!cr6.eq) goto loc_831ED068;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13776
	ctx.r4.s64 = ctx.r11.s64 + 13776;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED060;
	sub_831EA3F0(ctx, base);
loc_831ED060:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ed104
	goto loc_831ED104;
loc_831ED068:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ed060
	if (cr6.eq) goto loc_831ED060;
loc_831ED074:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ed08c
	if (cr6.eq) goto loc_831ED08C;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ed074
	if (!cr6.eq) goto loc_831ED074;
loc_831ED08C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ed060
	if (cr6.eq) goto loc_831ED060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ece88
	ctx.lr = 0x831ED09C;
	sub_831ECE88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ed060
	if (cr0.eq) goto loc_831ED060;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed0c4
	if (cr6.eq) goto loc_831ED0C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831ED0C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed0e4
	if (!cr6.eq) goto loc_831ED0E4;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x831ed100
	goto loc_831ED100;
loc_831ED0E4:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed0e4
	if (!cr6.eq) goto loc_831ED0E4;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_831ED100:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831ED104:
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

__attribute__((alias("__imp__sub_831ED11C"))) PPC_WEAK_FUNC(sub_831ED11C);
PPC_FUNC_IMPL(__imp__sub_831ED11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831ED120"))) PPC_WEAK_FUNC(sub_831ED120);
PPC_FUNC_IMPL(__imp__sub_831ED120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831ED128;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,4724
	ctx.r26.s64 = ctx.r11.s64 + 4724;
	// lwz r28,-52(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -52);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831ed2fc
	if (cr6.eq) goto loc_831ED2FC;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// beq cr6,0x831ed2fc
	if (cr6.eq) goto loc_831ED2FC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ed2fc
	if (cr6.eq) goto loc_831ED2FC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed16c
	if (cr6.eq) goto loc_831ED16C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831ED16C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831ED16C:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r29,r11,12952
	ctx.r29.s64 = ctx.r11.s64 + 12952;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ed19c
	if (cr6.eq) goto loc_831ED19C;
	// lwz r3,540(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ed198
	if (!cr6.eq) goto loc_831ED198;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED194;
	sub_831EA3F0(ctx, base);
	// b 0x831ed19c
	goto loc_831ED19C;
loc_831ED198:
	// bl 0x83a76130
	ctx.lr = 0x831ED19C;
	sub_83A76130(ctx, base);
loc_831ED19C:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ed1cc
	if (cr6.eq) goto loc_831ED1CC;
	// lwz r3,540(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ed1c8
	if (!cr6.eq) goto loc_831ED1C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED1C4;
	sub_831EA3F0(ctx, base);
	// b 0x831ed1cc
	goto loc_831ED1CC;
loc_831ED1C8:
	// bl 0x83a76130
	ctx.lr = 0x831ED1CC;
	sub_83A76130(ctx, base);
loc_831ED1CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed1f8
	if (cr6.eq) goto loc_831ED1F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bne cr6,0x831ed1f4
	if (!cr6.eq) goto loc_831ED1F4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x831ed1f8
	goto loc_831ED1F8;
loc_831ED1F4:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_831ED1F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed20c
	if (cr6.eq) goto loc_831ED20C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831ED20C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x831ed234
	goto loc_831ED234;
loc_831ED228:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_831ED234:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831ed228
	if (!cr6.eq) goto loc_831ED228;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x831eb688
	ctx.lr = 0x831ED250;
	sub_831EB688(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x831ed2bc
	if (cr0.eq) goto loc_831ED2BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r27,536(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 536);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addic. r28,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r28.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble 0x831ed298
	if (!cr0.gt) goto loc_831ED298;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r5,r28,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831cee08
	ctx.lr = 0x831ED290;
	sub_831CEE08(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_831ED298:
	// addic. r10,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r10.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,536(r26)
	PPC_STORE_U32(ctx.r26.u32 + 536, ctx.r10.u32);
	// bge 0x831ed2bc
	if (!cr0.lt) goto loc_831ED2BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,13744
	ctx.r4.s64 = ctx.r11.s64 + 13744;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED2BC;
	sub_831EA3F0(ctx, base);
loc_831ED2BC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// beq cr6,0x831ed2d8
	if (cr6.eq) goto loc_831ED2D8;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
loc_831ED2D8:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_831ED2FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED304"))) PPC_WEAK_FUNC(sub_831ED304);
PPC_FUNC_IMPL(__imp__sub_831ED304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831ED308"))) PPC_WEAK_FUNC(sub_831ED308);
PPC_FUNC_IMPL(__imp__sub_831ED308) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ed32c
	if (cr6.eq) goto loc_831ED32C;
	// bl 0x831ed308
	ctx.lr = 0x831ED32C;
	sub_831ED308(ctx, base);
loc_831ED32C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ed33c
	if (cr6.eq) goto loc_831ED33C;
	// bl 0x831ed308
	ctx.lr = 0x831ED33C;
	sub_831ED308(ctx, base);
loc_831ED33C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ed120
	ctx.lr = 0x831ED344;
	sub_831ED120(ctx, base);
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

__attribute__((alias("__imp__sub_831ED358"))) PPC_WEAK_FUNC(sub_831ED358);
PPC_FUNC_IMPL(__imp__sub_831ED358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831ED360;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r11,4672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4672);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ed3a0
	if (cr6.eq) goto loc_831ED3A0;
loc_831ED384:
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x831ed398
	if (cr6.eq) goto loc_831ED398;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ed384
	if (!cr6.eq) goto loc_831ED384;
loc_831ED398:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ed3a8
	if (!cr6.eq) goto loc_831ED3A8;
loc_831ED3A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ed400
	goto loc_831ED400;
loc_831ED3A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed3bc
	if (cr6.eq) goto loc_831ED3BC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_831ED3BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed3d4
	if (cr6.eq) goto loc_831ED3D4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_831ED3D4:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831ed120
	ctx.lr = 0x831ED3E4;
	sub_831ED120(ctx, base);
	// lwz r11,4672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4672);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x831ed3fc
	if (!cr6.eq) goto loc_831ED3FC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_831ED3FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831ED400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED408"))) PPC_WEAK_FUNC(sub_831ED408);
PPC_FUNC_IMPL(__imp__sub_831ED408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831ED410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4672);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ed494
	if (cr6.eq) goto loc_831ED494;
loc_831ED434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x831ed45c
	if (cr6.eq) goto loc_831ED45C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x831ed488
	if (!cr6.eq) goto loc_831ED488;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831ed488
	goto loc_831ED488;
loc_831ED45C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed470
	if (cr6.eq) goto loc_831ED470;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_831ED470:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ed484
	if (cr6.eq) goto loc_831ED484;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831ED484:
	// bl 0x831ed120
	ctx.lr = 0x831ED488;
	sub_831ED120(ctx, base);
loc_831ED488:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ed434
	if (!cr6.eq) goto loc_831ED434;
	// lwz r11,4672(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4672);
loc_831ED494:
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED4A4"))) PPC_WEAK_FUNC(sub_831ED4A4);
PPC_FUNC_IMPL(__imp__sub_831ED4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831ED4A8"))) PPC_WEAK_FUNC(sub_831ED4A8);
PPC_FUNC_IMPL(__imp__sub_831ED4A8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r31,r11,4692
	ctx.r31.s64 = ctx.r11.s64 + 4692;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831ed4e8
	if (cr6.lt) goto loc_831ED4E8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,13920
	ctx.r4.s64 = ctx.r11.s64 + 13920;
loc_831ED4D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED4E0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ed53c
	goto loc_831ED53C;
loc_831ED4E8:
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x831ed028
	ctx.lr = 0x831ED4F0;
	sub_831ED028(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ed504
	if (!cr0.eq) goto loc_831ED504;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,13832
	ctx.r4.s64 = ctx.r11.s64 + 13832;
	// b 0x831ed4d8
	goto loc_831ED4D8;
loc_831ED504:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x831ed520
	if (!cr6.lt) goto loc_831ED520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831ED520:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
loc_831ED53C:
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

__attribute__((alias("__imp__sub_831ED550"))) PPC_WEAK_FUNC(sub_831ED550);
PPC_FUNC_IMPL(__imp__sub_831ED550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831ED558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ed570
	if (cr6.eq) goto loc_831ED570;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_831ED570:
	// bl 0x831ea7b0
	ctx.lr = 0x831ED574;
	sub_831EA7B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ed584
	if (cr0.eq) goto loc_831ED584;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ed5e8
	goto loc_831ED5E8;
loc_831ED584:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ed5a8
	if (!cr6.eq) goto loc_831ED5A8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,13996
	ctx.r4.s64 = ctx.r11.s64 + 13996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831ED5A0;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ed5e8
	goto loc_831ED5E8;
loc_831ED5A8:
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// addi r29,r30,4716
	ctx.r29.s64 = ctx.r30.s64 + 4716;
	// lwz r3,4716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4716);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED5B8;
	sub_83A75CD8(ctx, base);
	// lwz r3,-8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED5C0;
	sub_83A75CD8(ctx, base);
	// bl 0x831ed4a8
	ctx.lr = 0x831ED5C4;
	sub_831ED4A8(ctx, base);
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a75d58
	ctx.lr = 0x831ED5D4;
	sub_83A75D58(ctx, base);
	// lwz r3,4716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4716);
	// bl 0x83a75d58
	ctx.lr = 0x831ED5DC;
	sub_83A75D58(ctx, base);
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_831ED5E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED5F0"))) PPC_WEAK_FUNC(sub_831ED5F0);
PPC_FUNC_IMPL(__imp__sub_831ED5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831ED5F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4680
	ctx.r31.s64 = ctx.r11.s64 + 4680;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x83a75cd8
	ctx.lr = 0x831ED624;
	sub_83A75CD8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED62C;
	sub_83A75CD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ed644
	if (!cr6.eq) goto loc_831ED644;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ed6e8
	if (cr6.eq) goto loc_831ED6E8;
loc_831ED644:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ed6e8
	if (cr6.eq) goto loc_831ED6E8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831ed66c
	if (cr6.lt) goto loc_831ED66C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,14128
	ctx.r4.s64 = ctx.r11.s64 + 14128;
	// b 0x831ed6f0
	goto loc_831ED6F0;
loc_831ED66C:
	// bl 0x831ed028
	ctx.lr = 0x831ED670;
	sub_831ED028(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x831ed684
	if (!cr0.eq) goto loc_831ED684;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,14048
	ctx.r4.s64 = ctx.r11.s64 + 14048;
	// b 0x831ed6f0
	goto loc_831ED6F0;
loc_831ED684:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x831ed6a0
	if (!cr6.lt) goto loc_831ED6A0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_831ED6A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ed6b8
	if (cr6.eq) goto loc_831ED6B8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x831f3148
	ctx.lr = 0x831ED6B8;
	sub_831F3148(ctx, base);
loc_831ED6B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r25,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r25.u32);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// addi r10,r28,31
	ctx.r10.s64 = ctx.r28.s64 + 31;
	// addi r11,r11,-17416
	ctx.r11.s64 = ctx.r11.s64 + -17416;
	// stw r27,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r27.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r10,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// b 0x831ed6fc
	goto loc_831ED6FC;
loc_831ED6E8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,14008
	ctx.r4.s64 = ctx.r11.s64 + 14008;
loc_831ED6F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED6F8;
	sub_831EA3F0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_831ED6FC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83a75d58
	ctx.lr = 0x831ED704;
	sub_83A75D58(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75d58
	ctx.lr = 0x831ED70C;
	sub_83A75D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED718"))) PPC_WEAK_FUNC(sub_831ED718);
PPC_FUNC_IMPL(__imp__sub_831ED718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831ED720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4672
	ctx.r31.s64 = ctx.r11.s64 + 4672;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED73C;
	sub_83A75CD8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED744;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x831ed760
	goto loc_831ED760;
loc_831ED750:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831ed760
	if (!cr6.eq) goto loc_831ED760;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_831ED760:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed750
	if (!cr6.eq) goto loc_831ED750;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ed358
	ctx.lr = 0x831ED774;
	sub_831ED358(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ed818
	if (!cr0.eq) goto loc_831ED818;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ed818
	if (cr6.eq) goto loc_831ED818;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831ea988
	ctx.lr = 0x831ED794;
	sub_831EA988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea8e8
	ctx.lr = 0x831ED7A0;
	sub_831EA8E8(ctx, base);
loc_831ED7A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x831ebf68
	ctx.lr = 0x831ED7B0;
	sub_831EBF68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ed7a0
	if (!cr0.eq) goto loc_831ED7A0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75d58
	ctx.lr = 0x831ED7C0;
	sub_83A75D58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ed7d8
	if (cr6.eq) goto loc_831ED7D8;
	// bl 0x831ea9f8
	ctx.lr = 0x831ED7D8;
	sub_831EA9F8(ctx, base);
loc_831ED7D8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED7E0;
	sub_83A75CD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ed358
	ctx.lr = 0x831ED7E8;
	sub_831ED358(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ed408
	ctx.lr = 0x831ED7F0;
	sub_831ED408(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831ed80c
	goto loc_831ED80C;
loc_831ED800:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831ED80C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed800
	if (!cr6.eq) goto loc_831ED800;
	// b 0x831ed81c
	goto loc_831ED81C;
loc_831ED818:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_831ED81C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831ed83c
	goto loc_831ED83C;
loc_831ED828:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831ed838
	if (!cr6.eq) goto loc_831ED838;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_831ED838:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831ED83C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed828
	if (!cr6.eq) goto loc_831ED828;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75d58
	ctx.lr = 0x831ED84C;
	sub_83A75D58(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83a75d58
	ctx.lr = 0x831ED854;
	sub_83A75D58(ctx, base);
	// subf r3,r28,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED860"))) PPC_WEAK_FUNC(sub_831ED860);
PPC_FUNC_IMPL(__imp__sub_831ED860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831ED868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831ED874;
	sub_831EB6F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831ed894
	if (!cr0.eq) goto loc_831ED894;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14264
	ctx.r4.s64 = ctx.r11.s64 + 14264;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED88C;
	sub_831EA3F0(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ed8f0
	goto loc_831ED8F0;
loc_831ED894:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ed8b8
	if (!cr6.eq) goto loc_831ED8B8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14208
	ctx.r4.s64 = ctx.r11.s64 + 14208;
	// bl 0x831ea3f0
	ctx.lr = 0x831ED8B0;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ed8f0
	goto loc_831ED8F0;
loc_831ED8B8:
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// addi r28,r29,4716
	ctx.r28.s64 = ctx.r29.s64 + 4716;
	// lwz r3,4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4716);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED8C8;
	sub_83A75CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ed718
	ctx.lr = 0x831ED8D4;
	sub_831ED718(ctx, base);
	// lwz r11,-12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4716);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,-12(r28)
	PPC_STORE_U32(ctx.r28.u32 + -12, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x831ED8EC;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831ED8F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831ED8F8"))) PPC_WEAK_FUNC(sub_831ED8F8);
PPC_FUNC_IMPL(__imp__sub_831ED8F8) {
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
	// addi r31,r11,4672
	ctx.r31.s64 = ctx.r11.s64 + 4672;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED918;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831ed934
	goto loc_831ED934;
loc_831ED928:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831ED934:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ed928
	if (!cr6.eq) goto loc_831ED928;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75cd8
	ctx.lr = 0x831ED944;
	sub_83A75CD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ed408
	ctx.lr = 0x831ED94C;
	sub_831ED408(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83a75d58
	ctx.lr = 0x831ED954;
	sub_83A75D58(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83a75d58
	ctx.lr = 0x831ED95C;
	sub_83A75D58(ctx, base);
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

__attribute__((alias("__imp__sub_831ED974"))) PPC_WEAK_FUNC(sub_831ED974);
PPC_FUNC_IMPL(__imp__sub_831ED974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831ED978"))) PPC_WEAK_FUNC(sub_831ED978);
PPC_FUNC_IMPL(__imp__sub_831ED978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831ED980;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x831eacb0
	ctx.lr = 0x831ED9A4;
	sub_831EACB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ed9dc
	if (cr6.eq) goto loc_831ED9DC;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x831ed9dc
	if (cr6.eq) goto loc_831ED9DC;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831ed9dc
	if (cr6.eq) goto loc_831ED9DC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ec960
	ctx.lr = 0x831ED9D8;
	sub_831EC960(ctx, base);
	// b 0x831edaa8
	goto loc_831EDAA8;
loc_831ED9DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x831ec730
	ctx.lr = 0x831EDA18;
	sub_831EC730(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831eda8c
	if (!cr0.eq) goto loc_831EDA8C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831eda8c
	if (cr6.eq) goto loc_831EDA8C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x831eda6c
	if (!cr6.eq) goto loc_831EDA6C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831edaa4
	if (cr6.eq) goto loc_831EDAA4;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r10,r10,4524
	ctx.r10.s64 = ctx.r10.s64 + 4524;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831edaa4
	if (cr6.eq) goto loc_831EDAA4;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
	// b 0x831edaa4
	goto loc_831EDAA4;
loc_831EDA6C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r10.u64);
	// std r9,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r9.u64);
	// std r11,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r11.u64);
	// b 0x831edaa4
	goto loc_831EDAA4;
loc_831EDA8C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831edaa4
	if (cr6.eq) goto loc_831EDAA4;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EDAA4;
	sub_831CDCF0(ctx, base);
loc_831EDAA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831EDAA8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EDAB0"))) PPC_WEAK_FUNC(sub_831EDAB0);
PPC_FUNC_IMPL(__imp__sub_831EDAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831EDAB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831edae8
	if (cr6.eq) goto loc_831EDAE8;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
loc_831EDAE8:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x831EDAF8;
	sub_831CDCF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831eacb0
	ctx.lr = 0x831EDB00;
	sub_831EACB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831edb34
	if (cr6.eq) goto loc_831EDB34;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831edb34
	if (cr6.eq) goto loc_831EDB34;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ec960
	ctx.lr = 0x831EDB2C;
	sub_831EC960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831edbac
	goto loc_831EDBAC;
loc_831EDB34:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r29,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// bl 0x831ec730
	ctx.lr = 0x831EDB70;
	sub_831EC730(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x831edb9c
	if (!cr0.eq) goto loc_831EDB9C;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// b 0x831edbac
	goto loc_831EDBAC;
loc_831EDB9C:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x831EDBAC;
	sub_831CDCF0(ctx, base);
loc_831EDBAC:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(ctx.r23.s32, 1, xer);
	// beq cr6,0x831edc08
	if (cr6.eq) goto loc_831EDC08;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831edc08
	if (cr6.eq) goto loc_831EDC08;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831edbf4
	if (cr6.eq) goto loc_831EDBF4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831edbf4
	if (!cr6.eq) goto loc_831EDBF4;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831edbf4
	if (cr6.eq) goto loc_831EDBF4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f31a0
	ctx.lr = 0x831EDBF0;
	sub_831F31A0(ctx, base);
	// b 0x831edc04
	goto loc_831EDC04;
loc_831EDBF4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ea658
	ctx.lr = 0x831EDC04;
	sub_831EA658(ctx, base);
loc_831EDC04:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
loc_831EDC08:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831edccc
	if (cr6.eq) goto loc_831EDCCC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831edccc
	if (!cr6.eq) goto loc_831EDCCC;
	// bl 0x831eb6f8
	ctx.lr = 0x831EDC20;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831edc58
	if (cr0.eq) goto loc_831EDC58;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831edc58
	if (!cr6.eq) goto loc_831EDC58;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831edc58
	if (cr6.eq) goto loc_831EDC58;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831f31a0
	ctx.lr = 0x831EDC50;
	sub_831F31A0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x831edc5c
	goto loc_831EDC5C;
loc_831EDC58:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_831EDC5C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831edca0
	if (cr6.eq) goto loc_831EDCA0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// std r9,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r9.u64);
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// stw r8,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r8.u32);
	// std r7,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r7.u64);
	// std r6,24(r26)
	PPC_STORE_U64(ctx.r26.u32 + 24, ctx.r6.u64);
	// stw r29,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r29.u32);
	// stw r29,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r29.u32);
	// stw r29,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r29.u32);
	// std r29,56(r26)
	PPC_STORE_U64(ctx.r26.u32 + 56, ctx.r29.u64);
loc_831EDCA0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831edcac
	if (cr6.eq) goto loc_831EDCAC;
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_831EDCAC:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x831edcc4
	if (cr6.eq) goto loc_831EDCC4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831edcc4
	if (cr6.eq) goto loc_831EDCC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831edce8
	goto loc_831EDCE8;
loc_831EDCC4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831edce8
	goto loc_831EDCE8;
loc_831EDCCC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831edce4
	if (cr6.eq) goto loc_831EDCE4;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EDCE4;
	sub_831CDCF0(ctx, base);
loc_831EDCE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831EDCE8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EDCF0"))) PPC_WEAK_FUNC(sub_831EDCF0);
PPC_FUNC_IMPL(__imp__sub_831EDCF0) {
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
	// addi r31,r11,5260
	ctx.r31.s64 = ctx.r11.s64 + 5260;
	// lwz r11,-588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831edd9c
	if (cr6.eq) goto loc_831EDD9C;
	// bl 0x831ed8f8
	ctx.lr = 0x831EDD1C;
	sub_831ED8F8(ctx, base);
	// lwz r11,-588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -588);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831edd54
	if (cr6.eq) goto loc_831EDD54;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831edd3c
	if (cr6.eq) goto loc_831EDD3C;
	// bl 0x831ed308
	ctx.lr = 0x831EDD3C;
	sub_831ED308(ctx, base);
loc_831EDD3C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831edd4c
	if (cr6.eq) goto loc_831EDD4C;
	// bl 0x831ed308
	ctx.lr = 0x831EDD4C;
	sub_831ED308(ctx, base);
loc_831EDD4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ed120
	ctx.lr = 0x831EDD54;
	sub_831ED120(ctx, base);
loc_831EDD54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eb5b0
	ctx.lr = 0x831EDD64;
	sub_831EB5B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,-584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -584, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,-536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -536, ctx.r10.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,5124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5124, ctx.r9.u32);
	// lwz r11,-588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -588);
	// stw r10,-588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_831EDD9C:
	// bl 0x831eab48
	ctx.lr = 0x831EDDA0;
	sub_831EAB48(ctx, base);
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

__attribute__((alias("__imp__sub_831EDDB8"))) PPC_WEAK_FUNC(sub_831EDDB8);
PPC_FUNC_IMPL(__imp__sub_831EDDB8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4716
	ctx.r31.s64 = ctx.r11.s64 + 4716;
	// lwz r11,-44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ede00
	if (!cr6.eq) goto loc_831EDE00;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,14420
	ctx.r4.s64 = ctx.r11.s64 + 14420;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EDDF8;
	sub_831EA418(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x831ede8c
	goto loc_831EDE8C;
loc_831EDE00:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ede24
	if (!cr6.eq) goto loc_831EDE24;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,14408
	ctx.r4.s64 = ctx.r11.s64 + 14408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EDE1C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ede8c
	goto loc_831EDE8C;
loc_831EDE24:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831ede48
	if (cr6.eq) goto loc_831EDE48;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x831ea3f0
	ctx.lr = 0x831EDE40;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ede8c
	goto loc_831EDE8C;
loc_831EDE48:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x831EDE50;
	sub_83A75CD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831ed718
	ctx.lr = 0x831EDE5C;
	sub_831ED718(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x831ede74
	if (!cr6.gt) goto loc_831EDE74;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_831EDE74:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x831EDE88;
	sub_83A75D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EDE8C:
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

__attribute__((alias("__imp__sub_831EDEA4"))) PPC_WEAK_FUNC(sub_831EDEA4);
PPC_FUNC_IMPL(__imp__sub_831EDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EDEA8"))) PPC_WEAK_FUNC(sub_831EDEA8);
PPC_FUNC_IMPL(__imp__sub_831EDEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EDEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x831edab0
	ctx.lr = 0x831EDED4;
	sub_831EDAB0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// beq cr6,0x831edf10
	if (cr6.eq) goto loc_831EDF10;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831edf10
	if (cr6.eq) goto loc_831EDF10;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// b 0x831edf20
	goto loc_831EDF20;
loc_831EDF10:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_831EDF20:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r10,r10,4524
	ctx.r10.s64 = ctx.r10.s64 + 4524;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x831edf68
	if (cr6.eq) goto loc_831EDF68;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_831EDF5C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831edf5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EDF5C;
loc_831EDF68:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831edf74
	if (cr6.eq) goto loc_831EDF74;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_831EDF74:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EDF7C"))) PPC_WEAK_FUNC(sub_831EDF7C);
PPC_FUNC_IMPL(__imp__sub_831EDF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EDF80"))) PPC_WEAK_FUNC(sub_831EDF80);
PPC_FUNC_IMPL(__imp__sub_831EDF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x831EDF88;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831edfc0
	if (cr6.eq) goto loc_831EDFC0;
	// stw r22,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r22.u32);
loc_831EDFC0:
	// bl 0x831ea7b0
	ctx.lr = 0x831EDFC4;
	sub_831EA7B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831edfd4
	if (cr0.eq) goto loc_831EDFD4;
loc_831EDFCC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ee270
	goto loc_831EE270;
loc_831EDFD4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ee258
	if (cr6.eq) goto loc_831EE258;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x831ee258
	if (cr6.eq) goto loc_831EE258;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x831ee070
	if (!cr6.eq) goto loc_831EE070;
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ead88
	ctx.lr = 0x831EDFFC;
	sub_831EAD88(ctx, base);
	// lwz r25,276(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831eb4b0
	ctx.lr = 0x831EE008;
	sub_831EB4B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x831edfcc
	if (cr0.eq) goto loc_831EDFCC;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_831EE014:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EE024;
	sub_831CDCF0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ed5f0
	ctx.lr = 0x831EE040;
	sub_831ED5F0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne 0x831ee098
	if (!cr0.eq) goto loc_831EE098;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831edfcc
	if (cr6.eq) goto loc_831EDFCC;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5264);
loc_831EE058:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ee08c
	if (!cr6.eq) goto loc_831EE08C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,12952
	ctx.r4.s64 = ctx.r11.s64 + 12952;
	// bl 0x831ea3f0
	ctx.lr = 0x831EE06C;
	sub_831EA3F0(ctx, base);
	// b 0x831edfcc
	goto loc_831EDFCC;
loc_831EE070:
	// cmplwi cr6,r25,820
	cr6.compare<uint32_t>(ctx.r25.u32, 820, xer);
	// bge cr6,0x831ee014
	if (!cr6.lt) goto loc_831EE014;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14448
	ctx.r4.s64 = ctx.r11.s64 + 14448;
	// bl 0x831ea3f0
	ctx.lr = 0x831EE088;
	sub_831EA3F0(ctx, base);
	// b 0x831ee26c
	goto loc_831EE26C;
loc_831EE08C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83a76130
	ctx.lr = 0x831EE094;
	sub_83A76130(ctx, base);
	// b 0x831edfcc
	goto loc_831EDFCC;
loc_831EE098:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,36(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831edea8
	ctx.lr = 0x831EE0B4;
	sub_831EDEA8(ctx, base);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r11,r11,527
	ctx.r11.s64 = ctx.r11.s64 + 527;
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831ee0f0
	if (cr6.eq) goto loc_831EE0F0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ee0f0
	if (cr6.eq) goto loc_831EE0F0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ee0f0
	if (!cr6.eq) goto loc_831EE0F0;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831ee234
	if (!cr6.eq) goto loc_831EE234;
loc_831EE0F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831EE0F8;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ee224
	if (!cr0.eq) goto loc_831EE224;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_831EE104:
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f3148
	ctx.lr = 0x831EE110;
	sub_831F3148(ctx, base);
loc_831EE110:
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,527
	ctx.r11.s64 = ctx.r11.s64 + 527;
	// rlwinm r31,r11,0,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x839f8330
	ctx.lr = 0x831EE124;
	sub_839F8330(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,820
	cr6.compare<uint32_t>(ctx.r11.u32, 820, xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x831ee144
	if (cr6.gt) goto loc_831EE144;
	// li r9,820
	ctx.r9.s64 = 820;
loc_831EE144:
	// lwz r31,60(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// add r29,r9,r28
	ctx.r29.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
loc_831EE160:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831ee160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831EE160;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r22.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r22,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r22.u32);
	// bne cr6,0x831ee188
	if (!cr6.eq) goto loc_831EE188;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
loc_831EE188:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831EE190;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ee1a8
	if (cr0.eq) goto loc_831EE1A8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ee1a8
	if (!cr6.eq) goto loc_831EE1A8;
	// stw r22,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r22.u32);
loc_831EE1A8:
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// stw r29,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r29.u32);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// addi r30,r11,5264
	ctx.r30.s64 = ctx.r11.s64 + 5264;
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// lwz r3,-556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -556);
	// bl 0x83a75cd8
	ctx.lr = 0x831EE1C8;
	sub_83A75CD8(ctx, base);
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r5,480(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// bl 0x831f2388
	ctx.lr = 0x831EE1DC;
	sub_831F2388(ctx, base);
	// lwz r3,-556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -556);
	// bl 0x83a75d58
	ctx.lr = 0x831EE1E4;
	sub_83A75D58(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// bl 0x831f2d58
	ctx.lr = 0x831EE1F4;
	sub_831F2D58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ee248
	if (!cr0.eq) goto loc_831EE248;
	// lwz r3,-556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -556);
	// bl 0x83a75cd8
	ctx.lr = 0x831EE204;
	sub_83A75CD8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ed120
	ctx.lr = 0x831EE20C;
	sub_831ED120(ctx, base);
	// lwz r3,-556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -556);
	// bl 0x83a75d58
	ctx.lr = 0x831EE214;
	sub_83A75D58(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831edfcc
	if (cr6.eq) goto loc_831EDFCC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x831ee058
	goto loc_831EE058;
loc_831EE224:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ee104
	if (!cr6.eq) goto loc_831EE104;
loc_831EE234:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f31a0
	ctx.lr = 0x831EE244;
	sub_831F31A0(ctx, base);
	// b 0x831ee110
	goto loc_831EE110;
loc_831EE248:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x831ee270
	goto loc_831EE270;
loc_831EE258:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EE26C;
	sub_831EA418(ctx, base);
loc_831EE26C:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EE270:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EE278"))) PPC_WEAK_FUNC(sub_831EE278);
PPC_FUNC_IMPL(__imp__sub_831EE278) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x831edf80
	sub_831EDF80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EE280"))) PPC_WEAK_FUNC(sub_831EE280);
PPC_FUNC_IMPL(__imp__sub_831EE280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831EE288;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r4,44
	ctx.r27.s64 = ctx.r4.s64 + 44;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831EE2A4;
	sub_83A761B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ee32c
	if (!cr0.eq) goto loc_831EE32C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ee310
	if (!cr6.eq) goto loc_831EE310;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x831ee2ec
	goto loc_831EE2EC;
loc_831EE2C4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ee2dc
	if (cr6.eq) goto loc_831EE2DC;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r11,-16960
	ctx.r4.s64 = ctx.r11.s64 + -16960;
	// bl 0x831eaad0
	ctx.lr = 0x831EE2DC;
	sub_831EAAD0(ctx, base);
loc_831EE2DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ebdc0
	ctx.lr = 0x831EE2E4;
	sub_831EBDC0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_831EE2EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ee2c4
	if (!cr6.eq) goto loc_831EE2C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ebdc0
	ctx.lr = 0x831EE2FC;
	sub_831EBDC0(ctx, base);
	// add. r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt 0x831ee320
	if (cr0.gt) goto loc_831EE320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ed860
	ctx.lr = 0x831EE30C;
	sub_831ED860(ctx, base);
	// b 0x831ee320
	goto loc_831EE320;
loc_831EE310:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831ee320
	if (cr6.eq) goto loc_831EE320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831eb0d8
	ctx.lr = 0x831EE320;
	sub_831EB0D8(ctx, base);
loc_831EE320:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831EE32C;
	sub_83A761B8(ctx, base);
loc_831EE32C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EE334"))) PPC_WEAK_FUNC(sub_831EE334);
PPC_FUNC_IMPL(__imp__sub_831EE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EE338"))) PPC_WEAK_FUNC(sub_831EE338);
PPC_FUNC_IMPL(__imp__sub_831EE338) {
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
	// beq cr6,0x831ee3ac
	if (cr6.eq) goto loc_831EE3AC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ee3bc
	if (cr6.eq) goto loc_831EE3BC;
	// bl 0x831eb6f8
	ctx.lr = 0x831EE368;
	sub_831EB6F8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x831ee380
	if (!cr0.eq) goto loc_831EE380;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x831ee3d4
	goto loc_831EE3D4;
loc_831EE380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ee280
	ctx.lr = 0x831EE388;
	sub_831EE280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831eb6f8
	ctx.lr = 0x831EE390;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq 0x831ee3a0
	if (cr0.eq) goto loc_831EE3A0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_831EE3A0:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ee3d4
	goto loc_831EE3D4;
loc_831EE3AC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831ee3bc
	if (cr6.eq) goto loc_831EE3BC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831EE3BC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,14580
	ctx.r4.s64 = ctx.r11.s64 + 14580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EE3D0;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EE3D4:
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

__attribute__((alias("__imp__sub_831EE3EC"))) PPC_WEAK_FUNC(sub_831EE3EC);
PPC_FUNC_IMPL(__imp__sub_831EE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EE3F0"))) PPC_WEAK_FUNC(sub_831EE3F0);
PPC_FUNC_IMPL(__imp__sub_831EE3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831EE3F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831ee41c
	if (cr6.eq) goto loc_831EE41C;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
loc_831EE41C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ee434
	if (cr6.eq) goto loc_831EE434;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EE434;
	sub_831CDCF0(ctx, base);
loc_831EE434:
	// bl 0x831ea7b0
	ctx.lr = 0x831EE438;
	sub_831EA7B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ee448
	if (cr0.eq) goto loc_831EE448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ee518
	goto loc_831EE518;
loc_831EE448:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831eacb0
	ctx.lr = 0x831EE450;
	sub_831EACB0(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r26,r11,4524
	ctx.r26.s64 = ctx.r11.s64 + 4524;
	// beq cr6,0x831ee488
	if (cr6.eq) goto loc_831EE488;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831ee488
	if (cr6.eq) goto loc_831EE488;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ec960
	ctx.lr = 0x831EE484;
	sub_831EC960(ctx, base);
	// b 0x831ee500
	goto loc_831EE500;
loc_831EE488:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// bl 0x831ec730
	ctx.lr = 0x831EE4C0;
	sub_831EC730(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ee500
	if (!cr0.eq) goto loc_831EE500;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ee518
	if (cr6.eq) goto loc_831EE518;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ee500
	if (cr6.eq) goto loc_831EE500;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x831ee500
	if (cr6.eq) goto loc_831EE500;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_831EE500:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831ee518
	if (cr6.eq) goto loc_831EE518;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x831ee518
	if (!cr6.eq) goto loc_831EE518;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_831EE518:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EE520"))) PPC_WEAK_FUNC(sub_831EE520);
PPC_FUNC_IMPL(__imp__sub_831EE520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831EE528;
	__savegprlr_27(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,519
	ctx.r5.s64 = 519;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,145
	ctx.r3.s64 = ctx.r1.s64 + 145;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x831EE554;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831ee64c
	if (cr6.eq) goto loc_831EE64C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// beq cr6,0x831ee64c
	if (cr6.eq) goto loc_831EE64C;
	// bl 0x831ea7b0
	ctx.lr = 0x831EE570;
	sub_831EA7B0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ee5c0
	if (cr6.eq) goto loc_831EE5C0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ee3f0
	ctx.lr = 0x831EE598;
	sub_831EE3F0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831ee5d0
	if (cr6.eq) goto loc_831EE5D0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ee5d0
	if (cr6.eq) goto loc_831EE5D0;
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// b 0x831ee664
	goto loc_831EE664;
loc_831EE5C0:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x831EE5D0;
	sub_831CDCF0(ctx, base);
loc_831EE5D0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x831ee5f8
	if (cr6.eq) goto loc_831EE5F8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ee5f8
	if (cr6.eq) goto loc_831EE5F8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831ee5f8
	if (!cr6.eq) goto loc_831EE5F8;
	// lwz r5,40(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831ee638
	if (!cr6.eq) goto loc_831EE638;
loc_831EE5F8:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x831eb6f8
	ctx.lr = 0x831EE600;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831ee628
	if (!cr0.eq) goto loc_831EE628;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_831EE60C:
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831f3148
	ctx.lr = 0x831EE618;
	sub_831F3148(ctx, base);
loc_831EE618:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831eb378
	ctx.lr = 0x831EE624;
	sub_831EB378(ctx, base);
	// b 0x831ee664
	goto loc_831EE664;
loc_831EE628:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ee60c
	if (!cr6.eq) goto loc_831EE60C;
loc_831EE638:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,520
	ctx.r4.s64 = 520;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831f31a0
	ctx.lr = 0x831EE648;
	sub_831F31A0(ctx, base);
	// b 0x831ee618
	goto loc_831EE618;
loc_831EE64C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,14592
	ctx.r4.s64 = ctx.r11.s64 + 14592;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EE660;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EE664:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EE66C"))) PPC_WEAK_FUNC(sub_831EE66C);
PPC_FUNC_IMPL(__imp__sub_831EE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EE670"))) PPC_WEAK_FUNC(sub_831EE670);
PPC_FUNC_IMPL(__imp__sub_831EE670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x831ee3f0
	ctx.lr = 0x831EE688;
	sub_831EE3F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ee6b4
	if (!cr0.eq) goto loc_831EE6B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ee6b4
	if (cr6.eq) goto loc_831EE6B4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x831eb6f8
	ctx.lr = 0x831EE6A4;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ee6b4
	if (cr0.eq) goto loc_831EE6B4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x831ee6b8
	goto loc_831EE6B8;
loc_831EE6B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EE6B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EE6C8"))) PPC_WEAK_FUNC(sub_831EE6C8);
PPC_FUNC_IMPL(__imp__sub_831EE6C8) {
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
	// addi r31,r11,4708
	ctx.r31.s64 = ctx.r11.s64 + 4708;
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ee714
	if (cr6.eq) goto loc_831EE714;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x831EE6F4;
	sub_83A75CD8(ctx, base);
	// b 0x831ee6fc
	goto loc_831EE6FC;
loc_831EE6F8:
	// bl 0x831eddb8
	ctx.lr = 0x831EE6FC;
	sub_831EDDB8(ctx, base);
loc_831EE6FC:
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ee6f8
	if (!cr6.eq) goto loc_831EE6F8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x831EE714;
	sub_83A75D58(ctx, base);
loc_831EE714:
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

__attribute__((alias("__imp__sub_831EE728"))) PPC_WEAK_FUNC(sub_831EE728);
PPC_FUNC_IMPL(__imp__sub_831EE728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x831EE730;
	__savegprlr_15(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r21.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EE774;
	sub_831CDCF0(ctx, base);
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// mr r16,r21
	ctx.r16.u64 = ctx.r21.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x831ee788
	if (cr6.eq) goto loc_831EE788;
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
loc_831EE788:
	// bl 0x831ea7b0
	ctx.lr = 0x831EE78C;
	sub_831EA7B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ee79c
	if (cr0.eq) goto loc_831EE79C;
loc_831EE794:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eeb60
	goto loc_831EEB60;
loc_831EE79C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ee7c0
	if (!cr6.eq) goto loc_831EE7C0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,14736
	ctx.r4.s64 = ctx.r11.s64 + 14736;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EE7B8;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831eeb60
	goto loc_831EEB60;
loc_831EE7C0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831eaed0
	ctx.lr = 0x831EE7D0;
	sub_831EAED0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eeb60
	if (!cr0.eq) goto loc_831EEB60;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ee804
	if (!cr6.eq) goto loc_831EE804;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x831eeb18
	if (!cr6.eq) goto loc_831EEB18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831eb4b0
	ctx.lr = 0x831EE7F4;
	sub_831EB4B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// beq 0x831eeb18
	if (cr0.eq) goto loc_831EEB18;
loc_831EE804:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, xer);
	// blt cr6,0x831eeb18
	if (cr6.lt) goto loc_831EEB18;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EE81C;
	sub_831CDCF0(ctx, base);
	// addi r11,r19,-1
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// li r7,5
	ctx.r7.s64 = 5;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ed5f0
	ctx.lr = 0x831EE848;
	sub_831ED5F0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne 0x831ee884
	if (!cr0.eq) goto loc_831EE884;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ee794
	if (cr6.eq) goto loc_831EE794;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ee878
	if (!cr6.eq) goto loc_831EE878;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,12952
	ctx.r4.s64 = ctx.r11.s64 + 12952;
	// bl 0x831ea3f0
	ctx.lr = 0x831EE874;
	sub_831EA3F0(ctx, base);
	// b 0x831ee794
	goto loc_831EE794;
loc_831EE878:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76130
	ctx.lr = 0x831EE880;
	sub_83A76130(ctx, base);
	// b 0x831ee794
	goto loc_831EE794;
loc_831EE884:
	// lwz r26,60(r22)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r11,r26,47
	ctx.r11.s64 = ctx.r26.s64 + 47;
	// li r18,2
	ctx.r18.s64 = 2;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r10.u32);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bge cr6,0x831eeac8
	if (!cr6.lt) goto loc_831EEAC8;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// b 0x831ee8c4
	goto loc_831EE8C4;
loc_831EE8C0:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831EE8C4:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831eeac8
	if (cr0.eq) goto loc_831EEAC8;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x831ee8e0
	if (!cr6.gt) goto loc_831EE8E0;
	// cmpw cr6,r23,r19
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r19.s32, xer);
	// bge cr6,0x831eeac8
	if (!cr6.lt) goto loc_831EEAC8;
loc_831EE8E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,259
	ctx.r4.s64 = 259;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831eae10
	ctx.lr = 0x831EE8F0;
	sub_831EAE10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839f8330
	ctx.lr = 0x831EE8F8;
	sub_839F8330(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// bgt cr6,0x831eeaac
	if (cr6.gt) goto loc_831EEAAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bl 0x839f8330
	ctx.lr = 0x831EE924;
	sub_839F8330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x831f3148
	ctx.lr = 0x831EE938;
	sub_831F3148(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x831f30d8
	ctx.lr = 0x831EE940;
	sub_831F30D8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831ee3f0
	ctx.lr = 0x831EE958;
	sub_831EE3F0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831eb6f8
	ctx.lr = 0x831EE960;
	sub_831EB6F8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x831eea20
	if (cr0.eq) goto loc_831EEA20;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x831eeaa4
	if (cr6.eq) goto loc_831EEAA4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x831eeaa4
	if (cr6.eq) goto loc_831EEAA4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831eea20
	if (!cr6.eq) goto loc_831EEA20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x839f8330
	ctx.lr = 0x831EE98C;
	sub_839F8330(ctx, base);
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// bgt cr6,0x831eeab8
	if (cr6.gt) goto loc_831EEAB8;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x839f8330
	ctx.lr = 0x831EE9A8;
	sub_839F8330(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bl 0x831eb6f8
	ctx.lr = 0x831EE9BC;
	sub_831EB6F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831eea80
	if (!cr0.eq) goto loc_831EEA80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_831EE9C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f3148
	ctx.lr = 0x831EE9D4;
	sub_831F3148(ctx, base);
loc_831EE9D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// stw r21,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r21.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// beq cr6,0x831ee9fc
	if (cr6.eq) goto loc_831EE9FC;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x831eea20
	if (!cr6.eq) goto loc_831EEA20;
loc_831EE9FC:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// beq cr6,0x831eea14
	if (cr6.eq) goto loc_831EEA14;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x831eea20
	if (!cr6.eq) goto loc_831EEA20;
loc_831EEA14:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_831EEA20:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831eea64
	if (!cr6.eq) goto loc_831EEA64;
	// addi r28,r26,8
	ctx.r28.s64 = ctx.r26.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f14b8
	ctx.lr = 0x831EEA38;
	sub_831F14B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831eeac8
	if (!cr0.eq) goto loc_831EEAC8;
	// bl 0x831ef038
	ctx.lr = 0x831EEA44;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831eea58
	if (!cr6.eq) goto loc_831EEA58;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x831f00c0
	ctx.lr = 0x831EEA58;
	sub_831F00C0(ctx, base);
loc_831EEA58:
	// lwz r16,40(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// stw r23,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r23.u32);
loc_831EEA64:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x831ee8c0
	if (cr6.lt) goto loc_831EE8C0;
	// b 0x831eeac8
	goto loc_831EEAC8;
loc_831EEA80:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831ee9c8
	if (!cr6.eq) goto loc_831EE9C8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f31a0
	ctx.lr = 0x831EEAA0;
	sub_831F31A0(ctx, base);
	// b 0x831ee9d4
	goto loc_831EE9D4;
loc_831EEAA4:
	// stw r18,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r18.u32);
	// b 0x831eea64
	goto loc_831EEA64;
loc_831EEAAC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,14676
	ctx.r4.s64 = ctx.r11.s64 + 14676;
	// b 0x831eeac0
	goto loc_831EEAC0;
loc_831EEAB8:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,14616
	ctx.r4.s64 = ctx.r11.s64 + 14616;
loc_831EEAC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea3f0
	ctx.lr = 0x831EEAC8;
	sub_831EA3F0(ctx, base);
loc_831EEAC8:
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x831eeadc
	if (cr6.eq) goto loc_831EEADC;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_831EEADC:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831eeaf0
	if (!cr6.eq) goto loc_831EEAF0;
	// stw r18,32(r22)
	PPC_STORE_U32(ctx.r22.u32 + 32, ctx.r18.u32);
	// b 0x831eeb10
	goto loc_831EEB10;
loc_831EEAF0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x831f1010
	ctx.lr = 0x831EEB10;
	sub_831F1010(ctx, base);
loc_831EEB10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eeb60
	goto loc_831EEB60;
loc_831EEB18:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,14604
	ctx.r4.s64 = ctx.r11.s64 + 14604;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EEB2C;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831eeb5c
	if (cr6.eq) goto loc_831EEB5C;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831eeb54
	if (!cr6.eq) goto loc_831EEB54;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,12952
	ctx.r4.s64 = ctx.r11.s64 + 12952;
	// bl 0x831ea3f0
	ctx.lr = 0x831EEB50;
	sub_831EA3F0(ctx, base);
	// b 0x831eeb5c
	goto loc_831EEB5C;
loc_831EEB54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76130
	ctx.lr = 0x831EEB5C;
	sub_83A76130(ctx, base);
loc_831EEB5C:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_831EEB60:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EEB68"))) PPC_WEAK_FUNC(sub_831EEB68);
PPC_FUNC_IMPL(__imp__sub_831EEB68) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x831ee728
	sub_831EE728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EEB7C"))) PPC_WEAK_FUNC(sub_831EEB7C);
PPC_FUNC_IMPL(__imp__sub_831EEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEB80"))) PPC_WEAK_FUNC(sub_831EEB80);
PPC_FUNC_IMPL(__imp__sub_831EEB80) {
	PPC_FUNC_PROLOGUE();
	// lis r3,626
	ctx.r3.s64 = 41025536;
	// ori r3,r3,1792
	ctx.r3.u64 = ctx.r3.u64 | 1792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEB8C"))) PPC_WEAK_FUNC(sub_831EEB8C);
PPC_FUNC_IMPL(__imp__sub_831EEB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEB90"))) PPC_WEAK_FUNC(sub_831EEB90);
PPC_FUNC_IMPL(__imp__sub_831EEB90) {
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
	// lis r11,626
	ctx.r11.s64 = 41025536;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r5,r11,1792
	ctx.r5.u64 = ctx.r11.u64 | 1792;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x831eebc8
	if (cr6.eq) goto loc_831EEBC8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,15056
	ctx.r4.s64 = ctx.r11.s64 + 15056;
	// bl 0x831ea410
	ctx.lr = 0x831EEBC0;
	sub_831EA410(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831eec5c
	goto loc_831EEC5C;
loc_831EEBC8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eec44
	if (cr6.lt) goto loc_831EEC44;
	// bne cr6,0x831eec3c
	if (!cr6.eq) goto loc_831EEC3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14996
	ctx.r4.s64 = ctx.r11.s64 + 14996;
	// bl 0x831ea3f0
	ctx.lr = 0x831EEC3C;
	sub_831EA3F0(ctx, base);
loc_831EEC3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eec5c
	goto loc_831EEC5C;
loc_831EEC44:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,14984
	ctx.r4.s64 = ctx.r11.s64 + 14984;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EEC58;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EEC5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEC6C"))) PPC_WEAK_FUNC(sub_831EEC6C);
PPC_FUNC_IMPL(__imp__sub_831EEC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEC70"))) PPC_WEAK_FUNC(sub_831EEC70);
PPC_FUNC_IMPL(__imp__sub_831EEC70) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EEC98;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831eecf4
	if (cr6.eq) goto loc_831EECF4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831eecec
	if (cr6.eq) goto loc_831EECEC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831eece4
	if (cr6.eq) goto loc_831EECE4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831eecf4
	if (cr6.eq) goto loc_831EECF4;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831eecfc
	if (!cr6.eq) goto loc_831EECFC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15196
	ctx.r4.s64 = ctx.r11.s64 + 15196;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EECE0;
	sub_831EA418(ctx, base);
	// b 0x831eecfc
	goto loc_831EECFC;
loc_831EECE4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x831eecf8
	goto loc_831EECF8;
loc_831EECEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831eecf8
	goto loc_831EECF8;
loc_831EECF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831EECF8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831EECFC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
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

__attribute__((alias("__imp__sub_831EED28"))) PPC_WEAK_FUNC(sub_831EED28);
PPC_FUNC_IMPL(__imp__sub_831EED28) {
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
	// bl 0x83a765f0
	ctx.lr = 0x831EED38;
	sub_83A765F0(ctx, base);
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

__attribute__((alias("__imp__sub_831EED4C"))) PPC_WEAK_FUNC(sub_831EED4C);
PPC_FUNC_IMPL(__imp__sub_831EED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EED50"))) PPC_WEAK_FUNC(sub_831EED50);
PPC_FUNC_IMPL(__imp__sub_831EED50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EED58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,5316
	ctx.r30.s64 = ctx.r11.s64 + 5316;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831EED78;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831eed94
	if (!cr6.eq) goto loc_831EED94;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831eedc0
	if (cr6.eq) goto loc_831EEDC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831eedc0
	goto loc_831EEDC0;
loc_831EED94:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831eeda4
	if (cr6.eq) goto loc_831EEDA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831EEDA4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x831eedb0
	if (cr6.eq) goto loc_831EEDB0;
	// bl 0x831f8130
	ctx.lr = 0x831EEDB0;
	sub_831F8130(ctx, base);
loc_831EEDB0:
	// bl 0x831f7950
	ctx.lr = 0x831EEDB4;
	sub_831F7950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a761b8
	ctx.lr = 0x831EEDC0;
	sub_83A761B8(ctx, base);
loc_831EEDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EEDCC"))) PPC_WEAK_FUNC(sub_831EEDCC);
PPC_FUNC_IMPL(__imp__sub_831EEDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEDD0"))) PPC_WEAK_FUNC(sub_831EEDD0);
PPC_FUNC_IMPL(__imp__sub_831EEDD0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,5320
	ctx.r31.s64 = ctx.r11.s64 + 5320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831EEDF4;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831eee0c
	if (cr6.eq) goto loc_831EEE0C;
	// bl 0x831f9160
	ctx.lr = 0x831EEE00;
	sub_831F9160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a761b8
	ctx.lr = 0x831EEE0C;
	sub_83A761B8(ctx, base);
loc_831EEE0C:
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

__attribute__((alias("__imp__sub_831EEE24"))) PPC_WEAK_FUNC(sub_831EEE24);
PPC_FUNC_IMPL(__imp__sub_831EEE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEE28"))) PPC_WEAK_FUNC(sub_831EEE28);
PPC_FUNC_IMPL(__imp__sub_831EEE28) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831eee74
	if (cr6.lt) goto loc_831EEE74;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x831eee74
	if (!cr6.lt) goto loc_831EEE74;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831eee6c
	if (cr6.eq) goto loc_831EEE6C;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r9,5160
	ctx.r11.s64 = ctx.r9.s64 + 5160;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x831EEE6C;
	sub_831CE980(ctx, base);
loc_831EEE6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eee8c
	goto loc_831EEE8C;
loc_831EEE74:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15208
	ctx.r4.s64 = ctx.r11.s64 + 15208;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EEE88;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EEE8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEE9C"))) PPC_WEAK_FUNC(sub_831EEE9C);
PPC_FUNC_IMPL(__imp__sub_831EEE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEEA0"))) PPC_WEAK_FUNC(sub_831EEEA0);
PPC_FUNC_IMPL(__imp__sub_831EEEA0) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// blt cr6,0x831eeef0
	if (cr6.lt) goto loc_831EEEF0;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x831eeef0
	if (!cr6.lt) goto loc_831EEEF0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,5160
	ctx.r11.s64 = ctx.r11.s64 + 5160;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x831EEEE8;
	sub_831CE980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eef08
	goto loc_831EEF08;
loc_831EEEF0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15220
	ctx.r4.s64 = ctx.r11.s64 + 15220;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EEF04;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EEF08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEF18"))) PPC_WEAK_FUNC(sub_831EEF18);
PPC_FUNC_IMPL(__imp__sub_831EEF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5296);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEF24"))) PPC_WEAK_FUNC(sub_831EEF24);
PPC_FUNC_IMPL(__imp__sub_831EEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEF28"))) PPC_WEAK_FUNC(sub_831EEF28);
PPC_FUNC_IMPL(__imp__sub_831EEF28) {
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
	// bne cr6,0x831eef54
	if (!cr6.eq) goto loc_831EEF54;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15232
	ctx.r4.s64 = ctx.r11.s64 + 15232;
	// bl 0x831ea418
	ctx.lr = 0x831EEF4C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831eef58
	goto loc_831EEF58;
loc_831EEF54:
	// bl 0x831efc80
	ctx.lr = 0x831EEF58;
	sub_831EFC80(ctx, base);
loc_831EEF58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEF68"))) PPC_WEAK_FUNC(sub_831EEF68);
PPC_FUNC_IMPL(__imp__sub_831EEF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,5132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5132);
	// b 0x83a76068
	sub_83A76068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EEF7C"))) PPC_WEAK_FUNC(sub_831EEF7C);
PPC_FUNC_IMPL(__imp__sub_831EEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEF80"))) PPC_WEAK_FUNC(sub_831EEF80);
PPC_FUNC_IMPL(__imp__sub_831EEF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,5132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5132);
	// b 0x83a76090
	sub_83A76090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EEF94"))) PPC_WEAK_FUNC(sub_831EEF94);
PPC_FUNC_IMPL(__imp__sub_831EEF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEF98"))) PPC_WEAK_FUNC(sub_831EEF98);
PPC_FUNC_IMPL(__imp__sub_831EEF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,5132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5132);
	// b 0x83a76130
	sub_83A76130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EEFA8"))) PPC_WEAK_FUNC(sub_831EEFA8);
PPC_FUNC_IMPL(__imp__sub_831EEFA8) {
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
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// bge cr6,0x831eefc4
	if (!cr6.lt) goto loc_831EEFC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831eefdc
	goto loc_831EEFDC;
loc_831EEFC4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,15244
	ctx.r4.s64 = ctx.r11.s64 + 15244;
	// bl 0x831cef50
	ctx.lr = 0x831EEFD4;
	sub_831CEF50(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_831EEFDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EEFEC"))) PPC_WEAK_FUNC(sub_831EEFEC);
PPC_FUNC_IMPL(__imp__sub_831EEFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EEFF0"))) PPC_WEAK_FUNC(sub_831EEFF0);
PPC_FUNC_IMPL(__imp__sub_831EEFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r11,5324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EF004"))) PPC_WEAK_FUNC(sub_831EF004);
PPC_FUNC_IMPL(__imp__sub_831EF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF008"))) PPC_WEAK_FUNC(sub_831EF008);
PPC_FUNC_IMPL(__imp__sub_831EF008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r11,5324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831ef028
	if (!cr6.eq) goto loc_831EF028;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,15256
	ctx.r4.s64 = ctx.r11.s64 + 15256;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_831EF028:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EF034"))) PPC_WEAK_FUNC(sub_831EF034);
PPC_FUNC_IMPL(__imp__sub_831EF034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF038"))) PPC_WEAK_FUNC(sub_831EF038);
PPC_FUNC_IMPL(__imp__sub_831EF038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,5136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EF044"))) PPC_WEAK_FUNC(sub_831EF044);
PPC_FUNC_IMPL(__imp__sub_831EF044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF048"))) PPC_WEAK_FUNC(sub_831EF048);
PPC_FUNC_IMPL(__imp__sub_831EF048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831EF050;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831ef080
	if (!cr6.eq) goto loc_831EF080;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15308
	ctx.r4.s64 = ctx.r11.s64 + 15308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EF078;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831ef218
	goto loc_831EF218;
loc_831EF080:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ef0cc
	if (!cr6.eq) goto loc_831EF0CC;
	// lis r9,626
	ctx.r9.s64 = 41025536;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// ori r9,r9,1792
	ctx.r9.u64 = ctx.r9.u64 | 1792;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
loc_831EF0CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831eeb90
	ctx.lr = 0x831EF0D4;
	sub_831EEB90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef218
	if (!cr0.eq) goto loc_831EF218;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r30,28
	cr6.compare<int32_t>(ctx.r30.s32, 28, xer);
	// bgt cr6,0x831ef0ec
	if (cr6.gt) goto loc_831EF0EC;
	// li r30,28
	ctx.r30.s64 = 28;
loc_831EF0EC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f63f8
	ctx.lr = 0x831EF0F4;
	sub_831F63F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x831eab30
	ctx.lr = 0x831EF128;
	sub_831EAB30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x831EF13C;
	sub_831CDCF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// rldicr r4,r30,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x831efa60
	ctx.lr = 0x831EF160;
	sub_831EFA60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef218
	if (!cr0.eq) goto loc_831EF218;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f63f8
	ctx.lr = 0x831EF170;
	sub_831F63F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f6390
	ctx.lr = 0x831EF17C;
	sub_831F6390(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831f32b0
	ctx.lr = 0x831EF188;
	sub_831F32B0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f66e8
	ctx.lr = 0x831EF198;
	sub_831F66E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef218
	if (!cr0.eq) goto loc_831EF218;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831f9f60
	ctx.lr = 0x831EF1B8;
	sub_831F9F60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef218
	if (!cr0.eq) goto loc_831EF218;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831eec70
	ctx.lr = 0x831EF1CC;
	sub_831EEC70(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x831f6eb8
	ctx.lr = 0x831EF1E0;
	sub_831F6EB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef218
	if (!cr0.eq) goto loc_831EF218;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_831EF218:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EF220"))) PPC_WEAK_FUNC(sub_831EF220);
PPC_FUNC_IMPL(__imp__sub_831EF220) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,5316
	ctx.r31.s64 = ctx.r11.s64 + 5316;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x831f62b8
	ctx.lr = 0x831EF24C;
	sub_831F62B8(ctx, base);
	// bl 0x83a761f8
	ctx.lr = 0x831EF250;
	sub_83A761F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef2a8
	if (!cr0.eq) goto loc_831EF2A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a761b8
	ctx.lr = 0x831EF264;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831ef27c
	if (cr6.eq) goto loc_831EF27C;
	// bl 0x831f8130
	ctx.lr = 0x831EF270;
	sub_831F8130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a761b8
	ctx.lr = 0x831EF27C;
	sub_83A761B8(ctx, base);
loc_831EF27C:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// clrlwi. r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831ef298
	if (!cr0.eq) goto loc_831EF298;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eed50
	ctx.lr = 0x831EF294;
	sub_831EED50(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
loc_831EF298:
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x831ef2b8
	if (!cr6.eq) goto loc_831EF2B8;
	// b 0x831ef2b4
	goto loc_831EF2B4;
loc_831EF2A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831eed50
	ctx.lr = 0x831EF2B4;
	sub_831EED50(ctx, base);
loc_831EF2B4:
	// bl 0x831eedd0
	ctx.lr = 0x831EF2B8;
	sub_831EEDD0(ctx, base);
loc_831EF2B8:
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

__attribute__((alias("__imp__sub_831EF2CC"))) PPC_WEAK_FUNC(sub_831EF2CC);
PPC_FUNC_IMPL(__imp__sub_831EF2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF2D0"))) PPC_WEAK_FUNC(sub_831EF2D0);
PPC_FUNC_IMPL(__imp__sub_831EF2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EF2D8;
	__savegprlr_28(ctx, base);
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
	// cmpwi cr6,r4,28
	cr6.compare<int32_t>(ctx.r4.s32, 28, xer);
	// blt cr6,0x831ef30c
	if (cr6.lt) goto loc_831EF30C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,15244
	ctx.r4.s64 = ctx.r11.s64 + 15244;
	// bl 0x831cef50
	ctx.lr = 0x831EF304;
	sub_831CEF50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ef320
	if (cr0.eq) goto loc_831EF320;
loc_831EF30C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15404
	ctx.r4.s64 = ctx.r11.s64 + 15404;
loc_831EF314:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831EF31C;
	sub_831EA3F0(ctx, base);
	// b 0x831ef490
	goto loc_831EF490;
loc_831EF320:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831ef47c
	if (cr6.eq) goto loc_831EF47C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831ef47c
	if (cr6.eq) goto loc_831EF47C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addic. r8,r31,-10
	xer.ca = ctx.r31.u32 > 9;
	ctx.r8.s64 = ctx.r31.s64 + -10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r7,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r7.u64);
	// addi r6,r30,10
	ctx.r6.s64 = ctx.r30.s64 + 10;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// ble 0x831ef3c0
	if (!cr0.gt) goto loc_831EF3C0;
loc_831EF350:
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x831ef370
	if (cr6.lt) goto loc_831EF370;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x831ef370
	if (cr6.gt) goto loc_831EF370;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x831ef39c
	goto loc_831EF39C;
loc_831EF370:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831ef388
	if (cr6.lt) goto loc_831EF388;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// bgt cr6,0x831ef388
	if (cr6.gt) goto loc_831EF388;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x831ef39c
	goto loc_831EF39C;
loc_831EF388:
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x831ef3b8
	if (cr6.lt) goto loc_831EF3B8;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bgt cr6,0x831ef3b8
	if (cr6.gt) goto loc_831EF3B8;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
loc_831EF39C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x831ef350
	if (cr6.lt) goto loc_831EF350;
loc_831EF3B8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831ef3cc
	if (!cr6.eq) goto loc_831EF3CC;
loc_831EF3C0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// b 0x831ef314
	goto loc_831EF314;
loc_831EF3CC:
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r8,r10,-11
	xer.ca = ctx.r10.u32 > 10;
	ctx.r8.s64 = ctx.r10.s64 + -11;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// ble 0x831ef44c
	if (!cr0.gt) goto loc_831EF44C;
loc_831EF3E4:
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x831ef404
	if (cr6.lt) goto loc_831EF404;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x831ef404
	if (cr6.gt) goto loc_831EF404;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x831ef430
	goto loc_831EF430;
loc_831EF404:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831ef41c
	if (cr6.lt) goto loc_831EF41C;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// bgt cr6,0x831ef41c
	if (cr6.gt) goto loc_831EF41C;
	// addi r10,r10,-87
	ctx.r10.s64 = ctx.r10.s64 + -87;
	// b 0x831ef430
	goto loc_831EF430;
loc_831EF41C:
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x831ef44c
	if (cr6.lt) goto loc_831EF44C;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bgt cr6,0x831ef44c
	if (cr6.gt) goto loc_831EF44C;
	// addi r10,r10,-55
	ctx.r10.s64 = ctx.r10.s64 + -55;
loc_831EF430:
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
	// blt cr6,0x831ef3e4
	if (cr6.lt) goto loc_831EF3E4;
loc_831EF44C:
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// blt cr6,0x831ef470
	if (cr6.lt) goto loc_831EF470;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831ef470
	if (!cr6.gt) goto loc_831EF470;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// b 0x831ef494
	goto loc_831EF494;
loc_831EF470:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15332
	ctx.r4.s64 = ctx.r11.s64 + 15332;
	// b 0x831ef314
	goto loc_831EF314;
loc_831EF47C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15320
	ctx.r4.s64 = ctx.r11.s64 + 15320;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EF490;
	sub_831EA418(ctx, base);
loc_831EF490:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EF494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EF49C"))) PPC_WEAK_FUNC(sub_831EF49C);
PPC_FUNC_IMPL(__imp__sub_831EF49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF4A0"))) PPC_WEAK_FUNC(sub_831EF4A0);
PPC_FUNC_IMPL(__imp__sub_831EF4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831EF4A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ef4e0
	if (cr6.eq) goto loc_831EF4E0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831ef4e0
	if (cr6.eq) goto loc_831EF4E0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x831ef4e8
	goto loc_831EF4E8;
loc_831EF4E0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_831EF4E8:
	// bl 0x831f7fe8
	ctx.lr = 0x831EF4EC;
	sub_831F7FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ef4fc
	if (cr0.eq) goto loc_831EF4FC;
loc_831EF4F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ef7d4
	goto loc_831EF7D4;
loc_831EF4FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f8e60
	ctx.lr = 0x831EF504;
	sub_831F8E60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef4f4
	if (!cr0.eq) goto loc_831EF4F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ef048
	ctx.lr = 0x831EF518;
	sub_831EF048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// bge cr6,0x831ef538
	if (!cr6.lt) goto loc_831EF538;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// b 0x831ef7c8
	goto loc_831EF7C8;
loc_831EF538:
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r28,28
	cr6.compare<int32_t>(ctx.r28.s32, 28, xer);
	// bgt cr6,0x831ef548
	if (cr6.gt) goto loc_831EF548;
	// li r28,28
	ctx.r28.s64 = 28;
loc_831EF548:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f63f8
	ctx.lr = 0x831EF550;
	sub_831F63F8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r26,7
	ctx.r7.s64 = ctx.r26.s64 + 7;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r29,r7,0,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// bl 0x831f32b0
	ctx.lr = 0x831EF588;
	sub_831F32B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831f3648
	ctx.lr = 0x831EF59C;
	sub_831F3648(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EF5B0;
	sub_831CDCF0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ld r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x831efa60
	ctx.lr = 0x831EF5D4;
	sub_831EFA60(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x831f09e0
	ctx.lr = 0x831EF5EC;
	sub_831F09E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x831f63f8
	ctx.lr = 0x831EF604;
	sub_831F63F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831f6390
	ctx.lr = 0x831EF614;
	sub_831F6390(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831f6440
	ctx.lr = 0x831EF62C;
	sub_831F6440(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831eab30
	ctx.lr = 0x831EF64C;
	sub_831EAB30(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831eb8e8
	ctx.lr = 0x831EF66C;
	sub_831EB8E8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831eac90
	ctx.lr = 0x831EF674;
	sub_831EAC90(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,5272
	ctx.r11.s64 = ctx.r11.s64 + 5272;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ef694
	if (cr6.eq) goto loc_831EF694;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x831eb5b0
	ctx.lr = 0x831EF694;
	sub_831EB5B0(ctx, base);
loc_831EF694:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x831f66e8
	ctx.lr = 0x831EF6A4;
	sub_831F66E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x831f6820
	ctx.lr = 0x831EF6B4;
	sub_831F6820(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f9f60
	ctx.lr = 0x831EF6E0;
	sub_831F9F60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fa120
	ctx.lr = 0x831EF6F4;
	sub_831FA120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x831eec70
	ctx.lr = 0x831EF710;
	sub_831EEC70(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r4,r9,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x831f6eb8
	ctx.lr = 0x831EF738;
	sub_831F6EB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rldicr r4,r29,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x831f7670
	ctx.lr = 0x831EF754;
	sub_831F7670(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831ef7d4
	if (!cr0.eq) goto loc_831EF7D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x831ef790
	if (cr6.eq) goto loc_831EF790;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x831ef784
	if (cr6.eq) goto loc_831EF784;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x831ef794
	goto loc_831EF794;
loc_831EF784:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// b 0x831ef798
	goto loc_831EF798;
loc_831EF790:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
loc_831EF794:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
loc_831EF798:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a76928
	ctx.lr = 0x831EF7A0;
	sub_83A76928(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r11,-3552
	ctx.r3.s64 = ctx.r11.s64 + -3552;
	// bl 0x83a76620
	ctx.lr = 0x831EF7B0;
	sub_83A76620(ctx, base);
	// subf r11,r26,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r26.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// ble cr6,0x831ef7d4
	if (!cr6.gt) goto loc_831EF7D4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15444
	ctx.r4.s64 = ctx.r11.s64 + 15444;
loc_831EF7C8:
	// li r5,-3
	ctx.r5.s64 = -3;
	// bl 0x831ea418
	ctx.lr = 0x831EF7D0;
	sub_831EA418(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
loc_831EF7D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EF7DC"))) PPC_WEAK_FUNC(sub_831EF7DC);
PPC_FUNC_IMPL(__imp__sub_831EF7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF7E0"))) PPC_WEAK_FUNC(sub_831EF7E0);
PPC_FUNC_IMPL(__imp__sub_831EF7E0) {
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
	// addi r31,r11,5300
	ctx.r31.s64 = ctx.r11.s64 + 5300;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831ef820
	if (!cr6.eq) goto loc_831EF820;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15544
	ctx.r4.s64 = ctx.r11.s64 + 15544;
loc_831EF810:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831EF818;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831ef8d4
	goto loc_831EF8D4;
loc_831EF820:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831ef838
	if (cr6.eq) goto loc_831EF838;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15472
	ctx.r4.s64 = ctx.r11.s64 + 15472;
	// b 0x831ef810
	goto loc_831EF810;
loc_831EF838:
	// bl 0x831f7378
	ctx.lr = 0x831EF83C;
	sub_831F7378(ctx, base);
	// bl 0x831f67f8
	ctx.lr = 0x831EF840;
	sub_831F67F8(ctx, base);
	// bl 0x831f6670
	ctx.lr = 0x831EF844;
	sub_831F6670(ctx, base);
	// bl 0x831f1460
	ctx.lr = 0x831EF848;
	sub_831F1460(ctx, base);
	// bl 0x831ee6c8
	ctx.lr = 0x831EF84C;
	sub_831EE6C8(ctx, base);
	// bl 0x831f1488
	ctx.lr = 0x831EF850;
	sub_831F1488(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a76620
	ctx.lr = 0x831EF85C;
	sub_83A76620(ctx, base);
	// bl 0x83a76550
	ctx.lr = 0x831EF860;
	sub_83A76550(ctx, base);
	// bl 0x831f7448
	ctx.lr = 0x831EF864;
	sub_831F7448(ctx, base);
	// bl 0x831fa0b0
	ctx.lr = 0x831EF868;
	sub_831FA0B0(ctx, base);
	// bl 0x831f6778
	ctx.lr = 0x831EF86C;
	sub_831F6778(ctx, base);
	// bl 0x831edcf0
	ctx.lr = 0x831EF870;
	sub_831EDCF0(ctx, base);
	// bl 0x831f65d0
	ctx.lr = 0x831EF874;
	sub_831F65D0(ctx, base);
	// bl 0x831f01e0
	ctx.lr = 0x831EF878;
	sub_831F01E0(ctx, base);
	// bl 0x831f3300
	ctx.lr = 0x831EF87C;
	sub_831F3300(ctx, base);
	// bl 0x831f9008
	ctx.lr = 0x831EF880;
	sub_831F9008(ctx, base);
	// bl 0x831f7c08
	ctx.lr = 0x831EF884;
	sub_831F7C08(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x831EF888;
	sub_83102DB0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831ef8a8
	if (cr6.eq) goto loc_831EF8A8;
	// lwz r3,5132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5132);
	// bl 0x83a76130
	ctx.lr = 0x831EF8A0;
	sub_83A76130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831EF8A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,5132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5132);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a76068
	ctx.lr = 0x831EF8B8;
	sub_83A76068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,5132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5132);
	// bl 0x83a76090
	ctx.lr = 0x831EF8C8;
	sub_83A76090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_831EF8D4:
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

__attribute__((alias("__imp__sub_831EF8EC"))) PPC_WEAK_FUNC(sub_831EF8EC);
PPC_FUNC_IMPL(__imp__sub_831EF8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EF8F0"))) PPC_WEAK_FUNC(sub_831EF8F0);
PPC_FUNC_IMPL(__imp__sub_831EF8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831EF8F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r29,r11,5300
	ctx.r29.s64 = ctx.r11.s64 + 5300;
	// addi r11,r10,14880
	ctx.r11.s64 = ctx.r10.s64 + 14880;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r11.u32);
	// bne cr6,0x831ef968
	if (!cr6.eq) goto loc_831EF968;
	// lis r9,626
	ctx.r9.s64 = 41025536;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r9,r9,1792
	ctx.r9.u64 = ctx.r9.u64 | 1792;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_831EF968:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831eeb90
	ctx.lr = 0x831EF970;
	sub_831EEB90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831efa58
	if (!cr0.eq) goto loc_831EFA58;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831ef998
	if (cr6.eq) goto loc_831EF998;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15696
	ctx.r4.s64 = ctx.r11.s64 + 15696;
	// bl 0x831ea3f0
	ctx.lr = 0x831EF990;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831efa58
	goto loc_831EFA58;
loc_831EF998:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ef048
	ctx.lr = 0x831EF9AC;
	sub_831EF048(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x831ef9c8
	if (!cr6.lt) goto loc_831EF9C8;
loc_831EF9BC:
	// bl 0x831ef7e0
	ctx.lr = 0x831EF9C0;
	sub_831EF7E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x831efa58
	goto loc_831EFA58;
loc_831EF9C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831efa38
	if (!cr6.eq) goto loc_831EFA38;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x831efa38
	if (!cr6.eq) goto loc_831EFA38;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,5132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5132);
	// bl 0x83a760b8
	ctx.lr = 0x831EF9E8;
	sub_83A760B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831efa08
	if (!cr0.eq) goto loc_831EFA08;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,15684
	ctx.r4.s64 = ctx.r11.s64 + 15684;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EFA04;
	sub_831EA418(ctx, base);
	// b 0x831ef9bc
	goto loc_831EF9BC;
loc_831EFA08:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_831EFA10:
	// bl 0x83102db0
	ctx.lr = 0x831EFA14;
	sub_83102DB0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ef4a0
	ctx.lr = 0x831EFA24;
	sub_831EF4A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831efa54
	if (cr0.eq) goto loc_831EFA54;
	// bl 0x831ef7e0
	ctx.lr = 0x831EFA30;
	sub_831EF7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831efa58
	goto loc_831EFA58;
loc_831EFA38:
	// cmpw cr6,r27,r30
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, xer);
	// bge cr6,0x831efa10
	if (!cr6.lt) goto loc_831EFA10;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,15644
	ctx.r4.s64 = ctx.r11.s64 + 15644;
	// bl 0x831ea3f0
	ctx.lr = 0x831EFA50;
	sub_831EA3F0(ctx, base);
	// b 0x831ef9bc
	goto loc_831EF9BC;
loc_831EFA54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EFA58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EFA60"))) PPC_WEAK_FUNC(sub_831EFA60);
PPC_FUNC_IMPL(__imp__sub_831EFA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EFA68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x831efa8c
	if (!cr6.eq) goto loc_831EFA8C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15840
	ctx.r4.s64 = ctx.r11.s64 + 15840;
	// b 0x831efb1c
	goto loc_831EFB1C;
loc_831EFA8C:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// blt cr6,0x831efb14
	if (cr6.lt) goto loc_831EFB14;
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x831efb14
	if (cr6.lt) goto loc_831EFB14;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831efb14
	if (cr6.lt) goto loc_831EFB14;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,43
	ctx.r11.s64 = ctx.r11.s64 + 43;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x831efadc
	if (!cr6.eq) goto loc_831EFADC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x831efae8
	goto loc_831EFAE8;
loc_831EFADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76b90
	ctx.lr = 0x831EFAE4;
	sub_83A76B90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_831EFAE8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x831efaf8
	if (!cr6.eq) goto loc_831EFAF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831efb04
	goto loc_831EFB04;
loc_831EFAF8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76b90
	ctx.lr = 0x831EFB04;
	sub_83A76B90(ctx, base);
loc_831EFB04:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x831efb2c
	goto loc_831EFB2C;
loc_831EFB14:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,15828
	ctx.r4.s64 = ctx.r11.s64 + 15828;
loc_831EFB1C:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EFB28;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EFB2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EFB34"))) PPC_WEAK_FUNC(sub_831EFB34);
PPC_FUNC_IMPL(__imp__sub_831EFB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EFB38"))) PPC_WEAK_FUNC(sub_831EFB38);
PPC_FUNC_IMPL(__imp__sub_831EFB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831EFB40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x831efb78
	if (!cr6.lt) goto loc_831EFB78;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15864
	ctx.r4.s64 = ctx.r11.s64 + 15864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EFB70;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831efc78
	goto loc_831EFC78;
loc_831EFB78:
	// lwz r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rldicr r4,r25,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x831efa60
	ctx.lr = 0x831EFB88;
	sub_831EFA60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831efc60
	if (!cr0.eq) goto loc_831EFC60;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831efc60
	if (cr6.lt) goto loc_831EFC60;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x831efc78
	if (cr6.eq) goto loc_831EFC78;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831EFBB4;
	sub_831CDCF0(ctx, base);
	// addi r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 7;
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r27,r10,5348
	ctx.r27.s64 = ctx.r10.s64 + 5348;
	// addi r11,r11,43
	ctx.r11.s64 = ctx.r11.s64 + 43;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x831efc1c
	if (!cr6.gt) goto loc_831EFC1C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a76b90
	ctx.lr = 0x831EFBE8;
	sub_83A76B90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a76d20
	ctx.lr = 0x831EFC00;
	sub_83A76D20(ctx, base);
	// stw r3,-8(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831efc14
	if (!cr0.eq) goto loc_831EFC14;
loc_831EFC0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831efc78
	goto loc_831EFC78;
loc_831EFC14:
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// subf r31,r26,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r26.s64;
loc_831EFC1C:
	// lwz r28,180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831efc54
	if (!cr6.gt) goto loc_831EFC54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a76b90
	ctx.lr = 0x831EFC34;
	sub_83A76B90(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a76d20
	ctx.lr = 0x831EFC48;
	sub_83A76D20(ctx, base);
	// stw r3,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831efc0c
	if (cr0.eq) goto loc_831EFC0C;
loc_831EFC54:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// b 0x831efc78
	goto loc_831EFC78;
loc_831EFC60:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,15852
	ctx.r4.s64 = ctx.r11.s64 + 15852;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EFC74;
	sub_831EA418(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
loc_831EFC78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EFC80"))) PPC_WEAK_FUNC(sub_831EFC80);
PPC_FUNC_IMPL(__imp__sub_831EFC80) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,5328
	ctx.r11.s64 = ctx.r11.s64 + 5328;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831efcc0
	if (!cr6.eq) goto loc_831EFCC0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,15876
	ctx.r4.s64 = ctx.r11.s64 + 15876;
	// bl 0x831ea418
	ctx.lr = 0x831EFCB8;
	sub_831EA418(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x831efcc8
	goto loc_831EFCC8;
loc_831EFCC0:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_831EFCC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EFCD8"))) PPC_WEAK_FUNC(sub_831EFCD8);
PPC_FUNC_IMPL(__imp__sub_831EFCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EFCE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r7,r9,5352
	ctx.r7.s64 = ctx.r9.s64 + 5352;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,5352(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5352);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831efdac
	if (cr6.eq) goto loc_831EFDAC;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x831efd74
	if (cr6.eq) goto loc_831EFD74;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x831efd6c
	if (cr6.eq) goto loc_831EFD6C;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x831efd5c
	if (cr6.eq) goto loc_831EFD5C;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// beq cr6,0x831efd54
	if (cr6.eq) goto loc_831EFD54;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// beq cr6,0x831efd4c
	if (cr6.eq) goto loc_831EFD4C;
	// addi r9,r5,-6
	ctx.r9.s64 = ctx.r5.s64 + -6;
	// li r5,9
	ctx.r5.s64 = 9;
	// addic r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 & ctx.r5.u64;
	// b 0x831efd78
	goto loc_831EFD78;
loc_831EFD4C:
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x831efd78
	goto loc_831EFD78;
loc_831EFD54:
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x831efd60
	goto loc_831EFD60;
loc_831EFD5C:
	// li r5,6
	ctx.r5.s64 = 6;
loc_831EFD60:
	// ld r9,288(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// b 0x831efd78
	goto loc_831EFD78;
loc_831EFD6C:
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x831efd78
	goto loc_831EFD78;
loc_831EFD74:
	// li r5,4
	ctx.r5.s64 = 4;
loc_831EFD78:
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r29,192(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r28,252(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,260(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r6,264(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// lwz r4,200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bctrl 
	ctx.lr = 0x831EFDAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831EFDAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EFDB4"))) PPC_WEAK_FUNC(sub_831EFDB4);
PPC_FUNC_IMPL(__imp__sub_831EFDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EFDB8"))) PPC_WEAK_FUNC(sub_831EFDB8);
PPC_FUNC_IMPL(__imp__sub_831EFDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831EFDC0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831efdf0
	if (!cr6.eq) goto loc_831EFDF0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15900
	ctx.r4.s64 = ctx.r11.s64 + 15900;
	// bl 0x831ea418
	ctx.lr = 0x831EFDE8;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831efe3c
	goto loc_831EFE3C;
loc_831EFDF0:
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831EFE00;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831efe24
	if (!cr6.eq) goto loc_831EFE24;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EFE1C;
	sub_831EA418(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x831efe3c
	goto loc_831EFE3C;
loc_831EFE24:
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831EFE38;
	sub_83A761B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831EFE3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EFE44"))) PPC_WEAK_FUNC(sub_831EFE44);
PPC_FUNC_IMPL(__imp__sub_831EFE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EFE48"))) PPC_WEAK_FUNC(sub_831EFE48);
PPC_FUNC_IMPL(__imp__sub_831EFE48) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x831efe74
	if (!cr6.eq) goto loc_831EFE74;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15912
	ctx.r4.s64 = ctx.r11.s64 + 15912;
	// bl 0x831ea418
	ctx.lr = 0x831EFE70;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831EFE74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831EFE84"))) PPC_WEAK_FUNC(sub_831EFE84);
PPC_FUNC_IMPL(__imp__sub_831EFE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EFE88"))) PPC_WEAK_FUNC(sub_831EFE88);
PPC_FUNC_IMPL(__imp__sub_831EFE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831EFE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x831f81d0
	ctx.lr = 0x831EFEAC;
	sub_831F81D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(ctx.r11.s32, -2, xer);
	// beq cr6,0x831efec8
	if (cr6.eq) goto loc_831EFEC8;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831efecc
	if (cr6.eq) goto loc_831EFECC;
loc_831EFEC8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_831EFECC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831eff28
	if (cr6.eq) goto loc_831EFF28;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831eff80
	if (!cr6.eq) goto loc_831EFF80;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r11,5336
	ctx.r30.s64 = ctx.r11.s64 + 5336;
	// lwz r11,5336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5336);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831efefc
	if (!cr6.eq) goto loc_831EFEFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831eff80
	if (cr6.eq) goto loc_831EFF80;
loc_831EFEFC:
	// ld r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// ld r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f83c8
	ctx.lr = 0x831EFF18;
	sub_831F83C8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// b 0x831eff70
	goto loc_831EFF70;
loc_831EFF28:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,5332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831eff40
	if (!cr6.eq) goto loc_831EFF40;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831eff80
	if (cr6.eq) goto loc_831EFF80;
loc_831EFF40:
	// ld r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// ld r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f83c8
	ctx.lr = 0x831EFF5C;
	sub_831F83C8(ctx, base);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r10,r11,5336
	ctx.r10.s64 = ctx.r11.s64 + 5336;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_831EFF70:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,5140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5140);
	// bl 0x83a75e98
	ctx.lr = 0x831EFF80;
	sub_83A75E98(ctx, base);
loc_831EFF80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831EFF8C"))) PPC_WEAK_FUNC(sub_831EFF8C);
PPC_FUNC_IMPL(__imp__sub_831EFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EFF90"))) PPC_WEAK_FUNC(sub_831EFF90);
PPC_FUNC_IMPL(__imp__sub_831EFF90) {
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
	// bl 0x831eed28
	ctx.lr = 0x831EFFA0;
	sub_831EED28(ctx, base);
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

__attribute__((alias("__imp__sub_831EFFB4"))) PPC_WEAK_FUNC(sub_831EFFB4);
PPC_FUNC_IMPL(__imp__sub_831EFFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831EFFB8"))) PPC_WEAK_FUNC(sub_831EFFB8);
PPC_FUNC_IMPL(__imp__sub_831EFFB8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831effd0
	if (!cr6.eq) goto loc_831EFFD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_831EFFD0:
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831efffc
	if (!cr6.eq) goto loc_831EFFFC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15924
	ctx.r4.s64 = ctx.r11.s64 + 15924;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831EFFF4;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f0028
	goto loc_831F0028;
loc_831EFFFC:
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f0010
	if (cr6.eq) goto loc_831F0010;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f0020
	if (!cr6.eq) goto loc_831F0020;
loc_831F0010:
	// lbz r10,217(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 217);
	// addic r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_831F0020:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F0028:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F0038"))) PPC_WEAK_FUNC(sub_831F0038);
PPC_FUNC_IMPL(__imp__sub_831F0038) {
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
	// bne cr6,0x831f0058
	if (!cr6.eq) goto loc_831F0058;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_831F0058:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x831f0084
	if (!cr6.eq) goto loc_831F0084;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F007C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f00a8
	goto loc_831F00A8;
loc_831F0084:
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f0098
	if (!cr6.eq) goto loc_831F0098;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831f00a4
	goto loc_831F00A4;
loc_831F0098:
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x831f81f8
	ctx.lr = 0x831F00A0;
	sub_831F81F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_831F00A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F00A8:
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

__attribute__((alias("__imp__sub_831F00BC"))) PPC_WEAK_FUNC(sub_831F00BC);
PPC_FUNC_IMPL(__imp__sub_831F00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F00C0"))) PPC_WEAK_FUNC(sub_831F00C0);
PPC_FUNC_IMPL(__imp__sub_831F00C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,215(r11)
	PPC_STORE_U8(ctx.r11.u32 + 215, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F00D0"))) PPC_WEAK_FUNC(sub_831F00D0);
PPC_FUNC_IMPL(__imp__sub_831F00D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,214(r11)
	PPC_STORE_U8(ctx.r11.u32 + 214, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F00E0"))) PPC_WEAK_FUNC(sub_831F00E0);
PPC_FUNC_IMPL(__imp__sub_831F00E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f0114
	if (!cr6.eq) goto loc_831F0114;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15948
	ctx.r4.s64 = ctx.r11.s64 + 15948;
	// bl 0x831ea418
	ctx.lr = 0x831F010C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f012c
	goto loc_831F012C;
loc_831F0114:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f0128
	if (cr6.eq) goto loc_831F0128;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x831f8200
	ctx.lr = 0x831F0124;
	sub_831F8200(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_831F0128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F012C:
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

__attribute__((alias("__imp__sub_831F0140"))) PPC_WEAK_FUNC(sub_831F0140);
PPC_FUNC_IMPL(__imp__sub_831F0140) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f0170
	if (!cr6.eq) goto loc_831F0170;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15960
	ctx.r4.s64 = ctx.r11.s64 + 15960;
	// bl 0x831ea418
	ctx.lr = 0x831F0168;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f0180
	goto loc_831F0180;
loc_831F0170:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x831f81d0
	ctx.lr = 0x831F017C;
	sub_831F81D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F0180:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F0190"))) PPC_WEAK_FUNC(sub_831F0190);
PPC_FUNC_IMPL(__imp__sub_831F0190) {
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
	// bne cr6,0x831f01bc
	if (!cr6.eq) goto loc_831F01BC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,15972
	ctx.r4.s64 = ctx.r11.s64 + 15972;
	// bl 0x831ea418
	ctx.lr = 0x831F01B4;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f01d0
	goto loc_831F01D0;
loc_831F01BC:
	// stw r4,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r4.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x831f8208
	ctx.lr = 0x831F01CC;
	sub_831F8208(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F01D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F01E0"))) PPC_WEAK_FUNC(sub_831F01E0);
PPC_FUNC_IMPL(__imp__sub_831F01E0) {
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
	// addi r31,r11,5328
	ctx.r31.s64 = ctx.r11.s64 + 5328;
	// lwz r11,5328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f021c
	if (!cr6.eq) goto loc_831F021C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,15984
	ctx.r4.s64 = ctx.r11.s64 + 15984;
	// bl 0x831ea3f0
	ctx.lr = 0x831F0214;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f0264
	goto loc_831F0264;
loc_831F021C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f023c
	if (cr6.eq) goto loc_831F023C;
	// bl 0x83a76bc0
	ctx.lr = 0x831F0234;
	sub_83A76BC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_831F023C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f0254
	if (cr6.eq) goto loc_831F0254;
	// bl 0x83a76bc0
	ctx.lr = 0x831F024C;
	sub_83A76BC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_831F0254:
	// bl 0x83102db0
	ctx.lr = 0x831F0258;
	sub_83102DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F0264:
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

__attribute__((alias("__imp__sub_831F0278"))) PPC_WEAK_FUNC(sub_831F0278);
PPC_FUNC_IMPL(__imp__sub_831F0278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F0280;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f0340
	if (cr6.eq) goto loc_831F0340;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f0340
	if (cr6.eq) goto loc_831F0340;
	// addi r29,r3,204
	ctx.r29.s64 = ctx.r3.s64 + 204;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F02AC;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f02d0
	if (!cr6.eq) goto loc_831F02D0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,16056
	ctx.r4.s64 = ctx.r11.s64 + 16056;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F02C8;
	sub_831EA418(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x831f0358
	goto loc_831F0358;
loc_831F02D0:
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// ble cr6,0x831f02e8
	if (!cr6.gt) goto loc_831F02E8;
loc_831F02DC:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x831f032c
	goto loc_831F032C;
loc_831F02E8:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f0324
	if (cr6.eq) goto loc_831F0324;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f0324
	if (cr6.eq) goto loc_831F0324;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x831f34a8
	ctx.lr = 0x831F0308;
	sub_831F34A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f031c
	if (!cr0.eq) goto loc_831F031C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x831f02dc
	if (!cr6.lt) goto loc_831F02DC;
loc_831F031C:
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x831f032c
	goto loc_831F032C;
loc_831F0324:
	// li r31,-1
	ctx.r31.s64 = -1;
	// std r31,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r31.u64);
loc_831F032C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0338;
	sub_83A761B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f0358
	goto loc_831F0358;
loc_831F0340:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,16044
	ctx.r4.s64 = ctx.r11.s64 + 16044;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F0354;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F0358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F0360"))) PPC_WEAK_FUNC(sub_831F0360);
PPC_FUNC_IMPL(__imp__sub_831F0360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x831F0368;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r22,r3,188
	ctx.r22.s64 = ctx.r3.s64 + 188;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f03a4
	if (!cr6.eq) goto loc_831F03A4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16476
	ctx.r4.s64 = ctx.r11.s64 + 16476;
	// bl 0x831ea3f0
	ctx.lr = 0x831F03A0;
	sub_831EA3F0(ctx, base);
	// b 0x831f051c
	goto loc_831F051C;
loc_831F03A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r23,r31,192
	ctx.r23.s64 = ctx.r31.s64 + 192;
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// addi r21,r31,196
	ctx.r21.s64 = ctx.r31.s64 + 196;
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f3148
	ctx.lr = 0x831F03DC;
	sub_831F3148(ctx, base);
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r25.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// std r29,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r29.u64);
	// addi r24,r31,304
	ctx.r24.s64 = ctx.r31.s64 + 304;
	// std r30,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r30.u64);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// std r29,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r29.u64);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// std r29,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r29.u64);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// std r30,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r30.u64);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// bl 0x83a761b8
	ctx.lr = 0x831F0420;
	sub_83A761B8(ctx, base);
	// stb r30,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r30.u8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// beq cr6,0x831f05fc
	if (cr6.eq) goto loc_831F05FC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831f0528
	if (cr6.eq) goto loc_831F0528;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge cr6,0x831f061c
	if (!cr6.lt) goto loc_831F061C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831edab0
	ctx.lr = 0x831F0460;
	sub_831EDAB0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831eb428
	ctx.lr = 0x831F046C;
	sub_831EB428(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831f0484
	if (!cr6.eq) goto loc_831F0484;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f04a4
	if (cr6.eq) goto loc_831F04A4;
loc_831F0484:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f04b0
	if (!cr6.eq) goto loc_831F04B0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,16408
	ctx.r4.s64 = ctx.r11.s64 + 16408;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831ea400
	ctx.lr = 0x831F04A4;
	sub_831EA400(ctx, base);
loc_831F04A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f05fc
	if (cr6.eq) goto loc_831F05FC;
loc_831F04B0:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f0580
	if (!cr6.eq) goto loc_831F0580;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// std r9,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r9.u64);
	// std r29,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r29.u64);
	// bl 0x831ef038
	ctx.lr = 0x831F04E4;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f0568
	if (!cr6.eq) goto loc_831F0568;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f0568
	if (!cr6.eq) goto loc_831F0568;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r10,16352
	ctx.r4.s64 = ctx.r10.s64 + 16352;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
loc_831F0508:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F0510;
	sub_831EA3F0(ctx, base);
loc_831F0510:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F051C;
	sub_83A761B8(ctx, base);
loc_831F051C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F0520:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_831F0528:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x831f061c
	if (cr6.lt) goto loc_831F061C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ecbd0
	ctx.lr = 0x831F0544;
	sub_831ECBD0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f04b0
	if (!cr6.eq) goto loc_831F04B0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,16280
	ctx.r4.s64 = ctx.r11.s64 + 16280;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F0564;
	sub_831EA400(ctx, base);
	// b 0x831f0510
	goto loc_831F0510;
loc_831F0568:
	// bl 0x831eb8d8
	ctx.lr = 0x831F056C;
	sub_831EB8D8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x831f05ac
	if (!cr6.eq) goto loc_831F05AC;
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// b 0x831f05ac
	goto loc_831F05AC;
loc_831F0580:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// std r9,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r9.u64);
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// stw r7,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r7.u32);
	// std r6,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r6.u64);
loc_831F05AC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r10,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r10.u64);
	// std r9,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r9.u64);
	// beq cr6,0x831f05e0
	if (cr6.eq) goto loc_831F05E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r11.u8);
loc_831F05E0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f05f0
	if (cr6.eq) goto loc_831F05F0;
	// bl 0x831ecd58
	ctx.lr = 0x831F05EC;
	sub_831ECD58(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
loc_831F05F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f0604
	if (!cr6.eq) goto loc_831F0604;
loc_831F05FC:
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_831F0604:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f0628
	if (!cr6.eq) goto loc_831F0628;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,16208
	ctx.r4.s64 = ctx.r11.s64 + 16208;
	// b 0x831f0508
	goto loc_831F0508;
loc_831F061C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,16160
	ctx.r4.s64 = ctx.r11.s64 + 16160;
	// b 0x831f0508
	goto loc_831F0508;
loc_831F0628:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f0684
	if (!cr6.eq) goto loc_831F0684;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,15244
	ctx.r4.s64 = ctx.r11.s64 + 15244;
	// bl 0x831cef50
	ctx.lr = 0x831F0644;
	sub_831CEF50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f0684
	if (!cr0.eq) goto loc_831F0684;
	// bl 0x831fa288
	ctx.lr = 0x831F0650;
	sub_831FA288(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x831f3430
	ctx.lr = 0x831F0664;
	sub_831F3430(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f0684
	if (cr0.eq) goto loc_831F0684;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16108
	ctx.r4.s64 = ctx.r11.s64 + 16108;
	// bl 0x831ea3f0
	ctx.lr = 0x831F067C;
	sub_831EA3F0(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x831f0520
	goto loc_831F0520;
loc_831F0684:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x831f3728
	ctx.lr = 0x831F0694;
	sub_831F3728(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f06a8
	if (cr0.eq) goto loc_831F06A8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,16068
	ctx.r4.s64 = ctx.r11.s64 + 16068;
	// b 0x831f0508
	goto loc_831F0508;
loc_831F06A8:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x831f0510
	if (cr6.lt) goto loc_831F0510;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bge cr6,0x831f0510
	if (!cr6.lt) goto loc_831F0510;
	// bl 0x831f78d8
	ctx.lr = 0x831F06C0;
	sub_831F78D8(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831f90d8
	ctx.lr = 0x831F06CC;
	sub_831F90D8(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f0520
	goto loc_831F0520;
}

__attribute__((alias("__imp__sub_831F06D8"))) PPC_WEAK_FUNC(sub_831F06D8);
PPC_FUNC_IMPL(__imp__sub_831F06D8) {
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
	// b 0x831f0704
	goto loc_831F0704;
loc_831F06F8:
	// bl 0x831eed28
	ctx.lr = 0x831F06FC;
	sub_831EED28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x831F0704;
	sub_83A75E98(ctx, base);
loc_831F0704:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831effb8
	ctx.lr = 0x831F0710;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f06f8
	if (cr6.eq) goto loc_831F06F8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831F073C"))) PPC_WEAK_FUNC(sub_831F073C);
PPC_FUNC_IMPL(__imp__sub_831F073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F0740"))) PPC_WEAK_FUNC(sub_831F0740);
PPC_FUNC_IMPL(__imp__sub_831F0740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F0748;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,188
	ctx.r28.s64 = ctx.r3.s64 + 188;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f0768
	if (cr6.eq) goto loc_831F0768;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x831f08c4
	goto loc_831F08C4;
loc_831F0768:
	// addi r24,r31,208
	ctx.r24.s64 = ctx.r31.s64 + 208;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0778;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f078c
	if (!cr6.eq) goto loc_831F078C;
	// bl 0x83a75e98
	ctx.lr = 0x831F0784;
	sub_83A75E98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f08c4
	goto loc_831F08C4;
loc_831F078C:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x831f8cb0
	ctx.lr = 0x831F07A0;
	sub_831F8CB0(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x825832e8
	ctx.lr = 0x831F07A8;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x831f084c
	if (cr6.gt) goto loc_831F084C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831f0818
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0818;
	// bdzf 4*cr6+eq,0x831f0820
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0820;
	// bdzf 4*cr6+eq,0x831f0818
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0818;
	// bdzf 4*cr6+eq,0x831f0838
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0838;
	// bdzf 4*cr6+eq,0x831f0838
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0838;
	// bdzf 4*cr6+eq,0x831f0838
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0838;
	// bdzf 4*cr6+eq,0x831f0844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831F0844;
	// bne cr6,0x831f085c
	if (!cr6.eq) goto loc_831F085C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_831F07DC:
	// li r29,2
	ctx.r29.s64 = 2;
loc_831F07E0:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f8200
	ctx.lr = 0x831F07E8;
	sub_831F8200(ctx, base);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
loc_831F07EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r28,232(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x83a761b8
	ctx.lr = 0x831F0800;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq cr6,0x831f087c
	if (cr6.eq) goto loc_831F087C;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x831f79b0
	ctx.lr = 0x831F0814;
	sub_831F79B0(ctx, base);
	// b 0x831f08b4
	goto loc_831F08B4;
loc_831F0818:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x831f07ec
	goto loc_831F07EC;
loc_831F0820:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x825832f0
	ctx.lr = 0x831F0828;
	sub_825832F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x831f07ec
	goto loc_831F07EC;
loc_831F0838:
	// li r26,1
	ctx.r26.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x831f07ec
	goto loc_831F07EC;
loc_831F0844:
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x831f07dc
	goto loc_831F07DC;
loc_831F084C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x831ea3f0
	ctx.lr = 0x831F085C;
	sub_831EA3F0(ctx, base);
loc_831F085C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,3
	ctx.r27.s64 = 3;
	// bl 0x831efe88
	ctx.lr = 0x831F086C;
	sub_831EFE88(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x831f07e0
	if (cr0.eq) goto loc_831F07E0;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x831f07ec
	goto loc_831F07EC;
loc_831F087C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831f0894
	if (cr6.eq) goto loc_831F0894;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x831f79b0
	ctx.lr = 0x831F0890;
	sub_831F79B0(ctx, base);
	// b 0x831f08b4
	goto loc_831F08B4;
loc_831F0894:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// beq cr6,0x831f08b4
	if (cr6.eq) goto loc_831F08B4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831f08b4
	if (cr6.eq) goto loc_831F08B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x831F08B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F08B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F08C0;
	sub_83A761B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831F08C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F08CC"))) PPC_WEAK_FUNC(sub_831F08CC);
PPC_FUNC_IMPL(__imp__sub_831F08CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F08D0"))) PPC_WEAK_FUNC(sub_831F08D0);
PPC_FUNC_IMPL(__imp__sub_831F08D0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f0908
	if (!cr6.eq) goto loc_831F0908;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,16584
	ctx.r4.s64 = ctx.r11.s64 + 16584;
	// bl 0x831ea418
	ctx.lr = 0x831F0900;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f0984
	goto loc_831F0984;
loc_831F0908:
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0918;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f093c
	if (!cr6.eq) goto loc_831F093C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,16572
	ctx.r4.s64 = ctx.r11.s64 + 16572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F0934;
	sub_831EA418(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x831f0984
	goto loc_831F0984;
loc_831F093C:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f0958
	if (cr6.eq) goto loc_831F0958;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a761b8
	ctx.lr = 0x831F0954;
	sub_83A761B8(ctx, base);
	// b 0x831f0974
	goto loc_831F0974;
loc_831F0958:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f8740
	ctx.lr = 0x831F0960;
	sub_831F8740(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stb r10,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r10.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_831F0974:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0980;
	sub_83A761B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F0984:
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

__attribute__((alias("__imp__sub_831F099C"))) PPC_WEAK_FUNC(sub_831F099C);
PPC_FUNC_IMPL(__imp__sub_831F099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F09A0"))) PPC_WEAK_FUNC(sub_831F09A0);
PPC_FUNC_IMPL(__imp__sub_831F09A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831f0038
	ctx.lr = 0x831F09BC;
	sub_831F0038(ctx, base);
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_831F09D8"))) PPC_WEAK_FUNC(sub_831F09D8);
PPC_FUNC_IMPL(__imp__sub_831F09D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831f0190
	sub_831F0190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F09DC"))) PPC_WEAK_FUNC(sub_831F09DC);
PPC_FUNC_IMPL(__imp__sub_831F09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F09E0"))) PPC_WEAK_FUNC(sub_831F09E0);
PPC_FUNC_IMPL(__imp__sub_831F09E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F09E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831f0a80
	if (cr6.lt) goto loc_831F0A80;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x831f0a80
	if (cr6.lt) goto loc_831F0A80;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r11,5328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f0a40
	if (cr6.eq) goto loc_831F0A40;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16608
	ctx.r4.s64 = ctx.r11.s64 + 16608;
	// bl 0x831ea3f0
	ctx.lr = 0x831F0A38;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f0a98
	goto loc_831F0A98;
loc_831F0A40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5328, ctx.r11.u32);
	// bl 0x83102db0
	ctx.lr = 0x831F0A4C;
	sub_83102DB0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x831efb38
	ctx.lr = 0x831F0A64;
	sub_831EFB38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831f0a78
	if (cr0.eq) goto loc_831F0A78;
	// bl 0x831f01e0
	ctx.lr = 0x831F0A70;
	sub_831F01E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f0a98
	goto loc_831F0A98;
loc_831F0A78:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f0a98
	goto loc_831F0A98;
loc_831F0A80:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,16596
	ctx.r4.s64 = ctx.r11.s64 + 16596;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F0A94;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F0A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F0AA0"))) PPC_WEAK_FUNC(sub_831F0AA0);
PPC_FUNC_IMPL(__imp__sub_831F0AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831F0AA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,204
	ctx.r30.s64 = ctx.r3.s64 + 204;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0AD0;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f0af4
	if (!cr6.eq) goto loc_831F0AF4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,16656
	ctx.r4.s64 = ctx.r11.s64 + 16656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F0AEC;
	sub_831EA418(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x831f0b20
	goto loc_831F0B20;
loc_831F0AF4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f0360
	ctx.lr = 0x831F0B0C;
	sub_831F0360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0B1C;
	sub_83A761B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831F0B20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F0B28"))) PPC_WEAK_FUNC(sub_831F0B28);
PPC_FUNC_IMPL(__imp__sub_831F0B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x831F0B30;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r23,r3,188
	ctx.r23.s64 = ctx.r3.s64 + 188;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f0b70
	if (!cr6.eq) goto loc_831F0B70;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16928
	ctx.r4.s64 = ctx.r11.s64 + 16928;
	// bl 0x831ea3f0
	ctx.lr = 0x831F0B68;
	sub_831EA3F0(ctx, base);
loc_831F0B68:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f0e40
	goto loc_831F0E40;
loc_831F0B70:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x831f0e28
	if (cr6.lt) goto loc_831F0E28;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// blt cr6,0x831f0e28
	if (cr6.lt) goto loc_831F0E28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// bgt cr6,0x831f0c38
	if (cr6.gt) goto loc_831F0C38;
	// ld r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, xer);
	// beq cr6,0x831f0c38
	if (cr6.eq) goto loc_831F0C38;
	// cmpdi cr6,r28,0
	cr6.compare<int64_t>(ctx.r28.s64, 0, xer);
	// beq cr6,0x831f0bd4
	if (cr6.eq) goto loc_831F0BD4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,16860
	ctx.r4.s64 = ctx.r11.s64 + 16860;
loc_831F0BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F0BC4;
	sub_831EA3F0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0BD0;
	sub_83A761B8(ctx, base);
	// b 0x831f0b68
	goto loc_831F0B68;
loc_831F0BD4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831f0bf4
	if (!cr6.gt) goto loc_831F0BF4;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x831f0bf4
	if (!cr6.lt) goto loc_831F0BF4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,16776
	ctx.r4.s64 = ctx.r11.s64 + 16776;
	// b 0x831f0bbc
	goto loc_831F0BBC;
loc_831F0BF4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x831f0c14
	if (!cr6.gt) goto loc_831F0C14;
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x831f0c14
	if (!cr6.lt) goto loc_831F0C14;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,16716
	ctx.r4.s64 = ctx.r11.s64 + 16716;
	// b 0x831f0bbc
	goto loc_831F0BBC;
loc_831F0C14:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831f0c38
	if (cr6.eq) goto loc_831F0C38;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq cr6,0x831f0c38
	if (cr6.eq) goto loc_831F0C38;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x831f90f0
	ctx.lr = 0x831F0C34;
	sub_831F90F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_831F0C38:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f0e00
	if (cr6.eq) goto loc_831F0E00;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x831f0c58
	if (cr6.eq) goto loc_831F0C58;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f0e00
	if (cr6.eq) goto loc_831F0E00;
loc_831F0C58:
	// lbz r11,213(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 213);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f0c8c
	if (!cr0.eq) goto loc_831F0C8C;
	// ld r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x831f0c8c
	if (cr6.lt) goto loc_831F0C8C;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// ble cr6,0x831f0c8c
	if (!cr6.gt) goto loc_831F0C8C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_831F0C8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0C98;
	sub_83A761B8(ctx, base);
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// stb r29,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r29.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f0cb0
	if (!cr0.eq) goto loc_831F0CB0;
	// lbz r11,215(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 215);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_831F0CB0:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// std r28,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r28.u64);
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f0d30
	if (cr6.eq) goto loc_831F0D30;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x831f0cd8
	if (!cr6.gt) goto loc_831F0CD8;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x831f0cec
	goto loc_831F0CEC;
loc_831F0CD8:
	// lbz r10,215(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 215);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
loc_831F0CEC:
	// ld r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r22,192(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lwz r21,252(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// bctrl 
	ctx.lr = 0x831F0D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F0D30:
	// lwz r5,248(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f8170
	ctx.lr = 0x831F0D40;
	sub_831F8170(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ld r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r30,288(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// ld r29,272(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// lbz r28,214(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r27,280(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// extsb r30,r28
	ctx.r30.s64 = ctx.r28.s8;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// std r29,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r29.u64);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x831f8210
	ctx.lr = 0x831F0DA0;
	sub_831F8210(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f0db0
	if (cr0.eq) goto loc_831F0DB0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831f0e14
	goto loc_831F0E14;
loc_831F0DB0:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x825832e8
	ctx.lr = 0x831F0DB8;
	sub_825832E8(ctx, base);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x831f0de0
	if (!cr6.eq) goto loc_831F0DE0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f8200
	ctx.lr = 0x831F0DC8;
	sub_831F8200(ctx, base);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
loc_831F0DD0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0DD8;
	sub_83A761B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f0e40
	goto loc_831F0E40;
loc_831F0DE0:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,1856
	ctx.r5.s64 = ctx.r11.s64 + 1856;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x831fa480
	ctx.lr = 0x831F0DF8;
	sub_831FA480(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831f0dd0
	goto loc_831F0DD0;
loc_831F0E00:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16680
	ctx.r4.s64 = ctx.r11.s64 + 16680;
	// bl 0x831ea3f0
	ctx.lr = 0x831F0E10;
	sub_831EA3F0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
loc_831F0E14:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0E20;
	sub_83A761B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831f0e40
	goto loc_831F0E40;
loc_831F0E28:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,16668
	ctx.r4.s64 = ctx.r11.s64 + 16668;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F0E3C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F0E40:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F0E48"))) PPC_WEAK_FUNC(sub_831F0E48);
PPC_FUNC_IMPL(__imp__sub_831F0E48) {
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
	// bne cr6,0x831f0e74
	if (!cr6.eq) goto loc_831F0E74;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17004
	ctx.r4.s64 = ctx.r11.s64 + 17004;
	// bl 0x831ea418
	ctx.lr = 0x831F0E6C;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f0e80
	goto loc_831F0E80;
loc_831F0E74:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x831f0aa0
	ctx.lr = 0x831F0E80;
	sub_831F0AA0(ctx, base);
loc_831F0E80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F0E90"))) PPC_WEAK_FUNC(sub_831F0E90);
PPC_FUNC_IMPL(__imp__sub_831F0E90) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f0ec0
	if (!cr6.eq) goto loc_831F0EC0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17016
	ctx.r4.s64 = ctx.r11.s64 + 17016;
	// bl 0x831ea418
	ctx.lr = 0x831F0EB8;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f0ecc
	goto loc_831F0ECC;
loc_831F0EC0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831f0aa0
	ctx.lr = 0x831F0ECC;
	sub_831F0AA0(ctx, base);
loc_831F0ECC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F0EDC"))) PPC_WEAK_FUNC(sub_831F0EDC);
PPC_FUNC_IMPL(__imp__sub_831F0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F0EE0"))) PPC_WEAK_FUNC(sub_831F0EE0);
PPC_FUNC_IMPL(__imp__sub_831F0EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831F0EE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,204
	ctx.r30.s64 = ctx.r3.s64 + 204;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F0F10;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f0f34
	if (!cr6.eq) goto loc_831F0F34;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-4
	ctx.r5.s64 = -4;
	// addi r4,r11,17028
	ctx.r4.s64 = ctx.r11.s64 + 17028;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F0F2C;
	sub_831EA418(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x831f1004
	goto loc_831F1004;
loc_831F0F34:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r28,220(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r27,224(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// stw r27,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r27.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// bl 0x831f0b28
	ctx.lr = 0x831F0F6C;
	sub_831F0B28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a761b8
	ctx.lr = 0x831F0F80;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x831f0f90
	if (cr6.eq) goto loc_831F0F90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831f1004
	goto loc_831F1004;
loc_831F0F90:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// ld r11,5360(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5360);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f0fb8
	if (cr6.gt) goto loc_831F0FB8;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x831eefa8
	ctx.lr = 0x831F0FB0;
	sub_831EEFA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f0fd8
	if (!cr0.eq) goto loc_831F0FD8;
loc_831F0FB8:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x831f0fe8
	if (!cr6.eq) goto loc_831F0FE8;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x831f79b0
	ctx.lr = 0x831F0FCC;
	sub_831F79B0(ctx, base);
	// b 0x831f1000
	goto loc_831F1000;
loc_831F0FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f0740
	ctx.lr = 0x831F0FD8;
	sub_831F0740(ctx, base);
loc_831F0FD8:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f0fd0
	if (cr6.eq) goto loc_831F0FD0;
	// b 0x831f1000
	goto loc_831F1000;
loc_831F0FE8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f1000
	if (cr6.eq) goto loc_831F1000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x831F1000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831F1000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F1004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F100C"))) PPC_WEAK_FUNC(sub_831F100C);
PPC_FUNC_IMPL(__imp__sub_831F100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1010"))) PPC_WEAK_FUNC(sub_831F1010);
PPC_FUNC_IMPL(__imp__sub_831F1010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F1018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f10a4
	if (cr6.eq) goto loc_831F10A4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f10a4
	if (cr6.eq) goto loc_831F10A4;
	// cmpdi cr6,r6,0
	cr6.compare<int64_t>(ctx.r6.s64, 0, xer);
	// blt cr6,0x831f10a4
	if (cr6.lt) goto loc_831F10A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x831f0aa0
	ctx.lr = 0x831F1054;
	sub_831F0AA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f10bc
	if (!cr0.eq) goto loc_831F10BC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r30,r11
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f1090
	if (cr6.gt) goto loc_831F1090;
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f1090
	if (cr6.gt) goto loc_831F1090;
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f0ee0
	ctx.lr = 0x831F108C;
	sub_831F0EE0(ctx, base);
	// b 0x831f10bc
	goto loc_831F10BC;
loc_831F1090:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17040
	ctx.r4.s64 = ctx.r11.s64 + 17040;
	// bl 0x831ea3f0
	ctx.lr = 0x831F10A0;
	sub_831EA3F0(ctx, base);
	// b 0x831f10b8
	goto loc_831F10B8;
loc_831F10A4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17092
	ctx.r4.s64 = ctx.r11.s64 + 17092;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F10B8;
	sub_831EA418(ctx, base);
loc_831F10B8:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F10BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F10C4"))) PPC_WEAK_FUNC(sub_831F10C4);
PPC_FUNC_IMPL(__imp__sub_831F10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F10C8"))) PPC_WEAK_FUNC(sub_831F10C8);
PPC_FUNC_IMPL(__imp__sub_831F10C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F10D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f1104
	if (!cr6.eq) goto loc_831F1104;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17104
	ctx.r4.s64 = ctx.r11.s64 + 17104;
	// bl 0x831ea418
	ctx.lr = 0x831F1100;
	sub_831EA418(ctx, base);
	// b 0x831f1164
	goto loc_831F1164;
loc_831F1104:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f0aa0
	ctx.lr = 0x831F1118;
	sub_831F0AA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f1168
	if (!cr0.eq) goto loc_831F1168;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r30,r11
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f1154
	if (cr6.gt) goto loc_831F1154;
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f1154
	if (cr6.gt) goto loc_831F1154;
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f0ee0
	ctx.lr = 0x831F1150;
	sub_831F0EE0(ctx, base);
	// b 0x831f1168
	goto loc_831F1168;
loc_831F1154:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17040
	ctx.r4.s64 = ctx.r11.s64 + 17040;
	// bl 0x831ea3f0
	ctx.lr = 0x831F1164;
	sub_831EA3F0(ctx, base);
loc_831F1164:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F1168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1170"))) PPC_WEAK_FUNC(sub_831F1170);
PPC_FUNC_IMPL(__imp__sub_831F1170) {
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
	// bne cr6,0x831f1198
	if (!cr6.eq) goto loc_831F1198;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17116
	ctx.r4.s64 = ctx.r11.s64 + 17116;
	// bl 0x831ea418
	ctx.lr = 0x831F1194;
	sub_831EA418(ctx, base);
	// b 0x831f11d0
	goto loc_831F11D0;
loc_831F1198:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r5,r11
	cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f11c0
	if (cr6.gt) goto loc_831F11C0;
	// cmpd cr6,r7,r11
	cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, xer);
	// bgt cr6,0x831f11c0
	if (cr6.gt) goto loc_831F11C0;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// bl 0x831f0ee0
	ctx.lr = 0x831F11BC;
	sub_831F0EE0(ctx, base);
	// b 0x831f11d4
	goto loc_831F11D4;
loc_831F11C0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17040
	ctx.r4.s64 = ctx.r11.s64 + 17040;
	// bl 0x831ea3f0
	ctx.lr = 0x831F11D0;
	sub_831EA3F0(ctx, base);
loc_831F11D0:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_831F11D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F11E4"))) PPC_WEAK_FUNC(sub_831F11E4);
PPC_FUNC_IMPL(__imp__sub_831F11E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F11E8"))) PPC_WEAK_FUNC(sub_831F11E8);
PPC_FUNC_IMPL(__imp__sub_831F11E8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,5328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f1228
	if (!cr6.eq) goto loc_831F1228;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-6
	ctx.r5.s64 = -6;
	// addi r4,r11,17140
	ctx.r4.s64 = ctx.r11.s64 + 17140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F1220;
	sub_831EA418(ctx, base);
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x831f1328
	goto loc_831F1328;
loc_831F1228:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831f1260
	if (!cr6.eq) goto loc_831F1260;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F1244;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f1328
	goto loc_831F1328;
loc_831F124C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f08d0
	ctx.lr = 0x831F1254;
	sub_831F08D0(ctx, base);
	// bl 0x831eed28
	ctx.lr = 0x831F1258;
	sub_831EED28(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x831F1260;
	sub_83A75E98(ctx, base);
loc_831F1260:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f124c
	if (cr6.eq) goto loc_831F124C;
	// b 0x831f1278
	goto loc_831F1278;
loc_831F1270:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x831F1278;
	sub_83A75E98(ctx, base);
loc_831F1278:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f1270
	if (!cr6.eq) goto loc_831F1270;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f1310
	if (cr6.eq) goto loc_831F1310;
	// lbz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne 0x831f1300
	if (!cr0.eq) goto loc_831F1300;
	// lbz r11,215(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 215);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f1300
	if (cr0.eq) goto loc_831F1300;
	// bl 0x831f8200
	ctx.lr = 0x831F12AC;
	sub_831F8200(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f12dc
	if (cr0.eq) goto loc_831F12DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1170
	ctx.lr = 0x831F12CC;
	sub_831F1170(ctx, base);
	// b 0x831f12dc
	goto loc_831F12DC;
loc_831F12D0:
	// bl 0x831eed28
	ctx.lr = 0x831F12D4;
	sub_831EED28(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x831F12DC;
	sub_83A75E98(ctx, base);
loc_831F12DC:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f12d0
	if (cr6.eq) goto loc_831F12D0;
	// b 0x831f12f4
	goto loc_831F12F4;
loc_831F12EC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x83a75e98
	ctx.lr = 0x831F12F4;
	sub_83A75E98(ctx, base);
loc_831F12F4:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f12ec
	if (!cr6.eq) goto loc_831F12EC;
loc_831F1300:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// bl 0x831f8db0
	ctx.lr = 0x831F1308;
	sub_831F8DB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
loc_831F1310:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f1324
	if (cr6.eq) goto loc_831F1324;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a76e98
	ctx.lr = 0x831F1324;
	sub_83A76E98(ctx, base);
loc_831F1324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F1328:
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

__attribute__((alias("__imp__sub_831F133C"))) PPC_WEAK_FUNC(sub_831F133C);
PPC_FUNC_IMPL(__imp__sub_831F133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1340"))) PPC_WEAK_FUNC(sub_831F1340);
PPC_FUNC_IMPL(__imp__sub_831F1340) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831f11e8
	sub_831F11E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1348"))) PPC_WEAK_FUNC(sub_831F1348);
PPC_FUNC_IMPL(__imp__sub_831F1348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F1350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f1378
	if (!cr6.eq) goto loc_831F1378;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,17340
	ctx.r4.s64 = ctx.r11.s64 + 17340;
	// bl 0x831ea418
	ctx.lr = 0x831F1370;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f1458
	goto loc_831F1458;
loc_831F1378:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,5328
	ctx.r29.s64 = ctx.r11.s64 + 5328;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// lwz r11,5328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f13ac
	if (!cr6.eq) goto loc_831F13AC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,17256
	ctx.r4.s64 = ctx.r11.s64 + 17256;
loc_831F139C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea3f0
	ctx.lr = 0x831F13A4;
	sub_831EA3F0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f1458
	goto loc_831F1458;
loc_831F13AC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x831f13bc
	if (!cr6.eq) goto loc_831F13BC;
	// lwz r28,12(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x831f13c0
	goto loc_831F13C0;
loc_831F13BC:
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
loc_831F13C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a76db0
	ctx.lr = 0x831F13CC;
	sub_83A76DB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831f13e0
	if (!cr0.eq) goto loc_831F13E0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,17168
	ctx.r4.s64 = ctx.r11.s64 + 17168;
	// b 0x831f139c
	goto loc_831F139C;
loc_831F13E0:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x831f8180
	ctx.lr = 0x831F13E8;
	sub_831F8180(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f1414
	if (!cr0.eq) goto loc_831F1414;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,17152
	ctx.r4.s64 = ctx.r11.s64 + 17152;
	// bl 0x831ea418
	ctx.lr = 0x831F1404;
	sub_831EA418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f11e8
	ctx.lr = 0x831F140C;
	sub_831F11E8(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x831f1458
	goto loc_831F1458;
loc_831F1414:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r31,344
	ctx.r10.s64 = ctx.r31.s64 + 344;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stb r9,215(r31)
	PPC_STORE_U8(ctx.r31.u32 + 215, ctx.r9.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// addi r4,r10,-808
	ctx.r4.s64 = ctx.r10.s64 + -808;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// bl 0x831f8160
	ctx.lr = 0x831F1450;
	sub_831F8160(ctx, base);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F1458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1460"))) PPC_WEAK_FUNC(sub_831F1460);
PPC_FUNC_IMPL(__imp__sub_831F1460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,4928
	ctx.r5.s64 = ctx.r11.s64 + 4928;
	// b 0x83a76cb0
	sub_83A76CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1480"))) PPC_WEAK_FUNC(sub_831F1480);
PPC_FUNC_IMPL(__imp__sub_831F1480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F1484"))) PPC_WEAK_FUNC(sub_831F1484);
PPC_FUNC_IMPL(__imp__sub_831F1484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1488"))) PPC_WEAK_FUNC(sub_831F1488);
PPC_FUNC_IMPL(__imp__sub_831F1488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,5344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,4928
	ctx.r5.s64 = ctx.r11.s64 + 4928;
	// b 0x83a76cb0
	sub_83A76CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F14A8"))) PPC_WEAK_FUNC(sub_831F14A8);
PPC_FUNC_IMPL(__imp__sub_831F14A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F14AC"))) PPC_WEAK_FUNC(sub_831F14AC);
PPC_FUNC_IMPL(__imp__sub_831F14AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F14B0"))) PPC_WEAK_FUNC(sub_831F14B0);
PPC_FUNC_IMPL(__imp__sub_831F14B0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831f1348
	sub_831F1348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F14B8"))) PPC_WEAK_FUNC(sub_831F14B8);
PPC_FUNC_IMPL(__imp__sub_831F14B8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831f1348
	sub_831F1348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F14C0"))) PPC_WEAK_FUNC(sub_831F14C0);
PPC_FUNC_IMPL(__imp__sub_831F14C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F14C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// tdllei r9,0
	// divdu r11,r11,r9
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r9.u64);
	// mulld r28,r11,r9
	ctx.r28.s64 = ctx.r11.s64 * ctx.r9.s64;
	// bl 0x831ef038
	ctx.lr = 0x831F14FC;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831f1530
	if (!cr6.eq) goto loc_831F1530;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_831F1524:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831f1010
	ctx.lr = 0x831F152C;
	sub_831F1010(ctx, base);
	// b 0x831f157c
	goto loc_831F157C;
loc_831F1530:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r27,r31,324
	ctx.r27.s64 = ctx.r31.s64 + 324;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f154c
	if (!cr6.eq) goto loc_831F154C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f00e0
	ctx.lr = 0x831F154C;
	sub_831F00E0(ctx, base);
loc_831F154C:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ld r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 336);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x831f1524
	if (cr6.eq) goto loc_831F1524;
	// bl 0x831f10c8
	ctx.lr = 0x831F157C;
	sub_831F10C8(ctx, base);
loc_831F157C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1584"))) PPC_WEAK_FUNC(sub_831F1584);
PPC_FUNC_IMPL(__imp__sub_831F1584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1588"))) PPC_WEAK_FUNC(sub_831F1588);
PPC_FUNC_IMPL(__imp__sub_831F1588) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f1654
	if (cr6.eq) goto loc_831F1654;
	// bl 0x831ef038
	ctx.lr = 0x831F15B4;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x831f15cc
	if (cr6.eq) goto loc_831F15CC;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f15d0
	if (cr6.eq) goto loc_831F15D0;
loc_831F15CC:
	// li r4,1
	ctx.r4.s64 = 1;
loc_831F15D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f00c0
	ctx.lr = 0x831F15D8;
	sub_831F00C0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831f1620
	if (cr6.eq) goto loc_831F1620;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831f1620
	if (cr6.eq) goto loc_831F1620;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831f1620
	if (cr6.eq) goto loc_831F1620;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,344(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x831f10c8
	ctx.lr = 0x831F1614;
	sub_831F10C8(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x831f1654
	goto loc_831F1654;
loc_831F1620:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f08d0
	ctx.lr = 0x831F1628;
	sub_831F08D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f11e8
	ctx.lr = 0x831F1630;
	sub_831F11E8(ctx, base);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831f1654
	if (cr6.eq) goto loc_831F1654;
	// lwz r10,320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x831f1654
	if (cr6.eq) goto loc_831F1654;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
loc_831F1654:
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

__attribute__((alias("__imp__sub_831F166C"))) PPC_WEAK_FUNC(sub_831F166C);
PPC_FUNC_IMPL(__imp__sub_831F166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1670"))) PPC_WEAK_FUNC(sub_831F1670);
PPC_FUNC_IMPL(__imp__sub_831F1670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F1678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f16a4
	if (cr6.eq) goto loc_831F16A4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x831fa568
	ctx.lr = 0x831F169C;
	sub_831FA568(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831f16d0
	if (!cr0.eq) goto loc_831F16D0;
loc_831F16A4:
	// lwz r3,392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f16bc
	if (cr6.eq) goto loc_831F16BC;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x83a760b8
	ctx.lr = 0x831F16B8;
	sub_83A760B8(ctx, base);
	// b 0x831f16d0
	goto loc_831F16D0;
loc_831F16BC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17452
	ctx.r4.s64 = ctx.r11.s64 + 17452;
	// bl 0x831ea3f0
	ctx.lr = 0x831F16CC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F16D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F16D8"))) PPC_WEAK_FUNC(sub_831F16D8);
PPC_FUNC_IMPL(__imp__sub_831F16D8) {
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
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831fa6c8
	ctx.lr = 0x831F16FC;
	sub_831FA6C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831f1714
	if (cr0.eq) goto loc_831F1714;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x831fa620
	ctx.lr = 0x831F1710;
	sub_831FA620(ctx, base);
	// b 0x831f173c
	goto loc_831F173C;
loc_831F1714:
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f172c
	if (cr6.eq) goto loc_831F172C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a76130
	ctx.lr = 0x831F1728;
	sub_83A76130(ctx, base);
	// b 0x831f173c
	goto loc_831F173C;
loc_831F172C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,17488
	ctx.r4.s64 = ctx.r11.s64 + 17488;
	// bl 0x831ea3f0
	ctx.lr = 0x831F173C;
	sub_831EA3F0(ctx, base);
loc_831F173C:
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

__attribute__((alias("__imp__sub_831F1754"))) PPC_WEAK_FUNC(sub_831F1754);
PPC_FUNC_IMPL(__imp__sub_831F1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1758"))) PPC_WEAK_FUNC(sub_831F1758);
PPC_FUNC_IMPL(__imp__sub_831F1758) {
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
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r6,400(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r5,r8,17520
	ctx.r5.s64 = ctx.r8.s64 + 17520;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r11
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// twllei r11,0
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// twlgei r10,-1
	// bl 0x831f1670
	ctx.lr = 0x831F17B8;
	sub_831F1670(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// twllei r10,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_831F17F4"))) PPC_WEAK_FUNC(sub_831F17F4);
PPC_FUNC_IMPL(__imp__sub_831F17F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F17F8"))) PPC_WEAK_FUNC(sub_831F17F8);
PPC_FUNC_IMPL(__imp__sub_831F17F8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f183c
	if (cr6.eq) goto loc_831F183C;
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// bl 0x831f4880
	ctx.lr = 0x831F1828;
	sub_831F4880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831f16d8
	ctx.lr = 0x831F1834;
	sub_831F16D8(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_831F183C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f1864
	if (cr6.eq) goto loc_831F1864;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x831f4080
	ctx.lr = 0x831F1850;
	sub_831F4080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831f16d8
	ctx.lr = 0x831F185C;
	sub_831F16D8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_831F1864:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f188c
	if (cr6.eq) goto loc_831F188C;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x831f3b98
	ctx.lr = 0x831F1878;
	sub_831F3B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f16d8
	ctx.lr = 0x831F1884;
	sub_831F16D8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_831F188C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f18ac
	if (cr6.eq) goto loc_831F18AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f16d8
	ctx.lr = 0x831F18A4;
	sub_831F16D8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_831F18AC:
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

__attribute__((alias("__imp__sub_831F18C4"))) PPC_WEAK_FUNC(sub_831F18C4);
PPC_FUNC_IMPL(__imp__sub_831F18C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F18C8"))) PPC_WEAK_FUNC(sub_831F18C8);
PPC_FUNC_IMPL(__imp__sub_831F18C8) {
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
	// bl 0x831f1588
	ctx.lr = 0x831F18E4;
	sub_831F1588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f17f8
	ctx.lr = 0x831F18EC;
	sub_831F17F8(ctx, base);
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

__attribute__((alias("__imp__sub_831F1900"))) PPC_WEAK_FUNC(sub_831F1900);
PPC_FUNC_IMPL(__imp__sub_831F1900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x831f1588
	sub_831F1588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1914"))) PPC_WEAK_FUNC(sub_831F1914);
PPC_FUNC_IMPL(__imp__sub_831F1914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F1918"))) PPC_WEAK_FUNC(sub_831F1918);
PPC_FUNC_IMPL(__imp__sub_831F1918) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831f53e8
	ctx.lr = 0x831F193C;
	sub_831F53E8(ctx, base);
	// addi r11,r31,2047
	ctx.r11.s64 = ctx.r31.s64 + 2047;
	// twllei r31,0
	// divw r10,r11,r31
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r31.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// andc r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// twlgei r10,-1
	// bl 0x82aa87f0
	ctx.lr = 0x831F1968;
	sub_82AA87F0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_831F198C"))) PPC_WEAK_FUNC(sub_831F198C);
PPC_FUNC_IMPL(__imp__sub_831F198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1990"))) PPC_WEAK_FUNC(sub_831F1990);
PPC_FUNC_IMPL(__imp__sub_831F1990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F1998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f19d4
	if (cr6.eq) goto loc_831F19D4;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x831fb290
	ctx.lr = 0x831F19B8;
	sub_831FB290(ctx, base);
	// rotlwi. r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x831f19c8
	if (!cr0.eq) goto loc_831F19C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f1a1c
	goto loc_831F1A1C;
loc_831F19C8:
	// lwz r29,400(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// lwz r31,404(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// b 0x831f19d8
	goto loc_831F19D8;
loc_831F19D4:
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_831F19D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831f60e0
	ctx.lr = 0x831F19E0;
	sub_831F60E0(ctx, base);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// twllei r31,0
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r10,r11,r31
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r31.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// andc r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// twlgei r10,-1
	// bl 0x82b5ac78
	ctx.lr = 0x831F1A10;
	sub_82B5AC78(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_831F1A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1A24"))) PPC_WEAK_FUNC(sub_831F1A24);
PPC_FUNC_IMPL(__imp__sub_831F1A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1A28"))) PPC_WEAK_FUNC(sub_831F1A28);
PPC_FUNC_IMPL(__imp__sub_831F1A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831F1A30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831f1918
	ctx.lr = 0x831F1A50;
	sub_831F1918(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f1ab8
	if (!cr6.gt) goto loc_831F1AB8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r30,0
	// divw r10,r11,r30
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r30.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// bl 0x831f53f0
	ctx.lr = 0x831F1A94;
	sub_831F53F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82aa87f0
	ctx.lr = 0x831F1AA4;
	sub_82AA87F0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831F1AB8:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831f1b0c
	if (!cr6.gt) goto loc_831F1B0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831f60e0
	ctx.lr = 0x831F1ACC;
	sub_831F60E0(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// twllei r30,0
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r30
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r30.s32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// andc r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// twlgei r10,-1
	// bl 0x82b5ac78
	ctx.lr = 0x831F1AFC;
	sub_82B5AC78(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F1B0C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x831f1b70
	if (!cr6.gt) goto loc_831F1B70;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r30,0
	// divw r10,r11,r30
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r30.s32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// bl 0x831f60c0
	ctx.lr = 0x831F1B4C;
	sub_831F60C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82aabcb0
	ctx.lr = 0x831F1B5C;
	sub_82AABCB0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831F1B70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1B7C"))) PPC_WEAK_FUNC(sub_831F1B7C);
PPC_FUNC_IMPL(__imp__sub_831F1B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1B80"))) PPC_WEAK_FUNC(sub_831F1B80);
PPC_FUNC_IMPL(__imp__sub_831F1B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831F1B88;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x831f1c18
	if (cr6.eq) goto loc_831F1C18;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e048
	ctx.lr = 0x831F1BE8;
	sub_8307E048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82df15a8
	ctx.lr = 0x831F1BF8;
	sub_82DF15A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x831fb290
	ctx.lr = 0x831F1C08;
	sub_831FB290(ctx, base);
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r6,404(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x831f1c2c
	goto loc_831F1C2C;
loc_831F1C18:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eee28
	ctx.lr = 0x831F1C24;
	sub_831EEE28(ctx, base);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_831F1C2C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831f1a28
	ctx.lr = 0x831F1C38;
	sub_831F1A28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831f1c44
	if (cr6.eq) goto loc_831F1C44;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_831F1C44:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f1c54
	if (cr6.eq) goto loc_831F1C54;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_831F1C54:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x831f1c64
	if (cr6.eq) goto loc_831F1C64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_831F1C64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831f1c74
	if (cr6.eq) goto loc_831F1C74;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_831F1C74:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x831f1c84
	if (cr6.eq) goto loc_831F1C84;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_831F1C84:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x831f1c94
	if (cr6.eq) goto loc_831F1C94;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_831F1C94:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1C9C"))) PPC_WEAK_FUNC(sub_831F1C9C);
PPC_FUNC_IMPL(__imp__sub_831F1C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1CA0"))) PPC_WEAK_FUNC(sub_831F1CA0);
PPC_FUNC_IMPL(__imp__sub_831F1CA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831f1b80
	ctx.lr = 0x831F1CF0;
	sub_831F1B80(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,392(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x831f1d38
	if (cr6.eq) goto loc_831F1D38;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,17720
	ctx.r4.s64 = ctx.r11.s64 + 17720;
	// bl 0x831ea400
	ctx.lr = 0x831F1D34;
	sub_831EA400(ctx, base);
	// b 0x831f1d64
	goto loc_831F1D64;
loc_831F1D38:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x831f1d58
	if (!cr6.lt) goto loc_831F1D58;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// b 0x831f1d60
	goto loc_831F1D60;
loc_831F1D58:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,17528
	ctx.r4.s64 = ctx.r11.s64 + 17528;
loc_831F1D60:
	// bl 0x831ea410
	ctx.lr = 0x831F1D64;
	sub_831EA410(ctx, base);
loc_831F1D64:
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

__attribute__((alias("__imp__sub_831F1D7C"))) PPC_WEAK_FUNC(sub_831F1D7C);
PPC_FUNC_IMPL(__imp__sub_831F1D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1D80"))) PPC_WEAK_FUNC(sub_831F1D80);
PPC_FUNC_IMPL(__imp__sub_831F1D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F1D88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,17908
	ctx.r29.s64 = ctx.r11.s64 + 17908;
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// beq cr6,0x831f1e3c
	if (cr6.eq) goto loc_831F1E3C;
	// cmpwi cr6,r4,20
	cr6.compare<int32_t>(ctx.r4.s32, 20, xer);
	// beq cr6,0x831f1e08
	if (cr6.eq) goto loc_831F1E08;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// beq cr6,0x831f1dd4
	if (cr6.eq) goto loc_831F1DD4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,17844
	ctx.r4.s64 = ctx.r11.s64 + 17844;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F1DD0;
	sub_831EA400(ctx, base);
	// b 0x831f1e70
	goto loc_831F1E70;
loc_831F1DD4:
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82df15a8
	ctx.lr = 0x831F1DE0;
	sub_82DF15A8(ctx, base);
	// rotlwi. r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x831f1df0
	if (!cr0.eq) goto loc_831F1DF0;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x831f1eb4
	goto loc_831F1EB4;
loc_831F1DF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f5418
	ctx.lr = 0x831F1DF8;
	sub_831F5418(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,23
	ctx.r30.s64 = 23;
	// addi r29,r11,17832
	ctx.r29.s64 = ctx.r11.s64 + 17832;
	// b 0x831f1e6c
	goto loc_831F1E6C;
loc_831F1E08:
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fb290
	ctx.lr = 0x831F1E14;
	sub_831FB290(ctx, base);
	// rotlwi. r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x831f1e24
	if (!cr0.eq) goto loc_831F1E24;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x831f1eb4
	goto loc_831F1EB4;
loc_831F1E24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da3440
	ctx.lr = 0x831F1E2C;
	sub_82DA3440(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,21
	ctx.r30.s64 = 21;
	// addi r29,r11,17820
	ctx.r29.s64 = ctx.r11.s64 + 17820;
	// b 0x831f1e6c
	goto loc_831F1E6C;
loc_831F1E3C:
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8307e048
	ctx.lr = 0x831F1E48;
	sub_8307E048(ctx, base);
	// rotlwi. r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x831f1e58
	if (!cr0.eq) goto loc_831F1E58;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x831f1eb4
	goto loc_831F1EB4;
loc_831F1E58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83b4c0d8
	ctx.lr = 0x831F1E60;
	sub_83B4C0D8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,17
	ctx.r30.s64 = 17;
	// addi r29,r11,17808
	ctx.r29.s64 = ctx.r11.s64 + 17808;
loc_831F1E6C:
	// std r3,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r3.u64);
loc_831F1E70:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1758
	ctx.lr = 0x831F1E80;
	sub_831F1758(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x831f1e9c
	if (!cr0.eq) goto loc_831F1E9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831f1ca0
	ctx.lr = 0x831F1E94;
	sub_831F1CA0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f1eb4
	goto loc_831F1EB4;
loc_831F1E9C:
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// bl 0x831f14c0
	ctx.lr = 0x831F1EA4;
	sub_831F14C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x831f1eb4
	if (cr6.eq) goto loc_831F1EB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831F1EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F1EBC"))) PPC_WEAK_FUNC(sub_831F1EBC);
PPC_FUNC_IMPL(__imp__sub_831F1EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F1EC0"))) PPC_WEAK_FUNC(sub_831F1EC0);
PPC_FUNC_IMPL(__imp__sub_831F1EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F1EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r30,r11,18056
	ctx.r30.s64 = ctx.r11.s64 + 18056;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f1f04
	if (cr6.eq) goto loc_831F1F04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831effb8
	ctx.lr = 0x831F1EF8;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x831f1f14
	if (cr6.eq) goto loc_831F1F14;
loc_831F1F04:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x831f1f68
	goto loc_831F1F68;
loc_831F1F14:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r29,17
	cr6.compare<int32_t>(ctx.r29.s32, 17, xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x831f1fbc
	if (cr6.eq) goto loc_831F1FBC;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(ctx.r29.s32, 21, xer);
	// beq cr6,0x831f1f98
	if (cr6.eq) goto loc_831F1F98;
	// cmpwi cr6,r29,23
	cr6.compare<int32_t>(ctx.r29.s32, 23, xer);
	// beq cr6,0x831f1f70
	if (cr6.eq) goto loc_831F1F70;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,17992
	ctx.r4.s64 = ctx.r11.s64 + 17992;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F1F4C;
	sub_831EA400(ctx, base);
loc_831F1F4C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,17948
	ctx.r4.s64 = ctx.r11.s64 + 17948;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea400
	ctx.lr = 0x831F1F60;
	sub_831EA400(ctx, base);
loc_831F1F60:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_831F1F64:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_831F1F68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831F1F70:
	// addi r7,r31,216
	ctx.r7.s64 = ctx.r31.s64 + 216;
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831f5438
	ctx.lr = 0x831F1F84;
	sub_831F5438(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r30,r11,17936
	ctx.r30.s64 = ctx.r11.s64 + 17936;
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x831f1fdc
	goto loc_831F1FDC;
loc_831F1F98:
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831f6100
	ctx.lr = 0x831F1FA8;
	sub_831F6100(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r11,17924
	ctx.r30.s64 = ctx.r11.s64 + 17924;
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x831f1fdc
	goto loc_831F1FDC;
loc_831F1FBC:
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831f5420
	ctx.lr = 0x831F1FCC;
	sub_831F5420(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r11,17916
	ctx.r30.s64 = ctx.r11.s64 + 17916;
	// li r11,20
	ctx.r11.s64 = 20;
loc_831F1FDC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831f1f64
	if (!cr6.eq) goto loc_831F1F64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831f1f4c
	if (!cr6.eq) goto loc_831F1F4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1ca0
	ctx.lr = 0x831F1FF8;
	sub_831F1CA0(ctx, base);
	// b 0x831f1f60
	goto loc_831F1F60;
}

__attribute__((alias("__imp__sub_831F1FFC"))) PPC_WEAK_FUNC(sub_831F1FFC);
PPC_FUNC_IMPL(__imp__sub_831F1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2000"))) PPC_WEAK_FUNC(sub_831F2000);
PPC_FUNC_IMPL(__imp__sub_831F2000) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f2030
	if (cr6.eq) goto loc_831F2030;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831f0140
	ctx.lr = 0x831F2028;
	sub_831F0140(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_831F2030:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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

__attribute__((alias("__imp__sub_831F2048"))) PPC_WEAK_FUNC(sub_831F2048);
PPC_FUNC_IMPL(__imp__sub_831F2048) {
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
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2074
	if (!cr6.eq) goto loc_831F2074;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x831fb290
	ctx.lr = 0x831F2068;
	sub_831FB290(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x831f2078
	if (!cr6.eq) goto loc_831F2078;
loc_831F2074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F2078:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F2088"))) PPC_WEAK_FUNC(sub_831F2088);
PPC_FUNC_IMPL(__imp__sub_831F2088) {
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
	// bl 0x831ef038
	ctx.lr = 0x831F20A4;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831f20e0
	if (!cr6.eq) goto loc_831F20E0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f20c0
	if (!cr6.eq) goto loc_831F20C0;
loc_831F20B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f2114
	goto loc_831F2114;
loc_831F20C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831f00e0
	ctx.lr = 0x831F20C8;
	sub_831F00E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x831f2114
	goto loc_831F2114;
loc_831F20E0:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r30,r31,324
	ctx.r30.s64 = ctx.r31.s64 + 324;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f2114
	if (!cr6.eq) goto loc_831F2114;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f20b8
	if (cr6.eq) goto loc_831F20B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831f00e0
	ctx.lr = 0x831F2104;
	sub_831F00E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x831f2114
	if (cr6.eq) goto loc_831F2114;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_831F2114:
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

__attribute__((alias("__imp__sub_831F212C"))) PPC_WEAK_FUNC(sub_831F212C);
PPC_FUNC_IMPL(__imp__sub_831F212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2130"))) PPC_WEAK_FUNC(sub_831F2130);
PPC_FUNC_IMPL(__imp__sub_831F2130) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F2138"))) PPC_WEAK_FUNC(sub_831F2138);
PPC_FUNC_IMPL(__imp__sub_831F2138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F2140;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x83131d70
	ctx.lr = 0x831F2178;
	sub_83131D70(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x831f6080
	ctx.lr = 0x831F2190;
	sub_831F6080(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x831f21a0
	if (cr0.gt) goto loc_831F21A0;
loc_831F2198:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f21e0
	goto loc_831F21E0;
loc_831F21A0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bl 0x831f3d98
	ctx.lr = 0x831F21B8;
	sub_831F3D98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f2198
	if (!cr6.eq) goto loc_831F2198;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_831F21E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F21E8"))) PPC_WEAK_FUNC(sub_831F21E8);
PPC_FUNC_IMPL(__imp__sub_831F21E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831f2138
	ctx.lr = 0x831F2230;
	sub_831F2138(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F2240"))) PPC_WEAK_FUNC(sub_831F2240);
PPC_FUNC_IMPL(__imp__sub_831F2240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F2248;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f227c
	if (!cr6.eq) goto loc_831F227C;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x831fb290
	ctx.lr = 0x831F2274;
	sub_831FB290(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x831f2284
	if (!cr6.eq) goto loc_831F2284;
loc_831F227C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f22c4
	goto loc_831F22C4;
loc_831F2284:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2138
	ctx.lr = 0x831F22C4;
	sub_831F2138(ctx, base);
loc_831F22C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F22CC"))) PPC_WEAK_FUNC(sub_831F22CC);
PPC_FUNC_IMPL(__imp__sub_831F22CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F22D0"))) PPC_WEAK_FUNC(sub_831F22D0);
PPC_FUNC_IMPL(__imp__sub_831F22D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F22D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f2328
	if (cr6.eq) goto loc_831F2328;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831f2328
	if (cr6.eq) goto loc_831F2328;
	// bl 0x83a76030
	ctx.lr = 0x831F2304;
	sub_83A76030(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a76068
	ctx.lr = 0x831F2314;
	sub_83A76068(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a76090
	ctx.lr = 0x831F2324;
	sub_83A76090(ctx, base);
	// b 0x831f2334
	goto loc_831F2334;
loc_831F2328:
	// bl 0x83a76030
	ctx.lr = 0x831F232C;
	sub_83A76030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F2334:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F233C"))) PPC_WEAK_FUNC(sub_831F233C);
PPC_FUNC_IMPL(__imp__sub_831F233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2340"))) PPC_WEAK_FUNC(sub_831F2340);
PPC_FUNC_IMPL(__imp__sub_831F2340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,5372
	ctx.r4.s64 = ctx.r11.s64 + 5372;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// b 0x831f22d0
	sub_831F22D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F235C"))) PPC_WEAK_FUNC(sub_831F235C);
PPC_FUNC_IMPL(__imp__sub_831F235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2360"))) PPC_WEAK_FUNC(sub_831F2360);
PPC_FUNC_IMPL(__imp__sub_831F2360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,5392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5392);
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

__attribute__((alias("__imp__sub_831F2374"))) PPC_WEAK_FUNC(sub_831F2374);
PPC_FUNC_IMPL(__imp__sub_831F2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2378"))) PPC_WEAK_FUNC(sub_831F2378);
PPC_FUNC_IMPL(__imp__sub_831F2378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x831f5ee8
	sub_831F5EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2380"))) PPC_WEAK_FUNC(sub_831F2380);
PPC_FUNC_IMPL(__imp__sub_831F2380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x831f4520
	sub_831F4520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2388"))) PPC_WEAK_FUNC(sub_831F2388);
PPC_FUNC_IMPL(__imp__sub_831F2388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F2390;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831F23B4:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831f23b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F23B4;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r31,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r31.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r11,5744
	ctx.r11.s64 = ctx.r11.s64 + 5744;
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// addi r10,r10,5848
	ctx.r10.s64 = ctx.r10.s64 + 5848;
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// beq cr6,0x831f2450
	if (cr6.eq) goto loc_831F2450;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831fa4c0
	ctx.lr = 0x831F2408;
	sub_831FA4C0(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,5372
	ctx.r11.s64 = ctx.r11.s64 + 5372;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831f2440
	if (!cr6.eq) goto loc_831F2440;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x83a76030
	ctx.lr = 0x831F2438;
	sub_83A76030(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// b 0x831f2478
	goto loc_831F2478;
loc_831F2440:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831f246c
	goto loc_831F246C;
loc_831F2450:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// addi r10,r11,5372
	ctx.r10.s64 = ctx.r11.s64 + 5372;
	// lwz r5,5372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5372);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_831F246C:
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x831f22d0
	ctx.lr = 0x831F2478;
	sub_831F22D0(ctx, base);
loc_831F2478:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831eee28
	ctx.lr = 0x831F2484;
	sub_831EEE28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// std r30,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r30.u64);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F24B8"))) PPC_WEAK_FUNC(sub_831F24B8);
PPC_FUNC_IMPL(__imp__sub_831F24B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f2524
	if (cr6.eq) goto loc_831F2524;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(ctx.r11.s32, 27, xer);
	// bne cr6,0x831f2510
	if (!cr6.eq) goto loc_831F2510;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f2510
	if (cr6.eq) goto loc_831F2510;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831effb8
	ctx.lr = 0x831F24F4;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831f2510
	if (!cr6.eq) goto loc_831F2510;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f11e8
	ctx.lr = 0x831F2508;
	sub_831F11E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831F2510:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f2528
	if (!cr6.eq) goto loc_831F2528;
	// bl 0x831f17f8
	ctx.lr = 0x831F2524;
	sub_831F17F8(ctx, base);
loc_831F2524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F2528:
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

__attribute__((alias("__imp__sub_831F253C"))) PPC_WEAK_FUNC(sub_831F253C);
PPC_FUNC_IMPL(__imp__sub_831F253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2540"))) PPC_WEAK_FUNC(sub_831F2540);
PPC_FUNC_IMPL(__imp__sub_831F2540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F2548;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,348
	ctx.r27.s64 = ctx.r3.s64 + 348;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x83a761b8
	ctx.lr = 0x831F256C;
	sub_83A761B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f257c
	if (cr0.eq) goto loc_831F257C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f279c
	goto loc_831F279C;
loc_831F257C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,26
	cr6.compare<uint32_t>(ctx.r30.u32, 26, xer);
	// bgt cr6,0x831f272c
	if (cr6.gt) goto loc_831F272C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,17424
	ctx.r12.s64 = ctx.r12.s64 + 17424;
	// lbzx r0,r12,r30
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31969
	ctx.r12.s64 = -2095120384;
	// nop 
	// addi r12,r12,9648
	ctx.r12.s64 = ctx.r12.s64 + 9648;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u32) {
	case 0:
		goto loc_831F2748;
	case 1:
		goto loc_831F25B0;
	case 2:
		goto loc_831F25B0;
	case 3:
		goto loc_831F25B8;
	case 4:
		goto loc_831F2608;
	case 5:
		goto loc_831F272C;
	case 6:
		goto loc_831F272C;
	case 7:
		goto loc_831F272C;
	case 8:
		goto loc_831F272C;
	case 9:
		goto loc_831F272C;
	case 10:
		goto loc_831F272C;
	case 11:
		goto loc_831F272C;
	case 12:
		goto loc_831F272C;
	case 13:
		goto loc_831F272C;
	case 14:
		goto loc_831F272C;
	case 15:
		goto loc_831F272C;
	case 16:
		goto loc_831F26C8;
	case 17:
		goto loc_831F26E0;
	case 18:
		goto loc_831F272C;
	case 19:
		goto loc_831F272C;
	case 20:
		goto loc_831F26FC;
	case 21:
		goto loc_831F2708;
	case 22:
		goto loc_831F2714;
	case 23:
		goto loc_831F2720;
	case 24:
		goto loc_831F272C;
	case 25:
		goto loc_831F272C;
	case 26:
		goto loc_831F2748;
	default:
		return;
	}
loc_831F25B0:
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x831f2784
	goto loc_831F2784;
loc_831F25B8:
	// std r28,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r28.u64);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1758
	ctx.lr = 0x831F25CC;
	sub_831F1758(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x831f25e8
	if (!cr0.eq) goto loc_831F25E8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,18488
	ctx.r4.s64 = ctx.r11.s64 + 18488;
loc_831F25DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F25E0:
	// bl 0x831ea3f0
	ctx.lr = 0x831F25E4;
	sub_831EA3F0(ctx, base);
	// b 0x831f25b0
	goto loc_831F25B0;
loc_831F25E8:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f14c0
	ctx.lr = 0x831F25F4;
	sub_831F14C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831f25b0
	if (cr6.eq) goto loc_831F25B0;
	// li r30,4
	ctx.r30.s64 = 4;
loc_831F2600:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x831f2748
	goto loc_831F2748;
loc_831F2608:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f2600
	if (cr6.eq) goto loc_831F2600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831effb8
	ctx.lr = 0x831F261C;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x831f2600
	if (!cr6.eq) goto loc_831F2600;
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x831f5488
	ctx.lr = 0x831F263C;
	sub_831F5488(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f2694
	if (cr0.eq) goto loc_831F2694;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x831f2658
	if (!cr6.eq) goto loc_831F2658;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,18400
	ctx.r4.s64 = ctx.r11.s64 + 18400;
	// b 0x831f25dc
	goto loc_831F25DC;
loc_831F2658:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x831f2688
	if (!cr6.eq) goto loc_831F2688;
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831f267c
	if (cr6.eq) goto loc_831F267C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,18296
	ctx.r4.s64 = ctx.r11.s64 + 18296;
	// b 0x831f25e0
	goto loc_831F25E0;
loc_831F267C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,18152
	ctx.r4.s64 = ctx.r11.s64 + 18152;
	// b 0x831f25e0
	goto loc_831F25E0;
loc_831F2688:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,18064
	ctx.r4.s64 = ctx.r11.s64 + 18064;
	// b 0x831f25dc
	goto loc_831F25DC;
loc_831F2694:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831f16d8
	ctx.lr = 0x831F26A0;
	sub_831F16D8(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831f26bc
	if (!cr6.eq) goto loc_831F26BC;
	// li r30,26
	ctx.r30.s64 = 26;
	// b 0x831f2748
	goto loc_831F2748;
loc_831F26BC:
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
	// b 0x831f2748
	goto loc_831F2748;
loc_831F26C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_831F26D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1d80
	ctx.lr = 0x831F26D8;
	sub_831F1D80(ctx, base);
loc_831F26D8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831f2740
	goto loc_831F2740;
loc_831F26E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
loc_831F26E8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1ec0
	ctx.lr = 0x831F26F4;
	sub_831F1EC0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831f26d8
	goto loc_831F26D8;
loc_831F26FC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x831f26d0
	goto loc_831F26D0;
loc_831F2708:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x831f26e8
	goto loc_831F26E8;
loc_831F2714:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x831f26d0
	goto loc_831F26D0;
loc_831F2720:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x831f26e8
	goto loc_831F26E8;
loc_831F272C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f2000
	ctx.lr = 0x831F2734;
	sub_831F2000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1588
	ctx.lr = 0x831F2740;
	sub_831F1588(ctx, base);
loc_831F2740:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x831f276c
	if (cr6.eq) goto loc_831F276C;
loc_831F2748:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f2768
	if (cr6.eq) goto loc_831F2768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831effb8
	ctx.lr = 0x831F275C;
	sub_831EFFB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831f276c
	if (!cr6.eq) goto loc_831F276C;
loc_831F2768:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_831F276C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x831f2784
	if (cr6.eq) goto loc_831F2784;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x831f2784
	if (cr6.eq) goto loc_831F2784;
	// cmpwi cr6,r30,26
	cr6.compare<int32_t>(ctx.r30.s32, 26, xer);
	// bne cr6,0x831f2788
	if (!cr6.eq) goto loc_831F2788;
loc_831F2784:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_831F2788:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a761b8
	ctx.lr = 0x831F2798;
	sub_83A761B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_831F279C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F27A4"))) PPC_WEAK_FUNC(sub_831F27A4);
PPC_FUNC_IMPL(__imp__sub_831F27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F27A8"))) PPC_WEAK_FUNC(sub_831F27A8);
PPC_FUNC_IMPL(__imp__sub_831F27A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F27B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2834
	if (!cr6.eq) goto loc_831F2834;
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307e048
	ctx.lr = 0x831F27D8;
	sub_8307E048(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f2834
	if (cr6.eq) goto loc_831F2834;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831f5450
	ctx.lr = 0x831F27E8;
	sub_831F5450(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// beq 0x831f2804
	if (cr0.eq) goto loc_831F2804;
	// bl 0x831f3f80
	ctx.lr = 0x831F2800;
	sub_831F3F80(ctx, base);
	// b 0x831f2808
	goto loc_831F2808;
loc_831F2804:
	// bl 0x831f3ee0
	ctx.lr = 0x831F2808;
	sub_831F3EE0(ctx, base);
loc_831F2808:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831f2834
	if (cr6.eq) goto loc_831F2834;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// ld r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831f2844
	goto loc_831F2844;
loc_831F2834:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_831F2844:
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2850"))) PPC_WEAK_FUNC(sub_831F2850);
PPC_FUNC_IMPL(__imp__sub_831F2850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F2858;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f28c0
	if (!cr6.eq) goto loc_831F28C0;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8307e048
	ctx.lr = 0x831F287C;
	sub_8307E048(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f28c0
	if (cr6.eq) goto loc_831F28C0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x831f3d98
	ctx.lr = 0x831F2894;
	sub_831F3D98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f28c0
	if (cr0.eq) goto loc_831F28C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// ld r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831f28d0
	goto loc_831F28D0;
loc_831F28C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F28D0:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F28DC"))) PPC_WEAK_FUNC(sub_831F28DC);
PPC_FUNC_IMPL(__imp__sub_831F28DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F28E0"))) PPC_WEAK_FUNC(sub_831F28E0);
PPC_FUNC_IMPL(__imp__sub_831F28E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F28E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f29bc
	if (!cr6.eq) goto loc_831F29BC;
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fb290
	ctx.lr = 0x831F2914;
	sub_831FB290(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f29bc
	if (cr6.eq) goto loc_831F29BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2938
	if (!cr6.eq) goto loc_831F2938;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8307e048
	ctx.lr = 0x831F2930;
	sub_8307E048(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x831f29bc
	if (!cr6.eq) goto loc_831F29BC;
loc_831F2938:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// bl 0x831f5e60
	ctx.lr = 0x831F2948;
	sub_831F5E60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f29bc
	if (cr0.eq) goto loc_831F29BC;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x831f2978
	if (cr6.eq) goto loc_831F2978;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// ld r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
loc_831F2978:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f29b4
	if (cr6.eq) goto loc_831F29B4;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ld r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
loc_831F29B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f29c0
	goto loc_831F29C0;
loc_831F29BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F29C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F29C8"))) PPC_WEAK_FUNC(sub_831F29C8);
PPC_FUNC_IMPL(__imp__sub_831F29C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831f28e0
	ctx.lr = 0x831F29E8;
	sub_831F28E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f29f8
	if (cr0.eq) goto loc_831F29F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f2a4c
	goto loc_831F2A4C;
loc_831F29F8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f2a48
	if (cr6.eq) goto loc_831F2A48;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_831F2A3C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831f2a3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F2A3C;
loc_831F2A48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F2A4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F2A60"))) PPC_WEAK_FUNC(sub_831F2A60);
PPC_FUNC_IMPL(__imp__sub_831F2A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F2A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2b50
	if (!cr6.eq) goto loc_831F2B50;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8307e048
	ctx.lr = 0x831F2A8C;
	sub_8307E048(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f2b50
	if (cr6.eq) goto loc_831F2B50;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x831f3d98
	ctx.lr = 0x831F2AA4;
	sub_831F3D98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f2afc
	if (cr0.eq) goto loc_831F2AFC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// ld r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// b 0x831f2be4
	goto loc_831F2BE4;
loc_831F2AFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f2be0
	if (cr6.eq) goto loc_831F2BE0;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_831F2B40:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831f2b40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F2B40;
	// b 0x831f2be0
	goto loc_831F2BE0;
loc_831F2B50:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x831f2b7c
	if (cr6.lt) goto loc_831F2B7C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bgt cr6,0x831f2b7c
	if (cr6.gt) goto loc_831F2B7C;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f29c8
	ctx.lr = 0x831F2B78;
	sub_831F29C8(ctx, base);
	// b 0x831f2be4
	goto loc_831F2BE4;
loc_831F2B7C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18624
	ctx.r4.s64 = ctx.r11.s64 + 18624;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F2B90;
	sub_831EA418(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f2be0
	if (cr6.eq) goto loc_831F2BE0;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_831F2BD4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x831f2bd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F2BD4;
loc_831F2BE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F2BE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2BEC"))) PPC_WEAK_FUNC(sub_831F2BEC);
PPC_FUNC_IMPL(__imp__sub_831F2BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2BF0"))) PPC_WEAK_FUNC(sub_831F2BF0);
PPC_FUNC_IMPL(__imp__sub_831F2BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831F2BF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2ce8
	if (!cr6.eq) goto loc_831F2CE8;
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8307e048
	ctx.lr = 0x831F2C34;
	sub_8307E048(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f2ce8
	if (cr6.eq) goto loc_831F2CE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2ce8
	if (!cr6.eq) goto loc_831F2CE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fb290
	ctx.lr = 0x831F2C50;
	sub_831FB290(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f2ce8
	if (cr6.eq) goto loc_831F2CE8;
	// addi r6,r29,216
	ctx.r6.s64 = ctx.r29.s64 + 216;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,272
	ctx.r3.s64 = ctx.r29.s64 + 272;
	// bl 0x831f4468
	ctx.lr = 0x831F2C6C;
	sub_831F4468(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f2ce8
	if (cr0.eq) goto loc_831F2CE8;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq cr6,0x831f2cc4
	if (cr6.eq) goto loc_831F2CC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// ld r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
loc_831F2CC4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f2ce0
	if (cr6.eq) goto loc_831F2CE0;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// ld r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r11.u64);
loc_831F2CE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f2d4c
	goto loc_831F2D4C;
loc_831F2CE8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f2d34
	if (cr6.eq) goto loc_831F2D34;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_831F2D28:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x831f2d28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831F2D28;
loc_831F2D34:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f2d48
	if (cr6.eq) goto loc_831F2D48;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// std r30,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r30.u64);
loc_831F2D48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F2D4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2D54"))) PPC_WEAK_FUNC(sub_831F2D54);
PPC_FUNC_IMPL(__imp__sub_831F2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2D58"))) PPC_WEAK_FUNC(sub_831F2D58);
PPC_FUNC_IMPL(__imp__sub_831F2D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F2D60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// beq cr6,0x831f2d88
	if (cr6.eq) goto loc_831F2D88;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831f2d94
	if (!cr6.eq) goto loc_831F2D94;
loc_831F2D88:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f17f8
	ctx.lr = 0x831F2D94;
	sub_831F17F8(ctx, base);
loc_831F2D94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f2db8
	if (cr6.eq) goto loc_831F2DB8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18636
	ctx.r4.s64 = ctx.r11.s64 + 18636;
	// bl 0x831ea3f0
	ctx.lr = 0x831F2DB0;
	sub_831EA3F0(ctx, base);
loc_831F2DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f2e84
	goto loc_831F2E84;
loc_831F2DB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1588
	ctx.lr = 0x831F2DC4;
	sub_831F1588(ctx, base);
	// std r30,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r30.u64);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ecce0
	ctx.lr = 0x831F2DD4;
	sub_831ECCE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f2e00
	if (cr0.eq) goto loc_831F2E00;
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r11.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// b 0x831f2e10
	goto loc_831F2E10;
loc_831F2E00:
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// std r30,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r30.u64);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
loc_831F2E10:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x831f5468
	ctx.lr = 0x831F2E18;
	sub_831F5468(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x831f53b8
	ctx.lr = 0x831F2E20;
	sub_831F53B8(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x831f3ad8
	ctx.lr = 0x831F2E28;
	sub_831F3AD8(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// bl 0x831f4550
	ctx.lr = 0x831F2E30;
	sub_831F4550(ctx, base);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// bl 0x831f4580
	ctx.lr = 0x831F2E38;
	sub_831F4580(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x831f4050
	ctx.lr = 0x831F2E40;
	sub_831F4050(ctx, base);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f14b8
	ctx.lr = 0x831F2E4C;
	sub_831F14B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f2db0
	if (!cr0.eq) goto loc_831F2DB0;
	// bl 0x831ef038
	ctx.lr = 0x831F2E58;
	sub_831EF038(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x831f2e6c
	if (cr6.eq) goto loc_831F2E6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_831F2E6C:
	// bl 0x831f00c0
	ctx.lr = 0x831F2E70;
	sub_831F00C0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x831f2540
	ctx.lr = 0x831F2E80;
	sub_831F2540(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831F2E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2E8C"))) PPC_WEAK_FUNC(sub_831F2E8C);
PPC_FUNC_IMPL(__imp__sub_831F2E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F2E90"))) PPC_WEAK_FUNC(sub_831F2E90);
PPC_FUNC_IMPL(__imp__sub_831F2E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831F2E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,48
	ctx.r28.s64 = ctx.r3.s64 + 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x831f5458
	ctx.lr = 0x831F2EB8;
	sub_831F5458(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f2ee4
	if (!cr6.eq) goto loc_831F2EE4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f2bf0
	ctx.lr = 0x831F2ED4;
	sub_831F2BF0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831f2f7c
	if (!cr6.eq) goto loc_831F2F7C;
loc_831F2EDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831f2fb0
	goto loc_831F2FB0;
loc_831F2EE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(ctx.r11.s32, 26, xer);
	// bne cr6,0x831f2f7c
	if (!cr6.eq) goto loc_831F2F7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fb290
	ctx.lr = 0x831F2EF8;
	sub_831FB290(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x831f2f7c
	if (cr6.eq) goto loc_831F2F7C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,272
	ctx.r3.s64 = ctx.r29.s64 + 272;
	// bl 0x831f5cc8
	ctx.lr = 0x831F2F10;
	sub_831F5CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f2f7c
	if (cr0.eq) goto loc_831F2F7C;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x831f2f40
	if (cr6.eq) goto loc_831F2F40;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// ld r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_831F2F40:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f2edc
	if (cr6.eq) goto loc_831F2EDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ld r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 328);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// b 0x831f2edc
	goto loc_831F2EDC;
loc_831F2F7C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831f2f94
	if (cr6.eq) goto loc_831F2F94;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831F2F94;
	sub_831CDCF0(ctx, base);
loc_831F2F94:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f2fac
	if (cr6.eq) goto loc_831F2FAC;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831F2FAC;
	sub_831CDCF0(ctx, base);
loc_831F2FAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F2FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2FB8"))) PPC_WEAK_FUNC(sub_831F2FB8);
PPC_FUNC_IMPL(__imp__sub_831F2FB8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831f2e90
	sub_831F2E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F2FC8"))) PPC_WEAK_FUNC(sub_831F2FC8);
PPC_FUNC_IMPL(__imp__sub_831F2FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f3044
	if (cr6.eq) goto loc_831F3044;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f3044
	if (cr6.eq) goto loc_831F3044;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bgt cr6,0x831f3044
	if (cr6.gt) goto loc_831F3044;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
loc_831F2FF0:
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x831f300c
	if (!cr6.eq) goto loc_831F300C;
	// lwz r9,5396(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5396);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x831f300c
	if (!cr6.eq) goto loc_831F300C;
	// li r10,92
	ctx.r10.s64 = 92;
loc_831F300C:
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,127
	cr6.compare<int32_t>(ctx.r10.s32, 127, xer);
	// ble cr6,0x831f3034
	if (!cr6.gt) goto loc_831F3034;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_831F3034:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x831f2ff0
	if (cr6.lt) goto loc_831F2FF0;
	// blr 
	return;
loc_831F3044:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F304C"))) PPC_WEAK_FUNC(sub_831F304C);
PPC_FUNC_IMPL(__imp__sub_831F304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3050"))) PPC_WEAK_FUNC(sub_831F3050);
PPC_FUNC_IMPL(__imp__sub_831F3050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_831F305C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831f30a8
	if (!cr6.eq) goto loc_831F30A8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,127
	cr6.compare<int32_t>(ctx.r10.s32, 127, xer);
	// ble cr6,0x831f307c
	if (!cr6.gt) goto loc_831F307C;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x831f30ac
	goto loc_831F30AC;
loc_831F307C:
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// bne cr6,0x831f3090
	if (!cr6.eq) goto loc_831F3090;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,47
	cr6.compare<uint32_t>(ctx.r7.u32, 47, xer);
	// beq cr6,0x831f30cc
	if (cr6.eq) goto loc_831F30CC;
loc_831F3090:
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x831f30ac
	if (!cr6.eq) goto loc_831F30AC;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// bne cr6,0x831f30ac
	if (!cr6.eq) goto loc_831F30AC;
	// b 0x831f30cc
	goto loc_831F30CC;
loc_831F30A8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_831F30AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// subf. r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_831F30CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x831f305c
	goto loc_831F305C;
}

__attribute__((alias("__imp__sub_831F30D4"))) PPC_WEAK_FUNC(sub_831F30D4);
PPC_FUNC_IMPL(__imp__sub_831F30D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F30D8"))) PPC_WEAK_FUNC(sub_831F30D8);
PPC_FUNC_IMPL(__imp__sub_831F30D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beqlr 
	if (cr0.eq) return;
	// subfic r7,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r8.s64;
loc_831F30F8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x831f3108
	if (cr6.eq) goto loc_831F3108;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x831f312c
	goto loc_831F312C;
loc_831F3108:
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x831f3118
	if (cr6.eq) goto loc_831F3118;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x831f311c
	if (!cr6.eq) goto loc_831F311C;
loc_831F3118:
	// li r10,0
	ctx.r10.s64 = 0;
loc_831F311C:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// ble cr6,0x831f312c
	if (!cr6.gt) goto loc_831F312C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_831F312C:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne 0x831f30f8
	if (!cr0.eq) goto loc_831F30F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F3148"))) PPC_WEAK_FUNC(sub_831F3148);
PPC_FUNC_IMPL(__imp__sub_831F3148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831F3150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831f3190
	if (cr6.eq) goto loc_831F3190;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f3190
	if (cr6.eq) goto loc_831F3190;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F3178;
	sub_839F8330(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f2fc8
	ctx.lr = 0x831F318C;
	sub_831F2FC8(ctx, base);
	// b 0x831f3194
	goto loc_831F3194;
loc_831F3190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F3194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F319C"))) PPC_WEAK_FUNC(sub_831F319C);
PPC_FUNC_IMPL(__imp__sub_831F319C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F31A0"))) PPC_WEAK_FUNC(sub_831F31A0);
PPC_FUNC_IMPL(__imp__sub_831F31A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831F31A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x831f3238
	if (cr6.eq) goto loc_831F3238;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x839f8330
	ctx.lr = 0x831F31D8;
	sub_839F8330(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831f3230
	if (cr0.eq) goto loc_831F3230;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f3148
	ctx.lr = 0x831F31F0;
	sub_831F3148(ctx, base);
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x831f3230
	if (cr6.lt) goto loc_831F3230;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x831f3230
	if (cr6.eq) goto loc_831F3230;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// beq cr6,0x831f3230
	if (cr6.eq) goto loc_831F3230;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x831f3230
	if (cr6.gt) goto loc_831F3230;
	// li r10,92
	ctx.r10.s64 = 92;
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_831F3230:
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// blt cr6,0x831f32a4
	if (cr6.lt) goto loc_831F32A4;
loc_831F3238:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831f32a4
	if (cr6.eq) goto loc_831F32A4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831f328c
	if (cr6.eq) goto loc_831F328C;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// beq cr6,0x831f3268
	if (cr6.eq) goto loc_831F3268;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x831f328c
	if (!cr6.eq) goto loc_831F328C;
loc_831F3268:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// b 0x831f3284
	goto loc_831F3284;
loc_831F3270:
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// beq cr6,0x831f3280
	if (cr6.eq) goto loc_831F3280;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x831f328c
	if (!cr6.eq) goto loc_831F328C;
loc_831F3280:
	// lbzu r11,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
loc_831F3284:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831f3270
	if (!cr0.eq) goto loc_831F3270;
loc_831F328C:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831f32a4
	if (cr0.eq) goto loc_831F32A4;
	// subf r4,r31,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r31.s64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x831f3148
	ctx.lr = 0x831F32A4;
	sub_831F3148(ctx, base);
loc_831F32A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F32AC"))) PPC_WEAK_FUNC(sub_831F32AC);
PPC_FUNC_IMPL(__imp__sub_831F32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F32B0"))) PPC_WEAK_FUNC(sub_831F32B0);
PPC_FUNC_IMPL(__imp__sub_831F32B0) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x831f32d4
	if (cr6.gt) goto loc_831F32D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f32ec
	goto loc_831F32EC;
loc_831F32D4:
	// bl 0x831f9170
	ctx.lr = 0x831F32D8;
	sub_831F9170(ctx, base);
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bge cr6,0x831f32e4
	if (!cr6.lt) goto loc_831F32E4;
	// li r3,24
	ctx.r3.s64 = 24;
loc_831F32E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a76b90
	ctx.lr = 0x831F32EC;
	sub_83A76B90(ctx, base);
loc_831F32EC:
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

__attribute__((alias("__imp__sub_831F3300"))) PPC_WEAK_FUNC(sub_831F3300);
PPC_FUNC_IMPL(__imp__sub_831F3300) {
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
	// addi r31,r11,5400
	ctx.r31.s64 = ctx.r11.s64 + 5400;
	// lwz r11,5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5400);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831f3338
	if (!cr6.eq) goto loc_831F3338;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18764
	ctx.r4.s64 = ctx.r11.s64 + 18764;
	// bl 0x831ea3f0
	ctx.lr = 0x831F3334;
	sub_831EA3F0(ctx, base);
	// b 0x831f335c
	goto loc_831F335C;
loc_831F3338:
	// bl 0x83102db0
	ctx.lr = 0x831F333C;
	sub_83102DB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831f3354
	if (cr6.eq) goto loc_831F3354;
	// bl 0x83a76bc0
	ctx.lr = 0x831F334C;
	sub_83A76BC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831F3354:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831F335C:
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

__attribute__((alias("__imp__sub_831F3370"))) PPC_WEAK_FUNC(sub_831F3370);
PPC_FUNC_IMPL(__imp__sub_831F3370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,5404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f338c
	if (!cr6.eq) goto loc_831F338C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831F338C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83a76db0
	sub_83A76DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3394"))) PPC_WEAK_FUNC(sub_831F3394);
PPC_FUNC_IMPL(__imp__sub_831F3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3398"))) PPC_WEAK_FUNC(sub_831F3398);
PPC_FUNC_IMPL(__imp__sub_831F3398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,5404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83a76e98
	sub_83A76E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F33B4"))) PPC_WEAK_FUNC(sub_831F33B4);
PPC_FUNC_IMPL(__imp__sub_831F33B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F33B8"))) PPC_WEAK_FUNC(sub_831F33B8);
PPC_FUNC_IMPL(__imp__sub_831F33B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f33d8
	if (!cr6.eq) goto loc_831F33D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F33D8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F33E8"))) PPC_WEAK_FUNC(sub_831F33E8);
PPC_FUNC_IMPL(__imp__sub_831F33E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f33fc
	if (!cr6.eq) goto loc_831F33FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F33FC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3408"))) PPC_WEAK_FUNC(sub_831F3408);
PPC_FUNC_IMPL(__imp__sub_831F3408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3420
	if (!cr6.eq) goto loc_831F3420;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F3420:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3430"))) PPC_WEAK_FUNC(sub_831F3430);
PPC_FUNC_IMPL(__imp__sub_831F3430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3458
	if (!cr6.eq) goto loc_831F3458;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F3458:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3468"))) PPC_WEAK_FUNC(sub_831F3468);
PPC_FUNC_IMPL(__imp__sub_831F3468) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3488
	if (!cr6.eq) goto loc_831F3488;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f3498
	goto loc_831F3498;
loc_831F3488:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F3494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F3498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F34A8"))) PPC_WEAK_FUNC(sub_831F34A8);
PPC_FUNC_IMPL(__imp__sub_831F34A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f34c8
	if (!cr6.eq) goto loc_831F34C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F34C8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F34D8"))) PPC_WEAK_FUNC(sub_831F34D8);
PPC_FUNC_IMPL(__imp__sub_831F34D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f34fc
	if (!cr6.eq) goto loc_831F34FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F34FC:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F350C"))) PPC_WEAK_FUNC(sub_831F350C);
PPC_FUNC_IMPL(__imp__sub_831F350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3510"))) PPC_WEAK_FUNC(sub_831F3510);
PPC_FUNC_IMPL(__imp__sub_831F3510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3530
	if (!cr6.eq) goto loc_831F3530;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F3530:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3540"))) PPC_WEAK_FUNC(sub_831F3540);
PPC_FUNC_IMPL(__imp__sub_831F3540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3554
	if (!cr6.eq) goto loc_831F3554;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F3554:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3560"))) PPC_WEAK_FUNC(sub_831F3560);
PPC_FUNC_IMPL(__imp__sub_831F3560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3580
	if (!cr6.eq) goto loc_831F3580;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F3580:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3590"))) PPC_WEAK_FUNC(sub_831F3590);
PPC_FUNC_IMPL(__imp__sub_831F3590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f35b4
	if (!cr6.eq) goto loc_831F35B4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F35B4:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F35C4"))) PPC_WEAK_FUNC(sub_831F35C4);
PPC_FUNC_IMPL(__imp__sub_831F35C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F35C8"))) PPC_WEAK_FUNC(sub_831F35C8);
PPC_FUNC_IMPL(__imp__sub_831F35C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f35e8
	if (!cr6.eq) goto loc_831F35E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F35E8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F35F8"))) PPC_WEAK_FUNC(sub_831F35F8);
PPC_FUNC_IMPL(__imp__sub_831F35F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3618
	if (!cr6.eq) goto loc_831F3618;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F3618:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3628"))) PPC_WEAK_FUNC(sub_831F3628);
PPC_FUNC_IMPL(__imp__sub_831F3628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f363c
	if (!cr6.eq) goto loc_831F363C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_831F363C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831F3648"))) PPC_WEAK_FUNC(sub_831F3648);
PPC_FUNC_IMPL(__imp__sub_831F3648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F3650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,5400
	ctx.r30.s64 = ctx.r11.s64 + 5400;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5400);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831f3688
	if (cr6.eq) goto loc_831F3688;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18908
	ctx.r4.s64 = ctx.r11.s64 + 18908;
	// bl 0x831ea3f0
	ctx.lr = 0x831F3684;
	sub_831EA3F0(ctx, base);
	// b 0x831f371c
	goto loc_831F371C;
loc_831F3688:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x831f32b0
	ctx.lr = 0x831F3698;
	sub_831F32B0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x831f36b8
	if (!cr6.lt) goto loc_831F36B8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18896
	ctx.r4.s64 = ctx.r11.s64 + 18896;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F36B4;
	sub_831EA418(ctx, base);
	// b 0x831f3718
	goto loc_831F3718;
loc_831F36B8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831f371c
	if (cr6.eq) goto loc_831F371C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x831f371c
	if (!cr6.gt) goto loc_831F371C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x831F36D8;
	sub_831CDCF0(ctx, base);
	// bl 0x831f9170
	ctx.lr = 0x831F36DC;
	sub_831F9170(ctx, base);
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bge cr6,0x831f36e8
	if (!cr6.lt) goto loc_831F36E8;
	// li r3,24
	ctx.r3.s64 = 24;
loc_831F36E8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a76d20
	ctx.lr = 0x831F36F8;
	sub_83A76D20(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x83572958
	ctx.lr = 0x831F3700;
	sub_83572958(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f371c
	if (cr0.eq) goto loc_831F371C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18844
	ctx.r4.s64 = ctx.r11.s64 + 18844;
	// bl 0x831ea3f0
	ctx.lr = 0x831F3718;
	sub_831EA3F0(ctx, base);
loc_831F3718:
	// bl 0x831f3300
	ctx.lr = 0x831F371C;
	sub_831F3300(ctx, base);
loc_831F371C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3724"))) PPC_WEAK_FUNC(sub_831F3724);
PPC_FUNC_IMPL(__imp__sub_831F3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831F3728"))) PPC_WEAK_FUNC(sub_831F3728);
PPC_FUNC_IMPL(__imp__sub_831F3728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831F3730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,5408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5408);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831f37b0
	if (!cr6.eq) goto loc_831F37B0;
	// bl 0x831ea6f8
	ctx.lr = 0x831F375C;
	sub_831EA6F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831f3780
	if (!cr0.lt) goto loc_831F3780;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18832
	ctx.r4.s64 = ctx.r11.s64 + 18832;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x831F3778;
	sub_831EA418(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x831f3810
	goto loc_831F3810;
loc_831F3780:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f7a68
	ctx.lr = 0x831F3790;
	sub_831F7A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f37cc
	if (!cr0.eq) goto loc_831F37CC;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,18820
	ctx.r4.s64 = ctx.r11.s64 + 18820;
	// bl 0x831ea418
	ctx.lr = 0x831F37A8;
	sub_831EA418(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x831f3810
	goto loc_831F3810;
loc_831F37B0:
	// lwz r11,5408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5408);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831F37C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f3810
	if (!cr0.eq) goto loc_831F3810;
loc_831F37CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x831f37f0
	if (!cr6.eq) goto loc_831F37F0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18988
	ctx.r4.s64 = ctx.r11.s64 + 18988;
	// bl 0x831ea400
	ctx.lr = 0x831F37EC;
	sub_831EA400(ctx, base);
	// b 0x831f380c
	goto loc_831F380C;
loc_831F37F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831f3810
	if (!cr6.eq) goto loc_831F3810;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,18952
	ctx.r4.s64 = ctx.r11.s64 + 18952;
	// bl 0x831ea3f0
	ctx.lr = 0x831F380C;
	sub_831EA3F0(ctx, base);
loc_831F380C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_831F3810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831F3818"))) PPC_WEAK_FUNC(sub_831F3818);
PPC_FUNC_IMPL(__imp__sub_831F3818) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F383C;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f384c
	if (!cr0.lt) goto loc_831F384C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f3858
	goto loc_831F3858;
loc_831F384C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77188
	ctx.lr = 0x831F3858;
	sub_83A77188(ctx, base);
loc_831F3858:
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

__attribute__((alias("__imp__sub_831F3870"))) PPC_WEAK_FUNC(sub_831F3870);
PPC_FUNC_IMPL(__imp__sub_831F3870) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F3894;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f38a4
	if (!cr0.lt) goto loc_831F38A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f38b0
	goto loc_831F38B0;
loc_831F38A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a77098
	ctx.lr = 0x831F38B0;
	sub_83A77098(ctx, base);
loc_831F38B0:
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

__attribute__((alias("__imp__sub_831F38C8"))) PPC_WEAK_FUNC(sub_831F38C8);
PPC_FUNC_IMPL(__imp__sub_831F38C8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a76f50
	ctx.lr = 0x831F38EC;
	sub_83A76F50(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x831f38fc
	if (!cr0.lt) goto loc_831F38FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831f3908
	goto loc_831F3908;
loc_831F38FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76fc8
	ctx.lr = 0x831F3908;
	sub_83A76FC8(ctx, base);
loc_831F3908:
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

__attribute__((alias("__imp__sub_831F3920"))) PPC_WEAK_FUNC(sub_831F3920);
PPC_FUNC_IMPL(__imp__sub_831F3920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831f3938
	if (!cr6.eq) goto loc_831F3938;
loc_831F3930:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831F3938:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x831f3954
	if (cr6.lt) goto loc_831F3954;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// bgt cr6,0x831f3954
	if (cr6.gt) goto loc_831F3954;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x831f3960
	goto loc_831F3960;
loc_831F3954:
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(ctx.r11.s32, 92, xer);
	// bne cr6,0x831f3960
	if (!cr6.eq) goto loc_831F3960;
	// li r3,47
	ctx.r3.s64 = 47;
loc_831F3960:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831f397c
	if (cr6.lt) goto loc_831F397C;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x831f397c
	if (cr6.gt) goto loc_831F397C;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// b 0x831f3988
	goto loc_831F3988;
loc_831F397C:
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// bne cr6,0x831f3988
	if (!cr6.eq) goto loc_831F3988;
	// li r4,47
	ctx.r4.s64 = 47;
loc_831F3988:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x831f3930
	if (cr6.eq) goto loc_831F3930;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831F39A8"))) PPC_WEAK_FUNC(sub_831F39A8);
PPC_FUNC_IMPL(__imp__sub_831F39A8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831f39dc
	if (!cr6.eq) goto loc_831F39DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831f3abc
	goto loc_831F3ABC;
loc_831F39DC:
	// li r4,47
	ctx.r4.s64 = 47;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x831f3920
	ctx.lr = 0x831F39E8;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f39f4
	if (!cr0.eq) goto loc_831F39F4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_831F39F4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831f3a64
	if (cr6.eq) goto loc_831F3A64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831f3a64
	if (cr0.eq) goto loc_831F3A64;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x831f3a20
	if (!cr6.eq) goto loc_831F3A20;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x831f3a20
	goto loc_831F3A20;
loc_831F3A18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_831F3A20:
	// lbzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// lbzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x831f3920
	ctx.lr = 0x831F3A34;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f3a18
	if (cr0.eq) goto loc_831F3A18;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x831f3abc
	if (!cr6.gt) goto loc_831F3ABC;
	// extsb. r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831f3abc
	if (!cr0.eq) goto loc_831F3ABC;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x831f3920
	ctx.lr = 0x831F3A58;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f3abc
	if (!cr0.eq) goto loc_831F3ABC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_831F3A64:
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x831f3920
	ctx.lr = 0x831F3A7C;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831f3abc
	if (!cr0.eq) goto loc_831F3ABC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_831F3A88:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831f3a98
	if (!cr0.eq) goto loc_831F3A98;
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831f3ab8
	if (cr0.eq) goto loc_831F3AB8;
loc_831F3A98:
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzu r8,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x831f3920
	ctx.lr = 0x831F3AAC;
	sub_831F3920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831f3a88
	if (cr0.eq) goto loc_831F3A88;
	// b 0x831f3abc
	goto loc_831F3ABC;
loc_831F3AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831F3ABC:
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

