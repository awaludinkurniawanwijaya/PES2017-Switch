#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C0D380"))) PPC_WEAK_FUNC(sub_83C0D380);
PPC_FUNC_IMPL(__imp__sub_83C0D380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,27968
	ctx.r3.s64 = ctx.r11.s64 + 27968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D38C"))) PPC_WEAK_FUNC(sub_83C0D38C);
PPC_FUNC_IMPL(__imp__sub_83C0D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D390"))) PPC_WEAK_FUNC(sub_83C0D390);
PPC_FUNC_IMPL(__imp__sub_83C0D390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,27976
	ctx.r3.s64 = ctx.r11.s64 + 27976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D39C"))) PPC_WEAK_FUNC(sub_83C0D39C);
PPC_FUNC_IMPL(__imp__sub_83C0D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D3A0"))) PPC_WEAK_FUNC(sub_83C0D3A0);
PPC_FUNC_IMPL(__imp__sub_83C0D3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,27984
	ctx.r3.s64 = ctx.r11.s64 + 27984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D3AC"))) PPC_WEAK_FUNC(sub_83C0D3AC);
PPC_FUNC_IMPL(__imp__sub_83C0D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D3B0"))) PPC_WEAK_FUNC(sub_83C0D3B0);
PPC_FUNC_IMPL(__imp__sub_83C0D3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,27992
	ctx.r3.s64 = ctx.r11.s64 + 27992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D3BC"))) PPC_WEAK_FUNC(sub_83C0D3BC);
PPC_FUNC_IMPL(__imp__sub_83C0D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D3C0"))) PPC_WEAK_FUNC(sub_83C0D3C0);
PPC_FUNC_IMPL(__imp__sub_83C0D3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28000
	ctx.r3.s64 = ctx.r11.s64 + 28000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D3CC"))) PPC_WEAK_FUNC(sub_83C0D3CC);
PPC_FUNC_IMPL(__imp__sub_83C0D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D3D0"))) PPC_WEAK_FUNC(sub_83C0D3D0);
PPC_FUNC_IMPL(__imp__sub_83C0D3D0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,3920
	ctx.r3.s64 = ctx.r11.s64 + 3920;
	// bl 0x83523120
	ctx.lr = 0x83C0D3E8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28008
	ctx.r3.s64 = ctx.r10.s64 + 28008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D3F4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D404"))) PPC_WEAK_FUNC(sub_83C0D404);
PPC_FUNC_IMPL(__imp__sub_83C0D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D408"))) PPC_WEAK_FUNC(sub_83C0D408);
PPC_FUNC_IMPL(__imp__sub_83C0D408) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3936
	ctx.r7.s64 = ctx.r8.s64 + 3936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D430"))) PPC_WEAK_FUNC(sub_83C0D430);
PPC_FUNC_IMPL(__imp__sub_83C0D430) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-18212
	ctx.r6.s64 = ctx.r7.s64 + -18212;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3936);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-18212(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D478"))) PPC_WEAK_FUNC(sub_83C0D478);
PPC_FUNC_IMPL(__imp__sub_83C0D478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28024
	ctx.r3.s64 = ctx.r11.s64 + 28024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D484"))) PPC_WEAK_FUNC(sub_83C0D484);
PPC_FUNC_IMPL(__imp__sub_83C0D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D488"))) PPC_WEAK_FUNC(sub_83C0D488);
PPC_FUNC_IMPL(__imp__sub_83C0D488) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,3944
	ctx.r3.s64 = ctx.r11.s64 + 3944;
	// bl 0x8259af80
	ctx.lr = 0x83C0D4A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28040
	ctx.r3.s64 = ctx.r10.s64 + 28040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D4AC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D4BC"))) PPC_WEAK_FUNC(sub_83C0D4BC);
PPC_FUNC_IMPL(__imp__sub_83C0D4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D4C0"))) PPC_WEAK_FUNC(sub_83C0D4C0);
PPC_FUNC_IMPL(__imp__sub_83C0D4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3924
	ctx.r11.s64 = ctx.r8.s64 + 3924;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-18236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18236);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28032
	ctx.r3.s64 = ctx.r6.s64 + 28032;
	// stw r10,3924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D4F0"))) PPC_WEAK_FUNC(sub_83C0D4F0);
PPC_FUNC_IMPL(__imp__sub_83C0D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83C0D4F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r31,r11,-25076
	ctx.r31.s64 = ctx.r11.s64 + -25076;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// bl 0x8259cc28
	ctx.lr = 0x83C0D528;
	sub_8259CC28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83C0D544;
	sub_8259CC28(ctx, base);
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r31,r8,4288
	ctx.r31.s64 = ctx.r8.s64 + 4288;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,4288(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4288, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83C0D57C;
	sub_8259CB28(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83C0D5A8;
	sub_8259CB28(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x83c0d5c8
	if (cr6.lt) goto loc_83C0D5C8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83C0D5C8;
	sub_825952B8(ctx, base);
loc_83C0D5C8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x83c0d5f0
	if (cr6.lt) goto loc_83C0D5F0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83C0D5F0;
	sub_825952B8(ctx, base);
loc_83C0D5F0:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r11,28064
	ctx.r3.s64 = ctx.r11.s64 + 28064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D608;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D610"))) PPC_WEAK_FUNC(sub_83C0D610);
PPC_FUNC_IMPL(__imp__sub_83C0D610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83C0D618;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r31,r11,-25044
	ctx.r31.s64 = ctx.r11.s64 + -25044;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x8259cc28
	ctx.lr = 0x83C0D648;
	sub_8259CC28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83C0D664;
	sub_8259CC28(ctx, base);
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r31,r8,4344
	ctx.r31.s64 = ctx.r8.s64 + 4344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,4344(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4344, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83C0D69C;
	sub_8259CB28(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83C0D6C8;
	sub_8259CB28(ctx, base);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x83c0d6e8
	if (cr6.lt) goto loc_83C0D6E8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83C0D6E8;
	sub_825952B8(ctx, base);
loc_83C0D6E8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x83c0d710
	if (cr6.lt) goto loc_83C0D710;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83C0D710;
	sub_825952B8(ctx, base);
loc_83C0D710:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r11,28048
	ctx.r3.s64 = ctx.r11.s64 + 28048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D728;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D730"))) PPC_WEAK_FUNC(sub_83C0D730);
PPC_FUNC_IMPL(__imp__sub_83C0D730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28080
	ctx.r3.s64 = ctx.r11.s64 + 28080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D73C"))) PPC_WEAK_FUNC(sub_83C0D73C);
PPC_FUNC_IMPL(__imp__sub_83C0D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D740"))) PPC_WEAK_FUNC(sub_83C0D740);
PPC_FUNC_IMPL(__imp__sub_83C0D740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28088
	ctx.r3.s64 = ctx.r11.s64 + 28088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D74C"))) PPC_WEAK_FUNC(sub_83C0D74C);
PPC_FUNC_IMPL(__imp__sub_83C0D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D750"))) PPC_WEAK_FUNC(sub_83C0D750);
PPC_FUNC_IMPL(__imp__sub_83C0D750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D75C"))) PPC_WEAK_FUNC(sub_83C0D75C);
PPC_FUNC_IMPL(__imp__sub_83C0D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D760"))) PPC_WEAK_FUNC(sub_83C0D760);
PPC_FUNC_IMPL(__imp__sub_83C0D760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28104
	ctx.r3.s64 = ctx.r11.s64 + 28104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D76C"))) PPC_WEAK_FUNC(sub_83C0D76C);
PPC_FUNC_IMPL(__imp__sub_83C0D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D770"))) PPC_WEAK_FUNC(sub_83C0D770);
PPC_FUNC_IMPL(__imp__sub_83C0D770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28112
	ctx.r3.s64 = ctx.r11.s64 + 28112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D77C"))) PPC_WEAK_FUNC(sub_83C0D77C);
PPC_FUNC_IMPL(__imp__sub_83C0D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D780"))) PPC_WEAK_FUNC(sub_83C0D780);
PPC_FUNC_IMPL(__imp__sub_83C0D780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D78C"))) PPC_WEAK_FUNC(sub_83C0D78C);
PPC_FUNC_IMPL(__imp__sub_83C0D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D790"))) PPC_WEAK_FUNC(sub_83C0D790);
PPC_FUNC_IMPL(__imp__sub_83C0D790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D79C"))) PPC_WEAK_FUNC(sub_83C0D79C);
PPC_FUNC_IMPL(__imp__sub_83C0D79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D7A0"))) PPC_WEAK_FUNC(sub_83C0D7A0);
PPC_FUNC_IMPL(__imp__sub_83C0D7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28136
	ctx.r3.s64 = ctx.r11.s64 + 28136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D7AC"))) PPC_WEAK_FUNC(sub_83C0D7AC);
PPC_FUNC_IMPL(__imp__sub_83C0D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D7B0"))) PPC_WEAK_FUNC(sub_83C0D7B0);
PPC_FUNC_IMPL(__imp__sub_83C0D7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28144
	ctx.r3.s64 = ctx.r11.s64 + 28144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D7BC"))) PPC_WEAK_FUNC(sub_83C0D7BC);
PPC_FUNC_IMPL(__imp__sub_83C0D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D7C0"))) PPC_WEAK_FUNC(sub_83C0D7C0);
PPC_FUNC_IMPL(__imp__sub_83C0D7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28152
	ctx.r3.s64 = ctx.r11.s64 + 28152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D7CC"))) PPC_WEAK_FUNC(sub_83C0D7CC);
PPC_FUNC_IMPL(__imp__sub_83C0D7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D7D0"))) PPC_WEAK_FUNC(sub_83C0D7D0);
PPC_FUNC_IMPL(__imp__sub_83C0D7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D7DC"))) PPC_WEAK_FUNC(sub_83C0D7DC);
PPC_FUNC_IMPL(__imp__sub_83C0D7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D7E0"))) PPC_WEAK_FUNC(sub_83C0D7E0);
PPC_FUNC_IMPL(__imp__sub_83C0D7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28168
	ctx.r3.s64 = ctx.r11.s64 + 28168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D7EC"))) PPC_WEAK_FUNC(sub_83C0D7EC);
PPC_FUNC_IMPL(__imp__sub_83C0D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D7F0"))) PPC_WEAK_FUNC(sub_83C0D7F0);
PPC_FUNC_IMPL(__imp__sub_83C0D7F0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// bl 0x83523120
	ctx.lr = 0x83C0D808;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28176
	ctx.r3.s64 = ctx.r10.s64 + 28176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D814;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D824"))) PPC_WEAK_FUNC(sub_83C0D824);
PPC_FUNC_IMPL(__imp__sub_83C0D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D828"))) PPC_WEAK_FUNC(sub_83C0D828);
PPC_FUNC_IMPL(__imp__sub_83C0D828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4416
	ctx.r7.s64 = ctx.r8.s64 + 4416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D850"))) PPC_WEAK_FUNC(sub_83C0D850);
PPC_FUNC_IMPL(__imp__sub_83C0D850) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-18084
	ctx.r6.s64 = ctx.r7.s64 + -18084;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18156(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18156);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4416);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-18084(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18084, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D898"))) PPC_WEAK_FUNC(sub_83C0D898);
PPC_FUNC_IMPL(__imp__sub_83C0D898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28192
	ctx.r3.s64 = ctx.r11.s64 + 28192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D8A4"))) PPC_WEAK_FUNC(sub_83C0D8A4);
PPC_FUNC_IMPL(__imp__sub_83C0D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D8A8"))) PPC_WEAK_FUNC(sub_83C0D8A8);
PPC_FUNC_IMPL(__imp__sub_83C0D8A8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// bl 0x8259af80
	ctx.lr = 0x83C0D8C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28208
	ctx.r3.s64 = ctx.r10.s64 + 28208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D8CC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0D8DC"))) PPC_WEAK_FUNC(sub_83C0D8DC);
PPC_FUNC_IMPL(__imp__sub_83C0D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D8E0"))) PPC_WEAK_FUNC(sub_83C0D8E0);
PPC_FUNC_IMPL(__imp__sub_83C0D8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4404
	ctx.r11.s64 = ctx.r8.s64 + 4404;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-18108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18108);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28200
	ctx.r3.s64 = ctx.r6.s64 + 28200;
	// stw r10,4404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D910"))) PPC_WEAK_FUNC(sub_83C0D910);
PPC_FUNC_IMPL(__imp__sub_83C0D910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28216
	ctx.r3.s64 = ctx.r11.s64 + 28216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D91C"))) PPC_WEAK_FUNC(sub_83C0D91C);
PPC_FUNC_IMPL(__imp__sub_83C0D91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D920"))) PPC_WEAK_FUNC(sub_83C0D920);
PPC_FUNC_IMPL(__imp__sub_83C0D920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28224
	ctx.r3.s64 = ctx.r11.s64 + 28224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D92C"))) PPC_WEAK_FUNC(sub_83C0D92C);
PPC_FUNC_IMPL(__imp__sub_83C0D92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D930"))) PPC_WEAK_FUNC(sub_83C0D930);
PPC_FUNC_IMPL(__imp__sub_83C0D930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28232
	ctx.r3.s64 = ctx.r11.s64 + 28232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D93C"))) PPC_WEAK_FUNC(sub_83C0D93C);
PPC_FUNC_IMPL(__imp__sub_83C0D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D940"))) PPC_WEAK_FUNC(sub_83C0D940);
PPC_FUNC_IMPL(__imp__sub_83C0D940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28240
	ctx.r3.s64 = ctx.r11.s64 + 28240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D94C"))) PPC_WEAK_FUNC(sub_83C0D94C);
PPC_FUNC_IMPL(__imp__sub_83C0D94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D950"))) PPC_WEAK_FUNC(sub_83C0D950);
PPC_FUNC_IMPL(__imp__sub_83C0D950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28248
	ctx.r3.s64 = ctx.r11.s64 + 28248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D95C"))) PPC_WEAK_FUNC(sub_83C0D95C);
PPC_FUNC_IMPL(__imp__sub_83C0D95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D960"))) PPC_WEAK_FUNC(sub_83C0D960);
PPC_FUNC_IMPL(__imp__sub_83C0D960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D96C"))) PPC_WEAK_FUNC(sub_83C0D96C);
PPC_FUNC_IMPL(__imp__sub_83C0D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D970"))) PPC_WEAK_FUNC(sub_83C0D970);
PPC_FUNC_IMPL(__imp__sub_83C0D970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28264
	ctx.r3.s64 = ctx.r11.s64 + 28264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D97C"))) PPC_WEAK_FUNC(sub_83C0D97C);
PPC_FUNC_IMPL(__imp__sub_83C0D97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D980"))) PPC_WEAK_FUNC(sub_83C0D980);
PPC_FUNC_IMPL(__imp__sub_83C0D980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28272
	ctx.r3.s64 = ctx.r11.s64 + 28272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D98C"))) PPC_WEAK_FUNC(sub_83C0D98C);
PPC_FUNC_IMPL(__imp__sub_83C0D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D990"))) PPC_WEAK_FUNC(sub_83C0D990);
PPC_FUNC_IMPL(__imp__sub_83C0D990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D99C"))) PPC_WEAK_FUNC(sub_83C0D99C);
PPC_FUNC_IMPL(__imp__sub_83C0D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D9A0"))) PPC_WEAK_FUNC(sub_83C0D9A0);
PPC_FUNC_IMPL(__imp__sub_83C0D9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28288
	ctx.r3.s64 = ctx.r11.s64 + 28288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D9AC"))) PPC_WEAK_FUNC(sub_83C0D9AC);
PPC_FUNC_IMPL(__imp__sub_83C0D9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D9B0"))) PPC_WEAK_FUNC(sub_83C0D9B0);
PPC_FUNC_IMPL(__imp__sub_83C0D9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D9BC"))) PPC_WEAK_FUNC(sub_83C0D9BC);
PPC_FUNC_IMPL(__imp__sub_83C0D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D9C0"))) PPC_WEAK_FUNC(sub_83C0D9C0);
PPC_FUNC_IMPL(__imp__sub_83C0D9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0D9CC"))) PPC_WEAK_FUNC(sub_83C0D9CC);
PPC_FUNC_IMPL(__imp__sub_83C0D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0D9D0"))) PPC_WEAK_FUNC(sub_83C0D9D0);
PPC_FUNC_IMPL(__imp__sub_83C0D9D0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// bl 0x83523120
	ctx.lr = 0x83C0D9E8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28312
	ctx.r3.s64 = ctx.r10.s64 + 28312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0D9F4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DA04"))) PPC_WEAK_FUNC(sub_83C0DA04);
PPC_FUNC_IMPL(__imp__sub_83C0DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DA08"))) PPC_WEAK_FUNC(sub_83C0DA08);
PPC_FUNC_IMPL(__imp__sub_83C0DA08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4784
	ctx.r7.s64 = ctx.r8.s64 + 4784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DA30"))) PPC_WEAK_FUNC(sub_83C0DA30);
PPC_FUNC_IMPL(__imp__sub_83C0DA30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-17956
	ctx.r6.s64 = ctx.r7.s64 + -17956;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18028(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18028);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4784);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-17956(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17956, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DA78"))) PPC_WEAK_FUNC(sub_83C0DA78);
PPC_FUNC_IMPL(__imp__sub_83C0DA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28328
	ctx.r3.s64 = ctx.r11.s64 + 28328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DA84"))) PPC_WEAK_FUNC(sub_83C0DA84);
PPC_FUNC_IMPL(__imp__sub_83C0DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DA88"))) PPC_WEAK_FUNC(sub_83C0DA88);
PPC_FUNC_IMPL(__imp__sub_83C0DA88) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// bl 0x8259af80
	ctx.lr = 0x83C0DAA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28344
	ctx.r3.s64 = ctx.r10.s64 + 28344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0DAAC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DABC"))) PPC_WEAK_FUNC(sub_83C0DABC);
PPC_FUNC_IMPL(__imp__sub_83C0DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DAC0"))) PPC_WEAK_FUNC(sub_83C0DAC0);
PPC_FUNC_IMPL(__imp__sub_83C0DAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4772
	ctx.r11.s64 = ctx.r8.s64 + 4772;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17980);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28336
	ctx.r3.s64 = ctx.r6.s64 + 28336;
	// stw r10,4772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DAF0"))) PPC_WEAK_FUNC(sub_83C0DAF0);
PPC_FUNC_IMPL(__imp__sub_83C0DAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28352
	ctx.r3.s64 = ctx.r11.s64 + 28352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DAFC"))) PPC_WEAK_FUNC(sub_83C0DAFC);
PPC_FUNC_IMPL(__imp__sub_83C0DAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB00"))) PPC_WEAK_FUNC(sub_83C0DB00);
PPC_FUNC_IMPL(__imp__sub_83C0DB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB0C"))) PPC_WEAK_FUNC(sub_83C0DB0C);
PPC_FUNC_IMPL(__imp__sub_83C0DB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB10"))) PPC_WEAK_FUNC(sub_83C0DB10);
PPC_FUNC_IMPL(__imp__sub_83C0DB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28368
	ctx.r3.s64 = ctx.r11.s64 + 28368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB1C"))) PPC_WEAK_FUNC(sub_83C0DB1C);
PPC_FUNC_IMPL(__imp__sub_83C0DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB20"))) PPC_WEAK_FUNC(sub_83C0DB20);
PPC_FUNC_IMPL(__imp__sub_83C0DB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28376
	ctx.r3.s64 = ctx.r11.s64 + 28376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB2C"))) PPC_WEAK_FUNC(sub_83C0DB2C);
PPC_FUNC_IMPL(__imp__sub_83C0DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB30"))) PPC_WEAK_FUNC(sub_83C0DB30);
PPC_FUNC_IMPL(__imp__sub_83C0DB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28384
	ctx.r3.s64 = ctx.r11.s64 + 28384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB3C"))) PPC_WEAK_FUNC(sub_83C0DB3C);
PPC_FUNC_IMPL(__imp__sub_83C0DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB40"))) PPC_WEAK_FUNC(sub_83C0DB40);
PPC_FUNC_IMPL(__imp__sub_83C0DB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28392
	ctx.r3.s64 = ctx.r11.s64 + 28392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB4C"))) PPC_WEAK_FUNC(sub_83C0DB4C);
PPC_FUNC_IMPL(__imp__sub_83C0DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB50"))) PPC_WEAK_FUNC(sub_83C0DB50);
PPC_FUNC_IMPL(__imp__sub_83C0DB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28400
	ctx.r3.s64 = ctx.r11.s64 + 28400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB5C"))) PPC_WEAK_FUNC(sub_83C0DB5C);
PPC_FUNC_IMPL(__imp__sub_83C0DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB60"))) PPC_WEAK_FUNC(sub_83C0DB60);
PPC_FUNC_IMPL(__imp__sub_83C0DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB6C"))) PPC_WEAK_FUNC(sub_83C0DB6C);
PPC_FUNC_IMPL(__imp__sub_83C0DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB70"))) PPC_WEAK_FUNC(sub_83C0DB70);
PPC_FUNC_IMPL(__imp__sub_83C0DB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28416
	ctx.r3.s64 = ctx.r11.s64 + 28416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB7C"))) PPC_WEAK_FUNC(sub_83C0DB7C);
PPC_FUNC_IMPL(__imp__sub_83C0DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB80"))) PPC_WEAK_FUNC(sub_83C0DB80);
PPC_FUNC_IMPL(__imp__sub_83C0DB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28424
	ctx.r3.s64 = ctx.r11.s64 + 28424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB8C"))) PPC_WEAK_FUNC(sub_83C0DB8C);
PPC_FUNC_IMPL(__imp__sub_83C0DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DB90"))) PPC_WEAK_FUNC(sub_83C0DB90);
PPC_FUNC_IMPL(__imp__sub_83C0DB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28432
	ctx.r3.s64 = ctx.r11.s64 + 28432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DB9C"))) PPC_WEAK_FUNC(sub_83C0DB9C);
PPC_FUNC_IMPL(__imp__sub_83C0DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DBA0"))) PPC_WEAK_FUNC(sub_83C0DBA0);
PPC_FUNC_IMPL(__imp__sub_83C0DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28440
	ctx.r3.s64 = ctx.r11.s64 + 28440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DBAC"))) PPC_WEAK_FUNC(sub_83C0DBAC);
PPC_FUNC_IMPL(__imp__sub_83C0DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DBB0"))) PPC_WEAK_FUNC(sub_83C0DBB0);
PPC_FUNC_IMPL(__imp__sub_83C0DBB0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// bl 0x83523120
	ctx.lr = 0x83C0DBC8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28448
	ctx.r3.s64 = ctx.r10.s64 + 28448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0DBD4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DBE4"))) PPC_WEAK_FUNC(sub_83C0DBE4);
PPC_FUNC_IMPL(__imp__sub_83C0DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DBE8"))) PPC_WEAK_FUNC(sub_83C0DBE8);
PPC_FUNC_IMPL(__imp__sub_83C0DBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5152
	ctx.r7.s64 = ctx.r8.s64 + 5152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DC10"))) PPC_WEAK_FUNC(sub_83C0DC10);
PPC_FUNC_IMPL(__imp__sub_83C0DC10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-17828
	ctx.r6.s64 = ctx.r7.s64 + -17828;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17900(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17900);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5152);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-17828(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17828, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DC58"))) PPC_WEAK_FUNC(sub_83C0DC58);
PPC_FUNC_IMPL(__imp__sub_83C0DC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28464
	ctx.r3.s64 = ctx.r11.s64 + 28464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DC64"))) PPC_WEAK_FUNC(sub_83C0DC64);
PPC_FUNC_IMPL(__imp__sub_83C0DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DC68"))) PPC_WEAK_FUNC(sub_83C0DC68);
PPC_FUNC_IMPL(__imp__sub_83C0DC68) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,5160
	ctx.r3.s64 = ctx.r11.s64 + 5160;
	// bl 0x8259af80
	ctx.lr = 0x83C0DC80;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28480
	ctx.r3.s64 = ctx.r10.s64 + 28480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0DC8C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DC9C"))) PPC_WEAK_FUNC(sub_83C0DC9C);
PPC_FUNC_IMPL(__imp__sub_83C0DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DCA0"))) PPC_WEAK_FUNC(sub_83C0DCA0);
PPC_FUNC_IMPL(__imp__sub_83C0DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5140
	ctx.r11.s64 = ctx.r8.s64 + 5140;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17852(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17852);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28472
	ctx.r3.s64 = ctx.r6.s64 + 28472;
	// stw r10,5140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DCD0"))) PPC_WEAK_FUNC(sub_83C0DCD0);
PPC_FUNC_IMPL(__imp__sub_83C0DCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28488
	ctx.r3.s64 = ctx.r11.s64 + 28488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DCDC"))) PPC_WEAK_FUNC(sub_83C0DCDC);
PPC_FUNC_IMPL(__imp__sub_83C0DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DCE0"))) PPC_WEAK_FUNC(sub_83C0DCE0);
PPC_FUNC_IMPL(__imp__sub_83C0DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28496
	ctx.r3.s64 = ctx.r11.s64 + 28496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DCEC"))) PPC_WEAK_FUNC(sub_83C0DCEC);
PPC_FUNC_IMPL(__imp__sub_83C0DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DCF0"))) PPC_WEAK_FUNC(sub_83C0DCF0);
PPC_FUNC_IMPL(__imp__sub_83C0DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28504
	ctx.r3.s64 = ctx.r11.s64 + 28504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DCFC"))) PPC_WEAK_FUNC(sub_83C0DCFC);
PPC_FUNC_IMPL(__imp__sub_83C0DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD00"))) PPC_WEAK_FUNC(sub_83C0DD00);
PPC_FUNC_IMPL(__imp__sub_83C0DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28512
	ctx.r3.s64 = ctx.r11.s64 + 28512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD0C"))) PPC_WEAK_FUNC(sub_83C0DD0C);
PPC_FUNC_IMPL(__imp__sub_83C0DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD10"))) PPC_WEAK_FUNC(sub_83C0DD10);
PPC_FUNC_IMPL(__imp__sub_83C0DD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28520
	ctx.r3.s64 = ctx.r11.s64 + 28520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD1C"))) PPC_WEAK_FUNC(sub_83C0DD1C);
PPC_FUNC_IMPL(__imp__sub_83C0DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD20"))) PPC_WEAK_FUNC(sub_83C0DD20);
PPC_FUNC_IMPL(__imp__sub_83C0DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28528
	ctx.r3.s64 = ctx.r11.s64 + 28528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD2C"))) PPC_WEAK_FUNC(sub_83C0DD2C);
PPC_FUNC_IMPL(__imp__sub_83C0DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD30"))) PPC_WEAK_FUNC(sub_83C0DD30);
PPC_FUNC_IMPL(__imp__sub_83C0DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28536
	ctx.r3.s64 = ctx.r11.s64 + 28536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD3C"))) PPC_WEAK_FUNC(sub_83C0DD3C);
PPC_FUNC_IMPL(__imp__sub_83C0DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD40"))) PPC_WEAK_FUNC(sub_83C0DD40);
PPC_FUNC_IMPL(__imp__sub_83C0DD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD4C"))) PPC_WEAK_FUNC(sub_83C0DD4C);
PPC_FUNC_IMPL(__imp__sub_83C0DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD50"))) PPC_WEAK_FUNC(sub_83C0DD50);
PPC_FUNC_IMPL(__imp__sub_83C0DD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28552
	ctx.r3.s64 = ctx.r11.s64 + 28552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD5C"))) PPC_WEAK_FUNC(sub_83C0DD5C);
PPC_FUNC_IMPL(__imp__sub_83C0DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD60"))) PPC_WEAK_FUNC(sub_83C0DD60);
PPC_FUNC_IMPL(__imp__sub_83C0DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28560
	ctx.r3.s64 = ctx.r11.s64 + 28560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD6C"))) PPC_WEAK_FUNC(sub_83C0DD6C);
PPC_FUNC_IMPL(__imp__sub_83C0DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD70"))) PPC_WEAK_FUNC(sub_83C0DD70);
PPC_FUNC_IMPL(__imp__sub_83C0DD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28568
	ctx.r3.s64 = ctx.r11.s64 + 28568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD7C"))) PPC_WEAK_FUNC(sub_83C0DD7C);
PPC_FUNC_IMPL(__imp__sub_83C0DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD80"))) PPC_WEAK_FUNC(sub_83C0DD80);
PPC_FUNC_IMPL(__imp__sub_83C0DD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28576
	ctx.r3.s64 = ctx.r11.s64 + 28576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DD8C"))) PPC_WEAK_FUNC(sub_83C0DD8C);
PPC_FUNC_IMPL(__imp__sub_83C0DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DD90"))) PPC_WEAK_FUNC(sub_83C0DD90);
PPC_FUNC_IMPL(__imp__sub_83C0DD90) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// bl 0x83523120
	ctx.lr = 0x83C0DDA8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28584
	ctx.r3.s64 = ctx.r10.s64 + 28584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0DDB4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DDC4"))) PPC_WEAK_FUNC(sub_83C0DDC4);
PPC_FUNC_IMPL(__imp__sub_83C0DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DDC8"))) PPC_WEAK_FUNC(sub_83C0DDC8);
PPC_FUNC_IMPL(__imp__sub_83C0DDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5520
	ctx.r7.s64 = ctx.r8.s64 + 5520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DDF0"))) PPC_WEAK_FUNC(sub_83C0DDF0);
PPC_FUNC_IMPL(__imp__sub_83C0DDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-17700
	ctx.r6.s64 = ctx.r7.s64 + -17700;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17772(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17772);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5520);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-17700(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17700, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DE38"))) PPC_WEAK_FUNC(sub_83C0DE38);
PPC_FUNC_IMPL(__imp__sub_83C0DE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28600
	ctx.r3.s64 = ctx.r11.s64 + 28600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DE44"))) PPC_WEAK_FUNC(sub_83C0DE44);
PPC_FUNC_IMPL(__imp__sub_83C0DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DE48"))) PPC_WEAK_FUNC(sub_83C0DE48);
PPC_FUNC_IMPL(__imp__sub_83C0DE48) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,5528
	ctx.r3.s64 = ctx.r11.s64 + 5528;
	// bl 0x8259af80
	ctx.lr = 0x83C0DE60;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28616
	ctx.r3.s64 = ctx.r10.s64 + 28616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0DE6C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DE7C"))) PPC_WEAK_FUNC(sub_83C0DE7C);
PPC_FUNC_IMPL(__imp__sub_83C0DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DE80"))) PPC_WEAK_FUNC(sub_83C0DE80);
PPC_FUNC_IMPL(__imp__sub_83C0DE80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5508
	ctx.r11.s64 = ctx.r8.s64 + 5508;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17724(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17724);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28608
	ctx.r3.s64 = ctx.r6.s64 + 28608;
	// stw r10,5508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DEB0"))) PPC_WEAK_FUNC(sub_83C0DEB0);
PPC_FUNC_IMPL(__imp__sub_83C0DEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28624
	ctx.r3.s64 = ctx.r11.s64 + 28624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DEBC"))) PPC_WEAK_FUNC(sub_83C0DEBC);
PPC_FUNC_IMPL(__imp__sub_83C0DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DEC0"))) PPC_WEAK_FUNC(sub_83C0DEC0);
PPC_FUNC_IMPL(__imp__sub_83C0DEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28632
	ctx.r3.s64 = ctx.r11.s64 + 28632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DECC"))) PPC_WEAK_FUNC(sub_83C0DECC);
PPC_FUNC_IMPL(__imp__sub_83C0DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DED0"))) PPC_WEAK_FUNC(sub_83C0DED0);
PPC_FUNC_IMPL(__imp__sub_83C0DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28640
	ctx.r3.s64 = ctx.r11.s64 + 28640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DEDC"))) PPC_WEAK_FUNC(sub_83C0DEDC);
PPC_FUNC_IMPL(__imp__sub_83C0DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DEE0"))) PPC_WEAK_FUNC(sub_83C0DEE0);
PPC_FUNC_IMPL(__imp__sub_83C0DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28648
	ctx.r3.s64 = ctx.r11.s64 + 28648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DEEC"))) PPC_WEAK_FUNC(sub_83C0DEEC);
PPC_FUNC_IMPL(__imp__sub_83C0DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DEF0"))) PPC_WEAK_FUNC(sub_83C0DEF0);
PPC_FUNC_IMPL(__imp__sub_83C0DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28656
	ctx.r3.s64 = ctx.r11.s64 + 28656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DEFC"))) PPC_WEAK_FUNC(sub_83C0DEFC);
PPC_FUNC_IMPL(__imp__sub_83C0DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF00"))) PPC_WEAK_FUNC(sub_83C0DF00);
PPC_FUNC_IMPL(__imp__sub_83C0DF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28664
	ctx.r3.s64 = ctx.r11.s64 + 28664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF0C"))) PPC_WEAK_FUNC(sub_83C0DF0C);
PPC_FUNC_IMPL(__imp__sub_83C0DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF10"))) PPC_WEAK_FUNC(sub_83C0DF10);
PPC_FUNC_IMPL(__imp__sub_83C0DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28672
	ctx.r3.s64 = ctx.r11.s64 + 28672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF1C"))) PPC_WEAK_FUNC(sub_83C0DF1C);
PPC_FUNC_IMPL(__imp__sub_83C0DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF20"))) PPC_WEAK_FUNC(sub_83C0DF20);
PPC_FUNC_IMPL(__imp__sub_83C0DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28680
	ctx.r3.s64 = ctx.r11.s64 + 28680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF2C"))) PPC_WEAK_FUNC(sub_83C0DF2C);
PPC_FUNC_IMPL(__imp__sub_83C0DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF30"))) PPC_WEAK_FUNC(sub_83C0DF30);
PPC_FUNC_IMPL(__imp__sub_83C0DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF3C"))) PPC_WEAK_FUNC(sub_83C0DF3C);
PPC_FUNC_IMPL(__imp__sub_83C0DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF40"))) PPC_WEAK_FUNC(sub_83C0DF40);
PPC_FUNC_IMPL(__imp__sub_83C0DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28696
	ctx.r3.s64 = ctx.r11.s64 + 28696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF4C"))) PPC_WEAK_FUNC(sub_83C0DF4C);
PPC_FUNC_IMPL(__imp__sub_83C0DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF50"))) PPC_WEAK_FUNC(sub_83C0DF50);
PPC_FUNC_IMPL(__imp__sub_83C0DF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28704
	ctx.r3.s64 = ctx.r11.s64 + 28704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF5C"))) PPC_WEAK_FUNC(sub_83C0DF5C);
PPC_FUNC_IMPL(__imp__sub_83C0DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF60"))) PPC_WEAK_FUNC(sub_83C0DF60);
PPC_FUNC_IMPL(__imp__sub_83C0DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28712
	ctx.r3.s64 = ctx.r11.s64 + 28712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0DF6C"))) PPC_WEAK_FUNC(sub_83C0DF6C);
PPC_FUNC_IMPL(__imp__sub_83C0DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DF70"))) PPC_WEAK_FUNC(sub_83C0DF70);
PPC_FUNC_IMPL(__imp__sub_83C0DF70) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// bl 0x83523120
	ctx.lr = 0x83C0DF88;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28720
	ctx.r3.s64 = ctx.r10.s64 + 28720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0DF94;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DFA4"))) PPC_WEAK_FUNC(sub_83C0DFA4);
PPC_FUNC_IMPL(__imp__sub_83C0DFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0DFA8"))) PPC_WEAK_FUNC(sub_83C0DFA8);
PPC_FUNC_IMPL(__imp__sub_83C0DFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5888
	ctx.r7.s64 = ctx.r8.s64 + 5888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0DFD0"))) PPC_WEAK_FUNC(sub_83C0DFD0);
PPC_FUNC_IMPL(__imp__sub_83C0DFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-17572
	ctx.r6.s64 = ctx.r7.s64 + -17572;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17644(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17644);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5888);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-17572(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17572, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E018"))) PPC_WEAK_FUNC(sub_83C0E018);
PPC_FUNC_IMPL(__imp__sub_83C0E018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28736
	ctx.r3.s64 = ctx.r11.s64 + 28736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E024"))) PPC_WEAK_FUNC(sub_83C0E024);
PPC_FUNC_IMPL(__imp__sub_83C0E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E028"))) PPC_WEAK_FUNC(sub_83C0E028);
PPC_FUNC_IMPL(__imp__sub_83C0E028) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// bl 0x8259af80
	ctx.lr = 0x83C0E040;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28752
	ctx.r3.s64 = ctx.r10.s64 + 28752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0E04C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E05C"))) PPC_WEAK_FUNC(sub_83C0E05C);
PPC_FUNC_IMPL(__imp__sub_83C0E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E060"))) PPC_WEAK_FUNC(sub_83C0E060);
PPC_FUNC_IMPL(__imp__sub_83C0E060) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5876
	ctx.r11.s64 = ctx.r8.s64 + 5876;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17596(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17596);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28744
	ctx.r3.s64 = ctx.r6.s64 + 28744;
	// stw r10,5876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E090"))) PPC_WEAK_FUNC(sub_83C0E090);
PPC_FUNC_IMPL(__imp__sub_83C0E090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28760
	ctx.r3.s64 = ctx.r11.s64 + 28760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E09C"))) PPC_WEAK_FUNC(sub_83C0E09C);
PPC_FUNC_IMPL(__imp__sub_83C0E09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E0A0"))) PPC_WEAK_FUNC(sub_83C0E0A0);
PPC_FUNC_IMPL(__imp__sub_83C0E0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28768
	ctx.r3.s64 = ctx.r11.s64 + 28768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E0AC"))) PPC_WEAK_FUNC(sub_83C0E0AC);
PPC_FUNC_IMPL(__imp__sub_83C0E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E0B0"))) PPC_WEAK_FUNC(sub_83C0E0B0);
PPC_FUNC_IMPL(__imp__sub_83C0E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28776
	ctx.r3.s64 = ctx.r11.s64 + 28776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E0BC"))) PPC_WEAK_FUNC(sub_83C0E0BC);
PPC_FUNC_IMPL(__imp__sub_83C0E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E0C0"))) PPC_WEAK_FUNC(sub_83C0E0C0);
PPC_FUNC_IMPL(__imp__sub_83C0E0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28784
	ctx.r3.s64 = ctx.r11.s64 + 28784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E0CC"))) PPC_WEAK_FUNC(sub_83C0E0CC);
PPC_FUNC_IMPL(__imp__sub_83C0E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E0D0"))) PPC_WEAK_FUNC(sub_83C0E0D0);
PPC_FUNC_IMPL(__imp__sub_83C0E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28792
	ctx.r3.s64 = ctx.r11.s64 + 28792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E0DC"))) PPC_WEAK_FUNC(sub_83C0E0DC);
PPC_FUNC_IMPL(__imp__sub_83C0E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E0E0"))) PPC_WEAK_FUNC(sub_83C0E0E0);
PPC_FUNC_IMPL(__imp__sub_83C0E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28800
	ctx.r3.s64 = ctx.r11.s64 + 28800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E0EC"))) PPC_WEAK_FUNC(sub_83C0E0EC);
PPC_FUNC_IMPL(__imp__sub_83C0E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E0F0"))) PPC_WEAK_FUNC(sub_83C0E0F0);
PPC_FUNC_IMPL(__imp__sub_83C0E0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28808
	ctx.r3.s64 = ctx.r11.s64 + 28808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E0FC"))) PPC_WEAK_FUNC(sub_83C0E0FC);
PPC_FUNC_IMPL(__imp__sub_83C0E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E100"))) PPC_WEAK_FUNC(sub_83C0E100);
PPC_FUNC_IMPL(__imp__sub_83C0E100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28816
	ctx.r3.s64 = ctx.r11.s64 + 28816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E10C"))) PPC_WEAK_FUNC(sub_83C0E10C);
PPC_FUNC_IMPL(__imp__sub_83C0E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E110"))) PPC_WEAK_FUNC(sub_83C0E110);
PPC_FUNC_IMPL(__imp__sub_83C0E110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E11C"))) PPC_WEAK_FUNC(sub_83C0E11C);
PPC_FUNC_IMPL(__imp__sub_83C0E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E120"))) PPC_WEAK_FUNC(sub_83C0E120);
PPC_FUNC_IMPL(__imp__sub_83C0E120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28832
	ctx.r3.s64 = ctx.r11.s64 + 28832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E12C"))) PPC_WEAK_FUNC(sub_83C0E12C);
PPC_FUNC_IMPL(__imp__sub_83C0E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E130"))) PPC_WEAK_FUNC(sub_83C0E130);
PPC_FUNC_IMPL(__imp__sub_83C0E130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28840
	ctx.r3.s64 = ctx.r11.s64 + 28840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E13C"))) PPC_WEAK_FUNC(sub_83C0E13C);
PPC_FUNC_IMPL(__imp__sub_83C0E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E140"))) PPC_WEAK_FUNC(sub_83C0E140);
PPC_FUNC_IMPL(__imp__sub_83C0E140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28848
	ctx.r3.s64 = ctx.r11.s64 + 28848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E14C"))) PPC_WEAK_FUNC(sub_83C0E14C);
PPC_FUNC_IMPL(__imp__sub_83C0E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E150"))) PPC_WEAK_FUNC(sub_83C0E150);
PPC_FUNC_IMPL(__imp__sub_83C0E150) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,6240
	ctx.r3.s64 = ctx.r11.s64 + 6240;
	// bl 0x83523120
	ctx.lr = 0x83C0E168;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28856
	ctx.r3.s64 = ctx.r10.s64 + 28856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0E174;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E184"))) PPC_WEAK_FUNC(sub_83C0E184);
PPC_FUNC_IMPL(__imp__sub_83C0E184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E188"))) PPC_WEAK_FUNC(sub_83C0E188);
PPC_FUNC_IMPL(__imp__sub_83C0E188) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6256
	ctx.r7.s64 = ctx.r8.s64 + 6256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E1B0"))) PPC_WEAK_FUNC(sub_83C0E1B0);
PPC_FUNC_IMPL(__imp__sub_83C0E1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-17444
	ctx.r6.s64 = ctx.r7.s64 + -17444;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17516(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17516);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6256);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-17444(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17444, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E1F8"))) PPC_WEAK_FUNC(sub_83C0E1F8);
PPC_FUNC_IMPL(__imp__sub_83C0E1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28872
	ctx.r3.s64 = ctx.r11.s64 + 28872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E204"))) PPC_WEAK_FUNC(sub_83C0E204);
PPC_FUNC_IMPL(__imp__sub_83C0E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E208"))) PPC_WEAK_FUNC(sub_83C0E208);
PPC_FUNC_IMPL(__imp__sub_83C0E208) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,6264
	ctx.r3.s64 = ctx.r11.s64 + 6264;
	// bl 0x8259af80
	ctx.lr = 0x83C0E220;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28888
	ctx.r3.s64 = ctx.r10.s64 + 28888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0E22C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E23C"))) PPC_WEAK_FUNC(sub_83C0E23C);
PPC_FUNC_IMPL(__imp__sub_83C0E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E240"))) PPC_WEAK_FUNC(sub_83C0E240);
PPC_FUNC_IMPL(__imp__sub_83C0E240) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6244
	ctx.r11.s64 = ctx.r8.s64 + 6244;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17468);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28880
	ctx.r3.s64 = ctx.r6.s64 + 28880;
	// stw r10,6244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E270"))) PPC_WEAK_FUNC(sub_83C0E270);
PPC_FUNC_IMPL(__imp__sub_83C0E270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28896
	ctx.r3.s64 = ctx.r11.s64 + 28896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E27C"))) PPC_WEAK_FUNC(sub_83C0E27C);
PPC_FUNC_IMPL(__imp__sub_83C0E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E280"))) PPC_WEAK_FUNC(sub_83C0E280);
PPC_FUNC_IMPL(__imp__sub_83C0E280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28904
	ctx.r3.s64 = ctx.r11.s64 + 28904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E28C"))) PPC_WEAK_FUNC(sub_83C0E28C);
PPC_FUNC_IMPL(__imp__sub_83C0E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E290"))) PPC_WEAK_FUNC(sub_83C0E290);
PPC_FUNC_IMPL(__imp__sub_83C0E290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28912
	ctx.r3.s64 = ctx.r11.s64 + 28912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E29C"))) PPC_WEAK_FUNC(sub_83C0E29C);
PPC_FUNC_IMPL(__imp__sub_83C0E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E2A0"))) PPC_WEAK_FUNC(sub_83C0E2A0);
PPC_FUNC_IMPL(__imp__sub_83C0E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28920
	ctx.r3.s64 = ctx.r11.s64 + 28920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E2AC"))) PPC_WEAK_FUNC(sub_83C0E2AC);
PPC_FUNC_IMPL(__imp__sub_83C0E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E2B0"))) PPC_WEAK_FUNC(sub_83C0E2B0);
PPC_FUNC_IMPL(__imp__sub_83C0E2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28928
	ctx.r3.s64 = ctx.r11.s64 + 28928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E2BC"))) PPC_WEAK_FUNC(sub_83C0E2BC);
PPC_FUNC_IMPL(__imp__sub_83C0E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E2C0"))) PPC_WEAK_FUNC(sub_83C0E2C0);
PPC_FUNC_IMPL(__imp__sub_83C0E2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28936
	ctx.r3.s64 = ctx.r11.s64 + 28936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E2CC"))) PPC_WEAK_FUNC(sub_83C0E2CC);
PPC_FUNC_IMPL(__imp__sub_83C0E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E2D0"))) PPC_WEAK_FUNC(sub_83C0E2D0);
PPC_FUNC_IMPL(__imp__sub_83C0E2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E2DC"))) PPC_WEAK_FUNC(sub_83C0E2DC);
PPC_FUNC_IMPL(__imp__sub_83C0E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E2E0"))) PPC_WEAK_FUNC(sub_83C0E2E0);
PPC_FUNC_IMPL(__imp__sub_83C0E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28952
	ctx.r3.s64 = ctx.r11.s64 + 28952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E2EC"))) PPC_WEAK_FUNC(sub_83C0E2EC);
PPC_FUNC_IMPL(__imp__sub_83C0E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E2F0"))) PPC_WEAK_FUNC(sub_83C0E2F0);
PPC_FUNC_IMPL(__imp__sub_83C0E2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28960
	ctx.r3.s64 = ctx.r11.s64 + 28960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E2FC"))) PPC_WEAK_FUNC(sub_83C0E2FC);
PPC_FUNC_IMPL(__imp__sub_83C0E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E300"))) PPC_WEAK_FUNC(sub_83C0E300);
PPC_FUNC_IMPL(__imp__sub_83C0E300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28968
	ctx.r3.s64 = ctx.r11.s64 + 28968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E30C"))) PPC_WEAK_FUNC(sub_83C0E30C);
PPC_FUNC_IMPL(__imp__sub_83C0E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E310"))) PPC_WEAK_FUNC(sub_83C0E310);
PPC_FUNC_IMPL(__imp__sub_83C0E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28976
	ctx.r3.s64 = ctx.r11.s64 + 28976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E31C"))) PPC_WEAK_FUNC(sub_83C0E31C);
PPC_FUNC_IMPL(__imp__sub_83C0E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E320"))) PPC_WEAK_FUNC(sub_83C0E320);
PPC_FUNC_IMPL(__imp__sub_83C0E320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,28984
	ctx.r3.s64 = ctx.r11.s64 + 28984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E32C"))) PPC_WEAK_FUNC(sub_83C0E32C);
PPC_FUNC_IMPL(__imp__sub_83C0E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E330"))) PPC_WEAK_FUNC(sub_83C0E330);
PPC_FUNC_IMPL(__imp__sub_83C0E330) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6624
	ctx.r7.s64 = ctx.r8.s64 + 6624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E358"))) PPC_WEAK_FUNC(sub_83C0E358);
PPC_FUNC_IMPL(__imp__sub_83C0E358) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-17316
	ctx.r6.s64 = ctx.r7.s64 + -17316;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17388(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17388);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6624);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-17316(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E3A0"))) PPC_WEAK_FUNC(sub_83C0E3A0);
PPC_FUNC_IMPL(__imp__sub_83C0E3A0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,6608
	ctx.r3.s64 = ctx.r11.s64 + 6608;
	// bl 0x83523120
	ctx.lr = 0x83C0E3B8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,28992
	ctx.r3.s64 = ctx.r10.s64 + 28992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0E3C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E3D4"))) PPC_WEAK_FUNC(sub_83C0E3D4);
PPC_FUNC_IMPL(__imp__sub_83C0E3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E3D8"))) PPC_WEAK_FUNC(sub_83C0E3D8);
PPC_FUNC_IMPL(__imp__sub_83C0E3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,29008
	ctx.r3.s64 = ctx.r11.s64 + 29008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E3E4"))) PPC_WEAK_FUNC(sub_83C0E3E4);
PPC_FUNC_IMPL(__imp__sub_83C0E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E3E8"))) PPC_WEAK_FUNC(sub_83C0E3E8);
PPC_FUNC_IMPL(__imp__sub_83C0E3E8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,6632
	ctx.r3.s64 = ctx.r11.s64 + 6632;
	// bl 0x8259af80
	ctx.lr = 0x83C0E400;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,29024
	ctx.r3.s64 = ctx.r10.s64 + 29024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0E40C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0E41C"))) PPC_WEAK_FUNC(sub_83C0E41C);
PPC_FUNC_IMPL(__imp__sub_83C0E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E420"))) PPC_WEAK_FUNC(sub_83C0E420);
PPC_FUNC_IMPL(__imp__sub_83C0E420) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6612
	ctx.r11.s64 = ctx.r8.s64 + 6612;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17340);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,29016
	ctx.r3.s64 = ctx.r6.s64 + 29016;
	// stw r10,6612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E450"))) PPC_WEAK_FUNC(sub_83C0E450);
PPC_FUNC_IMPL(__imp__sub_83C0E450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,29032
	ctx.r3.s64 = ctx.r11.s64 + 29032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E45C"))) PPC_WEAK_FUNC(sub_83C0E45C);
PPC_FUNC_IMPL(__imp__sub_83C0E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0E460"))) PPC_WEAK_FUNC(sub_83C0E460);
PPC_FUNC_IMPL(__imp__sub_83C0E460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0E46C"))) PPC_WEAK_FUNC(sub_83C0E46C);
PPC_FUNC_IMPL(__imp__sub_83C0E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

