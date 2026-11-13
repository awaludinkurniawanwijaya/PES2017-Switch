#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A58E1C"))) PPC_WEAK_FUNC(sub_83A58E1C);
PPC_FUNC_IMPL(__imp__sub_83A58E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58E20"))) PPC_WEAK_FUNC(sub_83A58E20);
PPC_FUNC_IMPL(__imp__sub_83A58E20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a58e60
	if (!cr6.eq) goto loc_83A58E60;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83a7bda0
	ctx.lr = 0x83A58E50;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a58e60
	if (!cr6.eq) goto loc_83A58E60;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_83A58E60:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a58e74
	if (!cr6.eq) goto loc_83A58E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58ce0
	ctx.lr = 0x83A58E74;
	sub_83A58CE0(ctx, base);
loc_83A58E74:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a58e88
	if (!cr6.eq) goto loc_83A58E88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58888
	ctx.lr = 0x83A58E88;
	sub_83A58888(ctx, base);
loc_83A58E88:
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

__attribute__((alias("__imp__sub_83A58E9C"))) PPC_WEAK_FUNC(sub_83A58E9C);
PPC_FUNC_IMPL(__imp__sub_83A58E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58EA0"))) PPC_WEAK_FUNC(sub_83A58EA0);
PPC_FUNC_IMPL(__imp__sub_83A58EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,-16728
	ctx.r3.s64 = ctx.r11.s64 + -16728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58EAC"))) PPC_WEAK_FUNC(sub_83A58EAC);
PPC_FUNC_IMPL(__imp__sub_83A58EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58EB0"))) PPC_WEAK_FUNC(sub_83A58EB0);
PPC_FUNC_IMPL(__imp__sub_83A58EB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,368
	ctx.r3.s64 = 368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58EB8"))) PPC_WEAK_FUNC(sub_83A58EB8);
PPC_FUNC_IMPL(__imp__sub_83A58EB8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-13348
	ctx.r5.s64 = ctx.r11.s64 + -13348;
	// li r4,340
	ctx.r4.s64 = 340;
	// bl 0x83a78940
	ctx.lr = 0x83A58EE4;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a58f2c
	if (cr6.eq) goto loc_83A58F2C;
	// li r5,340
	ctx.r5.s64 = 340;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A58F00;
	sub_831CDCF0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r6.u32);
loc_83A58F2C:
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

__attribute__((alias("__imp__sub_83A58F44"))) PPC_WEAK_FUNC(sub_83A58F44);
PPC_FUNC_IMPL(__imp__sub_83A58F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58F48"))) PPC_WEAK_FUNC(sub_83A58F48);
PPC_FUNC_IMPL(__imp__sub_83A58F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x83a78a48
	sub_83A78A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A58F60"))) PPC_WEAK_FUNC(sub_83A58F60);
PPC_FUNC_IMPL(__imp__sub_83A58F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58F64"))) PPC_WEAK_FUNC(sub_83A58F64);
PPC_FUNC_IMPL(__imp__sub_83A58F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58F68"))) PPC_WEAK_FUNC(sub_83A58F68);
PPC_FUNC_IMPL(__imp__sub_83A58F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,324(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58F70"))) PPC_WEAK_FUNC(sub_83A58F70);
PPC_FUNC_IMPL(__imp__sub_83A58F70) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58F7C"))) PPC_WEAK_FUNC(sub_83A58F7C);
PPC_FUNC_IMPL(__imp__sub_83A58F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58F80"))) PPC_WEAK_FUNC(sub_83A58F80);
PPC_FUNC_IMPL(__imp__sub_83A58F80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A58F8C"))) PPC_WEAK_FUNC(sub_83A58F8C);
PPC_FUNC_IMPL(__imp__sub_83A58F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A58F90"))) PPC_WEAK_FUNC(sub_83A58F90);
PPC_FUNC_IMPL(__imp__sub_83A58F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A58F98;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r28,r3,120
	ctx.r28.s64 = ctx.r3.s64 + 120;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A58FC4;
	sub_83A7BD70(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a590b8
	if (cr6.eq) goto loc_83A590B8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A58FDC;
	sub_83A7A4F0(ctx, base);
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a59000
	if (cr6.eq) goto loc_83A59000;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A58FF8;
	sub_83A7BD90(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A59000:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83a7a680
	ctx.lr = 0x83A59010;
	sub_83A7A680(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7d6d8
	ctx.lr = 0x83A5901C;
	sub_83A7D6D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7cf88
	ctx.lr = 0x83A59024;
	sub_83A7CF88(ctx, base);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x83a7cf98
	ctx.lr = 0x83A59034;
	sub_83A7CF98(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7cfa0
	ctx.lr = 0x83A59048;
	sub_83A7CFA0(ctx, base);
	// lhz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// bl 0x83a7d060
	ctx.lr = 0x83A5905C;
	sub_83A7D060(ctx, base);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a59098
	if (cr6.eq) goto loc_83A59098;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
loc_83A59070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,-14(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + -14);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzu r6,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// bl 0x83a7cfd0
	ctx.lr = 0x83A59084;
	sub_83A7CFD0(ctx, base);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a59070
	if (cr6.lt) goto loc_83A59070;
loc_83A59098:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A590A8;
	sub_83A7BD90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,324(r27)
	PPC_STORE_U32(ctx.r27.u32 + 324, ctx.r11.u32);
	// stw r10,332(r27)
	PPC_STORE_U32(ctx.r27.u32 + 332, ctx.r10.u32);
loc_83A590B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A590C0"))) PPC_WEAK_FUNC(sub_83A590C0);
PPC_FUNC_IMPL(__imp__sub_83A590C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83A590C8;
	__savegprlr_19(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r22,r3,120
	ctx.r22.s64 = ctx.r3.s64 + 120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsb r26,r10
	ctx.r26.s64 = ctx.r10.s8;
	// lwz r20,8(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A59100;
	sub_83A7BD70(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a59358
	if (cr6.eq) goto loc_83A59358;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A59118;
	sub_83A7A4F0(ctx, base);
	// lbz r10,191(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 191);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a59348
	if (!cr6.eq) goto loc_83A59348;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A59134;
	sub_83A7A680(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,32769
	cr6.compare<uint32_t>(ctx.r7.u32, 32769, xer);
	// bne cr6,0x83a59174
	if (!cr6.eq) goto loc_83A59174;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A59164;
	sub_83A7BD90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,324(r27)
	PPC_STORE_U32(ctx.r27.u32 + 324, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A59174:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,18
	ctx.r10.s64 = 18;
	// lwz r9,328(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu r8,r11,r10
	ctx.r8.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// divwu r7,r8,r26
	ctx.r7.u32 = PPCDivide(ctx.r8.u32, ctx.r26.u32);
	// twllei r26,0
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r24,r6,5,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// beq cr6,0x83a591c8
	if (cr6.eq) goto loc_83A591C8;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83A591A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83a7bda0
	ctx.lr = 0x83A591B0;
	sub_83A7BDA0(ctx, base);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// blt cr6,0x83a592ac
	if (cr6.lt) goto loc_83A592AC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// blt cr6,0x83a591a4
	if (cr6.lt) goto loc_83A591A4;
loc_83A591C8:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a5923c
	if (cr6.eq) goto loc_83A5923C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// subf r23,r11,r20
	ctx.r23.s64 = ctx.r20.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A591E4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r23,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r29.u32);
	// bl 0x83a7bd70
	ctx.lr = 0x83A59200;
	sub_83A7BD70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// blt cr6,0x83a59290
	if (cr6.lt) goto loc_83A59290;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r8,328(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// divwu r25,r11,r8
	ctx.r25.u32 = PPCDivide(ctx.r11.u32, ctx.r8.u32);
	// twllei r8,0
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// blt cr6,0x83a591e4
	if (cr6.lt) goto loc_83A591E4;
loc_83A5923C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5925c
	if (cr6.eq) goto loc_83A5925C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5925C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5925C:
	// lwz r11,336(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 336);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x83a592c4
	if (!cr6.eq) goto loc_83A592C4;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x83a7cac8
	ctx.lr = 0x83A5928C;
	sub_83A7CAC8(ctx, base);
	// b 0x83a592cc
	goto loc_83A592CC;
loc_83A59290:
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r9,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r20.u32);
	// bl 0x83a7bd80
	ctx.lr = 0x83A592AC;
	sub_83A7BD80(ctx, base);
loc_83A592AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83a7bd80
	ctx.lr = 0x83A592BC;
	sub_83A7BD80(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A592C4:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// bl 0x83a7cca8
	ctx.lr = 0x83A592CC;
	sub_83A7CCA8(ctx, base);
loc_83A592CC:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,332(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 332);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a592e8
	if (!cr6.gt) goto loc_83A592E8;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_83A592E8:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r11,332(r27)
	PPC_STORE_U32(ctx.r27.u32 + 332, ctx.r11.u32);
	// beq cr6,0x83a59348
	if (cr6.eq) goto loc_83A59348;
	// addi r31,r20,-4
	ctx.r31.s64 = ctx.r20.s64 + -4;
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_83A59304:
	// lwz r11,328(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 328);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mullw r4,r11,r28
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7bdb0
	ctx.lr = 0x83A5931C;
	sub_83A7BDB0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5932C;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5933C;
	sub_83A7BD80(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x83a59304
	if (!cr0.eq) goto loc_83A59304;
loc_83A59348:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A59358;
	sub_83A7BD90(ctx, base);
loc_83A59358:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59360"))) PPC_WEAK_FUNC(sub_83A59360);
PPC_FUNC_IMPL(__imp__sub_83A59360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A59368;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r28,r3,120
	ctx.r28.s64 = ctx.r3.s64 + 120;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a594a8
	if (!cr6.eq) goto loc_83A594A8;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A59398;
	sub_831CDCF0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// li r27,0
	ctx.r27.s64 = 0;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// li r8,32
	ctx.r8.s64 = 32;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// li r7,500
	ctx.r7.s64 = 500;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r6,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r6.u8);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// sth r7,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r7.u16);
	// ble cr6,0x83a59414
	if (!cr6.gt) goto loc_83A59414;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
loc_83A593F8:
	// sth r27,-14(r10)
	PPC_STORE_U16(ctx.r10.u32 + -14, ctx.r27.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthu r27,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r10.u32 = ea;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a593f8
	if (cr6.lt) goto loc_83A593F8;
loc_83A59414:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// bl 0x83a7cf88
	ctx.lr = 0x83A59424;
	sub_83A7CF88(ctx, base);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x83a7cf98
	ctx.lr = 0x83A59434;
	sub_83A7CF98(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7cfa0
	ctx.lr = 0x83A59448;
	sub_83A7CFA0(ctx, base);
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x83a7d060
	ctx.lr = 0x83A5945C;
	sub_83A7D060(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83a5949c
	if (!cr6.gt) goto loc_83A5949C;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
loc_83A59474:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,-14(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + -14);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhzu r6,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// bl 0x83a7cfd0
	ctx.lr = 0x83A59488;
	sub_83A7CFD0(ctx, base);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a59474
	if (cr6.lt) goto loc_83A59474;
loc_83A5949C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,332(r26)
	PPC_STORE_U32(ctx.r26.u32 + 332, ctx.r27.u32);
	// stw r11,324(r26)
	PPC_STORE_U32(ctx.r26.u32 + 324, ctx.r11.u32);
loc_83A594A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A594B0"))) PPC_WEAK_FUNC(sub_83A594B0);
PPC_FUNC_IMPL(__imp__sub_83A594B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a594f0
	if (!cr6.eq) goto loc_83A594F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83a7bda0
	ctx.lr = 0x83A594E0;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a594f0
	if (!cr6.eq) goto loc_83A594F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
loc_83A594F0:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a59504
	if (!cr6.eq) goto loc_83A59504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a58f90
	ctx.lr = 0x83A59504;
	sub_83A58F90(ctx, base);
loc_83A59504:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a59518
	if (!cr6.eq) goto loc_83A59518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a590c0
	ctx.lr = 0x83A59518;
	sub_83A590C0(ctx, base);
loc_83A59518:
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

__attribute__((alias("__imp__sub_83A5952C"))) PPC_WEAK_FUNC(sub_83A5952C);
PPC_FUNC_IMPL(__imp__sub_83A5952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59530"))) PPC_WEAK_FUNC(sub_83A59530);
PPC_FUNC_IMPL(__imp__sub_83A59530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a59570
	ctx.lr = 0x83A59548;
	sub_83A59570(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x83a595a8
	ctx.lr = 0x83A59550;
	sub_83A595A8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a4ced0
	ctx.lr = 0x83A5955C;
	sub_83A4CED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5956C"))) PPC_WEAK_FUNC(sub_83A5956C);
PPC_FUNC_IMPL(__imp__sub_83A5956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59570"))) PPC_WEAK_FUNC(sub_83A59570);
PPC_FUNC_IMPL(__imp__sub_83A59570) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-13192
	ctx.r9.s64 = ctx.r11.s64 + -13192;
	// stw r9,-10628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10628, ctx.r9.u32);
	// bl 0x83a5c040
	ctx.lr = 0x83A59590;
	sub_83A5C040(ctx, base);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// addi r3,r8,-16688
	ctx.r3.s64 = ctx.r8.s64 + -16688;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A595A8"))) PPC_WEAK_FUNC(sub_83A595A8);
PPC_FUNC_IMPL(__imp__sub_83A595A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,-16552
	ctx.r3.s64 = ctx.r11.s64 + -16552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A595B4"))) PPC_WEAK_FUNC(sub_83A595B4);
PPC_FUNC_IMPL(__imp__sub_83A595B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A595B8"))) PPC_WEAK_FUNC(sub_83A595B8);
PPC_FUNC_IMPL(__imp__sub_83A595B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r10,r11,8320
	ctx.r10.s64 = ctx.r11.s64 + 8320;
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A595D8"))) PPC_WEAK_FUNC(sub_83A595D8);
PPC_FUNC_IMPL(__imp__sub_83A595D8) {
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
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// lwz r11,-10612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10612);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-10612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10612, ctx.r11.u32);
	// bne 0x83a59604
	if (!cr0.eq) goto loc_83A59604;
	// bl 0x83a5e088
	ctx.lr = 0x83A595FC;
	sub_83A5E088(ctx, base);
	// bl 0x83a5da10
	ctx.lr = 0x83A59600;
	sub_83A5DA10(ctx, base);
	// bl 0x83a5ca90
	ctx.lr = 0x83A59604;
	sub_83A5CA90(ctx, base);
loc_83A59604:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59614"))) PPC_WEAK_FUNC(sub_83A59614);
PPC_FUNC_IMPL(__imp__sub_83A59614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59618"))) PPC_WEAK_FUNC(sub_83A59618);
PPC_FUNC_IMPL(__imp__sub_83A59618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A59620;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a59650
	if (!cr6.eq) goto loc_83A59650;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r8,r11,-10624
	ctx.r8.s64 = ctx.r11.s64 + -10624;
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x83a59664
	goto loc_83A59664;
loc_83A59650:
	// lis r8,-31741
	ctx.r8.s64 = -2080178176;
	// addi r7,r8,-10624
	ctx.r7.s64 = ctx.r8.s64 + -10624;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
loc_83A59664:
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r10,15
	ctx.r11.s64 = ctx.r10.s64 + 15;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r11,127
	ctx.r8.s64 = ctx.r11.s64 + 127;
	// addi r7,r10,127
	ctx.r7.s64 = ctx.r10.s64 + 127;
	// rlwinm r6,r8,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r5,r7,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r4,r9,3,1,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7FFFFFF8;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r28,r11,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x83a7c0e8
	ctx.lr = 0x83A596BC;
	sub_83A7C0E8(ctx, base);
	// mulli r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 * 168;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r29,r11,476
	ctx.r29.s64 = ctx.r11.s64 + 476;
	// beq cr6,0x83a596e0
	if (cr6.eq) goto loc_83A596E0;
	// addi r11,r28,152
	ctx.r11.s64 = ctx.r28.s64 + 152;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_83A596D8:
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x83a596d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A596D8;
loc_83A596E0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a7c0e8
	ctx.lr = 0x83A596F8;
	sub_83A7C0E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a5c0f0
	ctx.lr = 0x83A59700;
	sub_83A5C0F0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59720"))) PPC_WEAK_FUNC(sub_83A59720);
PPC_FUNC_IMPL(__imp__sub_83A59720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a59734
	if (cr6.eq) goto loc_83A59734;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x83a59738
	goto loc_83A59738;
loc_83A59734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A59738:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x83a5e130
	sub_83A5E130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59740"))) PPC_WEAK_FUNC(sub_83A59740);
PPC_FUNC_IMPL(__imp__sub_83A59740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// ble cr6,0x83a5975c
	if (!cr6.gt) goto loc_83A5975C;
	// li r3,5
	ctx.r3.s64 = 5;
loc_83A5975C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a59794
	if (!cr6.gt) goto loc_83A59794;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// lis r9,23130
	ctx.r9.s64 = 1515847680;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// ori r9,r9,23130
	ctx.r9.u64 = ctx.r9.u64 | 23130;
loc_83A59778:
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stwu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a59778
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A59778;
loc_83A59794:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a5e6c0
	ctx.lr = 0x83A5979C;
	sub_83A5E6C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A597AC"))) PPC_WEAK_FUNC(sub_83A597AC);
PPC_FUNC_IMPL(__imp__sub_83A597AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A597B0"))) PPC_WEAK_FUNC(sub_83A597B0);
PPC_FUNC_IMPL(__imp__sub_83A597B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A597B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,420(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r26,84(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// beq cr6,0x83a597f4
	if (cr6.eq) goto loc_83A597F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A597F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
loc_83A597F4:
	// lwz r4,436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a5980c
	if (cr6.eq) goto loc_83A5980C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A59808;
	sub_83A78A48(ctx, base);
	// stw r28,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r28.u32);
loc_83A5980C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a59820
	if (cr6.eq) goto loc_83A59820;
	// bl 0x83a7bd40
	ctx.lr = 0x83A5981C;
	sub_83A7BD40(ctx, base);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_83A59820:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a59878
	if (cr6.eq) goto loc_83A59878;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a5986c
	if (!cr6.gt) goto loc_83A5986C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83A59840:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a59858
	if (cr6.eq) goto loc_83A59858;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A59858;
	sub_83A78A48(ctx, base);
loc_83A59858:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,168
	ctx.r30.s64 = ctx.r30.s64 + 168;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a59840
	if (cr6.lt) goto loc_83A59840;
loc_83A5986C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83a78a48
	ctx.lr = 0x83A59878;
	sub_83A78A48(ctx, base);
loc_83A59878:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5988c
	if (cr6.eq) goto loc_83A5988C;
	// bl 0x83a7bd40
	ctx.lr = 0x83A59888;
	sub_83A7BD40(ctx, base);
	// stw r28,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r28.u32);
loc_83A5988C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a5989c
	if (cr6.eq) goto loc_83A5989C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a5e0b0
	ctx.lr = 0x83A5989C;
	sub_83A5E0B0(ctx, base);
loc_83A5989C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a78a48
	ctx.lr = 0x83A598A8;
	sub_83A78A48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A598B0"))) PPC_WEAK_FUNC(sub_83A598B0);
PPC_FUNC_IMPL(__imp__sub_83A598B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r4.u32);
	// stw r5,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A598BC"))) PPC_WEAK_FUNC(sub_83A598BC);
PPC_FUNC_IMPL(__imp__sub_83A598BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A598C0"))) PPC_WEAK_FUNC(sub_83A598C0);
PPC_FUNC_IMPL(__imp__sub_83A598C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A598C8;
	__savegprlr_22(ctx, base);
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_83A598E0:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a59900
	if (cr6.eq) goto loc_83A59900;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83a598e0
	if (cr6.lt) goto loc_83A598E0;
	// b 0x83a59904
	goto loc_83A59904;
loc_83A59900:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_83A59904:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x83a59990
	if (!cr6.eq) goto loc_83A59990;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r10,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r10.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r29,44(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r27,52(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r26,56(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r25,60(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r23,16(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r22,8(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r24,12(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r24,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r24.u32);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r25,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r25.u32);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
loc_83A59990:
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,444(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83a599b8
	if (cr6.gt) goto loc_83A599B8;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A599B8:
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A599C8"))) PPC_WEAK_FUNC(sub_83A599C8);
PPC_FUNC_IMPL(__imp__sub_83A599C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A599EC;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a59a0c
	if (cr6.eq) goto loc_83A59A0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83a59a10
	if (!cr6.eq) goto loc_83A59A10;
loc_83A59A0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A59A10:
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

__attribute__((alias("__imp__sub_83A59A24"))) PPC_WEAK_FUNC(sub_83A59A24);
PPC_FUNC_IMPL(__imp__sub_83A59A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59A28"))) PPC_WEAK_FUNC(sub_83A59A28);
PPC_FUNC_IMPL(__imp__sub_83A59A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A59A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// bl 0x83a7bd60
	ctx.lr = 0x83A59A78;
	sub_83A7BD60(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83a59adc
	if (!cr6.gt) goto loc_83A59ADC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83A59A94:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,152
	ctx.r5.s64 = 152;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A59AB8;
	sub_831CDCF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A59AC8;
	sub_83A7BD90(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,168
	ctx.r29.s64 = ctx.r29.s64 + 168;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a59a94
	if (cr6.lt) goto loc_83A59A94;
loc_83A59ADC:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59AFC"))) PPC_WEAK_FUNC(sub_83A59AFC);
PPC_FUNC_IMPL(__imp__sub_83A59AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59B00"))) PPC_WEAK_FUNC(sub_83A59B00);
PPC_FUNC_IMPL(__imp__sub_83A59B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83a5f0f0
	sub_83A5F0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59B1C"))) PPC_WEAK_FUNC(sub_83A59B1C);
PPC_FUNC_IMPL(__imp__sub_83A59B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59B20"))) PPC_WEAK_FUNC(sub_83A59B20);
PPC_FUNC_IMPL(__imp__sub_83A59B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59B28"))) PPC_WEAK_FUNC(sub_83A59B28);
PPC_FUNC_IMPL(__imp__sub_83A59B28) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59B34"))) PPC_WEAK_FUNC(sub_83A59B34);
PPC_FUNC_IMPL(__imp__sub_83A59B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59B38"))) PPC_WEAK_FUNC(sub_83A59B38);
PPC_FUNC_IMPL(__imp__sub_83A59B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59B40"))) PPC_WEAK_FUNC(sub_83A59B40);
PPC_FUNC_IMPL(__imp__sub_83A59B40) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A59B60;
	sub_83A7BDA0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// divwu r3,r3,r11
	ctx.r3.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// twllei r11,0
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

__attribute__((alias("__imp__sub_83A59B80"))) PPC_WEAK_FUNC(sub_83A59B80);
PPC_FUNC_IMPL(__imp__sub_83A59B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A59B88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a59c2c
	if (cr6.eq) goto loc_83A59C2C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a59c2c
	if (cr6.eq) goto loc_83A59C2C;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a59c2c
	if (cr6.eq) goto loc_83A59C2C;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,127
	ctx.r7.s64 = ctx.r10.s64 + 127;
	// srawi r6,r7,7
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r27,r4
	ctx.r27.s64 = ctx.r4.s16;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a59bf0
	if (!cr6.gt) goto loc_83A59BF0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_83A59BF0:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a59c20
	if (cr6.eq) goto loc_83A59C20;
loc_83A59BFC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A59C0C;
	sub_831CE980(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x83a59bfc
	if (!cr0.eq) goto loc_83A59BFC;
loc_83A59C20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A59C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59C38"))) PPC_WEAK_FUNC(sub_83A59C38);
PPC_FUNC_IMPL(__imp__sub_83A59C38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59C48"))) PPC_WEAK_FUNC(sub_83A59C48);
PPC_FUNC_IMPL(__imp__sub_83A59C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r3,332
	ctx.r8.s64 = ctx.r3.s64 + 332;
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83A59C70:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a59c90
	if (cr6.eq) goto loc_83A59C90;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x83a59c70
	if (cr6.lt) goto loc_83A59C70;
	// b 0x83a59c94
	goto loc_83A59C94;
loc_83A59C90:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_83A59C94:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x83a59ca0
	if (!cr6.eq) goto loc_83A59CA0;
	// li r7,7
	ctx.r7.s64 = 7;
loc_83A59CA0:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulld r7,r8,r10
	ctx.r7.s64 = ctx.r8.s64 * ctx.r10.s64;
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59CBC"))) PPC_WEAK_FUNC(sub_83A59CBC);
PPC_FUNC_IMPL(__imp__sub_83A59CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59CC0"))) PPC_WEAK_FUNC(sub_83A59CC0);
PPC_FUNC_IMPL(__imp__sub_83A59CC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59CCC"))) PPC_WEAK_FUNC(sub_83A59CCC);
PPC_FUNC_IMPL(__imp__sub_83A59CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59CD0"))) PPC_WEAK_FUNC(sub_83A59CD0);
PPC_FUNC_IMPL(__imp__sub_83A59CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83A59CD8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// srawi r6,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addze r3,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r23,r5,31,1,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r6,r9,127
	ctx.r6.s64 = ctx.r9.s64 + 127;
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r5,r6,7
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// rlwinm r6,r10,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// srawi r9,r3,7
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// extsh r24,r6
	ctx.r24.s64 = ctx.r6.s16;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// rlwinm r10,r3,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// add r25,r10,r4
	ctx.r25.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r21,r10,r25
	ctx.r21.u64 = ctx.r10.u64 + ctx.r25.u64;
	// ble cr6,0x83a59d80
	if (!cr6.gt) goto loc_83A59D80;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_83A59D80:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a59db8
	if (cr6.eq) goto loc_83A59DB8;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_83A59D94:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A59DA4;
	sub_831CE980(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bne 0x83a59d94
	if (!cr0.eq) goto loc_83A59D94;
loc_83A59DB8:
	// extsh r27,r24
	ctx.r27.s64 = ctx.r24.s16;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// ble cr6,0x83a59dcc
	if (!cr6.gt) goto loc_83A59DCC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_83A59DCC:
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a59e04
	if (cr6.eq) goto loc_83A59E04;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_83A59DE0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A59DF0;
	sub_831CE980(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bne 0x83a59de0
	if (!cr0.eq) goto loc_83A59DE0;
loc_83A59E04:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// ble cr6,0x83a59e14
	if (!cr6.gt) goto loc_83A59E14;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_83A59E14:
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83a59e4c
	if (cr6.eq) goto loc_83A59E4C;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_83A59E28:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A59E38;
	sub_831CE980(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x83a59e28
	if (!cr0.eq) goto loc_83A59E28;
loc_83A59E4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59E54"))) PPC_WEAK_FUNC(sub_83A59E54);
PPC_FUNC_IMPL(__imp__sub_83A59E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A59E58"))) PPC_WEAK_FUNC(sub_83A59E58);
PPC_FUNC_IMPL(__imp__sub_83A59E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A59E80"))) PPC_WEAK_FUNC(sub_83A59E80);
PPC_FUNC_IMPL(__imp__sub_83A59E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A59E88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a59f0c
	if (cr6.gt) goto loc_83A59F0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a59eb0
	if (!cr6.eq) goto loc_83A59EB0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x83a59eb8
	goto loc_83A59EB8;
loc_83A59EB0:
	// add r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r27,r5,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_83A59EB8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a59f00
	if (!cr6.eq) goto loc_83A59F00;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83A59ECC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a59f38
	if (cr6.eq) goto loc_83A59F38;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// ble cr6,0x83a59f38
	if (!cr6.gt) goto loc_83A59F38;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a5f2a0
	ctx.lr = 0x83A59EEC;
	sub_83A5F2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a59f38
	if (cr6.eq) goto loc_83A59F38;
loc_83A59EF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A59F00:
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x83a59ecc
	goto loc_83A59ECC;
loc_83A59F0C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a59fec
	if (cr6.eq) goto loc_83A59FEC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r29,r9,r5
	ctx.r29.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_83A59F38:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a59fec
	if (cr6.eq) goto loc_83A59FEC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a59fec
	if (cr6.eq) goto loc_83A59FEC;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// li r31,3
	ctx.r31.s64 = 3;
	// bgt cr6,0x83a59f58
	if (cr6.gt) goto loc_83A59F58;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83A59F58:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// li r30,3
	ctx.r30.s64 = 3;
	// bgt cr6,0x83a59f68
	if (cr6.gt) goto loc_83A59F68;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83A59F68:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a59f8c
	if (cr6.eq) goto loc_83A59F8C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x83a59f8c
	if (!cr6.gt) goto loc_83A59F8C;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x83A59F8C;
	sub_831CE980(ctx, base);
loc_83A59F8C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x83a59fa8
	if (!cr6.gt) goto loc_83A59FA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A59FA8;
	sub_831CE980(ctx, base);
loc_83A59FA8:
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// ble cr6,0x83a59fc8
	if (!cr6.gt) goto loc_83A59FC8;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a5f2a0
	ctx.lr = 0x83A59FC0;
	sub_83A5F2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a59ef4
	if (!cr6.eq) goto loc_83A59EF4;
loc_83A59FC8:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// ble cr6,0x83a59fec
	if (!cr6.gt) goto loc_83A59FEC;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a5f2a0
	ctx.lr = 0x83A59FE0;
	sub_83A5F2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x83a59ff0
	if (!cr6.eq) goto loc_83A59FF0;
loc_83A59FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A59FF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A59FF8"))) PPC_WEAK_FUNC(sub_83A59FF8);
PPC_FUNC_IMPL(__imp__sub_83A59FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A5A000;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a5a078
	if (cr6.eq) goto loc_83A5A078;
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5a06c
	if (cr6.eq) goto loc_83A5A06C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r7,424(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r9,432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r4,428(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// b 0x83a5a094
	goto loc_83A5A094;
loc_83A5A06C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A5A078:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83a5df90
	ctx.lr = 0x83A5A084;
	sub_83A5DF90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5a06c
	if (cr6.eq) goto loc_83A5A06C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A5A094:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a5ef38
	ctx.lr = 0x83A5A0A4;
	sub_83A5EF38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x83a5a0d0
	if (!cr6.eq) goto loc_83A5A0D0;
	// bctrl 
	ctx.lr = 0x83A5A0C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x83a5a0e0
	goto loc_83A5A0E0;
loc_83A5A0D0:
	// bctrl 
	ctx.lr = 0x83A5A0D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83A5A0E0:
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// beq cr6,0x83a5a104
	if (cr6.eq) goto loc_83A5A104;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5A104;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5A104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5A110"))) PPC_WEAK_FUNC(sub_83A5A110);
PPC_FUNC_IMPL(__imp__sub_83A5A110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5a12c
	if (!cr6.gt) goto loc_83A5A12C;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83a5a130
	goto loc_83A5A130;
loc_83A5A12C:
	// lwz r31,296(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
loc_83A5A130:
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// addi r10,r3,332
	ctx.r10.s64 = ctx.r3.s64 + 332;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r5,r31
	ctx.r6.u64 = ctx.r5.u64 + ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_83A5A14C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a5a174
	if (cr6.eq) goto loc_83A5A174;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// blt cr6,0x83a5a1a0
	if (cr6.lt) goto loc_83A5A1A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83a5a14c
	if (cr6.lt) goto loc_83A5A14C;
	// b 0x83a5a1a8
	goto loc_83A5A1A8;
loc_83A5A174:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5a18c
	if (!cr6.eq) goto loc_83A5A18C;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// b 0x83a5a1c8
	goto loc_83A5A1C8;
loc_83A5A18C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// b 0x83a5a1a8
	goto loc_83A5A1A8;
loc_83A5A1A0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_83A5A1A8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a5a1f4
	if (!cr6.eq) goto loc_83A5A1F4;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
loc_83A5A1B8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
loc_83A5A1C8:
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// stw r7,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r7.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulld r7,r8,r10
	ctx.r7.s64 = ctx.r8.s64 * ctx.r10.s64;
	// std r7,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r7.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A5A1F4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5a1b8
	if (!cr6.eq) goto loc_83A5A1B8;
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// b 0x83a5a1c8
	goto loc_83A5A1C8;
}

__attribute__((alias("__imp__sub_83A5A208"))) PPC_WEAK_FUNC(sub_83A5A208);
PPC_FUNC_IMPL(__imp__sub_83A5A208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5A210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5a2e0
	if (cr6.eq) goto loc_83A5A2E0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5a2e0
	if (cr6.eq) goto loc_83A5A2E0;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A268;
	sub_83A7BDA0(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// divwu r9,r3,r10
	ctx.r9.u32 = PPCDivide(ctx.r3.u32, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// twllei r10,0
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A284;
	sub_83A7BDA0(ctx, base);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// divwu r11,r3,r8
	ctx.r11.u32 = PPCDivide(ctx.r3.u32, ctx.r8.u32);
	// twllei r8,0
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a5a2a8
	if (cr6.eq) goto loc_83A5A2A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83A5A2A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A2B4;
	sub_83A7BDA0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// divwu r10,r3,r11
	ctx.r10.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	// twllei r11,0
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A2D0;
	sub_83A7BDA0(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// divwu r8,r3,r9
	ctx.r8.u32 = PPCDivide(ctx.r3.u32, ctx.r9.u32);
	// twllei r9,0
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_83A5A2E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5A2E8"))) PPC_WEAK_FUNC(sub_83A5A2E8);
PPC_FUNC_IMPL(__imp__sub_83A5A2E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// stw r5,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5A2F4"))) PPC_WEAK_FUNC(sub_83A5A2F4);
PPC_FUNC_IMPL(__imp__sub_83A5A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5A2F8"))) PPC_WEAK_FUNC(sub_83A5A2F8);
PPC_FUNC_IMPL(__imp__sub_83A5A2F8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r4.u32);
	// stw r5,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5A304"))) PPC_WEAK_FUNC(sub_83A5A304);
PPC_FUNC_IMPL(__imp__sub_83A5A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5A308"))) PPC_WEAK_FUNC(sub_83A5A308);
PPC_FUNC_IMPL(__imp__sub_83A5A308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-13088
	ctx.r4.s64 = ctx.r11.s64 + -13088;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea308
	sub_831EA308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5A324"))) PPC_WEAK_FUNC(sub_83A5A324);
PPC_FUNC_IMPL(__imp__sub_83A5A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5A328"))) PPC_WEAK_FUNC(sub_83A5A328);
PPC_FUNC_IMPL(__imp__sub_83A5A328) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r11,r11,-10608
	ctx.r11.s64 = ctx.r11.s64 + -10608;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a5a378
	if (cr6.eq) goto loc_83A5A378;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12952
	ctx.r4.s64 = ctx.r11.s64 + -12952;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5A364;
	sub_831EA308(ctx, base);
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
loc_83A5A378:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83a5a3a4
	if (!cr6.eq) goto loc_83A5A3A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5A3A4:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// addi r9,r10,8320
	ctx.r9.s64 = ctx.r10.s64 + 8320;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// ble cr6,0x83a5a3f4
	if (!cr6.gt) goto loc_83A5A3F4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-13012
	ctx.r4.s64 = ctx.r11.s64 + -13012;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5A3E0;
	sub_831EA308(ctx, base);
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
loc_83A5A3F4:
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5A410"))) PPC_WEAK_FUNC(sub_83A5A410);
PPC_FUNC_IMPL(__imp__sub_83A5A410) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r31,r11,-10604
	ctx.r31.s64 = ctx.r11.s64 + -10604;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5a4bc
	if (!cr6.eq) goto loc_83A5A4BC;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// bne cr6,0x83a5a47c
	if (!cr6.eq) goto loc_83A5A47C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12880
	ctx.r4.s64 = ctx.r11.s64 + -12880;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5A468;
	sub_831EA308(ctx, base);
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
loc_83A5A47C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r9.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r10.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r11.u32);
	// bl 0x83a5ca18
	ctx.lr = 0x83A5A4A8;
	sub_83A5CA18(ctx, base);
	// bl 0x83a5d9a8
	ctx.lr = 0x83A5A4AC;
	sub_83A5D9A8(ctx, base);
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x83a5e1f8
	ctx.lr = 0x83A5A4B8;
	sub_83A5E1F8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
loc_83A5A4BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A5A4D8"))) PPC_WEAK_FUNC(sub_83A5A4D8);
PPC_FUNC_IMPL(__imp__sub_83A5A4D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x83a59740
	sub_83A59740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5A4E8"))) PPC_WEAK_FUNC(sub_83A5A4E8);
PPC_FUNC_IMPL(__imp__sub_83A5A4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5A4F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A508;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5a610
	if (cr6.eq) goto loc_83A5A610;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5A528;
	sub_83A7BD70(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5A53C;
	sub_83A7A4F0(ctx, base);
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x83a5a764
	if (cr6.gt) goto loc_83A5A764;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a5a648
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A5A648;
	// bdzf 4*cr6+eq,0x83a5a71c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A5A71C;
	// bne cr6,0x83a5a694
	if (!cr6.eq) goto loc_83A5A694;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x83a599c8
	ctx.lr = 0x83A5A570;
	sub_83A599C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// beq cr6,0x83a5a61c
	if (cr6.eq) goto loc_83A5A61C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A584;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x83a5a608
	if (cr6.eq) goto loc_83A5A608;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5A5A0;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5A5B0;
	sub_83A7A4F0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83a5a5ec
	if (!cr6.lt) goto loc_83A5A5EC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12648
	ctx.r4.s64 = ctx.r11.s64 + -12648;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5A5E8;
	sub_831EA308(ctx, base);
	// b 0x83a5a628
	goto loc_83A5A628;
loc_83A5A5EC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5A5FC;
	sub_83A7BD90(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x83a5a620
	goto loc_83A5A620;
loc_83A5A608:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5A610;
	sub_83A7BD80(ctx, base);
loc_83A5A610:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A5A61C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_83A5A620:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5A628;
	sub_83A7BD90(ctx, base);
loc_83A5A628:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// b 0x83a5a764
	goto loc_83A5A764;
loc_83A5A648:
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5a764
	if (cr6.eq) goto loc_83A5A764;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5A670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a5a764
	if (cr6.eq) goto loc_83A5A764;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5A688;
	sub_83A7BD80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A5A694:
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a599c8
	ctx.lr = 0x83A5A6A0;
	sub_83A599C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5a764
	if (cr6.eq) goto loc_83A5A764;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A6B4;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x83a5a608
	if (cr6.eq) goto loc_83A5A608;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5A6D0;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5A6E0;
	sub_83A7A4F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83a5a764
	if (!cr6.lt) goto loc_83A5A764;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12712
	ctx.r4.s64 = ctx.r11.s64 + -12712;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5A718;
	sub_831EA308(ctx, base);
	// b 0x83a5a764
	goto loc_83A5A764;
loc_83A5A71C:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5a744
	if (!cr6.eq) goto loc_83A5A744;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5a744
	if (cr6.eq) goto loc_83A5A744;
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5A744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5A744:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a5a764
	if (!cr6.eq) goto loc_83A5A764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a598c0
	ctx.lr = 0x83A5A758;
	sub_83A598C0(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_83A5A764:
	// lbz r11,159(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5a7b4
	if (!cr6.gt) goto loc_83A5A7B4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bgt cr6,0x83a5a7b4
	if (cr6.gt) goto loc_83A5A7B4;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 & ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5A798;
	sub_83A7BD90(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a5a7b4
	if (cr6.eq) goto loc_83A5A7B4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5A7B4;
	sub_83A7BD90(ctx, base);
loc_83A5A7B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5A7C0"))) PPC_WEAK_FUNC(sub_83A5A7C0);
PPC_FUNC_IMPL(__imp__sub_83A5A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5A7C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5a800
	if (cr6.eq) goto loc_83A5A800;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5a800
	if (!cr6.eq) goto loc_83A5A800;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A7F8;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5a80c
	if (!cr6.eq) goto loc_83A5A80C;
loc_83A5A800:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5A80C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5A820;
	sub_83A7BD70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5a800
	if (cr6.eq) goto loc_83A5A800;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,152
	ctx.r5.s64 = 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5A83C;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a5a110
	ctx.lr = 0x83A5A848;
	sub_83A5A110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r8,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r5,r9,127
	ctx.r5.s64 = ctx.r9.s64 + 127;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r5,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// rlwinm r8,r3,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r6,3,1,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7FFFFFF8;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r4,r8,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r8,r5,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x83a7bd80
	ctx.lr = 0x83A5A8F4;
	sub_83A7BD80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5A900"))) PPC_WEAK_FUNC(sub_83A5A900);
PPC_FUNC_IMPL(__imp__sub_83A5A900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5A908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5a940
	if (cr6.eq) goto loc_83A5A940;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5a940
	if (!cr6.eq) goto loc_83A5A940;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A938;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5a94c
	if (!cr6.eq) goto loc_83A5A94C;
loc_83A5A940:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A5A94C:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r11,-10600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10600);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5a970
	if (!cr6.eq) goto loc_83A5A970;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5A968;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5a940
	if (!cr6.eq) goto loc_83A5A940;
loc_83A5A970:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5A984;
	sub_83A7BD70(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a5a940
	if (cr6.eq) goto loc_83A5A940;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// li r5,152
	ctx.r5.s64 = 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5A9A0;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5a110
	ctx.lr = 0x83A5A9AC;
	sub_83A5A110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,3
	ctx.r28.s64 = 3;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// rlwinm r6,r7,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r5,r9,127
	ctx.r5.s64 = ctx.r9.s64 + 127;
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r5,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// addi r3,r9,127
	ctx.r3.s64 = ctx.r9.s64 + 127;
	// mullw r9,r6,r4
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r3,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r6,r6,3,1,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7FFFFFF8;
	// rlwinm r5,r4,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// mullw r4,r6,r7
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r3,r7,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r4,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r9.u32);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5AA68;
	sub_83A7BD90(ctx, base);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x83a5aa94
	if (!cr6.eq) goto loc_83A5AA94;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// ble cr6,0x83a5aa94
	if (!cr6.gt) goto loc_83A5AA94;
	// stw r28,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r28.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A5AA94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5AAA8"))) PPC_WEAK_FUNC(sub_83A5AAA8);
PPC_FUNC_IMPL(__imp__sub_83A5AAA8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5aaf4
	if (cr6.eq) goto loc_83A5AAF4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a5aaf4
	if (cr6.eq) goto loc_83A5AAF4;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5aaf4
	if (cr6.eq) goto loc_83A5AAF4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83a59cd0
	ctx.lr = 0x83A5AAE0;
	sub_83A59CD0(ctx, base);
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
loc_83A5AAF4:
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

__attribute__((alias("__imp__sub_83A5AB08"))) PPC_WEAK_FUNC(sub_83A5AB08);
PPC_FUNC_IMPL(__imp__sub_83A5AB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5AB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5AB28;
	sub_83A7BDA0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// twllei r11,0
	// beq 0x83a5ab8c
	if (cr0.eq) goto loc_83A5AB8C;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_83A5AB40:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5AB54;
	sub_83A7BD70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5ab70
	if (cr6.eq) goto loc_83A5AB70;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5abb0
	if (cr6.eq) goto loc_83A5ABB0;
loc_83A5AB70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5AB80;
	sub_83A7BD90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x83a5ab40
	if (cr6.lt) goto loc_83A5AB40;
loc_83A5AB8C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12588
	ctx.r4.s64 = ctx.r11.s64 + -12588;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5ABA8;
	sub_831EA308(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5ABB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5ABC0;
	sub_83A7BD90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5ABC8"))) PPC_WEAK_FUNC(sub_83A5ABC8);
PPC_FUNC_IMPL(__imp__sub_83A5ABC8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a5a7c0
	ctx.lr = 0x83A5ABE8;
	sub_83A5A7C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5ac40
	if (cr6.eq) goto loc_83A5AC40;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_83A5AC40:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_83A5AC58"))) PPC_WEAK_FUNC(sub_83A5AC58);
PPC_FUNC_IMPL(__imp__sub_83A5AC58) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a5a900
	ctx.lr = 0x83A5AC78;
	sub_83A5A900(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5acd0
	if (cr6.eq) goto loc_83A5ACD0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_83A5ACD0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_83A5ACE8"))) PPC_WEAK_FUNC(sub_83A5ACE8);
PPC_FUNC_IMPL(__imp__sub_83A5ACE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A5AD08:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83a5ad08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5AD08;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x83a5ab08
	ctx.lr = 0x83A5AD28;
	sub_83A5AB08(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5AD38"))) PPC_WEAK_FUNC(sub_83A5AD38);
PPC_FUNC_IMPL(__imp__sub_83A5AD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5AD40;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,284(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A5AD5C;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5aea4
	if (cr6.eq) goto loc_83A5AEA4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r27,r11,-12536
	ctx.r27.s64 = ctx.r11.s64 + -12536;
loc_83A5AD70:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5AD88;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5AD98;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5adac
	if (cr6.eq) goto loc_83A5ADAC;
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5ae94
	if (cr6.eq) goto loc_83A5AE94;
loc_83A5ADAC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5ADBC;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5ae44
	if (cr6.eq) goto loc_83A5AE44;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5ae44
	if (cr6.eq) goto loc_83A5AE44;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A5ADE4;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83a5ae9c
	if (cr6.eq) goto loc_83A5AE9C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5AE00;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5AE10;
	sub_83A7A4F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83a5ae44
	if (!cr6.lt) goto loc_83A5AE44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5AE44;
	sub_831EA308(ctx, base);
loc_83A5AE44:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5AE54;
	sub_83A7BD90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5ae70
	if (cr6.eq) goto loc_83A5AE70;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5AE70;
	sub_83A7BD90(ctx, base);
loc_83A5AE70:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x83a7bda0
	ctx.lr = 0x83A5AE80;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5ad70
	if (!cr6.eq) goto loc_83A5AD70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5AE94:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A5AE9C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5AEA4;
	sub_83A7BD80(ctx, base);
loc_83A5AEA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5AEB0"))) PPC_WEAK_FUNC(sub_83A5AEB0);
PPC_FUNC_IMPL(__imp__sub_83A5AEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5AEB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,88
	ctx.r30.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5af8c
	if (cr6.eq) goto loc_83A5AF8C;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// sth r29,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r29.u16);
	// sth r29,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r29.u16);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// ld r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a5af30
	if (!cr6.eq) goto loc_83A5AF30;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12476
	ctx.r4.s64 = ctx.r11.s64 + -12476;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5AF20;
	sub_831EA308(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5AF30:
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5AF48;
	sub_83A7BD90(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bd70
	ctx.lr = 0x83A5AF70;
	sub_83A7BD70(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a5af8c
	if (cr6.eq) goto loc_83A5AF8C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5AF8C;
	sub_83A7BD90(ctx, base);
loc_83A5AF8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5AF94"))) PPC_WEAK_FUNC(sub_83A5AF94);
PPC_FUNC_IMPL(__imp__sub_83A5AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5AF98"))) PPC_WEAK_FUNC(sub_83A5AF98);
PPC_FUNC_IMPL(__imp__sub_83A5AF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83A5AFA0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r29,16(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r24,28(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r23,32(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r22,36(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// beq cr6,0x83a5b008
	if (cr6.eq) goto loc_83A5B008;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-11944
	ctx.r5.s64 = ctx.r11.s64 + -11944;
	// li r4,468
	ctx.r4.s64 = 468;
	// bl 0x83a78940
	ctx.lr = 0x83A5AFE0;
	sub_83A78940(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,468
	ctx.r5.s64 = 468;
	// bne cr6,0x83a5b014
	if (!cr6.eq) goto loc_83A5B014;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12000
	ctx.r4.s64 = ctx.r11.s64 + -12000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B008;
	sub_831EA308(ctx, base);
loc_83A5B008:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B014:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5B020;
	sub_831CDCF0(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x83a5e670
	ctx.lr = 0x83A5B028;
	sub_83A5E670(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5b06c
	if (!cr6.eq) goto loc_83A5B06C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12840
	ctx.r4.s64 = ctx.r11.s64 + -12840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B050;
	sub_831EA308(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x83a597b0
	ctx.lr = 0x83A5B060;
	sub_83A597B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B06C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5e130
	ctx.lr = 0x83A5B07C;
	sub_83A5E130(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5e130
	ctx.lr = 0x83A5B08C;
	sub_83A5E130(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-23800
	ctx.r4.s64 = ctx.r11.s64 + -23800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5f3b8
	ctx.lr = 0x83A5B0A0;
	sub_83A5F3B8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7c138
	ctx.lr = 0x83A5B0B0;
	sub_83A7C138(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5b0e8
	if (!cr6.eq) goto loc_83A5B0E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12048
	ctx.r4.s64 = ctx.r11.s64 + -12048;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B0D4;
	sub_831EA308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a597b0
	ctx.lr = 0x83A5B0DC;
	sub_83A597B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B0E8:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r9,r11,-10624
	ctx.r9.s64 = ctx.r11.s64 + -10624;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x83a5b10c
	if (cr6.eq) goto loc_83A5B10C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A5B10C:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r10,r27,15
	ctx.r10.s64 = ctx.r27.s64 + 15;
	// addi r8,r26,15
	ctx.r8.s64 = ctx.r26.s64 + 15;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r10,127
	ctx.r6.s64 = ctx.r10.s64 + 127;
	// addi r5,r8,127
	ctx.r5.s64 = ctx.r8.s64 + 127;
	// rlwinm r4,r6,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r8,r7,3,1,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7FFFFFF8;
	// rlwinm r3,r5,25,7,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,29970
	ctx.r6.s64 = 29970;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// li r10,168
	ctx.r10.s64 = 168;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r9,-12072
	ctx.r5.s64 = ctx.r9.s64 + -12072;
	// mulli r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 * 168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A5B18C;
	sub_83A78940(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// bne cr6,0x83a5b1d0
	if (!cr6.eq) goto loc_83A5B1D0;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,-12132
	ctx.r4.s64 = ctx.r10.s64 + -12132;
	// li r6,0
	ctx.r6.s64 = 0;
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B1BC;
	sub_831EA308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a597b0
	ctx.lr = 0x83A5B1C4;
	sub_83A597B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B1D0:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A5B1E0;
	sub_831CDCF0(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// ble cr6,0x83a5b24c
	if (!cr6.gt) goto loc_83A5B24C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r26,r11,-12152
	ctx.r26.s64 = ctx.r11.s64 + -12152;
loc_83A5B200:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A5B214;
	sub_83A78940(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5b294
	if (cr6.eq) goto loc_83A5B294;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,168
	ctx.r29.s64 = ctx.r29.s64 + 168;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a5b200
	if (cr6.lt) goto loc_83A5B200;
loc_83A5B24C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a7c138
	ctx.lr = 0x83A5B25C;
	sub_83A7C138(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5b2c4
	if (!cr6.eq) goto loc_83A5B2C4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12196
	ctx.r4.s64 = ctx.r11.s64 + -12196;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B280;
	sub_831EA308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a597b0
	ctx.lr = 0x83A5B288;
	sub_83A597B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B294:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12244
	ctx.r4.s64 = ctx.r11.s64 + -12244;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B2B0;
	sub_831EA308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a597b0
	ctx.lr = 0x83A5B2B8;
	sub_83A597B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B2C4:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// beq cr6,0x83a5b3cc
	if (cr6.eq) goto loc_83A5B3CC;
	// bl 0x83a5c0f0
	ctx.lr = 0x83A5B31C;
	sub_83A5C0F0(ctx, base);
	// stw r3,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r3.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-12268
	ctx.r5.s64 = ctx.r11.s64 + -12268;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A5B338;
	sub_83A78940(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// bne cr6,0x83a5b368
	if (!cr6.eq) goto loc_83A5B368;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12324
	ctx.r4.s64 = ctx.r11.s64 + -12324;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B360;
	sub_831EA308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a597b0
	ctx.lr = 0x83A5B368;
	sub_83A597B0(ctx, base);
loc_83A5B368:
	// lwz r4,440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// bl 0x83a5d108
	ctx.lr = 0x83A5B374;
	sub_83A5D108(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// bne cr6,0x83a5b3b0
	if (!cr6.eq) goto loc_83A5B3B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12408
	ctx.r4.s64 = ctx.r11.s64 + -12408;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5B39C;
	sub_831EA308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a597b0
	ctx.lr = 0x83A5B3A4;
	sub_83A597B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A5B3B0:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83a5d158
	ctx.lr = 0x83A5B3C0;
	sub_83A5D158(ctx, base);
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// bl 0x83a5ca08
	ctx.lr = 0x83A5B3C8;
	sub_83A5CA08(ctx, base);
	// b 0x83a5b3d8
	goto loc_83A5B3D8;
loc_83A5B3CC:
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_83A5B3D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r24.u32);
	// stw r23,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r22,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r22.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5B40C"))) PPC_WEAK_FUNC(sub_83A5B40C);
PPC_FUNC_IMPL(__imp__sub_83A5B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5B410"))) PPC_WEAK_FUNC(sub_83A5B410);
PPC_FUNC_IMPL(__imp__sub_83A5B410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5B418;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5b4e8
	if (!cr6.eq) goto loc_83A5B4E8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5b588
	if (cr6.eq) goto loc_83A5B588;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5B44C;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5b490
	if (cr6.eq) goto loc_83A5B490;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_83A5B458:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5B46C;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5B47C;
	sub_83A7BD90(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5B488;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5b458
	if (!cr6.eq) goto loc_83A5B458;
loc_83A5B490:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5b4a0
	if (cr6.eq) goto loc_83A5B4A0;
	// bl 0x83a7bd60
	ctx.lr = 0x83A5B4A0;
	sub_83A7BD60(ctx, base);
loc_83A5B4A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83A5B4E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5b4fc
	if (cr6.eq) goto loc_83A5B4FC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5b510
	if (!cr6.eq) goto loc_83A5B510;
loc_83A5B4FC:
	// li r30,6
	ctx.r30.s64 = 6;
loc_83A5B500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5a4e8
	ctx.lr = 0x83A5B508;
	sub_83A5A4E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a5b500
	if (!cr0.eq) goto loc_83A5B500;
loc_83A5B510:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5b53c
	if (!cr6.eq) goto loc_83A5B53C;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bge cr6,0x83a5b534
	if (!cr6.lt) goto loc_83A5B534;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5b53c
	if (!cr6.eq) goto loc_83A5B53C;
loc_83A5B534:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A5B53C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5b588
	if (!cr6.eq) goto loc_83A5B588;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5b588
	if (!cr6.eq) goto loc_83A5B588;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5B560;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5b588
	if (!cr6.eq) goto loc_83A5B588;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r9,292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83a5b588
	if (cr6.gt) goto loc_83A5B588;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A5B588:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5B590"))) PPC_WEAK_FUNC(sub_83A5B590);
PPC_FUNC_IMPL(__imp__sub_83A5B590) {
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
	ctx.lr = 0x83A5B598;
	__savegprlr_17(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r22,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r22.u32);
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r19,r11,-13100
	ctx.r19.s64 = ctx.r11.s64 + -13100;
	// li r18,4
	ctx.r18.s64 = 4;
loc_83A5B5C4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x83a7bda0
	ctx.lr = 0x83A5B5D4;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5bee0
	if (cr6.eq) goto loc_83A5BEE0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5B5F0;
	sub_83A7BD70(ctx, base);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5b674
	if (cr6.eq) goto loc_83A5B674;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5B610;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5b644
	if (cr6.eq) goto loc_83A5B644;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5b644
	if (cr6.eq) goto loc_83A5B644;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5B640;
	sub_83A7BD70(ctx, base);
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
loc_83A5B644:
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,460(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5B65C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5b674
	if (cr6.eq) goto loc_83A5B674;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5B674;
	sub_83A7BD80(ctx, base);
loc_83A5B674:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a680
	ctx.lr = 0x83A5B684;
	sub_83A7A680(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x83a5f2a0
	ctx.lr = 0x83A5B694;
	sub_83A5F2A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5bde0
	if (cr6.eq) goto loc_83A5BDE0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x83a5f710
	ctx.lr = 0x83A5B6B0;
	sub_83A5F710(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x83a615d8
	ctx.lr = 0x83A5B6D8;
	sub_83A615D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5be00
	if (!cr6.eq) goto loc_83A5BE00;
	// addi r25,r30,152
	ctx.r25.s64 = ctx.r30.s64 + 152;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83a61668
	ctx.lr = 0x83A5B6F0;
	sub_83A61668(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5be20
	if (!cr6.eq) goto loc_83A5BE20;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r24,176(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r29,156(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// bl 0x83a5f728
	ctx.lr = 0x83A5B714;
	sub_83A5F728(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,151
	ctx.r10.s64 = ctx.r1.s64 + 151;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r9,r19,-1
	ctx.r9.s64 = ctx.r19.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A5B728:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83a5b728
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5B728;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// bge cr6,0x83a5b748
	if (!cr6.lt) goto loc_83A5B748;
loc_83A5B740:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// b 0x83a5b784
	goto loc_83A5B784;
loc_83A5B748:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
loc_83A5B754:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x83a5b740
	if (!cr6.eq) goto loc_83A5B740;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x83a5b754
	if (cr6.lt) goto loc_83A5B754;
	// lbz r11,247(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(ctx.r11.u32, 67, xer);
	// bne cr6,0x83a5b780
	if (!cr6.eq) goto loc_83A5B780;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_83A5B780:
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
loc_83A5B784:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x83a7bd70
	ctx.lr = 0x83A5B7B4;
	sub_83A7BD70(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83a5be40
	if (cr6.eq) goto loc_83A5BE40;
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// addi r7,r29,15
	ctx.r7.s64 = ctx.r29.s64 + 15;
	// srawi r5,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 4;
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r3,r11,127
	ctx.r3.s64 = ctx.r11.s64 + 127;
	// srawi r10,r3,7
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// rlwinm r5,r9,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addze r10,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r10.s64 = temp.s64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r10,127
	ctx.r4.s64 = ctx.r10.s64 + 127;
	// sth r11,134(r30)
	PPC_STORE_U16(ctx.r30.u32 + 134, ctx.r11.u16);
	// srawi r3,r4,7
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r4,r7,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r3,r7,r9
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// sth r10,132(r30)
	PPC_STORE_U16(ctx.r30.u32 + 132, ctx.r10.u16);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r7,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r7.u32);
	// srawi r5,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// stw r25,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r25.u32);
	// rlwinm r9,r3,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mullw r3,r4,r8
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// stw r7,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r7.u32);
	// rlwinm r8,r3,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r7,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r7.u32);
	// ble cr6,0x83a5beb0
	if (!cr6.gt) goto loc_83A5BEB0;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// ble cr6,0x83a5b8d0
	if (!cr6.gt) goto loc_83A5B8D0;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// bne cr6,0x83a5beb0
	if (!cr6.eq) goto loc_83A5BEB0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bgt cr6,0x83a5b880
	if (cr6.gt) goto loc_83A5B880;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x83a5badc
	goto loc_83A5BADC;
loc_83A5B880:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5b8b0
	if (cr6.eq) goto loc_83A5B8B0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5b8b0
	if (cr6.eq) goto loc_83A5B8B0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_83A5B8A0:
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r11.u32);
	// b 0x83a5badc
	goto loc_83A5BADC;
loc_83A5B8B0:
	// li r28,3
	ctx.r28.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a5b8a0
	if (!cr6.eq) goto loc_83A5B8A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a5b8a0
	if (!cr6.eq) goto loc_83A5B8A0;
loc_83A5B8C8:
	// li r28,5
	ctx.r28.s64 = 5;
	// b 0x83a5bb5c
	goto loc_83A5BB5C;
loc_83A5B8D0:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a5ba04
	if (!cr6.eq) goto loc_83A5BA04;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a5b978
	if (!cr6.eq) goto loc_83A5B978;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bne cr6,0x83a5b904
	if (!cr6.eq) goto loc_83A5B904;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83a5b8c8
	if (!cr6.eq) goto loc_83A5B8C8;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// b 0x83a5badc
	goto loc_83A5BADC;
loc_83A5B904:
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x83a5b948
	if (!cr6.eq) goto loc_83A5B948;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// stw r10,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r10.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5B930;
	sub_83A7BD90(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r8.u32);
	// b 0x83a5bad8
	goto loc_83A5BAD8;
loc_83A5B948:
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r22,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r22.u32);
	// std r6,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r6.u64);
	// b 0x83a5badc
	goto loc_83A5BADC;
loc_83A5B978:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83a5ba04
	if (!cr6.eq) goto loc_83A5BA04;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a5ba04
	if (cr6.eq) goto loc_83A5BA04;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// ld r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r6.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a5baa4
	if (!cr6.eq) goto loc_83A5BAA4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5B9F8;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-11560
	ctx.r4.s64 = ctx.r11.s64 + -11560;
	// b 0x83a5bec8
	goto loc_83A5BEC8;
loc_83A5BA04:
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// li r4,3
	ctx.r4.s64 = 3;
	// sth r10,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r8.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5BA58;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5ba90
	if (cr6.eq) goto loc_83A5BA90;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5BA74;
	sub_83A7BD70(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5be5c
	if (cr6.eq) goto loc_83A5BE5C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BA90;
	sub_83A7BD90(ctx, base);
loc_83A5BA90:
	// ld r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5be78
	if (cr6.eq) goto loc_83A5BE78;
loc_83A5BAA4:
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BABC;
	sub_83A7BD90(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// std r8,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r8.u64);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r7.u32);
loc_83A5BAD8:
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
loc_83A5BADC:
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// lwz r10,448(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lwz r9,452(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ble 0x83a5bb0c
	if (!cr0.gt) goto loc_83A5BB0C;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// bne cr6,0x83a5bb0c
	if (!cr6.eq) goto loc_83A5BB0C;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83a5bb14
	if (!cr6.lt) goto loc_83A5BB14;
	// li r28,2
	ctx.r28.s64 = 2;
loc_83A5BB0C:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a5bb54
	if (cr6.lt) goto loc_83A5BB54;
loc_83A5BB14:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x83a5bb5c
	if (!cr6.eq) goto loc_83A5BB5C;
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5bb38
	if (!cr6.eq) goto loc_83A5BB38;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// bne cr6,0x83a5bb38
	if (!cr6.eq) goto loc_83A5BB38;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x83a5bb5c
	goto loc_83A5BB5C;
loc_83A5BB38:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a5bc14
	if (!cr6.gt) goto loc_83A5BC14;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// bne cr6,0x83a5bc14
	if (!cr6.eq) goto loc_83A5BC14;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// b 0x83a5bb5c
	goto loc_83A5BB5C;
loc_83A5BB54:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x83a5bc14
	if (cr6.eq) goto loc_83A5BC14;
loc_83A5BB5C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BB6C;
	sub_83A7BD80(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BB7C;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5BB8C;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5bbcc
	if (cr6.eq) goto loc_83A5BBCC;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5bbcc
	if (cr6.eq) goto loc_83A5BBCC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5BBBC;
	sub_83A7BD70(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BBCC;
	sub_83A7BD90(ctx, base);
loc_83A5BBCC:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
	// bne cr6,0x83a5bbf0
	if (!cr6.eq) goto loc_83A5BBF0;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
	// b 0x83a5bdc4
	goto loc_83A5BDC4;
loc_83A5BBF0:
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// bne cr6,0x83a5bdc4
	if (!cr6.eq) goto loc_83A5BDC4;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r11.u32);
	// b 0x83a5bdc4
	goto loc_83A5BDC4;
loc_83A5BC14:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5BC28;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5bc68
	if (cr6.eq) goto loc_83A5BC68;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5bc68
	if (cr6.eq) goto loc_83A5BC68;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5BC58;
	sub_83A7BD70(ctx, base);
	// addi r29,r1,120
	ctx.r29.s64 = ctx.r1.s64 + 120;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x83a5bc70
	goto loc_83A5BC70;
loc_83A5BC68:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_83A5BC70:
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a59ff8
	ctx.lr = 0x83A5BC90;
	sub_83A59FF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5be94
	if (!cr6.eq) goto loc_83A5BE94;
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// stw r22,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r22.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r8,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r8.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5bce4
	if (cr6.eq) goto loc_83A5BCE4;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// twllei r11,0
	// mulli r9,r10,1000
	ctx.r9.s64 = ctx.r10.s64 * 1000;
	// divwu r11,r9,r11
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// b 0x83a5bce8
	goto loc_83A5BCE8;
loc_83A5BCE4:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_83A5BCE8:
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r11.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// std r22,40(r26)
	PPC_STORE_U64(ctx.r26.u32 + 40, ctx.r22.u64);
	// stw r10,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r10.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// std r9,48(r26)
	PPC_STORE_U64(ctx.r26.u32 + 48, ctx.r9.u64);
	// stw r22,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r22.u32);
	// stw r23,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r23.u32);
	// bne cr6,0x83a5bd40
	if (!cr6.eq) goto loc_83A5BD40;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BD34;
	sub_83A7BD90(ctx, base);
	// lwz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
loc_83A5BD40:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83a59e80
	ctx.lr = 0x83A5BD50;
	sub_83A59E80(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a5bd64
	if (!cr6.eq) goto loc_83A5BD64;
	// stw r17,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r17.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5aeb0
	ctx.lr = 0x83A5BD64;
	sub_83A5AEB0(ctx, base);
loc_83A5BD64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BD74;
	sub_83A7BD90(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a7a4f0
	ctx.lr = 0x83A5BD84;
	sub_83A7A4F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5bdb8
	if (cr6.eq) goto loc_83A5BDB8;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5bdb8
	if (cr6.eq) goto loc_83A5BDB8;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BDB8;
	sub_83A7BD90(ctx, base);
loc_83A5BDB8:
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_83A5BDC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5ad38
	ctx.lr = 0x83A5BDCC;
	sub_83A5AD38(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x83a5b5c4
	if (cr6.eq) goto loc_83A5B5C4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A5BDE0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BDF0;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r4,r11,-11600
	ctx.r4.s64 = ctx.r11.s64 + -11600;
	// b 0x83a5becc
	goto loc_83A5BECC;
loc_83A5BE00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BE10;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r4,r11,-11640
	ctx.r4.s64 = ctx.r11.s64 + -11640;
	// b 0x83a5becc
	goto loc_83A5BECC;
loc_83A5BE20:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BE30;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r5,300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// addi r4,r11,-11672
	ctx.r4.s64 = ctx.r11.s64 + -11672;
	// b 0x83a5becc
	goto loc_83A5BECC;
loc_83A5BE40:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BE50;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-11728
	ctx.r4.s64 = ctx.r11.s64 + -11728;
	// b 0x83a5bec8
	goto loc_83A5BEC8;
loc_83A5BE5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BE6C;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-11792
	ctx.r4.s64 = ctx.r11.s64 + -11792;
	// b 0x83a5bec8
	goto loc_83A5BEC8;
loc_83A5BE78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BE88;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-11856
	ctx.r4.s64 = ctx.r11.s64 + -11856;
	// b 0x83a5bec8
	goto loc_83A5BEC8;
loc_83A5BE94:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BEA4;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-11896
	ctx.r4.s64 = ctx.r11.s64 + -11896;
	// b 0x83a5bec8
	goto loc_83A5BEC8;
loc_83A5BEB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BEC0;
	sub_83A7BD80(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-11928
	ctx.r4.s64 = ctx.r11.s64 + -11928;
loc_83A5BEC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83A5BECC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea308
	ctx.lr = 0x83A5BEDC;
	sub_831EA308(ctx, base);
	// stw r18,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r18.u32);
loc_83A5BEE0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5BEEC"))) PPC_WEAK_FUNC(sub_83A5BEEC);
PPC_FUNC_IMPL(__imp__sub_83A5BEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5BEF0"))) PPC_WEAK_FUNC(sub_83A5BEF0);
PPC_FUNC_IMPL(__imp__sub_83A5BEF0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5bf1c
	if (!cr6.eq) goto loc_83A5BF1C;
loc_83A5BF14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a5c028
	goto loc_83A5C028;
loc_83A5BF1C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a5bf14
	if (cr6.eq) goto loc_83A5BF14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5bf14
	if (!cr6.eq) goto loc_83A5BF14;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5BF40;
	sub_83A7BDA0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// divwu. r10,r3,r11
	ctx.r10.u32 = PPCDivide(ctx.r3.u32, ctx.r11.u32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twllei r11,0
	// ble 0x83a5bfa4
	if (!cr0.gt) goto loc_83A5BFA4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83a7bd70
	ctx.lr = 0x83A5BF64;
	sub_83A7BD70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5bf94
	if (cr6.eq) goto loc_83A5BF94;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a5bf94
	if (cr6.eq) goto loc_83A5BF94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a7bd90
	ctx.lr = 0x83A5BF90;
	sub_83A7BD90(ctx, base);
	// b 0x83a5bfa4
	goto loc_83A5BFA4;
loc_83A5BF94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83a7bd80
	ctx.lr = 0x83A5BFA4;
	sub_83A7BD80(ctx, base);
loc_83A5BFA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5BFB0;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5bf14
	if (cr6.eq) goto loc_83A5BF14;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x83a5c008
	if (!cr6.eq) goto loc_83A5C008;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5c01c
	if (!cr6.eq) goto loc_83A5C01C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x83a7bda0
	ctx.lr = 0x83A5BFE4;
	sub_83A7BDA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c01c
	if (!cr6.eq) goto loc_83A5C01C;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a5c01c
	if (!cr6.lt) goto loc_83A5C01C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5aeb0
	ctx.lr = 0x83A5C004;
	sub_83A5AEB0(ctx, base);
	// b 0x83a5c01c
	goto loc_83A5C01C;
loc_83A5C008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5ad38
	ctx.lr = 0x83A5C010;
	sub_83A5AD38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5b590
	ctx.lr = 0x83A5C018;
	sub_83A5B590(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A5C01C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_83A5C028:
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

__attribute__((alias("__imp__sub_83A5C040"))) PPC_WEAK_FUNC(sub_83A5C040);
PPC_FUNC_IMPL(__imp__sub_83A5C040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-11424
	ctx.r9.s64 = ctx.r11.s64 + -11424;
	// stw r9,-10596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10596, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C054"))) PPC_WEAK_FUNC(sub_83A5C054);
PPC_FUNC_IMPL(__imp__sub_83A5C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5C058"))) PPC_WEAK_FUNC(sub_83A5C058);
PPC_FUNC_IMPL(__imp__sub_83A5C058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,-3
	cr6.compare<int32_t>(ctx.r4.s32, -3, xer);
	// beq cr6,0x83a5c094
	if (cr6.eq) goto loc_83A5C094;
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x83a5c088
	if (cr6.eq) goto loc_83A5C088;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a5c07c
	if (cr6.eq) goto loc_83A5C07C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-11076
	ctx.r3.s64 = ctx.r11.s64 + -11076;
	// b 0x83a5c09c
	goto loc_83A5C09C;
loc_83A5C07C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// b 0x83a5c09c
	goto loc_83A5C09C;
loc_83A5C088:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x83a5c09c
	goto loc_83A5C09C;
loc_83A5C094:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
loc_83A5C09C:
	// b 0x83a616d0
	sub_83A616D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5C0A0"))) PPC_WEAK_FUNC(sub_83A5C0A0);
PPC_FUNC_IMPL(__imp__sub_83A5C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C0C4;
	sub_83A616E0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C0D4;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C0DC;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C0F0"))) PPC_WEAK_FUNC(sub_83A5C0F0);
PPC_FUNC_IMPL(__imp__sub_83A5C0F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,92
	ctx.r3.s64 = 92;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C0F8"))) PPC_WEAK_FUNC(sub_83A5C0F8);
PPC_FUNC_IMPL(__imp__sub_83A5C0F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c158
	if (!cr6.eq) goto loc_83A5C158;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C128;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C13C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C144;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A5C158:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5c1a8
	if (!cr6.eq) goto loc_83A5C1A8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-11032
	ctx.r5.s64 = ctx.r11.s64 + -11032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C178;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C18C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C194;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A5C1A8:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5C1B8;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C1D4"))) PPC_WEAK_FUNC(sub_83A5C1D4);
PPC_FUNC_IMPL(__imp__sub_83A5C1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5C1D8"))) PPC_WEAK_FUNC(sub_83A5C1D8);
PPC_FUNC_IMPL(__imp__sub_83A5C1D8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c22c
	if (!cr6.eq) goto loc_83A5C22C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10944
	ctx.r5.s64 = ctx.r11.s64 + -10944;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C200;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C214;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C21C;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C22C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5c278
	if (!cr6.eq) goto loc_83A5C278;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10956
	ctx.r5.s64 = ctx.r11.s64 + -10956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C24C;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C260;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C268;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C278:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C2B0"))) PPC_WEAK_FUNC(sub_83A5C2B0);
PPC_FUNC_IMPL(__imp__sub_83A5C2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c308
	if (!cr6.eq) goto loc_83A5C308;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10920
	ctx.r5.s64 = ctx.r11.s64 + -10920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C2D8;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C2EC;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C2F4;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C308:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5c358
	if (!cr6.eq) goto loc_83A5C358;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10932
	ctx.r5.s64 = ctx.r11.s64 + -10932;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C328;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C33C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C344;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C358:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5c374
	if (!cr6.eq) goto loc_83A5C374;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C374:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5c390
	if (!cr6.eq) goto loc_83A5C390;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C390:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5c3ac
	if (cr6.eq) goto loc_83A5C3AC;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5C3AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5C3AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C3C0"))) PPC_WEAK_FUNC(sub_83A5C3C0);
PPC_FUNC_IMPL(__imp__sub_83A5C3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c418
	if (!cr6.eq) goto loc_83A5C418;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10860
	ctx.r5.s64 = ctx.r11.s64 + -10860;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C3EC;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C400;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C408;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C418:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a5c464
	if (!cr6.eq) goto loc_83A5C464;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10872
	ctx.r5.s64 = ctx.r11.s64 + -10872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C438;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C44C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C454;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C464:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a5c494
	if (!cr6.eq) goto loc_83A5C494;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r4,r11,-10896
	ctx.r4.s64 = ctx.r11.s64 + -10896;
	// addi r3,r10,-10908
	ctx.r3.s64 = ctx.r10.s64 + -10908;
	// bl 0x83a5c0a0
	ctx.lr = 0x83A5C484;
	sub_83A5C0A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C494:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5c540
	if (!cr6.eq) goto loc_83A5C540;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a5c4bc
	if (cr6.lt) goto loc_83A5C4BC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83A5C4BC:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x83a5c4cc
	if (!cr6.lt) goto loc_83A5C4CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A5C4CC:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// divw r5,r7,r9
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// twllei r9,0
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r9,-1
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C540:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5c5ec
	if (!cr6.eq) goto loc_83A5C5EC;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a5c568
	if (cr6.lt) goto loc_83A5C568;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83A5C568:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// bge cr6,0x83a5c578
	if (!cr6.lt) goto loc_83A5C578;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A5C578:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// twllei r8,0
	// divw r4,r5,r8
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r8.s32);
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twlgei r4,-1
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5C5EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5c614
	if (cr6.eq) goto loc_83A5C614;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5C614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5C614:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5C624"))) PPC_WEAK_FUNC(sub_83A5C624);
PPC_FUNC_IMPL(__imp__sub_83A5C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5C628"))) PPC_WEAK_FUNC(sub_83A5C628);
PPC_FUNC_IMPL(__imp__sub_83A5C628) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c680
	if (!cr6.eq) goto loc_83A5C680;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10824
	ctx.r5.s64 = ctx.r11.s64 + -10824;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C660;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C674;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C67C;
	sub_83A616D0(ctx, base);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C680:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5c6c0
	if (!cr6.eq) goto loc_83A5C6C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10836
	ctx.r5.s64 = ctx.r11.s64 + -10836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C6A0;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C6B4;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C6BC;
	sub_83A616D0(ctx, base);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C6C0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5c6e4
	if (!cr6.eq) goto loc_83A5C6E4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r4,r11,-10896
	ctx.r4.s64 = ctx.r11.s64 + -10896;
	// addi r3,r10,-10848
	ctx.r3.s64 = ctx.r10.s64 + -10848;
	// bl 0x83a5c0a0
	ctx.lr = 0x83A5C6E0;
	sub_83A5C0A0(ctx, base);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C6E4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a5c89c
	if (!cr6.gt) goto loc_83A5C89C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5c89c
	if (cr6.eq) goto loc_83A5C89C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5c7b8
	if (!cr6.eq) goto loc_83A5C7B8;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// twllei r11,0
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// twllei r11,0
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// divw r3,r6,r11
	ctx.r3.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r9,r5,r11
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mullw r3,r9,r11
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// twlgei r8,-1
	// twlgei r9,-1
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x83a5c788
	if (!cr6.eq) goto loc_83A5C788;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C788:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5c7a4
	if (cr6.eq) goto loc_83A5C7A4;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5C7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5C7A4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C7B8:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5c874
	if (!cr6.eq) goto loc_83A5C874;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// twllei r11,0
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// twllei r11,0
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r5,r6,r11
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r3,r4,r11
	ctx.r3.s32 = PPCDivide(ctx.r4.s32, ctx.r11.s32);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// mullw r7,r5,r11
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andc r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// andc r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// twlgei r5,-1
	// twlgei r8,-1
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x83a5c844
	if (!cr6.eq) goto loc_83A5C844;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C844:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5c860
	if (cr6.eq) goto loc_83A5C860;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5C860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5C860:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// b 0x83a5c89c
	goto loc_83A5C89C;
loc_83A5C874:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5c89c
	if (cr6.eq) goto loc_83A5C89C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5C89C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5C89C:
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

__attribute__((alias("__imp__sub_83A5C8B4"))) PPC_WEAK_FUNC(sub_83A5C8B4);
PPC_FUNC_IMPL(__imp__sub_83A5C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5C8B8"))) PPC_WEAK_FUNC(sub_83A5C8B8);
PPC_FUNC_IMPL(__imp__sub_83A5C8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5C8C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5c910
	if (!cr6.eq) goto loc_83A5C910;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10800
	ctx.r5.s64 = ctx.r11.s64 + -10800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C8E8;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C8FC;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C904;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5C910:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5c958
	if (!cr6.eq) goto loc_83A5C958;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10812
	ctx.r5.s64 = ctx.r11.s64 + -10812;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5C930;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5C944;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5C94C;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5C958:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5c994
	if (!cr6.eq) goto loc_83A5C994;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bge cr6,0x83a5c984
	if (!cr6.lt) goto loc_83A5C984;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83A5C984:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a5c9f0
	if (cr6.lt) goto loc_83A5C9F0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x83a5c9f0
	goto loc_83A5C9F0;
loc_83A5C994:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5c9d0
	if (!cr6.eq) goto loc_83A5C9D0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bge cr6,0x83a5c9c0
	if (!cr6.lt) goto loc_83A5C9C0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83A5C9C0:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a5c9f0
	if (cr6.lt) goto loc_83A5C9F0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x83a5c9f0
	goto loc_83A5C9F0;
loc_83A5C9D0:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5c9f0
	if (cr6.eq) goto loc_83A5C9F0;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5C9F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5C9F0:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5CA08"))) PPC_WEAK_FUNC(sub_83A5CA08);
PPC_FUNC_IMPL(__imp__sub_83A5CA08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5CA14"))) PPC_WEAK_FUNC(sub_83A5CA14);
PPC_FUNC_IMPL(__imp__sub_83A5CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5CA18"))) PPC_WEAK_FUNC(sub_83A5CA18);
PPC_FUNC_IMPL(__imp__sub_83A5CA18) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-11248
	ctx.r9.s64 = ctx.r11.s64 + -11248;
	// stw r9,-10592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10592, ctx.r9.u32);
	// bl 0x83a61740
	ctx.lr = 0x83A5CA40;
	sub_83A61740(ctx, base);
	// bl 0x83a61820
	ctx.lr = 0x83A5CA44;
	sub_83A61820(ctx, base);
	// lis r30,-31741
	ctx.r30.s64 = -2080178176;
	// lwz r31,-10588(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10588);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83a5ca68
	if (!cr6.eq) goto loc_83A5CA68;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r5,9728
	ctx.r5.s64 = 9728;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5CA68;
	sub_831CDCF0(ctx, base);
loc_83A5CA68:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-10588(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10588, ctx.r11.u32);
	// bl 0x83a61860
	ctx.lr = 0x83A5CA74;
	sub_83A61860(ctx, base);
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

__attribute__((alias("__imp__sub_83A5CA8C"))) PPC_WEAK_FUNC(sub_83A5CA8C);
PPC_FUNC_IMPL(__imp__sub_83A5CA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5CA90"))) PPC_WEAK_FUNC(sub_83A5CA90);
PPC_FUNC_IMPL(__imp__sub_83A5CA90) {
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
	// bl 0x83a61820
	ctx.lr = 0x83A5CAA0;
	sub_83A61820(ctx, base);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// lwz r11,-10588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10588);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-10588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10588, ctx.r11.u32);
	// bne 0x83a5cac8
	if (!cr0.eq) goto loc_83A5CAC8;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r5,9728
	ctx.r5.s64 = 9728;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5CAC8;
	sub_831CDCF0(ctx, base);
loc_83A5CAC8:
	// bl 0x83a61860
	ctx.lr = 0x83A5CACC;
	sub_83A61860(ctx, base);
	// bl 0x83a617b8
	ctx.lr = 0x83A5CAD0;
	sub_83A617B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5CAE0"))) PPC_WEAK_FUNC(sub_83A5CAE0);
PPC_FUNC_IMPL(__imp__sub_83A5CAE0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5cb48
	if (!cr6.eq) goto loc_83A5CB48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10744
	ctx.r5.s64 = ctx.r11.s64 + -10744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5CB14;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5CB28;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5CB30;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A5CB48:
	// cmpwi cr6,r5,92
	cr6.compare<int32_t>(ctx.r5.s32, 92, xer);
	// bge cr6,0x83a5cb98
	if (!cr6.lt) goto loc_83A5CB98;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10756
	ctx.r5.s64 = ctx.r11.s64 + -10756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5CB64;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-10788
	ctx.r5.s64 = ctx.r10.s64 + -10788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5CB78;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5CB80;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A5CB98:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5CBA4;
	sub_831CDCF0(ctx, base);
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// stw r31,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-16432
	ctx.r7.s64 = ctx.r10.s64 + -16432;
	// addi r6,r9,-11160
	ctx.r6.s64 = ctx.r9.s64 + -11160;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-16296
	ctx.r4.s64 = ctx.r8.s64 + -16296;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x83a5c1d8
	ctx.lr = 0x83A5CBF0;
	sub_83A5C1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5CC08"))) PPC_WEAK_FUNC(sub_83A5CC08);
PPC_FUNC_IMPL(__imp__sub_83A5CC08) {
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
	// bl 0x83a61820
	ctx.lr = 0x83A5CC20;
	sub_83A61820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5c0f8
	ctx.lr = 0x83A5CC28;
	sub_83A5C0F8(ctx, base);
	// bl 0x83a61860
	ctx.lr = 0x83A5CC2C;
	sub_83A61860(ctx, base);
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

__attribute__((alias("__imp__sub_83A5CC40"))) PPC_WEAK_FUNC(sub_83A5CC40);
PPC_FUNC_IMPL(__imp__sub_83A5CC40) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5cc68
	if (!cr6.eq) goto loc_83A5CC68;
	// bl 0x83a61820
	ctx.lr = 0x83A5CC68;
	sub_83A61820(ctx, base);
loc_83A5CC68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5ccac
	if (!cr6.eq) goto loc_83A5CCAC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10980
	ctx.r5.s64 = ctx.r11.s64 + -10980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5CC88;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5CC9C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5CCA4;
	sub_83A616D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a5ccb0
	goto loc_83A5CCB0;
loc_83A5CCAC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83A5CCB0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5ccc0
	if (!cr6.eq) goto loc_83A5CCC0;
	// bl 0x83a61860
	ctx.lr = 0x83A5CCC0;
	sub_83A61860(ctx, base);
loc_83A5CCC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_83A5CCDC"))) PPC_WEAK_FUNC(sub_83A5CCDC);
PPC_FUNC_IMPL(__imp__sub_83A5CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5CCE0"))) PPC_WEAK_FUNC(sub_83A5CCE0);
PPC_FUNC_IMPL(__imp__sub_83A5CCE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5CCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5cd08
	if (!cr6.eq) goto loc_83A5CD08;
	// bl 0x83a61820
	ctx.lr = 0x83A5CD08;
	sub_83A61820(ctx, base);
loc_83A5CD08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5cd48
	if (!cr6.eq) goto loc_83A5CD48;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10968
	ctx.r5.s64 = ctx.r11.s64 + -10968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5CD28;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5CD3C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5CD44;
	sub_83A616D0(ctx, base);
	// b 0x83a5cd50
	goto loc_83A5CD50;
loc_83A5CD48:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_83A5CD50:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5cd60
	if (!cr6.eq) goto loc_83A5CD60;
	// bl 0x83a61860
	ctx.lr = 0x83A5CD60;
	sub_83A61860(ctx, base);
loc_83A5CD60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5CD68"))) PPC_WEAK_FUNC(sub_83A5CD68);
PPC_FUNC_IMPL(__imp__sub_83A5CD68) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5cd8c
	if (!cr6.eq) goto loc_83A5CD8C;
	// bl 0x83a61820
	ctx.lr = 0x83A5CD8C;
	sub_83A61820(ctx, base);
loc_83A5CD8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5c1d8
	ctx.lr = 0x83A5CD94;
	sub_83A5C1D8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5cda4
	if (!cr6.eq) goto loc_83A5CDA4;
	// bl 0x83a61860
	ctx.lr = 0x83A5CDA4;
	sub_83A61860(ctx, base);
loc_83A5CDA4:
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

__attribute__((alias("__imp__sub_83A5CDB8"))) PPC_WEAK_FUNC(sub_83A5CDB8);
PPC_FUNC_IMPL(__imp__sub_83A5CDB8) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5cde4
	if (!cr6.eq) goto loc_83A5CDE4;
	// bl 0x83a61820
	ctx.lr = 0x83A5CDE4;
	sub_83A61820(ctx, base);
loc_83A5CDE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5c2b0
	ctx.lr = 0x83A5CDF0;
	sub_83A5C2B0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5ce04
	if (!cr6.eq) goto loc_83A5CE04;
	// bl 0x83a61860
	ctx.lr = 0x83A5CE04;
	sub_83A61860(ctx, base);
loc_83A5CE04:
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

__attribute__((alias("__imp__sub_83A5CE20"))) PPC_WEAK_FUNC(sub_83A5CE20);
PPC_FUNC_IMPL(__imp__sub_83A5CE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5CE28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5ce4c
	if (!cr6.eq) goto loc_83A5CE4C;
	// bl 0x83a61820
	ctx.lr = 0x83A5CE4C;
	sub_83A61820(ctx, base);
loc_83A5CE4C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5c3c0
	ctx.lr = 0x83A5CE60;
	sub_83A5C3C0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5ce70
	if (!cr6.eq) goto loc_83A5CE70;
	// bl 0x83a61860
	ctx.lr = 0x83A5CE70;
	sub_83A61860(ctx, base);
loc_83A5CE70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5CE78"))) PPC_WEAK_FUNC(sub_83A5CE78);
PPC_FUNC_IMPL(__imp__sub_83A5CE78) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5ced0
	if (!cr6.eq) goto loc_83A5CED0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10708
	ctx.r5.s64 = ctx.r11.s64 + -10708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5CEB0;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5CEC4;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5CECC;
	sub_83A616D0(ctx, base);
	// b 0x83a5d040
	goto loc_83A5D040;
loc_83A5CED0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5cf10
	if (!cr6.eq) goto loc_83A5CF10;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10720
	ctx.r5.s64 = ctx.r11.s64 + -10720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5CEF0;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5CF04;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5CF0C;
	sub_83A616D0(ctx, base);
	// b 0x83a5d040
	goto loc_83A5D040;
loc_83A5CF10:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a5d040
	if (!cr6.gt) goto loc_83A5D040;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d040
	if (cr6.eq) goto loc_83A5D040;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5cff0
	if (!cr6.eq) goto loc_83A5CFF0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5cf4c
	if (cr6.eq) goto loc_83A5CF4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5CF4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5CF4C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83a5cf8c
	if (!cr6.lt) goto loc_83A5CF8C;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a5cf78
	if (cr6.lt) goto loc_83A5CF78;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_83A5CF78:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5CF8C;
	sub_831CE980(ctx, base);
loc_83A5CF8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r3,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a5cfcc
	if (!cr6.gt) goto loc_83A5CFCC;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a5cfbc
	if (cr6.lt) goto loc_83A5CFBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A5CFBC:
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5CFCC;
	sub_831CE980(ctx, base);
loc_83A5CFCC:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// b 0x83a5d040
	goto loc_83A5D040;
loc_83A5CFF0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5d018
	if (!cr6.eq) goto loc_83A5D018;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// b 0x83a5d040
	goto loc_83A5D040;
loc_83A5D018:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d040
	if (cr6.eq) goto loc_83A5D040;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5D040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5D040:
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

__attribute__((alias("__imp__sub_83A5D058"))) PPC_WEAK_FUNC(sub_83A5D058);
PPC_FUNC_IMPL(__imp__sub_83A5D058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5D060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d080
	if (!cr6.eq) goto loc_83A5D080;
	// bl 0x83a61820
	ctx.lr = 0x83A5D080;
	sub_83A61820(ctx, base);
loc_83A5D080:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5c628
	ctx.lr = 0x83A5D090;
	sub_83A5C628(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d0a0
	if (!cr6.eq) goto loc_83A5D0A0;
	// bl 0x83a61860
	ctx.lr = 0x83A5D0A0;
	sub_83A61860(ctx, base);
loc_83A5D0A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5D0A8"))) PPC_WEAK_FUNC(sub_83A5D0A8);
PPC_FUNC_IMPL(__imp__sub_83A5D0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5D0B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d0d4
	if (!cr6.eq) goto loc_83A5D0D4;
	// bl 0x83a61820
	ctx.lr = 0x83A5D0D4;
	sub_83A61820(ctx, base);
loc_83A5D0D4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5c8b8
	ctx.lr = 0x83A5D0E8;
	sub_83A5C8B8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d0fc
	if (!cr6.eq) goto loc_83A5D0FC;
	// bl 0x83a61860
	ctx.lr = 0x83A5D0FC;
	sub_83A61860(ctx, base);
loc_83A5D0FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5D108"))) PPC_WEAK_FUNC(sub_83A5D108);
PPC_FUNC_IMPL(__imp__sub_83A5D108) {
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
	// bl 0x83a61820
	ctx.lr = 0x83A5D128;
	sub_83A61820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5cae0
	ctx.lr = 0x83A5D134;
	sub_83A5CAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a61860
	ctx.lr = 0x83A5D13C;
	sub_83A61860(ctx, base);
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

__attribute__((alias("__imp__sub_83A5D158"))) PPC_WEAK_FUNC(sub_83A5D158);
PPC_FUNC_IMPL(__imp__sub_83A5D158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5D160;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d184
	if (!cr6.eq) goto loc_83A5D184;
	// bl 0x83a61820
	ctx.lr = 0x83A5D184;
	sub_83A61820(ctx, base);
loc_83A5D184:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a5d1a4
	if (cr6.eq) goto loc_83A5D1A4;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// bl 0x83a5c1d8
	ctx.lr = 0x83A5D1A0;
	sub_83A5C1D8(ctx, base);
	// b 0x83a5d1d4
	goto loc_83A5D1D4;
loc_83A5D1A4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10732
	ctx.r5.s64 = ctx.r11.s64 + -10732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D1B8;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D1CC;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D1D4;
	sub_83A616D0(ctx, base);
loc_83A5D1D4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d1e4
	if (!cr6.eq) goto loc_83A5D1E4;
	// bl 0x83a61860
	ctx.lr = 0x83A5D1E4;
	sub_83A61860(ctx, base);
loc_83A5D1E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5D1EC"))) PPC_WEAK_FUNC(sub_83A5D1EC);
PPC_FUNC_IMPL(__imp__sub_83A5D1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D1F0"))) PPC_WEAK_FUNC(sub_83A5D1F0);
PPC_FUNC_IMPL(__imp__sub_83A5D1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5D1F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d218
	if (!cr6.eq) goto loc_83A5D218;
	// bl 0x83a61820
	ctx.lr = 0x83A5D218;
	sub_83A61820(ctx, base);
loc_83A5D218:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5ce78
	ctx.lr = 0x83A5D228;
	sub_83A5CE78(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5d238
	if (!cr6.eq) goto loc_83A5D238;
	// bl 0x83a61860
	ctx.lr = 0x83A5D238;
	sub_83A61860(ctx, base);
loc_83A5D238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5D240"))) PPC_WEAK_FUNC(sub_83A5D240);
PPC_FUNC_IMPL(__imp__sub_83A5D240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// b 0x83a616d0
	sub_83A616D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5D24C"))) PPC_WEAK_FUNC(sub_83A5D24C);
PPC_FUNC_IMPL(__imp__sub_83A5D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D250"))) PPC_WEAK_FUNC(sub_83A5D250);
PPC_FUNC_IMPL(__imp__sub_83A5D250) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d2b0
	if (!cr6.eq) goto loc_83A5D2B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10656
	ctx.r5.s64 = ctx.r11.s64 + -10656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D280;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D294;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D29C;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A5D2B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d300
	if (!cr6.eq) goto loc_83A5D300;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10668
	ctx.r5.s64 = ctx.r11.s64 + -10668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D2D0;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D2E4;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D2EC;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A5D300:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5D310;
	sub_831CDCF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5D32C"))) PPC_WEAK_FUNC(sub_83A5D32C);
PPC_FUNC_IMPL(__imp__sub_83A5D32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D330"))) PPC_WEAK_FUNC(sub_83A5D330);
PPC_FUNC_IMPL(__imp__sub_83A5D330) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d384
	if (!cr6.eq) goto loc_83A5D384;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10584
	ctx.r5.s64 = ctx.r11.s64 + -10584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D358;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D36C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D374;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D384:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d3d0
	if (!cr6.eq) goto loc_83A5D3D0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10596
	ctx.r5.s64 = ctx.r11.s64 + -10596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D3A4;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D3B8;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D3C0;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D3D0:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5D3F0"))) PPC_WEAK_FUNC(sub_83A5D3F0);
PPC_FUNC_IMPL(__imp__sub_83A5D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d448
	if (!cr6.eq) goto loc_83A5D448;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10560
	ctx.r5.s64 = ctx.r11.s64 + -10560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D418;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D42C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D434;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D448:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d498
	if (!cr6.eq) goto loc_83A5D498;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10572
	ctx.r5.s64 = ctx.r11.s64 + -10572;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D468;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D47C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D484;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D498:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5d4b4
	if (!cr6.eq) goto loc_83A5D4B4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D4B4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a5d4d8
	if (cr6.eq) goto loc_83A5D4D8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d4d8
	if (cr6.eq) goto loc_83A5D4D8;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5D4D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5D4D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5D4EC"))) PPC_WEAK_FUNC(sub_83A5D4EC);
PPC_FUNC_IMPL(__imp__sub_83A5D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D4F0"))) PPC_WEAK_FUNC(sub_83A5D4F0);
PPC_FUNC_IMPL(__imp__sub_83A5D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d544
	if (!cr6.eq) goto loc_83A5D544;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10536
	ctx.r5.s64 = ctx.r11.s64 + -10536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D518;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D52C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D534;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D544:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d590
	if (!cr6.eq) goto loc_83A5D590;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10548
	ctx.r5.s64 = ctx.r11.s64 + -10548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D564;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D578;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D580;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D590:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5d5b4
	if (!cr6.eq) goto loc_83A5D5B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D5B4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5d60c
	if (!cr6.eq) goto loc_83A5D60C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x83a5d5cc
	if (cr6.lt) goto loc_83A5D5CC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_83A5D5CC:
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D60C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d634
	if (cr6.eq) goto loc_83A5D634;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5D634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5D634:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5D644"))) PPC_WEAK_FUNC(sub_83A5D644);
PPC_FUNC_IMPL(__imp__sub_83A5D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D648"))) PPC_WEAK_FUNC(sub_83A5D648);
PPC_FUNC_IMPL(__imp__sub_83A5D648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d69c
	if (!cr6.eq) goto loc_83A5D69C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10512
	ctx.r5.s64 = ctx.r11.s64 + -10512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D670;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D684;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D68C;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D69C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d6e8
	if (!cr6.eq) goto loc_83A5D6E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10524
	ctx.r5.s64 = ctx.r11.s64 + -10524;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D6BC;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D6D0;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D6D8;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D6E8:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5d738
	if (!cr6.gt) goto loc_83A5D738;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d738
	if (cr6.eq) goto loc_83A5D738;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a5d738
	if (cr6.eq) goto loc_83A5D738;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x83a5d738
	if (cr6.eq) goto loc_83A5D738;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d738
	if (cr6.eq) goto loc_83A5D738;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5D738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5D738:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5D748"))) PPC_WEAK_FUNC(sub_83A5D748);
PPC_FUNC_IMPL(__imp__sub_83A5D748) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d79c
	if (!cr6.eq) goto loc_83A5D79C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10488
	ctx.r5.s64 = ctx.r11.s64 + -10488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D770;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D784;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D78C;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D79C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d7e8
	if (!cr6.eq) goto loc_83A5D7E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10500
	ctx.r5.s64 = ctx.r11.s64 + -10500;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D7BC;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D7D0;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D7D8;
	sub_83A616D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A5D7E8:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a5d88c
	if (!cr6.gt) goto loc_83A5D88C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d88c
	if (cr6.eq) goto loc_83A5D88C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83a5d870
	if (cr6.eq) goto loc_83A5D870;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5d864
	if (!cr6.eq) goto loc_83A5D864;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r6,r7
	temp.u8 = (ctx.r7.u32 != 0) | (xer.ca != 0);
	ctx.r6.s64 = ctx.r7.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a5d848
	if (cr6.lt) goto loc_83A5D848;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A5D848:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// beq cr6,0x83a5d88c
	if (cr6.eq) goto loc_83A5D88C;
	// b 0x83a5d870
	goto loc_83A5D870;
loc_83A5D864:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_83A5D870:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d88c
	if (cr6.eq) goto loc_83A5D88C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5D88C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5D88C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5D89C"))) PPC_WEAK_FUNC(sub_83A5D89C);
PPC_FUNC_IMPL(__imp__sub_83A5D89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D8A0"))) PPC_WEAK_FUNC(sub_83A5D8A0);
PPC_FUNC_IMPL(__imp__sub_83A5D8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5D8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5d8f8
	if (!cr6.eq) goto loc_83A5D8F8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10464
	ctx.r5.s64 = ctx.r11.s64 + -10464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D8D0;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D8E4;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D8EC;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5D8F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5d940
	if (!cr6.eq) goto loc_83A5D940;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10476
	ctx.r5.s64 = ctx.r11.s64 + -10476;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5D918;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5D92C;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5D934;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5D940:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83a5d950
	if (!cr6.eq) goto loc_83A5D950;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83a5d98c
	goto loc_83A5D98C;
loc_83A5D950:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a5d96c
	if (!cr6.eq) goto loc_83A5D96C;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x83a5d98c
	if (cr6.lt) goto loc_83A5D98C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x83a5d98c
	goto loc_83A5D98C;
loc_83A5D96C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5d98c
	if (cr6.eq) goto loc_83A5D98C;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5D98C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5D98C:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5D9A4"))) PPC_WEAK_FUNC(sub_83A5D9A4);
PPC_FUNC_IMPL(__imp__sub_83A5D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5D9A8"))) PPC_WEAK_FUNC(sub_83A5D9A8);
PPC_FUNC_IMPL(__imp__sub_83A5D9A8) {
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
	// bl 0x83a61740
	ctx.lr = 0x83A5D9C0;
	sub_83A61740(ctx, base);
	// bl 0x83a61820
	ctx.lr = 0x83A5D9C4;
	sub_83A61820(ctx, base);
	// lis r30,-31741
	ctx.r30.s64 = -2080178176;
	// lwz r31,-10584(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10584);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83a5d9e8
	if (!cr6.eq) goto loc_83A5D9E8;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r5,5120
	ctx.r5.s64 = 5120;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5D9E8;
	sub_831CDCF0(ctx, base);
loc_83A5D9E8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,-10584(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10584, ctx.r11.u32);
	// bl 0x83a61860
	ctx.lr = 0x83A5D9F4;
	sub_83A61860(ctx, base);
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

__attribute__((alias("__imp__sub_83A5DA0C"))) PPC_WEAK_FUNC(sub_83A5DA0C);
PPC_FUNC_IMPL(__imp__sub_83A5DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5DA10"))) PPC_WEAK_FUNC(sub_83A5DA10);
PPC_FUNC_IMPL(__imp__sub_83A5DA10) {
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
	// bl 0x83a61820
	ctx.lr = 0x83A5DA20;
	sub_83A61820(ctx, base);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// lwz r11,-10584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10584);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,-10584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10584, ctx.r11.u32);
	// bne 0x83a5da48
	if (!cr0.eq) goto loc_83A5DA48;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r5,5120
	ctx.r5.s64 = 5120;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5DA48;
	sub_831CDCF0(ctx, base);
loc_83A5DA48:
	// bl 0x83a61860
	ctx.lr = 0x83A5DA4C;
	sub_83A61860(ctx, base);
	// bl 0x83a617b8
	ctx.lr = 0x83A5DA50;
	sub_83A617B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5DA60"))) PPC_WEAK_FUNC(sub_83A5DA60);
PPC_FUNC_IMPL(__imp__sub_83A5DA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5408
	ctx.r9.s64 = ctx.r10.s64 + 5408;
	// addi r10,r9,44
	ctx.r10.s64 = ctx.r9.s64 + 44;
loc_83A5DA70:
	// lwz r8,-40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83a5dacc
	if (cr6.eq) goto loc_83A5DACC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83a5dab8
	if (cr6.eq) goto loc_83A5DAB8;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83a5dac0
	if (cr6.eq) goto loc_83A5DAC0;
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83a5dac8
	if (cr6.eq) goto loc_83A5DAC8;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// addi r8,r9,5164
	ctx.r8.s64 = ctx.r9.s64 + 5164;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a5da70
	if (cr6.lt) goto loc_83A5DA70;
	// b 0x83a5dacc
	goto loc_83A5DACC;
loc_83A5DAB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83a5dacc
	goto loc_83A5DACC;
loc_83A5DAC0:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x83a5dacc
	goto loc_83A5DACC;
loc_83A5DAC8:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_83A5DACC:
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bne cr6,0x83a5dadc
	if (!cr6.eq) goto loc_83A5DADC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A5DADC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r6,-32205
	ctx.r6.s64 = -2110586880;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r8,-16384
	ctx.r9.s64 = ctx.r8.s64 + -16384;
	// addi r8,r6,-10696
	ctx.r8.s64 = ctx.r6.s64 + -10696;
	// stw r11,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r11.u32);
	// addi r6,r10,-11712
	ctx.r6.s64 = ctx.r10.s64 + -11712;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5DB3C"))) PPC_WEAK_FUNC(sub_83A5DB3C);
PPC_FUNC_IMPL(__imp__sub_83A5DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5DB40"))) PPC_WEAK_FUNC(sub_83A5DB40);
PPC_FUNC_IMPL(__imp__sub_83A5DB40) {
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
	// bl 0x83a61820
	ctx.lr = 0x83A5DB58;
	sub_83A61820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d250
	ctx.lr = 0x83A5DB60;
	sub_83A5D250(ctx, base);
	// bl 0x83a61860
	ctx.lr = 0x83A5DB64;
	sub_83A61860(ctx, base);
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

__attribute__((alias("__imp__sub_83A5DB78"))) PPC_WEAK_FUNC(sub_83A5DB78);
PPC_FUNC_IMPL(__imp__sub_83A5DB78) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5dbec
	if (cr6.eq) goto loc_83A5DBEC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dba8
	if (cr6.eq) goto loc_83A5DBA8;
	// bl 0x83a61820
	ctx.lr = 0x83A5DBA8;
	sub_83A61820(ctx, base);
loc_83A5DBA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5dc24
	if (!cr6.eq) goto loc_83A5DC24;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10644
	ctx.r5.s64 = ctx.r11.s64 + -10644;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5DBC8;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5DBDC;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5DBE4;
	sub_83A616D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83a5dc28
	goto loc_83A5DC28;
loc_83A5DBEC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10632
	ctx.r5.s64 = ctx.r11.s64 + -10632;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5DC00;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5DC14;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5DC1C;
	sub_83A616D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a5dc3c
	goto loc_83A5DC3C;
loc_83A5DC24:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83A5DC28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dc38
	if (cr6.eq) goto loc_83A5DC38;
	// bl 0x83a61860
	ctx.lr = 0x83A5DC38;
	sub_83A61860(ctx, base);
loc_83A5DC38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A5DC3C:
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

__attribute__((alias("__imp__sub_83A5DC54"))) PPC_WEAK_FUNC(sub_83A5DC54);
PPC_FUNC_IMPL(__imp__sub_83A5DC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5DC58"))) PPC_WEAK_FUNC(sub_83A5DC58);
PPC_FUNC_IMPL(__imp__sub_83A5DC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5DC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5dcc8
	if (cr6.eq) goto loc_83A5DCC8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dc88
	if (cr6.eq) goto loc_83A5DC88;
	// bl 0x83a61820
	ctx.lr = 0x83A5DC88;
	sub_83A61820(ctx, base);
loc_83A5DC88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5dd00
	if (!cr6.eq) goto loc_83A5DD00;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10620
	ctx.r5.s64 = ctx.r11.s64 + -10620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5DCA8;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11064
	ctx.r5.s64 = ctx.r10.s64 + -11064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5DCBC;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5DCC4;
	sub_83A616D0(ctx, base);
	// b 0x83a5dd08
	goto loc_83A5DD08;
loc_83A5DCC8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-10608
	ctx.r5.s64 = ctx.r11.s64 + -10608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616e0
	ctx.lr = 0x83A5DCDC;
	sub_83A616E0(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,-11020
	ctx.r5.s64 = ctx.r10.s64 + -11020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a61710
	ctx.lr = 0x83A5DCF0;
	sub_83A61710(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a616d0
	ctx.lr = 0x83A5DCF8;
	sub_83A616D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5DD00:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_83A5DD08:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dd18
	if (cr6.eq) goto loc_83A5DD18;
	// bl 0x83a61860
	ctx.lr = 0x83A5DD18;
	sub_83A61860(ctx, base);
loc_83A5DD18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5DD20"))) PPC_WEAK_FUNC(sub_83A5DD20);
PPC_FUNC_IMPL(__imp__sub_83A5DD20) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5dd4c
	if (cr6.eq) goto loc_83A5DD4C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dd4c
	if (cr6.eq) goto loc_83A5DD4C;
	// bl 0x83a61820
	ctx.lr = 0x83A5DD4C;
	sub_83A61820(ctx, base);
loc_83A5DD4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d330
	ctx.lr = 0x83A5DD54;
	sub_83A5D330(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5dd6c
	if (cr6.eq) goto loc_83A5DD6C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dd6c
	if (cr6.eq) goto loc_83A5DD6C;
	// bl 0x83a61860
	ctx.lr = 0x83A5DD6C;
	sub_83A61860(ctx, base);
loc_83A5DD6C:
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

__attribute__((alias("__imp__sub_83A5DD80"))) PPC_WEAK_FUNC(sub_83A5DD80);
PPC_FUNC_IMPL(__imp__sub_83A5DD80) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5ddb4
	if (cr6.eq) goto loc_83A5DDB4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5ddb4
	if (cr6.eq) goto loc_83A5DDB4;
	// bl 0x83a61820
	ctx.lr = 0x83A5DDB4;
	sub_83A61820(ctx, base);
loc_83A5DDB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d3f0
	ctx.lr = 0x83A5DDC0;
	sub_83A5D3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5dddc
	if (cr6.eq) goto loc_83A5DDDC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5dddc
	if (cr6.eq) goto loc_83A5DDDC;
	// bl 0x83a61860
	ctx.lr = 0x83A5DDDC;
	sub_83A61860(ctx, base);
loc_83A5DDDC:
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

__attribute__((alias("__imp__sub_83A5DDF8"))) PPC_WEAK_FUNC(sub_83A5DDF8);
PPC_FUNC_IMPL(__imp__sub_83A5DDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5DE00;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5de2c
	if (cr6.eq) goto loc_83A5DE2C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5de2c
	if (cr6.eq) goto loc_83A5DE2C;
	// bl 0x83a61820
	ctx.lr = 0x83A5DE2C;
	sub_83A61820(ctx, base);
loc_83A5DE2C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d4f0
	ctx.lr = 0x83A5DE40;
	sub_83A5D4F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5de58
	if (cr6.eq) goto loc_83A5DE58;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5de58
	if (cr6.eq) goto loc_83A5DE58;
	// bl 0x83a61860
	ctx.lr = 0x83A5DE58;
	sub_83A61860(ctx, base);
loc_83A5DE58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5DE60"))) PPC_WEAK_FUNC(sub_83A5DE60);
PPC_FUNC_IMPL(__imp__sub_83A5DE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5DE68;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5de90
	if (cr6.eq) goto loc_83A5DE90;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5de90
	if (cr6.eq) goto loc_83A5DE90;
	// bl 0x83a61820
	ctx.lr = 0x83A5DE90;
	sub_83A61820(ctx, base);
loc_83A5DE90:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d648
	ctx.lr = 0x83A5DEA0;
	sub_83A5D648(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5deb8
	if (cr6.eq) goto loc_83A5DEB8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5deb8
	if (cr6.eq) goto loc_83A5DEB8;
	// bl 0x83a61860
	ctx.lr = 0x83A5DEB8;
	sub_83A61860(ctx, base);
loc_83A5DEB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5DEC0"))) PPC_WEAK_FUNC(sub_83A5DEC0);
PPC_FUNC_IMPL(__imp__sub_83A5DEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5DEC8;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5def0
	if (cr6.eq) goto loc_83A5DEF0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5def0
	if (cr6.eq) goto loc_83A5DEF0;
	// bl 0x83a61820
	ctx.lr = 0x83A5DEF0;
	sub_83A61820(ctx, base);
loc_83A5DEF0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d748
	ctx.lr = 0x83A5DF00;
	sub_83A5D748(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5df18
	if (cr6.eq) goto loc_83A5DF18;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5df18
	if (cr6.eq) goto loc_83A5DF18;
	// bl 0x83a61860
	ctx.lr = 0x83A5DF18;
	sub_83A61860(ctx, base);
loc_83A5DF18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5DF20"))) PPC_WEAK_FUNC(sub_83A5DF20);
PPC_FUNC_IMPL(__imp__sub_83A5DF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5DF28;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5df54
	if (cr6.eq) goto loc_83A5DF54;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5df54
	if (cr6.eq) goto loc_83A5DF54;
	// bl 0x83a61820
	ctx.lr = 0x83A5DF54;
	sub_83A61820(ctx, base);
loc_83A5DF54:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5d8a0
	ctx.lr = 0x83A5DF68;
	sub_83A5D8A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a5df84
	if (cr6.eq) goto loc_83A5DF84;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5df84
	if (cr6.eq) goto loc_83A5DF84;
	// bl 0x83a61860
	ctx.lr = 0x83A5DF84;
	sub_83A61860(ctx, base);
loc_83A5DF84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5DF90"))) PPC_WEAK_FUNC(sub_83A5DF90);
PPC_FUNC_IMPL(__imp__sub_83A5DF90) {
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
	// bl 0x83a61820
	ctx.lr = 0x83A5DFB0;
	sub_83A61820(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5da60
	ctx.lr = 0x83A5DFC0;
	sub_83A5DA60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a61860
	ctx.lr = 0x83A5DFC8;
	sub_83A61860(ctx, base);
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

__attribute__((alias("__imp__sub_83A5DFE4"))) PPC_WEAK_FUNC(sub_83A5DFE4);
PPC_FUNC_IMPL(__imp__sub_83A5DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5DFE8"))) PPC_WEAK_FUNC(sub_83A5DFE8);
PPC_FUNC_IMPL(__imp__sub_83A5DFE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// stw r3,4628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4628, ctx.r3.u32);
	// addi r8,r11,384
	ctx.r8.s64 = ctx.r11.s64 + 384;
	// stw r11,4632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4632, ctx.r11.u32);
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
	// addi r6,r3,512
	ctx.r6.s64 = ctx.r3.s64 + 512;
	// stw r8,4636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4636, ctx.r8.u32);
	// addi r5,r3,640
	ctx.r5.s64 = ctx.r3.s64 + 640;
	// stw r10,4624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4624, ctx.r10.u32);
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// stw r9,5256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5256, ctx.r9.u32);
	// stw r7,5260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5260, ctx.r7.u32);
	// stw r6,5264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5264, ctx.r6.u32);
	// stw r5,5268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5268, ctx.r5.u32);
	// stw r3,5272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5272, ctx.r3.u32);
	// stw r4,5276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5276, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5E034"))) PPC_WEAK_FUNC(sub_83A5E034);
PPC_FUNC_IMPL(__imp__sub_83A5E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E038"))) PPC_WEAK_FUNC(sub_83A5E038);
PPC_FUNC_IMPL(__imp__sub_83A5E038) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,2816
	ctx.r11.s64 = ctx.r3.s64 + 2816;
	// addi r10,r3,768
	ctx.r10.s64 = ctx.r3.s64 + 768;
	// addi r9,r3,5256
	ctx.r9.s64 = ctx.r3.s64 + 5256;
	// stw r11,4544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4544, ctx.r11.u32);
	// stw r10,4516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4516, ctx.r10.u32);
	// stw r9,4520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4520, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5E054"))) PPC_WEAK_FUNC(sub_83A5E054);
PPC_FUNC_IMPL(__imp__sub_83A5E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E058"))) PPC_WEAK_FUNC(sub_83A5E058);
PPC_FUNC_IMPL(__imp__sub_83A5E058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5e06c
	if (!cr6.eq) goto loc_83A5E06C;
loc_83A5E064:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83A5E06C:
	// lwz r10,4744(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4744);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x83a5e064
	if (!cr6.eq) goto loc_83A5E064;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-10576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5E088"))) PPC_WEAK_FUNC(sub_83A5E088);
PPC_FUNC_IMPL(__imp__sub_83A5E088) {
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
	// bl 0x83102db0
	ctx.lr = 0x83A5E098;
	sub_83102DB0(ctx, base);
	// bl 0x83a64630
	ctx.lr = 0x83A5E09C;
	sub_83A64630(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83A5E0A0;
	sub_83102DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5E0B0"))) PPC_WEAK_FUNC(sub_83A5E0B0);
PPC_FUNC_IMPL(__imp__sub_83A5E0B0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5e10c
	if (cr6.eq) goto loc_83A5E10C;
	// lwz r11,4744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5e10c
	if (!cr6.eq) goto loc_83A5E10C;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r3,-10576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10576, ctx.r3.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A5E0E4;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a64678
	ctx.lr = 0x83A5E0EC;
	sub_83A64678(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
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
loc_83A5E10C:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,513
	ctx.r4.u64 = ctx.r4.u64 | 513;
	// bl 0x83a5f328
	ctx.lr = 0x83A5E11C;
	sub_83A5F328(ctx, base);
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

__attribute__((alias("__imp__sub_83A5E130"))) PPC_WEAK_FUNC(sub_83A5E130);
PPC_FUNC_IMPL(__imp__sub_83A5E130) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5e1a0
	if (!cr6.eq) goto loc_83A5E1A0;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r9,r11,-10576
	ctx.r9.s64 = ctx.r11.s64 + -10576;
	// lwz r10,1116(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1116);
	// lwz r11,1120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1120);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a5e198
	if (!cr6.gt) goto loc_83A5E198;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r10,r10,r8
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 33024;
loc_83A5E178:
	// lwz r8,4744(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4744);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83a5e190
	if (!cr6.eq) goto loc_83A5E190;
	// addi r8,r4,1188
	ctx.r8.s64 = ctx.r4.s64 + 1188;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
loc_83A5E190:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x83a5e178
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5E178;
loc_83A5E198:
	// addi r11,r9,1032
	ctx.r11.s64 = ctx.r9.s64 + 1032;
	// b 0x83a5e1b8
	goto loc_83A5E1B8;
loc_83A5E1A0:
	// lwz r11,4744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5e1d8
	if (!cr6.eq) goto loc_83A5E1D8;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r3,-10576(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10576, ctx.r3.u32);
	// addi r11,r3,4752
	ctx.r11.s64 = ctx.r3.s64 + 4752;
loc_83A5E1B8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A5E1C4;
	sub_83102DB0(ctx, base);
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
loc_83A5E1D8:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,514
	ctx.r4.u64 = ctx.r4.u64 | 514;
	// bl 0x83a5f328
	ctx.lr = 0x83A5E1E8;
	sub_83A5F328(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5E1F8"))) PPC_WEAK_FUNC(sub_83A5E1F8);
PPC_FUNC_IMPL(__imp__sub_83A5E1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5E200;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r30,r11,-10568
	ctx.r30.s64 = ctx.r11.s64 + -10568;
	// addi r9,r10,-10376
	ctx.r9.s64 = ctx.r10.s64 + -10376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// bl 0x83572958
	ctx.lr = 0x83A5E224;
	sub_83572958(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5e238
	if (cr6.eq) goto loc_83A5E238;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65283
	ctx.r4.u64 = ctx.r4.u64 | 65283;
	// b 0x83a5e274
	goto loc_83A5E274;
loc_83A5E238:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r11,-10204
	ctx.r3.s64 = ctx.r11.s64 + -10204;
	// li r4,5420
	ctx.r4.s64 = 5420;
	// bl 0x83a618a0
	ctx.lr = 0x83A5E24C;
	sub_83A618A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5e260
	if (cr6.eq) goto loc_83A5E260;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65287
	ctx.r4.u64 = ctx.r4.u64 | 65287;
	// b 0x83a5e274
	goto loc_83A5E274;
loc_83A5E260:
	// bl 0x83a5f178
	ctx.lr = 0x83A5E264;
	sub_83A5F178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5e2a0
	if (cr6.eq) goto loc_83A5E2A0;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// ori r4,r4,65289
	ctx.r4.u64 = ctx.r4.u64 | 65289;
loc_83A5E274:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a5f328
	ctx.lr = 0x83A5E27C;
	sub_83A5F328(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5e2a0
	if (cr6.eq) goto loc_83A5E2A0;
	// lis r11,-253
	ctx.r11.s64 = -16580608;
	// ori r11,r11,65285
	ctx.r11.u64 = ctx.r11.u64 | 65285;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a5e3e4
	if (!cr6.eq) goto loc_83A5E3E4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5E2A0:
	// addi r11,r31,127
	ctx.r11.s64 = ctx.r31.s64 + 127;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// rlwinm r29,r11,0,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r5,r10,11,2,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x3FFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a645b0
	ctx.lr = 0x83A5E2BC;
	sub_83A645B0(ctx, base);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// mulli r11,r27,5504
	ctx.r11.s64 = ctx.r27.s64 * 5504;
	// addi r4,r9,-10280
	ctx.r4.s64 = ctx.r9.s64 + -10280;
	// addi r3,r30,1024
	ctx.r3.s64 = ctx.r30.s64 + 1024;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83a645a8
	ctx.lr = 0x83A5E2D8;
	sub_83A645A8(ctx, base);
	// addi r31,r28,1056
	ctx.r31.s64 = ctx.r28.s64 + 1056;
	// stw r28,1100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1100, ctx.r28.u32);
	// stw r31,1104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1104, ctx.r31.u32);
	// stw r27,1108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1108, ctx.r27.u32);
	// stw r29,1112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1112, ctx.r29.u32);
	// bl 0x83102db0
	ctx.lr = 0x83A5E2F0;
	sub_83102DB0(ctx, base);
	// bl 0x83a5f478
	ctx.lr = 0x83A5E2F4;
	sub_83A5F478(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x83A5E2F8;
	sub_83102DB0(ctx, base);
	// bl 0x83a64628
	ctx.lr = 0x83A5E2FC;
	sub_83A64628(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,4656
	ctx.r3.s64 = ctx.r31.s64 + 4656;
	// bl 0x83a64470
	ctx.lr = 0x83A5E308;
	sub_83A64470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a66b70
	ctx.lr = 0x83A5E310;
	sub_83A66B70(ctx, base);
	// bl 0x83a652f8
	ctx.lr = 0x83A5E314;
	sub_83A652F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a66640
	ctx.lr = 0x83A5E31C;
	sub_83A66640(ctx, base);
	// li r11,384
	ctx.r11.s64 = 384;
	// addi r29,r31,6112
	ctx.r29.s64 = ctx.r31.s64 + 6112;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A5E330:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83a5e330
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5E330;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A5E348:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83a5e348
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5E348;
	// li r10,384
	ctx.r10.s64 = 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A5E36C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83a5e36c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5E36C;
	// lis r31,-31738
	ctx.r31.s64 = -2079981568;
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r11,5388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5388, ctx.r11.u32);
	// beq cr6,0x83a5e3a0
	if (cr6.eq) goto loc_83A5E3A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a644d8
	ctx.lr = 0x83A5E398;
	sub_83A644D8(ctx, base);
	// addi r11,r29,384
	ctx.r11.s64 = ctx.r29.s64 + 384;
	// stw r11,5388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5388, ctx.r11.u32);
loc_83A5E3A0:
	// lwz r11,1108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5e3dc
	if (!cr6.gt) goto loc_83A5E3DC;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,1112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1112);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-28280
	ctx.r11.s64 = ctx.r11.s64 + -28280;
	// divwu r10,r10,r9
	ctx.r10.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 33024;
loc_83A5E3D4:
	// stwux r9,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a5e3d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5E3D4;
loc_83A5E3DC:
	// bl 0x83102db0
	ctx.lr = 0x83A5E3E0;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A5E3E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5E3EC"))) PPC_WEAK_FUNC(sub_83A5E3EC);
PPC_FUNC_IMPL(__imp__sub_83A5E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E3F0"))) PPC_WEAK_FUNC(sub_83A5E3F0);
PPC_FUNC_IMPL(__imp__sub_83A5E3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A5E3F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-9544
	ctx.r4.s64 = ctx.r10.s64 + -9544;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// lwz r10,5384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5384);
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// lis r7,-31738
	ctx.r7.s64 = -2079981568;
	// lis r6,-31738
	ctx.r6.s64 = -2079981568;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lis r5,-31738
	ctx.r5.s64 = -2079981568;
	// lis r3,-31738
	ctx.r3.s64 = -2079981568;
	// stw r10,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r10.u32);
	// addi r27,r11,4576
	ctx.r27.s64 = ctx.r11.s64 + 4576;
	// lwz r10,5368(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5368);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,4372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4372, ctx.r10.u32);
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r10,r11,4352
	ctx.r10.s64 = ctx.r11.s64 + 4352;
	// lwz r11,5344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5344);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// stw r8,4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4376, ctx.r8.u32);
	// lis r28,-31738
	ctx.r28.s64 = -2079981568;
	// lwz r11,5380(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5380);
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// stw r7,4380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4380, ctx.r7.u32);
	// addi r29,r31,2816
	ctx.r29.s64 = ctx.r31.s64 + 2816;
	// lwz r11,5300(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5300);
	// addi r7,r31,256
	ctx.r7.s64 = ctx.r31.s64 + 256;
	// stw r11,4384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4384, ctx.r11.u32);
	// addi r8,r29,384
	ctx.r8.s64 = ctx.r29.s64 + 384;
	// lwz r11,5304(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5304);
	// addi r6,r31,384
	ctx.r6.s64 = ctx.r31.s64 + 384;
	// stw r11,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,5376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5376);
	// addi r26,r31,512
	ctx.r26.s64 = ctx.r31.s64 + 512;
	// stw r27,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r27.u32);
	// addi r25,r31,640
	ctx.r25.s64 = ctx.r31.s64 + 640;
	// stw r11,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r11.u32);
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// stw r9,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r10.u32);
	// addi r3,r31,4752
	ctx.r3.s64 = ctx.r31.s64 + 4752;
	// lwz r11,5388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5388);
	// addi r28,r31,5256
	ctx.r28.s64 = ctx.r31.s64 + 5256;
	// stw r11,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4624, ctx.r11.u32);
	// stw r31,4628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4628, ctx.r31.u32);
	// stw r29,4632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4632, ctx.r29.u32);
	// stw r8,4636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4636, ctx.r8.u32);
	// stw r7,5256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5256, ctx.r7.u32);
	// stw r6,5260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5260, ctx.r6.u32);
	// stw r26,5264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5264, ctx.r26.u32);
	// stw r25,5268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5268, ctx.r25.u32);
	// stw r31,5272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5272, ctx.r31.u32);
	// stw r27,5276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5276, ctx.r27.u32);
	// stw r30,4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4748, ctx.r30.u32);
	// bl 0x83a645a8
	ctx.lr = 0x83A5E4F0;
	sub_83A645A8(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r30,4820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4820, ctx.r30.u32);
	// addi r3,r31,4956
	ctx.r3.s64 = ctx.r31.s64 + 4956;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r30,4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4824, ctx.r30.u32);
	// stw r9,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r9.u32);
	// bl 0x83a5f308
	ctx.lr = 0x83A5E50C;
	sub_83A5F308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a66c20
	ctx.lr = 0x83A5E514;
	sub_83A66C20(ctx, base);
	// addi r3,r31,4472
	ctx.r3.s64 = ctx.r31.s64 + 4472;
	// bl 0x83a660a0
	ctx.lr = 0x83A5E51C;
	sub_83A660A0(ctx, base);
	// addi r8,r31,768
	ctx.r8.s64 = ctx.r31.s64 + 768;
	// addi r3,r31,4828
	ctx.r3.s64 = ctx.r31.s64 + 4828;
	// stw r29,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r29.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r28,4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4520, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A5E53C;
	sub_831CDCF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4828, ctx.r30.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r30,4832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4832, ctx.r30.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r30,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r30.u32);
	// stw r30,4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4840, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,4844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4844, ctx.r30.u32);
	// stw r30,4848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4848, ctx.r30.u32);
	// stw r30,4852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4852, ctx.r30.u32);
	// stw r30,4856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4856, ctx.r30.u32);
	// stw r30,4860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4860, ctx.r30.u32);
	// stw r30,4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4864, ctx.r30.u32);
	// stw r30,4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4868, ctx.r30.u32);
	// stw r30,4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4872, ctx.r30.u32);
	// stw r30,4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4876, ctx.r30.u32);
	// stw r30,4880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4880, ctx.r30.u32);
	// stw r7,4884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4884, ctx.r7.u32);
	// stw r9,4888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4888, ctx.r9.u32);
	// stw r9,4892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4892, ctx.r9.u32);
	// stw r9,4896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4896, ctx.r9.u32);
	// stw r30,4900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4900, ctx.r30.u32);
	// stw r30,4904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4904, ctx.r30.u32);
	// sth r11,4908(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4908, ctx.r11.u16);
	// sth r11,4910(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4910, ctx.r11.u16);
	// stb r30,4912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4912, ctx.r30.u8);
	// stb r11,4913(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4913, ctx.r11.u8);
	// stb r11,4914(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4914, ctx.r11.u8);
	// stb r11,4915(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4915, ctx.r11.u8);
	// stb r30,4916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4916, ctx.r30.u8);
	// stb r9,4917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4917, ctx.r9.u8);
	// stb r30,4918(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4918, ctx.r30.u8);
	// stb r30,4919(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4919, ctx.r30.u8);
	// stb r30,4920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4920, ctx.r30.u8);
	// stb r10,4921(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4921, ctx.r10.u8);
	// stb r11,4922(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4922, ctx.r11.u8);
	// stb r11,4923(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4923, ctx.r11.u8);
	// stb r11,4924(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4924, ctx.r11.u8);
	// stb r30,4925(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4925, ctx.r30.u8);
	// stb r10,4926(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4926, ctx.r10.u8);
	// stb r10,4927(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4927, ctx.r10.u8);
	// stb r10,4928(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4928, ctx.r10.u8);
	// stw r30,4932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4932, ctx.r30.u32);
	// stw r30,5280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5280, ctx.r30.u32);
	// stw r30,5284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5284, ctx.r30.u32);
	// stw r30,5240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5240, ctx.r30.u32);
	// stw r30,5244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5244, ctx.r30.u32);
	// stw r30,5248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5248, ctx.r30.u32);
	// stw r30,5252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5252, ctx.r30.u32);
	// stw r30,5300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5300, ctx.r30.u32);
loc_83A5E60C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5f6e8
	ctx.lr = 0x83A5E624;
	sub_83A5F6E8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// blt cr6,0x83a5e60c
	if (cr6.lt) goto loc_83A5E60C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5f710
	ctx.lr = 0x83A5E640;
	sub_83A5F710(ctx, base);
	// stw r30,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a64638
	ctx.lr = 0x83A5E64C;
	sub_83A64638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x83A5E654;
	sub_83572958(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,5328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5328, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4744, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5E66C"))) PPC_WEAK_FUNC(sub_83A5E66C);
PPC_FUNC_IMPL(__imp__sub_83A5E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E670"))) PPC_WEAK_FUNC(sub_83A5E670);
PPC_FUNC_IMPL(__imp__sub_83A5E670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-9544
	ctx.r9.s64 = ctx.r10.s64 + -9544;
	// lwz r3,88(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r9,84(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a5e6b0
	if (!cr6.gt) goto loc_83A5E6B0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 33024;
loc_83A5E694:
	// lwz r8,4744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4744);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x83a5e6b8
	if (cr6.eq) goto loc_83A5E6B8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a5e694
	if (cr6.lt) goto loc_83A5E694;
loc_83A5E6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A5E6B8:
	// b 0x83a5e3f0
	sub_83A5E3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5E6BC"))) PPC_WEAK_FUNC(sub_83A5E6BC);
PPC_FUNC_IMPL(__imp__sub_83A5E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E6C0"))) PPC_WEAK_FUNC(sub_83A5E6C0);
PPC_FUNC_IMPL(__imp__sub_83A5E6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x83a5e6d0
	if (cr6.lt) goto loc_83A5E6D0;
	// li r10,5
	ctx.r10.s64 = 5;
loc_83A5E6D0:
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,19260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19260, ctx.r10.u32);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r9,r11,-9448
	ctx.r9.s64 = ctx.r11.s64 + -9448;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_83A5E6F0:
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
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83a5e6f0
	if (!cr0.eq) goto loc_83A5E6F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5E71C"))) PPC_WEAK_FUNC(sub_83A5E71C);
PPC_FUNC_IMPL(__imp__sub_83A5E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E720"))) PPC_WEAK_FUNC(sub_83A5E720);
PPC_FUNC_IMPL(__imp__sub_83A5E720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A5E728;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83a5e7d4
	if (cr6.eq) goto loc_83A5E7D4;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,19252
	ctx.r29.s64 = ctx.r11.s64 + 19252;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a5e7d4
	if (!cr6.gt) goto loc_83A5E7D4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_83A5E76C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x83a5e7b8
	if (!cr6.lt) goto loc_83A5E7B8;
loc_83A5E778:
	// slw r11,r25,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// and r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a5e790
	if (cr6.eq) goto loc_83A5E790;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(ctx.r27.s32, 5, xer);
	// blt cr6,0x83a5e7a0
	if (cr6.lt) goto loc_83A5E7A0;
loc_83A5E790:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x83a5e778
	if (cr6.lt) goto loc_83A5E778;
	// b 0x83a5e7b8
	goto loc_83A5E7B8;
loc_83A5E7A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bl 0x83a67478
	ctx.lr = 0x83A5E7B0;
	sub_83A67478(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_83A5E7B8:
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// blt cr6,0x83a5e76c
	if (cr6.lt) goto loc_83A5E76C;
loc_83A5E7D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5E7DC"))) PPC_WEAK_FUNC(sub_83A5E7DC);
PPC_FUNC_IMPL(__imp__sub_83A5E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E7E0"))) PPC_WEAK_FUNC(sub_83A5E7E0);
PPC_FUNC_IMPL(__imp__sub_83A5E7E0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r30,-31739
	ctx.r30.s64 = -2080047104;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,19268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19268);
	// bl 0x83a67898
	ctx.lr = 0x83A5E80C;
	sub_83A67898(ctx, base);
	// li r10,150
	ctx.r10.s64 = 150;
	// lwz r3,19268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19268);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// bl 0x83a67930
	ctx.lr = 0x83A5E81C;
	sub_83A67930(ctx, base);
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

__attribute__((alias("__imp__sub_83A5E834"))) PPC_WEAK_FUNC(sub_83A5E834);
PPC_FUNC_IMPL(__imp__sub_83A5E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E838"))) PPC_WEAK_FUNC(sub_83A5E838);
PPC_FUNC_IMPL(__imp__sub_83A5E838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5E840;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,19248
	ctx.r31.s64 = ctx.r11.s64 + 19248;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a5e944
	if (!cr6.eq) goto loc_83A5E944;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r30,r11,-8528
	ctx.r30.s64 = ctx.r11.s64 + -8528;
	// addi r3,r30,-860
	ctx.r3.s64 = ctx.r30.s64 + -860;
	// bl 0x83a676f8
	ctx.lr = 0x83A5E874;
	sub_83A676F8(ctx, base);
	// addi r10,r30,127
	ctx.r10.s64 = ctx.r30.s64 + 127;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,27648
	ctx.r5.u64 = ctx.r5.u64 | 27648;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5E898;
	sub_831CDCF0(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r28,r11,-9356
	ctx.r28.s64 = ctx.r11.s64 + -9356;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r28,60
	ctx.r11.s64 = ctx.r28.s64 + 60;
	// addi r9,r11,127
	ctx.r9.s64 = ctx.r11.s64 + 127;
	// rlwinm r3,r9,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A5E8BC;
	sub_831CDCF0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83a66cc0
	ctx.lr = 0x83A5E8C8;
	sub_83A66CC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x83a5e944
	if (!cr6.gt) goto loc_83A5E944;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_83A5E8E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,88
	ctx.r4.s64 = 88;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x83a67518
	ctx.lr = 0x83A5E8FC;
	sub_83A67518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x83a5e934
	if (cr6.eq) goto loc_83A5E934;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// bl 0x83a67350
	ctx.lr = 0x83A5E914;
	sub_83A67350(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,12(r28)
	ea = 12 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a5e8e8
	if (cr6.lt) goto loc_83A5E8E8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5E934:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1538
	ctx.r4.u64 = ctx.r4.u64 | 1538;
	// bl 0x83a5f328
	ctx.lr = 0x83A5E944;
	sub_83A5F328(ctx, base);
loc_83A5E944:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5E94C"))) PPC_WEAK_FUNC(sub_83A5E94C);
PPC_FUNC_IMPL(__imp__sub_83A5E94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5E950"))) PPC_WEAK_FUNC(sub_83A5E950);
PPC_FUNC_IMPL(__imp__sub_83A5E950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5E958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,19252
	ctx.r31.s64 = ctx.r11.s64 + 19252;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x83a5e9d0
	if (!cr0.eq) goto loc_83A5E9D0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5e990
	if (cr6.eq) goto loc_83A5E990;
	// bl 0x83a677e8
	ctx.lr = 0x83A5E988;
	sub_83A677E8(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_83A5E990:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r29,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt 0x83a5e9c8
	if (cr0.lt) goto loc_83A5E9C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r29,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
loc_83A5E9A4:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5e9bc
	if (cr6.eq) goto loc_83A5E9BC;
	// bl 0x83a676a0
	ctx.lr = 0x83A5E9B4;
	sub_83A676A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_83A5E9BC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,-128
	ctx.r30.s64 = ctx.r30.s64 + -128;
	// bge 0x83a5e9a4
	if (!cr0.lt) goto loc_83A5E9A4;
loc_83A5E9C8:
	// bl 0x83a66d20
	ctx.lr = 0x83A5E9CC;
	sub_83A66D20(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_83A5E9D0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5E9E8"))) PPC_WEAK_FUNC(sub_83A5E9E8);
PPC_FUNC_IMPL(__imp__sub_83A5E9E8) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,19264(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19264);
loc_83A5EA04:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a5ea48
	if (cr6.eq) goto loc_83A5EA48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,19840
	ctx.r31.s64 = ctx.r31.s64 + 19840;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83a5ea04
	if (cr6.lt) goto loc_83A5EA04;
loc_83A5EA20:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1537
	ctx.r4.u64 = ctx.r4.u64 | 1537;
	// bl 0x83a5f328
	ctx.lr = 0x83A5EA30;
	sub_83A5F328(ctx, base);
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
loc_83A5EA48:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x83a5ea20
	if (!cr6.lt) goto loc_83A5EA20;
	// li r5,19840
	ctx.r5.s64 = 19840;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83A5EA60;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,23130
	ctx.r11.s64 = 1515847680;
	// ori r10,r11,23130
	ctx.r10.u64 = ctx.r11.u64 | 23130;
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

__attribute__((alias("__imp__sub_83A5EA8C"))) PPC_WEAK_FUNC(sub_83A5EA8C);
PPC_FUNC_IMPL(__imp__sub_83A5EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5EA90"))) PPC_WEAK_FUNC(sub_83A5EA90);
PPC_FUNC_IMPL(__imp__sub_83A5EA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5EA98;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5eb90
	if (!cr6.eq) goto loc_83A5EB90;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r28,-31739
	ctx.r28.s64 = -2080047104;
loc_83A5EAB8:
	// lwz r3,19268(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19268);
	// bl 0x83a67898
	ctx.lr = 0x83A5EAC0;
	sub_83A67898(ctx, base);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a5eb18
	if (!cr6.lt) goto loc_83A5EB18;
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a5eb18
	if (!cr6.lt) goto loc_83A5EB18;
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5EAF0;
	sub_831CE980(ctx, base);
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x83a60200
	ctx.lr = 0x83A5EB08;
	sub_83A60200(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// b 0x83a5eb1c
	goto loc_83A5EB1C;
loc_83A5EB18:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83A5EB1C:
	// lwz r3,19268(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19268);
	// bl 0x83a67930
	ctx.lr = 0x83A5EB24;
	sub_83A67930(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a5eb90
	if (!cr6.eq) goto loc_83A5EB90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5EB48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r9.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r8.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r7,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r7.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r6.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83a5eb90
	if (!cr6.eq) goto loc_83A5EB90;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5eab8
	if (cr6.eq) goto loc_83A5EAB8;
loc_83A5EB90:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5EB98"))) PPC_WEAK_FUNC(sub_83A5EB98);
PPC_FUNC_IMPL(__imp__sub_83A5EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83A5EBA0;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r22,r11,19260
	ctx.r22.s64 = ctx.r11.s64 + 19260;
	// stw r23,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r23.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r23,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r23.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r24,-12(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + -12);
	// beq cr6,0x83a5ef28
	if (cr6.eq) goto loc_83A5EF28;
	// lis r10,23130
	ctx.r10.s64 = 1515847680;
	// ori r25,r10,23130
	ctx.r25.u64 = ctx.r10.u64 | 23130;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// beq cr6,0x83a5ef28
	if (cr6.eq) goto loc_83A5EF28;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r10,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5ec58
	if (!cr6.gt) goto loc_83A5EC58;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r28,r10,-9448
	ctx.r28.s64 = ctx.r10.s64 + -9448;
loc_83A5EC10:
	// lwz r10,-8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5ec44
	if (cr6.eq) goto loc_83A5EC44;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r25
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r25.s32, xer);
	// bne cr6,0x83a5ec3c
	if (!cr6.eq) goto loc_83A5EC3C;
	// addi r11,r28,92
	ctx.r11.s64 = ctx.r28.s64 + 92;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
loc_83A5EC3C:
	// bl 0x83a673d8
	ctx.lr = 0x83A5EC40;
	sub_83A673D8(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_83A5EC44:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83a5ec10
	if (cr6.lt) goto loc_83A5EC10;
loc_83A5EC58:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,150
	ctx.r10.s64 = 150;
	// stw r23,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r23.u32);
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// stw r23,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r23.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83a61820
	ctx.lr = 0x83A5EC74;
	sub_83A61820(ctx, base);
	// addi r21,r31,384
	ctx.r21.s64 = ctx.r31.s64 + 384;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5EC88;
	sub_831CE980(ctx, base);
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A5EC98;
	sub_831CE980(ctx, base);
	// bl 0x83a61860
	ctx.lr = 0x83A5EC9C;
	sub_83A61860(ctx, base);
	// lwz r9,384(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A5ECB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r23,32(r26)
	PPC_STORE_U16(ctx.r26.u32 + 32, ctx.r23.u16);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x83a5ef28
	if (!cr6.eq) goto loc_83A5EF28;
loc_83A5ECCC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a60010
	ctx.lr = 0x83A5ECD8;
	sub_83A60010(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5ed88
	if (cr6.eq) goto loc_83A5ED88;
	// lhz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// sth r9,32(r26)
	PPC_STORE_U16(ctx.r26.u32 + 32, ctx.r9.u16);
	// beq cr6,0x83a5ed54
	if (cr6.eq) goto loc_83A5ED54;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A5ED18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r10,150
	cr6.compare<int32_t>(ctx.r10.s32, 150, xer);
	// bge cr6,0x83a5ed7c
	if (!cr6.lt) goto loc_83A5ED7C;
	// addi r9,r10,5
	ctx.r9.s64 = ctx.r10.s64 + 5;
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r7,r3,r20
	ctx.r7.s64 = ctx.r20.s64 - ctx.r3.s64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stw r23,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r23.u32);
	// stw r23,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r23.u32);
	// stw r23,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r23.u32);
	// stw r23,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r23.u32);
	// stw r6,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r6.u32);
loc_83A5ED54:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83a60190
	ctx.lr = 0x83A5ED64;
	sub_83A60190(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a5eccc
	if (cr6.eq) goto loc_83A5ECCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83A5ED7C:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_83A5ED88:
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,-4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// blt cr6,0x83a5eda4
	if (cr6.lt) goto loc_83A5EDA4;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_83A5EDA4:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a5ee38
	if (!cr6.gt) goto loc_83A5EE38;
	// lwz r11,-8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r30,r1,108
	ctx.r30.s64 = ctx.r1.s64 + 108;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_83A5EDC0:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x83a5ee1c
	if (!cr6.lt) goto loc_83A5EE1C;
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// addi r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5EDF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lwz r11,-8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r9,-5488
	ctx.r4.s64 = ctx.r9.s64 + -5488;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x83a671b8
	ctx.lr = 0x83A5EE0C;
	sub_83A671B8(ctx, base);
	// lwz r11,-8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// b 0x83a5ee24
	goto loc_83A5EE24;
loc_83A5EE1C:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
loc_83A5EE24:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, xer);
	// blt cr6,0x83a5edc0
	if (cr6.lt) goto loc_83A5EDC0;
loc_83A5EE38:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x83a5ea90
	ctx.lr = 0x83A5EE4C;
	sub_83A5EA90(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a5ee84
	if (cr6.eq) goto loc_83A5EE84;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a5eebc
	if (!cr6.gt) goto loc_83A5EEBC;
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_83A5EE68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzu r3,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5EE7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83a5ee68
	if (!cr0.eq) goto loc_83A5EE68;
loc_83A5EE84:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x83a5eebc
	if (!cr6.gt) goto loc_83A5EEBC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_83A5EE94:
	// lwz r11,-8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83a5eeb0
	if (cr6.lt) goto loc_83A5EEB0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83a67660
	ctx.lr = 0x83A5EEB0;
	sub_83A67660(ctx, base);
loc_83A5EEB0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bne 0x83a5ee94
	if (!cr0.eq) goto loc_83A5EE94;
loc_83A5EEBC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5EED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf r5,r3,r20
	ctx.r5.s64 = ctx.r20.s64 - ctx.r3.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83a60200
	ctx.lr = 0x83A5EEE4;
	sub_83A60200(ctx, base);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83a5ef28
	if (!cr6.gt) goto loc_83A5EF28;
	// addi r10,r31,536
	ctx.r10.s64 = ctx.r31.s64 + 536;
loc_83A5EEF8:
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,24(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r8,28(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r9.u32);
	// lwzu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r8.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x83a5eef8
	if (cr6.lt) goto loc_83A5EEF8;
loc_83A5EF28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5EF34"))) PPC_WEAK_FUNC(sub_83A5EF34);
PPC_FUNC_IMPL(__imp__sub_83A5EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5EF38"))) PPC_WEAK_FUNC(sub_83A5EF38);
PPC_FUNC_IMPL(__imp__sub_83A5EF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A5EF40;
	__savegprlr_27(ctx, base);
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
	// bl 0x83a5e058
	ctx.lr = 0x83A5EF54;
	sub_83A5E058(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5ef74
	if (cr6.eq) goto loc_83A5EF74;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,521
	ctx.r4.u64 = ctx.r4.u64 | 521;
	// bl 0x83a5f328
	ctx.lr = 0x83A5EF6C;
	sub_83A5F328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5EF74:
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a5f0d8
	if (cr6.eq) goto loc_83A5F0D8;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5f0d8
	if (cr6.eq) goto loc_83A5F0D8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5f0d8
	if (cr6.eq) goto loc_83A5F0D8;
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a5f0d8
	if (!cr6.eq) goto loc_83A5F0D8;
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a5f0d8
	if (!cr6.eq) goto loc_83A5F0D8;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83a5f0d8
	if (!cr6.eq) goto loc_83A5F0D8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x83a5f0d8
	if (cr6.eq) goto loc_83A5F0D8;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a5f0d8
	if (cr6.eq) goto loc_83A5F0D8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83a5f0d8
	if (cr6.eq) goto loc_83A5F0D8;
	// lhz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83a5f0d8
	if (!cr6.gt) goto loc_83A5F0D8;
	// lhz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a5f0d8
	if (!cr6.gt) goto loc_83A5F0D8;
	// cmpwi cr6,r10,16384
	cr6.compare<int32_t>(ctx.r10.s32, 16384, xer);
	// bgt cr6,0x83a5f0d8
	if (cr6.gt) goto loc_83A5F0D8;
	// cmpwi cr6,r11,16384
	cr6.compare<int32_t>(ctx.r11.s32, 16384, xer);
	// bgt cr6,0x83a5f0d8
	if (cr6.gt) goto loc_83A5F0D8;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a5f0d8
	if (!cr6.eq) goto loc_83A5F0D8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a5f0d8
	if (!cr6.eq) goto loc_83A5F0D8;
	// lwz r11,5240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5f040
	if (!cr6.eq) goto loc_83A5F040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5ab8
	ctx.lr = 0x83A5F038;
	sub_82EF5AB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5F040:
	// addi r3,r31,4976
	ctx.r3.s64 = ctx.r31.s64 + 4976;
	// lwz r28,4968(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r27,4972(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r31,4956
	ctx.r11.s64 = ctx.r31.s64 + 4956;
	// bl 0x831ce980
	ctx.lr = 0x83A5F05C;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a64ed8
	ctx.lr = 0x83A5F064;
	sub_83A64ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a66ba8
	ctx.lr = 0x83A5F06C;
	sub_83A66BA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a66bf8
	ctx.lr = 0x83A5F074;
	sub_83A66BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a666a0
	ctx.lr = 0x83A5F07C;
	sub_83A666A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a667e8
	ctx.lr = 0x83A5F084;
	sub_83A667E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a649a8
	ctx.lr = 0x83A5F090;
	sub_83A649A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83A5F09C;
	sub_83102DB0(ctx, base);
	// addi r4,r31,4828
	ctx.r4.s64 = ctx.r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x831ce980
	ctx.lr = 0x83A5F0AC;
	sub_831CE980(ctx, base);
	// lwz r11,4968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// lwz r9,4972(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4972);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r27.s64;
	// stw r8,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r8.u32);
	// lhz r7,5036(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5036);
	// sth r7,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A5F0D8:
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,774
	ctx.r4.u64 = ctx.r4.u64 | 774;
	// bl 0x83a5f328
	ctx.lr = 0x83A5F0E8;
	sub_83A5F328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5F0F0"))) PPC_WEAK_FUNC(sub_83A5F0F0);
PPC_FUNC_IMPL(__imp__sub_83A5F0F0) {
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
	// bl 0x83a5e058
	ctx.lr = 0x83A5F108;
	sub_83A5E058(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5f134
	if (cr6.eq) goto loc_83A5F134;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,529
	ctx.r4.u64 = ctx.r4.u64 | 529;
	// bl 0x83a5f328
	ctx.lr = 0x83A5F120;
	sub_83A5F328(ctx, base);
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
loc_83A5F134:
	// lwz r11,5240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5240);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r10.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a5f150
	if (!cr6.eq) goto loc_83A5F150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x83A5F150;
	sub_83102DB0(ctx, base);
loc_83A5F150:
	// lwz r3,5416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a5f160
	if (cr6.eq) goto loc_83A5F160;
	// bl 0x83a5e7e0
	ctx.lr = 0x83A5F160;
	sub_83A5E7E0(ctx, base);
loc_83A5F160:
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

__attribute__((alias("__imp__sub_83A5F174"))) PPC_WEAK_FUNC(sub_83A5F174);
PPC_FUNC_IMPL(__imp__sub_83A5F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F178"))) PPC_WEAK_FUNC(sub_83A5F178);
PPC_FUNC_IMPL(__imp__sub_83A5F178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A5F188:
	// ori r11,r10,256
	ctx.r11.u64 = ctx.r10.u64 | 256;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bne cr6,0x83a5f19c
	if (!cr6.eq) goto loc_83A5F19C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F19C:
	// cmplwi cr6,r11,257
	cr6.compare<uint32_t>(ctx.r11.u32, 257, xer);
	// bne cr6,0x83a5f1ac
	if (!cr6.eq) goto loc_83A5F1AC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F1AC:
	// ble cr6,0x83a5f1c0
	if (!cr6.gt) goto loc_83A5F1C0;
	// cmplwi cr6,r11,431
	cr6.compare<uint32_t>(ctx.r11.u32, 431, xer);
	// bgt cr6,0x83a5f1c0
	if (cr6.gt) goto loc_83A5F1C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F1C0:
	// cmplwi cr6,r11,434
	cr6.compare<uint32_t>(ctx.r11.u32, 434, xer);
	// bne cr6,0x83a5f1d0
	if (!cr6.eq) goto loc_83A5F1D0;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F1D0:
	// cmplwi cr6,r11,435
	cr6.compare<uint32_t>(ctx.r11.u32, 435, xer);
	// bne cr6,0x83a5f1e0
	if (!cr6.eq) goto loc_83A5F1E0;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F1E0:
	// cmplwi cr6,r11,437
	cr6.compare<uint32_t>(ctx.r11.u32, 437, xer);
	// bne cr6,0x83a5f1f0
	if (!cr6.eq) goto loc_83A5F1F0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F1F0:
	// cmplwi cr6,r11,439
	cr6.compare<uint32_t>(ctx.r11.u32, 439, xer);
	// bne cr6,0x83a5f200
	if (!cr6.eq) goto loc_83A5F200;
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x83a5f210
	goto loc_83A5F210;
loc_83A5F200:
	// addi r11,r11,-440
	ctx.r11.s64 = ctx.r11.s64 + -440;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
loc_83A5F210:
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83a5f188
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5F188;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// addi r10,r10,-10120
	ctx.r10.s64 = ctx.r10.s64 + -10120;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
loc_83A5F234:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x83a5f254
	if (!cr0.eq) goto loc_83A5F254;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x83a5f234
	if (!cr6.eq) goto loc_83A5F234;
loc_83A5F254:
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F260"))) PPC_WEAK_FUNC(sub_83A5F260);
PPC_FUNC_IMPL(__imp__sub_83A5F260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x83a5f28c
	if (cr6.eq) goto loc_83A5F28C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A5F28C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r9,r11,-10120
	ctx.r9.s64 = ctx.r11.s64 + -10120;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F2A0"))) PPC_WEAK_FUNC(sub_83A5F2A0);
PPC_FUNC_IMPL(__imp__sub_83A5F2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r8,-256
	ctx.r8.s64 = -256;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83a5f2f4
	if (!cr6.gt) goto loc_83A5F2F4;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r7,r10,-10120
	ctx.r7.s64 = ctx.r10.s64 + -10120;
loc_83A5F2B8:
	// lbzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r10
	// cmplwi cr6,r8,256
	cr6.compare<uint32_t>(ctx.r8.u32, 256, xer);
	// bne cr6,0x83a5f2e0
	if (!cr6.eq) goto loc_83A5F2E0;
	// lbzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// and r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x83a5f2fc
	if (!cr6.eq) goto loc_83A5F2FC;
loc_83A5F2E0:
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x83a5f2b8
	if (cr6.lt) goto loc_83A5F2B8;
loc_83A5F2F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A5F2FC:
	// addi r3,r10,-3
	ctx.r3.s64 = ctx.r10.s64 + -3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F304"))) PPC_WEAK_FUNC(sub_83A5F304);
PPC_FUNC_IMPL(__imp__sub_83A5F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F308"))) PPC_WEAK_FUNC(sub_83A5F308);
PPC_FUNC_IMPL(__imp__sub_83A5F308) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F324"))) PPC_WEAK_FUNC(sub_83A5F324);
PPC_FUNC_IMPL(__imp__sub_83A5F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F328"))) PPC_WEAK_FUNC(sub_83A5F328);
PPC_FUNC_IMPL(__imp__sub_83A5F328) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5f374
	if (!cr6.eq) goto loc_83A5F374;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,19276
	ctx.r11.s64 = ctx.r11.s64 + 19276;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// beq cr6,0x83a5f39c
	if (cr6.eq) goto loc_83A5F39C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a5f39c
	if (cr6.eq) goto loc_83A5F39C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x83a5f394
	goto loc_83A5F394;
loc_83A5F374:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,4964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4964, ctx.r31.u32);
	// beq cr6,0x83a5f39c
	if (cr6.eq) goto loc_83A5F39C;
	// lwz r11,4956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a5f39c
	if (cr6.eq) goto loc_83A5F39C;
	// lwz r3,4960(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4960);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A5F394:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83A5F39C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5F39C:
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

__attribute__((alias("__imp__sub_83A5F3B4"))) PPC_WEAK_FUNC(sub_83A5F3B4);
PPC_FUNC_IMPL(__imp__sub_83A5F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F3B8"))) PPC_WEAK_FUNC(sub_83A5F3B8);
PPC_FUNC_IMPL(__imp__sub_83A5F3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5F3C0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5f3f0
	if (!cr6.eq) goto loc_83A5F3F0;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r11,r11,19276
	ctx.r11.s64 = ctx.r11.s64 + 19276;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5F3F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5e058
	ctx.lr = 0x83A5F3F8;
	sub_83A5E058(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a5f444
	if (cr6.eq) goto loc_83A5F444;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r10,-253
	ctx.r10.s64 = -16580608;
	// addi r11,r11,19276
	ctx.r11.s64 = ctx.r11.s64 + 19276;
	// ori r31,r10,515
	ctx.r31.u64 = ctx.r10.u64 | 515;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a5f438
	if (cr6.eq) goto loc_83A5F438;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5F438;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A5F438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5F444:
	// addi r11,r31,4956
	ctx.r11.s64 = ctx.r31.s64 + 4956;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5F45C"))) PPC_WEAK_FUNC(sub_83A5F45C);
PPC_FUNC_IMPL(__imp__sub_83A5F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F460"))) PPC_WEAK_FUNC(sub_83A5F460);
PPC_FUNC_IMPL(__imp__sub_83A5F460) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,19416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F474"))) PPC_WEAK_FUNC(sub_83A5F474);
PPC_FUNC_IMPL(__imp__sub_83A5F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F478"))) PPC_WEAK_FUNC(sub_83A5F478);
PPC_FUNC_IMPL(__imp__sub_83A5F478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A5F480;
	__savegprlr_17(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// addi r11,r11,19296
	ctx.r11.s64 = ctx.r11.s64 + 19296;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r31,-2976
	ctx.r10.s64 = ctx.r31.s64 + -2976;
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// addi r9,r9,-2976
	ctx.r9.s64 = ctx.r9.s64 + -2976;
	// addi r10,r3,-2976
	ctx.r10.s64 = ctx.r3.s64 + -2976;
	// addi r8,r8,-2976
	ctx.r8.s64 = ctx.r8.s64 + -2976;
	// stw r9,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r9.u32);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// stw r8,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r8.u32);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// addi r9,r4,-2976
	ctx.r9.s64 = ctx.r4.s64 + -2976;
	// addi r10,r6,-2976
	ctx.r10.s64 = ctx.r6.s64 + -2976;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// addi r8,r5,-2976
	ctx.r8.s64 = ctx.r5.s64 + -2976;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// addi r9,r7,-2976
	ctx.r9.s64 = ctx.r7.s64 + -2976;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_83A5F4F0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a5f4f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A5F4F0;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// addi r10,r10,-2976
	ctx.r10.s64 = ctx.r10.s64 + -2976;
	// addi r8,r8,-2976
	ctx.r8.s64 = ctx.r8.s64 + -2976;
	// addi r9,r9,-2976
	ctx.r9.s64 = ctx.r9.s64 + -2976;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lis r20,-31834
	ctx.r20.s64 = -2086273024;
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// lis r21,-31834
	ctx.r21.s64 = -2086273024;
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lis r22,-31834
	ctx.r22.s64 = -2086273024;
	// addi r10,r20,-2976
	ctx.r10.s64 = ctx.r20.s64 + -2976;
	// addi r9,r21,-2976
	ctx.r9.s64 = ctx.r21.s64 + -2976;
	// addi r8,r22,-2976
	ctx.r8.s64 = ctx.r22.s64 + -2976;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lis r23,-31834
	ctx.r23.s64 = -2086273024;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lis r24,-31834
	ctx.r24.s64 = -2086273024;
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// lis r25,-31834
	ctx.r25.s64 = -2086273024;
	// addi r10,r23,-2976
	ctx.r10.s64 = ctx.r23.s64 + -2976;
	// addi r9,r24,-2976
	ctx.r9.s64 = ctx.r24.s64 + -2976;
	// addi r8,r25,-2976
	ctx.r8.s64 = ctx.r25.s64 + -2976;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lis r26,-31834
	ctx.r26.s64 = -2086273024;
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// lis r27,-31834
	ctx.r27.s64 = -2086273024;
	// stw r8,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r8.u32);
	// lis r28,-31834
	ctx.r28.s64 = -2086273024;
	// addi r10,r26,-2976
	ctx.r10.s64 = ctx.r26.s64 + -2976;
	// addi r9,r27,-2976
	ctx.r9.s64 = ctx.r27.s64 + -2976;
	// addi r8,r28,-2976
	ctx.r8.s64 = ctx.r28.s64 + -2976;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// lis r30,-31834
	ctx.r30.s64 = -2086273024;
	// stw r8,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r8.u32);
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// addi r10,r29,-2976
	ctx.r10.s64 = ctx.r29.s64 + -2976;
	// addi r9,r30,-2976
	ctx.r9.s64 = ctx.r30.s64 + -2976;
	// addi r8,r31,-2976
	ctx.r8.s64 = ctx.r31.s64 + -2976;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// stw r8,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r8.u32);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// addi r10,r3,-2976
	ctx.r10.s64 = ctx.r3.s64 + -2976;
	// addi r9,r4,-2976
	ctx.r9.s64 = ctx.r4.s64 + -2976;
	// addi r8,r5,-2976
	ctx.r8.s64 = ctx.r5.s64 + -2976;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// stw r8,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r8.u32);
	// addi r10,r6,-2976
	ctx.r10.s64 = ctx.r6.s64 + -2976;
	// addi r9,r7,-2976
	ctx.r9.s64 = ctx.r7.s64 + -2976;
	// lis r17,-31834
	ctx.r17.s64 = -2086273024;
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// stw r9,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r9.u32);
	// lis r18,-31834
	ctx.r18.s64 = -2086273024;
	// lis r19,-31834
	ctx.r19.s64 = -2086273024;
	// lis r20,-31834
	ctx.r20.s64 = -2086273024;
	// lis r21,-31834
	ctx.r21.s64 = -2086273024;
	// lis r22,-31834
	ctx.r22.s64 = -2086273024;
	// lis r23,-31834
	ctx.r23.s64 = -2086273024;
	// lis r24,-31834
	ctx.r24.s64 = -2086273024;
	// lis r25,-31834
	ctx.r25.s64 = -2086273024;
	// lis r26,-31834
	ctx.r26.s64 = -2086273024;
	// lis r27,-31834
	ctx.r27.s64 = -2086273024;
	// lis r28,-31834
	ctx.r28.s64 = -2086273024;
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// lis r30,-31834
	ctx.r30.s64 = -2086273024;
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// addi r8,r8,-2976
	ctx.r8.s64 = ctx.r8.s64 + -2976;
	// addi r10,r17,-2976
	ctx.r10.s64 = ctx.r17.s64 + -2976;
	// addi r9,r18,-2976
	ctx.r9.s64 = ctx.r18.s64 + -2976;
	// stw r8,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r8.u32);
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// addi r10,r19,-2976
	ctx.r10.s64 = ctx.r19.s64 + -2976;
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// addi r9,r20,-2976
	ctx.r9.s64 = ctx.r20.s64 + -2976;
	// addi r8,r21,-2976
	ctx.r8.s64 = ctx.r21.s64 + -2976;
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// stw r9,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r9.u32);
	// addi r10,r22,20744
	ctx.r10.s64 = ctx.r22.s64 + 20744;
	// stw r8,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r8.u32);
	// addi r9,r23,20744
	ctx.r9.s64 = ctx.r23.s64 + 20744;
	// addi r8,r24,21040
	ctx.r8.s64 = ctx.r24.s64 + 21040;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// addi r10,r25,20224
	ctx.r10.s64 = ctx.r25.s64 + 20224;
	// stw r8,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r8.u32);
	// addi r9,r26,20224
	ctx.r9.s64 = ctx.r26.s64 + 20224;
	// addi r8,r27,20224
	ctx.r8.s64 = ctx.r27.s64 + 20224;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r10,r28,20224
	ctx.r10.s64 = ctx.r28.s64 + 20224;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r9,r29,20224
	ctx.r9.s64 = ctx.r29.s64 + 20224;
	// addi r8,r30,20224
	ctx.r8.s64 = ctx.r30.s64 + 20224;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// addi r10,r31,20224
	ctx.r10.s64 = ctx.r31.s64 + 20224;
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// addi r9,r3,20224
	ctx.r9.s64 = ctx.r3.s64 + 20224;
	// addi r8,r4,21456
	ctx.r8.s64 = ctx.r4.s64 + 21456;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// addi r10,r5,21456
	ctx.r10.s64 = ctx.r5.s64 + 21456;
	// addi r9,r6,21696
	ctx.r9.s64 = ctx.r6.s64 + 21696;
	// addi r8,r7,21936
	ctx.r8.s64 = ctx.r7.s64 + 21936;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r8,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r8.u32);
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5F6E8"))) PPC_WEAK_FUNC(sub_83A5F6E8);
PPC_FUNC_IMPL(__imp__sub_83A5F6E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,5336
	ctx.r10.s64 = ctx.r11.s64 + 5336;
	// stw r5,5336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5336, ctx.r5.u32);
	// stw r6,5340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5340, ctx.r6.u32);
	// stw r7,5344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5344, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F70C"))) PPC_WEAK_FUNC(sub_83A5F70C);
PPC_FUNC_IMPL(__imp__sub_83A5F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F710"))) PPC_WEAK_FUNC(sub_83A5F710);
PPC_FUNC_IMPL(__imp__sub_83A5F710) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,5384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5384, ctx.r4.u32);
	// stw r5,5388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5388, ctx.r5.u32);
	// stw r11,5392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F724"))) PPC_WEAK_FUNC(sub_83A5F724);
PPC_FUNC_IMPL(__imp__sub_83A5F724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F728"))) PPC_WEAK_FUNC(sub_83A5F728);
PPC_FUNC_IMPL(__imp__sub_83A5F728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a5f738
	if (cr6.eq) goto loc_83A5F738;
	// lwz r11,5384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5384);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_83A5F738:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,5392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5392);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A5F74C"))) PPC_WEAK_FUNC(sub_83A5F74C);
PPC_FUNC_IMPL(__imp__sub_83A5F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A5F750"))) PPC_WEAK_FUNC(sub_83A5F750);
PPC_FUNC_IMPL(__imp__sub_83A5F750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A5F758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,5332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5332, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4876);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4876, ctx.r10.u32);
	// addi r29,r3,5288
	ctx.r29.s64 = ctx.r3.s64 + 5288;
	// stw r28,5400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5400, ctx.r28.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r28,5404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5404, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4932, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A5F7B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,5288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// rlwinm r11,r7,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x83a5f7d4
	if (cr6.eq) goto loc_83A5F7D4;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
loc_83A5F7D4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// blt cr6,0x83a5f820
	if (cr6.lt) goto loc_83A5F820;
	// addic. r11,r10,-7
	xer.ca = ctx.r10.u32 > 6;
	ctx.r11.s64 = ctx.r10.s64 + -7;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a5f80c
	if (cr0.eq) goto loc_83A5F80C;
	// subfic r9,r11,25
	xer.ca = ctx.r11.u32 <= 25;
	ctx.r9.s64 = 25 - ctx.r11.s64;
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwinm r9,r6,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// b 0x83a5f82c
	goto loc_83A5F82C;
loc_83A5F80C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r8,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x83a5f82c
	goto loc_83A5F82C;
loc_83A5F820:
	// addi r11,r10,25
	ctx.r11.s64 = ctx.r10.s64 + 25;
	// rlwinm r9,r8,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r10,r8,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
loc_83A5F82C:
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r6,r9,26
	ctx.r6.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r5,r8,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r3,r8,26
	ctx.r3.u64 = ctx.r8.u32 & 0x3F;
	// stw r6,4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4872, ctx.r6.u32);
	// rlwinm r9,r5,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// stw r3,4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4868, ctx.r3.u32);
	// clrlwi r6,r9,27
	ctx.r6.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r5,r9,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// stw r8,4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4864, ctx.r8.u32);
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r6,4860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4860, ctx.r6.u32);
	// stw r5,4856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4856, ctx.r5.u32);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// stw r3,5072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5072, ctx.r3.u32);
	// bne cr6,0x83a5f87c
	if (!cr6.eq) goto loc_83A5F87C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x83a5f884
	goto loc_83A5F884;
loc_83A5F87C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A5F884:
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(ctx.r11.s32, 31, xer);
	// stw r10,5076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5076, ctx.r10.u32);
	// bne cr6,0x83a5f8a0
	if (!cr6.eq) goto loc_83A5F8A0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x83a5f8a4
	goto loc_83A5F8A4;
loc_83A5F8A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83A5F8A4:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83a679c0
	ctx.lr = 0x83A5F8CC;
	sub_83A679C0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A5F8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5F904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5F910"))) PPC_WEAK_FUNC(sub_83A5F910);
PPC_FUNC_IMPL(__imp__sub_83A5F910) {
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
	ctx.lr = 0x83A5F918;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,5332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5332, ctx.r11.u32);
	// addi r28,r3,5288
	ctx.r28.s64 = ctx.r3.s64 + 5288;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r31,4828
	ctx.r30.s64 = ctx.r31.s64 + 4828;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A5F958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,5288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// bne cr6,0x83a5f980
	if (!cr6.eq) goto loc_83A5F980;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83A5F980:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// blt cr6,0x83a5f9d4
	if (cr6.lt) goto loc_83A5F9D4;
	// addic. r10,r10,-22
	xer.ca = ctx.r10.u32 > 21;
	ctx.r10.s64 = ctx.r10.s64 + -22;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a5f9bc
	if (cr0.eq) goto loc_83A5F9BC;
	// subfic r9,r10,10
	xer.ca = ctx.r10.u32 <= 10;
	ctx.r9.s64 = 10 - ctx.r10.s64;
	// srw r8,r5,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r5,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,10,22,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FF;
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5f9e4
	goto loc_83A5F9E4;
loc_83A5F9BC:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5f9e4
	goto loc_83A5F9E4;
loc_83A5F9D4:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
loc_83A5F9E4:
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x83a5fa28
	if (cr6.lt) goto loc_83A5FA28;
	// addic. r10,r10,-29
	xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a5fa14
	if (cr0.eq) goto loc_83A5FA14;
	// subfic r9,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r10.s64;
	// srw r8,r5,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r5,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r7,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fa34
	goto loc_83A5FA34;
loc_83A5FA14:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fa34
	goto loc_83A5FA34;
loc_83A5FA28:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83A5FA34:
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// blt cr6,0x83a5fa84
	if (cr6.lt) goto loc_83A5FA84;
	// addic. r10,r10,-16
	xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a5fa6c
	if (cr0.eq) goto loc_83A5FA6C;
	// subfic r9,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// slw r8,r5,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// srw r7,r5,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r6,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF;
	// stw r5,5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5080, ctx.r5.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fa94
	goto loc_83A5FA94;
loc_83A5FA6C:
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r11,5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5080, ctx.r11.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fa94
	goto loc_83A5FA94;
loc_83A5FA84:
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5080, ctx.r9.u32);
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
loc_83A5FA94:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x83a5facc
	if (cr6.eq) goto loc_83A5FACC;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x83a5facc
	if (cr6.eq) goto loc_83A5FACC;
	// lwz r9,5400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5400);
	// lwz r11,5404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5404);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addis r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -65536;
	// stw r11,5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5404, ctx.r11.u32);
	// or r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// b 0x83a5fae8
	goto loc_83A5FAE8;
loc_83A5FACC:
	// lwz r11,5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5400);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,5404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5404, ctx.r9.u32);
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stw r7,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r7.u32);
loc_83A5FAE8:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x83a5faf8
	if (cr6.eq) goto loc_83A5FAF8;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x83a5fb8c
	if (!cr6.eq) goto loc_83A5FB8C;
loc_83A5FAF8:
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// stw r11,5132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5132, ctx.r11.u32);
	// bne cr6,0x83a5fc60
	if (!cr6.eq) goto loc_83A5FC60;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_83A5FB18:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83A5FB24:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// subfic r9,r11,27
	xer.ca = ctx.r11.u32 <= 27;
	ctx.r9.s64 = 27 - ctx.r11.s64;
	// stw r11,5136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5136, ctx.r11.u32);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,5140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5140, ctx.r9.u32);
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// stw r6,5144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5144, ctx.r6.u32);
	// bne cr6,0x83a5fb8c
	if (!cr6.eq) goto loc_83A5FB8C;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// stw r11,5168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5168, ctx.r11.u32);
	// bne cr6,0x83a5fcac
	if (!cr6.eq) goto loc_83A5FCAC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_83A5FB68:
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_83A5FB74:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfic r9,r11,27
	xer.ca = ctx.r11.u32 <= 27;
	ctx.r9.s64 = 27 - ctx.r11.s64;
	// stw r11,5172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5172, ctx.r11.u32);
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5176, ctx.r9.u32);
	// stw r7,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r7.u32);
loc_83A5FB8C:
	// lwz r11,4776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4776);
	// lis r7,-32205
	ctx.r7.s64 = -2110586880;
	// lwz r6,4768(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4768);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r30,r7,-9864
	ctx.r30.s64 = ctx.r7.s64 + -9864;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r26,-31739
	ctx.r26.s64 = -2080047104;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r11,r26,19296
	ctx.r11.s64 = ctx.r26.s64 + 19296;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r3,5084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5084, ctx.r3.u32);
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,124
	ctx.r7.s64 = ctx.r11.s64 + 124;
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// addi r30,r11,204
	ctx.r30.s64 = ctx.r11.s64 + 204;
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r3,5088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5088, ctx.r3.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r11,5100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5100, ctx.r11.u32);
	// lwzx r9,r4,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stw r9,5108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5108, ctx.r9.u32);
	// lwzx r7,r4,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,5112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5112, ctx.r7.u32);
	// lwzx r4,r4,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// stw r4,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r4.u32);
	// stw r6,5104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5104, ctx.r6.u32);
	// bge cr6,0x83a5fd1c
	if (!cr6.lt) goto loc_83A5FD1C;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r10,7
	ctx.r11.s64 = ctx.r10.s64 + 7;
	// lwz r6,5292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
loc_83A5FC38:
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83a5fcf8
	if (cr6.lt) goto loc_83A5FCF8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r8,r5,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fcfc
	goto loc_83A5FCFC;
loc_83A5FC60:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x83a5fb18
	if (cr6.lt) goto loc_83A5FB18;
	// addic. r10,r10,-29
	xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a5fc98
	if (cr0.eq) goto loc_83A5FC98;
	// subfic r9,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r10.s64;
	// slw r8,r5,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// srw r7,r5,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r9,r6,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7;
	// b 0x83a5fb24
	goto loc_83A5FB24;
loc_83A5FC98:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fb24
	goto loc_83A5FB24;
loc_83A5FCAC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// blt cr6,0x83a5fb68
	if (cr6.lt) goto loc_83A5FB68;
	// addic. r10,r10,-29
	xer.ca = ctx.r10.u32 > 28;
	ctx.r10.s64 = ctx.r10.s64 + -29;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a5fce4
	if (cr0.eq) goto loc_83A5FCE4;
	// subfic r9,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r10.s64;
	// slw r8,r5,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// srw r6,r5,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r9,r5,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fb74
	goto loc_83A5FB74;
loc_83A5FCE4:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,3,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83a5fb74
	goto loc_83A5FB74;
loc_83A5FCF8:
	// rlwinm r8,r8,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
loc_83A5FCFC:
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r4,r9,-8
	ctx.r4.s64 = ctx.r9.s64 + -8;
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// ble cr6,0x83a5fd9c
	if (!cr6.gt) goto loc_83A5FD9C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x83a5fc38
	if (cr6.lt) goto loc_83A5FC38;
loc_83A5FD1C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// blt cr6,0x83a5fd30
	if (cr6.lt) goto loc_83A5FD30;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_83A5FD30:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83a679c0
	ctx.lr = 0x83A5FD58;
	sub_83A679C0(ctx, base);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A5FD74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A5FD90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A5FD9C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5FDA8"))) PPC_WEAK_FUNC(sub_83A5FDA8);
PPC_FUNC_IMPL(__imp__sub_83A5FDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A5FDB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r26,r5,-4
	xer.ca = ctx.r5.u32 > 3;
	ctx.r26.s64 = ctx.r5.s64 + -4;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// ble 0x83a5fe80
	if (!cr0.gt) goto loc_83A5FE80;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r24,3
	ctx.r24.s64 = 3;
	// addi r25,r10,-9836
	ctx.r25.s64 = ctx.r10.s64 + -9836;
	// addi r27,r11,-9844
	ctx.r27.s64 = ctx.r11.s64 + -9844;
loc_83A5FDE0:
	// add r28,r31,r30
	ctx.r28.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cef50
	ctx.lr = 0x83A5FDF4;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5fe1c
	if (!cr6.eq) goto loc_83A5FE1C;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x831d88a0
	ctx.lr = 0x83A5FE08;
	sub_831D88A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5fe18
	if (!cr6.eq) goto loc_83A5FE18;
	// stw r23,5300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5300, ctx.r23.u32);
	// b 0x83a5fe1c
	goto loc_83A5FE1C;
loc_83A5FE18:
	// stw r24,5300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5300, ctx.r24.u32);
loc_83A5FE1C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cef50
	ctx.lr = 0x83A5FE2C;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5fe64
	if (!cr6.eq) goto loc_83A5FE64;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x831d88a0
	ctx.lr = 0x83A5FE40;
	sub_831D88A0(ctx, base);
	// stw r3,5244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5244, ctx.r3.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x831d88a0
	ctx.lr = 0x83A5FE50;
	sub_831D88A0(ctx, base);
	// stw r3,5248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5248, ctx.r3.u32);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x831d88a0
	ctx.lr = 0x83A5FE60;
	sub_831D88A0(ctx, base);
	// stw r3,5252(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5252, ctx.r3.u32);
loc_83A5FE64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a5f260
	ctx.lr = 0x83A5FE6C;
	sub_83A5F260(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a5fe80
	if (!cr6.eq) goto loc_83A5FE80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, xer);
	// blt cr6,0x83a5fde0
	if (cr6.lt) goto loc_83A5FDE0;
loc_83A5FE80:
	// lwz r11,5244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5244);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83a5fe90
	if (!cr6.eq) goto loc_83A5FE90;
	// li r23,-1
	ctx.r23.s64 = -1;
loc_83A5FE90:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x83a5fea0
	if (cr6.eq) goto loc_83A5FEA0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_83A5FEA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A5FEA8"))) PPC_WEAK_FUNC(sub_83A5FEA8);
PPC_FUNC_IMPL(__imp__sub_83A5FEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A5FEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A5FEDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x83a5ff7c
	if (cr6.lt) goto loc_83A5FF7C;
loc_83A5FEE8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a5f2a0
	ctx.lr = 0x83A5FEF4;
	sub_83A5F2A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a5ffa4
	if (!cr6.eq) goto loc_83A5FFA4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a679c0
	ctx.lr = 0x83A5FF18;
	sub_83A679C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A5FF34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A5FF50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5FF70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x83a5fee8
	if (!cr6.lt) goto loc_83A5FEE8;
loc_83A5FF7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A5FF98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A5FFA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a5f260
	ctx.lr = 0x83A5FFAC;
	sub_83A5F260(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a679c0
	ctx.lr = 0x83A5FFC8;
	sub_83A679C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A5FFE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A60000;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A6000C"))) PPC_WEAK_FUNC(sub_83A6000C);
PPC_FUNC_IMPL(__imp__sub_83A6000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A60010"))) PPC_WEAK_FUNC(sub_83A60010);
PPC_FUNC_IMPL(__imp__sub_83A60010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A60018;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A60048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x83a600e8
	if (cr6.lt) goto loc_83A600E8;
loc_83A60054:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a5f2a0
	ctx.lr = 0x83A60060;
	sub_83A5F2A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a60118
	if (!cr6.eq) goto loc_83A60118;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a679c0
	ctx.lr = 0x83A60084;
	sub_83A679C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A600A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A600BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A600DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x83a60054
	if (!cr6.lt) goto loc_83A60054;
loc_83A600E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A60104;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A60118:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x83a5f260
	ctx.lr = 0x83A6012C;
	sub_83A5F260(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r4,r9,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a679c0
	ctx.lr = 0x83A60148;
	sub_83A679C0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A60164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A60180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A6018C"))) PPC_WEAK_FUNC(sub_83A6018C);
PPC_FUNC_IMPL(__imp__sub_83A6018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A60190"))) PPC_WEAK_FUNC(sub_83A60190);
PPC_FUNC_IMPL(__imp__sub_83A60190) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A601C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A601E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_83A601FC"))) PPC_WEAK_FUNC(sub_83A601FC);
PPC_FUNC_IMPL(__imp__sub_83A601FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A60200"))) PPC_WEAK_FUNC(sub_83A60200);
PPC_FUNC_IMPL(__imp__sub_83A60200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A60208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A6022C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A6024C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a60264
	if (cr6.lt) goto loc_83A60264;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A60264:
	// subf r5,r28,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r28.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a60190
	ctx.lr = 0x83A60274;
	sub_83A60190(ctx, base);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A60280"))) PPC_WEAK_FUNC(sub_83A60280);
PPC_FUNC_IMPL(__imp__sub_83A60280) {
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
	ctx.lr = 0x83A60288;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,5264
	ctx.r10.s64 = ctx.r11.s64 + 5264;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,5244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5244, ctx.r27.u32);
	// stw r27,5300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5300, ctx.r27.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r9,5332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5332, ctx.r9.u32);
	// addi r23,r3,5288
	ctx.r23.s64 = ctx.r3.s64 + 5288;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,4396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4396, ctx.r11.u32);
	// addi r25,r3,4828
	ctx.r25.s64 = ctx.r3.s64 + 4828;
	// lwz r11,4880(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4880);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4880, ctx.r8.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r27,5400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5400, ctx.r27.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r27,5404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5404, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,4932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4932, ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A60300;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,5288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5288);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// bne cr6,0x83a60328
	if (!cr6.eq) goto loc_83A60328;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83A60328:
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r26,r8,4
	ctx.r26.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x83a6037c
	if (cr6.lt) goto loc_83A6037C;
	// addic. r10,r10,-20
	xer.ca = ctx.r10.u32 > 19;
	ctx.r10.s64 = ctx.r10.s64 + -20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a60364
	if (cr0.eq) goto loc_83A60364;
	// subfic r9,r10,12
	xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.s64 = 12 - ctx.r10.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// stw r6,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r6.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a6038c
	goto loc_83A6038C;
loc_83A60364:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a6038c
	goto loc_83A6038C;
loc_83A6037C:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
loc_83A6038C:
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x83a603d8
	if (cr6.lt) goto loc_83A603D8;
	// addic. r10,r10,-20
	xer.ca = ctx.r10.u32 > 19;
	ctx.r10.s64 = ctx.r10.s64 + -20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a603c0
	if (cr0.eq) goto loc_83A603C0;
	// subfic r9,r10,12
	xer.ca = ctx.r10.u32 <= 12;
	ctx.r9.s64 = 12 - ctx.r10.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// stw r6,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r6.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a603e8
	goto loc_83A603E8;
loc_83A603C0:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a603e8
	goto loc_83A603E8;
loc_83A603D8:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
loc_83A603E8:
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// blt cr6,0x83a60434
	if (cr6.lt) goto loc_83A60434;
	// addic. r10,r10,-28
	xer.ca = ctx.r10.u32 > 27;
	ctx.r10.s64 = ctx.r10.s64 + -28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a6041c
	if (cr0.eq) goto loc_83A6041C;
	// subfic r9,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xF;
	// stw r6,5056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5056, ctx.r6.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60444
	goto loc_83A60444;
loc_83A6041C:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,5056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5056, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60444
	goto loc_83A60444;
loc_83A60434:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,5056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5056, ctx.r9.u32);
loc_83A60444:
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// blt cr6,0x83a60488
	if (cr6.lt) goto loc_83A60488;
	// addic. r10,r10,-28
	xer.ca = ctx.r10.u32 > 27;
	ctx.r10.s64 = ctx.r10.s64 + -28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a60474
	if (cr0.eq) goto loc_83A60474;
	// subfic r9,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r7,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60494
	goto loc_83A60494;
loc_83A60474:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60494
	goto loc_83A60494;
loc_83A60488:
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_83A60494:
	// stw r9,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// blt cr6,0x83a604e4
	if (cr6.lt) goto loc_83A604E4;
	// addic. r10,r10,-14
	xer.ca = ctx.r10.u32 > 13;
	ctx.r10.s64 = ctx.r10.s64 + -14;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a604cc
	if (cr0.eq) goto loc_83A604CC;
	// subfic r9,r10,18
	xer.ca = ctx.r10.u32 <= 18;
	ctx.r9.s64 = 18 - ctx.r10.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// stw r6,5060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5060, ctx.r6.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a604f4
	goto loc_83A604F4;
loc_83A604CC:
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,5060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5060, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a604f4
	goto loc_83A604F4;
loc_83A604E4:
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// addi r10,r10,18
	ctx.r10.s64 = ctx.r10.s64 + 18;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// stw r9,5060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5060, ctx.r9.u32);
loc_83A604F4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83a60514
	if (cr6.lt) goto loc_83A60514;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60518
	goto loc_83A60518;
loc_83A60514:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A60518:
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// blt cr6,0x83a60564
	if (cr6.lt) goto loc_83A60564;
	// addic. r10,r10,-22
	xer.ca = ctx.r10.u32 > 21;
	ctx.r10.s64 = ctx.r10.s64 + -22;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a6054c
	if (cr0.eq) goto loc_83A6054C;
	// subfic r9,r10,10
	xer.ca = ctx.r10.u32 <= 10;
	ctx.r9.s64 = 10 - ctx.r10.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r31,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r7,10,22,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FF;
	// stw r6,5064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5064, ctx.r6.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60574
	goto loc_83A60574;
loc_83A6054C:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,5064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5064, ctx.r9.u32);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60574
	goto loc_83A60574;
loc_83A60564:
	// rlwinm r9,r11,10,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r9,5064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5064, ctx.r9.u32);
loc_83A60574:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// stw r9,5068(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5068, ctx.r9.u32);
	// bne cr6,0x83a60598
	if (!cr6.eq) goto loc_83A60598;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a605a0
	goto loc_83A605A0;
loc_83A60598:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A605A0:
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// bne cr6,0x83a605c0
	if (!cr6.eq) goto loc_83A605C0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a605c8
	goto loc_83A605C8;
loc_83A605C0:
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A605C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f31,25692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25692);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x83a60a0c
	if (cr6.eq) goto loc_83A60A0C;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83A605E4:
	// cmpwi cr6,r29,24
	cr6.compare<int32_t>(ctx.r29.s32, 24, xer);
	// blt cr6,0x83a60628
	if (cr6.lt) goto loc_83A60628;
	// addic. r11,r29,-24
	xer.ca = ctx.r29.u32 > 23;
	ctx.r11.s64 = ctx.r29.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60614
	if (cr0.eq) goto loc_83A60614;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 | ctx.r30.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// b 0x83a60634
	goto loc_83A60634;
loc_83A60614:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r30,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60634
	goto loc_83A60634;
loc_83A60628:
	// rlwinm r9,r30,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60634:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4396(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// addi r5,r9,576
	ctx.r5.s64 = ctx.r9.s64 + 576;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r4,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a606a8
	if (cr6.lt) goto loc_83A606A8;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60694
	if (cr0.eq) goto loc_83A60694;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a606b4
	goto loc_83A606B4;
loc_83A60694:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a606b4
	goto loc_83A606B4;
loc_83A606A8:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A606B4:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,1(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,576
	ctx.r4.s64 = ctx.r9.s64 + 576;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a6072c
	if (cr6.lt) goto loc_83A6072C;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60718
	if (cr0.eq) goto loc_83A60718;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60738
	goto loc_83A60738;
loc_83A60718:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60738
	goto loc_83A60738;
loc_83A6072C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60738:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,576
	ctx.r4.s64 = ctx.r9.s64 + 576;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a607b0
	if (cr6.lt) goto loc_83A607B0;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a6079c
	if (cr0.eq) goto loc_83A6079C;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a607bc
	goto loc_83A607BC;
loc_83A6079C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a607bc
	goto loc_83A607BC;
loc_83A607B0:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A607BC:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,3(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,576
	ctx.r4.s64 = ctx.r9.s64 + 576;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60834
	if (cr6.lt) goto loc_83A60834;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60820
	if (cr0.eq) goto loc_83A60820;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60840
	goto loc_83A60840;
loc_83A60820:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60840
	goto loc_83A60840;
loc_83A60834:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60840:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,576
	ctx.r4.s64 = ctx.r9.s64 + 576;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a608b8
	if (cr6.lt) goto loc_83A608B8;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a608a4
	if (cr0.eq) goto loc_83A608A4;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a608c4
	goto loc_83A608C4;
loc_83A608A4:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a608c4
	goto loc_83A608C4;
loc_83A608B8:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A608C4:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,5(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,576
	ctx.r4.s64 = ctx.r9.s64 + 576;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a6093c
	if (cr6.lt) goto loc_83A6093C;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60928
	if (cr0.eq) goto loc_83A60928;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r7,r31,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60948
	goto loc_83A60948;
loc_83A60928:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60948
	goto loc_83A60948;
loc_83A6093C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60948:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r5,6(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,576
	ctx.r4.s64 = ctx.r9.s64 + 576;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a609c0
	if (cr6.lt) goto loc_83A609C0;
	// addic. r29,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r29.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83a609ac
	if (cr0.eq) goto loc_83A609AC;
	// subfic r11,r29,8
	xer.ca = ctx.r29.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r29.s64;
	// slw r30,r31,r29
	ctx.r30.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r29.u8 & 0x3F));
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r9,r7,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// b 0x83a609cc
	goto loc_83A609CC;
loc_83A609AC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a609cc
	goto loc_83A609CC;
loc_83A609C0:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// rlwinm r30,r10,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A609CC:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r11,4396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lbz r7,7(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// addi r6,r11,576
	ctx.r6.s64 = ctx.r11.s64 + 576;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r5,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r28.u32, temp.u32);
	// bdnz 0x83a605e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A605E4;
	// b 0x83a60a24
	goto loc_83A60A24;
loc_83A60A0C:
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r10,r11,5280
	ctx.r10.s64 = ctx.r11.s64 + 5280;
	// addi r3,r28,2304
	ctx.r3.s64 = ctx.r28.s64 + 2304;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x83a644d8
	ctx.lr = 0x83A60A24;
	sub_83A644D8(ctx, base);
loc_83A60A24:
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r29,31
	cr6.compare<int32_t>(ctx.r29.s32, 31, xer);
	// bne cr6,0x83a60a44
	if (!cr6.eq) goto loc_83A60A44;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60a4c
	goto loc_83A60A4C;
loc_83A60A44:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A60A4C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a60e88
	if (cr6.eq) goto loc_83A60E88;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A60A60:
	// cmpwi cr6,r9,24
	cr6.compare<int32_t>(ctx.r9.s32, 24, xer);
	// blt cr6,0x83a60aa4
	if (cr6.lt) goto loc_83A60AA4;
	// addic. r10,r9,-24
	xer.ca = ctx.r9.u32 > 23;
	ctx.r10.s64 = ctx.r9.s64 + -24;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83a60a90
	if (cr0.eq) goto loc_83A60A90;
	// subfic r8,r10,8
	xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// slw r9,r31,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// srw r6,r31,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r8,r5,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// b 0x83a60ab0
	goto loc_83A60AB0;
loc_83A60A90:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60ab0
	goto loc_83A60AB0;
loc_83A60AA4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r11,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60AB0:
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lwz r8,4396(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// addi r5,r11,640
	ctx.r5.s64 = ctx.r11.s64 + 640;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r4,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60b24
	if (cr6.lt) goto loc_83A60B24;
	// addic. r11,r10,-24
	xer.ca = ctx.r10.u32 > 23;
	ctx.r11.s64 = ctx.r10.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60b10
	if (cr0.eq) goto loc_83A60B10;
	// subfic r8,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r11.s64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// srw r6,r31,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r8,r5,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// b 0x83a60b30
	goto loc_83A60B30;
loc_83A60B10:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r9,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60b30
	goto loc_83A60B30;
loc_83A60B24:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r8,r9,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60B30:
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,1(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60ba8
	if (cr6.lt) goto loc_83A60BA8;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60b94
	if (cr0.eq) goto loc_83A60B94;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60bb4
	goto loc_83A60BB4;
loc_83A60B94:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60bb4
	goto loc_83A60BB4;
loc_83A60BA8:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60BB4:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60c2c
	if (cr6.lt) goto loc_83A60C2C;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60c18
	if (cr0.eq) goto loc_83A60C18;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60c38
	goto loc_83A60C38;
loc_83A60C18:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60c38
	goto loc_83A60C38;
loc_83A60C2C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60C38:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,3(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60cb0
	if (cr6.lt) goto loc_83A60CB0;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60c9c
	if (cr0.eq) goto loc_83A60C9C;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60cbc
	goto loc_83A60CBC;
loc_83A60C9C:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60cbc
	goto loc_83A60CBC;
loc_83A60CB0:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60CBC:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60d34
	if (cr6.lt) goto loc_83A60D34;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60d20
	if (cr0.eq) goto loc_83A60D20;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60d40
	goto loc_83A60D40;
loc_83A60D20:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60d40
	goto loc_83A60D40;
loc_83A60D34:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60D40:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,5(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60db8
	if (cr6.lt) goto loc_83A60DB8;
	// addic. r11,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r11.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a60da4
	if (cr0.eq) goto loc_83A60DA4;
	// subfic r9,r11,8
	xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r11.s64;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r31,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r6,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60dc4
	goto loc_83A60DC4;
loc_83A60DA4:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60dc4
	goto loc_83A60DC4;
loc_83A60DB8:
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60DC4:
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r9,4396(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(ctx.r11.s32, 24, xer);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r5,6(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// addi r4,r9,640
	ctx.r4.s64 = ctx.r9.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// blt cr6,0x83a60e3c
	if (cr6.lt) goto loc_83A60E3C;
	// addic. r9,r11,-24
	xer.ca = ctx.r11.u32 > 23;
	ctx.r9.s64 = ctx.r11.s64 + -24;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83a60e28
	if (cr0.eq) goto loc_83A60E28;
	// subfic r8,r9,8
	xer.ca = ctx.r9.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r9.s64;
	// slw r11,r31,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// srw r6,r31,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r8,r5,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// b 0x83a60e48
	goto loc_83A60E48;
loc_83A60E28:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a60e48
	goto loc_83A60E48;
loc_83A60E3C:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
loc_83A60E48:
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lwz r10,4396(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4396);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lbz r5,7(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// addi r4,r10,640
	ctx.r4.s64 = ctx.r10.s64 + 640;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r3,r28
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r28.u32, temp.u32);
	// bdnz 0x83a60a60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A60A60;
	// b 0x83a60ea4
	goto loc_83A60EA4;
loc_83A60E88:
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r28,2560
	ctx.r11.s64 = ctx.r28.s64 + 2560;
	// lis r8,16256
	ctx.r8.s64 = 1065353216;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A60E9C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a60e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A60E9C;
loc_83A60EA4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// srawi r11,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// srawi r4,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r11,5060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5060);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r3,5216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5216, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r11.u32);
	// lwz r10,5064(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5064);
	// stw r10,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r10.u32);
	// lwz r9,5056(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5056);
	// stb r9,89(r25)
	PPC_STORE_U8(ctx.r25.u32 + 89, ctx.r9.u8);
	// lwz r7,5068(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5068);
	// stb r7,90(r25)
	PPC_STORE_U8(ctx.r25.u32 + 90, ctx.r7.u8);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83a679c0
	ctx.lr = 0x83A60F18;
	sub_83A679C0(ctx, base);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A60F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83A60F50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A60F60"))) PPC_WEAK_FUNC(sub_83A60F60);
PPC_FUNC_IMPL(__imp__sub_83A60F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A60F68;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r5,-3
	ctx.r31.s64 = ctx.r5.s64 + -3;
	// lwz r28,5332(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5332);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// ble cr6,0x83a60fac
	if (!cr6.gt) goto loc_83A60FAC;
loc_83A60F90:
	// add r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bl 0x83a5f260
	ctx.lr = 0x83A60F98;
	sub_83A5F260(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a60fac
	if (!cr6.eq) goto loc_83A60FAC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a60f90
	if (cr6.lt) goto loc_83A60F90;
loc_83A60FAC:
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, xer);
	// bne cr6,0x83a60fb8
	if (!cr6.eq) goto loc_83A60FB8;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_83A60FB8:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x83a60fd4
	if (!cr6.eq) goto loc_83A60FD4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a5fda8
	ctx.lr = 0x83A60FD0;
	sub_83A5FDA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_83A60FD4:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,5336(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5336);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a610c4
	if (cr6.eq) goto loc_83A610C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A61010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831ce980
	ctx.lr = 0x83A61020;
	sub_831CE980(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A6103C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x83a61098
	if (!cr6.lt) goto loc_83A61098;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// subf r5,r11,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A61068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831ce980
	ctx.lr = 0x83A6107C;
	sub_831CE980(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A61098;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A61098:
	// addi r11,r28,445
	ctx.r11.s64 = ctx.r28.s64 + 445;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a610c4
	if (cr6.eq) goto loc_83A610C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,5344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5344);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A610C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A610C4:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x83a610f4
	if (!cr6.eq) goto loc_83A610F4;
	// lwz r3,5384(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5384);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a610f4
	if (cr6.eq) goto loc_83A610F4;
	// lwz r5,5388(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5388);
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, xer);
	// bge cr6,0x83a610e8
	if (!cr6.lt) goto loc_83A610E8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_83A610E8:
	// stw r5,5392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5392, ctx.r5.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A610F4;
	sub_831CE980(ctx, base);
loc_83A610F4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x83a61104
	if (!cr6.eq) goto loc_83A61104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_83A61104:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A6110C"))) PPC_WEAK_FUNC(sub_83A6110C);
PPC_FUNC_IMPL(__imp__sub_83A6110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61110"))) PPC_WEAK_FUNC(sub_83A61110);
PPC_FUNC_IMPL(__imp__sub_83A61110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A61118;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,5280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5280);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,4756(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4756);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r3,4956
	ctx.r11.s64 = ctx.r3.s64 + 4956;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a61178
	if (cr6.eq) goto loc_83A61178;
	// lwz r9,5284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5284);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r8,5280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5280, ctx.r8.u32);
	// stw r7,5284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5284, ctx.r7.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bne cr6,0x83a6116c
	if (!cr6.eq) goto loc_83A6116C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A6116C:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_83A61178:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
	// bl 0x83a5fea8
	ctx.lr = 0x83A6118C;
	sub_83A5FEA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a61208
	if (cr6.eq) goto loc_83A61208;
loc_83A61194:
	// and r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a61204
	if (!cr6.eq) goto loc_83A61204;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A611C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A611DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bne cr6,0x83a61208
	if (!cr6.eq) goto loc_83A61208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5fea8
	ctx.lr = 0x83A611F0;
	sub_83A5FEA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a61194
	if (!cr6.eq) goto loc_83A61194;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A61204:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A61208:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A61214"))) PPC_WEAK_FUNC(sub_83A61214);
PPC_FUNC_IMPL(__imp__sub_83A61214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61218"))) PPC_WEAK_FUNC(sub_83A61218);
PPC_FUNC_IMPL(__imp__sub_83A61218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A61220;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r3,5288
	ctx.r30.s64 = ctx.r3.s64 + 5288;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A61254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,5288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,5292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// rlwinm r11,r4,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// rlwinm r28,r9,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83a60f60
	ctx.lr = 0x83A61274;
	sub_83A60F60(ctx, base);
	// addi r8,r28,7
	ctx.r8.s64 = ctx.r28.s64 + 7;
	// lwz r7,5288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r6,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x83a679c0
	ctx.lr = 0x83A612A0;
	sub_83A679C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A612BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A612D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a5fea8
	ctx.lr = 0x83A612E0;
	sub_83A5FEA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A612EC"))) PPC_WEAK_FUNC(sub_83A612EC);
PPC_FUNC_IMPL(__imp__sub_83A612EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A612F0"))) PPC_WEAK_FUNC(sub_83A612F0);
PPC_FUNC_IMPL(__imp__sub_83A612F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A612F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83a5e058
	ctx.lr = 0x83A61308;
	sub_83A5E058(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a61328
	if (cr6.eq) goto loc_83A61328;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
	// bl 0x83a5f328
	ctx.lr = 0x83A61320;
	sub_83A5F328(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A61328:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r11,5392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5392, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A61358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83A61374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,5240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5240);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bne cr6,0x83a613e8
	if (!cr6.eq) goto loc_83A613E8;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x83a5f2a0
	ctx.lr = 0x83A61398;
	sub_83A5F2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a613e4
	if (cr6.eq) goto loc_83A613E4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// subf r11,r3,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r3.s64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83a5f2a0
	ctx.lr = 0x83A613B4;
	sub_83A5F2A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a613e4
	if (cr6.eq) goto loc_83A613E4;
	// bl 0x83a5f260
	ctx.lr = 0x83A613C0;
	sub_83A5F260(ctx, base);
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a613d4
	if (cr6.eq) goto loc_83A613D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x83a613e0
	goto loc_83A613E0;
loc_83A613D4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a613e4
	if (cr6.eq) goto loc_83A613E4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A613E0:
	// stw r11,5240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5240, ctx.r11.u32);
loc_83A613E4:
	// lwz r11,5240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5240);
loc_83A613E8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x83a61404
	if (!cr6.eq) goto loc_83A61404;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ef5ab8
	ctx.lr = 0x83A613FC;
	sub_82EF5AB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A61404:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x83a61110
	ctx.lr = 0x83A61410;
	sub_83A61110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a615b0
	if (!cr6.eq) goto loc_83A615B0;
loc_83A6141C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A6143C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A61458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// blt cr6,0x83a615c8
	if (cr6.lt) goto loc_83A615C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83a5f260
	ctx.lr = 0x83A6146C;
	sub_83A5F260(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a615c8
	if (cr6.eq) goto loc_83A615C8;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a615c8
	if (!cr6.eq) goto loc_83A615C8;
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a615c4
	if (!cr6.eq) goto loc_83A615C4;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bgt cr6,0x83a61568
	if (cr6.gt) goto loc_83A61568;
	// beq cr6,0x83a614c8
	if (cr6.eq) goto loc_83A614C8;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83a614b8
	if (cr6.eq) goto loc_83A614B8;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x83a61594
	if (!cr6.eq) goto loc_83A61594;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a5f750
	ctx.lr = 0x83A614B4;
	sub_83A5F750(ctx, base);
	// b 0x83a61594
	goto loc_83A61594;
loc_83A614B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a5f910
	ctx.lr = 0x83A614C4;
	sub_83A5F910(ctx, base);
	// b 0x83a61594
	goto loc_83A61594;
loc_83A614C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,5288
	ctx.r30.s64 = ctx.r29.s64 + 5288;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A614EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,5288(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5288);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// srawi r4,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x83a679c0
	ctx.lr = 0x83A61524;
	sub_83A679C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A61540;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A6155C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a5fea8
	ctx.lr = 0x83A61564;
	sub_83A5FEA8(ctx, base);
	// b 0x83a61594
	goto loc_83A61594;
loc_83A61568:
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// beq cr6,0x83a61588
	if (cr6.eq) goto loc_83A61588;
	// cmpwi cr6,r3,64
	cr6.compare<int32_t>(ctx.r3.s32, 64, xer);
	// bne cr6,0x83a61594
	if (!cr6.eq) goto loc_83A61594;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a60280
	ctx.lr = 0x83A61584;
	sub_83A60280(ctx, base);
	// b 0x83a61594
	goto loc_83A61594;
loc_83A61588:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a61218
	ctx.lr = 0x83A61594;
	sub_83A61218(ctx, base);
loc_83A61594:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a61110
	ctx.lr = 0x83A615A4;
	sub_83A61110(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a6141c
	if (cr6.eq) goto loc_83A6141C;
loc_83A615B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a5f328
	ctx.lr = 0x83A615BC;
	sub_83A5F328(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A615C4:
	// li r30,-2
	ctx.r30.s64 = -2;
loc_83A615C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A615D4"))) PPC_WEAK_FUNC(sub_83A615D4);
PPC_FUNC_IMPL(__imp__sub_83A615D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A615D8"))) PPC_WEAK_FUNC(sub_83A615D8);
PPC_FUNC_IMPL(__imp__sub_83A615D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A615E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83a5df90
	ctx.lr = 0x83A615FC;
	sub_83A5DF90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a61614
	if (!cr6.eq) goto loc_83A61614;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A61614:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a612f0
	ctx.lr = 0x83A61620;
	sub_83A612F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A6163C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x83A6165C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A61668"))) PPC_WEAK_FUNC(sub_83A61668);
PPC_FUNC_IMPL(__imp__sub_83A61668) {
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
	// bl 0x83a5e058
	ctx.lr = 0x83A61688;
	sub_83A5E058(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a616a4
	if (cr6.eq) goto loc_83A616A4;
	// lis r4,-253
	ctx.r4.s64 = -16580608;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,524
	ctx.r4.u64 = ctx.r4.u64 | 524;
	// bl 0x83a5f328
	ctx.lr = 0x83A616A0;
	sub_83A5F328(ctx, base);
	// b 0x83a616b8
	goto loc_83A616B8;
loc_83A616A4:
	// addi r4,r31,4828
	ctx.r4.s64 = ctx.r31.s64 + 4828;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A616B4;
	sub_831CE980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A616B8:
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

__attribute__((alias("__imp__sub_83A616D0"))) PPC_WEAK_FUNC(sub_83A616D0);
PPC_FUNC_IMPL(__imp__sub_83A616D0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A616DC"))) PPC_WEAK_FUNC(sub_83A616DC);
PPC_FUNC_IMPL(__imp__sub_83A616DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A616E0"))) PPC_WEAK_FUNC(sub_83A616E0);
PPC_FUNC_IMPL(__imp__sub_83A616E0) {
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
	// bl 0x831ce7d8
	ctx.lr = 0x83A616F8;
	sub_831CE7D8(ctx, base);
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

__attribute__((alias("__imp__sub_83A61710"))) PPC_WEAK_FUNC(sub_83A61710);
PPC_FUNC_IMPL(__imp__sub_83A61710) {
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
	// bl 0x831ce890
	ctx.lr = 0x83A61728;
	sub_831CE890(ctx, base);
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

__attribute__((alias("__imp__sub_83A61740"))) PPC_WEAK_FUNC(sub_83A61740);
PPC_FUNC_IMPL(__imp__sub_83A61740) {
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
	// lis r10,-31739
	ctx.r10.s64 = -2080047104;
	// lwz r11,19588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19588);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,19588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19588, ctx.r9.u32);
	// lwz r8,19588(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19588);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x83a617a4
	if (!cr6.eq) goto loc_83A617A4;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31739
	ctx.r9.s64 = -2080047104;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r9,19544
	ctx.r31.s64 = ctx.r9.s64 + 19544;
	// stw r10,19580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19580, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a676f8
	ctx.lr = 0x83A6178C;
	sub_83A676F8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a617a4
	if (!cr6.eq) goto loc_83A617A4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-9588
	ctx.r3.s64 = ctx.r11.s64 + -9588;
	// bl 0x83a67a20
	ctx.lr = 0x83A617A4;
	sub_83A67A20(ctx, base);
loc_83A617A4:
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

__attribute__((alias("__imp__sub_83A617B8"))) PPC_WEAK_FUNC(sub_83A617B8);
PPC_FUNC_IMPL(__imp__sub_83A617B8) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// addi r31,r11,19588
	ctx.r31.s64 = ctx.r11.s64 + 19588;
	// lwz r11,19588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19588);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a61808
	if (!cr6.eq) goto loc_83A61808;
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,19580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19580, ctx.r10.u32);
	// beq cr6,0x83a61808
	if (cr6.eq) goto loc_83A61808;
	// bl 0x83a677e8
	ctx.lr = 0x83A61800;
	sub_83A677E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
loc_83A61808:
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

__attribute__((alias("__imp__sub_83A6181C"))) PPC_WEAK_FUNC(sub_83A6181C);
PPC_FUNC_IMPL(__imp__sub_83A6181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61820"))) PPC_WEAK_FUNC(sub_83A61820);
PPC_FUNC_IMPL(__imp__sub_83A61820) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,19576(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19576);
	// bl 0x83a67898
	ctx.lr = 0x83A61838;
	sub_83A67898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83a6184c
	if (!cr6.lt) goto loc_83A6184C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-9536
	ctx.r3.s64 = ctx.r11.s64 + -9536;
	// bl 0x83a67a20
	ctx.lr = 0x83A6184C;
	sub_83A67A20(ctx, base);
loc_83A6184C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A6185C"))) PPC_WEAK_FUNC(sub_83A6185C);
PPC_FUNC_IMPL(__imp__sub_83A6185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61860"))) PPC_WEAK_FUNC(sub_83A61860);
PPC_FUNC_IMPL(__imp__sub_83A61860) {
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
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// lwz r3,19576(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19576);
	// bl 0x83a67930
	ctx.lr = 0x83A61878;
	sub_83A67930(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83a6188c
	if (!cr6.lt) goto loc_83A6188C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r11,-9440
	ctx.r3.s64 = ctx.r11.s64 + -9440;
	// bl 0x83a67a20
	ctx.lr = 0x83A6188C;
	sub_83A67A20(ctx, base);
loc_83A6188C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A6189C"))) PPC_WEAK_FUNC(sub_83A6189C);
PPC_FUNC_IMPL(__imp__sub_83A6189C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A618A0"))) PPC_WEAK_FUNC(sub_83A618A0);
PPC_FUNC_IMPL(__imp__sub_83A618A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,-10204
	ctx.r11.s64 = ctx.r11.s64 + -10204;
loc_83A618AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83a618d0
	if (cr6.eq) goto loc_83A618D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a618ac
	if (cr6.eq) goto loc_83A618AC;
loc_83A618D0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a618e0
	if (cr6.eq) goto loc_83A618E0;
loc_83A618D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83A618E0:
	// cmplwi cr6,r4,5420
	cr6.compare<uint32_t>(ctx.r4.u32, 5420, xer);
	// bne cr6,0x83a618d8
	if (!cr6.eq) goto loc_83A618D8;
	// addi r11,r5,-128
	ctx.r11.s64 = ctx.r5.s64 + -128;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A618F8"))) PPC_WEAK_FUNC(sub_83A618F8);
PPC_FUNC_IMPL(__imp__sub_83A618F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A61900;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r3,5288
	ctx.r27.s64 = ctx.r3.s64 + 5288;
	// ori r25,r10,65535
	ctx.r25.u64 = ctx.r10.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A61938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,5288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r9,5296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5296);
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// slw r11,r6,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83a6197c
	if (cr6.lt) goto loc_83A6197C;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r8,r7,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61980
	goto loc_83A61980;
loc_83A6197C:
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
loc_83A61980:
	// lis r24,-31738
	ctx.r24.s64 = -2079981568;
	// lis r23,-31738
	ctx.r23.s64 = -2079981568;
loc_83A61988:
	// rlwinm r11,r8,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7FFFFF;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// ble cr6,0x83a619a0
	if (!cr6.gt) goto loc_83A619A0;
	// subfic r10,r30,41
	xer.ca = ctx.r30.u32 <= 41;
	ctx.r10.s64 = 41 - ctx.r30.s64;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A619A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a61c64
	if (cr6.eq) goto loc_83A61C64;
	// lwz r6,5204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
loc_83A619AC:
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(ctx.r30.s32, 20, xer);
	// ble cr6,0x83a619c4
	if (!cr6.gt) goto loc_83A619C4;
	// subfic r10,r30,52
	xer.ca = ctx.r30.u32 <= 52;
	ctx.r10.s64 = 52 - ctx.r30.s64;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A619C4:
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a619dc
	if (!cr6.eq) goto loc_83A619DC;
	// lwz r10,5360(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83a619e4
	goto loc_83A619E4;
loc_83A619DC:
	// lwz r10,5328(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5328);
	// rlwinm r9,r11,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
loc_83A619E4:
	// lhzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a61a10
	if (cr6.lt) goto loc_83A61A10;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r8,r7,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61a14
	goto loc_83A61A14;
loc_83A61A10:
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
loc_83A61A14:
	// rlwinm r11,r10,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3F;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x83a619ac
	if (cr6.eq) goto loc_83A619AC;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x83a61a38
	if (!cr6.eq) goto loc_83A61A38;
	// lwz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// b 0x83a619ac
	goto loc_83A619AC;
loc_83A61A38:
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// beq cr6,0x83a61c64
	if (cr6.eq) goto loc_83A61C64;
	// lwz r9,5204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// lwz r5,5216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r10.u32);
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bgt cr6,0x83a61c64
	if (cr6.gt) goto loc_83A61C64;
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r11,5212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r10,4836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a61aa4
	if (cr6.lt) goto loc_83A61AA4;
loc_83A61A7C:
	// lwz r6,5212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r11,5208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5208);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r5.u32);
	// stw r4,5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5208, ctx.r4.u32);
	// lwz r11,4836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a61a7c
	if (!cr6.lt) goto loc_83A61A7C;
loc_83A61AA4:
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x83a61c64
	if (cr6.eq) goto loc_83A61C64;
	// lwz r11,5220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a61b10
	if (cr6.eq) goto loc_83A61B10;
	// cmpwi cr6,r30,27
	cr6.compare<int32_t>(ctx.r30.s32, 27, xer);
	// blt cr6,0x83a61b00
	if (cr6.lt) goto loc_83A61B00;
	// addic. r30,r30,-27
	xer.ca = ctx.r30.u32 > 26;
	ctx.r30.s64 = ctx.r30.s64 + -27;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a61aec
	if (cr0.eq) goto loc_83A61AEC;
	// subfic r11,r30,5
	xer.ca = ctx.r30.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r30.s64;
	// srw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// slw r8,r7,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r9,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61b0c
	goto loc_83A61B0C;
loc_83A61AEC:
	// rlwinm r11,r8,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61b0c
	goto loc_83A61B0C;
loc_83A61B00:
	// rlwinm r11,r8,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
loc_83A61B0C:
	// stw r11,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r11.u32);
loc_83A61B10:
	// stw r8,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r7.u32);
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// stw r28,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r28.u32);
	// lwz r11,5092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A61B30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,5100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A61B40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,5412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83a61c64
	if (!cr6.eq) goto loc_83A61C64;
	// lwz r11,5316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5316);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// bgt 0x83a61b74
	if (cr0.gt) goto loc_83A61B74;
	// lwz r11,4816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// lwz r10,4820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// lwz r3,4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A61B74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A61B74:
	// lwz r30,4360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r29,r30,29
	ctx.r29.u64 = ctx.r30.u32 & 0x7;
	// lwz r28,4364(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// lwz r9,5292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r8,4352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r7,4356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// srawi r5,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// cmpwi cr6,r3,2048
	cr6.compare<int32_t>(ctx.r3.s32, 2048, xer);
	// bgt cr6,0x83a61988
	if (cr6.gt) goto loc_83A61988;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a679c0
	ctx.lr = 0x83A61BC4;
	sub_83A679C0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A61BE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A61BFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A61C1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r30,r29,r10
	ctx.r30.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a61c5c
	if (cr6.lt) goto loc_83A61C5C;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r8,r7,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61988
	goto loc_83A61988;
loc_83A61C5C:
	// slw r8,r11,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// b 0x83a61988
	goto loc_83A61988;
loc_83A61C64:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83a679c0
	ctx.lr = 0x83A61C8C;
	sub_83A679C0(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A61CA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A61CC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a5fea8
	ctx.lr = 0x83A61CCC;
	sub_83A5FEA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A61CD4"))) PPC_WEAK_FUNC(sub_83A61CD4);
PPC_FUNC_IMPL(__imp__sub_83A61CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61CD8"))) PPC_WEAK_FUNC(sub_83A61CD8);
PPC_FUNC_IMPL(__imp__sub_83A61CD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A61CF0"))) PPC_WEAK_FUNC(sub_83A61CF0);
PPC_FUNC_IMPL(__imp__sub_83A61CF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r11,5232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5232, ctx.r11.u32);
	// stw r11,5236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5236, ctx.r11.u32);
	// stw r11,5228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A61D04"))) PPC_WEAK_FUNC(sub_83A61D04);
PPC_FUNC_IMPL(__imp__sub_83A61D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61D08"))) PPC_WEAK_FUNC(sub_83A61D08);
PPC_FUNC_IMPL(__imp__sub_83A61D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A61D10;
	__savegprlr_26(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,4352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4352);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r10,11,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// lwz r11,4360(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4360);
	// lwz r30,4356(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4356);
	// lwz r28,4364(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4364);
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(ctx.r11.s32, 21, xer);
	// ble cr6,0x83a61d48
	if (!cr6.gt) goto loc_83A61D48;
	// subfic r8,r11,53
	xer.ca = ctx.r11.u32 <= 53;
	ctx.r8.s64 = 53 - ctx.r11.s64;
	// srw r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r8.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_83A61D48:
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83a61d64
	if (!cr6.eq) goto loc_83A61D64;
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,5364(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5364);
	// b 0x83a61d70
	goto loc_83A61D70;
loc_83A61D64:
	// lis r8,-31738
	ctx.r8.s64 = -2079981568;
	// rlwinm r29,r9,27,5,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lwz r9,5308(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5308);
loc_83A61D70:
	// lhzx r9,r29,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// cmpwi cr6,r29,127
	cr6.compare<int32_t>(ctx.r29.s32, 127, xer);
	// bne cr6,0x83a61d9c
	if (!cr6.eq) goto loc_83A61D9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,4352(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4352, ctx.r10.u32);
	// stw r30,4356(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4356, ctx.r30.u32);
	// stw r11,4360(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4360, ctx.r11.u32);
	// stw r28,4364(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4364, ctx.r28.u32);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A61D9C:
	// rlwinm r9,r9,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// blt cr6,0x83a61dc0
	if (cr6.lt) goto loc_83A61DC0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61dc4
	goto loc_83A61DC4;
loc_83A61DC0:
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_83A61DC4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a61dd8
	if (!cr6.eq) goto loc_83A61DD8;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x83a61e68
	goto loc_83A61E68;
loc_83A61DD8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83a61e50
	if (cr6.eq) goto loc_83A61E50;
	// subfic r9,r31,32
	xer.ca = ctx.r31.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r31.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// blt cr6,0x83a61e2c
	if (cr6.lt) goto loc_83A61E2C;
	// addic. r11,r11,-32
	xer.ca = ctx.r11.u32 > 31;
	ctx.r11.s64 = ctx.r11.s64 + -32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a61e18
	if (cr0.eq) goto loc_83A61E18;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r8,r30,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61e34
	goto loc_83A61E34;
loc_83A61E18:
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a61e34
	goto loc_83A61E34;
loc_83A61E2C:
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
loc_83A61E34:
	// lwz r26,12(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// slw. r9,r29,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r31.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r8.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r29,r8,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bgt 0x83a61e50
	if (cr0.gt) goto loc_83A61E50;
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_83A61E50:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// slw r8,r9,r27
	ctx.r8.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r27.u8 & 0x3F));
	// sraw r9,r8,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_83A61E68:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a61e80
	if (cr6.eq) goto loc_83A61E80;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_83A61E80:
	// stw r10,4352(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4352, ctx.r10.u32);
	// stw r30,4356(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4356, ctx.r30.u32);
	// stw r11,4360(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4360, ctx.r11.u32);
	// stw r28,4364(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4364, ctx.r28.u32);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A61E94"))) PPC_WEAK_FUNC(sub_83A61E94);
PPC_FUNC_IMPL(__imp__sub_83A61E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A61E98"))) PPC_WEAK_FUNC(sub_83A61E98);
PPC_FUNC_IMPL(__imp__sub_83A61E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A61EA0;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r25,r3,5288
	ctx.r25.s64 = ctx.r3.s64 + 5288;
	// ori r21,r10,65535
	ctx.r21.u64 = ctx.r10.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A61EDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,5288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r9,5296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5296);
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// lwzu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// slw r11,r6,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83a61f20
	if (cr6.lt) goto loc_83A61F20;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a61f24
	goto loc_83A61F24;
loc_83A61F20:
	// slw r28,r11,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
loc_83A61F24:
	// lis r20,-31738
	ctx.r20.s64 = -2079981568;
	// li r22,1024
	ctx.r22.s64 = 1024;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r19,-31738
	ctx.r19.s64 = -2079981568;
	// lis r18,-31738
	ctx.r18.s64 = -2079981568;
	// lis r17,-31738
	ctx.r17.s64 = -2079981568;
loc_83A61F3C:
	// rlwinm r11,r28,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x7FFFFF;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// ble cr6,0x83a61f54
	if (!cr6.gt) goto loc_83A61F54;
	// subfic r10,r30,41
	xer.ca = ctx.r30.u32 <= 41;
	ctx.r10.s64 = 41 - ctx.r30.s64;
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A61F54:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a62464
	if (cr6.eq) goto loc_83A62464;
	// lwz r8,5204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
loc_83A61F60:
	// rlwinm r11,r28,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 11) & 0x7FF;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(ctx.r30.s32, 21, xer);
	// ble cr6,0x83a61f78
	if (!cr6.gt) goto loc_83A61F78;
	// subfic r10,r30,53
	xer.ca = ctx.r30.u32 <= 53;
	ctx.r10.s64 = 53 - ctx.r30.s64;
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A61F78:
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a61f90
	if (!cr6.eq) goto loc_83A61F90;
	// lwz r10,5320(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5320);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83a61f98
	goto loc_83A61F98;
loc_83A61F90:
	// lwz r10,5316(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5316);
	// rlwinm r9,r11,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
loc_83A61F98:
	// lhzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a61fc4
	if (cr6.lt) goto loc_83A61FC4;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a61fc8
	goto loc_83A61FC8;
loc_83A61FC4:
	// slw r28,r28,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
loc_83A61FC8:
	// rlwinm r11,r10,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3F;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x83a61f60
	if (cr6.eq) goto loc_83A61F60;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x83a61fec
	if (!cr6.eq) goto loc_83A61FEC;
	// lwz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// b 0x83a61f60
	goto loc_83A61F60;
loc_83A61FEC:
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// beq cr6,0x83a62464
	if (cr6.eq) goto loc_83A62464;
	// lwz r9,5204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// lwz r7,5216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r10.u32);
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bgt cr6,0x83a62464
	if (cr6.gt) goto loc_83A62464;
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r11,5212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r10,4836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a62058
	if (cr6.lt) goto loc_83A62058;
loc_83A62030:
	// lwz r9,5212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r11,5208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5208);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r8.u32);
	// stw r7,5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5208, ctx.r7.u32);
	// lwz r5,4836(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bge cr6,0x83a62030
	if (!cr6.lt) goto loc_83A62030;
loc_83A62058:
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x83a62464
	if (cr6.eq) goto loc_83A62464;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a6208c
	if (!cr6.eq) goto loc_83A6208C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// ble cr6,0x83a6208c
	if (!cr6.gt) goto loc_83A6208C;
	// lwz r11,5088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,5232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5232, ctx.r22.u32);
	// stw r22,5236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5236, ctx.r22.u32);
	// stw r22,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r22.u32);
loc_83A6208C:
	// lwz r11,5220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a620f4
	if (!cr6.eq) goto loc_83A620F4;
	// rlwinm r11,r28,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0x3F;
	// cmpwi cr6,r30,26
	cr6.compare<int32_t>(ctx.r30.s32, 26, xer);
	// ble cr6,0x83a620b4
	if (!cr6.gt) goto loc_83A620B4;
	// subfic r10,r30,58
	xer.ca = ctx.r30.u32 <= 58;
	ctx.r10.s64 = 58 - ctx.r30.s64;
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A620B4:
	// lwz r10,5340(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5340);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r8.u32);
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a620f0
	if (cr6.lt) goto loc_83A620F0;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a620f4
	goto loc_83A620F4;
loc_83A620F0:
	// slw r28,r28,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
loc_83A620F4:
	// lwz r10,5220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a62158
	if (cr6.eq) goto loc_83A62158;
	// cmpwi cr6,r30,27
	cr6.compare<int32_t>(ctx.r30.s32, 27, xer);
	// blt cr6,0x83a62148
	if (cr6.lt) goto loc_83A62148;
	// addic. r30,r30,-27
	xer.ca = ctx.r30.u32 > 26;
	ctx.r30.s64 = ctx.r30.s64 + -27;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a62134
	if (cr0.eq) goto loc_83A62134;
	// subfic r11,r30,5
	xer.ca = ctx.r30.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r30.s64;
	// srw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 | ctx.r28.u64;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r8,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a62154
	goto loc_83A62154;
loc_83A62134:
	// rlwinm r11,r28,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x1F;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a62154
	goto loc_83A62154;
loc_83A62148:
	// rlwinm r11,r28,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x1F;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// rlwinm r28,r28,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
loc_83A62154:
	// stw r11,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r11.u32);
loc_83A62158:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a621b8
	if (cr6.eq) goto loc_83A621B8;
	// stw r28,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r28.u32);
	// addi r4,r31,5132
	ctx.r4.s64 = ctx.r31.s64 + 5132;
	// stw r27,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r27.u32);
	// addi r6,r31,5148
	ctx.r6.s64 = ctx.r31.s64 + 5148;
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// addi r5,r31,5156
	ctx.r5.s64 = ctx.r31.s64 + 5156;
	// stw r26,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a61d08
	ctx.lr = 0x83A62188;
	sub_83A61D08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,5152
	ctx.r6.s64 = ctx.r31.s64 + 5152;
	// addi r5,r31,5160
	ctx.r5.s64 = ctx.r31.s64 + 5160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a61d08
	ctx.lr = 0x83A6219C;
	sub_83A61D08(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// lwz r28,4352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r27,4356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r30,4360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r26,4364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bne cr6,0x83a62464
	if (!cr6.eq) goto loc_83A62464;
loc_83A621B8:
	// lwz r11,5220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a6221c
	if (cr6.eq) goto loc_83A6221C;
	// stw r28,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r28.u32);
	// addi r4,r31,5168
	ctx.r4.s64 = ctx.r31.s64 + 5168;
	// stw r27,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r27.u32);
	// addi r6,r31,5184
	ctx.r6.s64 = ctx.r31.s64 + 5184;
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// addi r5,r31,5192
	ctx.r5.s64 = ctx.r31.s64 + 5192;
	// stw r26,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a61d08
	ctx.lr = 0x83A621EC;
	sub_83A61D08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,5188
	ctx.r6.s64 = ctx.r31.s64 + 5188;
	// addi r5,r31,5196
	ctx.r5.s64 = ctx.r31.s64 + 5196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a61d08
	ctx.lr = 0x83A62200;
	sub_83A61D08(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// lwz r28,4352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r27,4356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r30,4360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r26,4364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// bne cr6,0x83a62464
	if (!cr6.eq) goto loc_83A62464;
loc_83A6221C:
	// lwz r9,5220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a62288
	if (cr6.eq) goto loc_83A62288;
	// rlwinm r11,r28,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0x1FF;
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(ctx.r30.s32, 23, xer);
	// ble cr6,0x83a62244
	if (!cr6.gt) goto loc_83A62244;
	// subfic r10,r30,55
	xer.ca = ctx.r30.u32 <= 55;
	ctx.r10.s64 = 55 - ctx.r30.s64;
	// srw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
loc_83A62244:
	// lwz r10,5352(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5352);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r7,r8,16,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF00000;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,5224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5224, ctx.r7.u32);
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a62280
	if (cr6.lt) goto loc_83A62280;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a6228c
	goto loc_83A6228C;
loc_83A62280:
	// slw r28,r28,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x83a6228c
	goto loc_83A6228C;
loc_83A62288:
	// stw r23,5224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5224, ctx.r23.u32);
loc_83A6228C:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// stw r28,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r28.u32);
	// stw r27,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// stw r26,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r26.u32);
	// beq cr6,0x83a622ec
	if (cr6.eq) goto loc_83A622EC;
	// lwz r11,5092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A622B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,5100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A622C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,5148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5148, ctx.r23.u32);
	// stw r23,5152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5152, ctx.r23.u32);
	// stw r23,5156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5156, ctx.r23.u32);
	// stw r23,5160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5160, ctx.r23.u32);
	// stw r23,5184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5184, ctx.r23.u32);
	// stw r23,5188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5188, ctx.r23.u32);
	// stw r23,5192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5192, ctx.r23.u32);
	// stw r23,5196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5196, ctx.r23.u32);
	// b 0x83a62338
	goto loc_83A62338;
loc_83A622EC:
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// lwz r10,5224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5224);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r11,1276
	ctx.r9.s64 = ctx.r11.s64 + 1276;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r29,5104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5104, ctx.r29.u32);
	// beq cr6,0x83a62320
	if (cr6.eq) goto loc_83A62320;
	// lwz r11,5096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A62320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83A6232C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,5232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5232, ctx.r22.u32);
	// stw r22,5236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5236, ctx.r22.u32);
	// stw r22,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r22.u32);
loc_83A62338:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a62464
	if (!cr6.eq) goto loc_83A62464;
	// lwz r11,5316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5316);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// bgt 0x83a6236c
	if (cr0.gt) goto loc_83A6236C;
	// lwz r11,4816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// lwz r10,4820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// lwz r3,4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A6236C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A6236C:
	// lwz r30,4360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r29,r30,29
	ctx.r29.u64 = ctx.r30.u32 & 0x7;
	// lwz r26,4364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// lwz r9,5292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r28,4352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r27,4356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// cmpwi cr6,r6,2048
	cr6.compare<int32_t>(ctx.r6.s32, 2048, xer);
	// bgt cr6,0x83a6245c
	if (cr6.gt) goto loc_83A6245C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a679c0
	ctx.lr = 0x83A623BC;
	sub_83A679C0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A623D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A623F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r29,r10
	ctx.r30.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// lwzu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83a62458
	if (cr6.lt) goto loc_83A62458;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a61f3c
	goto loc_83A61F3C;
loc_83A62458:
	// slw r28,r11,r29
	ctx.r28.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_83A6245C:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x83a61f3c
	goto loc_83A61F3C;
loc_83A62464:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83a679c0
	ctx.lr = 0x83A6248C;
	sub_83A679C0(ctx, base);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A624A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A624C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a5fea8
	ctx.lr = 0x83A624CC;
	sub_83A5FEA8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A624D4"))) PPC_WEAK_FUNC(sub_83A624D4);
PPC_FUNC_IMPL(__imp__sub_83A624D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A624D8"))) PPC_WEAK_FUNC(sub_83A624D8);
PPC_FUNC_IMPL(__imp__sub_83A624D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83A624E0;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r25,r3,5288
	ctx.r25.s64 = ctx.r3.s64 + 5288;
	// ori r21,r10,65535
	ctx.r21.u64 = ctx.r10.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A6251C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,5288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r9,5296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5296);
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// lwzu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// slw r11,r6,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83a62560
	if (cr6.lt) goto loc_83A62560;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a62564
	goto loc_83A62564;
loc_83A62560:
	// slw r28,r11,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
loc_83A62564:
	// lis r20,-31738
	ctx.r20.s64 = -2079981568;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,1024
	ctx.r22.s64 = 1024;
	// lis r19,-31738
	ctx.r19.s64 = -2079981568;
	// lis r18,-31738
	ctx.r18.s64 = -2079981568;
	// lis r17,-31738
	ctx.r17.s64 = -2079981568;
loc_83A6257C:
	// rlwinm r11,r28,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x7FFFFF;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// ble cr6,0x83a62594
	if (!cr6.gt) goto loc_83A62594;
	// subfic r10,r30,41
	xer.ca = ctx.r30.u32 <= 41;
	ctx.r10.s64 = 41 - ctx.r30.s64;
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A62594:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a62808
	if (cr6.eq) goto loc_83A62808;
	// lwz r8,5204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
loc_83A625A0:
	// rlwinm r11,r28,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 11) & 0x7FF;
	// cmpwi cr6,r30,21
	cr6.compare<int32_t>(ctx.r30.s32, 21, xer);
	// ble cr6,0x83a625b8
	if (!cr6.gt) goto loc_83A625B8;
	// subfic r10,r30,53
	xer.ca = ctx.r30.u32 <= 53;
	ctx.r10.s64 = 53 - ctx.r30.s64;
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A625B8:
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a625d0
	if (!cr6.eq) goto loc_83A625D0;
	// lwz r10,5336(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 5336);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83a625d8
	goto loc_83A625D8;
loc_83A625D0:
	// lwz r10,5332(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5332);
	// rlwinm r9,r11,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
loc_83A625D8:
	// lhzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a62604
	if (cr6.lt) goto loc_83A62604;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a62608
	goto loc_83A62608;
loc_83A62604:
	// slw r28,r28,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
loc_83A62608:
	// rlwinm r11,r10,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3F;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x83a625a0
	if (cr6.eq) goto loc_83A625A0;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x83a6262c
	if (!cr6.eq) goto loc_83A6262C;
	// lwz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// b 0x83a625a0
	goto loc_83A625A0;
loc_83A6262C:
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// beq cr6,0x83a62808
	if (cr6.eq) goto loc_83A62808;
	// lwz r9,5204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// lwz r7,5216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r10.u32);
	// stw r11,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r11.u32);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bgt cr6,0x83a62808
	if (cr6.gt) goto loc_83A62808;
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r11,5212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r10,4836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83a62698
	if (cr6.lt) goto loc_83A62698;
loc_83A62670:
	// lwz r9,5212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r11,5208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5208);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r8.u32);
	// stw r7,5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5208, ctx.r7.u32);
	// lwz r5,4836(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4836);
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bge cr6,0x83a62670
	if (!cr6.lt) goto loc_83A62670;
loc_83A62698:
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x83a62808
	if (cr6.eq) goto loc_83A62808;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83a626dc
	if (!cr6.eq) goto loc_83A626DC;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// ble cr6,0x83a626dc
	if (!cr6.gt) goto loc_83A626DC;
	// lwz r11,5088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A626C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r23,5148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5148, ctx.r23.u32);
	// stw r23,5152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5152, ctx.r23.u32);
	// stw r23,5156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5156, ctx.r23.u32);
	// stw r23,5160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5160, ctx.r23.u32);
	// stw r22,5232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5232, ctx.r22.u32);
	// stw r22,5236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5236, ctx.r22.u32);
	// stw r22,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r22.u32);
loc_83A626DC:
	// lwz r11,5220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83a62744
	if (!cr6.eq) goto loc_83A62744;
	// rlwinm r11,r28,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x1F;
	// cmpwi cr6,r30,27
	cr6.compare<int32_t>(ctx.r30.s32, 27, xer);
	// ble cr6,0x83a62704
	if (!cr6.gt) goto loc_83A62704;
	// subfic r10,r30,59
	xer.ca = ctx.r30.u32 <= 59;
	ctx.r10.s64 = 59 - ctx.r30.s64;
	// srw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_83A62704:
	// lwz r10,5312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 5312);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r9,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r8.u32);
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a62740
	if (cr6.lt) goto loc_83A62740;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a62744
	goto loc_83A62744;
loc_83A62740:
	// slw r28,r28,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
loc_83A62744:
	// lwz r10,5220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a627a8
	if (cr6.eq) goto loc_83A627A8;
	// cmpwi cr6,r30,27
	cr6.compare<int32_t>(ctx.r30.s32, 27, xer);
	// blt cr6,0x83a62798
	if (cr6.lt) goto loc_83A62798;
	// addic. r30,r30,-27
	xer.ca = ctx.r30.u32 > 26;
	ctx.r30.s64 = ctx.r30.s64 + -27;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x83a62784
	if (cr0.eq) goto loc_83A62784;
	// subfic r11,r30,5
	xer.ca = ctx.r30.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r30.s64;
	// srw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 | ctx.r28.u64;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r8,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a627a4
	goto loc_83A627A4;
loc_83A62784:
	// rlwinm r11,r28,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x1F;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a627a4
	goto loc_83A627A4;
loc_83A62798:
	// rlwinm r11,r28,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0x1F;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// rlwinm r28,r28,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
loc_83A627A4:
	// stw r11,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r11.u32);
loc_83A627A8:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a62878
	if (cr6.eq) goto loc_83A62878;
	// stw r28,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r28.u32);
	// addi r4,r31,5132
	ctx.r4.s64 = ctx.r31.s64 + 5132;
	// stw r27,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r27.u32);
	// addi r6,r31,5148
	ctx.r6.s64 = ctx.r31.s64 + 5148;
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// addi r5,r31,5156
	ctx.r5.s64 = ctx.r31.s64 + 5156;
	// stw r26,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a61d08
	ctx.lr = 0x83A627D8;
	sub_83A61D08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,5152
	ctx.r6.s64 = ctx.r31.s64 + 5152;
	// addi r5,r31,5160
	ctx.r5.s64 = ctx.r31.s64 + 5160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a61d08
	ctx.lr = 0x83A627EC;
	sub_83A61D08(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// lwz r28,4352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r27,4356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r30,4360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r26,4364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// beq cr6,0x83a62888
	if (cr6.eq) goto loc_83A62888;
loc_83A62808:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83a679c0
	ctx.lr = 0x83A62830;
	sub_83A679C0(ctx, base);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83A6284C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a5fea8
	ctx.lr = 0x83A62870;
	sub_83A5FEA8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_83A62878:
	// stw r23,5148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5148, ctx.r23.u32);
	// stw r23,5152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5152, ctx.r23.u32);
	// stw r23,5156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5156, ctx.r23.u32);
	// stw r23,5160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5160, ctx.r23.u32);
loc_83A62888:
	// lwz r9,5220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a628f4
	if (cr6.eq) goto loc_83A628F4;
	// rlwinm r11,r28,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0x1FF;
	// cmpwi cr6,r30,23
	cr6.compare<int32_t>(ctx.r30.s32, 23, xer);
	// ble cr6,0x83a628b0
	if (!cr6.gt) goto loc_83A628B0;
	// subfic r10,r30,55
	xer.ca = ctx.r30.u32 <= 55;
	ctx.r10.s64 = 55 - ctx.r30.s64;
	// srw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
loc_83A628B0:
	// lwz r10,5352(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 5352);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r7,r8,16,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF00000;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,5224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5224, ctx.r7.u32);
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x83a628ec
	if (cr6.lt) goto loc_83A628EC;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a628f8
	goto loc_83A628F8;
loc_83A628EC:
	// slw r28,r28,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x83a628f8
	goto loc_83A628F8;
loc_83A628F4:
	// stw r23,5224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5224, ctx.r23.u32);
loc_83A628F8:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// stw r28,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r28.u32);
	// stw r27,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r27.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4360, ctx.r30.u32);
	// stw r26,4364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4364, ctx.r26.u32);
	// beq cr6,0x83a62938
	if (cr6.eq) goto loc_83A62938;
	// lwz r11,5092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5092);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,5100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A62934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83a62970
	goto loc_83A62970;
loc_83A62938:
	// lwz r11,5224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5224);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a62954
	if (cr6.eq) goto loc_83A62954;
	// lwz r11,5096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5096);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62954;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A62954:
	// lwz r11,5112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,5232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5232, ctx.r22.u32);
	// stw r22,5236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5236, ctx.r22.u32);
	// stw r22,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r22.u32);
loc_83A62970:
	// lwz r11,5412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a62808
	if (!cr6.eq) goto loc_83A62808;
	// lwz r11,5316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5316);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// bgt 0x83a629a4
	if (cr0.gt) goto loc_83A629A4;
	// lwz r11,4816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	// lwz r10,4820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4820);
	// lwz r3,4824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4824);
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A629A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A629A4:
	// lwz r30,4360(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r29,r30,29
	ctx.r29.u64 = ctx.r30.u32 & 0x7;
	// lwz r26,4364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4364);
	// lwz r9,5292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5292);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r28,4352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4352);
	// lwz r27,4356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// cmpwi cr6,r6,2048
	cr6.compare<int32_t>(ctx.r6.s32, 2048, xer);
	// bgt cr6,0x83a62a94
	if (cr6.gt) goto loc_83A62A94;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a679c0
	ctx.lr = 0x83A629F4;
	sub_83A679C0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A62A10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A62A2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A62A4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r29,r10
	ctx.r30.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// lwzu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// blt cr6,0x83a62a90
	if (cr6.lt) goto loc_83A62A90;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// slw r28,r27,r30
	ctx.r28.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x83a6257c
	goto loc_83A6257C;
loc_83A62A90:
	// slw r28,r11,r29
	ctx.r28.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_83A62A94:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x83a6257c
	goto loc_83A6257C;
}

__attribute__((alias("__imp__sub_83A62A9C"))) PPC_WEAK_FUNC(sub_83A62A9C);
PPC_FUNC_IMPL(__imp__sub_83A62A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A62AA0"))) PPC_WEAK_FUNC(sub_83A62AA0);
PPC_FUNC_IMPL(__imp__sub_83A62AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r5,r11,22856
	ctx.r5.s64 = ctx.r11.s64 + 22856;
	// li r4,576
	ctx.r4.s64 = 576;
	// addi r11,r5,1600
	ctx.r11.s64 = ctx.r5.s64 + 1600;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A62AC0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a62ac0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62AC0;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r8,571
	ctx.r8.s64 = 571;
	// addi r9,r5,1600
	ctx.r9.s64 = ctx.r5.s64 + 1600;
	// sth r8,1632(r5)
	PPC_STORE_U16(ctx.r5.u32 + 1632, ctx.r8.u16);
	// addi r11,r5,1600
	ctx.r11.s64 = ctx.r5.s64 + 1600;
	// sth r8,1634(r5)
	PPC_STORE_U16(ctx.r5.u32 + 1634, ctx.r8.u16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,34
	ctx.r10.s64 = ctx.r9.s64 + 34;
loc_83A62AEC:
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a62aec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62AEC;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,555
	ctx.r8.s64 = 555;
	// addi r9,r5,1600
	ctx.r9.s64 = ctx.r5.s64 + 1600;
	// sth r8,1660(r5)
	PPC_STORE_U16(ctx.r5.u32 + 1660, ctx.r8.u16);
	// addi r11,r5,1600
	ctx.r11.s64 = ctx.r5.s64 + 1600;
	// sth r8,1662(r5)
	PPC_STORE_U16(ctx.r5.u32 + 1662, ctx.r8.u16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r9,62
	ctx.r10.s64 = ctx.r9.s64 + 62;
loc_83A62B18:
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a62b18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62B18;
	// addi r11,r5,1600
	ctx.r11.s64 = ctx.r5.s64 + 1600;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_83A62B2C:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17421
	ctx.r8.u64 = ctx.r9.u64 | 17421;
	// ori r7,r9,1036
	ctx.r7.u64 = ctx.r9.u64 | 1036;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bge cr6,0x83a62b2c
	if (!cr6.lt) goto loc_83A62B2C;
	// li r10,21
	ctx.r10.s64 = 21;
loc_83A62B5C:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17420
	ctx.r8.u64 = ctx.r9.u64 | 17420;
	// ori r7,r9,1035
	ctx.r7.u64 = ctx.r9.u64 | 1035;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x83a62b5c
	if (!cr6.lt) goto loc_83A62B5C;
	// li r6,15
	ctx.r6.s64 = 15;
loc_83A62B98:
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,8
	ctx.r8.s64 = 8;
	// ori r7,r10,17418
	ctx.r7.u64 = ctx.r10.u64 | 17418;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A62BB0:
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83a62bb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62BB0;
	// ori r8,r10,1033
	ctx.r8.u64 = ctx.r10.u64 | 1033;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A62BD0:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a62bd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62BD0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// bge cr6,0x83a62b98
	if (!cr6.lt) goto loc_83A62B98;
	// li r6,9
	ctx.r6.s64 = 9;
loc_83A62BEC:
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,16
	ctx.r8.s64 = 16;
	// ori r7,r10,17417
	ctx.r7.u64 = ctx.r10.u64 | 17417;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A62C04:
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83a62c04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62C04;
	// ori r8,r10,1032
	ctx.r8.u64 = ctx.r10.u64 | 1032;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A62C24:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a62c24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62C24;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// bge cr6,0x83a62bec
	if (!cr6.lt) goto loc_83A62BEC;
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// sth r4,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r4.u16);
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r4,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r4.u16);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// sth r4,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r4.u16);
loc_83A62C58:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17415
	ctx.r8.u64 = ctx.r9.u64 | 17415;
	// ori r7,r9,1030
	ctx.r7.u64 = ctx.r9.u64 | 1030;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// sthu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bge cr6,0x83a62c58
	if (!cr6.lt) goto loc_83A62C58;
	// li r10,5
	ctx.r10.s64 = 5;
loc_83A62C88:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17414
	ctx.r8.u64 = ctx.r9.u64 | 17414;
	// ori r7,r9,1029
	ctx.r7.u64 = ctx.r9.u64 | 1029;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bge cr6,0x83a62c88
	if (!cr6.lt) goto loc_83A62C88;
	// li r10,3
	ctx.r10.s64 = 3;
loc_83A62CC4:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,17413
	ctx.r8.u64 = ctx.r9.u64 | 17413;
	// ori r7,r9,1028
	ctx.r7.u64 = ctx.r9.u64 | 1028;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge cr6,0x83a62cc4
	if (!cr6.lt) goto loc_83A62CC4;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// li r8,17427
	ctx.r8.s64 = 17427;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A62D1C:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a62d1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62D1C;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r9,1042
	ctx.r9.s64 = 1042;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A62D38:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a62d38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62D38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A62D44"))) PPC_WEAK_FUNC(sub_83A62D44);
PPC_FUNC_IMPL(__imp__sub_83A62D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A62D48"))) PPC_WEAK_FUNC(sub_83A62D48);
PPC_FUNC_IMPL(__imp__sub_83A62D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A62D50;
	__savegprlr_27(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,22792
	ctx.r11.s64 = ctx.r11.s64 + 22792;
	// li r6,576
	ctx.r6.s64 = 576;
	// addi r10,r11,2176
	ctx.r10.s64 = ctx.r11.s64 + 2176;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A62D70:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a62d70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62D70;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,571
	ctx.r8.s64 = 571;
	// addi r10,r11,2176
	ctx.r10.s64 = ctx.r11.s64 + 2176;
	// sth r8,2192(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2192, ctx.r8.u16);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A62D94:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a62d94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62D94;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,555
	ctx.r8.s64 = 555;
	// addi r10,r11,2176
	ctx.r10.s64 = ctx.r11.s64 + 2176;
	// sth r8,2206(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2206, ctx.r8.u16);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r10,r10,30
	ctx.r10.s64 = ctx.r10.s64 + 30;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A62DB8:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a62db8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62DB8;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r10,r11,2176
	ctx.r10.s64 = ctx.r11.s64 + 2176;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A62DD4:
	// li r8,11
	ctx.r8.s64 = 11;
	// rlwimi r8,r9,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a62dd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62DD4;
	// li r9,346
	ctx.r9.s64 = 346;
	// li r8,-22181
	ctx.r8.s64 = -22181;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// li r7,330
	ctx.r7.s64 = 330;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// li r5,-22197
	ctx.r5.s64 = -22197;
	// li r4,314
	ctx.r4.s64 = 314;
	// li r3,-22213
	ctx.r3.s64 = -22213;
	// li r31,298
	ctx.r31.s64 = 298;
	// li r30,-22229
	ctx.r30.s64 = -22229;
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// li r7,282
	ctx.r7.s64 = 282;
	// li r29,-22245
	ctx.r29.s64 = -22245;
	// li r28,266
	ctx.r28.s64 = 266;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r27,-22261
	ctx.r27.s64 = -22261;
	// sthu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r5,-24565
	ctx.r5.s64 = -24565;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,-22519
	ctx.r8.s64 = -22519;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// li r7,-30710
	ctx.r7.s64 = -30710;
	// sthu r29,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// sthu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r10.u32 = ea;
	// sthu r27,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_83A62E6C:
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// or r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 | ctx.r5.u64;
	// ori r3,r4,8
	ctx.r3.u64 = ctx.r4.u64 | 8;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// sthu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// or r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 | ctx.r8.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a62e6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62E6C;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r5,-24566
	ctx.r5.s64 = -24566;
	// li r7,-30711
	ctx.r7.s64 = -30711;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,-22520
	ctx.r8.s64 = -22520;
loc_83A62ED0:
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r3,r4,7
	ctx.r3.u64 = ctx.r4.u64 | 7;
	// or r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 | ctx.r5.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// or r30,r4,r7
	ctx.r30.u64 = ctx.r4.u64 | ctx.r7.u64;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// or r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 | ctx.r8.u64;
	// extsh r3,r30
	ctx.r3.s64 = ctx.r30.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// sthu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// sthu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a62ed0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A62ED0;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// li r10,117
	ctx.r10.s64 = 117;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// li r9,101
	ctx.r9.s64 = 101;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// li r8,84
	ctx.r8.s64 = 84;
	// li r7,-22443
	ctx.r7.s64 = -22443;
	// li r6,68
	ctx.r6.s64 = 68;
	// sth r8,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// li r10,-22459
	ctx.r10.s64 = -22459;
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// li r9,51
	ctx.r9.s64 = 51;
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// li r8,-30667
	ctx.r8.s64 = -30667;
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// li r7,-22476
	ctx.r7.s64 = -22476;
	// li r6,-22476
	ctx.r6.s64 = -22476;
	// sth r8,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// li r10,35
	ctx.r10.s64 = 35;
	// sth r7,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r7.u16);
	// li r9,-30683
	ctx.r9.s64 = -30683;
	// sth r6,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r6.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// li r8,-22492
	ctx.r8.s64 = -22492;
	// sth r9,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r9.u16);
	// li r7,-22492
	ctx.r7.s64 = -22492;
	// li r6,17
	ctx.r6.s64 = 17;
	// sth r8,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r8.u16);
	// li r10,17
	ctx.r10.s64 = 17;
	// sth r7,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r7.u16);
	// li r9,-24556
	ctx.r9.s64 = -24556;
	// sth r6,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// li r8,-24556
	ctx.r8.s64 = -24556;
	// sth r9,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r9.u16);
	// li r7,-30701
	ctx.r7.s64 = -30701;
	// li r6,-30701
	ctx.r6.s64 = -30701;
	// sth r8,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r8.u16);
	// li r10,-30701
	ctx.r10.s64 = -30701;
	// sth r7,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r7.u16);
	// li r9,-30701
	ctx.r9.s64 = -30701;
	// sth r6,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r6.u16);
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// li r8,-22510
	ctx.r8.s64 = -22510;
	// sth r9,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r9.u16);
	// li r7,-22510
	ctx.r7.s64 = -22510;
	// li r6,-22510
	ctx.r6.s64 = -22510;
	// sth r8,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r8.u16);
	// li r10,-22510
	ctx.r10.s64 = -22510;
	// sth r7,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r7.u16);
	// li r9,-22510
	ctx.r9.s64 = -22510;
	// sth r6,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r6.u16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// sth r10,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r10.u16);
	// sth r9,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// sth r8,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r8.u16);
	// sth r7,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r7.u16);
	// sth r6,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r6.u16);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A63034"))) PPC_WEAK_FUNC(sub_83A63034);
PPC_FUNC_IMPL(__imp__sub_83A63034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A63038"))) PPC_WEAK_FUNC(sub_83A63038);
PPC_FUNC_IMPL(__imp__sub_83A63038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A63040;
	__savegprlr_25(ctx, base);
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// li r31,576
	ctx.r31.s64 = 576;
	// addi r10,r11,-1088
	ctx.r10.s64 = ctx.r11.s64 + -1088;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63060:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a63060
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63060;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,571
	ctx.r8.s64 = 571;
	// addi r10,r11,-1088
	ctx.r10.s64 = ctx.r11.s64 + -1088;
	// sth r8,-1072(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1072, ctx.r8.u16);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63084:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a63084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63084;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,555
	ctx.r8.s64 = 555;
	// addi r10,r11,-1088
	ctx.r10.s64 = ctx.r11.s64 + -1088;
	// sth r8,-1058(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1058, ctx.r8.u16);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r10,r10,30
	ctx.r10.s64 = ctx.r10.s64 + 30;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A630A8:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a630a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A630A8;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r10,r11,-1088
	ctx.r10.s64 = ctx.r11.s64 + -1088;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A630C4:
	// li r8,11
	ctx.r8.s64 = 11;
	// rlwimi r8,r9,4,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a630c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A630C4;
	// li r4,346
	ctx.r4.s64 = 346;
	// li r5,330
	ctx.r5.s64 = 330;
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// li r6,314
	ctx.r6.s64 = 314;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// li r8,298
	ctx.r8.s64 = 298;
	// li r9,282
	ctx.r9.s64 = 282;
	// li r7,266
	ctx.r7.s64 = 266;
	// sthu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// sthu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// li r5,-28661
	ctx.r5.s64 = -28661;
	// sthu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r10.u32 = ea;
	// sthu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r10.u32 = ea;
	// li r6,-26613
	ctx.r6.s64 = -26613;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// li r8,6
	ctx.r8.s64 = 6;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,-18422
	ctx.r8.s64 = -18422;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// li r7,-20470
	ctx.r7.s64 = -20470;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_83A63148:
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r3,r4,8
	ctx.r3.u64 = ctx.r4.u64 | 8;
	// or r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 | ctx.r5.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// or r29,r4,r6
	ctx.r29.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// or r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 | ctx.r8.u64;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// sthu r29,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r3,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a63148
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63148;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r3,-24565
	ctx.r3.s64 = -24565;
	// li r4,-22517
	ctx.r4.s64 = -22517;
	// li r5,-28662
	ctx.r5.s64 = -28662;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r6,-26614
	ctx.r6.s64 = -26614;
	// li r7,-20471
	ctx.r7.s64 = -20471;
	// li r8,-18423
	ctx.r8.s64 = -18423;
loc_83A631C4:
	// rlwinm r30,r9,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r29,r30,7
	ctx.r29.u64 = ctx.r30.u64 | 7;
	// or r28,r30,r3
	ctx.r28.u64 = ctx.r30.u64 | ctx.r3.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// or r27,r30,r4
	ctx.r27.u64 = ctx.r30.u64 | ctx.r4.u64;
	// sth r29,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r29.u16);
	// or r26,r30,r6
	ctx.r26.u64 = ctx.r30.u64 | ctx.r6.u64;
	// sthu r29,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// or r29,r30,r5
	ctx.r29.u64 = ctx.r30.u64 | ctx.r5.u64;
	// or r25,r30,r7
	ctx.r25.u64 = ctx.r30.u64 | ctx.r7.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// or r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 | ctx.r8.u64;
	// sthu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r10.u32 = ea;
	// extsh r28,r26
	ctx.r28.s64 = ctx.r26.s16;
	// extsh r26,r25
	ctx.r26.s64 = ctx.r25.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// sthu r27,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r10.u32 = ea;
	// sthu r29,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// sthu r29,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r10.u32 = ea;
	// sthu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r10.u32 = ea;
	// sthu r28,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r10.u32 = ea;
	// sthu r26,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r26.u16);
	ctx.r10.u32 = ea;
	// sthu r26,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r26.u16);
	ctx.r10.u32 = ea;
	// sthu r26,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r26.u16);
	ctx.r10.u32 = ea;
	// sthu r26,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r26.u16);
	ctx.r10.u32 = ea;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// sthu r30,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x83a631c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A631C4;
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// li r10,117
	ctx.r10.s64 = 117;
	// li r9,101
	ctx.r9.s64 = 101;
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// li r8,84
	ctx.r8.s64 = 84;
	// li r7,84
	ctx.r7.s64 = 84;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// li r6,68
	ctx.r6.s64 = 68;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// sth r8,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// li r10,68
	ctx.r10.s64 = 68;
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// li r9,51
	ctx.r9.s64 = 51;
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// li r8,51
	ctx.r8.s64 = 51;
	// li r7,-20427
	ctx.r7.s64 = -20427;
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// li r6,-18379
	ctx.r6.s64 = -18379;
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// sth r8,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
	// li r10,35
	ctx.r10.s64 = 35;
	// sth r7,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r7.u16);
	// li r9,35
	ctx.r9.s64 = 35;
	// sth r6,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r6.u16);
	// li r8,-20443
	ctx.r8.s64 = -20443;
	// li r7,-18395
	ctx.r7.s64 = -18395;
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// li r6,17
	ctx.r6.s64 = 17;
	// sth r9,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r9.u16);
	// sth r8,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r8.u16);
	// li r10,17
	ctx.r10.s64 = 17;
	// sth r7,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r7.u16);
	// li r9,-24555
	ctx.r9.s64 = -24555;
	// sth r6,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// li r8,-22507
	ctx.r8.s64 = -22507;
	// li r7,-28652
	ctx.r7.s64 = -28652;
	// sth r10,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// li r6,-28652
	ctx.r6.s64 = -28652;
	// sth r9,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r9.u16);
	// sth r8,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r8.u16);
	// li r10,-26604
	ctx.r10.s64 = -26604;
	// sth r7,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r7.u16);
	// li r9,-26604
	ctx.r9.s64 = -26604;
	// sth r6,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r6.u16);
	// li r8,-20461
	ctx.r8.s64 = -20461;
	// li r7,-20461
	ctx.r7.s64 = -20461;
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// li r6,-20461
	ctx.r6.s64 = -20461;
	// sth r9,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r9.u16);
	// sth r8,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r8.u16);
	// li r10,-20461
	ctx.r10.s64 = -20461;
	// sth r7,50(r11)
	PPC_STORE_U16(ctx.r11.u32 + 50, ctx.r7.u16);
	// li r9,-18413
	ctx.r9.s64 = -18413;
	// sth r6,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r6.u16);
	// li r8,-18413
	ctx.r8.s64 = -18413;
	// li r7,-18413
	ctx.r7.s64 = -18413;
	// sth r10,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r10.u16);
	// li r6,-18413
	ctx.r6.s64 = -18413;
	// sth r9,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// sth r8,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r8.u16);
	// sth r7,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r7.u16);
	// sth r6,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r6.u16);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A63348"))) PPC_WEAK_FUNC(sub_83A63348);
PPC_FUNC_IMPL(__imp__sub_83A63348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31739
	ctx.r11.s64 = -2080047104;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// li r4,127
	ctx.r4.s64 = 127;
	// addi r10,r11,-448
	ctx.r10.s64 = ctx.r11.s64 + -448;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63368:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a63368
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63368;
	// addi r10,r11,-448
	ctx.r10.s64 = ctx.r11.s64 + -448;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,-16
	ctx.r9.s64 = -16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r7,11
	ctx.r7.s64 = 11;
loc_83A63384:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwimi r6,r7,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r5,r7,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r10.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r9,-11
	cr6.compare<int32_t>(ctx.r9.s32, -11, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// ble cr6,0x83a63384
	if (!cr6.gt) goto loc_83A63384;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r9,-10
	ctx.r9.s64 = -10;
loc_83A633B8:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// ori r5,r7,2560
	ctx.r5.u64 = ctx.r7.u64 | 2560;
	// ori r3,r6,2560
	ctx.r3.u64 = ctx.r6.u64 | 2560;
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r5,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r9,-8
	cr6.compare<int32_t>(ctx.r9.s32, -8, xer);
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// sth r3,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ble cr6,0x83a633b8
	if (!cr6.gt) goto loc_83A633B8;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r6,-7
	ctx.r6.s64 = -7;
loc_83A633F8:
	// li r8,8
	ctx.r8.s64 = 8;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// ori r7,r7,2048
	ctx.r7.u64 = ctx.r7.u64 | 2048;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A6340C:
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83a6340c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A6340C;
	// li r9,8
	ctx.r9.s64 = 8;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// ori r7,r7,2048
	ctx.r7.u64 = ctx.r7.u64 | 2048;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A6342C:
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a6342c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A6342C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r6,-5
	cr6.compare<int32_t>(ctx.r6.s32, -5, xer);
	// ble cr6,0x83a633f8
	if (!cr6.gt) goto loc_83A633F8;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// li r7,1796
	ctx.r7.s64 = 1796;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83A63458:
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83a63458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63458;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,2044
	ctx.r8.s64 = 2044;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63474:
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83a63474
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63474;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// li r8,1283
	ctx.r8.s64 = 1283;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// li r5,1026
	ctx.r5.s64 = 1026;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// li r6,1278
	ctx.r6.s64 = 1278;
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// li r9,769
	ctx.r9.s64 = 769;
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r5,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r5.u16);
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// li r10,1023
	ctx.r10.s64 = 1023;
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// sth r9,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r9.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// sth r10,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// li r10,256
	ctx.r10.s64 = 256;
loc_83A634F8:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a634f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A634F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A63504"))) PPC_WEAK_FUNC(sub_83A63504);
PPC_FUNC_IMPL(__imp__sub_83A63504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A63508"))) PPC_WEAK_FUNC(sub_83A63508);
PPC_FUNC_IMPL(__imp__sub_83A63508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A63510;
	__savegprlr_24(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-6391
	ctx.r10.s64 = -6391;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// li r9,-9463
	ctx.r9.s64 = -9463;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// li r8,-1271
	ctx.r8.s64 = -1271;
	// sthu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// li r10,-2295
	ctx.r10.s64 = -2295;
	// li r25,-4343
	ctx.r25.s64 = -4343;
	// li r24,-8439
	ctx.r24.s64 = -8439;
	// li r26,-17912
	ctx.r26.s64 = -17912;
	// li r27,-18936
	ctx.r27.s64 = -18936;
	// sthu r9,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r3.u32 = ea;
	// li r28,-20984
	ctx.r28.s64 = -20984;
	// li r29,-25080
	ctx.r29.s64 = -25080;
	// li r30,30984
	ctx.r30.s64 = 30984;
	// li r31,29960
	ctx.r31.s64 = 29960;
	// li r4,27912
	ctx.r4.s64 = 27912;
	// sthu r8,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r3.u32 = ea;
	// li r5,23816
	ctx.r5.s64 = 23816;
	// li r6,-23032
	ctx.r6.s64 = -23032;
	// li r7,-26104
	ctx.r7.s64 = -26104;
	// li r8,25864
	ctx.r8.s64 = 25864;
	// li r11,22792
	ctx.r11.s64 = 22792;
	// sthu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// li r9,-5368
	ctx.r9.s64 = -5368;
	// li r10,-10488
	ctx.r10.s64 = -10488;
	// sthu r25,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r25.u16);
	ctx.r3.u32 = ea;
	// sthu r24,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r24.u16);
	ctx.r3.u32 = ea;
	// sthu r26,2(r3)
	ea = 2 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r26.u16);
	ctx.r3.u32 = ea;
	// sth r26,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r26.u16);
	// sthu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r3.u32 = ea;
	// sth r27,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r27.u16);
	// li r27,-12536
	ctx.r27.s64 = -12536;
	// sthu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r3.u32 = ea;
	// sth r28,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r28.u16);
	// li r28,-22008
	ctx.r28.s64 = -22008;
	// sthu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r3.u32 = ea;
	// sth r29,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r29.u16);
	// li r29,-27128
	ctx.r29.s64 = -27128;
	// sthu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r3.u32 = ea;
	// sth r30,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r30.u16);
	// li r30,-19960
	ctx.r30.s64 = -19960;
	// sthu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r3.u32 = ea;
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
	// li r31,-29176
	ctx.r31.s64 = -29176;
	// sthu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r3.u32 = ea;
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// li r4,26888
	ctx.r4.s64 = 26888;
	// sthu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r3.u32 = ea;
	// sth r5,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r5.u16);
	// li r5,21768
	ctx.r5.s64 = 21768;
	// sthu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r3.u32 = ea;
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// li r6,28936
	ctx.r6.s64 = 28936;
	// sthu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r3.u32 = ea;
	// sth r7,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// li r7,19720
	ctx.r7.s64 = 19720;
	// sthu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r3.u32 = ea;
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// li r8,-7416
	ctx.r8.s64 = -7416;
	// sthu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r3.u32 = ea;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// li r11,-3320
	ctx.r11.s64 = -3320;
	// sthu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r3.u32 = ea;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// li r9,-11512
	ctx.r9.s64 = -11512;
	// sthu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// li r10,-13560
	ctx.r10.s64 = -13560;
	// sthu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r3.u32 = ea;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// li r11,-14584
	ctx.r11.s64 = -14584;
	// sthu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r27.u16);
	ctx.r3.u32 = ea;
	// sth r27,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r27.u16);
	// sthu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r28.u16);
	ctx.r3.u32 = ea;
	// sth r28,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r28.u16);
	// sthu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r29.u16);
	ctx.r3.u32 = ea;
	// sth r29,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r29.u16);
	// sthu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r3.u32 = ea;
	// sth r30,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r30.u16);
	// sthu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r3.u32 = ea;
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
	// sthu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r3.u32 = ea;
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// sthu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r3.u32 = ea;
	// sth r5,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r5.u16);
	// sthu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r3.u32 = ea;
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// sthu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r3.u32 = ea;
	// sth r7,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// sthu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r3.u32 = ea;
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// sthu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r3.u32 = ea;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// sthu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// sthu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r3.u32 = ea;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A636A4"))) PPC_WEAK_FUNC(sub_83A636A4);
PPC_FUNC_IMPL(__imp__sub_83A636A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A636A8"))) PPC_WEAK_FUNC(sub_83A636A8);
PPC_FUNC_IMPL(__imp__sub_83A636A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r31,-24057
	ctx.r31.s64 = -24057;
	// li r4,-28153
	ctx.r4.s64 = -28153;
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// li r5,-30201
	ctx.r5.s64 = -30201;
	// sth r31,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r31.u16);
	// li r6,-31225
	ctx.r6.s64 = -31225;
	// sth r31,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r31.u16);
	// li r7,24839
	ctx.r7.s64 = 24839;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// li r9,20743
	ctx.r9.s64 = 20743;
	// sthu r4,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r3.u32 = ea;
	// li r10,18695
	ctx.r10.s64 = 18695;
	// li r11,17671
	ctx.r11.s64 = 17671;
	// li r8,-250
	ctx.r8.s64 = -250;
	// sth r4,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// sth r4,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// sthu r5,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r3.u32 = ea;
	// sth r5,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r5.u16);
	// sth r5,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r5.u16);
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// sthu r6,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r3.u32 = ea;
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// sthu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r3.u32 = ea;
	// sth r7,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// sthu r9,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r3.u32 = ea;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// li r9,-15610
	ctx.r9.s64 = -15610;
	// sthu r10,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r10,9222
	ctx.r10.s64 = 9222;
	// sthu r11,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r3.u32 = ea;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// li r11,6150
	ctx.r11.s64 = 6150;
	// sthu r8,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r3.u32 = ea;
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// sth r8,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r8.u16);
	// sth r8,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r8.u16);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// sth r8,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r8.u16);
	// li r8,-16891
	ctx.r8.s64 = -16891;
	// sthu r9,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r3.u32 = ea;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// sth r9,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r9.u16);
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// sth r9,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r9.u16);
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
	// sthu r10,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// sthu r11,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_83A637F0:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x83a637f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A637F0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// li r8,-32251
	ctx.r8.s64 = -32251;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A6380C:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a6380c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A6380C;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,32005
	ctx.r8.s64 = 32005;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63828:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63828
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63828;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,16645
	ctx.r8.s64 = 16645;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63844:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63844
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63844;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,14341
	ctx.r8.s64 = 14341;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63860:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63860
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63860;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,13317
	ctx.r8.s64 = 13317;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A6387C:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a6387c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A6387C;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,11269
	ctx.r8.s64 = 11269;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63898:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63898;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,7173
	ctx.r8.s64 = 7173;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A638B4:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a638b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A638B4;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,10245
	ctx.r8.s64 = 10245;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A638D0:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a638d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A638D0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,5125
	ctx.r8.s64 = 5125;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A638EC:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a638ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A638EC;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,12293
	ctx.r8.s64 = 12293;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63908:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63908
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63908;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,3077
	ctx.r8.s64 = 3077;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63924:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63924
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63924;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// li r8,8196
	ctx.r8.s64 = 8196;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63940:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63940
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63940;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// li r8,4100
	ctx.r8.s64 = 4100;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A6395C:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a6395c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A6395C;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// li r8,2052
	ctx.r8.s64 = 2052;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63978:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63978
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63978;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// li r8,1028
	ctx.r8.s64 = 1028;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A63994:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a63994
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A63994;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// li r10,15363
	ctx.r10.s64 = 15363;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A639B0:
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83a639b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A639B0;
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

