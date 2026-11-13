#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE5E94"))) PPC_WEAK_FUNC(sub_83CE5E94);
PPC_FUNC_IMPL(__imp__sub_83CE5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5E98"))) PPC_WEAK_FUNC(sub_83CE5E98);
PPC_FUNC_IMPL(__imp__sub_83CE5E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6624
	ctx.r3.s64 = ctx.r11.s64 + 6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5EA4"))) PPC_WEAK_FUNC(sub_83CE5EA4);
PPC_FUNC_IMPL(__imp__sub_83CE5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5EA8"))) PPC_WEAK_FUNC(sub_83CE5EA8);
PPC_FUNC_IMPL(__imp__sub_83CE5EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6632
	ctx.r3.s64 = ctx.r11.s64 + 6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5EB4"))) PPC_WEAK_FUNC(sub_83CE5EB4);
PPC_FUNC_IMPL(__imp__sub_83CE5EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5EB8"))) PPC_WEAK_FUNC(sub_83CE5EB8);
PPC_FUNC_IMPL(__imp__sub_83CE5EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5EC4"))) PPC_WEAK_FUNC(sub_83CE5EC4);
PPC_FUNC_IMPL(__imp__sub_83CE5EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5EC8"))) PPC_WEAK_FUNC(sub_83CE5EC8);
PPC_FUNC_IMPL(__imp__sub_83CE5EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6648
	ctx.r3.s64 = ctx.r11.s64 + 6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5ED4"))) PPC_WEAK_FUNC(sub_83CE5ED4);
PPC_FUNC_IMPL(__imp__sub_83CE5ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5ED8"))) PPC_WEAK_FUNC(sub_83CE5ED8);
PPC_FUNC_IMPL(__imp__sub_83CE5ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6656
	ctx.r3.s64 = ctx.r11.s64 + 6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5EE4"))) PPC_WEAK_FUNC(sub_83CE5EE4);
PPC_FUNC_IMPL(__imp__sub_83CE5EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5EE8"))) PPC_WEAK_FUNC(sub_83CE5EE8);
PPC_FUNC_IMPL(__imp__sub_83CE5EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6664
	ctx.r3.s64 = ctx.r11.s64 + 6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5EF4"))) PPC_WEAK_FUNC(sub_83CE5EF4);
PPC_FUNC_IMPL(__imp__sub_83CE5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5EF8"))) PPC_WEAK_FUNC(sub_83CE5EF8);
PPC_FUNC_IMPL(__imp__sub_83CE5EF8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// bl 0x83523120
	ctx.lr = 0x83CE5F10;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6672
	ctx.r3.s64 = ctx.r10.s64 + 6672;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5F1C;
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

__attribute__((alias("__imp__sub_83CE5F2C"))) PPC_WEAK_FUNC(sub_83CE5F2C);
PPC_FUNC_IMPL(__imp__sub_83CE5F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5F30"))) PPC_WEAK_FUNC(sub_83CE5F30);
PPC_FUNC_IMPL(__imp__sub_83CE5F30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12576
	ctx.r7.s64 = ctx.r8.s64 + -12576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5F58"))) PPC_WEAK_FUNC(sub_83CE5F58);
PPC_FUNC_IMPL(__imp__sub_83CE5F58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,27212
	ctx.r6.s64 = ctx.r7.s64 + 27212;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12576);
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
	// std r9,27212(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE5FA0"))) PPC_WEAK_FUNC(sub_83CE5FA0);
PPC_FUNC_IMPL(__imp__sub_83CE5FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6688
	ctx.r3.s64 = ctx.r11.s64 + 6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE5FAC"))) PPC_WEAK_FUNC(sub_83CE5FAC);
PPC_FUNC_IMPL(__imp__sub_83CE5FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5FB0"))) PPC_WEAK_FUNC(sub_83CE5FB0);
PPC_FUNC_IMPL(__imp__sub_83CE5FB0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// bl 0x8259af80
	ctx.lr = 0x83CE5FC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6704
	ctx.r3.s64 = ctx.r10.s64 + 6704;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE5FD4;
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

__attribute__((alias("__imp__sub_83CE5FE4"))) PPC_WEAK_FUNC(sub_83CE5FE4);
PPC_FUNC_IMPL(__imp__sub_83CE5FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE5FE8"))) PPC_WEAK_FUNC(sub_83CE5FE8);
PPC_FUNC_IMPL(__imp__sub_83CE5FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12588
	ctx.r11.s64 = ctx.r8.s64 + -12588;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,27188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6696
	ctx.r3.s64 = ctx.r6.s64 + 6696;
	// stw r10,-12588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6018"))) PPC_WEAK_FUNC(sub_83CE6018);
PPC_FUNC_IMPL(__imp__sub_83CE6018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6712
	ctx.r3.s64 = ctx.r11.s64 + 6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6024"))) PPC_WEAK_FUNC(sub_83CE6024);
PPC_FUNC_IMPL(__imp__sub_83CE6024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6028"))) PPC_WEAK_FUNC(sub_83CE6028);
PPC_FUNC_IMPL(__imp__sub_83CE6028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6720
	ctx.r3.s64 = ctx.r11.s64 + 6720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6034"))) PPC_WEAK_FUNC(sub_83CE6034);
PPC_FUNC_IMPL(__imp__sub_83CE6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6038"))) PPC_WEAK_FUNC(sub_83CE6038);
PPC_FUNC_IMPL(__imp__sub_83CE6038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6728
	ctx.r3.s64 = ctx.r11.s64 + 6728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6044"))) PPC_WEAK_FUNC(sub_83CE6044);
PPC_FUNC_IMPL(__imp__sub_83CE6044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6048"))) PPC_WEAK_FUNC(sub_83CE6048);
PPC_FUNC_IMPL(__imp__sub_83CE6048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6736
	ctx.r3.s64 = ctx.r11.s64 + 6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6054"))) PPC_WEAK_FUNC(sub_83CE6054);
PPC_FUNC_IMPL(__imp__sub_83CE6054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6058"))) PPC_WEAK_FUNC(sub_83CE6058);
PPC_FUNC_IMPL(__imp__sub_83CE6058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6744
	ctx.r3.s64 = ctx.r11.s64 + 6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6064"))) PPC_WEAK_FUNC(sub_83CE6064);
PPC_FUNC_IMPL(__imp__sub_83CE6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6068"))) PPC_WEAK_FUNC(sub_83CE6068);
PPC_FUNC_IMPL(__imp__sub_83CE6068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6752
	ctx.r3.s64 = ctx.r11.s64 + 6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6074"))) PPC_WEAK_FUNC(sub_83CE6074);
PPC_FUNC_IMPL(__imp__sub_83CE6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6078"))) PPC_WEAK_FUNC(sub_83CE6078);
PPC_FUNC_IMPL(__imp__sub_83CE6078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6760
	ctx.r3.s64 = ctx.r11.s64 + 6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6084"))) PPC_WEAK_FUNC(sub_83CE6084);
PPC_FUNC_IMPL(__imp__sub_83CE6084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6088"))) PPC_WEAK_FUNC(sub_83CE6088);
PPC_FUNC_IMPL(__imp__sub_83CE6088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6768
	ctx.r3.s64 = ctx.r11.s64 + 6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6094"))) PPC_WEAK_FUNC(sub_83CE6094);
PPC_FUNC_IMPL(__imp__sub_83CE6094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6098"))) PPC_WEAK_FUNC(sub_83CE6098);
PPC_FUNC_IMPL(__imp__sub_83CE6098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6776
	ctx.r3.s64 = ctx.r11.s64 + 6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE60A4"))) PPC_WEAK_FUNC(sub_83CE60A4);
PPC_FUNC_IMPL(__imp__sub_83CE60A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE60A8"))) PPC_WEAK_FUNC(sub_83CE60A8);
PPC_FUNC_IMPL(__imp__sub_83CE60A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6784
	ctx.r3.s64 = ctx.r11.s64 + 6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE60B4"))) PPC_WEAK_FUNC(sub_83CE60B4);
PPC_FUNC_IMPL(__imp__sub_83CE60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE60B8"))) PPC_WEAK_FUNC(sub_83CE60B8);
PPC_FUNC_IMPL(__imp__sub_83CE60B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6792
	ctx.r3.s64 = ctx.r11.s64 + 6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE60C4"))) PPC_WEAK_FUNC(sub_83CE60C4);
PPC_FUNC_IMPL(__imp__sub_83CE60C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE60C8"))) PPC_WEAK_FUNC(sub_83CE60C8);
PPC_FUNC_IMPL(__imp__sub_83CE60C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6800
	ctx.r3.s64 = ctx.r11.s64 + 6800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE60D4"))) PPC_WEAK_FUNC(sub_83CE60D4);
PPC_FUNC_IMPL(__imp__sub_83CE60D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE60D8"))) PPC_WEAK_FUNC(sub_83CE60D8);
PPC_FUNC_IMPL(__imp__sub_83CE60D8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-12224
	ctx.r3.s64 = ctx.r11.s64 + -12224;
	// bl 0x83523120
	ctx.lr = 0x83CE60F0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6808
	ctx.r3.s64 = ctx.r10.s64 + 6808;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE60FC;
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

__attribute__((alias("__imp__sub_83CE610C"))) PPC_WEAK_FUNC(sub_83CE610C);
PPC_FUNC_IMPL(__imp__sub_83CE610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6110"))) PPC_WEAK_FUNC(sub_83CE6110);
PPC_FUNC_IMPL(__imp__sub_83CE6110) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12208
	ctx.r7.s64 = ctx.r8.s64 + -12208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12208(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6138"))) PPC_WEAK_FUNC(sub_83CE6138);
PPC_FUNC_IMPL(__imp__sub_83CE6138) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,27356
	ctx.r6.s64 = ctx.r7.s64 + 27356;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12208);
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
	// std r9,27356(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6180"))) PPC_WEAK_FUNC(sub_83CE6180);
PPC_FUNC_IMPL(__imp__sub_83CE6180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6824
	ctx.r3.s64 = ctx.r11.s64 + 6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE618C"))) PPC_WEAK_FUNC(sub_83CE618C);
PPC_FUNC_IMPL(__imp__sub_83CE618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6190"))) PPC_WEAK_FUNC(sub_83CE6190);
PPC_FUNC_IMPL(__imp__sub_83CE6190) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// bl 0x8259af80
	ctx.lr = 0x83CE61A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6840
	ctx.r3.s64 = ctx.r10.s64 + 6840;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE61B4;
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

__attribute__((alias("__imp__sub_83CE61C4"))) PPC_WEAK_FUNC(sub_83CE61C4);
PPC_FUNC_IMPL(__imp__sub_83CE61C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE61C8"))) PPC_WEAK_FUNC(sub_83CE61C8);
PPC_FUNC_IMPL(__imp__sub_83CE61C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12220
	ctx.r11.s64 = ctx.r8.s64 + -12220;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,27332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27332);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6832
	ctx.r3.s64 = ctx.r6.s64 + 6832;
	// stw r10,-12220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE61F8"))) PPC_WEAK_FUNC(sub_83CE61F8);
PPC_FUNC_IMPL(__imp__sub_83CE61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6848
	ctx.r3.s64 = ctx.r11.s64 + 6848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6204"))) PPC_WEAK_FUNC(sub_83CE6204);
PPC_FUNC_IMPL(__imp__sub_83CE6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6208"))) PPC_WEAK_FUNC(sub_83CE6208);
PPC_FUNC_IMPL(__imp__sub_83CE6208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6856
	ctx.r3.s64 = ctx.r11.s64 + 6856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6214"))) PPC_WEAK_FUNC(sub_83CE6214);
PPC_FUNC_IMPL(__imp__sub_83CE6214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6218"))) PPC_WEAK_FUNC(sub_83CE6218);
PPC_FUNC_IMPL(__imp__sub_83CE6218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6864
	ctx.r3.s64 = ctx.r11.s64 + 6864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6224"))) PPC_WEAK_FUNC(sub_83CE6224);
PPC_FUNC_IMPL(__imp__sub_83CE6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6228"))) PPC_WEAK_FUNC(sub_83CE6228);
PPC_FUNC_IMPL(__imp__sub_83CE6228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6872
	ctx.r3.s64 = ctx.r11.s64 + 6872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6234"))) PPC_WEAK_FUNC(sub_83CE6234);
PPC_FUNC_IMPL(__imp__sub_83CE6234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6238"))) PPC_WEAK_FUNC(sub_83CE6238);
PPC_FUNC_IMPL(__imp__sub_83CE6238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6880
	ctx.r3.s64 = ctx.r11.s64 + 6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6244"))) PPC_WEAK_FUNC(sub_83CE6244);
PPC_FUNC_IMPL(__imp__sub_83CE6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6248"))) PPC_WEAK_FUNC(sub_83CE6248);
PPC_FUNC_IMPL(__imp__sub_83CE6248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6888
	ctx.r3.s64 = ctx.r11.s64 + 6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6254"))) PPC_WEAK_FUNC(sub_83CE6254);
PPC_FUNC_IMPL(__imp__sub_83CE6254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6258"))) PPC_WEAK_FUNC(sub_83CE6258);
PPC_FUNC_IMPL(__imp__sub_83CE6258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6896
	ctx.r3.s64 = ctx.r11.s64 + 6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6264"))) PPC_WEAK_FUNC(sub_83CE6264);
PPC_FUNC_IMPL(__imp__sub_83CE6264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6268"))) PPC_WEAK_FUNC(sub_83CE6268);
PPC_FUNC_IMPL(__imp__sub_83CE6268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6904
	ctx.r3.s64 = ctx.r11.s64 + 6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6274"))) PPC_WEAK_FUNC(sub_83CE6274);
PPC_FUNC_IMPL(__imp__sub_83CE6274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6278"))) PPC_WEAK_FUNC(sub_83CE6278);
PPC_FUNC_IMPL(__imp__sub_83CE6278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6912
	ctx.r3.s64 = ctx.r11.s64 + 6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6284"))) PPC_WEAK_FUNC(sub_83CE6284);
PPC_FUNC_IMPL(__imp__sub_83CE6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6288"))) PPC_WEAK_FUNC(sub_83CE6288);
PPC_FUNC_IMPL(__imp__sub_83CE6288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6920
	ctx.r3.s64 = ctx.r11.s64 + 6920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6294"))) PPC_WEAK_FUNC(sub_83CE6294);
PPC_FUNC_IMPL(__imp__sub_83CE6294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6298"))) PPC_WEAK_FUNC(sub_83CE6298);
PPC_FUNC_IMPL(__imp__sub_83CE6298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6928
	ctx.r3.s64 = ctx.r11.s64 + 6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE62A4"))) PPC_WEAK_FUNC(sub_83CE62A4);
PPC_FUNC_IMPL(__imp__sub_83CE62A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE62A8"))) PPC_WEAK_FUNC(sub_83CE62A8);
PPC_FUNC_IMPL(__imp__sub_83CE62A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6936
	ctx.r3.s64 = ctx.r11.s64 + 6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE62B4"))) PPC_WEAK_FUNC(sub_83CE62B4);
PPC_FUNC_IMPL(__imp__sub_83CE62B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE62B8"))) PPC_WEAK_FUNC(sub_83CE62B8);
PPC_FUNC_IMPL(__imp__sub_83CE62B8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// bl 0x83523120
	ctx.lr = 0x83CE62D0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6944
	ctx.r3.s64 = ctx.r10.s64 + 6944;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE62DC;
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

__attribute__((alias("__imp__sub_83CE62EC"))) PPC_WEAK_FUNC(sub_83CE62EC);
PPC_FUNC_IMPL(__imp__sub_83CE62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE62F0"))) PPC_WEAK_FUNC(sub_83CE62F0);
PPC_FUNC_IMPL(__imp__sub_83CE62F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11840
	ctx.r7.s64 = ctx.r8.s64 + -11840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11840(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11840);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11840(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11840, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6318"))) PPC_WEAK_FUNC(sub_83CE6318);
PPC_FUNC_IMPL(__imp__sub_83CE6318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,27492
	ctx.r6.s64 = ctx.r7.s64 + 27492;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11840(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11840);
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
	// std r9,27492(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27492, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6360"))) PPC_WEAK_FUNC(sub_83CE6360);
PPC_FUNC_IMPL(__imp__sub_83CE6360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6960
	ctx.r3.s64 = ctx.r11.s64 + 6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE636C"))) PPC_WEAK_FUNC(sub_83CE636C);
PPC_FUNC_IMPL(__imp__sub_83CE636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6370"))) PPC_WEAK_FUNC(sub_83CE6370);
PPC_FUNC_IMPL(__imp__sub_83CE6370) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// bl 0x8259af80
	ctx.lr = 0x83CE6388;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,6976
	ctx.r3.s64 = ctx.r10.s64 + 6976;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6394;
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

__attribute__((alias("__imp__sub_83CE63A4"))) PPC_WEAK_FUNC(sub_83CE63A4);
PPC_FUNC_IMPL(__imp__sub_83CE63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE63A8"))) PPC_WEAK_FUNC(sub_83CE63A8);
PPC_FUNC_IMPL(__imp__sub_83CE63A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11852
	ctx.r11.s64 = ctx.r8.s64 + -11852;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,27468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27468);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6968
	ctx.r3.s64 = ctx.r6.s64 + 6968;
	// stw r10,-11852(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11852, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE63D8"))) PPC_WEAK_FUNC(sub_83CE63D8);
PPC_FUNC_IMPL(__imp__sub_83CE63D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6984
	ctx.r3.s64 = ctx.r11.s64 + 6984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE63E4"))) PPC_WEAK_FUNC(sub_83CE63E4);
PPC_FUNC_IMPL(__imp__sub_83CE63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE63E8"))) PPC_WEAK_FUNC(sub_83CE63E8);
PPC_FUNC_IMPL(__imp__sub_83CE63E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,6992
	ctx.r3.s64 = ctx.r11.s64 + 6992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE63F4"))) PPC_WEAK_FUNC(sub_83CE63F4);
PPC_FUNC_IMPL(__imp__sub_83CE63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE63F8"))) PPC_WEAK_FUNC(sub_83CE63F8);
PPC_FUNC_IMPL(__imp__sub_83CE63F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7000
	ctx.r3.s64 = ctx.r11.s64 + 7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6404"))) PPC_WEAK_FUNC(sub_83CE6404);
PPC_FUNC_IMPL(__imp__sub_83CE6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6408"))) PPC_WEAK_FUNC(sub_83CE6408);
PPC_FUNC_IMPL(__imp__sub_83CE6408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7008
	ctx.r3.s64 = ctx.r11.s64 + 7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6414"))) PPC_WEAK_FUNC(sub_83CE6414);
PPC_FUNC_IMPL(__imp__sub_83CE6414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6418"))) PPC_WEAK_FUNC(sub_83CE6418);
PPC_FUNC_IMPL(__imp__sub_83CE6418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7016
	ctx.r3.s64 = ctx.r11.s64 + 7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6424"))) PPC_WEAK_FUNC(sub_83CE6424);
PPC_FUNC_IMPL(__imp__sub_83CE6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6428"))) PPC_WEAK_FUNC(sub_83CE6428);
PPC_FUNC_IMPL(__imp__sub_83CE6428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7024
	ctx.r3.s64 = ctx.r11.s64 + 7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6434"))) PPC_WEAK_FUNC(sub_83CE6434);
PPC_FUNC_IMPL(__imp__sub_83CE6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6438"))) PPC_WEAK_FUNC(sub_83CE6438);
PPC_FUNC_IMPL(__imp__sub_83CE6438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7032
	ctx.r3.s64 = ctx.r11.s64 + 7032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6444"))) PPC_WEAK_FUNC(sub_83CE6444);
PPC_FUNC_IMPL(__imp__sub_83CE6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6448"))) PPC_WEAK_FUNC(sub_83CE6448);
PPC_FUNC_IMPL(__imp__sub_83CE6448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7040
	ctx.r3.s64 = ctx.r11.s64 + 7040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6454"))) PPC_WEAK_FUNC(sub_83CE6454);
PPC_FUNC_IMPL(__imp__sub_83CE6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6458"))) PPC_WEAK_FUNC(sub_83CE6458);
PPC_FUNC_IMPL(__imp__sub_83CE6458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7048
	ctx.r3.s64 = ctx.r11.s64 + 7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6464"))) PPC_WEAK_FUNC(sub_83CE6464);
PPC_FUNC_IMPL(__imp__sub_83CE6464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6468"))) PPC_WEAK_FUNC(sub_83CE6468);
PPC_FUNC_IMPL(__imp__sub_83CE6468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7056
	ctx.r3.s64 = ctx.r11.s64 + 7056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6474"))) PPC_WEAK_FUNC(sub_83CE6474);
PPC_FUNC_IMPL(__imp__sub_83CE6474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6478"))) PPC_WEAK_FUNC(sub_83CE6478);
PPC_FUNC_IMPL(__imp__sub_83CE6478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7064
	ctx.r3.s64 = ctx.r11.s64 + 7064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6484"))) PPC_WEAK_FUNC(sub_83CE6484);
PPC_FUNC_IMPL(__imp__sub_83CE6484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6488"))) PPC_WEAK_FUNC(sub_83CE6488);
PPC_FUNC_IMPL(__imp__sub_83CE6488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7072
	ctx.r3.s64 = ctx.r11.s64 + 7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6494"))) PPC_WEAK_FUNC(sub_83CE6494);
PPC_FUNC_IMPL(__imp__sub_83CE6494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6498"))) PPC_WEAK_FUNC(sub_83CE6498);
PPC_FUNC_IMPL(__imp__sub_83CE6498) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// bl 0x83523120
	ctx.lr = 0x83CE64B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7080
	ctx.r3.s64 = ctx.r10.s64 + 7080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE64BC;
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

__attribute__((alias("__imp__sub_83CE64CC"))) PPC_WEAK_FUNC(sub_83CE64CC);
PPC_FUNC_IMPL(__imp__sub_83CE64CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE64D0"))) PPC_WEAK_FUNC(sub_83CE64D0);
PPC_FUNC_IMPL(__imp__sub_83CE64D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11472
	ctx.r7.s64 = ctx.r8.s64 + -11472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11472(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE64F8"))) PPC_WEAK_FUNC(sub_83CE64F8);
PPC_FUNC_IMPL(__imp__sub_83CE64F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,27664
	ctx.r6.s64 = ctx.r7.s64 + 27664;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11472);
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
	// std r9,27664(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27664, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6540"))) PPC_WEAK_FUNC(sub_83CE6540);
PPC_FUNC_IMPL(__imp__sub_83CE6540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7096
	ctx.r3.s64 = ctx.r11.s64 + 7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE654C"))) PPC_WEAK_FUNC(sub_83CE654C);
PPC_FUNC_IMPL(__imp__sub_83CE654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6550"))) PPC_WEAK_FUNC(sub_83CE6550);
PPC_FUNC_IMPL(__imp__sub_83CE6550) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-11464
	ctx.r3.s64 = ctx.r11.s64 + -11464;
	// bl 0x8259af80
	ctx.lr = 0x83CE6568;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7112
	ctx.r3.s64 = ctx.r10.s64 + 7112;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6574;
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

__attribute__((alias("__imp__sub_83CE6584"))) PPC_WEAK_FUNC(sub_83CE6584);
PPC_FUNC_IMPL(__imp__sub_83CE6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6588"))) PPC_WEAK_FUNC(sub_83CE6588);
PPC_FUNC_IMPL(__imp__sub_83CE6588) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11484
	ctx.r11.s64 = ctx.r8.s64 + -11484;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,27640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7104
	ctx.r3.s64 = ctx.r6.s64 + 7104;
	// stw r10,-11484(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11484, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE65B8"))) PPC_WEAK_FUNC(sub_83CE65B8);
PPC_FUNC_IMPL(__imp__sub_83CE65B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7120
	ctx.r3.s64 = ctx.r11.s64 + 7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE65C4"))) PPC_WEAK_FUNC(sub_83CE65C4);
PPC_FUNC_IMPL(__imp__sub_83CE65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE65C8"))) PPC_WEAK_FUNC(sub_83CE65C8);
PPC_FUNC_IMPL(__imp__sub_83CE65C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7128
	ctx.r3.s64 = ctx.r11.s64 + 7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE65D4"))) PPC_WEAK_FUNC(sub_83CE65D4);
PPC_FUNC_IMPL(__imp__sub_83CE65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE65D8"))) PPC_WEAK_FUNC(sub_83CE65D8);
PPC_FUNC_IMPL(__imp__sub_83CE65D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7136
	ctx.r3.s64 = ctx.r11.s64 + 7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE65E4"))) PPC_WEAK_FUNC(sub_83CE65E4);
PPC_FUNC_IMPL(__imp__sub_83CE65E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE65E8"))) PPC_WEAK_FUNC(sub_83CE65E8);
PPC_FUNC_IMPL(__imp__sub_83CE65E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7144
	ctx.r3.s64 = ctx.r11.s64 + 7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE65F4"))) PPC_WEAK_FUNC(sub_83CE65F4);
PPC_FUNC_IMPL(__imp__sub_83CE65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE65F8"))) PPC_WEAK_FUNC(sub_83CE65F8);
PPC_FUNC_IMPL(__imp__sub_83CE65F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7152
	ctx.r3.s64 = ctx.r11.s64 + 7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6604"))) PPC_WEAK_FUNC(sub_83CE6604);
PPC_FUNC_IMPL(__imp__sub_83CE6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6608"))) PPC_WEAK_FUNC(sub_83CE6608);
PPC_FUNC_IMPL(__imp__sub_83CE6608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6614"))) PPC_WEAK_FUNC(sub_83CE6614);
PPC_FUNC_IMPL(__imp__sub_83CE6614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6618"))) PPC_WEAK_FUNC(sub_83CE6618);
PPC_FUNC_IMPL(__imp__sub_83CE6618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6624"))) PPC_WEAK_FUNC(sub_83CE6624);
PPC_FUNC_IMPL(__imp__sub_83CE6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6628"))) PPC_WEAK_FUNC(sub_83CE6628);
PPC_FUNC_IMPL(__imp__sub_83CE6628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7176
	ctx.r3.s64 = ctx.r11.s64 + 7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6634"))) PPC_WEAK_FUNC(sub_83CE6634);
PPC_FUNC_IMPL(__imp__sub_83CE6634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6638"))) PPC_WEAK_FUNC(sub_83CE6638);
PPC_FUNC_IMPL(__imp__sub_83CE6638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6644"))) PPC_WEAK_FUNC(sub_83CE6644);
PPC_FUNC_IMPL(__imp__sub_83CE6644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6648"))) PPC_WEAK_FUNC(sub_83CE6648);
PPC_FUNC_IMPL(__imp__sub_83CE6648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7192
	ctx.r3.s64 = ctx.r11.s64 + 7192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6654"))) PPC_WEAK_FUNC(sub_83CE6654);
PPC_FUNC_IMPL(__imp__sub_83CE6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6658"))) PPC_WEAK_FUNC(sub_83CE6658);
PPC_FUNC_IMPL(__imp__sub_83CE6658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7200
	ctx.r3.s64 = ctx.r11.s64 + 7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6664"))) PPC_WEAK_FUNC(sub_83CE6664);
PPC_FUNC_IMPL(__imp__sub_83CE6664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6668"))) PPC_WEAK_FUNC(sub_83CE6668);
PPC_FUNC_IMPL(__imp__sub_83CE6668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7208
	ctx.r3.s64 = ctx.r11.s64 + 7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6674"))) PPC_WEAK_FUNC(sub_83CE6674);
PPC_FUNC_IMPL(__imp__sub_83CE6674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6678"))) PPC_WEAK_FUNC(sub_83CE6678);
PPC_FUNC_IMPL(__imp__sub_83CE6678) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// bl 0x83523120
	ctx.lr = 0x83CE6690;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7216
	ctx.r3.s64 = ctx.r10.s64 + 7216;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE669C;
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

__attribute__((alias("__imp__sub_83CE66AC"))) PPC_WEAK_FUNC(sub_83CE66AC);
PPC_FUNC_IMPL(__imp__sub_83CE66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE66B0"))) PPC_WEAK_FUNC(sub_83CE66B0);
PPC_FUNC_IMPL(__imp__sub_83CE66B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11104
	ctx.r7.s64 = ctx.r8.s64 + -11104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE66D8"))) PPC_WEAK_FUNC(sub_83CE66D8);
PPC_FUNC_IMPL(__imp__sub_83CE66D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,27824
	ctx.r6.s64 = ctx.r7.s64 + 27824;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27752(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27752);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11104);
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
	// std r9,27824(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27824, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6720"))) PPC_WEAK_FUNC(sub_83CE6720);
PPC_FUNC_IMPL(__imp__sub_83CE6720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7232
	ctx.r3.s64 = ctx.r11.s64 + 7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE672C"))) PPC_WEAK_FUNC(sub_83CE672C);
PPC_FUNC_IMPL(__imp__sub_83CE672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6730"))) PPC_WEAK_FUNC(sub_83CE6730);
PPC_FUNC_IMPL(__imp__sub_83CE6730) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// bl 0x8259af80
	ctx.lr = 0x83CE6748;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7248
	ctx.r3.s64 = ctx.r10.s64 + 7248;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6754;
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

__attribute__((alias("__imp__sub_83CE6764"))) PPC_WEAK_FUNC(sub_83CE6764);
PPC_FUNC_IMPL(__imp__sub_83CE6764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6768"))) PPC_WEAK_FUNC(sub_83CE6768);
PPC_FUNC_IMPL(__imp__sub_83CE6768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11116
	ctx.r11.s64 = ctx.r8.s64 + -11116;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,27800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7240
	ctx.r3.s64 = ctx.r6.s64 + 7240;
	// stw r10,-11116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11116, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6798"))) PPC_WEAK_FUNC(sub_83CE6798);
PPC_FUNC_IMPL(__imp__sub_83CE6798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7256
	ctx.r3.s64 = ctx.r11.s64 + 7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE67A4"))) PPC_WEAK_FUNC(sub_83CE67A4);
PPC_FUNC_IMPL(__imp__sub_83CE67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE67A8"))) PPC_WEAK_FUNC(sub_83CE67A8);
PPC_FUNC_IMPL(__imp__sub_83CE67A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7264
	ctx.r3.s64 = ctx.r11.s64 + 7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE67B4"))) PPC_WEAK_FUNC(sub_83CE67B4);
PPC_FUNC_IMPL(__imp__sub_83CE67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE67B8"))) PPC_WEAK_FUNC(sub_83CE67B8);
PPC_FUNC_IMPL(__imp__sub_83CE67B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7272
	ctx.r3.s64 = ctx.r11.s64 + 7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE67C4"))) PPC_WEAK_FUNC(sub_83CE67C4);
PPC_FUNC_IMPL(__imp__sub_83CE67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE67C8"))) PPC_WEAK_FUNC(sub_83CE67C8);
PPC_FUNC_IMPL(__imp__sub_83CE67C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7280
	ctx.r3.s64 = ctx.r11.s64 + 7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE67D4"))) PPC_WEAK_FUNC(sub_83CE67D4);
PPC_FUNC_IMPL(__imp__sub_83CE67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE67D8"))) PPC_WEAK_FUNC(sub_83CE67D8);
PPC_FUNC_IMPL(__imp__sub_83CE67D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7288
	ctx.r3.s64 = ctx.r11.s64 + 7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE67E4"))) PPC_WEAK_FUNC(sub_83CE67E4);
PPC_FUNC_IMPL(__imp__sub_83CE67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE67E8"))) PPC_WEAK_FUNC(sub_83CE67E8);
PPC_FUNC_IMPL(__imp__sub_83CE67E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7296
	ctx.r3.s64 = ctx.r11.s64 + 7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE67F4"))) PPC_WEAK_FUNC(sub_83CE67F4);
PPC_FUNC_IMPL(__imp__sub_83CE67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE67F8"))) PPC_WEAK_FUNC(sub_83CE67F8);
PPC_FUNC_IMPL(__imp__sub_83CE67F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7304
	ctx.r3.s64 = ctx.r11.s64 + 7304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6804"))) PPC_WEAK_FUNC(sub_83CE6804);
PPC_FUNC_IMPL(__imp__sub_83CE6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6808"))) PPC_WEAK_FUNC(sub_83CE6808);
PPC_FUNC_IMPL(__imp__sub_83CE6808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6814"))) PPC_WEAK_FUNC(sub_83CE6814);
PPC_FUNC_IMPL(__imp__sub_83CE6814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6818"))) PPC_WEAK_FUNC(sub_83CE6818);
PPC_FUNC_IMPL(__imp__sub_83CE6818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7320
	ctx.r3.s64 = ctx.r11.s64 + 7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6824"))) PPC_WEAK_FUNC(sub_83CE6824);
PPC_FUNC_IMPL(__imp__sub_83CE6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6828"))) PPC_WEAK_FUNC(sub_83CE6828);
PPC_FUNC_IMPL(__imp__sub_83CE6828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7328
	ctx.r3.s64 = ctx.r11.s64 + 7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6834"))) PPC_WEAK_FUNC(sub_83CE6834);
PPC_FUNC_IMPL(__imp__sub_83CE6834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6838"))) PPC_WEAK_FUNC(sub_83CE6838);
PPC_FUNC_IMPL(__imp__sub_83CE6838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7336
	ctx.r3.s64 = ctx.r11.s64 + 7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6844"))) PPC_WEAK_FUNC(sub_83CE6844);
PPC_FUNC_IMPL(__imp__sub_83CE6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6848"))) PPC_WEAK_FUNC(sub_83CE6848);
PPC_FUNC_IMPL(__imp__sub_83CE6848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6854"))) PPC_WEAK_FUNC(sub_83CE6854);
PPC_FUNC_IMPL(__imp__sub_83CE6854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6858"))) PPC_WEAK_FUNC(sub_83CE6858);
PPC_FUNC_IMPL(__imp__sub_83CE6858) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// bl 0x83523120
	ctx.lr = 0x83CE6870;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7352
	ctx.r3.s64 = ctx.r10.s64 + 7352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE687C;
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

__attribute__((alias("__imp__sub_83CE688C"))) PPC_WEAK_FUNC(sub_83CE688C);
PPC_FUNC_IMPL(__imp__sub_83CE688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6890"))) PPC_WEAK_FUNC(sub_83CE6890);
PPC_FUNC_IMPL(__imp__sub_83CE6890) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10736
	ctx.r7.s64 = ctx.r8.s64 + -10736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE68B8"))) PPC_WEAK_FUNC(sub_83CE68B8);
PPC_FUNC_IMPL(__imp__sub_83CE68B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,28024
	ctx.r6.s64 = ctx.r7.s64 + 28024;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10736);
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
	// std r9,28024(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28024, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6900"))) PPC_WEAK_FUNC(sub_83CE6900);
PPC_FUNC_IMPL(__imp__sub_83CE6900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7368
	ctx.r3.s64 = ctx.r11.s64 + 7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE690C"))) PPC_WEAK_FUNC(sub_83CE690C);
PPC_FUNC_IMPL(__imp__sub_83CE690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6910"))) PPC_WEAK_FUNC(sub_83CE6910);
PPC_FUNC_IMPL(__imp__sub_83CE6910) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// bl 0x8259af80
	ctx.lr = 0x83CE6928;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7384
	ctx.r3.s64 = ctx.r10.s64 + 7384;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6934;
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

__attribute__((alias("__imp__sub_83CE6944"))) PPC_WEAK_FUNC(sub_83CE6944);
PPC_FUNC_IMPL(__imp__sub_83CE6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6948"))) PPC_WEAK_FUNC(sub_83CE6948);
PPC_FUNC_IMPL(__imp__sub_83CE6948) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10748
	ctx.r11.s64 = ctx.r8.s64 + -10748;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,28000(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28000);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7376
	ctx.r3.s64 = ctx.r6.s64 + 7376;
	// stw r10,-10748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10748, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6978"))) PPC_WEAK_FUNC(sub_83CE6978);
PPC_FUNC_IMPL(__imp__sub_83CE6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6984"))) PPC_WEAK_FUNC(sub_83CE6984);
PPC_FUNC_IMPL(__imp__sub_83CE6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6988"))) PPC_WEAK_FUNC(sub_83CE6988);
PPC_FUNC_IMPL(__imp__sub_83CE6988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7400
	ctx.r3.s64 = ctx.r11.s64 + 7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6994"))) PPC_WEAK_FUNC(sub_83CE6994);
PPC_FUNC_IMPL(__imp__sub_83CE6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6998"))) PPC_WEAK_FUNC(sub_83CE6998);
PPC_FUNC_IMPL(__imp__sub_83CE6998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7408
	ctx.r3.s64 = ctx.r11.s64 + 7408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE69A4"))) PPC_WEAK_FUNC(sub_83CE69A4);
PPC_FUNC_IMPL(__imp__sub_83CE69A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE69A8"))) PPC_WEAK_FUNC(sub_83CE69A8);
PPC_FUNC_IMPL(__imp__sub_83CE69A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7416
	ctx.r3.s64 = ctx.r11.s64 + 7416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE69B4"))) PPC_WEAK_FUNC(sub_83CE69B4);
PPC_FUNC_IMPL(__imp__sub_83CE69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE69B8"))) PPC_WEAK_FUNC(sub_83CE69B8);
PPC_FUNC_IMPL(__imp__sub_83CE69B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE69C4"))) PPC_WEAK_FUNC(sub_83CE69C4);
PPC_FUNC_IMPL(__imp__sub_83CE69C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE69C8"))) PPC_WEAK_FUNC(sub_83CE69C8);
PPC_FUNC_IMPL(__imp__sub_83CE69C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7432
	ctx.r3.s64 = ctx.r11.s64 + 7432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE69D4"))) PPC_WEAK_FUNC(sub_83CE69D4);
PPC_FUNC_IMPL(__imp__sub_83CE69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE69D8"))) PPC_WEAK_FUNC(sub_83CE69D8);
PPC_FUNC_IMPL(__imp__sub_83CE69D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7440
	ctx.r3.s64 = ctx.r11.s64 + 7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE69E4"))) PPC_WEAK_FUNC(sub_83CE69E4);
PPC_FUNC_IMPL(__imp__sub_83CE69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE69E8"))) PPC_WEAK_FUNC(sub_83CE69E8);
PPC_FUNC_IMPL(__imp__sub_83CE69E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7448
	ctx.r3.s64 = ctx.r11.s64 + 7448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE69F4"))) PPC_WEAK_FUNC(sub_83CE69F4);
PPC_FUNC_IMPL(__imp__sub_83CE69F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE69F8"))) PPC_WEAK_FUNC(sub_83CE69F8);
PPC_FUNC_IMPL(__imp__sub_83CE69F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7456
	ctx.r3.s64 = ctx.r11.s64 + 7456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6A04"))) PPC_WEAK_FUNC(sub_83CE6A04);
PPC_FUNC_IMPL(__imp__sub_83CE6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6A08"))) PPC_WEAK_FUNC(sub_83CE6A08);
PPC_FUNC_IMPL(__imp__sub_83CE6A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7464
	ctx.r3.s64 = ctx.r11.s64 + 7464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6A14"))) PPC_WEAK_FUNC(sub_83CE6A14);
PPC_FUNC_IMPL(__imp__sub_83CE6A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6A18"))) PPC_WEAK_FUNC(sub_83CE6A18);
PPC_FUNC_IMPL(__imp__sub_83CE6A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7472
	ctx.r3.s64 = ctx.r11.s64 + 7472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6A24"))) PPC_WEAK_FUNC(sub_83CE6A24);
PPC_FUNC_IMPL(__imp__sub_83CE6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6A28"))) PPC_WEAK_FUNC(sub_83CE6A28);
PPC_FUNC_IMPL(__imp__sub_83CE6A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7480
	ctx.r3.s64 = ctx.r11.s64 + 7480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6A34"))) PPC_WEAK_FUNC(sub_83CE6A34);
PPC_FUNC_IMPL(__imp__sub_83CE6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6A38"))) PPC_WEAK_FUNC(sub_83CE6A38);
PPC_FUNC_IMPL(__imp__sub_83CE6A38) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// bl 0x83523120
	ctx.lr = 0x83CE6A50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7488
	ctx.r3.s64 = ctx.r10.s64 + 7488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6A5C;
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

__attribute__((alias("__imp__sub_83CE6A6C"))) PPC_WEAK_FUNC(sub_83CE6A6C);
PPC_FUNC_IMPL(__imp__sub_83CE6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6A70"))) PPC_WEAK_FUNC(sub_83CE6A70);
PPC_FUNC_IMPL(__imp__sub_83CE6A70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10368
	ctx.r7.s64 = ctx.r8.s64 + -10368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10368(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6A98"))) PPC_WEAK_FUNC(sub_83CE6A98);
PPC_FUNC_IMPL(__imp__sub_83CE6A98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,28168
	ctx.r6.s64 = ctx.r7.s64 + 28168;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28096(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28096);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10368);
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
	// std r9,28168(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28168, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6AE0"))) PPC_WEAK_FUNC(sub_83CE6AE0);
PPC_FUNC_IMPL(__imp__sub_83CE6AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6AEC"))) PPC_WEAK_FUNC(sub_83CE6AEC);
PPC_FUNC_IMPL(__imp__sub_83CE6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6AF0"))) PPC_WEAK_FUNC(sub_83CE6AF0);
PPC_FUNC_IMPL(__imp__sub_83CE6AF0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// bl 0x8259af80
	ctx.lr = 0x83CE6B08;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7520
	ctx.r3.s64 = ctx.r10.s64 + 7520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6B14;
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

__attribute__((alias("__imp__sub_83CE6B24"))) PPC_WEAK_FUNC(sub_83CE6B24);
PPC_FUNC_IMPL(__imp__sub_83CE6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6B28"))) PPC_WEAK_FUNC(sub_83CE6B28);
PPC_FUNC_IMPL(__imp__sub_83CE6B28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10380
	ctx.r11.s64 = ctx.r8.s64 + -10380;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,28144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28144);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7512
	ctx.r3.s64 = ctx.r6.s64 + 7512;
	// stw r10,-10380(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10380, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6B58"))) PPC_WEAK_FUNC(sub_83CE6B58);
PPC_FUNC_IMPL(__imp__sub_83CE6B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7528
	ctx.r3.s64 = ctx.r11.s64 + 7528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6B64"))) PPC_WEAK_FUNC(sub_83CE6B64);
PPC_FUNC_IMPL(__imp__sub_83CE6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6B68"))) PPC_WEAK_FUNC(sub_83CE6B68);
PPC_FUNC_IMPL(__imp__sub_83CE6B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7536
	ctx.r3.s64 = ctx.r11.s64 + 7536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6B74"))) PPC_WEAK_FUNC(sub_83CE6B74);
PPC_FUNC_IMPL(__imp__sub_83CE6B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6B78"))) PPC_WEAK_FUNC(sub_83CE6B78);
PPC_FUNC_IMPL(__imp__sub_83CE6B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7544
	ctx.r3.s64 = ctx.r11.s64 + 7544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6B84"))) PPC_WEAK_FUNC(sub_83CE6B84);
PPC_FUNC_IMPL(__imp__sub_83CE6B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6B88"))) PPC_WEAK_FUNC(sub_83CE6B88);
PPC_FUNC_IMPL(__imp__sub_83CE6B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6B94"))) PPC_WEAK_FUNC(sub_83CE6B94);
PPC_FUNC_IMPL(__imp__sub_83CE6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6B98"))) PPC_WEAK_FUNC(sub_83CE6B98);
PPC_FUNC_IMPL(__imp__sub_83CE6B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6BA4"))) PPC_WEAK_FUNC(sub_83CE6BA4);
PPC_FUNC_IMPL(__imp__sub_83CE6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6BA8"))) PPC_WEAK_FUNC(sub_83CE6BA8);
PPC_FUNC_IMPL(__imp__sub_83CE6BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7568
	ctx.r3.s64 = ctx.r11.s64 + 7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6BB4"))) PPC_WEAK_FUNC(sub_83CE6BB4);
PPC_FUNC_IMPL(__imp__sub_83CE6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6BB8"))) PPC_WEAK_FUNC(sub_83CE6BB8);
PPC_FUNC_IMPL(__imp__sub_83CE6BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7576
	ctx.r3.s64 = ctx.r11.s64 + 7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6BC4"))) PPC_WEAK_FUNC(sub_83CE6BC4);
PPC_FUNC_IMPL(__imp__sub_83CE6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6BC8"))) PPC_WEAK_FUNC(sub_83CE6BC8);
PPC_FUNC_IMPL(__imp__sub_83CE6BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6BD4"))) PPC_WEAK_FUNC(sub_83CE6BD4);
PPC_FUNC_IMPL(__imp__sub_83CE6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6BD8"))) PPC_WEAK_FUNC(sub_83CE6BD8);
PPC_FUNC_IMPL(__imp__sub_83CE6BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6BE4"))) PPC_WEAK_FUNC(sub_83CE6BE4);
PPC_FUNC_IMPL(__imp__sub_83CE6BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6BE8"))) PPC_WEAK_FUNC(sub_83CE6BE8);
PPC_FUNC_IMPL(__imp__sub_83CE6BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6BF4"))) PPC_WEAK_FUNC(sub_83CE6BF4);
PPC_FUNC_IMPL(__imp__sub_83CE6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6BF8"))) PPC_WEAK_FUNC(sub_83CE6BF8);
PPC_FUNC_IMPL(__imp__sub_83CE6BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7608
	ctx.r3.s64 = ctx.r11.s64 + 7608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6C04"))) PPC_WEAK_FUNC(sub_83CE6C04);
PPC_FUNC_IMPL(__imp__sub_83CE6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6C08"))) PPC_WEAK_FUNC(sub_83CE6C08);
PPC_FUNC_IMPL(__imp__sub_83CE6C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7616
	ctx.r3.s64 = ctx.r11.s64 + 7616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6C14"))) PPC_WEAK_FUNC(sub_83CE6C14);
PPC_FUNC_IMPL(__imp__sub_83CE6C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6C18"))) PPC_WEAK_FUNC(sub_83CE6C18);
PPC_FUNC_IMPL(__imp__sub_83CE6C18) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-10016
	ctx.r3.s64 = ctx.r11.s64 + -10016;
	// bl 0x83523120
	ctx.lr = 0x83CE6C30;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7624
	ctx.r3.s64 = ctx.r10.s64 + 7624;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6C3C;
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

__attribute__((alias("__imp__sub_83CE6C4C"))) PPC_WEAK_FUNC(sub_83CE6C4C);
PPC_FUNC_IMPL(__imp__sub_83CE6C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6C50"))) PPC_WEAK_FUNC(sub_83CE6C50);
PPC_FUNC_IMPL(__imp__sub_83CE6C50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10000
	ctx.r7.s64 = ctx.r8.s64 + -10000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10000(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6C78"))) PPC_WEAK_FUNC(sub_83CE6C78);
PPC_FUNC_IMPL(__imp__sub_83CE6C78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,28312
	ctx.r6.s64 = ctx.r7.s64 + 28312;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28240(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28240);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10000);
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
	// std r9,28312(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28312, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE6CC0"))) PPC_WEAK_FUNC(sub_83CE6CC0);
PPC_FUNC_IMPL(__imp__sub_83CE6CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7640
	ctx.r3.s64 = ctx.r11.s64 + 7640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6CCC"))) PPC_WEAK_FUNC(sub_83CE6CCC);
PPC_FUNC_IMPL(__imp__sub_83CE6CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6CD0"))) PPC_WEAK_FUNC(sub_83CE6CD0);
PPC_FUNC_IMPL(__imp__sub_83CE6CD0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-9992
	ctx.r3.s64 = ctx.r11.s64 + -9992;
	// bl 0x8259af80
	ctx.lr = 0x83CE6CE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,7656
	ctx.r3.s64 = ctx.r10.s64 + 7656;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE6CF4;
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

__attribute__((alias("__imp__sub_83CE6D04"))) PPC_WEAK_FUNC(sub_83CE6D04);
PPC_FUNC_IMPL(__imp__sub_83CE6D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6D08"))) PPC_WEAK_FUNC(sub_83CE6D08);
PPC_FUNC_IMPL(__imp__sub_83CE6D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10012
	ctx.r11.s64 = ctx.r8.s64 + -10012;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,28288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28288);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7648
	ctx.r3.s64 = ctx.r6.s64 + 7648;
	// stw r10,-10012(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10012, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6D38"))) PPC_WEAK_FUNC(sub_83CE6D38);
PPC_FUNC_IMPL(__imp__sub_83CE6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7664
	ctx.r3.s64 = ctx.r11.s64 + 7664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE6D44"))) PPC_WEAK_FUNC(sub_83CE6D44);
PPC_FUNC_IMPL(__imp__sub_83CE6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE6D48"))) PPC_WEAK_FUNC(sub_83CE6D48);
PPC_FUNC_IMPL(__imp__sub_83CE6D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,7672
	ctx.r3.s64 = ctx.r11.s64 + 7672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

